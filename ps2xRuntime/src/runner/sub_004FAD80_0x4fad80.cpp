#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FAD80
// Address: 0x4fad80 - 0x4fb870
void sub_004FAD80_0x4fad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FAD80_0x4fad80");
#endif

    switch (ctx->pc) {
        case 0x4fad80u: goto label_4fad80;
        case 0x4fad84u: goto label_4fad84;
        case 0x4fad88u: goto label_4fad88;
        case 0x4fad8cu: goto label_4fad8c;
        case 0x4fad90u: goto label_4fad90;
        case 0x4fad94u: goto label_4fad94;
        case 0x4fad98u: goto label_4fad98;
        case 0x4fad9cu: goto label_4fad9c;
        case 0x4fada0u: goto label_4fada0;
        case 0x4fada4u: goto label_4fada4;
        case 0x4fada8u: goto label_4fada8;
        case 0x4fadacu: goto label_4fadac;
        case 0x4fadb0u: goto label_4fadb0;
        case 0x4fadb4u: goto label_4fadb4;
        case 0x4fadb8u: goto label_4fadb8;
        case 0x4fadbcu: goto label_4fadbc;
        case 0x4fadc0u: goto label_4fadc0;
        case 0x4fadc4u: goto label_4fadc4;
        case 0x4fadc8u: goto label_4fadc8;
        case 0x4fadccu: goto label_4fadcc;
        case 0x4fadd0u: goto label_4fadd0;
        case 0x4fadd4u: goto label_4fadd4;
        case 0x4fadd8u: goto label_4fadd8;
        case 0x4faddcu: goto label_4faddc;
        case 0x4fade0u: goto label_4fade0;
        case 0x4fade4u: goto label_4fade4;
        case 0x4fade8u: goto label_4fade8;
        case 0x4fadecu: goto label_4fadec;
        case 0x4fadf0u: goto label_4fadf0;
        case 0x4fadf4u: goto label_4fadf4;
        case 0x4fadf8u: goto label_4fadf8;
        case 0x4fadfcu: goto label_4fadfc;
        case 0x4fae00u: goto label_4fae00;
        case 0x4fae04u: goto label_4fae04;
        case 0x4fae08u: goto label_4fae08;
        case 0x4fae0cu: goto label_4fae0c;
        case 0x4fae10u: goto label_4fae10;
        case 0x4fae14u: goto label_4fae14;
        case 0x4fae18u: goto label_4fae18;
        case 0x4fae1cu: goto label_4fae1c;
        case 0x4fae20u: goto label_4fae20;
        case 0x4fae24u: goto label_4fae24;
        case 0x4fae28u: goto label_4fae28;
        case 0x4fae2cu: goto label_4fae2c;
        case 0x4fae30u: goto label_4fae30;
        case 0x4fae34u: goto label_4fae34;
        case 0x4fae38u: goto label_4fae38;
        case 0x4fae3cu: goto label_4fae3c;
        case 0x4fae40u: goto label_4fae40;
        case 0x4fae44u: goto label_4fae44;
        case 0x4fae48u: goto label_4fae48;
        case 0x4fae4cu: goto label_4fae4c;
        case 0x4fae50u: goto label_4fae50;
        case 0x4fae54u: goto label_4fae54;
        case 0x4fae58u: goto label_4fae58;
        case 0x4fae5cu: goto label_4fae5c;
        case 0x4fae60u: goto label_4fae60;
        case 0x4fae64u: goto label_4fae64;
        case 0x4fae68u: goto label_4fae68;
        case 0x4fae6cu: goto label_4fae6c;
        case 0x4fae70u: goto label_4fae70;
        case 0x4fae74u: goto label_4fae74;
        case 0x4fae78u: goto label_4fae78;
        case 0x4fae7cu: goto label_4fae7c;
        case 0x4fae80u: goto label_4fae80;
        case 0x4fae84u: goto label_4fae84;
        case 0x4fae88u: goto label_4fae88;
        case 0x4fae8cu: goto label_4fae8c;
        case 0x4fae90u: goto label_4fae90;
        case 0x4fae94u: goto label_4fae94;
        case 0x4fae98u: goto label_4fae98;
        case 0x4fae9cu: goto label_4fae9c;
        case 0x4faea0u: goto label_4faea0;
        case 0x4faea4u: goto label_4faea4;
        case 0x4faea8u: goto label_4faea8;
        case 0x4faeacu: goto label_4faeac;
        case 0x4faeb0u: goto label_4faeb0;
        case 0x4faeb4u: goto label_4faeb4;
        case 0x4faeb8u: goto label_4faeb8;
        case 0x4faebcu: goto label_4faebc;
        case 0x4faec0u: goto label_4faec0;
        case 0x4faec4u: goto label_4faec4;
        case 0x4faec8u: goto label_4faec8;
        case 0x4faeccu: goto label_4faecc;
        case 0x4faed0u: goto label_4faed0;
        case 0x4faed4u: goto label_4faed4;
        case 0x4faed8u: goto label_4faed8;
        case 0x4faedcu: goto label_4faedc;
        case 0x4faee0u: goto label_4faee0;
        case 0x4faee4u: goto label_4faee4;
        case 0x4faee8u: goto label_4faee8;
        case 0x4faeecu: goto label_4faeec;
        case 0x4faef0u: goto label_4faef0;
        case 0x4faef4u: goto label_4faef4;
        case 0x4faef8u: goto label_4faef8;
        case 0x4faefcu: goto label_4faefc;
        case 0x4faf00u: goto label_4faf00;
        case 0x4faf04u: goto label_4faf04;
        case 0x4faf08u: goto label_4faf08;
        case 0x4faf0cu: goto label_4faf0c;
        case 0x4faf10u: goto label_4faf10;
        case 0x4faf14u: goto label_4faf14;
        case 0x4faf18u: goto label_4faf18;
        case 0x4faf1cu: goto label_4faf1c;
        case 0x4faf20u: goto label_4faf20;
        case 0x4faf24u: goto label_4faf24;
        case 0x4faf28u: goto label_4faf28;
        case 0x4faf2cu: goto label_4faf2c;
        case 0x4faf30u: goto label_4faf30;
        case 0x4faf34u: goto label_4faf34;
        case 0x4faf38u: goto label_4faf38;
        case 0x4faf3cu: goto label_4faf3c;
        case 0x4faf40u: goto label_4faf40;
        case 0x4faf44u: goto label_4faf44;
        case 0x4faf48u: goto label_4faf48;
        case 0x4faf4cu: goto label_4faf4c;
        case 0x4faf50u: goto label_4faf50;
        case 0x4faf54u: goto label_4faf54;
        case 0x4faf58u: goto label_4faf58;
        case 0x4faf5cu: goto label_4faf5c;
        case 0x4faf60u: goto label_4faf60;
        case 0x4faf64u: goto label_4faf64;
        case 0x4faf68u: goto label_4faf68;
        case 0x4faf6cu: goto label_4faf6c;
        case 0x4faf70u: goto label_4faf70;
        case 0x4faf74u: goto label_4faf74;
        case 0x4faf78u: goto label_4faf78;
        case 0x4faf7cu: goto label_4faf7c;
        case 0x4faf80u: goto label_4faf80;
        case 0x4faf84u: goto label_4faf84;
        case 0x4faf88u: goto label_4faf88;
        case 0x4faf8cu: goto label_4faf8c;
        case 0x4faf90u: goto label_4faf90;
        case 0x4faf94u: goto label_4faf94;
        case 0x4faf98u: goto label_4faf98;
        case 0x4faf9cu: goto label_4faf9c;
        case 0x4fafa0u: goto label_4fafa0;
        case 0x4fafa4u: goto label_4fafa4;
        case 0x4fafa8u: goto label_4fafa8;
        case 0x4fafacu: goto label_4fafac;
        case 0x4fafb0u: goto label_4fafb0;
        case 0x4fafb4u: goto label_4fafb4;
        case 0x4fafb8u: goto label_4fafb8;
        case 0x4fafbcu: goto label_4fafbc;
        case 0x4fafc0u: goto label_4fafc0;
        case 0x4fafc4u: goto label_4fafc4;
        case 0x4fafc8u: goto label_4fafc8;
        case 0x4fafccu: goto label_4fafcc;
        case 0x4fafd0u: goto label_4fafd0;
        case 0x4fafd4u: goto label_4fafd4;
        case 0x4fafd8u: goto label_4fafd8;
        case 0x4fafdcu: goto label_4fafdc;
        case 0x4fafe0u: goto label_4fafe0;
        case 0x4fafe4u: goto label_4fafe4;
        case 0x4fafe8u: goto label_4fafe8;
        case 0x4fafecu: goto label_4fafec;
        case 0x4faff0u: goto label_4faff0;
        case 0x4faff4u: goto label_4faff4;
        case 0x4faff8u: goto label_4faff8;
        case 0x4faffcu: goto label_4faffc;
        case 0x4fb000u: goto label_4fb000;
        case 0x4fb004u: goto label_4fb004;
        case 0x4fb008u: goto label_4fb008;
        case 0x4fb00cu: goto label_4fb00c;
        case 0x4fb010u: goto label_4fb010;
        case 0x4fb014u: goto label_4fb014;
        case 0x4fb018u: goto label_4fb018;
        case 0x4fb01cu: goto label_4fb01c;
        case 0x4fb020u: goto label_4fb020;
        case 0x4fb024u: goto label_4fb024;
        case 0x4fb028u: goto label_4fb028;
        case 0x4fb02cu: goto label_4fb02c;
        case 0x4fb030u: goto label_4fb030;
        case 0x4fb034u: goto label_4fb034;
        case 0x4fb038u: goto label_4fb038;
        case 0x4fb03cu: goto label_4fb03c;
        case 0x4fb040u: goto label_4fb040;
        case 0x4fb044u: goto label_4fb044;
        case 0x4fb048u: goto label_4fb048;
        case 0x4fb04cu: goto label_4fb04c;
        case 0x4fb050u: goto label_4fb050;
        case 0x4fb054u: goto label_4fb054;
        case 0x4fb058u: goto label_4fb058;
        case 0x4fb05cu: goto label_4fb05c;
        case 0x4fb060u: goto label_4fb060;
        case 0x4fb064u: goto label_4fb064;
        case 0x4fb068u: goto label_4fb068;
        case 0x4fb06cu: goto label_4fb06c;
        case 0x4fb070u: goto label_4fb070;
        case 0x4fb074u: goto label_4fb074;
        case 0x4fb078u: goto label_4fb078;
        case 0x4fb07cu: goto label_4fb07c;
        case 0x4fb080u: goto label_4fb080;
        case 0x4fb084u: goto label_4fb084;
        case 0x4fb088u: goto label_4fb088;
        case 0x4fb08cu: goto label_4fb08c;
        case 0x4fb090u: goto label_4fb090;
        case 0x4fb094u: goto label_4fb094;
        case 0x4fb098u: goto label_4fb098;
        case 0x4fb09cu: goto label_4fb09c;
        case 0x4fb0a0u: goto label_4fb0a0;
        case 0x4fb0a4u: goto label_4fb0a4;
        case 0x4fb0a8u: goto label_4fb0a8;
        case 0x4fb0acu: goto label_4fb0ac;
        case 0x4fb0b0u: goto label_4fb0b0;
        case 0x4fb0b4u: goto label_4fb0b4;
        case 0x4fb0b8u: goto label_4fb0b8;
        case 0x4fb0bcu: goto label_4fb0bc;
        case 0x4fb0c0u: goto label_4fb0c0;
        case 0x4fb0c4u: goto label_4fb0c4;
        case 0x4fb0c8u: goto label_4fb0c8;
        case 0x4fb0ccu: goto label_4fb0cc;
        case 0x4fb0d0u: goto label_4fb0d0;
        case 0x4fb0d4u: goto label_4fb0d4;
        case 0x4fb0d8u: goto label_4fb0d8;
        case 0x4fb0dcu: goto label_4fb0dc;
        case 0x4fb0e0u: goto label_4fb0e0;
        case 0x4fb0e4u: goto label_4fb0e4;
        case 0x4fb0e8u: goto label_4fb0e8;
        case 0x4fb0ecu: goto label_4fb0ec;
        case 0x4fb0f0u: goto label_4fb0f0;
        case 0x4fb0f4u: goto label_4fb0f4;
        case 0x4fb0f8u: goto label_4fb0f8;
        case 0x4fb0fcu: goto label_4fb0fc;
        case 0x4fb100u: goto label_4fb100;
        case 0x4fb104u: goto label_4fb104;
        case 0x4fb108u: goto label_4fb108;
        case 0x4fb10cu: goto label_4fb10c;
        case 0x4fb110u: goto label_4fb110;
        case 0x4fb114u: goto label_4fb114;
        case 0x4fb118u: goto label_4fb118;
        case 0x4fb11cu: goto label_4fb11c;
        case 0x4fb120u: goto label_4fb120;
        case 0x4fb124u: goto label_4fb124;
        case 0x4fb128u: goto label_4fb128;
        case 0x4fb12cu: goto label_4fb12c;
        case 0x4fb130u: goto label_4fb130;
        case 0x4fb134u: goto label_4fb134;
        case 0x4fb138u: goto label_4fb138;
        case 0x4fb13cu: goto label_4fb13c;
        case 0x4fb140u: goto label_4fb140;
        case 0x4fb144u: goto label_4fb144;
        case 0x4fb148u: goto label_4fb148;
        case 0x4fb14cu: goto label_4fb14c;
        case 0x4fb150u: goto label_4fb150;
        case 0x4fb154u: goto label_4fb154;
        case 0x4fb158u: goto label_4fb158;
        case 0x4fb15cu: goto label_4fb15c;
        case 0x4fb160u: goto label_4fb160;
        case 0x4fb164u: goto label_4fb164;
        case 0x4fb168u: goto label_4fb168;
        case 0x4fb16cu: goto label_4fb16c;
        case 0x4fb170u: goto label_4fb170;
        case 0x4fb174u: goto label_4fb174;
        case 0x4fb178u: goto label_4fb178;
        case 0x4fb17cu: goto label_4fb17c;
        case 0x4fb180u: goto label_4fb180;
        case 0x4fb184u: goto label_4fb184;
        case 0x4fb188u: goto label_4fb188;
        case 0x4fb18cu: goto label_4fb18c;
        case 0x4fb190u: goto label_4fb190;
        case 0x4fb194u: goto label_4fb194;
        case 0x4fb198u: goto label_4fb198;
        case 0x4fb19cu: goto label_4fb19c;
        case 0x4fb1a0u: goto label_4fb1a0;
        case 0x4fb1a4u: goto label_4fb1a4;
        case 0x4fb1a8u: goto label_4fb1a8;
        case 0x4fb1acu: goto label_4fb1ac;
        case 0x4fb1b0u: goto label_4fb1b0;
        case 0x4fb1b4u: goto label_4fb1b4;
        case 0x4fb1b8u: goto label_4fb1b8;
        case 0x4fb1bcu: goto label_4fb1bc;
        case 0x4fb1c0u: goto label_4fb1c0;
        case 0x4fb1c4u: goto label_4fb1c4;
        case 0x4fb1c8u: goto label_4fb1c8;
        case 0x4fb1ccu: goto label_4fb1cc;
        case 0x4fb1d0u: goto label_4fb1d0;
        case 0x4fb1d4u: goto label_4fb1d4;
        case 0x4fb1d8u: goto label_4fb1d8;
        case 0x4fb1dcu: goto label_4fb1dc;
        case 0x4fb1e0u: goto label_4fb1e0;
        case 0x4fb1e4u: goto label_4fb1e4;
        case 0x4fb1e8u: goto label_4fb1e8;
        case 0x4fb1ecu: goto label_4fb1ec;
        case 0x4fb1f0u: goto label_4fb1f0;
        case 0x4fb1f4u: goto label_4fb1f4;
        case 0x4fb1f8u: goto label_4fb1f8;
        case 0x4fb1fcu: goto label_4fb1fc;
        case 0x4fb200u: goto label_4fb200;
        case 0x4fb204u: goto label_4fb204;
        case 0x4fb208u: goto label_4fb208;
        case 0x4fb20cu: goto label_4fb20c;
        case 0x4fb210u: goto label_4fb210;
        case 0x4fb214u: goto label_4fb214;
        case 0x4fb218u: goto label_4fb218;
        case 0x4fb21cu: goto label_4fb21c;
        case 0x4fb220u: goto label_4fb220;
        case 0x4fb224u: goto label_4fb224;
        case 0x4fb228u: goto label_4fb228;
        case 0x4fb22cu: goto label_4fb22c;
        case 0x4fb230u: goto label_4fb230;
        case 0x4fb234u: goto label_4fb234;
        case 0x4fb238u: goto label_4fb238;
        case 0x4fb23cu: goto label_4fb23c;
        case 0x4fb240u: goto label_4fb240;
        case 0x4fb244u: goto label_4fb244;
        case 0x4fb248u: goto label_4fb248;
        case 0x4fb24cu: goto label_4fb24c;
        case 0x4fb250u: goto label_4fb250;
        case 0x4fb254u: goto label_4fb254;
        case 0x4fb258u: goto label_4fb258;
        case 0x4fb25cu: goto label_4fb25c;
        case 0x4fb260u: goto label_4fb260;
        case 0x4fb264u: goto label_4fb264;
        case 0x4fb268u: goto label_4fb268;
        case 0x4fb26cu: goto label_4fb26c;
        case 0x4fb270u: goto label_4fb270;
        case 0x4fb274u: goto label_4fb274;
        case 0x4fb278u: goto label_4fb278;
        case 0x4fb27cu: goto label_4fb27c;
        case 0x4fb280u: goto label_4fb280;
        case 0x4fb284u: goto label_4fb284;
        case 0x4fb288u: goto label_4fb288;
        case 0x4fb28cu: goto label_4fb28c;
        case 0x4fb290u: goto label_4fb290;
        case 0x4fb294u: goto label_4fb294;
        case 0x4fb298u: goto label_4fb298;
        case 0x4fb29cu: goto label_4fb29c;
        case 0x4fb2a0u: goto label_4fb2a0;
        case 0x4fb2a4u: goto label_4fb2a4;
        case 0x4fb2a8u: goto label_4fb2a8;
        case 0x4fb2acu: goto label_4fb2ac;
        case 0x4fb2b0u: goto label_4fb2b0;
        case 0x4fb2b4u: goto label_4fb2b4;
        case 0x4fb2b8u: goto label_4fb2b8;
        case 0x4fb2bcu: goto label_4fb2bc;
        case 0x4fb2c0u: goto label_4fb2c0;
        case 0x4fb2c4u: goto label_4fb2c4;
        case 0x4fb2c8u: goto label_4fb2c8;
        case 0x4fb2ccu: goto label_4fb2cc;
        case 0x4fb2d0u: goto label_4fb2d0;
        case 0x4fb2d4u: goto label_4fb2d4;
        case 0x4fb2d8u: goto label_4fb2d8;
        case 0x4fb2dcu: goto label_4fb2dc;
        case 0x4fb2e0u: goto label_4fb2e0;
        case 0x4fb2e4u: goto label_4fb2e4;
        case 0x4fb2e8u: goto label_4fb2e8;
        case 0x4fb2ecu: goto label_4fb2ec;
        case 0x4fb2f0u: goto label_4fb2f0;
        case 0x4fb2f4u: goto label_4fb2f4;
        case 0x4fb2f8u: goto label_4fb2f8;
        case 0x4fb2fcu: goto label_4fb2fc;
        case 0x4fb300u: goto label_4fb300;
        case 0x4fb304u: goto label_4fb304;
        case 0x4fb308u: goto label_4fb308;
        case 0x4fb30cu: goto label_4fb30c;
        case 0x4fb310u: goto label_4fb310;
        case 0x4fb314u: goto label_4fb314;
        case 0x4fb318u: goto label_4fb318;
        case 0x4fb31cu: goto label_4fb31c;
        case 0x4fb320u: goto label_4fb320;
        case 0x4fb324u: goto label_4fb324;
        case 0x4fb328u: goto label_4fb328;
        case 0x4fb32cu: goto label_4fb32c;
        case 0x4fb330u: goto label_4fb330;
        case 0x4fb334u: goto label_4fb334;
        case 0x4fb338u: goto label_4fb338;
        case 0x4fb33cu: goto label_4fb33c;
        case 0x4fb340u: goto label_4fb340;
        case 0x4fb344u: goto label_4fb344;
        case 0x4fb348u: goto label_4fb348;
        case 0x4fb34cu: goto label_4fb34c;
        case 0x4fb350u: goto label_4fb350;
        case 0x4fb354u: goto label_4fb354;
        case 0x4fb358u: goto label_4fb358;
        case 0x4fb35cu: goto label_4fb35c;
        case 0x4fb360u: goto label_4fb360;
        case 0x4fb364u: goto label_4fb364;
        case 0x4fb368u: goto label_4fb368;
        case 0x4fb36cu: goto label_4fb36c;
        case 0x4fb370u: goto label_4fb370;
        case 0x4fb374u: goto label_4fb374;
        case 0x4fb378u: goto label_4fb378;
        case 0x4fb37cu: goto label_4fb37c;
        case 0x4fb380u: goto label_4fb380;
        case 0x4fb384u: goto label_4fb384;
        case 0x4fb388u: goto label_4fb388;
        case 0x4fb38cu: goto label_4fb38c;
        case 0x4fb390u: goto label_4fb390;
        case 0x4fb394u: goto label_4fb394;
        case 0x4fb398u: goto label_4fb398;
        case 0x4fb39cu: goto label_4fb39c;
        case 0x4fb3a0u: goto label_4fb3a0;
        case 0x4fb3a4u: goto label_4fb3a4;
        case 0x4fb3a8u: goto label_4fb3a8;
        case 0x4fb3acu: goto label_4fb3ac;
        case 0x4fb3b0u: goto label_4fb3b0;
        case 0x4fb3b4u: goto label_4fb3b4;
        case 0x4fb3b8u: goto label_4fb3b8;
        case 0x4fb3bcu: goto label_4fb3bc;
        case 0x4fb3c0u: goto label_4fb3c0;
        case 0x4fb3c4u: goto label_4fb3c4;
        case 0x4fb3c8u: goto label_4fb3c8;
        case 0x4fb3ccu: goto label_4fb3cc;
        case 0x4fb3d0u: goto label_4fb3d0;
        case 0x4fb3d4u: goto label_4fb3d4;
        case 0x4fb3d8u: goto label_4fb3d8;
        case 0x4fb3dcu: goto label_4fb3dc;
        case 0x4fb3e0u: goto label_4fb3e0;
        case 0x4fb3e4u: goto label_4fb3e4;
        case 0x4fb3e8u: goto label_4fb3e8;
        case 0x4fb3ecu: goto label_4fb3ec;
        case 0x4fb3f0u: goto label_4fb3f0;
        case 0x4fb3f4u: goto label_4fb3f4;
        case 0x4fb3f8u: goto label_4fb3f8;
        case 0x4fb3fcu: goto label_4fb3fc;
        case 0x4fb400u: goto label_4fb400;
        case 0x4fb404u: goto label_4fb404;
        case 0x4fb408u: goto label_4fb408;
        case 0x4fb40cu: goto label_4fb40c;
        case 0x4fb410u: goto label_4fb410;
        case 0x4fb414u: goto label_4fb414;
        case 0x4fb418u: goto label_4fb418;
        case 0x4fb41cu: goto label_4fb41c;
        case 0x4fb420u: goto label_4fb420;
        case 0x4fb424u: goto label_4fb424;
        case 0x4fb428u: goto label_4fb428;
        case 0x4fb42cu: goto label_4fb42c;
        case 0x4fb430u: goto label_4fb430;
        case 0x4fb434u: goto label_4fb434;
        case 0x4fb438u: goto label_4fb438;
        case 0x4fb43cu: goto label_4fb43c;
        case 0x4fb440u: goto label_4fb440;
        case 0x4fb444u: goto label_4fb444;
        case 0x4fb448u: goto label_4fb448;
        case 0x4fb44cu: goto label_4fb44c;
        case 0x4fb450u: goto label_4fb450;
        case 0x4fb454u: goto label_4fb454;
        case 0x4fb458u: goto label_4fb458;
        case 0x4fb45cu: goto label_4fb45c;
        case 0x4fb460u: goto label_4fb460;
        case 0x4fb464u: goto label_4fb464;
        case 0x4fb468u: goto label_4fb468;
        case 0x4fb46cu: goto label_4fb46c;
        case 0x4fb470u: goto label_4fb470;
        case 0x4fb474u: goto label_4fb474;
        case 0x4fb478u: goto label_4fb478;
        case 0x4fb47cu: goto label_4fb47c;
        case 0x4fb480u: goto label_4fb480;
        case 0x4fb484u: goto label_4fb484;
        case 0x4fb488u: goto label_4fb488;
        case 0x4fb48cu: goto label_4fb48c;
        case 0x4fb490u: goto label_4fb490;
        case 0x4fb494u: goto label_4fb494;
        case 0x4fb498u: goto label_4fb498;
        case 0x4fb49cu: goto label_4fb49c;
        case 0x4fb4a0u: goto label_4fb4a0;
        case 0x4fb4a4u: goto label_4fb4a4;
        case 0x4fb4a8u: goto label_4fb4a8;
        case 0x4fb4acu: goto label_4fb4ac;
        case 0x4fb4b0u: goto label_4fb4b0;
        case 0x4fb4b4u: goto label_4fb4b4;
        case 0x4fb4b8u: goto label_4fb4b8;
        case 0x4fb4bcu: goto label_4fb4bc;
        case 0x4fb4c0u: goto label_4fb4c0;
        case 0x4fb4c4u: goto label_4fb4c4;
        case 0x4fb4c8u: goto label_4fb4c8;
        case 0x4fb4ccu: goto label_4fb4cc;
        case 0x4fb4d0u: goto label_4fb4d0;
        case 0x4fb4d4u: goto label_4fb4d4;
        case 0x4fb4d8u: goto label_4fb4d8;
        case 0x4fb4dcu: goto label_4fb4dc;
        case 0x4fb4e0u: goto label_4fb4e0;
        case 0x4fb4e4u: goto label_4fb4e4;
        case 0x4fb4e8u: goto label_4fb4e8;
        case 0x4fb4ecu: goto label_4fb4ec;
        case 0x4fb4f0u: goto label_4fb4f0;
        case 0x4fb4f4u: goto label_4fb4f4;
        case 0x4fb4f8u: goto label_4fb4f8;
        case 0x4fb4fcu: goto label_4fb4fc;
        case 0x4fb500u: goto label_4fb500;
        case 0x4fb504u: goto label_4fb504;
        case 0x4fb508u: goto label_4fb508;
        case 0x4fb50cu: goto label_4fb50c;
        case 0x4fb510u: goto label_4fb510;
        case 0x4fb514u: goto label_4fb514;
        case 0x4fb518u: goto label_4fb518;
        case 0x4fb51cu: goto label_4fb51c;
        case 0x4fb520u: goto label_4fb520;
        case 0x4fb524u: goto label_4fb524;
        case 0x4fb528u: goto label_4fb528;
        case 0x4fb52cu: goto label_4fb52c;
        case 0x4fb530u: goto label_4fb530;
        case 0x4fb534u: goto label_4fb534;
        case 0x4fb538u: goto label_4fb538;
        case 0x4fb53cu: goto label_4fb53c;
        case 0x4fb540u: goto label_4fb540;
        case 0x4fb544u: goto label_4fb544;
        case 0x4fb548u: goto label_4fb548;
        case 0x4fb54cu: goto label_4fb54c;
        case 0x4fb550u: goto label_4fb550;
        case 0x4fb554u: goto label_4fb554;
        case 0x4fb558u: goto label_4fb558;
        case 0x4fb55cu: goto label_4fb55c;
        case 0x4fb560u: goto label_4fb560;
        case 0x4fb564u: goto label_4fb564;
        case 0x4fb568u: goto label_4fb568;
        case 0x4fb56cu: goto label_4fb56c;
        case 0x4fb570u: goto label_4fb570;
        case 0x4fb574u: goto label_4fb574;
        case 0x4fb578u: goto label_4fb578;
        case 0x4fb57cu: goto label_4fb57c;
        case 0x4fb580u: goto label_4fb580;
        case 0x4fb584u: goto label_4fb584;
        case 0x4fb588u: goto label_4fb588;
        case 0x4fb58cu: goto label_4fb58c;
        case 0x4fb590u: goto label_4fb590;
        case 0x4fb594u: goto label_4fb594;
        case 0x4fb598u: goto label_4fb598;
        case 0x4fb59cu: goto label_4fb59c;
        case 0x4fb5a0u: goto label_4fb5a0;
        case 0x4fb5a4u: goto label_4fb5a4;
        case 0x4fb5a8u: goto label_4fb5a8;
        case 0x4fb5acu: goto label_4fb5ac;
        case 0x4fb5b0u: goto label_4fb5b0;
        case 0x4fb5b4u: goto label_4fb5b4;
        case 0x4fb5b8u: goto label_4fb5b8;
        case 0x4fb5bcu: goto label_4fb5bc;
        case 0x4fb5c0u: goto label_4fb5c0;
        case 0x4fb5c4u: goto label_4fb5c4;
        case 0x4fb5c8u: goto label_4fb5c8;
        case 0x4fb5ccu: goto label_4fb5cc;
        case 0x4fb5d0u: goto label_4fb5d0;
        case 0x4fb5d4u: goto label_4fb5d4;
        case 0x4fb5d8u: goto label_4fb5d8;
        case 0x4fb5dcu: goto label_4fb5dc;
        case 0x4fb5e0u: goto label_4fb5e0;
        case 0x4fb5e4u: goto label_4fb5e4;
        case 0x4fb5e8u: goto label_4fb5e8;
        case 0x4fb5ecu: goto label_4fb5ec;
        case 0x4fb5f0u: goto label_4fb5f0;
        case 0x4fb5f4u: goto label_4fb5f4;
        case 0x4fb5f8u: goto label_4fb5f8;
        case 0x4fb5fcu: goto label_4fb5fc;
        case 0x4fb600u: goto label_4fb600;
        case 0x4fb604u: goto label_4fb604;
        case 0x4fb608u: goto label_4fb608;
        case 0x4fb60cu: goto label_4fb60c;
        case 0x4fb610u: goto label_4fb610;
        case 0x4fb614u: goto label_4fb614;
        case 0x4fb618u: goto label_4fb618;
        case 0x4fb61cu: goto label_4fb61c;
        case 0x4fb620u: goto label_4fb620;
        case 0x4fb624u: goto label_4fb624;
        case 0x4fb628u: goto label_4fb628;
        case 0x4fb62cu: goto label_4fb62c;
        case 0x4fb630u: goto label_4fb630;
        case 0x4fb634u: goto label_4fb634;
        case 0x4fb638u: goto label_4fb638;
        case 0x4fb63cu: goto label_4fb63c;
        case 0x4fb640u: goto label_4fb640;
        case 0x4fb644u: goto label_4fb644;
        case 0x4fb648u: goto label_4fb648;
        case 0x4fb64cu: goto label_4fb64c;
        case 0x4fb650u: goto label_4fb650;
        case 0x4fb654u: goto label_4fb654;
        case 0x4fb658u: goto label_4fb658;
        case 0x4fb65cu: goto label_4fb65c;
        case 0x4fb660u: goto label_4fb660;
        case 0x4fb664u: goto label_4fb664;
        case 0x4fb668u: goto label_4fb668;
        case 0x4fb66cu: goto label_4fb66c;
        case 0x4fb670u: goto label_4fb670;
        case 0x4fb674u: goto label_4fb674;
        case 0x4fb678u: goto label_4fb678;
        case 0x4fb67cu: goto label_4fb67c;
        case 0x4fb680u: goto label_4fb680;
        case 0x4fb684u: goto label_4fb684;
        case 0x4fb688u: goto label_4fb688;
        case 0x4fb68cu: goto label_4fb68c;
        case 0x4fb690u: goto label_4fb690;
        case 0x4fb694u: goto label_4fb694;
        case 0x4fb698u: goto label_4fb698;
        case 0x4fb69cu: goto label_4fb69c;
        case 0x4fb6a0u: goto label_4fb6a0;
        case 0x4fb6a4u: goto label_4fb6a4;
        case 0x4fb6a8u: goto label_4fb6a8;
        case 0x4fb6acu: goto label_4fb6ac;
        case 0x4fb6b0u: goto label_4fb6b0;
        case 0x4fb6b4u: goto label_4fb6b4;
        case 0x4fb6b8u: goto label_4fb6b8;
        case 0x4fb6bcu: goto label_4fb6bc;
        case 0x4fb6c0u: goto label_4fb6c0;
        case 0x4fb6c4u: goto label_4fb6c4;
        case 0x4fb6c8u: goto label_4fb6c8;
        case 0x4fb6ccu: goto label_4fb6cc;
        case 0x4fb6d0u: goto label_4fb6d0;
        case 0x4fb6d4u: goto label_4fb6d4;
        case 0x4fb6d8u: goto label_4fb6d8;
        case 0x4fb6dcu: goto label_4fb6dc;
        case 0x4fb6e0u: goto label_4fb6e0;
        case 0x4fb6e4u: goto label_4fb6e4;
        case 0x4fb6e8u: goto label_4fb6e8;
        case 0x4fb6ecu: goto label_4fb6ec;
        case 0x4fb6f0u: goto label_4fb6f0;
        case 0x4fb6f4u: goto label_4fb6f4;
        case 0x4fb6f8u: goto label_4fb6f8;
        case 0x4fb6fcu: goto label_4fb6fc;
        case 0x4fb700u: goto label_4fb700;
        case 0x4fb704u: goto label_4fb704;
        case 0x4fb708u: goto label_4fb708;
        case 0x4fb70cu: goto label_4fb70c;
        case 0x4fb710u: goto label_4fb710;
        case 0x4fb714u: goto label_4fb714;
        case 0x4fb718u: goto label_4fb718;
        case 0x4fb71cu: goto label_4fb71c;
        case 0x4fb720u: goto label_4fb720;
        case 0x4fb724u: goto label_4fb724;
        case 0x4fb728u: goto label_4fb728;
        case 0x4fb72cu: goto label_4fb72c;
        case 0x4fb730u: goto label_4fb730;
        case 0x4fb734u: goto label_4fb734;
        case 0x4fb738u: goto label_4fb738;
        case 0x4fb73cu: goto label_4fb73c;
        case 0x4fb740u: goto label_4fb740;
        case 0x4fb744u: goto label_4fb744;
        case 0x4fb748u: goto label_4fb748;
        case 0x4fb74cu: goto label_4fb74c;
        case 0x4fb750u: goto label_4fb750;
        case 0x4fb754u: goto label_4fb754;
        case 0x4fb758u: goto label_4fb758;
        case 0x4fb75cu: goto label_4fb75c;
        case 0x4fb760u: goto label_4fb760;
        case 0x4fb764u: goto label_4fb764;
        case 0x4fb768u: goto label_4fb768;
        case 0x4fb76cu: goto label_4fb76c;
        case 0x4fb770u: goto label_4fb770;
        case 0x4fb774u: goto label_4fb774;
        case 0x4fb778u: goto label_4fb778;
        case 0x4fb77cu: goto label_4fb77c;
        case 0x4fb780u: goto label_4fb780;
        case 0x4fb784u: goto label_4fb784;
        case 0x4fb788u: goto label_4fb788;
        case 0x4fb78cu: goto label_4fb78c;
        case 0x4fb790u: goto label_4fb790;
        case 0x4fb794u: goto label_4fb794;
        case 0x4fb798u: goto label_4fb798;
        case 0x4fb79cu: goto label_4fb79c;
        case 0x4fb7a0u: goto label_4fb7a0;
        case 0x4fb7a4u: goto label_4fb7a4;
        case 0x4fb7a8u: goto label_4fb7a8;
        case 0x4fb7acu: goto label_4fb7ac;
        case 0x4fb7b0u: goto label_4fb7b0;
        case 0x4fb7b4u: goto label_4fb7b4;
        case 0x4fb7b8u: goto label_4fb7b8;
        case 0x4fb7bcu: goto label_4fb7bc;
        case 0x4fb7c0u: goto label_4fb7c0;
        case 0x4fb7c4u: goto label_4fb7c4;
        case 0x4fb7c8u: goto label_4fb7c8;
        case 0x4fb7ccu: goto label_4fb7cc;
        case 0x4fb7d0u: goto label_4fb7d0;
        case 0x4fb7d4u: goto label_4fb7d4;
        case 0x4fb7d8u: goto label_4fb7d8;
        case 0x4fb7dcu: goto label_4fb7dc;
        case 0x4fb7e0u: goto label_4fb7e0;
        case 0x4fb7e4u: goto label_4fb7e4;
        case 0x4fb7e8u: goto label_4fb7e8;
        case 0x4fb7ecu: goto label_4fb7ec;
        case 0x4fb7f0u: goto label_4fb7f0;
        case 0x4fb7f4u: goto label_4fb7f4;
        case 0x4fb7f8u: goto label_4fb7f8;
        case 0x4fb7fcu: goto label_4fb7fc;
        case 0x4fb800u: goto label_4fb800;
        case 0x4fb804u: goto label_4fb804;
        case 0x4fb808u: goto label_4fb808;
        case 0x4fb80cu: goto label_4fb80c;
        case 0x4fb810u: goto label_4fb810;
        case 0x4fb814u: goto label_4fb814;
        case 0x4fb818u: goto label_4fb818;
        case 0x4fb81cu: goto label_4fb81c;
        case 0x4fb820u: goto label_4fb820;
        case 0x4fb824u: goto label_4fb824;
        case 0x4fb828u: goto label_4fb828;
        case 0x4fb82cu: goto label_4fb82c;
        case 0x4fb830u: goto label_4fb830;
        case 0x4fb834u: goto label_4fb834;
        case 0x4fb838u: goto label_4fb838;
        case 0x4fb83cu: goto label_4fb83c;
        case 0x4fb840u: goto label_4fb840;
        case 0x4fb844u: goto label_4fb844;
        case 0x4fb848u: goto label_4fb848;
        case 0x4fb84cu: goto label_4fb84c;
        case 0x4fb850u: goto label_4fb850;
        case 0x4fb854u: goto label_4fb854;
        case 0x4fb858u: goto label_4fb858;
        case 0x4fb85cu: goto label_4fb85c;
        case 0x4fb860u: goto label_4fb860;
        case 0x4fb864u: goto label_4fb864;
        case 0x4fb868u: goto label_4fb868;
        case 0x4fb86cu: goto label_4fb86c;
        default: break;
    }

    ctx->pc = 0x4fad80u;

