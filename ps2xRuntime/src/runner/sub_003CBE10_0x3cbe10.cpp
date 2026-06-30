#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CBE10
// Address: 0x3cbe10 - 0x3cc850
void sub_003CBE10_0x3cbe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CBE10_0x3cbe10");
#endif

    switch (ctx->pc) {
        case 0x3cbe10u: goto label_3cbe10;
        case 0x3cbe14u: goto label_3cbe14;
        case 0x3cbe18u: goto label_3cbe18;
        case 0x3cbe1cu: goto label_3cbe1c;
        case 0x3cbe20u: goto label_3cbe20;
        case 0x3cbe24u: goto label_3cbe24;
        case 0x3cbe28u: goto label_3cbe28;
        case 0x3cbe2cu: goto label_3cbe2c;
        case 0x3cbe30u: goto label_3cbe30;
        case 0x3cbe34u: goto label_3cbe34;
        case 0x3cbe38u: goto label_3cbe38;
        case 0x3cbe3cu: goto label_3cbe3c;
        case 0x3cbe40u: goto label_3cbe40;
        case 0x3cbe44u: goto label_3cbe44;
        case 0x3cbe48u: goto label_3cbe48;
        case 0x3cbe4cu: goto label_3cbe4c;
        case 0x3cbe50u: goto label_3cbe50;
        case 0x3cbe54u: goto label_3cbe54;
        case 0x3cbe58u: goto label_3cbe58;
        case 0x3cbe5cu: goto label_3cbe5c;
        case 0x3cbe60u: goto label_3cbe60;
        case 0x3cbe64u: goto label_3cbe64;
        case 0x3cbe68u: goto label_3cbe68;
        case 0x3cbe6cu: goto label_3cbe6c;
        case 0x3cbe70u: goto label_3cbe70;
        case 0x3cbe74u: goto label_3cbe74;
        case 0x3cbe78u: goto label_3cbe78;
        case 0x3cbe7cu: goto label_3cbe7c;
        case 0x3cbe80u: goto label_3cbe80;
        case 0x3cbe84u: goto label_3cbe84;
        case 0x3cbe88u: goto label_3cbe88;
        case 0x3cbe8cu: goto label_3cbe8c;
        case 0x3cbe90u: goto label_3cbe90;
        case 0x3cbe94u: goto label_3cbe94;
        case 0x3cbe98u: goto label_3cbe98;
        case 0x3cbe9cu: goto label_3cbe9c;
        case 0x3cbea0u: goto label_3cbea0;
        case 0x3cbea4u: goto label_3cbea4;
        case 0x3cbea8u: goto label_3cbea8;
        case 0x3cbeacu: goto label_3cbeac;
        case 0x3cbeb0u: goto label_3cbeb0;
        case 0x3cbeb4u: goto label_3cbeb4;
        case 0x3cbeb8u: goto label_3cbeb8;
        case 0x3cbebcu: goto label_3cbebc;
        case 0x3cbec0u: goto label_3cbec0;
        case 0x3cbec4u: goto label_3cbec4;
        case 0x3cbec8u: goto label_3cbec8;
        case 0x3cbeccu: goto label_3cbecc;
        case 0x3cbed0u: goto label_3cbed0;
        case 0x3cbed4u: goto label_3cbed4;
        case 0x3cbed8u: goto label_3cbed8;
        case 0x3cbedcu: goto label_3cbedc;
        case 0x3cbee0u: goto label_3cbee0;
        case 0x3cbee4u: goto label_3cbee4;
        case 0x3cbee8u: goto label_3cbee8;
        case 0x3cbeecu: goto label_3cbeec;
        case 0x3cbef0u: goto label_3cbef0;
        case 0x3cbef4u: goto label_3cbef4;
        case 0x3cbef8u: goto label_3cbef8;
        case 0x3cbefcu: goto label_3cbefc;
        case 0x3cbf00u: goto label_3cbf00;
        case 0x3cbf04u: goto label_3cbf04;
        case 0x3cbf08u: goto label_3cbf08;
        case 0x3cbf0cu: goto label_3cbf0c;
        case 0x3cbf10u: goto label_3cbf10;
        case 0x3cbf14u: goto label_3cbf14;
        case 0x3cbf18u: goto label_3cbf18;
        case 0x3cbf1cu: goto label_3cbf1c;
        case 0x3cbf20u: goto label_3cbf20;
        case 0x3cbf24u: goto label_3cbf24;
        case 0x3cbf28u: goto label_3cbf28;
        case 0x3cbf2cu: goto label_3cbf2c;
        case 0x3cbf30u: goto label_3cbf30;
        case 0x3cbf34u: goto label_3cbf34;
        case 0x3cbf38u: goto label_3cbf38;
        case 0x3cbf3cu: goto label_3cbf3c;
        case 0x3cbf40u: goto label_3cbf40;
        case 0x3cbf44u: goto label_3cbf44;
        case 0x3cbf48u: goto label_3cbf48;
        case 0x3cbf4cu: goto label_3cbf4c;
        case 0x3cbf50u: goto label_3cbf50;
        case 0x3cbf54u: goto label_3cbf54;
        case 0x3cbf58u: goto label_3cbf58;
        case 0x3cbf5cu: goto label_3cbf5c;
        case 0x3cbf60u: goto label_3cbf60;
        case 0x3cbf64u: goto label_3cbf64;
        case 0x3cbf68u: goto label_3cbf68;
        case 0x3cbf6cu: goto label_3cbf6c;
        case 0x3cbf70u: goto label_3cbf70;
        case 0x3cbf74u: goto label_3cbf74;
        case 0x3cbf78u: goto label_3cbf78;
        case 0x3cbf7cu: goto label_3cbf7c;
        case 0x3cbf80u: goto label_3cbf80;
        case 0x3cbf84u: goto label_3cbf84;
        case 0x3cbf88u: goto label_3cbf88;
        case 0x3cbf8cu: goto label_3cbf8c;
        case 0x3cbf90u: goto label_3cbf90;
        case 0x3cbf94u: goto label_3cbf94;
        case 0x3cbf98u: goto label_3cbf98;
        case 0x3cbf9cu: goto label_3cbf9c;
        case 0x3cbfa0u: goto label_3cbfa0;
        case 0x3cbfa4u: goto label_3cbfa4;
        case 0x3cbfa8u: goto label_3cbfa8;
        case 0x3cbfacu: goto label_3cbfac;
        case 0x3cbfb0u: goto label_3cbfb0;
        case 0x3cbfb4u: goto label_3cbfb4;
        case 0x3cbfb8u: goto label_3cbfb8;
        case 0x3cbfbcu: goto label_3cbfbc;
        case 0x3cbfc0u: goto label_3cbfc0;
        case 0x3cbfc4u: goto label_3cbfc4;
        case 0x3cbfc8u: goto label_3cbfc8;
        case 0x3cbfccu: goto label_3cbfcc;
        case 0x3cbfd0u: goto label_3cbfd0;
        case 0x3cbfd4u: goto label_3cbfd4;
        case 0x3cbfd8u: goto label_3cbfd8;
        case 0x3cbfdcu: goto label_3cbfdc;
        case 0x3cbfe0u: goto label_3cbfe0;
        case 0x3cbfe4u: goto label_3cbfe4;
        case 0x3cbfe8u: goto label_3cbfe8;
        case 0x3cbfecu: goto label_3cbfec;
        case 0x3cbff0u: goto label_3cbff0;
        case 0x3cbff4u: goto label_3cbff4;
        case 0x3cbff8u: goto label_3cbff8;
        case 0x3cbffcu: goto label_3cbffc;
        case 0x3cc000u: goto label_3cc000;
        case 0x3cc004u: goto label_3cc004;
        case 0x3cc008u: goto label_3cc008;
        case 0x3cc00cu: goto label_3cc00c;
        case 0x3cc010u: goto label_3cc010;
        case 0x3cc014u: goto label_3cc014;
        case 0x3cc018u: goto label_3cc018;
        case 0x3cc01cu: goto label_3cc01c;
        case 0x3cc020u: goto label_3cc020;
        case 0x3cc024u: goto label_3cc024;
        case 0x3cc028u: goto label_3cc028;
        case 0x3cc02cu: goto label_3cc02c;
        case 0x3cc030u: goto label_3cc030;
        case 0x3cc034u: goto label_3cc034;
        case 0x3cc038u: goto label_3cc038;
        case 0x3cc03cu: goto label_3cc03c;
        case 0x3cc040u: goto label_3cc040;
        case 0x3cc044u: goto label_3cc044;
        case 0x3cc048u: goto label_3cc048;
        case 0x3cc04cu: goto label_3cc04c;
        case 0x3cc050u: goto label_3cc050;
        case 0x3cc054u: goto label_3cc054;
        case 0x3cc058u: goto label_3cc058;
        case 0x3cc05cu: goto label_3cc05c;
        case 0x3cc060u: goto label_3cc060;
        case 0x3cc064u: goto label_3cc064;
        case 0x3cc068u: goto label_3cc068;
        case 0x3cc06cu: goto label_3cc06c;
        case 0x3cc070u: goto label_3cc070;
        case 0x3cc074u: goto label_3cc074;
        case 0x3cc078u: goto label_3cc078;
        case 0x3cc07cu: goto label_3cc07c;
        case 0x3cc080u: goto label_3cc080;
        case 0x3cc084u: goto label_3cc084;
        case 0x3cc088u: goto label_3cc088;
        case 0x3cc08cu: goto label_3cc08c;
        case 0x3cc090u: goto label_3cc090;
        case 0x3cc094u: goto label_3cc094;
        case 0x3cc098u: goto label_3cc098;
        case 0x3cc09cu: goto label_3cc09c;
        case 0x3cc0a0u: goto label_3cc0a0;
        case 0x3cc0a4u: goto label_3cc0a4;
        case 0x3cc0a8u: goto label_3cc0a8;
        case 0x3cc0acu: goto label_3cc0ac;
        case 0x3cc0b0u: goto label_3cc0b0;
        case 0x3cc0b4u: goto label_3cc0b4;
        case 0x3cc0b8u: goto label_3cc0b8;
        case 0x3cc0bcu: goto label_3cc0bc;
        case 0x3cc0c0u: goto label_3cc0c0;
        case 0x3cc0c4u: goto label_3cc0c4;
        case 0x3cc0c8u: goto label_3cc0c8;
        case 0x3cc0ccu: goto label_3cc0cc;
        case 0x3cc0d0u: goto label_3cc0d0;
        case 0x3cc0d4u: goto label_3cc0d4;
        case 0x3cc0d8u: goto label_3cc0d8;
        case 0x3cc0dcu: goto label_3cc0dc;
        case 0x3cc0e0u: goto label_3cc0e0;
        case 0x3cc0e4u: goto label_3cc0e4;
        case 0x3cc0e8u: goto label_3cc0e8;
        case 0x3cc0ecu: goto label_3cc0ec;
        case 0x3cc0f0u: goto label_3cc0f0;
        case 0x3cc0f4u: goto label_3cc0f4;
        case 0x3cc0f8u: goto label_3cc0f8;
        case 0x3cc0fcu: goto label_3cc0fc;
        case 0x3cc100u: goto label_3cc100;
        case 0x3cc104u: goto label_3cc104;
        case 0x3cc108u: goto label_3cc108;
        case 0x3cc10cu: goto label_3cc10c;
        case 0x3cc110u: goto label_3cc110;
        case 0x3cc114u: goto label_3cc114;
        case 0x3cc118u: goto label_3cc118;
        case 0x3cc11cu: goto label_3cc11c;
        case 0x3cc120u: goto label_3cc120;
        case 0x3cc124u: goto label_3cc124;
        case 0x3cc128u: goto label_3cc128;
        case 0x3cc12cu: goto label_3cc12c;
        case 0x3cc130u: goto label_3cc130;
        case 0x3cc134u: goto label_3cc134;
        case 0x3cc138u: goto label_3cc138;
        case 0x3cc13cu: goto label_3cc13c;
        case 0x3cc140u: goto label_3cc140;
        case 0x3cc144u: goto label_3cc144;
        case 0x3cc148u: goto label_3cc148;
        case 0x3cc14cu: goto label_3cc14c;
        case 0x3cc150u: goto label_3cc150;
        case 0x3cc154u: goto label_3cc154;
        case 0x3cc158u: goto label_3cc158;
        case 0x3cc15cu: goto label_3cc15c;
        case 0x3cc160u: goto label_3cc160;
        case 0x3cc164u: goto label_3cc164;
        case 0x3cc168u: goto label_3cc168;
        case 0x3cc16cu: goto label_3cc16c;
        case 0x3cc170u: goto label_3cc170;
        case 0x3cc174u: goto label_3cc174;
        case 0x3cc178u: goto label_3cc178;
        case 0x3cc17cu: goto label_3cc17c;
        case 0x3cc180u: goto label_3cc180;
        case 0x3cc184u: goto label_3cc184;
        case 0x3cc188u: goto label_3cc188;
        case 0x3cc18cu: goto label_3cc18c;
        case 0x3cc190u: goto label_3cc190;
        case 0x3cc194u: goto label_3cc194;
        case 0x3cc198u: goto label_3cc198;
        case 0x3cc19cu: goto label_3cc19c;
        case 0x3cc1a0u: goto label_3cc1a0;
        case 0x3cc1a4u: goto label_3cc1a4;
        case 0x3cc1a8u: goto label_3cc1a8;
        case 0x3cc1acu: goto label_3cc1ac;
        case 0x3cc1b0u: goto label_3cc1b0;
        case 0x3cc1b4u: goto label_3cc1b4;
        case 0x3cc1b8u: goto label_3cc1b8;
        case 0x3cc1bcu: goto label_3cc1bc;
        case 0x3cc1c0u: goto label_3cc1c0;
        case 0x3cc1c4u: goto label_3cc1c4;
        case 0x3cc1c8u: goto label_3cc1c8;
        case 0x3cc1ccu: goto label_3cc1cc;
        case 0x3cc1d0u: goto label_3cc1d0;
        case 0x3cc1d4u: goto label_3cc1d4;
        case 0x3cc1d8u: goto label_3cc1d8;
        case 0x3cc1dcu: goto label_3cc1dc;
        case 0x3cc1e0u: goto label_3cc1e0;
        case 0x3cc1e4u: goto label_3cc1e4;
        case 0x3cc1e8u: goto label_3cc1e8;
        case 0x3cc1ecu: goto label_3cc1ec;
        case 0x3cc1f0u: goto label_3cc1f0;
        case 0x3cc1f4u: goto label_3cc1f4;
        case 0x3cc1f8u: goto label_3cc1f8;
        case 0x3cc1fcu: goto label_3cc1fc;
        case 0x3cc200u: goto label_3cc200;
        case 0x3cc204u: goto label_3cc204;
        case 0x3cc208u: goto label_3cc208;
        case 0x3cc20cu: goto label_3cc20c;
        case 0x3cc210u: goto label_3cc210;
        case 0x3cc214u: goto label_3cc214;
        case 0x3cc218u: goto label_3cc218;
        case 0x3cc21cu: goto label_3cc21c;
        case 0x3cc220u: goto label_3cc220;
        case 0x3cc224u: goto label_3cc224;
        case 0x3cc228u: goto label_3cc228;
        case 0x3cc22cu: goto label_3cc22c;
        case 0x3cc230u: goto label_3cc230;
        case 0x3cc234u: goto label_3cc234;
        case 0x3cc238u: goto label_3cc238;
        case 0x3cc23cu: goto label_3cc23c;
        case 0x3cc240u: goto label_3cc240;
        case 0x3cc244u: goto label_3cc244;
        case 0x3cc248u: goto label_3cc248;
        case 0x3cc24cu: goto label_3cc24c;
        case 0x3cc250u: goto label_3cc250;
        case 0x3cc254u: goto label_3cc254;
        case 0x3cc258u: goto label_3cc258;
        case 0x3cc25cu: goto label_3cc25c;
        case 0x3cc260u: goto label_3cc260;
        case 0x3cc264u: goto label_3cc264;
        case 0x3cc268u: goto label_3cc268;
        case 0x3cc26cu: goto label_3cc26c;
        case 0x3cc270u: goto label_3cc270;
        case 0x3cc274u: goto label_3cc274;
        case 0x3cc278u: goto label_3cc278;
        case 0x3cc27cu: goto label_3cc27c;
        case 0x3cc280u: goto label_3cc280;
        case 0x3cc284u: goto label_3cc284;
        case 0x3cc288u: goto label_3cc288;
        case 0x3cc28cu: goto label_3cc28c;
        case 0x3cc290u: goto label_3cc290;
        case 0x3cc294u: goto label_3cc294;
        case 0x3cc298u: goto label_3cc298;
        case 0x3cc29cu: goto label_3cc29c;
        case 0x3cc2a0u: goto label_3cc2a0;
        case 0x3cc2a4u: goto label_3cc2a4;
        case 0x3cc2a8u: goto label_3cc2a8;
        case 0x3cc2acu: goto label_3cc2ac;
        case 0x3cc2b0u: goto label_3cc2b0;
        case 0x3cc2b4u: goto label_3cc2b4;
        case 0x3cc2b8u: goto label_3cc2b8;
        case 0x3cc2bcu: goto label_3cc2bc;
        case 0x3cc2c0u: goto label_3cc2c0;
        case 0x3cc2c4u: goto label_3cc2c4;
        case 0x3cc2c8u: goto label_3cc2c8;
        case 0x3cc2ccu: goto label_3cc2cc;
        case 0x3cc2d0u: goto label_3cc2d0;
        case 0x3cc2d4u: goto label_3cc2d4;
        case 0x3cc2d8u: goto label_3cc2d8;
        case 0x3cc2dcu: goto label_3cc2dc;
        case 0x3cc2e0u: goto label_3cc2e0;
        case 0x3cc2e4u: goto label_3cc2e4;
        case 0x3cc2e8u: goto label_3cc2e8;
        case 0x3cc2ecu: goto label_3cc2ec;
        case 0x3cc2f0u: goto label_3cc2f0;
        case 0x3cc2f4u: goto label_3cc2f4;
        case 0x3cc2f8u: goto label_3cc2f8;
        case 0x3cc2fcu: goto label_3cc2fc;
        case 0x3cc300u: goto label_3cc300;
        case 0x3cc304u: goto label_3cc304;
        case 0x3cc308u: goto label_3cc308;
        case 0x3cc30cu: goto label_3cc30c;
        case 0x3cc310u: goto label_3cc310;
        case 0x3cc314u: goto label_3cc314;
        case 0x3cc318u: goto label_3cc318;
        case 0x3cc31cu: goto label_3cc31c;
        case 0x3cc320u: goto label_3cc320;
        case 0x3cc324u: goto label_3cc324;
        case 0x3cc328u: goto label_3cc328;
        case 0x3cc32cu: goto label_3cc32c;
        case 0x3cc330u: goto label_3cc330;
        case 0x3cc334u: goto label_3cc334;
        case 0x3cc338u: goto label_3cc338;
        case 0x3cc33cu: goto label_3cc33c;
        case 0x3cc340u: goto label_3cc340;
        case 0x3cc344u: goto label_3cc344;
        case 0x3cc348u: goto label_3cc348;
        case 0x3cc34cu: goto label_3cc34c;
        case 0x3cc350u: goto label_3cc350;
        case 0x3cc354u: goto label_3cc354;
        case 0x3cc358u: goto label_3cc358;
        case 0x3cc35cu: goto label_3cc35c;
        case 0x3cc360u: goto label_3cc360;
        case 0x3cc364u: goto label_3cc364;
        case 0x3cc368u: goto label_3cc368;
        case 0x3cc36cu: goto label_3cc36c;
        case 0x3cc370u: goto label_3cc370;
        case 0x3cc374u: goto label_3cc374;
        case 0x3cc378u: goto label_3cc378;
        case 0x3cc37cu: goto label_3cc37c;
        case 0x3cc380u: goto label_3cc380;
        case 0x3cc384u: goto label_3cc384;
        case 0x3cc388u: goto label_3cc388;
        case 0x3cc38cu: goto label_3cc38c;
        case 0x3cc390u: goto label_3cc390;
        case 0x3cc394u: goto label_3cc394;
        case 0x3cc398u: goto label_3cc398;
        case 0x3cc39cu: goto label_3cc39c;
        case 0x3cc3a0u: goto label_3cc3a0;
        case 0x3cc3a4u: goto label_3cc3a4;
        case 0x3cc3a8u: goto label_3cc3a8;
        case 0x3cc3acu: goto label_3cc3ac;
        case 0x3cc3b0u: goto label_3cc3b0;
        case 0x3cc3b4u: goto label_3cc3b4;
        case 0x3cc3b8u: goto label_3cc3b8;
        case 0x3cc3bcu: goto label_3cc3bc;
        case 0x3cc3c0u: goto label_3cc3c0;
        case 0x3cc3c4u: goto label_3cc3c4;
        case 0x3cc3c8u: goto label_3cc3c8;
        case 0x3cc3ccu: goto label_3cc3cc;
        case 0x3cc3d0u: goto label_3cc3d0;
        case 0x3cc3d4u: goto label_3cc3d4;
        case 0x3cc3d8u: goto label_3cc3d8;
        case 0x3cc3dcu: goto label_3cc3dc;
        case 0x3cc3e0u: goto label_3cc3e0;
        case 0x3cc3e4u: goto label_3cc3e4;
        case 0x3cc3e8u: goto label_3cc3e8;
        case 0x3cc3ecu: goto label_3cc3ec;
        case 0x3cc3f0u: goto label_3cc3f0;
        case 0x3cc3f4u: goto label_3cc3f4;
        case 0x3cc3f8u: goto label_3cc3f8;
        case 0x3cc3fcu: goto label_3cc3fc;
        case 0x3cc400u: goto label_3cc400;
        case 0x3cc404u: goto label_3cc404;
        case 0x3cc408u: goto label_3cc408;
        case 0x3cc40cu: goto label_3cc40c;
        case 0x3cc410u: goto label_3cc410;
        case 0x3cc414u: goto label_3cc414;
        case 0x3cc418u: goto label_3cc418;
        case 0x3cc41cu: goto label_3cc41c;
        case 0x3cc420u: goto label_3cc420;
        case 0x3cc424u: goto label_3cc424;
        case 0x3cc428u: goto label_3cc428;
        case 0x3cc42cu: goto label_3cc42c;
        case 0x3cc430u: goto label_3cc430;
        case 0x3cc434u: goto label_3cc434;
        case 0x3cc438u: goto label_3cc438;
        case 0x3cc43cu: goto label_3cc43c;
        case 0x3cc440u: goto label_3cc440;
        case 0x3cc444u: goto label_3cc444;
        case 0x3cc448u: goto label_3cc448;
        case 0x3cc44cu: goto label_3cc44c;
        case 0x3cc450u: goto label_3cc450;
        case 0x3cc454u: goto label_3cc454;
        case 0x3cc458u: goto label_3cc458;
        case 0x3cc45cu: goto label_3cc45c;
        case 0x3cc460u: goto label_3cc460;
        case 0x3cc464u: goto label_3cc464;
        case 0x3cc468u: goto label_3cc468;
        case 0x3cc46cu: goto label_3cc46c;
        case 0x3cc470u: goto label_3cc470;
        case 0x3cc474u: goto label_3cc474;
        case 0x3cc478u: goto label_3cc478;
        case 0x3cc47cu: goto label_3cc47c;
        case 0x3cc480u: goto label_3cc480;
        case 0x3cc484u: goto label_3cc484;
        case 0x3cc488u: goto label_3cc488;
        case 0x3cc48cu: goto label_3cc48c;
        case 0x3cc490u: goto label_3cc490;
        case 0x3cc494u: goto label_3cc494;
        case 0x3cc498u: goto label_3cc498;
        case 0x3cc49cu: goto label_3cc49c;
        case 0x3cc4a0u: goto label_3cc4a0;
        case 0x3cc4a4u: goto label_3cc4a4;
        case 0x3cc4a8u: goto label_3cc4a8;
        case 0x3cc4acu: goto label_3cc4ac;
        case 0x3cc4b0u: goto label_3cc4b0;
        case 0x3cc4b4u: goto label_3cc4b4;
        case 0x3cc4b8u: goto label_3cc4b8;
        case 0x3cc4bcu: goto label_3cc4bc;
        case 0x3cc4c0u: goto label_3cc4c0;
        case 0x3cc4c4u: goto label_3cc4c4;
        case 0x3cc4c8u: goto label_3cc4c8;
        case 0x3cc4ccu: goto label_3cc4cc;
        case 0x3cc4d0u: goto label_3cc4d0;
        case 0x3cc4d4u: goto label_3cc4d4;
        case 0x3cc4d8u: goto label_3cc4d8;
        case 0x3cc4dcu: goto label_3cc4dc;
        case 0x3cc4e0u: goto label_3cc4e0;
        case 0x3cc4e4u: goto label_3cc4e4;
        case 0x3cc4e8u: goto label_3cc4e8;
        case 0x3cc4ecu: goto label_3cc4ec;
        case 0x3cc4f0u: goto label_3cc4f0;
        case 0x3cc4f4u: goto label_3cc4f4;
        case 0x3cc4f8u: goto label_3cc4f8;
        case 0x3cc4fcu: goto label_3cc4fc;
        case 0x3cc500u: goto label_3cc500;
        case 0x3cc504u: goto label_3cc504;
        case 0x3cc508u: goto label_3cc508;
        case 0x3cc50cu: goto label_3cc50c;
        case 0x3cc510u: goto label_3cc510;
        case 0x3cc514u: goto label_3cc514;
        case 0x3cc518u: goto label_3cc518;
        case 0x3cc51cu: goto label_3cc51c;
        case 0x3cc520u: goto label_3cc520;
        case 0x3cc524u: goto label_3cc524;
        case 0x3cc528u: goto label_3cc528;
        case 0x3cc52cu: goto label_3cc52c;
        case 0x3cc530u: goto label_3cc530;
        case 0x3cc534u: goto label_3cc534;
        case 0x3cc538u: goto label_3cc538;
        case 0x3cc53cu: goto label_3cc53c;
        case 0x3cc540u: goto label_3cc540;
        case 0x3cc544u: goto label_3cc544;
        case 0x3cc548u: goto label_3cc548;
        case 0x3cc54cu: goto label_3cc54c;
        case 0x3cc550u: goto label_3cc550;
        case 0x3cc554u: goto label_3cc554;
        case 0x3cc558u: goto label_3cc558;
        case 0x3cc55cu: goto label_3cc55c;
        case 0x3cc560u: goto label_3cc560;
        case 0x3cc564u: goto label_3cc564;
        case 0x3cc568u: goto label_3cc568;
        case 0x3cc56cu: goto label_3cc56c;
        case 0x3cc570u: goto label_3cc570;
        case 0x3cc574u: goto label_3cc574;
        case 0x3cc578u: goto label_3cc578;
        case 0x3cc57cu: goto label_3cc57c;
        case 0x3cc580u: goto label_3cc580;
        case 0x3cc584u: goto label_3cc584;
        case 0x3cc588u: goto label_3cc588;
        case 0x3cc58cu: goto label_3cc58c;
        case 0x3cc590u: goto label_3cc590;
        case 0x3cc594u: goto label_3cc594;
        case 0x3cc598u: goto label_3cc598;
        case 0x3cc59cu: goto label_3cc59c;
        case 0x3cc5a0u: goto label_3cc5a0;
        case 0x3cc5a4u: goto label_3cc5a4;
        case 0x3cc5a8u: goto label_3cc5a8;
        case 0x3cc5acu: goto label_3cc5ac;
        case 0x3cc5b0u: goto label_3cc5b0;
        case 0x3cc5b4u: goto label_3cc5b4;
        case 0x3cc5b8u: goto label_3cc5b8;
        case 0x3cc5bcu: goto label_3cc5bc;
        case 0x3cc5c0u: goto label_3cc5c0;
        case 0x3cc5c4u: goto label_3cc5c4;
        case 0x3cc5c8u: goto label_3cc5c8;
        case 0x3cc5ccu: goto label_3cc5cc;
        case 0x3cc5d0u: goto label_3cc5d0;
        case 0x3cc5d4u: goto label_3cc5d4;
        case 0x3cc5d8u: goto label_3cc5d8;
        case 0x3cc5dcu: goto label_3cc5dc;
        case 0x3cc5e0u: goto label_3cc5e0;
        case 0x3cc5e4u: goto label_3cc5e4;
        case 0x3cc5e8u: goto label_3cc5e8;
        case 0x3cc5ecu: goto label_3cc5ec;
        case 0x3cc5f0u: goto label_3cc5f0;
        case 0x3cc5f4u: goto label_3cc5f4;
        case 0x3cc5f8u: goto label_3cc5f8;
        case 0x3cc5fcu: goto label_3cc5fc;
        case 0x3cc600u: goto label_3cc600;
        case 0x3cc604u: goto label_3cc604;
        case 0x3cc608u: goto label_3cc608;
        case 0x3cc60cu: goto label_3cc60c;
        case 0x3cc610u: goto label_3cc610;
        case 0x3cc614u: goto label_3cc614;
        case 0x3cc618u: goto label_3cc618;
        case 0x3cc61cu: goto label_3cc61c;
        case 0x3cc620u: goto label_3cc620;
        case 0x3cc624u: goto label_3cc624;
        case 0x3cc628u: goto label_3cc628;
        case 0x3cc62cu: goto label_3cc62c;
        case 0x3cc630u: goto label_3cc630;
        case 0x3cc634u: goto label_3cc634;
        case 0x3cc638u: goto label_3cc638;
        case 0x3cc63cu: goto label_3cc63c;
        case 0x3cc640u: goto label_3cc640;
        case 0x3cc644u: goto label_3cc644;
        case 0x3cc648u: goto label_3cc648;
        case 0x3cc64cu: goto label_3cc64c;
        case 0x3cc650u: goto label_3cc650;
        case 0x3cc654u: goto label_3cc654;
        case 0x3cc658u: goto label_3cc658;
        case 0x3cc65cu: goto label_3cc65c;
        case 0x3cc660u: goto label_3cc660;
        case 0x3cc664u: goto label_3cc664;
        case 0x3cc668u: goto label_3cc668;
        case 0x3cc66cu: goto label_3cc66c;
        case 0x3cc670u: goto label_3cc670;
        case 0x3cc674u: goto label_3cc674;
        case 0x3cc678u: goto label_3cc678;
        case 0x3cc67cu: goto label_3cc67c;
        case 0x3cc680u: goto label_3cc680;
        case 0x3cc684u: goto label_3cc684;
        case 0x3cc688u: goto label_3cc688;
        case 0x3cc68cu: goto label_3cc68c;
        case 0x3cc690u: goto label_3cc690;
        case 0x3cc694u: goto label_3cc694;
        case 0x3cc698u: goto label_3cc698;
        case 0x3cc69cu: goto label_3cc69c;
        case 0x3cc6a0u: goto label_3cc6a0;
        case 0x3cc6a4u: goto label_3cc6a4;
        case 0x3cc6a8u: goto label_3cc6a8;
        case 0x3cc6acu: goto label_3cc6ac;
        case 0x3cc6b0u: goto label_3cc6b0;
        case 0x3cc6b4u: goto label_3cc6b4;
        case 0x3cc6b8u: goto label_3cc6b8;
        case 0x3cc6bcu: goto label_3cc6bc;
        case 0x3cc6c0u: goto label_3cc6c0;
        case 0x3cc6c4u: goto label_3cc6c4;
        case 0x3cc6c8u: goto label_3cc6c8;
        case 0x3cc6ccu: goto label_3cc6cc;
        case 0x3cc6d0u: goto label_3cc6d0;
        case 0x3cc6d4u: goto label_3cc6d4;
        case 0x3cc6d8u: goto label_3cc6d8;
        case 0x3cc6dcu: goto label_3cc6dc;
        case 0x3cc6e0u: goto label_3cc6e0;
        case 0x3cc6e4u: goto label_3cc6e4;
        case 0x3cc6e8u: goto label_3cc6e8;
        case 0x3cc6ecu: goto label_3cc6ec;
        case 0x3cc6f0u: goto label_3cc6f0;
        case 0x3cc6f4u: goto label_3cc6f4;
        case 0x3cc6f8u: goto label_3cc6f8;
        case 0x3cc6fcu: goto label_3cc6fc;
        case 0x3cc700u: goto label_3cc700;
        case 0x3cc704u: goto label_3cc704;
        case 0x3cc708u: goto label_3cc708;
        case 0x3cc70cu: goto label_3cc70c;
        case 0x3cc710u: goto label_3cc710;
        case 0x3cc714u: goto label_3cc714;
        case 0x3cc718u: goto label_3cc718;
        case 0x3cc71cu: goto label_3cc71c;
        case 0x3cc720u: goto label_3cc720;
        case 0x3cc724u: goto label_3cc724;
        case 0x3cc728u: goto label_3cc728;
        case 0x3cc72cu: goto label_3cc72c;
        case 0x3cc730u: goto label_3cc730;
        case 0x3cc734u: goto label_3cc734;
        case 0x3cc738u: goto label_3cc738;
        case 0x3cc73cu: goto label_3cc73c;
        case 0x3cc740u: goto label_3cc740;
        case 0x3cc744u: goto label_3cc744;
        case 0x3cc748u: goto label_3cc748;
        case 0x3cc74cu: goto label_3cc74c;
        case 0x3cc750u: goto label_3cc750;
        case 0x3cc754u: goto label_3cc754;
        case 0x3cc758u: goto label_3cc758;
        case 0x3cc75cu: goto label_3cc75c;
        case 0x3cc760u: goto label_3cc760;
        case 0x3cc764u: goto label_3cc764;
        case 0x3cc768u: goto label_3cc768;
        case 0x3cc76cu: goto label_3cc76c;
        case 0x3cc770u: goto label_3cc770;
        case 0x3cc774u: goto label_3cc774;
        case 0x3cc778u: goto label_3cc778;
        case 0x3cc77cu: goto label_3cc77c;
        case 0x3cc780u: goto label_3cc780;
        case 0x3cc784u: goto label_3cc784;
        case 0x3cc788u: goto label_3cc788;
        case 0x3cc78cu: goto label_3cc78c;
        case 0x3cc790u: goto label_3cc790;
        case 0x3cc794u: goto label_3cc794;
        case 0x3cc798u: goto label_3cc798;
        case 0x3cc79cu: goto label_3cc79c;
        case 0x3cc7a0u: goto label_3cc7a0;
        case 0x3cc7a4u: goto label_3cc7a4;
        case 0x3cc7a8u: goto label_3cc7a8;
        case 0x3cc7acu: goto label_3cc7ac;
        case 0x3cc7b0u: goto label_3cc7b0;
        case 0x3cc7b4u: goto label_3cc7b4;
        case 0x3cc7b8u: goto label_3cc7b8;
        case 0x3cc7bcu: goto label_3cc7bc;
        case 0x3cc7c0u: goto label_3cc7c0;
        case 0x3cc7c4u: goto label_3cc7c4;
        case 0x3cc7c8u: goto label_3cc7c8;
        case 0x3cc7ccu: goto label_3cc7cc;
        case 0x3cc7d0u: goto label_3cc7d0;
        case 0x3cc7d4u: goto label_3cc7d4;
        case 0x3cc7d8u: goto label_3cc7d8;
        case 0x3cc7dcu: goto label_3cc7dc;
        case 0x3cc7e0u: goto label_3cc7e0;
        case 0x3cc7e4u: goto label_3cc7e4;
        case 0x3cc7e8u: goto label_3cc7e8;
        case 0x3cc7ecu: goto label_3cc7ec;
        case 0x3cc7f0u: goto label_3cc7f0;
        case 0x3cc7f4u: goto label_3cc7f4;
        case 0x3cc7f8u: goto label_3cc7f8;
        case 0x3cc7fcu: goto label_3cc7fc;
        case 0x3cc800u: goto label_3cc800;
        case 0x3cc804u: goto label_3cc804;
        case 0x3cc808u: goto label_3cc808;
        case 0x3cc80cu: goto label_3cc80c;
        case 0x3cc810u: goto label_3cc810;
        case 0x3cc814u: goto label_3cc814;
        case 0x3cc818u: goto label_3cc818;
        case 0x3cc81cu: goto label_3cc81c;
        case 0x3cc820u: goto label_3cc820;
        case 0x3cc824u: goto label_3cc824;
        case 0x3cc828u: goto label_3cc828;
        case 0x3cc82cu: goto label_3cc82c;
        case 0x3cc830u: goto label_3cc830;
        case 0x3cc834u: goto label_3cc834;
        case 0x3cc838u: goto label_3cc838;
        case 0x3cc83cu: goto label_3cc83c;
        case 0x3cc840u: goto label_3cc840;
        case 0x3cc844u: goto label_3cc844;
        case 0x3cc848u: goto label_3cc848;
        case 0x3cc84cu: goto label_3cc84c;
        default: break;
    }

    ctx->pc = 0x3cbe10u;