label_4fad80:
    // 0x4fad80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4fad84:
    // 0x4fad84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fad88:
    // 0x4fad88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4fad88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4fad8c:
    // 0x4fad8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4fad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4fad90:
    // 0x4fad90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4fad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4fad94:
    // 0x4fad94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4fad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4fad98:
    // 0x4fad98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4fad98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4fad9c:
    // 0x4fad9c: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x4fad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4fada0:
    // 0x4fada0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4fada0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4fada4:
    // 0x4fada4: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x4fada4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_4fada8:
    // 0x4fada8: 0x8ca20da0  lw          $v0, 0xDA0($a1)
    ctx->pc = 0x4fada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_4fadac:
    // 0x4fadac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4fadacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4fadb0:
    // 0x4fadb0: 0x144002a5  bnez        $v0, . + 4 + (0x2A5 << 2)
label_4fadb4:
    if (ctx->pc == 0x4FADB4u) {
        ctx->pc = 0x4FADB4u;
            // 0x4fadb4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FADB8u;
        goto label_4fadb8;
    }
    ctx->pc = 0x4FADB0u;
    {
        const bool branch_taken_0x4fadb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FADB0u;
            // 0x4fadb4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fadb0) {
            ctx->pc = 0x4FB848u;
            goto label_4fb848;
        }
    }
    ctx->pc = 0x4FADB8u;
label_4fadb8:
    // 0x4fadb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fadbc:
    // 0x4fadbc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4fadbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4fadc0:
    // 0x4fadc0: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x4fadc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fadc4:
    // 0x4fadc4: 0x94a40c7e  lhu         $a0, 0xC7E($a1)
    ctx->pc = 0x4fadc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3198)));
label_4fadc8:
    // 0x4fadc8: 0x8cb00d78  lw          $s0, 0xD78($a1)
    ctx->pc = 0x4fadc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3448)));
label_4fadcc:
    // 0x4fadcc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4fadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fadd0:
    // 0x4fadd0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4fadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_4fadd4:
    // 0x4fadd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4fadd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4fadd8:
    // 0x4fadd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fadd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4faddc:
    // 0x4faddc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x4faddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4fade0:
    // 0x4fade0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x4fade0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4fade4:
    // 0x4fade4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4fade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fade8:
    // 0x4fade8: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x4fade8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_4fadec:
    // 0x4fadec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4fadecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4fadf0:
    // 0x4fadf0: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x4fadf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_4fadf4:
    // 0x4fadf4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4fadf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fadf8:
    // 0x4fadf8: 0xc4740020  lwc1        $f20, 0x20($v1)
    ctx->pc = 0x4fadf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4fadfc:
    // 0x4fadfc: 0x108201eb  beq         $a0, $v0, . + 4 + (0x1EB << 2)
label_4fae00:
    if (ctx->pc == 0x4FAE00u) {
        ctx->pc = 0x4FAE00u;
            // 0x4fae00: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4FAE04u;
        goto label_4fae04;
    }
    ctx->pc = 0x4FADFCu;
    {
        const bool branch_taken_0x4fadfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FAE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FADFCu;
            // 0x4fae00: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fadfc) {
            ctx->pc = 0x4FB5ACu;
            goto label_4fb5ac;
        }
    }
    ctx->pc = 0x4FAE04u;
label_4fae04:
    // 0x4fae04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fae08:
    // 0x4fae08: 0x50820172  beql        $a0, $v0, . + 4 + (0x172 << 2)
label_4fae0c:
    if (ctx->pc == 0x4FAE0Cu) {
        ctx->pc = 0x4FAE0Cu;
            // 0x4fae0c: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FAE10u;
        goto label_4fae10;
    }
    ctx->pc = 0x4FAE08u;
    {
        const bool branch_taken_0x4fae08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fae08) {
            ctx->pc = 0x4FAE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE08u;
            // 0x4fae0c: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB3D4u;
            goto label_4fb3d4;
        }
    }
    ctx->pc = 0x4FAE10u;
label_4fae10:
    // 0x4fae10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fae14:
    // 0x4fae14: 0x508200f6  beql        $a0, $v0, . + 4 + (0xF6 << 2)
label_4fae18:
    if (ctx->pc == 0x4FAE18u) {
        ctx->pc = 0x4FAE18u;
            // 0x4fae18: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FAE1Cu;
        goto label_4fae1c;
    }
    ctx->pc = 0x4FAE14u;
    {
        const bool branch_taken_0x4fae14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fae14) {
            ctx->pc = 0x4FAE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE14u;
            // 0x4fae18: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB1F0u;
            goto label_4fb1f0;
        }
    }
    ctx->pc = 0x4FAE1Cu;
label_4fae1c:
    // 0x4fae1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fae20:
    // 0x4fae20: 0x5083007c  beql        $a0, $v1, . + 4 + (0x7C << 2)
label_4fae24:
    if (ctx->pc == 0x4FAE24u) {
        ctx->pc = 0x4FAE24u;
            // 0x4fae24: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FAE28u;
        goto label_4fae28;
    }
    ctx->pc = 0x4FAE20u;
    {
        const bool branch_taken_0x4fae20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fae20) {
            ctx->pc = 0x4FAE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE20u;
            // 0x4fae24: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB014u;
            goto label_4fb014;
        }
    }
    ctx->pc = 0x4FAE28u;
label_4fae28:
    // 0x4fae28: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_4fae2c:
    if (ctx->pc == 0x4FAE2Cu) {
        ctx->pc = 0x4FAE2Cu;
            // 0x4fae2c: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FAE30u;
        goto label_4fae30;
    }
    ctx->pc = 0x4FAE28u;
    {
        const bool branch_taken_0x4fae28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fae28) {
            ctx->pc = 0x4FAE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE28u;
            // 0x4fae2c: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAE38u;
            goto label_4fae38;
        }
    }
    ctx->pc = 0x4FAE30u;
label_4fae30:
    // 0x4fae30: 0x10000285  b           . + 4 + (0x285 << 2)
label_4fae34:
    if (ctx->pc == 0x4FAE34u) {
        ctx->pc = 0x4FAE34u;
            // 0x4fae34: 0xe65400a4  swc1        $f20, 0xA4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
        ctx->pc = 0x4FAE38u;
        goto label_4fae38;
    }
    ctx->pc = 0x4FAE30u;
    {
        const bool branch_taken_0x4fae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE30u;
            // 0x4fae34: 0xe65400a4  swc1        $f20, 0xA4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fae30) {
            ctx->pc = 0x4FB848u;
            goto label_4fb848;
        }
    }
    ctx->pc = 0x4FAE38u;
label_4fae38:
    // 0x4fae38: 0x38a40005  xori        $a0, $a1, 0x5
    ctx->pc = 0x4fae38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_4fae3c:
    // 0x4fae3c: 0x38a30006  xori        $v1, $a1, 0x6
    ctx->pc = 0x4fae3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
label_4fae40:
    // 0x4fae40: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4fae40u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fae44:
    // 0x4fae44: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fae44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fae48:
    // 0x4fae48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fae48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fae4c:
    // 0x4fae4c: 0x38a30009  xori        $v1, $a1, 0x9
    ctx->pc = 0x4fae4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9);
label_4fae50:
    // 0x4fae50: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fae50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fae54:
    // 0x4fae54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fae54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4fae58:
    // 0x4fae58: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4fae5c:
    if (ctx->pc == 0x4FAE5Cu) {
        ctx->pc = 0x4FAE5Cu;
            // 0x4fae5c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4FAE60u;
        goto label_4fae60;
    }
    ctx->pc = 0x4FAE58u;
    {
        const bool branch_taken_0x4fae58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fae58) {
            ctx->pc = 0x4FAE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE58u;
            // 0x4fae5c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAE7Cu;
            goto label_4fae7c;
        }
    }
    ctx->pc = 0x4FAE60u;
label_4fae60:
    // 0x4fae60: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fae64:
    // 0x4fae64: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fae64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fae68:
    // 0x4fae68: 0x2442e5a0  addiu       $v0, $v0, -0x1A60
    ctx->pc = 0x4fae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960544));
label_4fae6c:
    // 0x4fae6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fae70:
    // 0x4fae70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fae74:
    // 0x4fae74: 0x10000018  b           . + 4 + (0x18 << 2)
label_4fae78:
    if (ctx->pc == 0x4FAE78u) {
        ctx->pc = 0x4FAE78u;
            // 0x4fae78: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FAE7Cu;
        goto label_4fae7c;
    }
    ctx->pc = 0x4FAE74u;
    {
        const bool branch_taken_0x4fae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE74u;
            // 0x4fae78: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fae74) {
            ctx->pc = 0x4FAED8u;
            goto label_4faed8;
        }
    }
    ctx->pc = 0x4FAE7Cu;
label_4fae7c:
    // 0x4fae7c: 0x54a30008  bnel        $a1, $v1, . + 4 + (0x8 << 2)
label_4fae80:
    if (ctx->pc == 0x4FAE80u) {
        ctx->pc = 0x4FAE80u;
            // 0x4fae80: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x4FAE84u;
        goto label_4fae84;
    }
    ctx->pc = 0x4FAE7Cu;
    {
        const bool branch_taken_0x4fae7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fae7c) {
            ctx->pc = 0x4FAE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE7Cu;
            // 0x4fae80: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAEA0u;
            goto label_4faea0;
        }
    }
    ctx->pc = 0x4FAE84u;
label_4fae84:
    // 0x4fae84: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fae88:
    // 0x4fae88: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fae8c:
    // 0x4fae8c: 0x2442e7c0  addiu       $v0, $v0, -0x1840
    ctx->pc = 0x4fae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
label_4fae90:
    // 0x4fae90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fae90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fae94:
    // 0x4fae94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fae98:
    // 0x4fae98: 0x1000000f  b           . + 4 + (0xF << 2)
label_4fae9c:
    if (ctx->pc == 0x4FAE9Cu) {
        ctx->pc = 0x4FAE9Cu;
            // 0x4fae9c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FAEA0u;
        goto label_4faea0;
    }
    ctx->pc = 0x4FAE98u;
    {
        const bool branch_taken_0x4fae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAE98u;
            // 0x4fae9c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fae98) {
            ctx->pc = 0x4FAED8u;
            goto label_4faed8;
        }
    }
    ctx->pc = 0x4FAEA0u;