label_3cbe10:
    // 0x3cbe10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3cbe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3cbe14:
    // 0x3cbe14: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3cbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3cbe18:
    // 0x3cbe18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3cbe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3cbe1c:
    // 0x3cbe1c: 0x24a565c0  addiu       $a1, $a1, 0x65C0
    ctx->pc = 0x3cbe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
label_3cbe20:
    // 0x3cbe20: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3cbe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3cbe24:
    // 0x3cbe24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cbe28:
    // 0x3cbe28: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3cbe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3cbe2c:
    // 0x3cbe2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3cbe2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe30:
    // 0x3cbe30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3cbe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3cbe34:
    // 0x3cbe34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3cbe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3cbe38:
    // 0x3cbe38: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3cbe38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3cbe3c:
    // 0x3cbe3c: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x3cbe3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3cbe40:
    // 0x3cbe40: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3cbe40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3cbe44:
    // 0x3cbe44: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x3cbe44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3cbe48:
    // 0x3cbe48: 0x2631a890  addiu       $s1, $s1, -0x5770
    ctx->pc = 0x3cbe48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944912));
label_3cbe4c:
    // 0x3cbe4c: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x3cbe4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3cbe50:
    // 0x3cbe50: 0x26102108  addiu       $s0, $s0, 0x2108
    ctx->pc = 0x3cbe50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8456));