label_4faea0:
    // 0x4faea0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_4faea4:
    if (ctx->pc == 0x4FAEA4u) {
        ctx->pc = 0x4FAEA4u;
            // 0x4faea4: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x4FAEA8u;
        goto label_4faea8;
    }
    ctx->pc = 0x4FAEA0u;
    {
        const bool branch_taken_0x4faea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4faea0) {
            ctx->pc = 0x4FAEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAEA0u;
            // 0x4faea4: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAEC4u;
            goto label_4faec4;
        }
    }
    ctx->pc = 0x4FAEA8u;
label_4faea8:
    // 0x4faea8: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4faea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4faeac:
    // 0x4faeac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4faeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4faeb0:
    // 0x4faeb0: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x4faeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
label_4faeb4:
    // 0x4faeb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4faeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4faeb8:
    // 0x4faeb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4faeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4faebc:
    // 0x4faebc: 0x10000006  b           . + 4 + (0x6 << 2)
label_4faec0:
    if (ctx->pc == 0x4FAEC0u) {
        ctx->pc = 0x4FAEC0u;
            // 0x4faec0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FAEC4u;
        goto label_4faec4;
    }
    ctx->pc = 0x4FAEBCu;
    {
        const bool branch_taken_0x4faebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAEBCu;
            // 0x4faec0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faebc) {
            ctx->pc = 0x4FAED8u;
            goto label_4faed8;
        }
    }
    ctx->pc = 0x4FAEC4u;
label_4faec4:
    // 0x4faec4: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x4faec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_4faec8:
    // 0x4faec8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4faec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4faecc:
    // 0x4faecc: 0x430019  multu       $v0, $v1
    ctx->pc = 0x4faeccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4faed0:
    // 0x4faed0: 0x1010  mfhi        $v0
    ctx->pc = 0x4faed0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4faed4:
    // 0x4faed4: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x4faed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4faed8:
    // 0x4faed8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4faed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4faedc:
    // 0x4faedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4faedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4faee0:
    // 0x4faee0: 0x0  nop
    ctx->pc = 0x4faee0u;
    // NOP
label_4faee4:
    // 0x4faee4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4faee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4faee8:
    // 0x4faee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4faee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4faeec:
    // 0x4faeec: 0x45000255  bc1f        . + 4 + (0x255 << 2)
label_4faef0:
    if (ctx->pc == 0x4FAEF0u) {
        ctx->pc = 0x4FAEF4u;
        goto label_4faef4;
    }
    ctx->pc = 0x4FAEECu;
    {
        const bool branch_taken_0x4faeec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4faeec) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FAEF4u;
label_4faef4:
    // 0x4faef4: 0x9244005a  lbu         $a0, 0x5A($s2)
    ctx->pc = 0x4faef4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_4faef8:
    // 0x4faef8: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x4faef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4faefc:
    // 0x4faefc: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x4faefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_4faf00:
    // 0x4faf00: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4faf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4faf04:
    // 0x4faf04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4faf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4faf08:
    // 0x4faf08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4faf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4faf0c:
    // 0x4faf0c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4faf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4faf10:
    // 0x4faf10: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4faf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4faf14:
    // 0x4faf14: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4faf14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4faf18:
    // 0x4faf18: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4faf1c:
    if (ctx->pc == 0x4FAF1Cu) {
        ctx->pc = 0x4FAF1Cu;
            // 0x4faf1c: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x4FAF20u;
        goto label_4faf20;
    }
    ctx->pc = 0x4FAF18u;
    {
        const bool branch_taken_0x4faf18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4faf18) {
            ctx->pc = 0x4FAF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAF18u;
            // 0x4faf1c: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAF2Cu;
            goto label_4faf2c;
        }
    }
    ctx->pc = 0x4FAF20u;
label_4faf20:
    // 0x4faf20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4faf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4faf24:
    // 0x4faf24: 0x10000007  b           . + 4 + (0x7 << 2)
label_4faf28:
    if (ctx->pc == 0x4FAF28u) {
        ctx->pc = 0x4FAF28u;
            // 0x4faf28: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x4FAF2Cu;
        goto label_4faf2c;
    }
    ctx->pc = 0x4FAF24u;
    {
        const bool branch_taken_0x4faf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAF24u;
            // 0x4faf28: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faf24) {
            ctx->pc = 0x4FAF44u;
            goto label_4faf44;
        }
    }
    ctx->pc = 0x4FAF2Cu;
label_4faf2c:
    // 0x4faf2c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4faf2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4faf30:
    // 0x4faf30: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4faf34:
    if (ctx->pc == 0x4FAF34u) {
        ctx->pc = 0x4FAF34u;
            // 0x4faf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FAF38u;
        goto label_4faf38;
    }
    ctx->pc = 0x4FAF30u;
    {
        const bool branch_taken_0x4faf30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4faf30) {
            ctx->pc = 0x4FAF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAF30u;
            // 0x4faf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAF40u;
            goto label_4faf40;
        }
    }
    ctx->pc = 0x4FAF38u;
label_4faf38:
    // 0x4faf38: 0x10000002  b           . + 4 + (0x2 << 2)
label_4faf3c:
    if (ctx->pc == 0x4FAF3Cu) {
        ctx->pc = 0x4FAF3Cu;
            // 0x4faf3c: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x4FAF40u;
        goto label_4faf40;
    }
    ctx->pc = 0x4FAF38u;
    {
        const bool branch_taken_0x4faf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAF38u;
            // 0x4faf3c: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faf38) {
            ctx->pc = 0x4FAF44u;
            goto label_4faf44;
        }
    }
    ctx->pc = 0x4FAF40u;
label_4faf40:
    // 0x4faf40: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x4faf40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_4faf44:
    // 0x4faf44: 0x8e46006c  lw          $a2, 0x6C($s2)
    ctx->pc = 0x4faf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4faf48:
    // 0x4faf48: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4faf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4faf4c:
    // 0x4faf4c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4faf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4faf50:
    // 0x4faf50: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4faf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4faf54:
    // 0x4faf54: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x4faf54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4faf58:
    // 0x4faf58: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x4faf58u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_4faf5c:
    // 0x4faf5c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x4faf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_4faf60:
    // 0x4faf60: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x4faf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4faf64:
    // 0x4faf64: 0x2810  mfhi        $a1
    ctx->pc = 0x4faf64u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4faf68:
    // 0x4faf68: 0x860019  multu       $a0, $a2
    ctx->pc = 0x4faf68u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4faf6c:
    // 0x4faf6c: 0xa645010e  sh          $a1, 0x10E($s2)
    ctx->pc = 0x4faf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 5));
label_4faf70:
    // 0x4faf70: 0x0  nop
    ctx->pc = 0x4faf70u;
    // NOP
label_4faf74:
    // 0x4faf74: 0x2010  mfhi        $a0
    ctx->pc = 0x4faf74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4faf78:
    // 0x4faf78: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x4faf78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_4faf7c:
    // 0x4faf7c: 0x440019  multu       $v0, $a0
    ctx->pc = 0x4faf7cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4faf80:
    // 0x4faf80: 0x1010  mfhi        $v0
    ctx->pc = 0x4faf80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4faf84:
    // 0x4faf84: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x4faf84u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_4faf88:
    // 0x4faf88: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4faf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4faf8c:
    // 0x4faf8c: 0x0  nop
    ctx->pc = 0x4faf8cu;
    // NOP
label_4faf90:
    // 0x4faf90: 0x1010  mfhi        $v0
    ctx->pc = 0x4faf90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4faf94:
    // 0x4faf94: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4faf94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4faf98:
    // 0x4faf98: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4faf9c:
    if (ctx->pc == 0x4FAF9Cu) {
        ctx->pc = 0x4FAF9Cu;
            // 0x4faf9c: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FAFA0u;
        goto label_4fafa0;
    }
    ctx->pc = 0x4FAF98u;
    {
        const bool branch_taken_0x4faf98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FAF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAF98u;
            // 0x4faf9c: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faf98) {
            ctx->pc = 0x4FAFB4u;
            goto label_4fafb4;
        }
    }
    ctx->pc = 0x4FAFA0u;
label_4fafa0:
    // 0x4fafa0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4fafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fafa4:
    // 0x4fafa4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4fafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fafa8:
    // 0x4fafa8: 0xa642010e  sh          $v0, 0x10E($s2)
    ctx->pc = 0x4fafa8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 2));
label_4fafac:
    // 0x4fafac: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4fafacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fafb0:
    // 0x4fafb0: 0xa242010d  sb          $v0, 0x10D($s2)
    ctx->pc = 0x4fafb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
label_4fafb4:
    // 0x4fafb4: 0xa243010c  sb          $v1, 0x10C($s2)
    ctx->pc = 0x4fafb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 268), (uint8_t)GPR_U32(ctx, 3));
label_4fafb8:
    // 0x4fafb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fafbc:
    // 0x4fafbc: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x4fafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_4fafc0:
    // 0x4fafc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4fafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fafc4:
    // 0x4fafc4: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x4fafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fafc8:
    // 0x4fafc8: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x4fafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_4fafcc:
    // 0x4fafcc: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x4fafccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
label_4fafd0:
    // 0x4fafd0: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x4fafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_4fafd4:
    // 0x4fafd4: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x4fafd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4fafd8:
    // 0x4fafd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4fafd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4fafdc:
    // 0x4fafdc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fafdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fafe0:
    // 0x4fafe0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fafe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fafe4:
    // 0x4fafe4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4fafe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fafe8:
    // 0x4fafe8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4fafec:
    if (ctx->pc == 0x4FAFECu) {
        ctx->pc = 0x4FAFECu;
            // 0x4fafec: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FAFF0u;
        goto label_4faff0;
    }
    ctx->pc = 0x4FAFE8u;
    {
        const bool branch_taken_0x4fafe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fafe8) {
            ctx->pc = 0x4FAFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAFE8u;
            // 0x4fafec: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAFF8u;
            goto label_4faff8;
        }
    }
    ctx->pc = 0x4FAFF0u;
label_4faff0:
    // 0x4faff0: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x4faff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
label_4faff4:
    // 0x4faff4: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x4faff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4faff8:
    // 0x4faff8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4faff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4faffc:
    // 0x4faffc: 0x14620211  bne         $v1, $v0, . + 4 + (0x211 << 2)
label_4fb000:
    if (ctx->pc == 0x4FB000u) {
        ctx->pc = 0x4FB004u;
        goto label_4fb004;
    }
    ctx->pc = 0x4FAFFCu;
    {
        const bool branch_taken_0x4faffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4faffc) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB004u;
label_4fb004:
    // 0x4fb004: 0xc13dfd8  jal         func_4F7F60
label_4fb008:
    if (ctx->pc == 0x4FB008u) {
        ctx->pc = 0x4FB008u;
            // 0x4fb008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB00Cu;
        goto label_4fb00c;
    }
    ctx->pc = 0x4FB004u;
    SET_GPR_U32(ctx, 31, 0x4FB00Cu);
    ctx->pc = 0x4FB008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB004u;
            // 0x4fb008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7F60u;
    if (runtime->hasFunction(0x4F7F60u)) {
        auto targetFn = runtime->lookupFunction(0x4F7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB00Cu; }
        if (ctx->pc != 0x4FB00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7F60_0x4f7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB00Cu; }
        if (ctx->pc != 0x4FB00Cu) { return; }
    }
    ctx->pc = 0x4FB00Cu;
label_4fb00c:
    // 0x4fb00c: 0x1000020d  b           . + 4 + (0x20D << 2)
label_4fb010:
    if (ctx->pc == 0x4FB010u) {
        ctx->pc = 0x4FB014u;
        goto label_4fb014;
    }
    ctx->pc = 0x4FB00Cu;
    {
        const bool branch_taken_0x4fb00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb00c) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB014u;
label_4fb014:
    // 0x4fb014: 0x38a40005  xori        $a0, $a1, 0x5
    ctx->pc = 0x4fb014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_4fb018:
    // 0x4fb018: 0x38a30006  xori        $v1, $a1, 0x6
    ctx->pc = 0x4fb018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
label_4fb01c:
    // 0x4fb01c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4fb01cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb020:
    // 0x4fb020: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb020u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb024:
    // 0x4fb024: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fb024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fb028:
    // 0x4fb028: 0x38a30009  xori        $v1, $a1, 0x9
    ctx->pc = 0x4fb028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9);
label_4fb02c:
    // 0x4fb02c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb02cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb030:
    // 0x4fb030: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fb030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4fb034:
    // 0x4fb034: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4fb038:
    if (ctx->pc == 0x4FB038u) {
        ctx->pc = 0x4FB038u;
            // 0x4fb038: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4FB03Cu;
        goto label_4fb03c;
    }
    ctx->pc = 0x4FB034u;
    {
        const bool branch_taken_0x4fb034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb034) {
            ctx->pc = 0x4FB038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB034u;
            // 0x4fb038: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB058u;
            goto label_4fb058;
        }
    }
    ctx->pc = 0x4FB03Cu;
label_4fb03c:
    // 0x4fb03c: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb040:
    // 0x4fb040: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb044:
    // 0x4fb044: 0x2442e5a4  addiu       $v0, $v0, -0x1A5C
    ctx->pc = 0x4fb044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960548));
label_4fb048:
    // 0x4fb048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb04c:
    // 0x4fb04c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb050:
    // 0x4fb050: 0x10000019  b           . + 4 + (0x19 << 2)
label_4fb054:
    if (ctx->pc == 0x4FB054u) {
        ctx->pc = 0x4FB054u;
            // 0x4fb054: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB058u;
        goto label_4fb058;
    }
    ctx->pc = 0x4FB050u;
    {
        const bool branch_taken_0x4fb050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB050u;
            // 0x4fb054: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb050) {
            ctx->pc = 0x4FB0B8u;
            goto label_4fb0b8;
        }
    }
    ctx->pc = 0x4FB058u;
label_4fb058:
    // 0x4fb058: 0x54a30008  bnel        $a1, $v1, . + 4 + (0x8 << 2)
label_4fb05c:
    if (ctx->pc == 0x4FB05Cu) {
        ctx->pc = 0x4FB05Cu;
            // 0x4fb05c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x4FB060u;
        goto label_4fb060;
    }
    ctx->pc = 0x4FB058u;
    {
        const bool branch_taken_0x4fb058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fb058) {
            ctx->pc = 0x4FB05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB058u;
            // 0x4fb05c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB07Cu;
            goto label_4fb07c;
        }
    }
    ctx->pc = 0x4FB060u;
label_4fb060:
    // 0x4fb060: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb064:
    // 0x4fb064: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb068:
    // 0x4fb068: 0x2442e7c4  addiu       $v0, $v0, -0x183C
    ctx->pc = 0x4fb068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961092));
label_4fb06c:
    // 0x4fb06c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb070:
    // 0x4fb070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb074:
    // 0x4fb074: 0x10000010  b           . + 4 + (0x10 << 2)
label_4fb078:
    if (ctx->pc == 0x4FB078u) {
        ctx->pc = 0x4FB078u;
            // 0x4fb078: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB07Cu;
        goto label_4fb07c;
    }
    ctx->pc = 0x4FB074u;
    {
        const bool branch_taken_0x4fb074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB074u;
            // 0x4fb078: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb074) {
            ctx->pc = 0x4FB0B8u;
            goto label_4fb0b8;
        }
    }
    ctx->pc = 0x4FB07Cu;
label_4fb07c:
    // 0x4fb07c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_4fb080:
    if (ctx->pc == 0x4FB080u) {
        ctx->pc = 0x4FB080u;
            // 0x4fb080: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x4FB084u;
        goto label_4fb084;
    }
    ctx->pc = 0x4FB07Cu;
    {
        const bool branch_taken_0x4fb07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb07c) {
            ctx->pc = 0x4FB080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB07Cu;
            // 0x4fb080: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB0A0u;
            goto label_4fb0a0;
        }
    }
    ctx->pc = 0x4FB084u;
label_4fb084:
    // 0x4fb084: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb088:
    // 0x4fb088: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb08c:
    // 0x4fb08c: 0x2442e6b4  addiu       $v0, $v0, -0x194C
    ctx->pc = 0x4fb08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960820));
label_4fb090:
    // 0x4fb090: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb094:
    // 0x4fb094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb098:
    // 0x4fb098: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fb09c:
    if (ctx->pc == 0x4FB09Cu) {
        ctx->pc = 0x4FB09Cu;
            // 0x4fb09c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB0A0u;
        goto label_4fb0a0;
    }
    ctx->pc = 0x4FB098u;
    {
        const bool branch_taken_0x4fb098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB098u;
            // 0x4fb09c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb098) {
            ctx->pc = 0x4FB0B8u;
            goto label_4fb0b8;
        }
    }
    ctx->pc = 0x4FB0A0u;
label_4fb0a0:
    // 0x4fb0a0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x4fb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_4fb0a4:
    // 0x4fb0a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4fb0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4fb0a8:
    // 0x4fb0a8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x4fb0a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb0ac:
    // 0x4fb0ac: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb0acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb0b0:
    // 0x4fb0b0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4fb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4fb0b4:
    // 0x4fb0b4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x4fb0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4fb0b8:
    // 0x4fb0b8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4fb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_4fb0bc:
    // 0x4fb0bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fb0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fb0c0:
    // 0x4fb0c0: 0x0  nop
    ctx->pc = 0x4fb0c0u;
    // NOP
label_4fb0c4:
    // 0x4fb0c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4fb0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4fb0c8:
    // 0x4fb0c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4fb0c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fb0cc:
    // 0x4fb0cc: 0x450001dd  bc1f        . + 4 + (0x1DD << 2)
label_4fb0d0:
    if (ctx->pc == 0x4FB0D0u) {
        ctx->pc = 0x4FB0D4u;
        goto label_4fb0d4;
    }
    ctx->pc = 0x4FB0CCu;
    {
        const bool branch_taken_0x4fb0cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fb0cc) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB0D4u;
label_4fb0d4:
    // 0x4fb0d4: 0x9244005a  lbu         $a0, 0x5A($s2)
    ctx->pc = 0x4fb0d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_4fb0d8:
    // 0x4fb0d8: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x4fb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4fb0dc:
    // 0x4fb0dc: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x4fb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_4fb0e0:
    // 0x4fb0e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4fb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fb0e4:
    // 0x4fb0e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fb0e8:
    // 0x4fb0e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fb0ec:
    // 0x4fb0ec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4fb0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fb0f0:
    // 0x4fb0f0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4fb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4fb0f4:
    // 0x4fb0f4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fb0f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fb0f8:
    // 0x4fb0f8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fb0fc:
    if (ctx->pc == 0x4FB0FCu) {
        ctx->pc = 0x4FB0FCu;
            // 0x4fb0fc: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x4FB100u;
        goto label_4fb100;
    }
    ctx->pc = 0x4FB0F8u;
    {
        const bool branch_taken_0x4fb0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb0f8) {
            ctx->pc = 0x4FB0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB0F8u;
            // 0x4fb0fc: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB10Cu;
            goto label_4fb10c;
        }
    }
    ctx->pc = 0x4FB100u;
label_4fb100:
    // 0x4fb100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb104:
    // 0x4fb104: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fb108:
    if (ctx->pc == 0x4FB108u) {
        ctx->pc = 0x4FB108u;
            // 0x4fb108: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x4FB10Cu;
        goto label_4fb10c;
    }
    ctx->pc = 0x4FB104u;
    {
        const bool branch_taken_0x4fb104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB104u;
            // 0x4fb108: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb104) {
            ctx->pc = 0x4FB124u;
            goto label_4fb124;
        }
    }
    ctx->pc = 0x4FB10Cu;
label_4fb10c:
    // 0x4fb10c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4fb10cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4fb110:
    // 0x4fb110: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4fb114:
    if (ctx->pc == 0x4FB114u) {
        ctx->pc = 0x4FB114u;
            // 0x4fb114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FB118u;
        goto label_4fb118;
    }
    ctx->pc = 0x4FB110u;
    {
        const bool branch_taken_0x4fb110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb110) {
            ctx->pc = 0x4FB114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB110u;
            // 0x4fb114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB120u;
            goto label_4fb120;
        }
    }
    ctx->pc = 0x4FB118u;
label_4fb118:
    // 0x4fb118: 0x10000002  b           . + 4 + (0x2 << 2)
label_4fb11c:
    if (ctx->pc == 0x4FB11Cu) {
        ctx->pc = 0x4FB11Cu;
            // 0x4fb11c: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x4FB120u;
        goto label_4fb120;
    }
    ctx->pc = 0x4FB118u;
    {
        const bool branch_taken_0x4fb118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB118u;
            // 0x4fb11c: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb118) {
            ctx->pc = 0x4FB124u;
            goto label_4fb124;
        }
    }
    ctx->pc = 0x4FB120u;
label_4fb120:
    // 0x4fb120: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x4fb120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_4fb124:
    // 0x4fb124: 0x8e46006c  lw          $a2, 0x6C($s2)
    ctx->pc = 0x4fb124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4fb128:
    // 0x4fb128: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4fb128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4fb12c:
    // 0x4fb12c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4fb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4fb130:
    // 0x4fb130: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4fb130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4fb134:
    // 0x4fb134: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x4fb134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4fb138:
    // 0x4fb138: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x4fb138u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_4fb13c:
    // 0x4fb13c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x4fb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_4fb140:
    // 0x4fb140: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x4fb140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4fb144:
    // 0x4fb144: 0x2810  mfhi        $a1
    ctx->pc = 0x4fb144u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4fb148:
    // 0x4fb148: 0x860019  multu       $a0, $a2
    ctx->pc = 0x4fb148u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb14c:
    // 0x4fb14c: 0xa645010e  sh          $a1, 0x10E($s2)
    ctx->pc = 0x4fb14cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 5));
label_4fb150:
    // 0x4fb150: 0x0  nop
    ctx->pc = 0x4fb150u;
    // NOP
label_4fb154:
    // 0x4fb154: 0x2010  mfhi        $a0
    ctx->pc = 0x4fb154u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4fb158:
    // 0x4fb158: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x4fb158u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_4fb15c:
    // 0x4fb15c: 0x440019  multu       $v0, $a0
    ctx->pc = 0x4fb15cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb160:
    // 0x4fb160: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb160u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb164:
    // 0x4fb164: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x4fb164u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_4fb168:
    // 0x4fb168: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4fb168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4fb16c:
    // 0x4fb16c: 0x0  nop
    ctx->pc = 0x4fb16cu;
    // NOP
label_4fb170:
    // 0x4fb170: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb170u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb174:
    // 0x4fb174: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4fb174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4fb178:
    // 0x4fb178: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4fb17c:
    if (ctx->pc == 0x4FB17Cu) {
        ctx->pc = 0x4FB17Cu;
            // 0x4fb17c: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FB180u;
        goto label_4fb180;
    }
    ctx->pc = 0x4FB178u;
    {
        const bool branch_taken_0x4fb178 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB178u;
            // 0x4fb17c: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb178) {
            ctx->pc = 0x4FB194u;
            goto label_4fb194;
        }
    }
    ctx->pc = 0x4FB180u;
label_4fb180:
    // 0x4fb180: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4fb180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fb184:
    // 0x4fb184: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4fb184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fb188:
    // 0x4fb188: 0xa642010e  sh          $v0, 0x10E($s2)
    ctx->pc = 0x4fb188u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 2));
label_4fb18c:
    // 0x4fb18c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4fb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fb190:
    // 0x4fb190: 0xa242010d  sb          $v0, 0x10D($s2)
    ctx->pc = 0x4fb190u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
label_4fb194:
    // 0x4fb194: 0xa243010c  sb          $v1, 0x10C($s2)
    ctx->pc = 0x4fb194u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 268), (uint8_t)GPR_U32(ctx, 3));
label_4fb198:
    // 0x4fb198: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4fb198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb19c:
    // 0x4fb19c: 0xae440068  sw          $a0, 0x68($s2)
    ctx->pc = 0x4fb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 4));
label_4fb1a0:
    // 0x4fb1a0: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x4fb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fb1a4:
    // 0x4fb1a4: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x4fb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_4fb1a8:
    // 0x4fb1a8: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x4fb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_4fb1ac:
    // 0x4fb1ac: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x4fb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_4fb1b0:
    // 0x4fb1b0: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x4fb1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4fb1b4:
    // 0x4fb1b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4fb1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4fb1b8:
    // 0x4fb1b8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb1b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb1bc:
    // 0x4fb1bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb1c0:
    // 0x4fb1c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4fb1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fb1c4:
    // 0x4fb1c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4fb1c8:
    if (ctx->pc == 0x4FB1C8u) {
        ctx->pc = 0x4FB1C8u;
            // 0x4fb1c8: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FB1CCu;
        goto label_4fb1cc;
    }
    ctx->pc = 0x4FB1C4u;
    {
        const bool branch_taken_0x4fb1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb1c4) {
            ctx->pc = 0x4FB1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB1C4u;
            // 0x4fb1c8: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB1D4u;
            goto label_4fb1d4;
        }
    }
    ctx->pc = 0x4FB1CCu;
label_4fb1cc:
    // 0x4fb1cc: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x4fb1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
label_4fb1d0:
    // 0x4fb1d0: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x4fb1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4fb1d4:
    // 0x4fb1d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fb1d8:
    // 0x4fb1d8: 0x1462019a  bne         $v1, $v0, . + 4 + (0x19A << 2)
label_4fb1dc:
    if (ctx->pc == 0x4FB1DCu) {
        ctx->pc = 0x4FB1E0u;
        goto label_4fb1e0;
    }
    ctx->pc = 0x4FB1D8u;
    {
        const bool branch_taken_0x4fb1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb1d8) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB1E0u;
label_4fb1e0:
    // 0x4fb1e0: 0xc13dfd8  jal         func_4F7F60
label_4fb1e4:
    if (ctx->pc == 0x4FB1E4u) {
        ctx->pc = 0x4FB1E4u;
            // 0x4fb1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB1E8u;
        goto label_4fb1e8;
    }
    ctx->pc = 0x4FB1E0u;
    SET_GPR_U32(ctx, 31, 0x4FB1E8u);
    ctx->pc = 0x4FB1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB1E0u;
            // 0x4fb1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7F60u;
    if (runtime->hasFunction(0x4F7F60u)) {
        auto targetFn = runtime->lookupFunction(0x4F7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB1E8u; }
        if (ctx->pc != 0x4FB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7F60_0x4f7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB1E8u; }
        if (ctx->pc != 0x4FB1E8u) { return; }
    }
    ctx->pc = 0x4FB1E8u;
label_4fb1e8:
    // 0x4fb1e8: 0x10000196  b           . + 4 + (0x196 << 2)
label_4fb1ec:
    if (ctx->pc == 0x4FB1ECu) {
        ctx->pc = 0x4FB1F0u;
        goto label_4fb1f0;
    }
    ctx->pc = 0x4FB1E8u;
    {
        const bool branch_taken_0x4fb1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb1e8) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB1F0u;
label_4fb1f0:
    // 0x4fb1f0: 0x38a40005  xori        $a0, $a1, 0x5
    ctx->pc = 0x4fb1f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_4fb1f4:
    // 0x4fb1f4: 0x38a30006  xori        $v1, $a1, 0x6
    ctx->pc = 0x4fb1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
label_4fb1f8:
    // 0x4fb1f8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4fb1f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb1fc:
    // 0x4fb1fc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb1fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb200:
    // 0x4fb200: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fb200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fb204:
    // 0x4fb204: 0x38a30009  xori        $v1, $a1, 0x9
    ctx->pc = 0x4fb204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9);
label_4fb208:
    // 0x4fb208: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb20c:
    // 0x4fb20c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fb20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4fb210:
    // 0x4fb210: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4fb214:
    if (ctx->pc == 0x4FB214u) {
        ctx->pc = 0x4FB214u;
            // 0x4fb214: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4FB218u;
        goto label_4fb218;
    }
    ctx->pc = 0x4FB210u;
    {
        const bool branch_taken_0x4fb210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb210) {
            ctx->pc = 0x4FB214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB210u;
            // 0x4fb214: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB234u;
            goto label_4fb234;
        }
    }
    ctx->pc = 0x4FB218u;
label_4fb218:
    // 0x4fb218: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb21c:
    // 0x4fb21c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb220:
    // 0x4fb220: 0x2442e5a8  addiu       $v0, $v0, -0x1A58
    ctx->pc = 0x4fb220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960552));
label_4fb224:
    // 0x4fb224: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb228:
    // 0x4fb228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb22c:
    // 0x4fb22c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4fb230:
    if (ctx->pc == 0x4FB230u) {
        ctx->pc = 0x4FB230u;
            // 0x4fb230: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB234u;
        goto label_4fb234;
    }
    ctx->pc = 0x4FB22Cu;
    {
        const bool branch_taken_0x4fb22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB22Cu;
            // 0x4fb230: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb22c) {
            ctx->pc = 0x4FB298u;
            goto label_4fb298;
        }
    }
    ctx->pc = 0x4FB234u;
label_4fb234:
    // 0x4fb234: 0x54a30008  bnel        $a1, $v1, . + 4 + (0x8 << 2)
label_4fb238:
    if (ctx->pc == 0x4FB238u) {
        ctx->pc = 0x4FB238u;
            // 0x4fb238: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x4FB23Cu;
        goto label_4fb23c;
    }
    ctx->pc = 0x4FB234u;
    {
        const bool branch_taken_0x4fb234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fb234) {
            ctx->pc = 0x4FB238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB234u;
            // 0x4fb238: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB258u;
            goto label_4fb258;
        }
    }
    ctx->pc = 0x4FB23Cu;
label_4fb23c:
    // 0x4fb23c: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb240:
    // 0x4fb240: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb244:
    // 0x4fb244: 0x2442e7c8  addiu       $v0, $v0, -0x1838
    ctx->pc = 0x4fb244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961096));
label_4fb248:
    // 0x4fb248: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb24c:
    // 0x4fb24c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb250:
    // 0x4fb250: 0x10000011  b           . + 4 + (0x11 << 2)
label_4fb254:
    if (ctx->pc == 0x4FB254u) {
        ctx->pc = 0x4FB254u;
            // 0x4fb254: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB258u;
        goto label_4fb258;
    }
    ctx->pc = 0x4FB250u;
    {
        const bool branch_taken_0x4fb250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB250u;
            // 0x4fb254: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb250) {
            ctx->pc = 0x4FB298u;
            goto label_4fb298;
        }
    }
    ctx->pc = 0x4FB258u;
label_4fb258:
    // 0x4fb258: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_4fb25c:
    if (ctx->pc == 0x4FB25Cu) {
        ctx->pc = 0x4FB25Cu;
            // 0x4fb25c: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x4FB260u;
        goto label_4fb260;
    }
    ctx->pc = 0x4FB258u;
    {
        const bool branch_taken_0x4fb258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb258) {
            ctx->pc = 0x4FB25Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB258u;
            // 0x4fb25c: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB27Cu;
            goto label_4fb27c;
        }
    }
    ctx->pc = 0x4FB260u;
label_4fb260:
    // 0x4fb260: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb264:
    // 0x4fb264: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb268:
    // 0x4fb268: 0x2442e6b8  addiu       $v0, $v0, -0x1948
    ctx->pc = 0x4fb268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960824));
label_4fb26c:
    // 0x4fb26c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb270:
    // 0x4fb270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb274:
    // 0x4fb274: 0x10000008  b           . + 4 + (0x8 << 2)
label_4fb278:
    if (ctx->pc == 0x4FB278u) {
        ctx->pc = 0x4FB278u;
            // 0x4fb278: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB27Cu;
        goto label_4fb27c;
    }
    ctx->pc = 0x4FB274u;
    {
        const bool branch_taken_0x4fb274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB274u;
            // 0x4fb278: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb274) {
            ctx->pc = 0x4FB298u;
            goto label_4fb298;
        }
    }
    ctx->pc = 0x4FB27Cu;
label_4fb27c:
    // 0x4fb27c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x4fb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_4fb280:
    // 0x4fb280: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4fb280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4fb284:
    // 0x4fb284: 0x430019  multu       $v0, $v1
    ctx->pc = 0x4fb284u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb288:
    // 0x4fb288: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb288u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb28c:
    // 0x4fb28c: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x4fb28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4fb290:
    // 0x4fb290: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4fb290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4fb294:
    // 0x4fb294: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4fb294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb298:
    // 0x4fb298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4fb298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4fb29c:
    // 0x4fb29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fb29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fb2a0:
    // 0x4fb2a0: 0x0  nop
    ctx->pc = 0x4fb2a0u;
    // NOP
label_4fb2a4:
    // 0x4fb2a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4fb2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4fb2a8:
    // 0x4fb2a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4fb2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fb2ac:
    // 0x4fb2ac: 0x45000165  bc1f        . + 4 + (0x165 << 2)