label_3cbe54:
    // 0x3cbe54: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3cbe54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3cbe58:
    // 0x3cbe58: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x3cbe58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3cbe5c:
    // 0x3cbe5c: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x3cbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3cbe60:
    // 0x3cbe60: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x3cbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3cbe64:
    // 0x3cbe64: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x3cbe64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_3cbe68:
    // 0x3cbe68: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x3cbe68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3cbe6c:
    // 0x3cbe6c: 0x90420116  lbu         $v0, 0x116($v0)
    ctx->pc = 0x3cbe6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_3cbe70:
    // 0x3cbe70: 0x8486006e  lh          $a2, 0x6E($a0)
    ctx->pc = 0x3cbe70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 110)));
label_3cbe74:
    // 0x3cbe74: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cbe74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3cbe78:
    // 0x3cbe78: 0x24a5a950  addiu       $a1, $a1, -0x56B0
    ctx->pc = 0x3cbe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945104));
label_3cbe7c:
    // 0x3cbe7c: 0x8d0b0008  lw          $t3, 0x8($t0)
    ctx->pc = 0x3cbe7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3cbe80:
    // 0x3cbe80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3cbe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbe84:
    // 0x3cbe84: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x3cbe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_3cbe88:
    // 0x3cbe88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cbe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cbe8c:
    // 0x3cbe8c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3cbe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3cbe90:
    // 0x3cbe90: 0x8c6c65b8  lw          $t4, 0x65B8($v1)
    ctx->pc = 0x3cbe90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26040)));
label_3cbe94:
    // 0x3cbe94: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3cbe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3cbe98:
    // 0x3cbe98: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3cbe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbe9c:
    // 0x3cbe9c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3cbe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbea0:
    // 0x3cbea0: 0xc584001c  lwc1        $f4, 0x1C($t4)
    ctx->pc = 0x3cbea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbea4:
    // 0x3cbea4: 0x85870028  lh          $a3, 0x28($t4)
    ctx->pc = 0x3cbea4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 40)));
label_3cbea8:
    // 0x3cbea8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3cbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3cbeac:
    // 0x3cbeac: 0xc5820018  lwc1        $f2, 0x18($t4)
    ctx->pc = 0x3cbeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbeb0:
    // 0x3cbeb0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3cbeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3cbeb4:
    // 0x3cbeb4: 0x46041dc2  mul.s       $f23, $f3, $f4
    ctx->pc = 0x3cbeb4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbeb8:
    // 0x3cbeb8: 0x9189002a  lbu         $t1, 0x2A($t4)
    ctx->pc = 0x3cbeb8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 42)));
label_3cbebc:
    // 0x3cbebc: 0x675021  addu        $t2, $v1, $a3
    ctx->pc = 0x3cbebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3cbec0:
    // 0x3cbec0: 0x85870020  lh          $a3, 0x20($t4)
    ctx->pc = 0x3cbec0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 32)));
label_3cbec4:
    // 0x3cbec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3cbec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cbec8:
    // 0x3cbec8: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x3cbec8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_3cbecc:
    // 0x3cbecc: 0x85880002  lh          $t0, 0x2($t4)
    ctx->pc = 0x3cbeccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
label_3cbed0:
    // 0x3cbed0: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x3cbed0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cbed4:
    // 0x3cbed4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3cbed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3cbed8:
    // 0x3cbed8: 0x1663018  mult        $a2, $t3, $a2
    ctx->pc = 0x3cbed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3cbedc:
    // 0x3cbedc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3cbedcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbee0:
    // 0x3cbee0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3cbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3cbee4:
    // 0x3cbee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cbee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cbee8:
    // 0x3cbee8: 0x46040d82  mul.s       $f22, $f1, $f4
    ctx->pc = 0x3cbee8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3cbeec:
    // 0x3cbeec: 0x46160041  sub.s       $f1, $f0, $f22
    ctx->pc = 0x3cbeecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_3cbef0:
    // 0x3cbef0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3cbef0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbef4:
    // 0x3cbef4: 0x0  nop
    ctx->pc = 0x3cbef4u;
    // NOP
label_3cbef8:
    // 0x3cbef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cbef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cbefc:
    // 0x3cbefc: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x3cbefcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cbf00:
    // 0x3cbf00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cbf00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbf04:
    // 0x3cbf04: 0x0  nop
    ctx->pc = 0x3cbf04u;
    // NOP
label_3cbf08:
    // 0x3cbf08: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3cbf08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3cbf0c:
    // 0x3cbf0c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3cbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbf10:
    // 0x3cbf10: 0x1163000a  beq         $t3, $v1, . + 4 + (0xA << 2)
label_3cbf14:
    if (ctx->pc == 0x3CBF14u) {
        ctx->pc = 0x3CBF14u;
            // 0x3cbf14: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x3CBF18u;
        goto label_3cbf18;
    }
    ctx->pc = 0x3CBF10u;
    {
        const bool branch_taken_0x3cbf10 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CBF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBF10u;
            // 0x3cbf14: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf10) {
            ctx->pc = 0x3CBF3Cu;
            goto label_3cbf3c;
        }
    }
    ctx->pc = 0x3CBF18u;
label_3cbf18:
    // 0x3cbf18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbf1c:
    // 0x3cbf1c: 0x55630008  bnel        $t3, $v1, . + 4 + (0x8 << 2)
label_3cbf20:
    if (ctx->pc == 0x3CBF20u) {
        ctx->pc = 0x3CBF20u;
            // 0x3cbf20: 0x92660070  lbu         $a2, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x3CBF24u;
        goto label_3cbf24;
    }
    ctx->pc = 0x3CBF1Cu;
    {
        const bool branch_taken_0x3cbf1c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cbf1c) {
            ctx->pc = 0x3CBF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBF1Cu;
            // 0x3cbf20: 0x92660070  lbu         $a2, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CBF40u;
            goto label_3cbf40;
        }
    }
    ctx->pc = 0x3CBF24u;
label_3cbf24:
    // 0x3cbf24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3cbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3cbf28:
    // 0x3cbf28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cbf28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbf2c:
    // 0x3cbf2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cbf2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cbf30:
    // 0x3cbf30: 0x0  nop
    ctx->pc = 0x3cbf30u;
    // NOP
label_3cbf34:
    // 0x3cbf34: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3cbf34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3cbf38:
    // 0x3cbf38: 0x46170d1c  madd.s      $f20, $f1, $f23
    ctx->pc = 0x3cbf38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
label_3cbf3c:
    // 0x3cbf3c: 0x92660070  lbu         $a2, 0x70($s3)
    ctx->pc = 0x3cbf3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_3cbf40:
    // 0x3cbf40: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3cbf40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cbf44:
    // 0x3cbf44: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x3cbf44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3cbf48:
    // 0x3cbf48: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3cbf4c:
    if (ctx->pc == 0x3CBF4Cu) {
        ctx->pc = 0x3CBF4Cu;
            // 0x3cbf4c: 0x9272006c  lbu         $s2, 0x6C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->pc = 0x3CBF50u;
        goto label_3cbf50;
    }
    ctx->pc = 0x3CBF48u;
    {
        const bool branch_taken_0x3cbf48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBF48u;
            // 0x3cbf4c: 0x9272006c  lbu         $s2, 0x6C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf48) {
            ctx->pc = 0x3CBF54u;
            goto label_3cbf54;
        }
    }
    ctx->pc = 0x3CBF50u;