label_4fb2b0:
    if (ctx->pc == 0x4FB2B0u) {
        ctx->pc = 0x4FB2B4u;
        goto label_4fb2b4;
    }
    ctx->pc = 0x4FB2ACu;
    {
        const bool branch_taken_0x4fb2ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fb2ac) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB2B4u;
label_4fb2b4:
    // 0x4fb2b4: 0x9244005a  lbu         $a0, 0x5A($s2)
    ctx->pc = 0x4fb2b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_4fb2b8:
    // 0x4fb2b8: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x4fb2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4fb2bc:
    // 0x4fb2bc: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x4fb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_4fb2c0:
    // 0x4fb2c0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4fb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fb2c4:
    // 0x4fb2c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fb2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fb2c8:
    // 0x4fb2c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fb2cc:
    // 0x4fb2cc: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4fb2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fb2d0:
    // 0x4fb2d0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4fb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4fb2d4:
    // 0x4fb2d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fb2d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fb2d8:
    // 0x4fb2d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fb2dc:
    if (ctx->pc == 0x4FB2DCu) {
        ctx->pc = 0x4FB2DCu;
            // 0x4fb2dc: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x4FB2E0u;
        goto label_4fb2e0;
    }
    ctx->pc = 0x4FB2D8u;
    {
        const bool branch_taken_0x4fb2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb2d8) {
            ctx->pc = 0x4FB2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB2D8u;
            // 0x4fb2dc: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB2ECu;
            goto label_4fb2ec;
        }
    }
    ctx->pc = 0x4FB2E0u;
label_4fb2e0:
    // 0x4fb2e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb2e4:
    // 0x4fb2e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fb2e8:
    if (ctx->pc == 0x4FB2E8u) {
        ctx->pc = 0x4FB2E8u;
            // 0x4fb2e8: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x4FB2ECu;
        goto label_4fb2ec;
    }
    ctx->pc = 0x4FB2E4u;
    {
        const bool branch_taken_0x4fb2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB2E4u;
            // 0x4fb2e8: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb2e4) {
            ctx->pc = 0x4FB304u;
            goto label_4fb304;
        }
    }
    ctx->pc = 0x4FB2ECu;
label_4fb2ec:
    // 0x4fb2ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4fb2ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4fb2f0:
    // 0x4fb2f0: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4fb2f4:
    if (ctx->pc == 0x4FB2F4u) {
        ctx->pc = 0x4FB2F4u;
            // 0x4fb2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FB2F8u;
        goto label_4fb2f8;
    }
    ctx->pc = 0x4FB2F0u;
    {
        const bool branch_taken_0x4fb2f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb2f0) {
            ctx->pc = 0x4FB2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB2F0u;
            // 0x4fb2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB300u;
            goto label_4fb300;
        }
    }
    ctx->pc = 0x4FB2F8u;
label_4fb2f8:
    // 0x4fb2f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4fb2fc:
    if (ctx->pc == 0x4FB2FCu) {
        ctx->pc = 0x4FB2FCu;
            // 0x4fb2fc: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x4FB300u;
        goto label_4fb300;
    }
    ctx->pc = 0x4FB2F8u;
    {
        const bool branch_taken_0x4fb2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB2F8u;
            // 0x4fb2fc: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb2f8) {
            ctx->pc = 0x4FB304u;
            goto label_4fb304;
        }
    }
    ctx->pc = 0x4FB300u;
label_4fb300:
    // 0x4fb300: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x4fb300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_4fb304:
    // 0x4fb304: 0x8e46006c  lw          $a2, 0x6C($s2)
    ctx->pc = 0x4fb304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4fb308:
    // 0x4fb308: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4fb308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4fb30c:
    // 0x4fb30c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4fb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4fb310:
    // 0x4fb310: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4fb310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4fb314:
    // 0x4fb314: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x4fb314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4fb318:
    // 0x4fb318: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x4fb318u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_4fb31c:
    // 0x4fb31c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x4fb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_4fb320:
    // 0x4fb320: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x4fb320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4fb324:
    // 0x4fb324: 0x2810  mfhi        $a1
    ctx->pc = 0x4fb324u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4fb328:
    // 0x4fb328: 0x860019  multu       $a0, $a2
    ctx->pc = 0x4fb328u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb32c:
    // 0x4fb32c: 0xa645010e  sh          $a1, 0x10E($s2)
    ctx->pc = 0x4fb32cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 5));
label_4fb330:
    // 0x4fb330: 0x0  nop
    ctx->pc = 0x4fb330u;
    // NOP
label_4fb334:
    // 0x4fb334: 0x2010  mfhi        $a0
    ctx->pc = 0x4fb334u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4fb338:
    // 0x4fb338: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x4fb338u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_4fb33c:
    // 0x4fb33c: 0x440019  multu       $v0, $a0
    ctx->pc = 0x4fb33cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb340:
    // 0x4fb340: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb340u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb344:
    // 0x4fb344: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x4fb344u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_4fb348:
    // 0x4fb348: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4fb348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4fb34c:
    // 0x4fb34c: 0x0  nop
    ctx->pc = 0x4fb34cu;
    // NOP
label_4fb350:
    // 0x4fb350: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb350u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb354:
    // 0x4fb354: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4fb354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4fb358:
    // 0x4fb358: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4fb35c:
    if (ctx->pc == 0x4FB35Cu) {
        ctx->pc = 0x4FB35Cu;
            // 0x4fb35c: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FB360u;
        goto label_4fb360;
    }
    ctx->pc = 0x4FB358u;
    {
        const bool branch_taken_0x4fb358 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB358u;
            // 0x4fb35c: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb358) {
            ctx->pc = 0x4FB374u;
            goto label_4fb374;
        }
    }
    ctx->pc = 0x4FB360u;
label_4fb360:
    // 0x4fb360: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4fb360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fb364:
    // 0x4fb364: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4fb364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fb368:
    // 0x4fb368: 0xa642010e  sh          $v0, 0x10E($s2)
    ctx->pc = 0x4fb368u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 2));
label_4fb36c:
    // 0x4fb36c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4fb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fb370:
    // 0x4fb370: 0xa242010d  sb          $v0, 0x10D($s2)
    ctx->pc = 0x4fb370u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
label_4fb374:
    // 0x4fb374: 0xa243010c  sb          $v1, 0x10C($s2)
    ctx->pc = 0x4fb374u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 268), (uint8_t)GPR_U32(ctx, 3));
label_4fb378:
    // 0x4fb378: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fb378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fb37c:
    // 0x4fb37c: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x4fb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_4fb380:
    // 0x4fb380: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4fb380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb384:
    // 0x4fb384: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x4fb384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fb388:
    // 0x4fb388: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x4fb388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_4fb38c:
    // 0x4fb38c: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x4fb38cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
label_4fb390:
    // 0x4fb390: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x4fb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_4fb394:
    // 0x4fb394: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x4fb394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4fb398:
    // 0x4fb398: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4fb398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4fb39c:
    // 0x4fb39c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb39cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb3a0:
    // 0x4fb3a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb3a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb3a4:
    // 0x4fb3a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4fb3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fb3a8:
    // 0x4fb3a8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4fb3ac:
    if (ctx->pc == 0x4FB3ACu) {
        ctx->pc = 0x4FB3ACu;
            // 0x4fb3ac: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FB3B0u;
        goto label_4fb3b0;
    }
    ctx->pc = 0x4FB3A8u;
    {
        const bool branch_taken_0x4fb3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb3a8) {
            ctx->pc = 0x4FB3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB3A8u;
            // 0x4fb3ac: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB3B8u;
            goto label_4fb3b8;
        }
    }
    ctx->pc = 0x4FB3B0u;
label_4fb3b0:
    // 0x4fb3b0: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x4fb3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
label_4fb3b4:
    // 0x4fb3b4: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x4fb3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4fb3b8:
    // 0x4fb3b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fb3bc:
    // 0x4fb3bc: 0x14620121  bne         $v1, $v0, . + 4 + (0x121 << 2)
label_4fb3c0:
    if (ctx->pc == 0x4FB3C0u) {
        ctx->pc = 0x4FB3C4u;
        goto label_4fb3c4;
    }
    ctx->pc = 0x4FB3BCu;
    {
        const bool branch_taken_0x4fb3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb3bc) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB3C4u;
label_4fb3c4:
    // 0x4fb3c4: 0xc13dfd8  jal         func_4F7F60
label_4fb3c8:
    if (ctx->pc == 0x4FB3C8u) {
        ctx->pc = 0x4FB3C8u;
            // 0x4fb3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB3CCu;
        goto label_4fb3cc;
    }
    ctx->pc = 0x4FB3C4u;
    SET_GPR_U32(ctx, 31, 0x4FB3CCu);
    ctx->pc = 0x4FB3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB3C4u;
            // 0x4fb3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7F60u;
    if (runtime->hasFunction(0x4F7F60u)) {
        auto targetFn = runtime->lookupFunction(0x4F7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB3CCu; }
        if (ctx->pc != 0x4FB3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7F60_0x4f7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB3CCu; }
        if (ctx->pc != 0x4FB3CCu) { return; }
    }
    ctx->pc = 0x4FB3CCu;
label_4fb3cc:
    // 0x4fb3cc: 0x1000011d  b           . + 4 + (0x11D << 2)
label_4fb3d0:
    if (ctx->pc == 0x4FB3D0u) {
        ctx->pc = 0x4FB3D4u;
        goto label_4fb3d4;
    }
    ctx->pc = 0x4FB3CCu;
    {
        const bool branch_taken_0x4fb3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb3cc) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB3D4u;
label_4fb3d4:
    // 0x4fb3d4: 0x38830005  xori        $v1, $a0, 0x5
    ctx->pc = 0x4fb3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)5);
label_4fb3d8:
    // 0x4fb3d8: 0x38820006  xori        $v0, $a0, 0x6
    ctx->pc = 0x4fb3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
label_4fb3dc:
    // 0x4fb3dc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb3dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb3e0:
    // 0x4fb3e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb3e4:
    // 0x4fb3e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4fb3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fb3e8:
    // 0x4fb3e8: 0x38820009  xori        $v0, $a0, 0x9
    ctx->pc = 0x4fb3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)9);
label_4fb3ec:
    // 0x4fb3ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb3f0:
    // 0x4fb3f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4fb3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4fb3f4:
    // 0x4fb3f4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4fb3f8:
    if (ctx->pc == 0x4FB3F8u) {
        ctx->pc = 0x4FB3F8u;
            // 0x4fb3f8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4FB3FCu;
        goto label_4fb3fc;
    }
    ctx->pc = 0x4FB3F4u;
    {
        const bool branch_taken_0x4fb3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb3f4) {
            ctx->pc = 0x4FB3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB3F4u;
            // 0x4fb3f8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB418u;
            goto label_4fb418;
        }
    }
    ctx->pc = 0x4FB3FCu;
label_4fb3fc:
    // 0x4fb3fc: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb400:
    // 0x4fb400: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb404:
    // 0x4fb404: 0x2442e5ac  addiu       $v0, $v0, -0x1A54
    ctx->pc = 0x4fb404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960556));
label_4fb408:
    // 0x4fb408: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb40c:
    // 0x4fb40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb410:
    // 0x4fb410: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4fb414:
    if (ctx->pc == 0x4FB414u) {
        ctx->pc = 0x4FB414u;
            // 0x4fb414: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB418u;
        goto label_4fb418;
    }
    ctx->pc = 0x4FB410u;
    {
        const bool branch_taken_0x4fb410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB410u;
            // 0x4fb414: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb410) {
            ctx->pc = 0x4FB47Cu;
            goto label_4fb47c;
        }
    }
    ctx->pc = 0x4FB418u;
label_4fb418:
    // 0x4fb418: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
label_4fb41c:
    if (ctx->pc == 0x4FB41Cu) {
        ctx->pc = 0x4FB41Cu;
            // 0x4fb41c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x4FB420u;
        goto label_4fb420;
    }
    ctx->pc = 0x4FB418u;
    {
        const bool branch_taken_0x4fb418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb418) {
            ctx->pc = 0x4FB41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB418u;
            // 0x4fb41c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB43Cu;
            goto label_4fb43c;
        }
    }
    ctx->pc = 0x4FB420u;
label_4fb420:
    // 0x4fb420: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb424:
    // 0x4fb424: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb428:
    // 0x4fb428: 0x2442e7cc  addiu       $v0, $v0, -0x1834
    ctx->pc = 0x4fb428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961100));
label_4fb42c:
    // 0x4fb42c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb430:
    // 0x4fb430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb434:
    // 0x4fb434: 0x10000011  b           . + 4 + (0x11 << 2)
label_4fb438:
    if (ctx->pc == 0x4FB438u) {
        ctx->pc = 0x4FB438u;
            // 0x4fb438: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB43Cu;
        goto label_4fb43c;
    }
    ctx->pc = 0x4FB434u;
    {
        const bool branch_taken_0x4fb434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB434u;
            // 0x4fb438: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb434) {
            ctx->pc = 0x4FB47Cu;
            goto label_4fb47c;
        }
    }
    ctx->pc = 0x4FB43Cu;
label_4fb43c:
    // 0x4fb43c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb440:
    // 0x4fb440: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_4fb444:
    if (ctx->pc == 0x4FB444u) {
        ctx->pc = 0x4FB444u;
            // 0x4fb444: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x4FB448u;
        goto label_4fb448;
    }
    ctx->pc = 0x4FB440u;
    {
        const bool branch_taken_0x4fb440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb440) {
            ctx->pc = 0x4FB444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB440u;
            // 0x4fb444: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB464u;
            goto label_4fb464;
        }
    }
    ctx->pc = 0x4FB448u;
label_4fb448:
    // 0x4fb448: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x4fb448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb44c:
    // 0x4fb44c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4fb450:
    // 0x4fb450: 0x2442e6bc  addiu       $v0, $v0, -0x1944
    ctx->pc = 0x4fb450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960828));
label_4fb454:
    // 0x4fb454: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fb458:
    // 0x4fb458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb45c:
    // 0x4fb45c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fb460:
    if (ctx->pc == 0x4FB460u) {
        ctx->pc = 0x4FB460u;
            // 0x4fb460: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FB464u;
        goto label_4fb464;
    }
    ctx->pc = 0x4FB45Cu;
    {
        const bool branch_taken_0x4fb45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB45Cu;
            // 0x4fb460: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb45c) {
            ctx->pc = 0x4FB47Cu;
            goto label_4fb47c;
        }
    }
    ctx->pc = 0x4FB464u;
label_4fb464:
    // 0x4fb464: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x4fb464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_4fb468:
    // 0x4fb468: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4fb468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4fb46c:
    // 0x4fb46c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x4fb46cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb470:
    // 0x4fb470: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb470u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb474:
    // 0x4fb474: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4fb474u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4fb478:
    // 0x4fb478: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x4fb478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fb47c:
    // 0x4fb47c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4fb47cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fb480:
    // 0x4fb480: 0x450000f0  bc1f        . + 4 + (0xF0 << 2)
label_4fb484:
    if (ctx->pc == 0x4FB484u) {
        ctx->pc = 0x4FB488u;
        goto label_4fb488;
    }
    ctx->pc = 0x4FB480u;
    {
        const bool branch_taken_0x4fb480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fb480) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB488u;
label_4fb488:
    // 0x4fb488: 0x9244005a  lbu         $a0, 0x5A($s2)
    ctx->pc = 0x4fb488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_4fb48c:
    // 0x4fb48c: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x4fb48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4fb490:
    // 0x4fb490: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x4fb490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_4fb494:
    // 0x4fb494: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4fb494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fb498:
    // 0x4fb498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fb498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fb49c:
    // 0x4fb49c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fb4a0:
    // 0x4fb4a0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4fb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fb4a4:
    // 0x4fb4a4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4fb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4fb4a8:
    // 0x4fb4a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fb4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fb4ac:
    // 0x4fb4ac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fb4b0:
    if (ctx->pc == 0x4FB4B0u) {
        ctx->pc = 0x4FB4B0u;
            // 0x4fb4b0: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x4FB4B4u;
        goto label_4fb4b4;
    }
    ctx->pc = 0x4FB4ACu;
    {
        const bool branch_taken_0x4fb4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb4ac) {
            ctx->pc = 0x4FB4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB4ACu;
            // 0x4fb4b0: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB4C0u;
            goto label_4fb4c0;
        }
    }
    ctx->pc = 0x4FB4B4u;
label_4fb4b4:
    // 0x4fb4b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb4b8:
    // 0x4fb4b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fb4bc:
    if (ctx->pc == 0x4FB4BCu) {
        ctx->pc = 0x4FB4BCu;
            // 0x4fb4bc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x4FB4C0u;
        goto label_4fb4c0;
    }
    ctx->pc = 0x4FB4B8u;
    {
        const bool branch_taken_0x4fb4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB4B8u;
            // 0x4fb4bc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb4b8) {
            ctx->pc = 0x4FB4D8u;
            goto label_4fb4d8;
        }
    }
    ctx->pc = 0x4FB4C0u;
label_4fb4c0:
    // 0x4fb4c0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4fb4c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4fb4c4:
    // 0x4fb4c4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4fb4c8:
    if (ctx->pc == 0x4FB4C8u) {
        ctx->pc = 0x4FB4C8u;
            // 0x4fb4c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FB4CCu;
        goto label_4fb4cc;
    }
    ctx->pc = 0x4FB4C4u;
    {
        const bool branch_taken_0x4fb4c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb4c4) {
            ctx->pc = 0x4FB4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB4C4u;
            // 0x4fb4c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB4D4u;
            goto label_4fb4d4;
        }
    }
    ctx->pc = 0x4FB4CCu;
label_4fb4cc:
    // 0x4fb4cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_4fb4d0:
    if (ctx->pc == 0x4FB4D0u) {
        ctx->pc = 0x4FB4D0u;
            // 0x4fb4d0: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x4FB4D4u;
        goto label_4fb4d4;
    }
    ctx->pc = 0x4FB4CCu;
    {
        const bool branch_taken_0x4fb4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB4CCu;
            // 0x4fb4d0: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb4cc) {
            ctx->pc = 0x4FB4D8u;
            goto label_4fb4d8;
        }
    }
    ctx->pc = 0x4FB4D4u;
label_4fb4d4:
    // 0x4fb4d4: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x4fb4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_4fb4d8:
    // 0x4fb4d8: 0x8e46006c  lw          $a2, 0x6C($s2)
    ctx->pc = 0x4fb4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4fb4dc:
    // 0x4fb4dc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4fb4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4fb4e0:
    // 0x4fb4e0: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4fb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4fb4e4:
    // 0x4fb4e4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4fb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4fb4e8:
    // 0x4fb4e8: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x4fb4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4fb4ec:
    // 0x4fb4ec: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x4fb4ecu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_4fb4f0:
    // 0x4fb4f0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x4fb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_4fb4f4:
    // 0x4fb4f4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x4fb4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4fb4f8:
    // 0x4fb4f8: 0x2810  mfhi        $a1
    ctx->pc = 0x4fb4f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4fb4fc:
    // 0x4fb4fc: 0x860019  multu       $a0, $a2
    ctx->pc = 0x4fb4fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb500:
    // 0x4fb500: 0xa645010e  sh          $a1, 0x10E($s2)
    ctx->pc = 0x4fb500u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 5));
label_4fb504:
    // 0x4fb504: 0x0  nop
    ctx->pc = 0x4fb504u;
    // NOP
label_4fb508:
    // 0x4fb508: 0x2010  mfhi        $a0
    ctx->pc = 0x4fb508u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4fb50c:
    // 0x4fb50c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x4fb50cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_4fb510:
    // 0x4fb510: 0x440019  multu       $v0, $a0
    ctx->pc = 0x4fb510u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb514:
    // 0x4fb514: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb514u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb518:
    // 0x4fb518: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x4fb518u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_4fb51c:
    // 0x4fb51c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4fb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4fb520:
    // 0x4fb520: 0x0  nop
    ctx->pc = 0x4fb520u;
    // NOP
label_4fb524:
    // 0x4fb524: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb524u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb528:
    // 0x4fb528: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4fb528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4fb52c:
    // 0x4fb52c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4fb530:
    if (ctx->pc == 0x4FB530u) {
        ctx->pc = 0x4FB530u;
            // 0x4fb530: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FB534u;
        goto label_4fb534;
    }
    ctx->pc = 0x4FB52Cu;
    {
        const bool branch_taken_0x4fb52c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB52Cu;
            // 0x4fb530: 0xa242010d  sb          $v0, 0x10D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb52c) {
            ctx->pc = 0x4FB548u;
            goto label_4fb548;
        }
    }
    ctx->pc = 0x4FB534u;
label_4fb534:
    // 0x4fb534: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4fb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fb538:
    // 0x4fb538: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4fb538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fb53c:
    // 0x4fb53c: 0xa642010e  sh          $v0, 0x10E($s2)
    ctx->pc = 0x4fb53cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 2));
label_4fb540:
    // 0x4fb540: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4fb540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fb544:
    // 0x4fb544: 0xa242010d  sb          $v0, 0x10D($s2)
    ctx->pc = 0x4fb544u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 2));
label_4fb548:
    // 0x4fb548: 0xa243010c  sb          $v1, 0x10C($s2)
    ctx->pc = 0x4fb548u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 268), (uint8_t)GPR_U32(ctx, 3));
label_4fb54c:
    // 0x4fb54c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4fb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fb550:
    // 0x4fb550: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x4fb550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_4fb554:
    // 0x4fb554: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x4fb554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fb558:
    // 0x4fb558: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fb55c:
    // 0x4fb55c: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x4fb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
label_4fb560:
    // 0x4fb560: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x4fb560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_4fb564:
    // 0x4fb564: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x4fb564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_4fb568:
    // 0x4fb568: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x4fb568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4fb56c:
    // 0x4fb56c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4fb56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4fb570:
    // 0x4fb570: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb570u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb574:
    // 0x4fb574: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb578:
    // 0x4fb578: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4fb578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fb57c:
    // 0x4fb57c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4fb580:
    if (ctx->pc == 0x4FB580u) {
        ctx->pc = 0x4FB580u;
            // 0x4fb580: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FB584u;
        goto label_4fb584;
    }
    ctx->pc = 0x4FB57Cu;
    {
        const bool branch_taken_0x4fb57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb57c) {
            ctx->pc = 0x4FB580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB57Cu;
            // 0x4fb580: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB590u;
            goto label_4fb590;
        }
    }
    ctx->pc = 0x4FB584u;
label_4fb584:
    // 0x4fb584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb588:
    // 0x4fb588: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x4fb588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_4fb58c:
    // 0x4fb58c: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x4fb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4fb590:
    // 0x4fb590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fb590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fb594:
    // 0x4fb594: 0x146200ab  bne         $v1, $v0, . + 4 + (0xAB << 2)
label_4fb598:
    if (ctx->pc == 0x4FB598u) {
        ctx->pc = 0x4FB59Cu;
        goto label_4fb59c;
    }
    ctx->pc = 0x4FB594u;
    {
        const bool branch_taken_0x4fb594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb594) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB59Cu;
label_4fb59c:
    // 0x4fb59c: 0xc13dfd8  jal         func_4F7F60
label_4fb5a0:
    if (ctx->pc == 0x4FB5A0u) {
        ctx->pc = 0x4FB5A0u;
            // 0x4fb5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB5A4u;
        goto label_4fb5a4;
    }
    ctx->pc = 0x4FB59Cu;
    SET_GPR_U32(ctx, 31, 0x4FB5A4u);
    ctx->pc = 0x4FB5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB59Cu;
            // 0x4fb5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7F60u;
    if (runtime->hasFunction(0x4F7F60u)) {
        auto targetFn = runtime->lookupFunction(0x4F7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB5A4u; }
        if (ctx->pc != 0x4FB5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7F60_0x4f7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB5A4u; }
        if (ctx->pc != 0x4FB5A4u) { return; }
    }
    ctx->pc = 0x4FB5A4u;
label_4fb5a4:
    // 0x4fb5a4: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_4fb5a8:
    if (ctx->pc == 0x4FB5A8u) {
        ctx->pc = 0x4FB5ACu;
        goto label_4fb5ac;
    }
    ctx->pc = 0x4FB5A4u;
    {
        const bool branch_taken_0x4fb5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb5a4) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB5ACu;
label_4fb5ac:
    // 0x4fb5ac: 0x8e240968  lw          $a0, 0x968($s1)
    ctx->pc = 0x4fb5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_4fb5b0:
    // 0x4fb5b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4fb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4fb5b4:
    // 0x4fb5b4: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
label_4fb5b8:
    if (ctx->pc == 0x4FB5B8u) {
        ctx->pc = 0x4FB5B8u;
            // 0x4fb5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB5BCu;
        goto label_4fb5bc;
    }
    ctx->pc = 0x4FB5B4u;
    {
        const bool branch_taken_0x4fb5b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FB5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB5B4u;
            // 0x4fb5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb5b4) {
            ctx->pc = 0x4FB5FCu;
            goto label_4fb5fc;
        }
    }
    ctx->pc = 0x4FB5BCu;
label_4fb5bc:
    // 0x4fb5bc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4fb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4fb5c0:
    // 0x4fb5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fb5c4:
    // 0x4fb5c4: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_4fb5c8:
    if (ctx->pc == 0x4FB5C8u) {
        ctx->pc = 0x4FB5C8u;
            // 0x4fb5c8: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x4FB5CCu;
        goto label_4fb5cc;
    }
    ctx->pc = 0x4FB5C4u;
    {
        const bool branch_taken_0x4fb5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fb5c4) {
            ctx->pc = 0x4FB5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB5C4u;
            // 0x4fb5c8: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB600u;
            goto label_4fb600;
        }
    }
    ctx->pc = 0x4FB5CCu;
label_4fb5cc:
    // 0x4fb5cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fb5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fb5d0:
    // 0x4fb5d0: 0x0  nop
    ctx->pc = 0x4fb5d0u;
    // NOP
label_4fb5d4:
    // 0x4fb5d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4fb5d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fb5d8:
    // 0x4fb5d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_4fb5dc:
    if (ctx->pc == 0x4FB5DCu) {
        ctx->pc = 0x4FB5E0u;
        goto label_4fb5e0;
    }
    ctx->pc = 0x4FB5D8u;
    {
        const bool branch_taken_0x4fb5d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fb5d8) {
            ctx->pc = 0x4FB5FCu;
            goto label_4fb5fc;
        }
    }
    ctx->pc = 0x4FB5E0u;
label_4fb5e0:
    // 0x4fb5e0: 0x3c02c1a8  lui         $v0, 0xC1A8
    ctx->pc = 0x4fb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49576 << 16));
label_4fb5e4:
    // 0x4fb5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fb5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fb5e8:
    // 0x4fb5e8: 0x0  nop
    ctx->pc = 0x4fb5e8u;
    // NOP
label_4fb5ec:
    // 0x4fb5ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4fb5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fb5f0:
    // 0x4fb5f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4fb5f4:
    if (ctx->pc == 0x4FB5F4u) {
        ctx->pc = 0x4FB5F8u;
        goto label_4fb5f8;
    }
    ctx->pc = 0x4FB5F0u;
    {
        const bool branch_taken_0x4fb5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fb5f0) {
            ctx->pc = 0x4FB5FCu;
            goto label_4fb5fc;
        }
    }
    ctx->pc = 0x4FB5F8u;
label_4fb5f8:
    // 0x4fb5f8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x4fb5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4fb5fc:
    // 0x4fb5fc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x4fb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4fb600:
    // 0x4fb600: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4fb600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4fb604:
    // 0x4fb604: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_4fb608:
    if (ctx->pc == 0x4FB608u) {
        ctx->pc = 0x4FB608u;
            // 0x4fb608: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x4FB60Cu;
        goto label_4fb60c;
    }
    ctx->pc = 0x4FB604u;
    {
        const bool branch_taken_0x4fb604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb604) {
            ctx->pc = 0x4FB608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB604u;
            // 0x4fb608: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB620u;
            goto label_4fb620;
        }
    }
    ctx->pc = 0x4FB60Cu;
label_4fb60c:
    // 0x4fb60c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x4fb60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4fb610:
    // 0x4fb610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fb610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fb614:
    // 0x4fb614: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
label_4fb618:
    if (ctx->pc == 0x4FB618u) {
        ctx->pc = 0x4FB618u;
            // 0x4fb618: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x4FB61Cu;
        goto label_4fb61c;
    }
    ctx->pc = 0x4FB614u;
    {
        const bool branch_taken_0x4fb614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb614) {
            ctx->pc = 0x4FB618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB614u;
            // 0x4fb618: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB69Cu;
            goto label_4fb69c;
        }
    }
    ctx->pc = 0x4FB61Cu;
label_4fb61c:
    // 0x4fb61c: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x4fb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_4fb620:
    // 0x4fb620: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x4fb620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_4fb624:
    // 0x4fb624: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fb628:
    if (ctx->pc == 0x4FB628u) {
        ctx->pc = 0x4FB628u;
            // 0x4fb628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FB62Cu;
        goto label_4fb62c;
    }
    ctx->pc = 0x4FB624u;
    {
        const bool branch_taken_0x4fb624 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fb624) {
            ctx->pc = 0x4FB628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB624u;
            // 0x4fb628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB638u;
            goto label_4fb638;
        }
    }
    ctx->pc = 0x4FB62Cu;
label_4fb62c:
    // 0x4fb62c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb630:
    // 0x4fb630: 0x10000002  b           . + 4 + (0x2 << 2)
label_4fb634:
    if (ctx->pc == 0x4FB634u) {
        ctx->pc = 0x4FB634u;
            // 0x4fb634: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x4FB638u;
        goto label_4fb638;
    }
    ctx->pc = 0x4FB630u;
    {
        const bool branch_taken_0x4fb630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB630u;
            // 0x4fb634: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb630) {
            ctx->pc = 0x4FB63Cu;
            goto label_4fb63c;
        }
    }
    ctx->pc = 0x4FB638u;
label_4fb638:
    // 0x4fb638: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x4fb638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_4fb63c:
    // 0x4fb63c: 0xa640010e  sh          $zero, 0x10E($s2)
    ctx->pc = 0x4fb63cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 0));
label_4fb640:
    // 0x4fb640: 0xa240010d  sb          $zero, 0x10D($s2)
    ctx->pc = 0x4fb640u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 0));
label_4fb644:
    // 0x4fb644: 0xa240010c  sb          $zero, 0x10C($s2)
    ctx->pc = 0x4fb644u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 268), (uint8_t)GPR_U32(ctx, 0));
label_4fb648:
    // 0x4fb648: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x4fb648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fb64c:
    // 0x4fb64c: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x4fb64cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_4fb650:
    // 0x4fb650: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x4fb650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_4fb654:
    // 0x4fb654: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x4fb654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_4fb658:
    // 0x4fb658: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x4fb658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4fb65c:
    // 0x4fb65c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4fb65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4fb660:
    // 0x4fb660: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb660u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb664:
    // 0x4fb664: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb668:
    // 0x4fb668: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4fb668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fb66c:
    // 0x4fb66c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4fb670:
    if (ctx->pc == 0x4FB670u) {
        ctx->pc = 0x4FB670u;
            // 0x4fb670: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FB674u;
        goto label_4fb674;
    }
    ctx->pc = 0x4FB66Cu;
    {
        const bool branch_taken_0x4fb66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb66c) {
            ctx->pc = 0x4FB670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB66Cu;
            // 0x4fb670: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB680u;
            goto label_4fb680;
        }
    }
    ctx->pc = 0x4FB674u;
label_4fb674:
    // 0x4fb674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb678:
    // 0x4fb678: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x4fb678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_4fb67c:
    // 0x4fb67c: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x4fb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4fb680:
    // 0x4fb680: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fb680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fb684:
    // 0x4fb684: 0x1462006f  bne         $v1, $v0, . + 4 + (0x6F << 2)
label_4fb688:
    if (ctx->pc == 0x4FB688u) {
        ctx->pc = 0x4FB68Cu;
        goto label_4fb68c;
    }
    ctx->pc = 0x4FB684u;
    {
        const bool branch_taken_0x4fb684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb684) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB68Cu;
label_4fb68c:
    // 0x4fb68c: 0xc13dfd8  jal         func_4F7F60