label_3cbf50:
    // 0x3cbf50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3cbf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf54:
    // 0x3cbf54: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3cbf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3cbf58:
    // 0x3cbf58: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3cbf58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3cbf5c:
    // 0x3cbf5c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_3cbf60:
    if (ctx->pc == 0x3CBF60u) {
        ctx->pc = 0x3CBF60u;
            // 0x3cbf60: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CBF64u;
        goto label_3cbf64;
    }
    ctx->pc = 0x3CBF5Cu;
    {
        const bool branch_taken_0x3cbf5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbf5c) {
            ctx->pc = 0x3CBF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBF5Cu;
            // 0x3cbf60: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CBF6Cu;
            goto label_3cbf6c;
        }
    }
    ctx->pc = 0x3CBF64u;
label_3cbf64:
    // 0x3cbf64: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3cbf64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cbf68:
    // 0x3cbf68: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3cbf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3cbf6c:
    // 0x3cbf6c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3cbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3cbf70:
    // 0x3cbf70: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3cbf70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cbf74:
    // 0x3cbf74: 0x8e680068  lw          $t0, 0x68($s3)
    ctx->pc = 0x3cbf74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_3cbf78:
    // 0x3cbf78: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x3cbf78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cbf7c:
    // 0x3cbf7c: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x3cbf7cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_3cbf80:
    // 0x3cbf80: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x3cbf80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cbf84:
    // 0x3cbf84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cbf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cbf88:
    // 0x3cbf88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cbf88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf8c:
    // 0x3cbf8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbf90:
    // 0x3cbf90: 0x0  nop
    ctx->pc = 0x3cbf90u;
    // NOP
label_3cbf94:
    // 0x3cbf94: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cbf94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cbf98:
    // 0x3cbf98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cbf98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbf9c:
    // 0x3cbf9c: 0x0  nop
    ctx->pc = 0x3cbf9cu;
    // NOP
label_3cbfa0:
    // 0x3cbfa0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cbfa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cbfa4:
    // 0x3cbfa4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3cbfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbfa8:
    // 0x3cbfa8: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3cbfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbfac:
    // 0x3cbfac: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x3cbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbfb0:
    // 0x3cbfb0: 0x46800ce0  cvt.s.w     $f19, $f1
    ctx->pc = 0x3cbfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_3cbfb4:
    // 0x3cbfb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cbfb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3cbfb8:
    // 0x3cbfb8: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3cbfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbfbc:
    // 0x3cbfbc: 0x468014a0  cvt.s.w     $f18, $f2
    ctx->pc = 0x3cbfbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_3cbfc0:
    // 0x3cbfc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cbfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cbfc4:
    // 0x3cbfc4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3cbfc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cbfc8:
    // 0x3cbfc8: 0x4603a301  sub.s       $f12, $f20, $f3
    ctx->pc = 0x3cbfc8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
label_3cbfcc:
    // 0x3cbfcc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3cbfccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3cbfd0:
    // 0x3cbfd0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x3cbfd0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_3cbfd4:
    // 0x3cbfd4: 0xc0bc228  jal         func_2F08A0
label_3cbfd8:
    if (ctx->pc == 0x3CBFD8u) {
        ctx->pc = 0x3CBFD8u;
            // 0x3cbfd8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x3CBFDCu;
        goto label_3cbfdc;
    }
    ctx->pc = 0x3CBFD4u;
    SET_GPR_U32(ctx, 31, 0x3CBFDCu);
    ctx->pc = 0x3CBFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBFD4u;
            // 0x3cbfd8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBFDCu; }
        if (ctx->pc != 0x3CBFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBFDCu; }
        if (ctx->pc != 0x3CBFDCu) { return; }
    }
    ctx->pc = 0x3CBFDCu;
label_3cbfdc:
    // 0x3cbfdc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3cbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3cbfe0:
    // 0x3cbfe0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cbfe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cbfe4:
    // 0x3cbfe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cbfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cbfe8:
    // 0x3cbfe8: 0x3c04bf00  lui         $a0, 0xBF00
    ctx->pc = 0x3cbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48896 << 16));
label_3cbfec:
    // 0x3cbfec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cbfecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbff0:
    // 0x3cbff0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x3cbff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cbff4:
    // 0x3cbff4: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cbff4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cbff8:
    // 0x3cbff8: 0xe67400c0  swc1        $f20, 0xC0($s3)
    ctx->pc = 0x3cbff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_3cbffc:
    // 0x3cbffc: 0x4616081c  madd.s      $f0, $f1, $f22
    ctx->pc = 0x3cbffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
label_3cc000:
    // 0x3cc000: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x3cc000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_3cc004:
    // 0x3cc004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cc004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cc008:
    // 0x3cc008: 0xae6400c8  sw          $a0, 0xC8($s3)
    ctx->pc = 0x3cc008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 4));
label_3cc00c:
    // 0x3cc00c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cc00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cc010:
    // 0x3cc010: 0x926200d0  lbu         $v0, 0xD0($s3)
    ctx->pc = 0x3cc010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 208)));
label_3cc014:
    // 0x3cc014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cc018:
    // 0x3cc018: 0x0  nop
    ctx->pc = 0x3cc018u;
    // NOP
label_3cc01c:
    // 0x3cc01c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cc01cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cc020:
    // 0x3cc020: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x3cc020u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
label_3cc024:
    // 0x3cc024: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3cc024u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cc028:
    // 0x3cc028: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x3cc028u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_3cc02c:
    // 0x3cc02c: 0x46170b82  mul.s       $f14, $f1, $f23
    ctx->pc = 0x3cc02cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_3cc030:
    // 0x3cc030: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x3cc030u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cc034:
    // 0x3cc034: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3cc038:
    if (ctx->pc == 0x3CC038u) {
        ctx->pc = 0x3CC038u;
            // 0x3cc038: 0x46160bc2  mul.s       $f15, $f1, $f22 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
        ctx->pc = 0x3CC03Cu;
        goto label_3cc03c;
    }
    ctx->pc = 0x3CC034u;
    {
        const bool branch_taken_0x3cc034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC034u;
            // 0x3cc038: 0x46160bc2  mul.s       $f15, $f1, $f22 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc034) {
            ctx->pc = 0x3CC050u;
            goto label_3cc050;
        }
    }
    ctx->pc = 0x3CC03Cu;
label_3cc03c:
    // 0x3cc03c: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x3cc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_3cc040:
    // 0x3cc040: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3cc040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3cc044:
    // 0x3cc044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cc044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cc048:
    // 0x3cc048: 0x10000005  b           . + 4 + (0x5 << 2)
label_3cc04c:
    if (ctx->pc == 0x3CC04Cu) {
        ctx->pc = 0x3CC04Cu;
            // 0x3cc04c: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x3CC050u;
        goto label_3cc050;
    }
    ctx->pc = 0x3CC048u;
    {
        const bool branch_taken_0x3cc048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC048u;
            // 0x3cc04c: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc048) {
            ctx->pc = 0x3CC060u;
            goto label_3cc060;
        }
    }
    ctx->pc = 0x3CC050u;
label_3cc050:
    // 0x3cc050: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x3cc050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_3cc054:
    // 0x3cc054: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3cc054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3cc058:
    // 0x3cc058: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cc058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cc05c:
    // 0x3cc05c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3cc05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cc060:
    // 0x3cc060: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x3cc060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3cc064:
    // 0x3cc064: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3cc064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3cc068:
    // 0x3cc068: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cc068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cc06c:
    // 0x3cc06c: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3cc06cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3cc070:
    // 0x3cc070: 0x26670090  addiu       $a3, $s3, 0x90
    ctx->pc = 0x3cc070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_3cc074:
    // 0x3cc074: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cc074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cc078:
    // 0x3cc078: 0xc0bc284  jal         func_2F0A10
label_3cc07c:
    if (ctx->pc == 0x3CC07Cu) {
        ctx->pc = 0x3CC07Cu;
            // 0x3cc07c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CC080u;
        goto label_3cc080;
    }
    ctx->pc = 0x3CC078u;
    SET_GPR_U32(ctx, 31, 0x3CC080u);
    ctx->pc = 0x3CC07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC078u;
            // 0x3cc07c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC080u; }
        if (ctx->pc != 0x3CC080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC080u; }
        if (ctx->pc != 0x3CC080u) { return; }
    }
    ctx->pc = 0x3CC080u;
label_3cc080:
    // 0x3cc080: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3cc080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3cc084:
    // 0x3cc084: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x3cc084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3cc088:
    // 0x3cc088: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3cc088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cc08c:
    // 0x3cc08c: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x3cc08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3cc090:
    // 0x3cc090: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3cc090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cc094:
    // 0x3cc094: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x3cc094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3cc098:
    // 0x3cc098: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3cc098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cc09c:
    // 0x3cc09c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3cc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cc0a0:
    // 0x3cc0a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3cc0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc0a4:
    // 0x3cc0a4: 0x3e00008  jr          $ra
label_3cc0a8:
    if (ctx->pc == 0x3CC0A8u) {
        ctx->pc = 0x3CC0A8u;
            // 0x3cc0a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CC0ACu;
        goto label_3cc0ac;
    }
    ctx->pc = 0x3CC0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC0A4u;
            // 0x3cc0a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CC0ACu;
label_3cc0ac:
    // 0x3cc0ac: 0x0  nop
    ctx->pc = 0x3cc0acu;
    // NOP
label_3cc0b0:
    // 0x3cc0b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3cc0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3cc0b4:
    // 0x3cc0b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3cc0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3cc0b8:
    // 0x3cc0b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3cc0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3cc0bc:
    // 0x3cc0bc: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3cc0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3cc0c0:
    // 0x3cc0c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cc0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3cc0c4:
    // 0x3cc0c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cc0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3cc0c8:
    // 0x3cc0c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cc0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cc0cc:
    // 0x3cc0cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cc0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3cc0d0:
    // 0x3cc0d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cc0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cc0d4:
    // 0x3cc0d4: 0x8c728a08  lw          $s2, -0x75F8($v1)
    ctx->pc = 0x3cc0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3cc0d8:
    // 0x3cc0d8: 0x8cb10eac  lw          $s1, 0xEAC($a1)
    ctx->pc = 0x3cc0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3756)));
label_3cc0dc:
    // 0x3cc0dc: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3cc0dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3cc0e0:
    // 0x3cc0e0: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x3cc0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cc0e4:
    // 0x3cc0e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cc0e8:
    // 0x3cc0e8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3cc0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_3cc0ec:
    // 0x3cc0ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cc0ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cc0f0:
    // 0x3cc0f0: 0x2cc1000b  sltiu       $at, $a2, 0xB
    ctx->pc = 0x3cc0f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3cc0f4:
    // 0x3cc0f4: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x3cc0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3cc0f8:
    // 0x3cc0f8: 0xc47466c0  lwc1        $f20, 0x66C0($v1)
    ctx->pc = 0x3cc0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 26304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cc0fc:
    // 0x3cc0fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc0fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cc100:
    // 0x3cc100: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cc100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cc104:
    // 0x3cc104: 0x8c7065b8  lw          $s0, 0x65B8($v1)
    ctx->pc = 0x3cc104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26040)));
label_3cc108:
    // 0x3cc108: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3cc108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_3cc10c:
    // 0x3cc10c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cc10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cc110:
    // 0x3cc110: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3cc110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cc114:
    // 0x3cc114: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3cc114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3cc118:
    // 0x3cc118: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc118u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cc11c:
    // 0x3cc11c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3cc11cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3cc120:
    // 0x3cc120: 0x102001c1  beqz        $at, . + 4 + (0x1C1 << 2)
label_3cc124:
    if (ctx->pc == 0x3CC124u) {
        ctx->pc = 0x3CC124u;
            // 0x3cc124: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC128u;
        goto label_3cc128;
    }
    ctx->pc = 0x3CC120u;
    {
        const bool branch_taken_0x3cc120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC120u;
            // 0x3cc124: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc120) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC128u;
label_3cc128:
    // 0x3cc128: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3cc128u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_3cc12c:
    // 0x3cc12c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3cc12cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3cc130:
    // 0x3cc130: 0x24e79040  addiu       $a3, $a3, -0x6FC0
    ctx->pc = 0x3cc130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938688));
label_3cc134:
    // 0x3cc134: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3cc134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3cc138:
    // 0x3cc138: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3cc138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3cc13c:
    // 0x3cc13c: 0xc00008  jr          $a2
label_3cc140:
    if (ctx->pc == 0x3CC140u) {
        ctx->pc = 0x3CC144u;
        goto label_3cc144;
    }
    ctx->pc = 0x3CC13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CC144u: goto label_3cc144;
            case 0x3CC154u: goto label_3cc154;
            case 0x3CC1D8u: goto label_3cc1d8;
            case 0x3CC35Cu: goto label_3cc35c;
            case 0x3CC3F4u: goto label_3cc3f4;
            case 0x3CC4B0u: goto label_3cc4b0;
            case 0x3CC554u: goto label_3cc554;
            case 0x3CC5F8u: goto label_3cc5f8;
            case 0x3CC69Cu: goto label_3cc69c;
            case 0x3CC7DCu: goto label_3cc7dc;
            case 0x3CC814u: goto label_3cc814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3CC144u;
label_3cc144:
    // 0x3cc144: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc148:
    // 0x3cc148: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cc148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cc14c:
    // 0x3cc14c: 0x320f809  jalr        $t9
label_3cc150:
    if (ctx->pc == 0x3CC150u) {
        ctx->pc = 0x3CC154u;
        goto label_3cc154;
    }
    ctx->pc = 0x3CC14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC154u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC154u; }
            if (ctx->pc != 0x3CC154u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC154u;
label_3cc154:
    // 0x3cc154: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc158:
    // 0x3cc158: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc15c:
    // 0x3cc15c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc160:
    // 0x3cc160: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc164:
    // 0x3cc164: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3cc168:
    if (ctx->pc == 0x3CC168u) {
        ctx->pc = 0x3CC168u;
            // 0x3cc168: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x3CC16Cu;
        goto label_3cc16c;
    }
    ctx->pc = 0x3CC164u;
    {
        const bool branch_taken_0x3cc164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc164) {
            ctx->pc = 0x3CC168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC164u;
            // 0x3cc168: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC188u;
            goto label_3cc188;
        }
    }
    ctx->pc = 0x3CC16Cu;
label_3cc16c:
    // 0x3cc16c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3cc16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cc170:
    // 0x3cc170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc174:
    // 0x3cc174: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc178:
    // 0x3cc178: 0x320f809  jalr        $t9
label_3cc17c:
    if (ctx->pc == 0x3CC17Cu) {
        ctx->pc = 0x3CC17Cu;
            // 0x3cc17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC180u;
        goto label_3cc180;
    }
    ctx->pc = 0x3CC178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC180u);
        ctx->pc = 0x3CC17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC178u;
            // 0x3cc17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC180u; }
            if (ctx->pc != 0x3CC180u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC180u;
label_3cc180:
    // 0x3cc180: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_3cc184:
    if (ctx->pc == 0x3CC184u) {
        ctx->pc = 0x3CC184u;
            // 0x3cc184: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3CC188u;
        goto label_3cc188;
    }
    ctx->pc = 0x3CC180u;
    {
        const bool branch_taken_0x3cc180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC180u;
            // 0x3cc184: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc180) {
            ctx->pc = 0x3CC82Cu;
            goto label_3cc82c;
        }
    }
    ctx->pc = 0x3CC188u;
label_3cc188:
    // 0x3cc188: 0x92640074  lbu         $a0, 0x74($s3)
    ctx->pc = 0x3cc188u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_3cc18c:
    // 0x3cc18c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc190:
    // 0x3cc190: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc194:
    // 0x3cc194: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3cc194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3cc198:
    // 0x3cc198: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc19c:
    // 0x3cc19c: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cc19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc1a0:
    // 0x3cc1a0: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x3cc1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc1a4:
    // 0x3cc1a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cc1a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cc1a8:
    // 0x3cc1a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3cc1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc1ac:
    // 0x3cc1ac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_3cc1b0:
    if (ctx->pc == 0x3CC1B0u) {
        ctx->pc = 0x3CC1B0u;
            // 0x3cc1b0: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->pc = 0x3CC1B4u;
        goto label_3cc1b4;
    }
    ctx->pc = 0x3CC1ACu;
    {
        const bool branch_taken_0x3cc1ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CC1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC1ACu;
            // 0x3cc1b0: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc1ac) {
            ctx->pc = 0x3CC1C8u;
            goto label_3cc1c8;
        }
    }
    ctx->pc = 0x3CC1B4u;
label_3cc1b4:
    // 0x3cc1b4: 0xe67400d4  swc1        $f20, 0xD4($s3)
    ctx->pc = 0x3cc1b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_3cc1b8:
    // 0x3cc1b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3cc1b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cc1bc:
    // 0x3cc1bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cc1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cc1c0:
    // 0x3cc1c0: 0x320f809  jalr        $t9
label_3cc1c4:
    if (ctx->pc == 0x3CC1C4u) {
        ctx->pc = 0x3CC1C4u;
            // 0x3cc1c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC1C8u;
        goto label_3cc1c8;
    }
    ctx->pc = 0x3CC1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC1C8u);
        ctx->pc = 0x3CC1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC1C0u;
            // 0x3cc1c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC1C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC1C8u; }
            if (ctx->pc != 0x3CC1C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC1C8u;
label_3cc1c8:
    // 0x3cc1c8: 0xc11088c  jal         func_442230
label_3cc1cc:
    if (ctx->pc == 0x3CC1CCu) {
        ctx->pc = 0x3CC1CCu;
            // 0x3cc1cc: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x3CC1D0u;
        goto label_3cc1d0;
    }
    ctx->pc = 0x3CC1C8u;
    SET_GPR_U32(ctx, 31, 0x3CC1D0u);
    ctx->pc = 0x3CC1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC1C8u;
            // 0x3cc1cc: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC1D0u; }
        if (ctx->pc != 0x3CC1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC1D0u; }
        if (ctx->pc != 0x3CC1D0u) { return; }
    }
    ctx->pc = 0x3CC1D0u;
label_3cc1d0:
    // 0x3cc1d0: 0x10000195  b           . + 4 + (0x195 << 2)
label_3cc1d4:
    if (ctx->pc == 0x3CC1D4u) {
        ctx->pc = 0x3CC1D8u;
        goto label_3cc1d8;
    }
    ctx->pc = 0x3CC1D0u;
    {
        const bool branch_taken_0x3cc1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc1d0) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC1D8u;
label_3cc1d8:
    // 0x3cc1d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc1dc:
    // 0x3cc1dc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc1e0:
    // 0x3cc1e0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc1e4:
    // 0x3cc1e4: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc1e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc1e8:
    // 0x3cc1e8: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cc1ec:
    if (ctx->pc == 0x3CC1ECu) {
        ctx->pc = 0x3CC1ECu;
            // 0x3cc1ec: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x3CC1F0u;
        goto label_3cc1f0;
    }
    ctx->pc = 0x3CC1E8u;
    {
        const bool branch_taken_0x3cc1e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc1e8) {
            ctx->pc = 0x3CC1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC1E8u;
            // 0x3cc1ec: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CC1F0u;
label_3cc1f0:
    // 0x3cc1f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc1f4:
    // 0x3cc1f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc1f8:
    // 0x3cc1f8: 0x320f809  jalr        $t9
label_3cc1fc:
    if (ctx->pc == 0x3CC1FCu) {
        ctx->pc = 0x3CC1FCu;
            // 0x3cc1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC200u;
        goto label_3cc200;
    }
    ctx->pc = 0x3CC1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC200u);
        ctx->pc = 0x3CC1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC1F8u;
            // 0x3cc1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC200u; }
            if (ctx->pc != 0x3CC200u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC200u;
label_3cc200:
    // 0x3cc200: 0x10000189  b           . + 4 + (0x189 << 2)
label_3cc204:
    if (ctx->pc == 0x3CC204u) {
        ctx->pc = 0x3CC208u;
        goto label_3cc208;
    }
    ctx->pc = 0x3CC200u;
    {
        const bool branch_taken_0x3cc200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc200) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC208u;
label_3cc208:
    // 0x3cc208: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cc208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cc20c:
    // 0x3cc20c: 0x92660074  lbu         $a2, 0x74($s3)
    ctx->pc = 0x3cc20cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_3cc210:
    // 0x3cc210: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cc210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cc214:
    // 0x3cc214: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x3cc214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3cc218:
    // 0x3cc218: 0x90a400e4  lbu         $a0, 0xE4($a1)
    ctx->pc = 0x3cc218u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
label_3cc21c:
    // 0x3cc21c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3cc21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_3cc220:
    // 0x3cc220: 0xa0a400e4  sb          $a0, 0xE4($a1)
    ctx->pc = 0x3cc220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 228), (uint8_t)GPR_U32(ctx, 4));
label_3cc224:
    // 0x3cc224: 0x8c6665b8  lw          $a2, 0x65B8($v1)
    ctx->pc = 0x3cc224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26040)));
label_3cc228:
    // 0x3cc228: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3cc228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3cc22c:
    // 0x3cc22c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3cc22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc230:
    // 0x3cc230: 0x8662006e  lh          $v0, 0x6E($s3)
    ctx->pc = 0x3cc230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_3cc234:
    // 0x3cc234: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cc234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cc238:
    // 0x3cc238: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cc23c:
    // 0x3cc23c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3cc23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cc240:
    // 0x3cc240: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cc240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cc244:
    // 0x3cc244: 0x0  nop
    ctx->pc = 0x3cc244u;
    // NOP
label_3cc248:
    // 0x3cc248: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3cc248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_3cc24c:
    // 0x3cc24c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3cc24cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3cc250:
    // 0x3cc250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cc254:
    // 0x3cc254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cc258:
    // 0x3cc258: 0xa662006e  sh          $v0, 0x6E($s3)
    ctx->pc = 0x3cc258u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 110), (uint16_t)GPR_U32(ctx, 2));
label_3cc25c:
    // 0x3cc25c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cc25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cc260:
    // 0x3cc260: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x3cc260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3cc264:
    // 0x3cc264: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cc264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cc268:
    // 0x3cc268: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3cc268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3cc26c:
    // 0x3cc26c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3cc26cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3cc270:
    // 0x3cc270: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3cc274:
    if (ctx->pc == 0x3CC274u) {
        ctx->pc = 0x3CC274u;
            // 0x3cc274: 0x9263006c  lbu         $v1, 0x6C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->pc = 0x3CC278u;
        goto label_3cc278;
    }
    ctx->pc = 0x3CC270u;
    {
        const bool branch_taken_0x3cc270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc270) {
            ctx->pc = 0x3CC274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC270u;
            // 0x3cc274: 0x9263006c  lbu         $v1, 0x6C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC280u;
            goto label_3cc280;
        }
    }
    ctx->pc = 0x3CC278u;
label_3cc278:
    // 0x3cc278: 0xa663006e  sh          $v1, 0x6E($s3)
    ctx->pc = 0x3cc278u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 110), (uint16_t)GPR_U32(ctx, 3));
label_3cc27c:
    // 0x3cc27c: 0x9263006c  lbu         $v1, 0x6C($s3)
    ctx->pc = 0x3cc27cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
label_3cc280:
    // 0x3cc280: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3cc280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cc284:
    // 0x3cc284: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x3cc284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_3cc288:
    // 0x3cc288: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_3cc28c:
    if (ctx->pc == 0x3CC28Cu) {
        ctx->pc = 0x3CC28Cu;
            // 0x3cc28c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x3CC290u;
        goto label_3cc290;
    }
    ctx->pc = 0x3CC288u;
    {
        const bool branch_taken_0x3cc288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc288) {
            ctx->pc = 0x3CC28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC288u;
            // 0x3cc28c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC2A0u;
            goto label_3cc2a0;
        }
    }
    ctx->pc = 0x3CC290u;
label_3cc290:
    // 0x3cc290: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3cc290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3cc294:
    // 0x3cc294: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cc294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cc298:
    // 0x3cc298: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3cc29c:
    if (ctx->pc == 0x3CC29Cu) {
        ctx->pc = 0x3CC29Cu;
            // 0x3cc29c: 0xa262006c  sb          $v0, 0x6C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3CC2A0u;
        goto label_3cc2a0;
    }
    ctx->pc = 0x3CC298u;
    {
        const bool branch_taken_0x3cc298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC298u;
            // 0x3cc29c: 0xa262006c  sb          $v0, 0x6C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc298) {
            ctx->pc = 0x3CC304u;
            goto label_3cc304;
        }
    }
    ctx->pc = 0x3CC2A0u;
label_3cc2a0:
    // 0x3cc2a0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3cc2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_3cc2a4:
    // 0x3cc2a4: 0xa262006c  sb          $v0, 0x6C($s3)
    ctx->pc = 0x3cc2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 2));
label_3cc2a8:
    // 0x3cc2a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3cc2a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3cc2ac:
    // 0x3cc2ac: 0x86620072  lh          $v0, 0x72($s3)
    ctx->pc = 0x3cc2acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_3cc2b0:
    // 0x3cc2b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cc2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cc2b4:
    // 0x3cc2b4: 0xa6620072  sh          $v0, 0x72($s3)
    ctx->pc = 0x3cc2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 114), (uint16_t)GPR_U32(ctx, 2));
label_3cc2b8:
    // 0x3cc2b8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x3cc2b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3cc2bc:
    // 0x3cc2bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cc2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cc2c0:
    // 0x3cc2c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cc2c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cc2c4:
    // 0x3cc2c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3cc2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3cc2c8:
    // 0x3cc2c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3cc2cc:
    if (ctx->pc == 0x3CC2CCu) {
        ctx->pc = 0x3CC2CCu;
            // 0x3cc2cc: 0x92630070  lbu         $v1, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x3CC2D0u;
        goto label_3cc2d0;
    }
    ctx->pc = 0x3CC2C8u;
    {
        const bool branch_taken_0x3cc2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc2c8) {
            ctx->pc = 0x3CC2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC2C8u;
            // 0x3cc2cc: 0x92630070  lbu         $v1, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC2D8u;
            goto label_3cc2d8;
        }
    }
    ctx->pc = 0x3CC2D0u;
label_3cc2d0:
    // 0x3cc2d0: 0xa6630072  sh          $v1, 0x72($s3)
    ctx->pc = 0x3cc2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 114), (uint16_t)GPR_U32(ctx, 3));
label_3cc2d4:
    // 0x3cc2d4: 0x92630070  lbu         $v1, 0x70($s3)
    ctx->pc = 0x3cc2d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_3cc2d8:
    // 0x3cc2d8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3cc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cc2dc:
    // 0x3cc2dc: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x3cc2dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_3cc2e0:
    // 0x3cc2e0: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_3cc2e4:
    if (ctx->pc == 0x3CC2E4u) {
        ctx->pc = 0x3CC2E4u;
            // 0x3cc2e4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x3CC2E8u;
        goto label_3cc2e8;
    }
    ctx->pc = 0x3CC2E0u;
    {
        const bool branch_taken_0x3cc2e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc2e0) {
            ctx->pc = 0x3CC2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC2E0u;
            // 0x3cc2e4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC2F8u;
            goto label_3cc2f8;
        }
    }
    ctx->pc = 0x3CC2E8u;
label_3cc2e8:
    // 0x3cc2e8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3cc2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3cc2ec:
    // 0x3cc2ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cc2f0:
    // 0x3cc2f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cc2f4:
    if (ctx->pc == 0x3CC2F4u) {
        ctx->pc = 0x3CC2F4u;
            // 0x3cc2f4: 0xa2620070  sb          $v0, 0x70($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3CC2F8u;
        goto label_3cc2f8;
    }
    ctx->pc = 0x3CC2F0u;
    {
        const bool branch_taken_0x3cc2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC2F0u;
            // 0x3cc2f4: 0xa2620070  sb          $v0, 0x70($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc2f0) {
            ctx->pc = 0x3CC304u;
            goto label_3cc304;
        }
    }
    ctx->pc = 0x3CC2F8u;
label_3cc2f8:
    // 0x3cc2f8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3cc2f8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3cc2fc:
    // 0x3cc2fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cc300:
    if (ctx->pc == 0x3CC300u) {
        ctx->pc = 0x3CC300u;
            // 0x3cc300: 0xa2620070  sb          $v0, 0x70($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3CC304u;
        goto label_3cc304;
    }
    ctx->pc = 0x3CC2FCu;
    {
        const bool branch_taken_0x3cc2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC2FCu;
            // 0x3cc300: 0xa2620070  sb          $v0, 0x70($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc2fc) {
            ctx->pc = 0x3CC308u;
            goto label_3cc308;
        }
    }
    ctx->pc = 0x3CC304u;
label_3cc304:
    // 0x3cc304: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3cc304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc308:
    // 0x3cc308: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_3cc30c:
    if (ctx->pc == 0x3CC30Cu) {
        ctx->pc = 0x3CC30Cu;
            // 0x3cc30c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC310u;
        goto label_3cc310;
    }
    ctx->pc = 0x3CC308u;
    {
        const bool branch_taken_0x3cc308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc308) {
            ctx->pc = 0x3CC30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC308u;
            // 0x3cc30c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC34Cu;
            goto label_3cc34c;
        }
    }
    ctx->pc = 0x3CC310u;
label_3cc310:
    // 0x3cc310: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x3cc310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_3cc314:
    // 0x3cc314: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x3cc314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_3cc318:
    // 0x3cc318: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_3cc31c:
    if (ctx->pc == 0x3CC31Cu) {
        ctx->pc = 0x3CC31Cu;
            // 0x3cc31c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3CC320u;
        goto label_3cc320;
    }
    ctx->pc = 0x3CC318u;
    {
        const bool branch_taken_0x3cc318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cc318) {
            ctx->pc = 0x3CC31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC318u;
            // 0x3cc31c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC338u;
            goto label_3cc338;
        }
    }
    ctx->pc = 0x3CC320u;
label_3cc320:
    // 0x3cc320: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3cc320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cc324:
    // 0x3cc324: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cc324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cc328:
    // 0x3cc328: 0x320f809  jalr        $t9