label_4fb690:
    if (ctx->pc == 0x4FB690u) {
        ctx->pc = 0x4FB690u;
            // 0x4fb690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB694u;
        goto label_4fb694;
    }
    ctx->pc = 0x4FB68Cu;
    SET_GPR_U32(ctx, 31, 0x4FB694u);
    ctx->pc = 0x4FB690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB68Cu;
            // 0x4fb690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7F60u;
    if (runtime->hasFunction(0x4F7F60u)) {
        auto targetFn = runtime->lookupFunction(0x4F7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB694u; }
        if (ctx->pc != 0x4FB694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7F60_0x4f7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB694u; }
        if (ctx->pc != 0x4FB694u) { return; }
    }
    ctx->pc = 0x4FB694u;
label_4fb694:
    // 0x4fb694: 0x1000006b  b           . + 4 + (0x6B << 2)
label_4fb698:
    if (ctx->pc == 0x4FB698u) {
        ctx->pc = 0x4FB69Cu;
        goto label_4fb69c;
    }
    ctx->pc = 0x4FB694u;
    {
        const bool branch_taken_0x4fb694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb694) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB69Cu;
label_4fb69c:
    // 0x4fb69c: 0x14820069  bne         $a0, $v0, . + 4 + (0x69 << 2)
label_4fb6a0:
    if (ctx->pc == 0x4FB6A0u) {
        ctx->pc = 0x4FB6A4u;
        goto label_4fb6a4;
    }
    ctx->pc = 0x4FB69Cu;
    {
        const bool branch_taken_0x4fb69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb69c) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB6A4u;
label_4fb6a4:
    // 0x4fb6a4: 0xc64100a4  lwc1        $f1, 0xA4($s2)
    ctx->pc = 0x4fb6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fb6a8:
    // 0x4fb6a8: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x4fb6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fb6ac:
    // 0x4fb6ac: 0x45010065  bc1t        . + 4 + (0x65 << 2)
label_4fb6b0:
    if (ctx->pc == 0x4FB6B0u) {
        ctx->pc = 0x4FB6B4u;
        goto label_4fb6b4;
    }
    ctx->pc = 0x4FB6ACu;
    {
        const bool branch_taken_0x4fb6ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fb6ac) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB6B4u;
label_4fb6b4:
    // 0x4fb6b4: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x4fb6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_4fb6b8:
    // 0x4fb6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fb6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fb6bc:
    // 0x4fb6bc: 0x0  nop
    ctx->pc = 0x4fb6bcu;
    // NOP
label_4fb6c0:
    // 0x4fb6c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4fb6c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fb6c4:
    // 0x4fb6c4: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
label_4fb6c8:
    if (ctx->pc == 0x4FB6C8u) {
        ctx->pc = 0x4FB6CCu;
        goto label_4fb6cc;
    }
    ctx->pc = 0x4FB6C4u;
    {
        const bool branch_taken_0x4fb6c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fb6c4) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB6CCu;
label_4fb6cc:
    // 0x4fb6cc: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x4fb6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_4fb6d0:
    // 0x4fb6d0: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x4fb6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_4fb6d4:
    // 0x4fb6d4: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x4fb6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_4fb6d8:
    // 0x4fb6d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4fb6d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fb6dc:
    // 0x4fb6dc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4fb6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4fb6e0:
    // 0x4fb6e0: 0x320f809  jalr        $t9
label_4fb6e4:
    if (ctx->pc == 0x4FB6E4u) {
        ctx->pc = 0x4FB6E4u;
            // 0x4fb6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB6E8u;
        goto label_4fb6e8;
    }
    ctx->pc = 0x4FB6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FB6E8u);
        ctx->pc = 0x4FB6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB6E0u;
            // 0x4fb6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FB6E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FB6E8u; }
            if (ctx->pc != 0x4FB6E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4FB6E8u;
label_4fb6e8:
    // 0x4fb6e8: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x4fb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_4fb6ec:
    // 0x4fb6ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb6f0:
    // 0x4fb6f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4fb6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4fb6f4:
    // 0x4fb6f4: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x4fb6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_4fb6f8:
    // 0x4fb6f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4fb6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fb6fc:
    // 0x4fb6fc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4fb6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4fb700:
    // 0x4fb700: 0x320f809  jalr        $t9
label_4fb704:
    if (ctx->pc == 0x4FB704u) {
        ctx->pc = 0x4FB704u;
            // 0x4fb704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB708u;
        goto label_4fb708;
    }
    ctx->pc = 0x4FB700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FB708u);
        ctx->pc = 0x4FB704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB700u;
            // 0x4fb704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FB708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FB708u; }
            if (ctx->pc != 0x4FB708u) { return; }
        }
        }
    }
    ctx->pc = 0x4FB708u;
label_4fb708:
    // 0x4fb708: 0x9648010a  lhu         $t0, 0x10A($s2)
    ctx->pc = 0x4fb708u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
label_4fb70c:
    // 0x4fb70c: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fb70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4fb710:
    // 0x4fb710: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x4fb710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4fb714:
    // 0x4fb714: 0x92490109  lbu         $t1, 0x109($s2)
    ctx->pc = 0x4fb714u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 265)));
label_4fb718:
    // 0x4fb718: 0x92470108  lbu         $a3, 0x108($s2)
    ctx->pc = 0x4fb718u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 264)));
label_4fb71c:
    // 0x4fb71c: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x4fb71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4fb720:
    // 0x4fb720: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4fb720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4fb724:
    // 0x4fb724: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x4fb724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4fb728:
    // 0x4fb728: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x4fb728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4fb72c:
    // 0x4fb72c: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x4fb72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_4fb730:
    // 0x4fb730: 0x85040  sll         $t2, $t0, 1
    ctx->pc = 0x4fb730u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4fb734:
    // 0x4fb734: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x4fb734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4fb738:
    // 0x4fb738: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x4fb738u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fb73c:
    // 0x4fb73c: 0xe43818  mult        $a3, $a3, $a0
    ctx->pc = 0x4fb73cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_4fb740:
    // 0x4fb740: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4fb740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4fb744:
    // 0x4fb744: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x4fb744u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_4fb748:
    // 0x4fb748: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x4fb748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_4fb74c:
    // 0x4fb74c: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x4fb74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_4fb750:
    // 0x4fb750: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x4fb750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_4fb754:
    // 0x4fb754: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x4fb754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4fb758:
    // 0x4fb758: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4fb758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4fb75c:
    // 0x4fb75c: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x4fb75cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4fb760:
    // 0x4fb760: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x4fb760u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_4fb764:
    // 0x4fb764: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb764u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb768:
    // 0x4fb768: 0xa70019  multu       $a1, $a3
    ctx->pc = 0x4fb768u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb76c:
    // 0x4fb76c: 0xa642010a  sh          $v0, 0x10A($s2)
    ctx->pc = 0x4fb76cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
label_4fb770:
    // 0x4fb770: 0x0  nop
    ctx->pc = 0x4fb770u;
    // NOP
label_4fb774:
    // 0x4fb774: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb774u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb778:
    // 0x4fb778: 0x22982  srl         $a1, $v0, 6
    ctx->pc = 0x4fb778u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4fb77c:
    // 0x4fb77c: 0x650019  multu       $v1, $a1
    ctx->pc = 0x4fb77cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb780:
    // 0x4fb780: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb780u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb784:
    // 0x4fb784: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x4fb784u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4fb788:
    // 0x4fb788: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4fb788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4fb78c:
    // 0x4fb78c: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4fb78cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4fb790:
    // 0x4fb790: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb794:
    // 0x4fb794: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4fb798:
    if (ctx->pc == 0x4FB798u) {
        ctx->pc = 0x4FB798u;
            // 0x4fb798: 0xa2420109  sb          $v0, 0x109($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 265), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FB79Cu;
        goto label_4fb79c;
    }
    ctx->pc = 0x4FB794u;
    {
        const bool branch_taken_0x4fb794 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB794u;
            // 0x4fb798: 0xa2420109  sb          $v0, 0x109($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 265), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb794) {
            ctx->pc = 0x4FB7B0u;
            goto label_4fb7b0;
        }
    }
    ctx->pc = 0x4FB79Cu;
label_4fb79c:
    // 0x4fb79c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4fb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fb7a0:
    // 0x4fb7a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4fb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fb7a4:
    // 0x4fb7a4: 0xa642010a  sh          $v0, 0x10A($s2)
    ctx->pc = 0x4fb7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
label_4fb7a8:
    // 0x4fb7a8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4fb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fb7ac:
    // 0x4fb7ac: 0xa2420109  sb          $v0, 0x109($s2)
    ctx->pc = 0x4fb7acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 265), (uint8_t)GPR_U32(ctx, 2));
label_4fb7b0:
    // 0x4fb7b0: 0xa2430108  sb          $v1, 0x108($s2)
    ctx->pc = 0x4fb7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 3));
label_4fb7b4:
    // 0x4fb7b4: 0x92420104  lbu         $v0, 0x104($s2)
    ctx->pc = 0x4fb7b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 260)));
label_4fb7b8:
    // 0x4fb7b8: 0xa2420110  sb          $v0, 0x110($s2)
    ctx->pc = 0x4fb7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 272), (uint8_t)GPR_U32(ctx, 2));
label_4fb7bc:
    // 0x4fb7bc: 0x92420105  lbu         $v0, 0x105($s2)
    ctx->pc = 0x4fb7bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 261)));
label_4fb7c0:
    // 0x4fb7c0: 0xa2420111  sb          $v0, 0x111($s2)
    ctx->pc = 0x4fb7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 2));
label_4fb7c4:
    // 0x4fb7c4: 0x96420106  lhu         $v0, 0x106($s2)
    ctx->pc = 0x4fb7c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 262)));
label_4fb7c8:
    // 0x4fb7c8: 0xa6420112  sh          $v0, 0x112($s2)
    ctx->pc = 0x4fb7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 274), (uint16_t)GPR_U32(ctx, 2));
label_4fb7cc:
    // 0x4fb7cc: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x4fb7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_4fb7d0:
    // 0x4fb7d0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x4fb7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_4fb7d4:
    // 0x4fb7d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fb7d8:
    if (ctx->pc == 0x4FB7D8u) {
        ctx->pc = 0x4FB7D8u;
            // 0x4fb7d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FB7DCu;
        goto label_4fb7dc;
    }
    ctx->pc = 0x4FB7D4u;
    {
        const bool branch_taken_0x4fb7d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fb7d4) {
            ctx->pc = 0x4FB7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB7D4u;
            // 0x4fb7d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB7E8u;
            goto label_4fb7e8;
        }
    }
    ctx->pc = 0x4FB7DCu;
label_4fb7dc:
    // 0x4fb7dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fb7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fb7e0:
    // 0x4fb7e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4fb7e4:
    if (ctx->pc == 0x4FB7E4u) {
        ctx->pc = 0x4FB7E4u;
            // 0x4fb7e4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x4FB7E8u;
        goto label_4fb7e8;
    }
    ctx->pc = 0x4FB7E0u;
    {
        const bool branch_taken_0x4fb7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB7E0u;
            // 0x4fb7e4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb7e0) {
            ctx->pc = 0x4FB7ECu;
            goto label_4fb7ec;
        }
    }
    ctx->pc = 0x4FB7E8u;
label_4fb7e8:
    // 0x4fb7e8: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x4fb7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_4fb7ec:
    // 0x4fb7ec: 0xa640010e  sh          $zero, 0x10E($s2)
    ctx->pc = 0x4fb7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 270), (uint16_t)GPR_U32(ctx, 0));
label_4fb7f0:
    // 0x4fb7f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4fb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4fb7f4:
    // 0x4fb7f4: 0xa240010d  sb          $zero, 0x10D($s2)
    ctx->pc = 0x4fb7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 0));
label_4fb7f8:
    // 0x4fb7f8: 0xa240010c  sb          $zero, 0x10C($s2)
    ctx->pc = 0x4fb7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 268), (uint8_t)GPR_U32(ctx, 0));
label_4fb7fc:
    // 0x4fb7fc: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x4fb7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fb800:
    // 0x4fb800: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x4fb800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
label_4fb804:
    // 0x4fb804: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x4fb804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_4fb808:
    // 0x4fb808: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x4fb808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4fb80c:
    // 0x4fb80c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_4fb810:
    if (ctx->pc == 0x4FB810u) {
        ctx->pc = 0x4FB810u;
            // 0x4fb810: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x4FB814u;
        goto label_4fb814;
    }
    ctx->pc = 0x4FB80Cu;
    {
        const bool branch_taken_0x4fb80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fb80c) {
            ctx->pc = 0x4FB810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB80Cu;
            // 0x4fb810: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB824u;
            goto label_4fb824;
        }
    }
    ctx->pc = 0x4FB814u;
label_4fb814:
    // 0x4fb814: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4fb814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4fb818:
    // 0x4fb818: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4fb81c:
    if (ctx->pc == 0x4FB81Cu) {
        ctx->pc = 0x4FB81Cu;
            // 0x4fb81c: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x4FB820u;
        goto label_4fb820;
    }
    ctx->pc = 0x4FB818u;
    {
        const bool branch_taken_0x4fb818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb818) {
            ctx->pc = 0x4FB81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB818u;
            // 0x4fb81c: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FB830u;
            goto label_4fb830;
        }
    }
    ctx->pc = 0x4FB820u;
label_4fb820:
    // 0x4fb820: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x4fb820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4fb824:
    // 0x4fb824: 0xc13ef24  jal         func_4FBC90
label_4fb828:
    if (ctx->pc == 0x4FB828u) {
        ctx->pc = 0x4FB828u;
            // 0x4fb828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB82Cu;
        goto label_4fb82c;
    }
    ctx->pc = 0x4FB824u;
    SET_GPR_U32(ctx, 31, 0x4FB82Cu);
    ctx->pc = 0x4FB828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB824u;
            // 0x4fb828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBC90u;
    if (runtime->hasFunction(0x4FBC90u)) {
        auto targetFn = runtime->lookupFunction(0x4FBC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB82Cu; }
        if (ctx->pc != 0x4FB82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBC90_0x4fbc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB82Cu; }
        if (ctx->pc != 0x4FB82Cu) { return; }
    }
    ctx->pc = 0x4FB82Cu;
label_4fb82c:
    // 0x4fb82c: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x4fb82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4fb830:
    // 0x4fb830: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fb830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fb834:
    // 0x4fb834: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_4fb838:
    if (ctx->pc == 0x4FB838u) {
        ctx->pc = 0x4FB83Cu;
        goto label_4fb83c;
    }
    ctx->pc = 0x4FB834u;
    {
        const bool branch_taken_0x4fb834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fb834) {
            ctx->pc = 0x4FB844u;
            goto label_4fb844;
        }
    }
    ctx->pc = 0x4FB83Cu;
label_4fb83c:
    // 0x4fb83c: 0xc13dfd8  jal         func_4F7F60
label_4fb840:
    if (ctx->pc == 0x4FB840u) {
        ctx->pc = 0x4FB840u;
            // 0x4fb840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB844u;
        goto label_4fb844;
    }
    ctx->pc = 0x4FB83Cu;
    SET_GPR_U32(ctx, 31, 0x4FB844u);
    ctx->pc = 0x4FB840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB83Cu;
            // 0x4fb840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7F60u;
    if (runtime->hasFunction(0x4F7F60u)) {
        auto targetFn = runtime->lookupFunction(0x4F7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB844u; }
        if (ctx->pc != 0x4FB844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7F60_0x4f7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FB844u; }
        if (ctx->pc != 0x4FB844u) { return; }
    }
    ctx->pc = 0x4FB844u;
label_4fb844:
    // 0x4fb844: 0xe65400a4  swc1        $f20, 0xA4($s2)
    ctx->pc = 0x4fb844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
label_4fb848:
    // 0x4fb848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4fb848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fb84c:
    // 0x4fb84c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4fb84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4fb850:
    // 0x4fb850: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4fb850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fb854:
    // 0x4fb854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4fb854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fb858:
    // 0x4fb858: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4fb858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fb85c:
    // 0x4fb85c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4fb85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fb860:
    // 0x4fb860: 0x3e00008  jr          $ra
label_4fb864:
    if (ctx->pc == 0x4FB864u) {
        ctx->pc = 0x4FB864u;
            // 0x4fb864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4FB868u;
        goto label_4fb868;
    }
    ctx->pc = 0x4FB860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FB864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB860u;
            // 0x4fb864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FB868u;
label_4fb868:
    // 0x4fb868: 0x0  nop
    ctx->pc = 0x4fb868u;
    // NOP
label_4fb86c:
    // 0x4fb86c: 0x0  nop
    ctx->pc = 0x4fb86cu;
    // NOP
}