label_3cc32c:
    if (ctx->pc == 0x3CC32Cu) {
        ctx->pc = 0x3CC32Cu;
            // 0x3cc32c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC330u;
        goto label_3cc330;
    }
    ctx->pc = 0x3CC328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC330u);
        ctx->pc = 0x3CC32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC328u;
            // 0x3cc32c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC330u; }
            if (ctx->pc != 0x3CC330u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC330u;
label_3cc330:
    // 0x3cc330: 0x10000005  b           . + 4 + (0x5 << 2)
label_3cc334:
    if (ctx->pc == 0x3CC334u) {
        ctx->pc = 0x3CC338u;
        goto label_3cc338;
    }
    ctx->pc = 0x3CC330u;
    {
        const bool branch_taken_0x3cc330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc330) {
            ctx->pc = 0x3CC348u;
            goto label_3cc348;
        }
    }
    ctx->pc = 0x3CC338u;
label_3cc338:
    // 0x3cc338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc33c:
    // 0x3cc33c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc340:
    // 0x3cc340: 0x320f809  jalr        $t9
label_3cc344:
    if (ctx->pc == 0x3CC344u) {
        ctx->pc = 0x3CC344u;
            // 0x3cc344: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3CC348u;
        goto label_3cc348;
    }
    ctx->pc = 0x3CC340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC348u);
        ctx->pc = 0x3CC344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC340u;
            // 0x3cc344: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC348u; }
            if (ctx->pc != 0x3CC348u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC348u;
label_3cc348:
    // 0x3cc348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc34c:
    // 0x3cc34c: 0xc0f3214  jal         func_3CC850
label_3cc350:
    if (ctx->pc == 0x3CC350u) {
        ctx->pc = 0x3CC354u;
        goto label_3cc354;
    }
    ctx->pc = 0x3CC34Cu;
    SET_GPR_U32(ctx, 31, 0x3CC354u);
    ctx->pc = 0x3CC850u;
    if (runtime->hasFunction(0x3CC850u)) {
        auto targetFn = runtime->lookupFunction(0x3CC850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC354u; }
        if (ctx->pc != 0x3CC354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CC850_0x3cc850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC354u; }
        if (ctx->pc != 0x3CC354u) { return; }
    }
    ctx->pc = 0x3CC354u;
label_3cc354:
    // 0x3cc354: 0x10000134  b           . + 4 + (0x134 << 2)
label_3cc358:
    if (ctx->pc == 0x3CC358u) {
        ctx->pc = 0x3CC35Cu;
        goto label_3cc35c;
    }
    ctx->pc = 0x3CC354u;
    {
        const bool branch_taken_0x3cc354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc354) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC35Cu;
label_3cc35c:
    // 0x3cc35c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc360:
    // 0x3cc360: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc364:
    // 0x3cc364: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc368:
    // 0x3cc368: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc36c:
    // 0x3cc36c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cc370:
    if (ctx->pc == 0x3CC370u) {
        ctx->pc = 0x3CC370u;
            // 0x3cc370: 0x92630074  lbu         $v1, 0x74($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->pc = 0x3CC374u;
        goto label_3cc374;
    }
    ctx->pc = 0x3CC36Cu;
    {
        const bool branch_taken_0x3cc36c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc36c) {
            ctx->pc = 0x3CC370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC36Cu;
            // 0x3cc370: 0x92630074  lbu         $v1, 0x74($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC38Cu;
            goto label_3cc38c;
        }
    }
    ctx->pc = 0x3CC374u;
label_3cc374:
    // 0x3cc374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc378:
    // 0x3cc378: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc37c:
    // 0x3cc37c: 0x320f809  jalr        $t9
label_3cc380:
    if (ctx->pc == 0x3CC380u) {
        ctx->pc = 0x3CC380u;
            // 0x3cc380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC384u;
        goto label_3cc384;
    }
    ctx->pc = 0x3CC37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC384u);
        ctx->pc = 0x3CC380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC37Cu;
            // 0x3cc380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC384u; }
            if (ctx->pc != 0x3CC384u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC384u;
label_3cc384:
    // 0x3cc384: 0x10000128  b           . + 4 + (0x128 << 2)
label_3cc388:
    if (ctx->pc == 0x3CC388u) {
        ctx->pc = 0x3CC38Cu;
        goto label_3cc38c;
    }
    ctx->pc = 0x3CC384u;
    {
        const bool branch_taken_0x3cc384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc384) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC38Cu;
label_3cc38c:
    // 0x3cc38c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x3cc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3cc390:
    // 0x3cc390: 0x602827  not         $a1, $v1
    ctx->pc = 0x3cc390u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3cc394:
    // 0x3cc394: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc398:
    // 0x3cc398: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3cc398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3cc39c:
    // 0x3cc39c: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc39cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc3a0:
    // 0x3cc3a0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3cc3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3cc3a4:
    // 0x3cc3a4: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc3a8:
    // 0x3cc3a8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cc3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc3ac:
    // 0x3cc3ac: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x3cc3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc3b0:
    // 0x3cc3b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cc3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cc3b4:
    // 0x3cc3b4: 0xe6600078  swc1        $f0, 0x78($s3)
    ctx->pc = 0x3cc3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
label_3cc3b8:
    // 0x3cc3b8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3cc3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc3bc:
    // 0x3cc3bc: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x3cc3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc3c0:
    // 0x3cc3c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc3c4:
    // 0x3cc3c4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3cc3c8:
    if (ctx->pc == 0x3CC3C8u) {
        ctx->pc = 0x3CC3C8u;
            // 0x3cc3c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC3CCu;
        goto label_3cc3cc;
    }
    ctx->pc = 0x3CC3C4u;
    {
        const bool branch_taken_0x3cc3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc3c4) {
            ctx->pc = 0x3CC3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC3C4u;
            // 0x3cc3c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC3E4u;
            goto label_3cc3e4;
        }
    }
    ctx->pc = 0x3CC3CCu;
label_3cc3cc:
    // 0x3cc3cc: 0xe6610078  swc1        $f1, 0x78($s3)
    ctx->pc = 0x3cc3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
label_3cc3d0:
    // 0x3cc3d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc3d4:
    // 0x3cc3d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cc3d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cc3d8:
    // 0x3cc3d8: 0x320f809  jalr        $t9
label_3cc3dc:
    if (ctx->pc == 0x3CC3DCu) {
        ctx->pc = 0x3CC3E0u;
        goto label_3cc3e0;
    }
    ctx->pc = 0x3CC3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC3E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC3E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC3E0u; }
            if (ctx->pc != 0x3CC3E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC3E0u;
label_3cc3e0:
    // 0x3cc3e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3e4:
    // 0x3cc3e4: 0xc0f3214  jal         func_3CC850
label_3cc3e8:
    if (ctx->pc == 0x3CC3E8u) {
        ctx->pc = 0x3CC3ECu;
        goto label_3cc3ec;
    }
    ctx->pc = 0x3CC3E4u;
    SET_GPR_U32(ctx, 31, 0x3CC3ECu);
    ctx->pc = 0x3CC850u;
    if (runtime->hasFunction(0x3CC850u)) {
        auto targetFn = runtime->lookupFunction(0x3CC850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC3ECu; }
        if (ctx->pc != 0x3CC3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CC850_0x3cc850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC3ECu; }
        if (ctx->pc != 0x3CC3ECu) { return; }
    }
    ctx->pc = 0x3CC3ECu;
label_3cc3ec:
    // 0x3cc3ec: 0x1000010e  b           . + 4 + (0x10E << 2)
label_3cc3f0:
    if (ctx->pc == 0x3CC3F0u) {
        ctx->pc = 0x3CC3F4u;
        goto label_3cc3f4;
    }
    ctx->pc = 0x3CC3ECu;
    {
        const bool branch_taken_0x3cc3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc3ec) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC3F4u;
label_3cc3f4:
    // 0x3cc3f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc3f8:
    // 0x3cc3f8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc3fc:
    // 0x3cc3fc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc400:
    // 0x3cc400: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc404:
    // 0x3cc404: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cc408:
    if (ctx->pc == 0x3CC408u) {
        ctx->pc = 0x3CC408u;
            // 0x3cc408: 0xc660007c  lwc1        $f0, 0x7C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3CC40Cu;
        goto label_3cc40c;
    }
    ctx->pc = 0x3CC404u;
    {
        const bool branch_taken_0x3cc404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc404) {
            ctx->pc = 0x3CC408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC404u;
            // 0x3cc408: 0xc660007c  lwc1        $f0, 0x7C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC424u;
            goto label_3cc424;
        }
    }
    ctx->pc = 0x3CC40Cu;
label_3cc40c:
    // 0x3cc40c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc410:
    // 0x3cc410: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc414:
    // 0x3cc414: 0x320f809  jalr        $t9
label_3cc418:
    if (ctx->pc == 0x3CC418u) {
        ctx->pc = 0x3CC418u;
            // 0x3cc418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC41Cu;
        goto label_3cc41c;
    }
    ctx->pc = 0x3CC414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC41Cu);
        ctx->pc = 0x3CC418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC414u;
            // 0x3cc418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC41Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC41Cu; }
            if (ctx->pc != 0x3CC41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CC41Cu;
label_3cc41c:
    // 0x3cc41c: 0x10000102  b           . + 4 + (0x102 << 2)
label_3cc420:
    if (ctx->pc == 0x3CC420u) {
        ctx->pc = 0x3CC424u;
        goto label_3cc424;
    }
    ctx->pc = 0x3CC41Cu;
    {
        const bool branch_taken_0x3cc41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc41c) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC424u;
label_3cc424:
    // 0x3cc424: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3cc424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3cc428:
    // 0x3cc428: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x3cc428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3cc42c:
    // 0x3cc42c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3cc42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc430:
    // 0x3cc430: 0xc660007c  lwc1        $f0, 0x7C($s3)
    ctx->pc = 0x3cc430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc434:
    // 0x3cc434: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc438:
    // 0x3cc438: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3cc43c:
    if (ctx->pc == 0x3CC43Cu) {
        ctx->pc = 0x3CC43Cu;
            // 0x3cc43c: 0xc6020004  lwc1        $f2, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3CC440u;
        goto label_3cc440;
    }
    ctx->pc = 0x3CC438u;
    {
        const bool branch_taken_0x3cc438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc438) {
            ctx->pc = 0x3CC43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC438u;
            // 0x3cc43c: 0xc6020004  lwc1        $f2, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC458u;
            goto label_3cc458;
        }
    }
    ctx->pc = 0x3CC440u;
label_3cc440:
    // 0x3cc440: 0xe661007c  swc1        $f1, 0x7C($s3)
    ctx->pc = 0x3cc440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3cc444:
    // 0x3cc444: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc448:
    // 0x3cc448: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc44c:
    // 0x3cc44c: 0x320f809  jalr        $t9
label_3cc450:
    if (ctx->pc == 0x3CC450u) {
        ctx->pc = 0x3CC450u;
            // 0x3cc450: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3CC454u;
        goto label_3cc454;
    }
    ctx->pc = 0x3CC44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC454u);
        ctx->pc = 0x3CC450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC44Cu;
            // 0x3cc450: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC454u; }
            if (ctx->pc != 0x3CC454u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC454u;
label_3cc454:
    // 0x3cc454: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3cc454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cc458:
    // 0x3cc458: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x3cc458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc45c:
    // 0x3cc45c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3cc45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc460:
    // 0x3cc460: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3cc460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3cc464:
    // 0x3cc464: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cc464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3cc468:
    // 0x3cc468: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3cc468u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3cc46c:
    // 0x3cc46c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc46cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cc470:
    // 0x3cc470: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3cc470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3cc474:
    // 0x3cc474: 0x0  nop
    ctx->pc = 0x3cc474u;
    // NOP
label_3cc478:
    // 0x3cc478: 0xae630084  sw          $v1, 0x84($s3)
    ctx->pc = 0x3cc478u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
label_3cc47c:
    // 0x3cc47c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3cc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3cc480:
    // 0x3cc480: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3cc480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cc484:
    // 0x3cc484: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3cc488:
    if (ctx->pc == 0x3CC488u) {
        ctx->pc = 0x3CC488u;
            // 0x3cc488: 0x8e650084  lw          $a1, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->pc = 0x3CC48Cu;
        goto label_3cc48c;
    }
    ctx->pc = 0x3CC484u;
    {
        const bool branch_taken_0x3cc484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc484) {
            ctx->pc = 0x3CC488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC484u;
            // 0x3cc488: 0x8e650084  lw          $a1, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC498u;
            goto label_3cc498;
        }
    }
    ctx->pc = 0x3CC48Cu;
label_3cc48c:
    // 0x3cc48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc490:
    // 0x3cc490: 0xa26200d0  sb          $v0, 0xD0($s3)
    ctx->pc = 0x3cc490u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 208), (uint8_t)GPR_U32(ctx, 2));
label_3cc494:
    // 0x3cc494: 0x8e650084  lw          $a1, 0x84($s3)
    ctx->pc = 0x3cc494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_3cc498:
    // 0x3cc498: 0xc04f2b8  jal         func_13CAE0
label_3cc49c:
    if (ctx->pc == 0x3CC49Cu) {
        ctx->pc = 0x3CC49Cu;
            // 0x3cc49c: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->pc = 0x3CC4A0u;
        goto label_3cc4a0;
    }
    ctx->pc = 0x3CC498u;
    SET_GPR_U32(ctx, 31, 0x3CC4A0u);
    ctx->pc = 0x3CC49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC498u;
            // 0x3cc49c: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC4A0u; }
        if (ctx->pc != 0x3CC4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC4A0u; }
        if (ctx->pc != 0x3CC4A0u) { return; }
    }
    ctx->pc = 0x3CC4A0u;
label_3cc4a0:
    // 0x3cc4a0: 0xc0f3214  jal         func_3CC850
label_3cc4a4:
    if (ctx->pc == 0x3CC4A4u) {
        ctx->pc = 0x3CC4A4u;
            // 0x3cc4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC4A8u;
        goto label_3cc4a8;
    }
    ctx->pc = 0x3CC4A0u;
    SET_GPR_U32(ctx, 31, 0x3CC4A8u);
    ctx->pc = 0x3CC4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC4A0u;
            // 0x3cc4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CC850u;
    if (runtime->hasFunction(0x3CC850u)) {
        auto targetFn = runtime->lookupFunction(0x3CC850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC4A8u; }
        if (ctx->pc != 0x3CC4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CC850_0x3cc850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC4A8u; }
        if (ctx->pc != 0x3CC4A8u) { return; }
    }
    ctx->pc = 0x3CC4A8u;
label_3cc4a8:
    // 0x3cc4a8: 0x100000df  b           . + 4 + (0xDF << 2)
label_3cc4ac:
    if (ctx->pc == 0x3CC4ACu) {
        ctx->pc = 0x3CC4B0u;
        goto label_3cc4b0;
    }
    ctx->pc = 0x3CC4A8u;
    {
        const bool branch_taken_0x3cc4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc4a8) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC4B0u;
label_3cc4b0:
    // 0x3cc4b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc4b4:
    // 0x3cc4b4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc4b8:
    // 0x3cc4b8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc4bc:
    // 0x3cc4bc: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc4c0:
    // 0x3cc4c0: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cc4c4:
    if (ctx->pc == 0x3CC4C4u) {
        ctx->pc = 0x3CC4C4u;
            // 0x3cc4c4: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x3CC4C8u;
        goto label_3cc4c8;
    }
    ctx->pc = 0x3CC4C0u;
    {
        const bool branch_taken_0x3cc4c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc4c0) {
            ctx->pc = 0x3CC4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC4C0u;
            // 0x3cc4c4: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC4E0u;
            goto label_3cc4e0;
        }
    }
    ctx->pc = 0x3CC4C8u;
label_3cc4c8:
    // 0x3cc4c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc4cc:
    // 0x3cc4cc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc4d0:
    // 0x3cc4d0: 0x320f809  jalr        $t9
label_3cc4d4:
    if (ctx->pc == 0x3CC4D4u) {
        ctx->pc = 0x3CC4D4u;
            // 0x3cc4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC4D8u;
        goto label_3cc4d8;
    }
    ctx->pc = 0x3CC4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC4D8u);
        ctx->pc = 0x3CC4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC4D0u;
            // 0x3cc4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC4D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC4D8u; }
            if (ctx->pc != 0x3CC4D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC4D8u;
label_3cc4d8:
    // 0x3cc4d8: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_3cc4dc:
    if (ctx->pc == 0x3CC4DCu) {
        ctx->pc = 0x3CC4E0u;
        goto label_3cc4e0;
    }
    ctx->pc = 0x3CC4D8u;
    {
        const bool branch_taken_0x3cc4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc4d8) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC4E0u;
label_3cc4e0:
    // 0x3cc4e0: 0x92650074  lbu         $a1, 0x74($s3)
    ctx->pc = 0x3cc4e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_3cc4e4:
    // 0x3cc4e4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc4e8:
    // 0x3cc4e8: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc4e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc4ec:
    // 0x3cc4ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3cc4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3cc4f0:
    // 0x3cc4f0: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc4f4:
    // 0x3cc4f4: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x3cc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3cc4f8:
    // 0x3cc4f8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc4fc:
    // 0x3cc4fc: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc4fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc500:
    // 0x3cc500: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x3cc500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_3cc504:
    // 0x3cc504: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc508:
    // 0x3cc508: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc50c:
    // 0x3cc50c: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x3cc50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc510:
    // 0x3cc510: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cc510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cc514:
    // 0x3cc514: 0xe6600078  swc1        $f0, 0x78($s3)
    ctx->pc = 0x3cc514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
label_3cc518:
    // 0x3cc518: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3cc518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc51c:
    // 0x3cc51c: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x3cc51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc520:
    // 0x3cc520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc524:
    // 0x3cc524: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3cc528:
    if (ctx->pc == 0x3CC528u) {
        ctx->pc = 0x3CC528u;
            // 0x3cc528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC52Cu;
        goto label_3cc52c;
    }
    ctx->pc = 0x3CC524u;
    {
        const bool branch_taken_0x3cc524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc524) {
            ctx->pc = 0x3CC528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC524u;
            // 0x3cc528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC544u;
            goto label_3cc544;
        }
    }
    ctx->pc = 0x3CC52Cu;
label_3cc52c:
    // 0x3cc52c: 0xe6610078  swc1        $f1, 0x78($s3)
    ctx->pc = 0x3cc52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
label_3cc530:
    // 0x3cc530: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc534:
    // 0x3cc534: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cc534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cc538:
    // 0x3cc538: 0x320f809  jalr        $t9
label_3cc53c:
    if (ctx->pc == 0x3CC53Cu) {
        ctx->pc = 0x3CC540u;
        goto label_3cc540;
    }
    ctx->pc = 0x3CC538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC540u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC540u; }
            if (ctx->pc != 0x3CC540u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC540u;
label_3cc540:
    // 0x3cc540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc544:
    // 0x3cc544: 0xc0f3214  jal         func_3CC850
label_3cc548:
    if (ctx->pc == 0x3CC548u) {
        ctx->pc = 0x3CC54Cu;
        goto label_3cc54c;
    }
    ctx->pc = 0x3CC544u;
    SET_GPR_U32(ctx, 31, 0x3CC54Cu);
    ctx->pc = 0x3CC850u;
    if (runtime->hasFunction(0x3CC850u)) {
        auto targetFn = runtime->lookupFunction(0x3CC850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC54Cu; }
        if (ctx->pc != 0x3CC54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CC850_0x3cc850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC54Cu; }
        if (ctx->pc != 0x3CC54Cu) { return; }
    }
    ctx->pc = 0x3CC54Cu;
label_3cc54c:
    // 0x3cc54c: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_3cc550:
    if (ctx->pc == 0x3CC550u) {
        ctx->pc = 0x3CC554u;
        goto label_3cc554;
    }
    ctx->pc = 0x3CC54Cu;
    {
        const bool branch_taken_0x3cc54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc54c) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC554u;
label_3cc554:
    // 0x3cc554: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc558:
    // 0x3cc558: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc55c:
    // 0x3cc55c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc560:
    // 0x3cc560: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc564:
    // 0x3cc564: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cc568:
    if (ctx->pc == 0x3CC568u) {
        ctx->pc = 0x3CC568u;
            // 0x3cc568: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x3CC56Cu;
        goto label_3cc56c;
    }
    ctx->pc = 0x3CC564u;
    {
        const bool branch_taken_0x3cc564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc564) {
            ctx->pc = 0x3CC568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC564u;
            // 0x3cc568: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC584u;
            goto label_3cc584;
        }
    }
    ctx->pc = 0x3CC56Cu;
label_3cc56c:
    // 0x3cc56c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc570:
    // 0x3cc570: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc574:
    // 0x3cc574: 0x320f809  jalr        $t9
label_3cc578:
    if (ctx->pc == 0x3CC578u) {
        ctx->pc = 0x3CC578u;
            // 0x3cc578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC57Cu;
        goto label_3cc57c;
    }
    ctx->pc = 0x3CC574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC57Cu);
        ctx->pc = 0x3CC578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC574u;
            // 0x3cc578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC57Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC57Cu; }
            if (ctx->pc != 0x3CC57Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CC57Cu;
label_3cc57c:
    // 0x3cc57c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_3cc580:
    if (ctx->pc == 0x3CC580u) {
        ctx->pc = 0x3CC584u;
        goto label_3cc584;
    }
    ctx->pc = 0x3CC57Cu;
    {
        const bool branch_taken_0x3cc57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc57c) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC584u;
label_3cc584:
    // 0x3cc584: 0x92650074  lbu         $a1, 0x74($s3)
    ctx->pc = 0x3cc584u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_3cc588:
    // 0x3cc588: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc58c:
    // 0x3cc58c: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc58cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc590:
    // 0x3cc590: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3cc590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3cc594:
    // 0x3cc594: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc598:
    // 0x3cc598: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x3cc598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3cc59c:
    // 0x3cc59c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc5a0:
    // 0x3cc5a0: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc5a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc5a4:
    // 0x3cc5a4: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x3cc5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_3cc5a8:
    // 0x3cc5a8: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc5ac:
    // 0x3cc5ac: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cc5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc5b0:
    // 0x3cc5b0: 0xc660007c  lwc1        $f0, 0x7C($s3)
    ctx->pc = 0x3cc5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc5b4:
    // 0x3cc5b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cc5b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cc5b8:
    // 0x3cc5b8: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x3cc5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3cc5bc:
    // 0x3cc5bc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3cc5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc5c0:
    // 0x3cc5c0: 0xc660007c  lwc1        $f0, 0x7C($s3)
    ctx->pc = 0x3cc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc5c4:
    // 0x3cc5c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc5c8:
    // 0x3cc5c8: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3cc5cc:
    if (ctx->pc == 0x3CC5CCu) {
        ctx->pc = 0x3CC5CCu;
            // 0x3cc5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC5D0u;
        goto label_3cc5d0;
    }
    ctx->pc = 0x3CC5C8u;
    {
        const bool branch_taken_0x3cc5c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc5c8) {
            ctx->pc = 0x3CC5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC5C8u;
            // 0x3cc5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC5E8u;
            goto label_3cc5e8;
        }
    }
    ctx->pc = 0x3CC5D0u;
label_3cc5d0:
    // 0x3cc5d0: 0xe661007c  swc1        $f1, 0x7C($s3)
    ctx->pc = 0x3cc5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3cc5d4:
    // 0x3cc5d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc5d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc5d8:
    // 0x3cc5d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc5d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc5dc:
    // 0x3cc5dc: 0x320f809  jalr        $t9
label_3cc5e0:
    if (ctx->pc == 0x3CC5E0u) {
        ctx->pc = 0x3CC5E0u;
            // 0x3cc5e0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3CC5E4u;
        goto label_3cc5e4;
    }
    ctx->pc = 0x3CC5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC5E4u);
        ctx->pc = 0x3CC5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC5DCu;
            // 0x3cc5e0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC5E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC5E4u; }
            if (ctx->pc != 0x3CC5E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC5E4u;
label_3cc5e4:
    // 0x3cc5e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc5e8:
    // 0x3cc5e8: 0xc0f3214  jal         func_3CC850
label_3cc5ec:
    if (ctx->pc == 0x3CC5ECu) {
        ctx->pc = 0x3CC5F0u;
        goto label_3cc5f0;
    }
    ctx->pc = 0x3CC5E8u;
    SET_GPR_U32(ctx, 31, 0x3CC5F0u);
    ctx->pc = 0x3CC850u;
    if (runtime->hasFunction(0x3CC850u)) {
        auto targetFn = runtime->lookupFunction(0x3CC850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC5F0u; }
        if (ctx->pc != 0x3CC5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CC850_0x3cc850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC5F0u; }
        if (ctx->pc != 0x3CC5F0u) { return; }
    }
    ctx->pc = 0x3CC5F0u;
label_3cc5f0:
    // 0x3cc5f0: 0x1000008d  b           . + 4 + (0x8D << 2)
label_3cc5f4:
    if (ctx->pc == 0x3CC5F4u) {
        ctx->pc = 0x3CC5F8u;
        goto label_3cc5f8;
    }
    ctx->pc = 0x3CC5F0u;
    {
        const bool branch_taken_0x3cc5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc5f0) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC5F8u;
label_3cc5f8:
    // 0x3cc5f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc5fc:
    // 0x3cc5fc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc600:
    // 0x3cc600: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc604:
    // 0x3cc604: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc608:
    // 0x3cc608: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cc60c:
    if (ctx->pc == 0x3CC60Cu) {
        ctx->pc = 0x3CC60Cu;
            // 0x3cc60c: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x3CC610u;
        goto label_3cc610;
    }
    ctx->pc = 0x3CC608u;
    {
        const bool branch_taken_0x3cc608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc608) {
            ctx->pc = 0x3CC60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC608u;
            // 0x3cc60c: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC628u;
            goto label_3cc628;
        }
    }
    ctx->pc = 0x3CC610u;
label_3cc610:
    // 0x3cc610: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc614:
    // 0x3cc614: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc618:
    // 0x3cc618: 0x320f809  jalr        $t9
label_3cc61c:
    if (ctx->pc == 0x3CC61Cu) {
        ctx->pc = 0x3CC61Cu;
            // 0x3cc61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC620u;
        goto label_3cc620;
    }
    ctx->pc = 0x3CC618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC620u);
        ctx->pc = 0x3CC61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC618u;
            // 0x3cc61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC620u; }
            if (ctx->pc != 0x3CC620u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC620u;
label_3cc620:
    // 0x3cc620: 0x10000081  b           . + 4 + (0x81 << 2)
label_3cc624:
    if (ctx->pc == 0x3CC624u) {
        ctx->pc = 0x3CC628u;
        goto label_3cc628;
    }
    ctx->pc = 0x3CC620u;
    {
        const bool branch_taken_0x3cc620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc620) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC628u;
label_3cc628:
    // 0x3cc628: 0x92650074  lbu         $a1, 0x74($s3)
    ctx->pc = 0x3cc628u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_3cc62c:
    // 0x3cc62c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc630:
    // 0x3cc630: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc634:
    // 0x3cc634: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3cc634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3cc638:
    // 0x3cc638: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc63c:
    // 0x3cc63c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x3cc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3cc640:
    // 0x3cc640: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc644:
    // 0x3cc644: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc644u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc648:
    // 0x3cc648: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x3cc648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_3cc64c:
    // 0x3cc64c: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc650:
    // 0x3cc650: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cc650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc654:
    // 0x3cc654: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x3cc654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc658:
    // 0x3cc658: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cc658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cc65c:
    // 0x3cc65c: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x3cc65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_3cc660:
    // 0x3cc660: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3cc660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc664:
    // 0x3cc664: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x3cc664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc668:
    // 0x3cc668: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc66c:
    // 0x3cc66c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3cc670:
    if (ctx->pc == 0x3CC670u) {
        ctx->pc = 0x3CC670u;
            // 0x3cc670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC674u;
        goto label_3cc674;
    }
    ctx->pc = 0x3CC66Cu;
    {
        const bool branch_taken_0x3cc66c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc66c) {
            ctx->pc = 0x3CC670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC66Cu;
            // 0x3cc670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC68Cu;
            goto label_3cc68c;
        }
    }
    ctx->pc = 0x3CC674u;
label_3cc674:
    // 0x3cc674: 0xe6610080  swc1        $f1, 0x80($s3)
    ctx->pc = 0x3cc674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_3cc678:
    // 0x3cc678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc67c:
    // 0x3cc67c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cc67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cc680:
    // 0x3cc680: 0x320f809  jalr        $t9
label_3cc684:
    if (ctx->pc == 0x3CC684u) {
        ctx->pc = 0x3CC688u;
        goto label_3cc688;
    }
    ctx->pc = 0x3CC680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC688u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC688u; }
            if (ctx->pc != 0x3CC688u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC688u;
label_3cc688:
    // 0x3cc688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc68c:
    // 0x3cc68c: 0xc0f3214  jal         func_3CC850
label_3cc690:
    if (ctx->pc == 0x3CC690u) {
        ctx->pc = 0x3CC694u;
        goto label_3cc694;
    }
    ctx->pc = 0x3CC68Cu;
    SET_GPR_U32(ctx, 31, 0x3CC694u);
    ctx->pc = 0x3CC850u;
    if (runtime->hasFunction(0x3CC850u)) {
        auto targetFn = runtime->lookupFunction(0x3CC850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC694u; }
        if (ctx->pc != 0x3CC694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CC850_0x3cc850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC694u; }
        if (ctx->pc != 0x3CC694u) { return; }
    }
    ctx->pc = 0x3CC694u;
label_3cc694:
    // 0x3cc694: 0x10000064  b           . + 4 + (0x64 << 2)
label_3cc698:
    if (ctx->pc == 0x3CC698u) {
        ctx->pc = 0x3CC69Cu;
        goto label_3cc69c;
    }
    ctx->pc = 0x3CC694u;
    {
        const bool branch_taken_0x3cc694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc694) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC69Cu;
label_3cc69c:
    // 0x3cc69c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cc6a0:
    // 0x3cc6a0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cc6a4:
    // 0x3cc6a4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cc6a8:
    // 0x3cc6a8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cc6a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cc6ac:
    // 0x3cc6ac: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cc6b0:
    if (ctx->pc == 0x3CC6B0u) {
        ctx->pc = 0x3CC6B0u;
            // 0x3cc6b0: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x3CC6B4u;
        goto label_3cc6b4;
    }
    ctx->pc = 0x3CC6ACu;
    {
        const bool branch_taken_0x3cc6ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc6ac) {
            ctx->pc = 0x3CC6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC6ACu;
            // 0x3cc6b0: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC6CCu;
            goto label_3cc6cc;
        }
    }
    ctx->pc = 0x3CC6B4u;
label_3cc6b4:
    // 0x3cc6b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc6b8:
    // 0x3cc6b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc6bc:
    // 0x3cc6bc: 0x320f809  jalr        $t9
label_3cc6c0:
    if (ctx->pc == 0x3CC6C0u) {
        ctx->pc = 0x3CC6C0u;
            // 0x3cc6c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC6C4u;
        goto label_3cc6c4;
    }
    ctx->pc = 0x3CC6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC6C4u);
        ctx->pc = 0x3CC6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC6BCu;
            // 0x3cc6c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC6C4u; }
            if (ctx->pc != 0x3CC6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC6C4u;
label_3cc6c4:
    // 0x3cc6c4: 0x10000058  b           . + 4 + (0x58 << 2)
label_3cc6c8:
    if (ctx->pc == 0x3CC6C8u) {
        ctx->pc = 0x3CC6CCu;
        goto label_3cc6cc;
    }
    ctx->pc = 0x3CC6C4u;
    {
        const bool branch_taken_0x3cc6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc6c4) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC6CCu;
label_3cc6cc:
    // 0x3cc6cc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3cc6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3cc6d0:
    // 0x3cc6d0: 0x92670074  lbu         $a3, 0x74($s3)
    ctx->pc = 0x3cc6d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_3cc6d4:
    // 0x3cc6d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cc6d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cc6d8:
    // 0x3cc6d8: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x3cc6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3cc6dc:
    // 0x3cc6dc: 0x90c400e4  lbu         $a0, 0xE4($a2)
    ctx->pc = 0x3cc6dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 228)));
label_3cc6e0:
    // 0x3cc6e0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x3cc6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_3cc6e4:
    // 0x3cc6e4: 0xa0c400e4  sb          $a0, 0xE4($a2)
    ctx->pc = 0x3cc6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 228), (uint8_t)GPR_U32(ctx, 4));
label_3cc6e8:
    // 0x3cc6e8: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x3cc6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3cc6ec:
    // 0x3cc6ec: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x3cc6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3cc6f0:
    // 0x3cc6f0: 0x90c400e4  lbu         $a0, 0xE4($a2)
    ctx->pc = 0x3cc6f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 228)));
label_3cc6f4:
    // 0x3cc6f4: 0x308400f7  andi        $a0, $a0, 0xF7
    ctx->pc = 0x3cc6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)247);
label_3cc6f8:
    // 0x3cc6f8: 0xa0c400e4  sb          $a0, 0xE4($a2)
    ctx->pc = 0x3cc6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 228), (uint8_t)GPR_U32(ctx, 4));
label_3cc6fc:
    // 0x3cc6fc: 0x8664006e  lh          $a0, 0x6E($s3)
    ctx->pc = 0x3cc6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_3cc700:
    // 0x3cc700: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3cc700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cc704:
    // 0x3cc704: 0xa662006e  sh          $v0, 0x6E($s3)
    ctx->pc = 0x3cc704u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 110), (uint16_t)GPR_U32(ctx, 2));
label_3cc708:
    // 0x3cc708: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cc708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cc70c:
    // 0x3cc70c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cc70cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cc710:
    // 0x3cc710: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3cc714:
    if (ctx->pc == 0x3CC714u) {
        ctx->pc = 0x3CC714u;
            // 0x3cc714: 0x9264006c  lbu         $a0, 0x6C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->pc = 0x3CC718u;
        goto label_3cc718;
    }
    ctx->pc = 0x3CC710u;
    {
        const bool branch_taken_0x3cc710 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3cc710) {
            ctx->pc = 0x3CC714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC710u;
            // 0x3cc714: 0x9264006c  lbu         $a0, 0x6C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC718u;
label_3cc718:
    // 0x3cc718: 0xa660006e  sh          $zero, 0x6E($s3)
    ctx->pc = 0x3cc718u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 110), (uint16_t)GPR_U32(ctx, 0));
label_3cc71c:
    // 0x3cc71c: 0x9264006c  lbu         $a0, 0x6C($s3)
    ctx->pc = 0x3cc71cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 108)));
label_3cc720:
    // 0x3cc720: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x3cc720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3cc724:
    // 0x3cc724: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3cc728:
    if (ctx->pc == 0x3CC728u) {
        ctx->pc = 0x3CC728u;
            // 0x3cc728: 0xa260006c  sb          $zero, 0x6C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3CC72Cu;
        goto label_3cc72c;
    }
    ctx->pc = 0x3CC724u;
    {
        const bool branch_taken_0x3cc724 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cc724) {
            ctx->pc = 0x3CC728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC724u;
            // 0x3cc728: 0xa260006c  sb          $zero, 0x6C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC738u;
            goto label_3cc738;
        }
    }
    ctx->pc = 0x3CC72Cu;
label_3cc72c:
    // 0x3cc72c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3cc72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3cc730:
    // 0x3cc730: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3cc730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cc734:
    // 0x3cc734: 0xa262006c  sb          $v0, 0x6C($s3)
    ctx->pc = 0x3cc734u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 2));
label_3cc738:
    // 0x3cc738: 0x86640072  lh          $a0, 0x72($s3)
    ctx->pc = 0x3cc738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_3cc73c:
    // 0x3cc73c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3cc73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3cc740:
    // 0x3cc740: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cc740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cc744:
    // 0x3cc744: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3cc744u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cc748:
    // 0x3cc748: 0xa6620072  sh          $v0, 0x72($s3)
    ctx->pc = 0x3cc748u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 114), (uint16_t)GPR_U32(ctx, 2));
label_3cc74c:
    // 0x3cc74c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cc74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cc750:
    // 0x3cc750: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cc750u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cc754:
    // 0x3cc754: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3cc758:
    if (ctx->pc == 0x3CC758u) {
        ctx->pc = 0x3CC758u;
            // 0x3cc758: 0x92640070  lbu         $a0, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x3CC75Cu;
        goto label_3cc75c;
    }
    ctx->pc = 0x3CC754u;
    {
        const bool branch_taken_0x3cc754 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3cc754) {
            ctx->pc = 0x3CC758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC754u;
            // 0x3cc758: 0x92640070  lbu         $a0, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC764u;
            goto label_3cc764;
        }
    }
    ctx->pc = 0x3CC75Cu;
label_3cc75c:
    // 0x3cc75c: 0xa6600072  sh          $zero, 0x72($s3)
    ctx->pc = 0x3cc75cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 114), (uint16_t)GPR_U32(ctx, 0));
label_3cc760:
    // 0x3cc760: 0x92640070  lbu         $a0, 0x70($s3)
    ctx->pc = 0x3cc760u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_3cc764:
    // 0x3cc764: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x3cc764u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3cc768:
    // 0x3cc768: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3cc76c:
    if (ctx->pc == 0x3CC76Cu) {
        ctx->pc = 0x3CC76Cu;
            // 0x3cc76c: 0xa2600070  sb          $zero, 0x70($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3CC770u;
        goto label_3cc770;
    }
    ctx->pc = 0x3CC768u;
    {
        const bool branch_taken_0x3cc768 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cc768) {
            ctx->pc = 0x3CC76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC768u;
            // 0x3cc76c: 0xa2600070  sb          $zero, 0x70($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC77Cu;
            goto label_3cc77c;
        }
    }
    ctx->pc = 0x3CC770u;
label_3cc770:
    // 0x3cc770: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3cc770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3cc774:
    // 0x3cc774: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3cc774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cc778:
    // 0x3cc778: 0xa2620070  sb          $v0, 0x70($s3)
    ctx->pc = 0x3cc778u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
label_3cc77c:
    // 0x3cc77c: 0xae6000d8  sw          $zero, 0xD8($s3)
    ctx->pc = 0x3cc77cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 0));
label_3cc780:
    // 0x3cc780: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3cc780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cc784:
    // 0x3cc784: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cc784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc788:
    // 0x3cc788: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x3cc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc78c:
    // 0x3cc78c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3cc78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3cc790:
    // 0x3cc790: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3cc790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc794:
    // 0x3cc794: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3cc798:
    if (ctx->pc == 0x3CC798u) {
        ctx->pc = 0x3CC798u;
            // 0x3cc798: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->pc = 0x3CC79Cu;
        goto label_3cc79c;
    }
    ctx->pc = 0x3CC794u;
    {
        const bool branch_taken_0x3cc794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CC798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC794u;
            // 0x3cc798: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc794) {
            ctx->pc = 0x3CC7B4u;
            goto label_3cc7b4;
        }
    }
    ctx->pc = 0x3CC79Cu;
label_3cc79c:
    // 0x3cc79c: 0xe66200d4  swc1        $f2, 0xD4($s3)
    ctx->pc = 0x3cc79cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_3cc7a0:
    // 0x3cc7a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7a4:
    // 0x3cc7a4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3cc7a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cc7a8:
    // 0x3cc7a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cc7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cc7ac:
    // 0x3cc7ac: 0x320f809  jalr        $t9
label_3cc7b0:
    if (ctx->pc == 0x3CC7B0u) {
        ctx->pc = 0x3CC7B0u;
            // 0x3cc7b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CC7B4u;
        goto label_3cc7b4;
    }
    ctx->pc = 0x3CC7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC7B4u);
        ctx->pc = 0x3CC7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC7ACu;
            // 0x3cc7b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC7B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC7B4u; }
            if (ctx->pc != 0x3CC7B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CC7B4u;
label_3cc7b4:
    // 0x3cc7b4: 0xc11088c  jal         func_442230
label_3cc7b8:
    if (ctx->pc == 0x3CC7B8u) {
        ctx->pc = 0x3CC7B8u;
            // 0x3cc7b8: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x3CC7BCu;
        goto label_3cc7bc;
    }
    ctx->pc = 0x3CC7B4u;
    SET_GPR_U32(ctx, 31, 0x3CC7BCu);
    ctx->pc = 0x3CC7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC7B4u;
            // 0x3cc7b8: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC7BCu; }
        if (ctx->pc != 0x3CC7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC7BCu; }
        if (ctx->pc != 0x3CC7BCu) { return; }
    }
    ctx->pc = 0x3CC7BCu;
label_3cc7bc:
    // 0x3cc7bc: 0xc11088c  jal         func_442230
label_3cc7c0:
    if (ctx->pc == 0x3CC7C0u) {
        ctx->pc = 0x3CC7C0u;
            // 0x3cc7c0: 0x8e6400e0  lw          $a0, 0xE0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->pc = 0x3CC7C4u;
        goto label_3cc7c4;
    }
    ctx->pc = 0x3CC7BCu;
    SET_GPR_U32(ctx, 31, 0x3CC7C4u);
    ctx->pc = 0x3CC7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC7BCu;
            // 0x3cc7c0: 0x8e6400e0  lw          $a0, 0xE0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC7C4u; }
        if (ctx->pc != 0x3CC7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC7C4u; }
        if (ctx->pc != 0x3CC7C4u) { return; }
    }
    ctx->pc = 0x3CC7C4u;
label_3cc7c4:
    // 0x3cc7c4: 0x8e6500e0  lw          $a1, 0xE0($s3)
    ctx->pc = 0x3cc7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_3cc7c8:
    // 0x3cc7c8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3cc7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3cc7cc:
    // 0x3cc7cc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3cc7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3cc7d0:
    // 0x3cc7d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3cc7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3cc7d4:
    // 0x3cc7d4: 0x10000014  b           . + 4 + (0x14 << 2)
label_3cc7d8:
    if (ctx->pc == 0x3CC7D8u) {
        ctx->pc = 0x3CC7D8u;
            // 0x3cc7d8: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x3CC7DCu;
        goto label_3cc7dc;
    }
    ctx->pc = 0x3CC7D4u;
    {
        const bool branch_taken_0x3cc7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC7D4u;
            // 0x3cc7d8: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc7d4) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC7DCu;
label_3cc7dc:
    // 0x3cc7dc: 0x92630074  lbu         $v1, 0x74($s3)
    ctx->pc = 0x3cc7dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_3cc7e0:
    // 0x3cc7e0: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x3cc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3cc7e4:
    // 0x3cc7e4: 0x602827  not         $a1, $v1
    ctx->pc = 0x3cc7e4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3cc7e8:
    // 0x3cc7e8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cc7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cc7ec:
    // 0x3cc7ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3cc7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3cc7f0:
    // 0x3cc7f0: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cc7f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cc7f4:
    // 0x3cc7f4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3cc7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3cc7f8:
    // 0x3cc7f8: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cc7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cc7fc:
    // 0x3cc7fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cc7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc800:
    // 0x3cc800: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cc800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cc804:
    // 0x3cc804: 0x320f809  jalr        $t9
label_3cc808:
    if (ctx->pc == 0x3CC808u) {
        ctx->pc = 0x3CC80Cu;
        goto label_3cc80c;
    }
    ctx->pc = 0x3CC804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC80Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CC80Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CC80Cu; }
            if (ctx->pc != 0x3CC80Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CC80Cu;
label_3cc80c:
    // 0x3cc80c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cc810:
    if (ctx->pc == 0x3CC810u) {
        ctx->pc = 0x3CC814u;
        goto label_3cc814;
    }
    ctx->pc = 0x3CC80Cu;
    {
        const bool branch_taken_0x3cc80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc80c) {
            ctx->pc = 0x3CC828u;
            goto label_3cc828;
        }
    }
    ctx->pc = 0x3CC814u;
label_3cc814:
    // 0x3cc814: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3cc814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3cc818:
    // 0x3cc818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cc818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc81c:
    // 0x3cc81c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3cc81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3cc820:
    // 0x3cc820: 0xc057b7c  jal         func_15EDF0
label_3cc824:
    if (ctx->pc == 0x3CC824u) {
        ctx->pc = 0x3CC824u;
            // 0x3cc824: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CC828u;
        goto label_3cc828;
    }
    ctx->pc = 0x3CC820u;
    SET_GPR_U32(ctx, 31, 0x3CC828u);
    ctx->pc = 0x3CC824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC820u;
            // 0x3cc824: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC828u; }
        if (ctx->pc != 0x3CC828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC828u; }
        if (ctx->pc != 0x3CC828u) { return; }
    }
    ctx->pc = 0x3CC828u;
label_3cc828:
    // 0x3cc828: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3cc828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3cc82c:
    // 0x3cc82c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cc82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cc830:
    // 0x3cc830: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3cc830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cc834:
    // 0x3cc834: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3cc834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cc838:
    // 0x3cc838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cc838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc83c:
    // 0x3cc83c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cc83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cc840:
    // 0x3cc840: 0x3e00008  jr          $ra
label_3cc844:
    if (ctx->pc == 0x3CC844u) {
        ctx->pc = 0x3CC844u;
            // 0x3cc844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3CC848u;
        goto label_3cc848;
    }
    ctx->pc = 0x3CC840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC840u;
            // 0x3cc844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CC848u;
label_3cc848:
    // 0x3cc848: 0x0  nop
    ctx->pc = 0x3cc848u;
    // NOP
label_3cc84c:
    // 0x3cc84c: 0x0  nop
    ctx->pc = 0x3cc84cu;
    // NOP
}
