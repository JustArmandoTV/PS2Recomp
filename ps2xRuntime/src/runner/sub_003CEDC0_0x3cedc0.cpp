#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CEDC0
// Address: 0x3cedc0 - 0x3cf7b0
void sub_003CEDC0_0x3cedc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEDC0_0x3cedc0");
#endif

    switch (ctx->pc) {
        case 0x3cedc0u: goto label_3cedc0;
        case 0x3cedc4u: goto label_3cedc4;
        case 0x3cedc8u: goto label_3cedc8;
        case 0x3cedccu: goto label_3cedcc;
        case 0x3cedd0u: goto label_3cedd0;
        case 0x3cedd4u: goto label_3cedd4;
        case 0x3cedd8u: goto label_3cedd8;
        case 0x3ceddcu: goto label_3ceddc;
        case 0x3cede0u: goto label_3cede0;
        case 0x3cede4u: goto label_3cede4;
        case 0x3cede8u: goto label_3cede8;
        case 0x3cedecu: goto label_3cedec;
        case 0x3cedf0u: goto label_3cedf0;
        case 0x3cedf4u: goto label_3cedf4;
        case 0x3cedf8u: goto label_3cedf8;
        case 0x3cedfcu: goto label_3cedfc;
        case 0x3cee00u: goto label_3cee00;
        case 0x3cee04u: goto label_3cee04;
        case 0x3cee08u: goto label_3cee08;
        case 0x3cee0cu: goto label_3cee0c;
        case 0x3cee10u: goto label_3cee10;
        case 0x3cee14u: goto label_3cee14;
        case 0x3cee18u: goto label_3cee18;
        case 0x3cee1cu: goto label_3cee1c;
        case 0x3cee20u: goto label_3cee20;
        case 0x3cee24u: goto label_3cee24;
        case 0x3cee28u: goto label_3cee28;
        case 0x3cee2cu: goto label_3cee2c;
        case 0x3cee30u: goto label_3cee30;
        case 0x3cee34u: goto label_3cee34;
        case 0x3cee38u: goto label_3cee38;
        case 0x3cee3cu: goto label_3cee3c;
        case 0x3cee40u: goto label_3cee40;
        case 0x3cee44u: goto label_3cee44;
        case 0x3cee48u: goto label_3cee48;
        case 0x3cee4cu: goto label_3cee4c;
        case 0x3cee50u: goto label_3cee50;
        case 0x3cee54u: goto label_3cee54;
        case 0x3cee58u: goto label_3cee58;
        case 0x3cee5cu: goto label_3cee5c;
        case 0x3cee60u: goto label_3cee60;
        case 0x3cee64u: goto label_3cee64;
        case 0x3cee68u: goto label_3cee68;
        case 0x3cee6cu: goto label_3cee6c;
        case 0x3cee70u: goto label_3cee70;
        case 0x3cee74u: goto label_3cee74;
        case 0x3cee78u: goto label_3cee78;
        case 0x3cee7cu: goto label_3cee7c;
        case 0x3cee80u: goto label_3cee80;
        case 0x3cee84u: goto label_3cee84;
        case 0x3cee88u: goto label_3cee88;
        case 0x3cee8cu: goto label_3cee8c;
        case 0x3cee90u: goto label_3cee90;
        case 0x3cee94u: goto label_3cee94;
        case 0x3cee98u: goto label_3cee98;
        case 0x3cee9cu: goto label_3cee9c;
        case 0x3ceea0u: goto label_3ceea0;
        case 0x3ceea4u: goto label_3ceea4;
        case 0x3ceea8u: goto label_3ceea8;
        case 0x3ceeacu: goto label_3ceeac;
        case 0x3ceeb0u: goto label_3ceeb0;
        case 0x3ceeb4u: goto label_3ceeb4;
        case 0x3ceeb8u: goto label_3ceeb8;
        case 0x3ceebcu: goto label_3ceebc;
        case 0x3ceec0u: goto label_3ceec0;
        case 0x3ceec4u: goto label_3ceec4;
        case 0x3ceec8u: goto label_3ceec8;
        case 0x3ceeccu: goto label_3ceecc;
        case 0x3ceed0u: goto label_3ceed0;
        case 0x3ceed4u: goto label_3ceed4;
        case 0x3ceed8u: goto label_3ceed8;
        case 0x3ceedcu: goto label_3ceedc;
        case 0x3ceee0u: goto label_3ceee0;
        case 0x3ceee4u: goto label_3ceee4;
        case 0x3ceee8u: goto label_3ceee8;
        case 0x3ceeecu: goto label_3ceeec;
        case 0x3ceef0u: goto label_3ceef0;
        case 0x3ceef4u: goto label_3ceef4;
        case 0x3ceef8u: goto label_3ceef8;
        case 0x3ceefcu: goto label_3ceefc;
        case 0x3cef00u: goto label_3cef00;
        case 0x3cef04u: goto label_3cef04;
        case 0x3cef08u: goto label_3cef08;
        case 0x3cef0cu: goto label_3cef0c;
        case 0x3cef10u: goto label_3cef10;
        case 0x3cef14u: goto label_3cef14;
        case 0x3cef18u: goto label_3cef18;
        case 0x3cef1cu: goto label_3cef1c;
        case 0x3cef20u: goto label_3cef20;
        case 0x3cef24u: goto label_3cef24;
        case 0x3cef28u: goto label_3cef28;
        case 0x3cef2cu: goto label_3cef2c;
        case 0x3cef30u: goto label_3cef30;
        case 0x3cef34u: goto label_3cef34;
        case 0x3cef38u: goto label_3cef38;
        case 0x3cef3cu: goto label_3cef3c;
        case 0x3cef40u: goto label_3cef40;
        case 0x3cef44u: goto label_3cef44;
        case 0x3cef48u: goto label_3cef48;
        case 0x3cef4cu: goto label_3cef4c;
        case 0x3cef50u: goto label_3cef50;
        case 0x3cef54u: goto label_3cef54;
        case 0x3cef58u: goto label_3cef58;
        case 0x3cef5cu: goto label_3cef5c;
        case 0x3cef60u: goto label_3cef60;
        case 0x3cef64u: goto label_3cef64;
        case 0x3cef68u: goto label_3cef68;
        case 0x3cef6cu: goto label_3cef6c;
        case 0x3cef70u: goto label_3cef70;
        case 0x3cef74u: goto label_3cef74;
        case 0x3cef78u: goto label_3cef78;
        case 0x3cef7cu: goto label_3cef7c;
        case 0x3cef80u: goto label_3cef80;
        case 0x3cef84u: goto label_3cef84;
        case 0x3cef88u: goto label_3cef88;
        case 0x3cef8cu: goto label_3cef8c;
        case 0x3cef90u: goto label_3cef90;
        case 0x3cef94u: goto label_3cef94;
        case 0x3cef98u: goto label_3cef98;
        case 0x3cef9cu: goto label_3cef9c;
        case 0x3cefa0u: goto label_3cefa0;
        case 0x3cefa4u: goto label_3cefa4;
        case 0x3cefa8u: goto label_3cefa8;
        case 0x3cefacu: goto label_3cefac;
        case 0x3cefb0u: goto label_3cefb0;
        case 0x3cefb4u: goto label_3cefb4;
        case 0x3cefb8u: goto label_3cefb8;
        case 0x3cefbcu: goto label_3cefbc;
        case 0x3cefc0u: goto label_3cefc0;
        case 0x3cefc4u: goto label_3cefc4;
        case 0x3cefc8u: goto label_3cefc8;
        case 0x3cefccu: goto label_3cefcc;
        case 0x3cefd0u: goto label_3cefd0;
        case 0x3cefd4u: goto label_3cefd4;
        case 0x3cefd8u: goto label_3cefd8;
        case 0x3cefdcu: goto label_3cefdc;
        case 0x3cefe0u: goto label_3cefe0;
        case 0x3cefe4u: goto label_3cefe4;
        case 0x3cefe8u: goto label_3cefe8;
        case 0x3cefecu: goto label_3cefec;
        case 0x3ceff0u: goto label_3ceff0;
        case 0x3ceff4u: goto label_3ceff4;
        case 0x3ceff8u: goto label_3ceff8;
        case 0x3ceffcu: goto label_3ceffc;
        case 0x3cf000u: goto label_3cf000;
        case 0x3cf004u: goto label_3cf004;
        case 0x3cf008u: goto label_3cf008;
        case 0x3cf00cu: goto label_3cf00c;
        case 0x3cf010u: goto label_3cf010;
        case 0x3cf014u: goto label_3cf014;
        case 0x3cf018u: goto label_3cf018;
        case 0x3cf01cu: goto label_3cf01c;
        case 0x3cf020u: goto label_3cf020;
        case 0x3cf024u: goto label_3cf024;
        case 0x3cf028u: goto label_3cf028;
        case 0x3cf02cu: goto label_3cf02c;
        case 0x3cf030u: goto label_3cf030;
        case 0x3cf034u: goto label_3cf034;
        case 0x3cf038u: goto label_3cf038;
        case 0x3cf03cu: goto label_3cf03c;
        case 0x3cf040u: goto label_3cf040;
        case 0x3cf044u: goto label_3cf044;
        case 0x3cf048u: goto label_3cf048;
        case 0x3cf04cu: goto label_3cf04c;
        case 0x3cf050u: goto label_3cf050;
        case 0x3cf054u: goto label_3cf054;
        case 0x3cf058u: goto label_3cf058;
        case 0x3cf05cu: goto label_3cf05c;
        case 0x3cf060u: goto label_3cf060;
        case 0x3cf064u: goto label_3cf064;
        case 0x3cf068u: goto label_3cf068;
        case 0x3cf06cu: goto label_3cf06c;
        case 0x3cf070u: goto label_3cf070;
        case 0x3cf074u: goto label_3cf074;
        case 0x3cf078u: goto label_3cf078;
        case 0x3cf07cu: goto label_3cf07c;
        case 0x3cf080u: goto label_3cf080;
        case 0x3cf084u: goto label_3cf084;
        case 0x3cf088u: goto label_3cf088;
        case 0x3cf08cu: goto label_3cf08c;
        case 0x3cf090u: goto label_3cf090;
        case 0x3cf094u: goto label_3cf094;
        case 0x3cf098u: goto label_3cf098;
        case 0x3cf09cu: goto label_3cf09c;
        case 0x3cf0a0u: goto label_3cf0a0;
        case 0x3cf0a4u: goto label_3cf0a4;
        case 0x3cf0a8u: goto label_3cf0a8;
        case 0x3cf0acu: goto label_3cf0ac;
        case 0x3cf0b0u: goto label_3cf0b0;
        case 0x3cf0b4u: goto label_3cf0b4;
        case 0x3cf0b8u: goto label_3cf0b8;
        case 0x3cf0bcu: goto label_3cf0bc;
        case 0x3cf0c0u: goto label_3cf0c0;
        case 0x3cf0c4u: goto label_3cf0c4;
        case 0x3cf0c8u: goto label_3cf0c8;
        case 0x3cf0ccu: goto label_3cf0cc;
        case 0x3cf0d0u: goto label_3cf0d0;
        case 0x3cf0d4u: goto label_3cf0d4;
        case 0x3cf0d8u: goto label_3cf0d8;
        case 0x3cf0dcu: goto label_3cf0dc;
        case 0x3cf0e0u: goto label_3cf0e0;
        case 0x3cf0e4u: goto label_3cf0e4;
        case 0x3cf0e8u: goto label_3cf0e8;
        case 0x3cf0ecu: goto label_3cf0ec;
        case 0x3cf0f0u: goto label_3cf0f0;
        case 0x3cf0f4u: goto label_3cf0f4;
        case 0x3cf0f8u: goto label_3cf0f8;
        case 0x3cf0fcu: goto label_3cf0fc;
        case 0x3cf100u: goto label_3cf100;
        case 0x3cf104u: goto label_3cf104;
        case 0x3cf108u: goto label_3cf108;
        case 0x3cf10cu: goto label_3cf10c;
        case 0x3cf110u: goto label_3cf110;
        case 0x3cf114u: goto label_3cf114;
        case 0x3cf118u: goto label_3cf118;
        case 0x3cf11cu: goto label_3cf11c;
        case 0x3cf120u: goto label_3cf120;
        case 0x3cf124u: goto label_3cf124;
        case 0x3cf128u: goto label_3cf128;
        case 0x3cf12cu: goto label_3cf12c;
        case 0x3cf130u: goto label_3cf130;
        case 0x3cf134u: goto label_3cf134;
        case 0x3cf138u: goto label_3cf138;
        case 0x3cf13cu: goto label_3cf13c;
        case 0x3cf140u: goto label_3cf140;
        case 0x3cf144u: goto label_3cf144;
        case 0x3cf148u: goto label_3cf148;
        case 0x3cf14cu: goto label_3cf14c;
        case 0x3cf150u: goto label_3cf150;
        case 0x3cf154u: goto label_3cf154;
        case 0x3cf158u: goto label_3cf158;
        case 0x3cf15cu: goto label_3cf15c;
        case 0x3cf160u: goto label_3cf160;
        case 0x3cf164u: goto label_3cf164;
        case 0x3cf168u: goto label_3cf168;
        case 0x3cf16cu: goto label_3cf16c;
        case 0x3cf170u: goto label_3cf170;
        case 0x3cf174u: goto label_3cf174;
        case 0x3cf178u: goto label_3cf178;
        case 0x3cf17cu: goto label_3cf17c;
        case 0x3cf180u: goto label_3cf180;
        case 0x3cf184u: goto label_3cf184;
        case 0x3cf188u: goto label_3cf188;
        case 0x3cf18cu: goto label_3cf18c;
        case 0x3cf190u: goto label_3cf190;
        case 0x3cf194u: goto label_3cf194;
        case 0x3cf198u: goto label_3cf198;
        case 0x3cf19cu: goto label_3cf19c;
        case 0x3cf1a0u: goto label_3cf1a0;
        case 0x3cf1a4u: goto label_3cf1a4;
        case 0x3cf1a8u: goto label_3cf1a8;
        case 0x3cf1acu: goto label_3cf1ac;
        case 0x3cf1b0u: goto label_3cf1b0;
        case 0x3cf1b4u: goto label_3cf1b4;
        case 0x3cf1b8u: goto label_3cf1b8;
        case 0x3cf1bcu: goto label_3cf1bc;
        case 0x3cf1c0u: goto label_3cf1c0;
        case 0x3cf1c4u: goto label_3cf1c4;
        case 0x3cf1c8u: goto label_3cf1c8;
        case 0x3cf1ccu: goto label_3cf1cc;
        case 0x3cf1d0u: goto label_3cf1d0;
        case 0x3cf1d4u: goto label_3cf1d4;
        case 0x3cf1d8u: goto label_3cf1d8;
        case 0x3cf1dcu: goto label_3cf1dc;
        case 0x3cf1e0u: goto label_3cf1e0;
        case 0x3cf1e4u: goto label_3cf1e4;
        case 0x3cf1e8u: goto label_3cf1e8;
        case 0x3cf1ecu: goto label_3cf1ec;
        case 0x3cf1f0u: goto label_3cf1f0;
        case 0x3cf1f4u: goto label_3cf1f4;
        case 0x3cf1f8u: goto label_3cf1f8;
        case 0x3cf1fcu: goto label_3cf1fc;
        case 0x3cf200u: goto label_3cf200;
        case 0x3cf204u: goto label_3cf204;
        case 0x3cf208u: goto label_3cf208;
        case 0x3cf20cu: goto label_3cf20c;
        case 0x3cf210u: goto label_3cf210;
        case 0x3cf214u: goto label_3cf214;
        case 0x3cf218u: goto label_3cf218;
        case 0x3cf21cu: goto label_3cf21c;
        case 0x3cf220u: goto label_3cf220;
        case 0x3cf224u: goto label_3cf224;
        case 0x3cf228u: goto label_3cf228;
        case 0x3cf22cu: goto label_3cf22c;
        case 0x3cf230u: goto label_3cf230;
        case 0x3cf234u: goto label_3cf234;
        case 0x3cf238u: goto label_3cf238;
        case 0x3cf23cu: goto label_3cf23c;
        case 0x3cf240u: goto label_3cf240;
        case 0x3cf244u: goto label_3cf244;
        case 0x3cf248u: goto label_3cf248;
        case 0x3cf24cu: goto label_3cf24c;
        case 0x3cf250u: goto label_3cf250;
        case 0x3cf254u: goto label_3cf254;
        case 0x3cf258u: goto label_3cf258;
        case 0x3cf25cu: goto label_3cf25c;
        case 0x3cf260u: goto label_3cf260;
        case 0x3cf264u: goto label_3cf264;
        case 0x3cf268u: goto label_3cf268;
        case 0x3cf26cu: goto label_3cf26c;
        case 0x3cf270u: goto label_3cf270;
        case 0x3cf274u: goto label_3cf274;
        case 0x3cf278u: goto label_3cf278;
        case 0x3cf27cu: goto label_3cf27c;
        case 0x3cf280u: goto label_3cf280;
        case 0x3cf284u: goto label_3cf284;
        case 0x3cf288u: goto label_3cf288;
        case 0x3cf28cu: goto label_3cf28c;
        case 0x3cf290u: goto label_3cf290;
        case 0x3cf294u: goto label_3cf294;
        case 0x3cf298u: goto label_3cf298;
        case 0x3cf29cu: goto label_3cf29c;
        case 0x3cf2a0u: goto label_3cf2a0;
        case 0x3cf2a4u: goto label_3cf2a4;
        case 0x3cf2a8u: goto label_3cf2a8;
        case 0x3cf2acu: goto label_3cf2ac;
        case 0x3cf2b0u: goto label_3cf2b0;
        case 0x3cf2b4u: goto label_3cf2b4;
        case 0x3cf2b8u: goto label_3cf2b8;
        case 0x3cf2bcu: goto label_3cf2bc;
        case 0x3cf2c0u: goto label_3cf2c0;
        case 0x3cf2c4u: goto label_3cf2c4;
        case 0x3cf2c8u: goto label_3cf2c8;
        case 0x3cf2ccu: goto label_3cf2cc;
        case 0x3cf2d0u: goto label_3cf2d0;
        case 0x3cf2d4u: goto label_3cf2d4;
        case 0x3cf2d8u: goto label_3cf2d8;
        case 0x3cf2dcu: goto label_3cf2dc;
        case 0x3cf2e0u: goto label_3cf2e0;
        case 0x3cf2e4u: goto label_3cf2e4;
        case 0x3cf2e8u: goto label_3cf2e8;
        case 0x3cf2ecu: goto label_3cf2ec;
        case 0x3cf2f0u: goto label_3cf2f0;
        case 0x3cf2f4u: goto label_3cf2f4;
        case 0x3cf2f8u: goto label_3cf2f8;
        case 0x3cf2fcu: goto label_3cf2fc;
        case 0x3cf300u: goto label_3cf300;
        case 0x3cf304u: goto label_3cf304;
        case 0x3cf308u: goto label_3cf308;
        case 0x3cf30cu: goto label_3cf30c;
        case 0x3cf310u: goto label_3cf310;
        case 0x3cf314u: goto label_3cf314;
        case 0x3cf318u: goto label_3cf318;
        case 0x3cf31cu: goto label_3cf31c;
        case 0x3cf320u: goto label_3cf320;
        case 0x3cf324u: goto label_3cf324;
        case 0x3cf328u: goto label_3cf328;
        case 0x3cf32cu: goto label_3cf32c;
        case 0x3cf330u: goto label_3cf330;
        case 0x3cf334u: goto label_3cf334;
        case 0x3cf338u: goto label_3cf338;
        case 0x3cf33cu: goto label_3cf33c;
        case 0x3cf340u: goto label_3cf340;
        case 0x3cf344u: goto label_3cf344;
        case 0x3cf348u: goto label_3cf348;
        case 0x3cf34cu: goto label_3cf34c;
        case 0x3cf350u: goto label_3cf350;
        case 0x3cf354u: goto label_3cf354;
        case 0x3cf358u: goto label_3cf358;
        case 0x3cf35cu: goto label_3cf35c;
        case 0x3cf360u: goto label_3cf360;
        case 0x3cf364u: goto label_3cf364;
        case 0x3cf368u: goto label_3cf368;
        case 0x3cf36cu: goto label_3cf36c;
        case 0x3cf370u: goto label_3cf370;
        case 0x3cf374u: goto label_3cf374;
        case 0x3cf378u: goto label_3cf378;
        case 0x3cf37cu: goto label_3cf37c;
        case 0x3cf380u: goto label_3cf380;
        case 0x3cf384u: goto label_3cf384;
        case 0x3cf388u: goto label_3cf388;
        case 0x3cf38cu: goto label_3cf38c;
        case 0x3cf390u: goto label_3cf390;
        case 0x3cf394u: goto label_3cf394;
        case 0x3cf398u: goto label_3cf398;
        case 0x3cf39cu: goto label_3cf39c;
        case 0x3cf3a0u: goto label_3cf3a0;
        case 0x3cf3a4u: goto label_3cf3a4;
        case 0x3cf3a8u: goto label_3cf3a8;
        case 0x3cf3acu: goto label_3cf3ac;
        case 0x3cf3b0u: goto label_3cf3b0;
        case 0x3cf3b4u: goto label_3cf3b4;
        case 0x3cf3b8u: goto label_3cf3b8;
        case 0x3cf3bcu: goto label_3cf3bc;
        case 0x3cf3c0u: goto label_3cf3c0;
        case 0x3cf3c4u: goto label_3cf3c4;
        case 0x3cf3c8u: goto label_3cf3c8;
        case 0x3cf3ccu: goto label_3cf3cc;
        case 0x3cf3d0u: goto label_3cf3d0;
        case 0x3cf3d4u: goto label_3cf3d4;
        case 0x3cf3d8u: goto label_3cf3d8;
        case 0x3cf3dcu: goto label_3cf3dc;
        case 0x3cf3e0u: goto label_3cf3e0;
        case 0x3cf3e4u: goto label_3cf3e4;
        case 0x3cf3e8u: goto label_3cf3e8;
        case 0x3cf3ecu: goto label_3cf3ec;
        case 0x3cf3f0u: goto label_3cf3f0;
        case 0x3cf3f4u: goto label_3cf3f4;
        case 0x3cf3f8u: goto label_3cf3f8;
        case 0x3cf3fcu: goto label_3cf3fc;
        case 0x3cf400u: goto label_3cf400;
        case 0x3cf404u: goto label_3cf404;
        case 0x3cf408u: goto label_3cf408;
        case 0x3cf40cu: goto label_3cf40c;
        case 0x3cf410u: goto label_3cf410;
        case 0x3cf414u: goto label_3cf414;
        case 0x3cf418u: goto label_3cf418;
        case 0x3cf41cu: goto label_3cf41c;
        case 0x3cf420u: goto label_3cf420;
        case 0x3cf424u: goto label_3cf424;
        case 0x3cf428u: goto label_3cf428;
        case 0x3cf42cu: goto label_3cf42c;
        case 0x3cf430u: goto label_3cf430;
        case 0x3cf434u: goto label_3cf434;
        case 0x3cf438u: goto label_3cf438;
        case 0x3cf43cu: goto label_3cf43c;
        case 0x3cf440u: goto label_3cf440;
        case 0x3cf444u: goto label_3cf444;
        case 0x3cf448u: goto label_3cf448;
        case 0x3cf44cu: goto label_3cf44c;
        case 0x3cf450u: goto label_3cf450;
        case 0x3cf454u: goto label_3cf454;
        case 0x3cf458u: goto label_3cf458;
        case 0x3cf45cu: goto label_3cf45c;
        case 0x3cf460u: goto label_3cf460;
        case 0x3cf464u: goto label_3cf464;
        case 0x3cf468u: goto label_3cf468;
        case 0x3cf46cu: goto label_3cf46c;
        case 0x3cf470u: goto label_3cf470;
        case 0x3cf474u: goto label_3cf474;
        case 0x3cf478u: goto label_3cf478;
        case 0x3cf47cu: goto label_3cf47c;
        case 0x3cf480u: goto label_3cf480;
        case 0x3cf484u: goto label_3cf484;
        case 0x3cf488u: goto label_3cf488;
        case 0x3cf48cu: goto label_3cf48c;
        case 0x3cf490u: goto label_3cf490;
        case 0x3cf494u: goto label_3cf494;
        case 0x3cf498u: goto label_3cf498;
        case 0x3cf49cu: goto label_3cf49c;
        case 0x3cf4a0u: goto label_3cf4a0;
        case 0x3cf4a4u: goto label_3cf4a4;
        case 0x3cf4a8u: goto label_3cf4a8;
        case 0x3cf4acu: goto label_3cf4ac;
        case 0x3cf4b0u: goto label_3cf4b0;
        case 0x3cf4b4u: goto label_3cf4b4;
        case 0x3cf4b8u: goto label_3cf4b8;
        case 0x3cf4bcu: goto label_3cf4bc;
        case 0x3cf4c0u: goto label_3cf4c0;
        case 0x3cf4c4u: goto label_3cf4c4;
        case 0x3cf4c8u: goto label_3cf4c8;
        case 0x3cf4ccu: goto label_3cf4cc;
        case 0x3cf4d0u: goto label_3cf4d0;
        case 0x3cf4d4u: goto label_3cf4d4;
        case 0x3cf4d8u: goto label_3cf4d8;
        case 0x3cf4dcu: goto label_3cf4dc;
        case 0x3cf4e0u: goto label_3cf4e0;
        case 0x3cf4e4u: goto label_3cf4e4;
        case 0x3cf4e8u: goto label_3cf4e8;
        case 0x3cf4ecu: goto label_3cf4ec;
        case 0x3cf4f0u: goto label_3cf4f0;
        case 0x3cf4f4u: goto label_3cf4f4;
        case 0x3cf4f8u: goto label_3cf4f8;
        case 0x3cf4fcu: goto label_3cf4fc;
        case 0x3cf500u: goto label_3cf500;
        case 0x3cf504u: goto label_3cf504;
        case 0x3cf508u: goto label_3cf508;
        case 0x3cf50cu: goto label_3cf50c;
        case 0x3cf510u: goto label_3cf510;
        case 0x3cf514u: goto label_3cf514;
        case 0x3cf518u: goto label_3cf518;
        case 0x3cf51cu: goto label_3cf51c;
        case 0x3cf520u: goto label_3cf520;
        case 0x3cf524u: goto label_3cf524;
        case 0x3cf528u: goto label_3cf528;
        case 0x3cf52cu: goto label_3cf52c;
        case 0x3cf530u: goto label_3cf530;
        case 0x3cf534u: goto label_3cf534;
        case 0x3cf538u: goto label_3cf538;
        case 0x3cf53cu: goto label_3cf53c;
        case 0x3cf540u: goto label_3cf540;
        case 0x3cf544u: goto label_3cf544;
        case 0x3cf548u: goto label_3cf548;
        case 0x3cf54cu: goto label_3cf54c;
        case 0x3cf550u: goto label_3cf550;
        case 0x3cf554u: goto label_3cf554;
        case 0x3cf558u: goto label_3cf558;
        case 0x3cf55cu: goto label_3cf55c;
        case 0x3cf560u: goto label_3cf560;
        case 0x3cf564u: goto label_3cf564;
        case 0x3cf568u: goto label_3cf568;
        case 0x3cf56cu: goto label_3cf56c;
        case 0x3cf570u: goto label_3cf570;
        case 0x3cf574u: goto label_3cf574;
        case 0x3cf578u: goto label_3cf578;
        case 0x3cf57cu: goto label_3cf57c;
        case 0x3cf580u: goto label_3cf580;
        case 0x3cf584u: goto label_3cf584;
        case 0x3cf588u: goto label_3cf588;
        case 0x3cf58cu: goto label_3cf58c;
        case 0x3cf590u: goto label_3cf590;
        case 0x3cf594u: goto label_3cf594;
        case 0x3cf598u: goto label_3cf598;
        case 0x3cf59cu: goto label_3cf59c;
        case 0x3cf5a0u: goto label_3cf5a0;
        case 0x3cf5a4u: goto label_3cf5a4;
        case 0x3cf5a8u: goto label_3cf5a8;
        case 0x3cf5acu: goto label_3cf5ac;
        case 0x3cf5b0u: goto label_3cf5b0;
        case 0x3cf5b4u: goto label_3cf5b4;
        case 0x3cf5b8u: goto label_3cf5b8;
        case 0x3cf5bcu: goto label_3cf5bc;
        case 0x3cf5c0u: goto label_3cf5c0;
        case 0x3cf5c4u: goto label_3cf5c4;
        case 0x3cf5c8u: goto label_3cf5c8;
        case 0x3cf5ccu: goto label_3cf5cc;
        case 0x3cf5d0u: goto label_3cf5d0;
        case 0x3cf5d4u: goto label_3cf5d4;
        case 0x3cf5d8u: goto label_3cf5d8;
        case 0x3cf5dcu: goto label_3cf5dc;
        case 0x3cf5e0u: goto label_3cf5e0;
        case 0x3cf5e4u: goto label_3cf5e4;
        case 0x3cf5e8u: goto label_3cf5e8;
        case 0x3cf5ecu: goto label_3cf5ec;
        case 0x3cf5f0u: goto label_3cf5f0;
        case 0x3cf5f4u: goto label_3cf5f4;
        case 0x3cf5f8u: goto label_3cf5f8;
        case 0x3cf5fcu: goto label_3cf5fc;
        case 0x3cf600u: goto label_3cf600;
        case 0x3cf604u: goto label_3cf604;
        case 0x3cf608u: goto label_3cf608;
        case 0x3cf60cu: goto label_3cf60c;
        case 0x3cf610u: goto label_3cf610;
        case 0x3cf614u: goto label_3cf614;
        case 0x3cf618u: goto label_3cf618;
        case 0x3cf61cu: goto label_3cf61c;
        case 0x3cf620u: goto label_3cf620;
        case 0x3cf624u: goto label_3cf624;
        case 0x3cf628u: goto label_3cf628;
        case 0x3cf62cu: goto label_3cf62c;
        case 0x3cf630u: goto label_3cf630;
        case 0x3cf634u: goto label_3cf634;
        case 0x3cf638u: goto label_3cf638;
        case 0x3cf63cu: goto label_3cf63c;
        case 0x3cf640u: goto label_3cf640;
        case 0x3cf644u: goto label_3cf644;
        case 0x3cf648u: goto label_3cf648;
        case 0x3cf64cu: goto label_3cf64c;
        case 0x3cf650u: goto label_3cf650;
        case 0x3cf654u: goto label_3cf654;
        case 0x3cf658u: goto label_3cf658;
        case 0x3cf65cu: goto label_3cf65c;
        case 0x3cf660u: goto label_3cf660;
        case 0x3cf664u: goto label_3cf664;
        case 0x3cf668u: goto label_3cf668;
        case 0x3cf66cu: goto label_3cf66c;
        case 0x3cf670u: goto label_3cf670;
        case 0x3cf674u: goto label_3cf674;
        case 0x3cf678u: goto label_3cf678;
        case 0x3cf67cu: goto label_3cf67c;
        case 0x3cf680u: goto label_3cf680;
        case 0x3cf684u: goto label_3cf684;
        case 0x3cf688u: goto label_3cf688;
        case 0x3cf68cu: goto label_3cf68c;
        case 0x3cf690u: goto label_3cf690;
        case 0x3cf694u: goto label_3cf694;
        case 0x3cf698u: goto label_3cf698;
        case 0x3cf69cu: goto label_3cf69c;
        case 0x3cf6a0u: goto label_3cf6a0;
        case 0x3cf6a4u: goto label_3cf6a4;
        case 0x3cf6a8u: goto label_3cf6a8;
        case 0x3cf6acu: goto label_3cf6ac;
        case 0x3cf6b0u: goto label_3cf6b0;
        case 0x3cf6b4u: goto label_3cf6b4;
        case 0x3cf6b8u: goto label_3cf6b8;
        case 0x3cf6bcu: goto label_3cf6bc;
        case 0x3cf6c0u: goto label_3cf6c0;
        case 0x3cf6c4u: goto label_3cf6c4;
        case 0x3cf6c8u: goto label_3cf6c8;
        case 0x3cf6ccu: goto label_3cf6cc;
        case 0x3cf6d0u: goto label_3cf6d0;
        case 0x3cf6d4u: goto label_3cf6d4;
        case 0x3cf6d8u: goto label_3cf6d8;
        case 0x3cf6dcu: goto label_3cf6dc;
        case 0x3cf6e0u: goto label_3cf6e0;
        case 0x3cf6e4u: goto label_3cf6e4;
        case 0x3cf6e8u: goto label_3cf6e8;
        case 0x3cf6ecu: goto label_3cf6ec;
        case 0x3cf6f0u: goto label_3cf6f0;
        case 0x3cf6f4u: goto label_3cf6f4;
        case 0x3cf6f8u: goto label_3cf6f8;
        case 0x3cf6fcu: goto label_3cf6fc;
        case 0x3cf700u: goto label_3cf700;
        case 0x3cf704u: goto label_3cf704;
        case 0x3cf708u: goto label_3cf708;
        case 0x3cf70cu: goto label_3cf70c;
        case 0x3cf710u: goto label_3cf710;
        case 0x3cf714u: goto label_3cf714;
        case 0x3cf718u: goto label_3cf718;
        case 0x3cf71cu: goto label_3cf71c;
        case 0x3cf720u: goto label_3cf720;
        case 0x3cf724u: goto label_3cf724;
        case 0x3cf728u: goto label_3cf728;
        case 0x3cf72cu: goto label_3cf72c;
        case 0x3cf730u: goto label_3cf730;
        case 0x3cf734u: goto label_3cf734;
        case 0x3cf738u: goto label_3cf738;
        case 0x3cf73cu: goto label_3cf73c;
        case 0x3cf740u: goto label_3cf740;
        case 0x3cf744u: goto label_3cf744;
        case 0x3cf748u: goto label_3cf748;
        case 0x3cf74cu: goto label_3cf74c;
        case 0x3cf750u: goto label_3cf750;
        case 0x3cf754u: goto label_3cf754;
        case 0x3cf758u: goto label_3cf758;
        case 0x3cf75cu: goto label_3cf75c;
        case 0x3cf760u: goto label_3cf760;
        case 0x3cf764u: goto label_3cf764;
        case 0x3cf768u: goto label_3cf768;
        case 0x3cf76cu: goto label_3cf76c;
        case 0x3cf770u: goto label_3cf770;
        case 0x3cf774u: goto label_3cf774;
        case 0x3cf778u: goto label_3cf778;
        case 0x3cf77cu: goto label_3cf77c;
        case 0x3cf780u: goto label_3cf780;
        case 0x3cf784u: goto label_3cf784;
        case 0x3cf788u: goto label_3cf788;
        case 0x3cf78cu: goto label_3cf78c;
        case 0x3cf790u: goto label_3cf790;
        case 0x3cf794u: goto label_3cf794;
        case 0x3cf798u: goto label_3cf798;
        case 0x3cf79cu: goto label_3cf79c;
        case 0x3cf7a0u: goto label_3cf7a0;
        case 0x3cf7a4u: goto label_3cf7a4;
        case 0x3cf7a8u: goto label_3cf7a8;
        case 0x3cf7acu: goto label_3cf7ac;
        default: break;
    }

    ctx->pc = 0x3cedc0u;

label_3cedc0:
    // 0x3cedc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3cedc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3cedc4:
    // 0x3cedc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cedc8:
    // 0x3cedc8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3cedc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3cedcc:
    // 0x3cedcc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3cedccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3cedd0:
    // 0x3cedd0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3cedd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3cedd4:
    // 0x3cedd4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3cedd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3cedd8:
    // 0x3cedd8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3cedd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3ceddc:
    // 0x3ceddc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ceddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3cede0:
    // 0x3cede0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3cede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3cede4:
    // 0x3cede4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3cede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3cede8:
    // 0x3cede8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3cede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3cedec:
    // 0x3cedec: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3cedecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3cedf0:
    // 0x3cedf0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3cedf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3cedf4:
    // 0x3cedf4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3cedf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3cedf8:
    // 0x3cedf8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3cedf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3cedfc:
    // 0x3cedfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cedfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cee00:
    // 0x3cee00: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x3cee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3cee04:
    // 0x3cee04: 0x9096006e  lbu         $s6, 0x6E($a0)
    ctx->pc = 0x3cee04u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 110)));
label_3cee08:
    // 0x3cee08: 0x90420116  lbu         $v0, 0x116($v0)
    ctx->pc = 0x3cee08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_3cee0c:
    // 0x3cee0c: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x3cee0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3cee10:
    // 0x3cee10: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3cee14:
    if (ctx->pc == 0x3CEE14u) {
        ctx->pc = 0x3CEE14u;
            // 0x3cee14: 0x8c940060  lw          $s4, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x3CEE18u;
        goto label_3cee18;
    }
    ctx->pc = 0x3CEE10u;
    {
        const bool branch_taken_0x3cee10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEE10u;
            // 0x3cee14: 0x8c940060  lw          $s4, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee10) {
            ctx->pc = 0x3CEE1Cu;
            goto label_3cee1c;
        }
    }
    ctx->pc = 0x3CEE18u;
label_3cee18:
    // 0x3cee18: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3cee18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cee1c:
    // 0x3cee1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cee20:
    // 0x3cee20: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x3cee20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3cee24:
    // 0x3cee24: 0x8c5366c8  lw          $s3, 0x66C8($v0)
    ctx->pc = 0x3cee24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26312)));
label_3cee28:
    // 0x3cee28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cee28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cee2c:
    // 0x3cee2c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3cee2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3cee30:
    // 0x3cee30: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3cee30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3cee34:
    // 0x3cee34: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x3cee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cee38:
    // 0x3cee38: 0x246366d0  addiu       $v1, $v1, 0x66D0
    ctx->pc = 0x3cee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26320));
label_3cee3c:
    // 0x3cee3c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3cee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3cee40:
    // 0x3cee40: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x3cee40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_3cee44:
    // 0x3cee44: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x3cee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
label_3cee48:
    // 0x3cee48: 0x2a81000a  slti        $at, $s4, 0xA
    ctx->pc = 0x3cee48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_3cee4c:
    // 0x3cee4c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3cee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cee50:
    // 0x3cee50: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3cee50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_3cee54:
    // 0x3cee54: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3cee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cee58:
    // 0x3cee58: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x3cee58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
label_3cee5c:
    // 0x3cee5c: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x3cee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cee60:
    // 0x3cee60: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x3cee60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3cee64:
    // 0x3cee64: 0x46011dc2  mul.s       $f23, $f3, $f1
    ctx->pc = 0x3cee64u;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3cee68:
    // 0x3cee68: 0x46021e02  mul.s       $f24, $f3, $f2
    ctx->pc = 0x3cee68u;
    ctx->f[24] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3cee6c:
    // 0x3cee6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_3cee70:
    if (ctx->pc == 0x3CEE70u) {
        ctx->pc = 0x3CEE70u;
            // 0x3cee70: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3CEE74u;
        goto label_3cee74;
    }
    ctx->pc = 0x3CEE6Cu;
    {
        const bool branch_taken_0x3cee6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEE6Cu;
            // 0x3cee70: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee6c) {
            ctx->pc = 0x3CEE78u;
            goto label_3cee78;
        }
    }
    ctx->pc = 0x3CEE74u;
label_3cee74:
    // 0x3cee74: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x3cee74u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_3cee78:
    // 0x3cee78: 0x8483006c  lh          $v1, 0x6C($a0)
    ctx->pc = 0x3cee78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_3cee7c:
    // 0x3cee7c: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3cee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cee80:
    // 0x3cee80: 0xc6410578  lwc1        $f1, 0x578($s2)
    ctx->pc = 0x3cee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cee84:
    // 0x3cee84: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x3cee84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3cee88:
    // 0x3cee88: 0xc640057c  lwc1        $f0, 0x57C($s2)
    ctx->pc = 0x3cee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cee8c:
    // 0x3cee8c: 0x8665001a  lh          $a1, 0x1A($s3)
    ctx->pc = 0x3cee8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_3cee90:
    // 0x3cee90: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x3cee90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cee94:
    // 0x3cee94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cee98:
    // 0x3cee98: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3cee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3cee9c:
    // 0x3cee9c: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x3cee9cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ceea0:
    // 0x3ceea0: 0x26570570  addiu       $s7, $s2, 0x570
    ctx->pc = 0x3ceea0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1392));
label_3ceea4:
    // 0x3ceea4: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x3ceea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3ceea8:
    // 0x3ceea8: 0x86650020  lh          $a1, 0x20($s3)
    ctx->pc = 0x3ceea8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_3ceeac:
    // 0x3ceeac: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x3ceeacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3ceeb0:
    // 0x3ceeb0: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x3ceeb0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3ceeb4:
    // 0x3ceeb4: 0x92630022  lbu         $v1, 0x22($s3)
    ctx->pc = 0x3ceeb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_3ceeb8:
    // 0x3ceeb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ceeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ceebc:
    // 0x3ceebc: 0x838023  subu        $s0, $a0, $v1
    ctx->pc = 0x3ceebcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ceec0:
    // 0x3ceec0: 0x15020008  bne         $t0, $v0, . + 4 + (0x8 << 2)
label_3ceec4:
    if (ctx->pc == 0x3CEEC4u) {
        ctx->pc = 0x3CEEC4u;
            // 0x3ceec4: 0xc7a821  addu        $s5, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->pc = 0x3CEEC8u;
        goto label_3ceec8;
    }
    ctx->pc = 0x3CEEC0u;
    {
        const bool branch_taken_0x3ceec0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CEEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEEC0u;
            // 0x3ceec4: 0xc7a821  addu        $s5, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceec0) {
            ctx->pc = 0x3CEEE4u;
            goto label_3ceee4;
        }
    }
    ctx->pc = 0x3CEEC8u;
label_3ceec8:
    // 0x3ceec8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3ceec8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ceecc:
    // 0x3ceecc: 0x0  nop
    ctx->pc = 0x3ceeccu;
    // NOP
label_3ceed0:
    // 0x3ceed0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ceed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ceed4:
    // 0x3ceed4: 0x4615c000  add.s       $f0, $f24, $f21
    ctx->pc = 0x3ceed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_3ceed8:
    // 0x3ceed8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3ceed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ceedc:
    // 0x3ceedc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ceedcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ceee0:
    // 0x3ceee0: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x3ceee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_3ceee4:
    // 0x3ceee4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ceee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ceee8:
    // 0x3ceee8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ceee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ceeec:
    // 0x3ceeec: 0xc0506ac  jal         func_141AB0
label_3ceef0:
    if (ctx->pc == 0x3CEEF0u) {
        ctx->pc = 0x3CEEF0u;
            // 0x3ceef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CEEF4u;
        goto label_3ceef4;
    }
    ctx->pc = 0x3CEEECu;
    SET_GPR_U32(ctx, 31, 0x3CEEF4u);
    ctx->pc = 0x3CEEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEEECu;
            // 0x3ceef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CEEF4u; }
        if (ctx->pc != 0x3CEEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CEEF4u; }
        if (ctx->pc != 0x3CEEF4u) { return; }
    }
    ctx->pc = 0x3CEEF4u;
label_3ceef4:
    // 0x3ceef4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3ceef4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ceef8:
    // 0x3ceef8: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3ceef8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3ceefc:
    // 0x3ceefc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ceefcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3cef00:
    // 0x3cef00: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3cef00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3cef04:
    // 0x3cef04: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3cef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3cef08:
    // 0x3cef08: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3cef08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cef0c:
    // 0x3cef0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cef10:
    // 0x3cef10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cef10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cef14:
    // 0x3cef14: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3cef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cef18:
    // 0x3cef18: 0x46000bc1  sub.s       $f15, $f1, $f0
    ctx->pc = 0x3cef18u;
    ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cef1c:
    // 0x3cef1c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3cef1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cef20:
    // 0x3cef20: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cef24:
    // 0x3cef24: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3cef24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3cef28:
    // 0x3cef28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cef28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cef2c:
    // 0x3cef2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3cef2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cef30:
    // 0x3cef30: 0x0  nop
    ctx->pc = 0x3cef30u;
    // NOP
label_3cef34:
    // 0x3cef34: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cef34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cef38:
    // 0x3cef38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cef38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cef3c:
    // 0x3cef3c: 0x0  nop
    ctx->pc = 0x3cef3cu;
    // NOP
label_3cef40:
    // 0x3cef40: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cef40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cef44:
    // 0x3cef44: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3cef44u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cef48:
    // 0x3cef48: 0x0  nop
    ctx->pc = 0x3cef48u;
    // NOP
label_3cef4c:
    // 0x3cef4c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3cef4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3cef50:
    // 0x3cef50: 0x46147b41  sub.s       $f13, $f15, $f20
    ctx->pc = 0x3cef50u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
label_3cef54:
    // 0x3cef54: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cef54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cef58:
    // 0x3cef58: 0xc0bc284  jal         func_2F0A10
label_3cef5c:
    if (ctx->pc == 0x3CEF5Cu) {
        ctx->pc = 0x3CEF5Cu;
            // 0x3cef5c: 0x46156380  add.s       $f14, $f12, $f21 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->pc = 0x3CEF60u;
        goto label_3cef60;
    }
    ctx->pc = 0x3CEF58u;
    SET_GPR_U32(ctx, 31, 0x3CEF60u);
    ctx->pc = 0x3CEF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEF58u;
            // 0x3cef5c: 0x46156380  add.s       $f14, $f12, $f21 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CEF60u; }
        if (ctx->pc != 0x3CEF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CEF60u; }
        if (ctx->pc != 0x3CEF60u) { return; }
    }
    ctx->pc = 0x3CEF60u;
label_3cef60:
    // 0x3cef60: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3cef60u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cef64:
    // 0x3cef64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3cef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3cef68:
    // 0x3cef68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3cef68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3cef6c:
    // 0x3cef6c: 0x2a81000a  slti        $at, $s4, 0xA
    ctx->pc = 0x3cef6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_3cef70:
    // 0x3cef70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cef70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cef74:
    // 0x3cef74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cef74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cef78:
    // 0x3cef78: 0x0  nop
    ctx->pc = 0x3cef78u;
    // NOP
label_3cef7c:
    // 0x3cef7c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cef7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cef80:
    // 0x3cef80: 0x4618081c  madd.s      $f0, $f1, $f24
    ctx->pc = 0x3cef80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[24]));
label_3cef84:
    // 0x3cef84: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3cef84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3cef88:
    // 0x3cef88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cef88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cef8c:
    // 0x3cef8c: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x3cef8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_3cef90:
    // 0x3cef90: 0x5420003f  bnel        $at, $zero, . + 4 + (0x3F << 2)
label_3cef94:
    if (ctx->pc == 0x3CEF94u) {
        ctx->pc = 0x3CEF94u;
            // 0x3cef94: 0x46170882  mul.s       $f2, $f1, $f23 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->pc = 0x3CEF98u;
        goto label_3cef98;
    }
    ctx->pc = 0x3CEF90u;
    {
        const bool branch_taken_0x3cef90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cef90) {
            ctx->pc = 0x3CEF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEF90u;
            // 0x3cef94: 0x46170882  mul.s       $f2, $f1, $f23 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF090u;
            goto label_3cf090;
        }
    }
    ctx->pc = 0x3CEF98u;
label_3cef98:
    // 0x3cef98: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3cef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3cef9c:
    // 0x3cef9c: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x3cef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_3cefa0:
    // 0x3cefa0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3cefa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3cefa4:
    // 0x3cefa4: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x3cefa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cefa8:
    // 0x3cefa8: 0x1010  mfhi        $v0
    ctx->pc = 0x3cefa8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3cefac:
    // 0x3cefac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3cefacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3cefb0:
    // 0x3cefb0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3cefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cefb4:
    // 0x3cefb4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3cefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3cefb8:
    // 0x3cefb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cefbc:
    // 0x3cefbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3cefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3cefc0:
    // 0x3cefc0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3cefc4:
    if (ctx->pc == 0x3CEFC4u) {
        ctx->pc = 0x3CEFC4u;
            // 0x3cefc4: 0x282a023  subu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x3CEFC8u;
        goto label_3cefc8;
    }
    ctx->pc = 0x3CEFC0u;
    {
        const bool branch_taken_0x3cefc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CEFC0u;
            // 0x3cefc4: 0x282a023  subu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cefc0) {
            ctx->pc = 0x3CF028u;
            goto label_3cf028;
        }
    }
    ctx->pc = 0x3CEFC8u;
label_3cefc8:
    // 0x3cefc8: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3cefc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3cefcc:
    // 0x3cefcc: 0x2462000d  addiu       $v0, $v1, 0xD
    ctx->pc = 0x3cefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_3cefd0:
    // 0x3cefd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cefd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cefd4:
    // 0x3cefd4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3cefd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3cefd8:
    // 0x3cefd8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3cefd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3cefdc:
    // 0x3cefdc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cefdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cefe0:
    // 0x3cefe0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cefe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cefe4:
    // 0x3cefe4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cefe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cefe8:
    // 0x3cefe8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cefe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cefec:
    // 0x3cefec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cefecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ceff0:
    // 0x3ceff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ceff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ceff4:
    // 0x3ceff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ceff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ceff8:
    // 0x3ceff8: 0x0  nop
    ctx->pc = 0x3ceff8u;
    // NOP
label_3ceffc:
    // 0x3ceffc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ceffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cf000:
    // 0x3cf000: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3cf000u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf004:
    // 0x3cf004: 0x0  nop
    ctx->pc = 0x3cf004u;
    // NOP
label_3cf008:
    // 0x3cf008: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3cf008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3cf00c:
    // 0x3cf00c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cf00cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf010:
    // 0x3cf010: 0x0  nop
    ctx->pc = 0x3cf010u;
    // NOP
label_3cf014:
    // 0x3cf014: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3cf014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3cf018:
    // 0x3cf018: 0x46177301  sub.s       $f12, $f14, $f23
    ctx->pc = 0x3cf018u;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[23]);
label_3cf01c:
    // 0x3cf01c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cf01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cf020:
    // 0x3cf020: 0xc0bc284  jal         func_2F0A10
label_3cf024:
    if (ctx->pc == 0x3CF024u) {
        ctx->pc = 0x3CF024u;
            // 0x3cf024: 0x46167b41  sub.s       $f13, $f15, $f22 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
        ctx->pc = 0x3CF028u;
        goto label_3cf028;
    }
    ctx->pc = 0x3CF020u;
    SET_GPR_U32(ctx, 31, 0x3CF028u);
    ctx->pc = 0x3CF024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF020u;
            // 0x3cf024: 0x46167b41  sub.s       $f13, $f15, $f22 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF028u; }
        if (ctx->pc != 0x3CF028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF028u; }
        if (ctx->pc != 0x3CF028u) { return; }
    }
    ctx->pc = 0x3CF028u;
label_3cf028:
    // 0x3cf028: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3cf028u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf02c:
    // 0x3cf02c: 0x2682000d  addiu       $v0, $s4, 0xD
    ctx->pc = 0x3cf02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13));
label_3cf030:
    // 0x3cf030: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3cf030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3cf034:
    // 0x3cf034: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cf034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cf038:
    // 0x3cf038: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3cf038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3cf03c:
    // 0x3cf03c: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3cf03cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3cf040:
    // 0x3cf040: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cf040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cf044:
    // 0x3cf044: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3cf044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3cf048:
    // 0x3cf048: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cf048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cf04c:
    // 0x3cf04c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cf04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cf050:
    // 0x3cf050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cf050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf054:
    // 0x3cf054: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cf054u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf058:
    // 0x3cf058: 0x0  nop
    ctx->pc = 0x3cf058u;
    // NOP
label_3cf05c:
    // 0x3cf05c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3cf05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3cf060:
    // 0x3cf060: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3cf060u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf064:
    // 0x3cf064: 0x0  nop
    ctx->pc = 0x3cf064u;
    // NOP
label_3cf068:
    // 0x3cf068: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cf068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cf06c:
    // 0x3cf06c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cf06cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf070:
    // 0x3cf070: 0x0  nop
    ctx->pc = 0x3cf070u;
    // NOP
label_3cf074:
    // 0x3cf074: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cf074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cf078:
    // 0x3cf078: 0x46167b41  sub.s       $f13, $f15, $f22
    ctx->pc = 0x3cf078u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
label_3cf07c:
    // 0x3cf07c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cf07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cf080:
    // 0x3cf080: 0xc0bc284  jal         func_2F0A10
label_3cf084:
    if (ctx->pc == 0x3CF084u) {
        ctx->pc = 0x3CF084u;
            // 0x3cf084: 0x46176380  add.s       $f14, $f12, $f23 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
        ctx->pc = 0x3CF088u;
        goto label_3cf088;
    }
    ctx->pc = 0x3CF080u;
    SET_GPR_U32(ctx, 31, 0x3CF088u);
    ctx->pc = 0x3CF084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF080u;
            // 0x3cf084: 0x46176380  add.s       $f14, $f12, $f23 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF088u; }
        if (ctx->pc != 0x3CF088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF088u; }
        if (ctx->pc != 0x3CF088u) { return; }
    }
    ctx->pc = 0x3CF088u;
label_3cf088:
    // 0x3cf088: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3cf08c:
    if (ctx->pc == 0x3CF08Cu) {
        ctx->pc = 0x3CF08Cu;
            // 0x3cf08c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3CF090u;
        goto label_3cf090;
    }
    ctx->pc = 0x3CF088u;
    {
        const bool branch_taken_0x3cf088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF088u;
            // 0x3cf08c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf088) {
            ctx->pc = 0x3CF0FCu;
            goto label_3cf0fc;
        }
    }
    ctx->pc = 0x3CF090u;
label_3cf090:
    // 0x3cf090: 0x2682000d  addiu       $v0, $s4, 0xD
    ctx->pc = 0x3cf090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13));
label_3cf094:
    // 0x3cf094: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cf094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cf098:
    // 0x3cf098: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3cf098u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3cf09c:
    // 0x3cf09c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3cf09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3cf0a0:
    // 0x3cf0a0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3cf0a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3cf0a4:
    // 0x3cf0a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cf0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cf0a8:
    // 0x3cf0a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cf0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cf0ac:
    // 0x3cf0ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cf0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cf0b0:
    // 0x3cf0b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cf0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf0b4:
    // 0x3cf0b4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3cf0b4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf0b8:
    // 0x3cf0b8: 0x0  nop
    ctx->pc = 0x3cf0b8u;
    // NOP
label_3cf0bc:
    // 0x3cf0bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cf0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3cf0c0:
    // 0x3cf0c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cf0c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf0c4:
    // 0x3cf0c4: 0x0  nop
    ctx->pc = 0x3cf0c4u;
    // NOP
label_3cf0c8:
    // 0x3cf0c8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3cf0c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3cf0cc:
    // 0x3cf0cc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3cf0ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf0d0:
    // 0x3cf0d0: 0x0  nop
    ctx->pc = 0x3cf0d0u;
    // NOP
label_3cf0d4:
    // 0x3cf0d4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cf0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cf0d8:
    // 0x3cf0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cf0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf0dc:
    // 0x3cf0dc: 0x0  nop
    ctx->pc = 0x3cf0dcu;
    // NOP
label_3cf0e0:
    // 0x3cf0e0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cf0e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cf0e4:
    // 0x3cf0e4: 0x46167b41  sub.s       $f13, $f15, $f22
    ctx->pc = 0x3cf0e4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
label_3cf0e8:
    // 0x3cf0e8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x3cf0e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3cf0ec:
    // 0x3cf0ec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cf0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cf0f0:
    // 0x3cf0f0: 0xc0bc284  jal         func_2F0A10
label_3cf0f4:
    if (ctx->pc == 0x3CF0F4u) {
        ctx->pc = 0x3CF0F4u;
            // 0x3cf0f4: 0x46020b80  add.s       $f14, $f1, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x3CF0F8u;
        goto label_3cf0f8;
    }
    ctx->pc = 0x3CF0F0u;
    SET_GPR_U32(ctx, 31, 0x3CF0F8u);
    ctx->pc = 0x3CF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF0F0u;
            // 0x3cf0f4: 0x46020b80  add.s       $f14, $f1, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF0F8u; }
        if (ctx->pc != 0x3CF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF0F8u; }
        if (ctx->pc != 0x3CF0F8u) { return; }
    }
    ctx->pc = 0x3CF0F8u;
label_3cf0f8:
    // 0x3cf0f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3cf0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3cf0fc:
    // 0x3cf0fc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3cf0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3cf100:
    // 0x3cf100: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3cf100u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3cf104:
    // 0x3cf104: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3cf104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3cf108:
    // 0x3cf108: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3cf108u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cf10c:
    // 0x3cf10c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3cf10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3cf110:
    // 0x3cf110: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3cf110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cf114:
    // 0x3cf114: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3cf114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3cf118:
    // 0x3cf118: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3cf118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cf11c:
    // 0x3cf11c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cf11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cf120:
    // 0x3cf120: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3cf120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf124:
    // 0x3cf124: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3cf124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cf128:
    // 0x3cf128: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3cf128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cf12c:
    // 0x3cf12c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3cf12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cf130:
    // 0x3cf130: 0x3e00008  jr          $ra
label_3cf134:
    if (ctx->pc == 0x3CF134u) {
        ctx->pc = 0x3CF134u;
            // 0x3cf134: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3CF138u;
        goto label_3cf138;
    }
    ctx->pc = 0x3CF130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF130u;
            // 0x3cf134: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CF138u;
label_3cf138:
    // 0x3cf138: 0x0  nop
    ctx->pc = 0x3cf138u;
    // NOP
label_3cf13c:
    // 0x3cf13c: 0x0  nop
    ctx->pc = 0x3cf13cu;
    // NOP
label_3cf140:
    // 0x3cf140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cf140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3cf144:
    // 0x3cf144: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3cf144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3cf148:
    // 0x3cf148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cf148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3cf14c:
    // 0x3cf14c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cf150:
    // 0x3cf150: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cf150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3cf154:
    // 0x3cf154: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cf154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cf158:
    // 0x3cf158: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cf158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3cf15c:
    // 0x3cf15c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cf15cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cf160:
    // 0x3cf160: 0x8cb08a08  lw          $s0, -0x75F8($a1)
    ctx->pc = 0x3cf160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_3cf164:
    // 0x3cf164: 0x8c710eac  lw          $s1, 0xEAC($v1)
    ctx->pc = 0x3cf164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3cf168:
    // 0x3cf168: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3cf168u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3cf16c:
    // 0x3cf16c: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x3cf16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cf170:
    // 0x3cf170: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3cf170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_3cf174:
    // 0x3cf174: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3cf174u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cf178:
    // 0x3cf178: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cf17c:
    // 0x3cf17c: 0xc47467d0  lwc1        $f20, 0x67D0($v1)
    ctx->pc = 0x3cf17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 26576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cf180:
    // 0x3cf180: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x3cf180u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3cf184:
    // 0x3cf184: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3cf184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3cf188:
    // 0x3cf188: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_3cf18c:
    // 0x3cf18c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cf18cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cf190:
    // 0x3cf190: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cf190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cf194:
    // 0x3cf194: 0x0  nop
    ctx->pc = 0x3cf194u;
    // NOP
label_3cf198:
    // 0x3cf198: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3cf198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cf19c:
    // 0x3cf19c: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x3cf19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3cf1a0:
    // 0x3cf1a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cf1a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cf1a4:
    // 0x3cf1a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3cf1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3cf1a8:
    // 0x3cf1a8: 0x10200177  beqz        $at, . + 4 + (0x177 << 2)
label_3cf1ac:
    if (ctx->pc == 0x3CF1ACu) {
        ctx->pc = 0x3CF1ACu;
            // 0x3cf1ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF1B0u;
        goto label_3cf1b0;
    }
    ctx->pc = 0x3CF1A8u;
    {
        const bool branch_taken_0x3cf1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF1A8u;
            // 0x3cf1ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf1a8) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF1B0u;
label_3cf1b0:
    // 0x3cf1b0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3cf1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_3cf1b4:
    // 0x3cf1b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3cf1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3cf1b8:
    // 0x3cf1b8: 0x24e791b0  addiu       $a3, $a3, -0x6E50
    ctx->pc = 0x3cf1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939056));
label_3cf1bc:
    // 0x3cf1bc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3cf1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3cf1c0:
    // 0x3cf1c0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3cf1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3cf1c4:
    // 0x3cf1c4: 0xc00008  jr          $a2
label_3cf1c8:
    if (ctx->pc == 0x3CF1C8u) {
        ctx->pc = 0x3CF1CCu;
        goto label_3cf1cc;
    }
    ctx->pc = 0x3CF1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CF1CCu: goto label_3cf1cc;
            case 0x3CF1DCu: goto label_3cf1dc;
            case 0x3CF328u: goto label_3cf328;
            case 0x3CF4F0u: goto label_3cf4f0;
            case 0x3CF60Cu: goto label_3cf60c;
            case 0x3CF73Cu: goto label_3cf73c;
            case 0x3CF774u: goto label_3cf774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3CF1CCu;
label_3cf1cc:
    // 0x3cf1cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cf1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cf1d0:
    // 0x3cf1d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cf1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cf1d4:
    // 0x3cf1d4: 0x320f809  jalr        $t9
label_3cf1d8:
    if (ctx->pc == 0x3CF1D8u) {
        ctx->pc = 0x3CF1DCu;
        goto label_3cf1dc;
    }
    ctx->pc = 0x3CF1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF1DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF1DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF1DCu; }
            if (ctx->pc != 0x3CF1DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CF1DCu;
label_3cf1dc:
    // 0x3cf1dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf1e0:
    // 0x3cf1e0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cf1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cf1e4:
    // 0x3cf1e4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cf1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cf1e8:
    // 0x3cf1e8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cf1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cf1ec:
    // 0x3cf1ec: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3cf1f0:
    if (ctx->pc == 0x3CF1F0u) {
        ctx->pc = 0x3CF1F0u;
            // 0x3cf1f0: 0x8e430058  lw          $v1, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x3CF1F4u;
        goto label_3cf1f4;
    }
    ctx->pc = 0x3CF1ECu;
    {
        const bool branch_taken_0x3cf1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf1ec) {
            ctx->pc = 0x3CF1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF1ECu;
            // 0x3cf1f0: 0x8e430058  lw          $v1, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF210u;
            goto label_3cf210;
        }
    }
    ctx->pc = 0x3CF1F4u;
label_3cf1f4:
    // 0x3cf1f4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cf1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf1f8:
    // 0x3cf1f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cf1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf1fc:
    // 0x3cf1fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf200:
    // 0x3cf200: 0x320f809  jalr        $t9
label_3cf204:
    if (ctx->pc == 0x3CF204u) {
        ctx->pc = 0x3CF204u;
            // 0x3cf204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF208u;
        goto label_3cf208;
    }
    ctx->pc = 0x3CF200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF208u);
        ctx->pc = 0x3CF204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF200u;
            // 0x3cf204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF208u; }
            if (ctx->pc != 0x3CF208u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF208u;
label_3cf208:
    // 0x3cf208: 0x10000160  b           . + 4 + (0x160 << 2)
label_3cf20c:
    if (ctx->pc == 0x3CF20Cu) {
        ctx->pc = 0x3CF20Cu;
            // 0x3cf20c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3CF210u;
        goto label_3cf210;
    }
    ctx->pc = 0x3CF208u;
    {
        const bool branch_taken_0x3cf208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF208u;
            // 0x3cf20c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf208) {
            ctx->pc = 0x3CF78Cu;
            goto label_3cf78c;
        }
    }
    ctx->pc = 0x3CF210u;
label_3cf210:
    // 0x3cf210: 0x9242006f  lbu         $v0, 0x6F($s2)
    ctx->pc = 0x3cf210u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 111)));
label_3cf214:
    // 0x3cf214: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3cf214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3cf218:
    // 0x3cf218: 0x908300e4  lbu         $v1, 0xE4($a0)
    ctx->pc = 0x3cf218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
label_3cf21c:
    // 0x3cf21c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3cf21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cf220:
    // 0x3cf220: 0xa08200e4  sb          $v0, 0xE4($a0)
    ctx->pc = 0x3cf220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cf224:
    // 0x3cf224: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3cf224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf228:
    // 0x3cf228: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x3cf228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf22c:
    // 0x3cf22c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cf22cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cf230:
    // 0x3cf230: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3cf230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cf234:
    // 0x3cf234: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_3cf238:
    if (ctx->pc == 0x3CF238u) {
        ctx->pc = 0x3CF238u;
            // 0x3cf238: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->pc = 0x3CF23Cu;
        goto label_3cf23c;
    }
    ctx->pc = 0x3CF234u;
    {
        const bool branch_taken_0x3cf234 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CF238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF234u;
            // 0x3cf238: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf234) {
            ctx->pc = 0x3CF250u;
            goto label_3cf250;
        }
    }
    ctx->pc = 0x3CF23Cu;
label_3cf23c:
    // 0x3cf23c: 0xe6540070  swc1        $f20, 0x70($s2)
    ctx->pc = 0x3cf23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_3cf240:
    // 0x3cf240: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cf240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf244:
    // 0x3cf244: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cf244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cf248:
    // 0x3cf248: 0x320f809  jalr        $t9
label_3cf24c:
    if (ctx->pc == 0x3CF24Cu) {
        ctx->pc = 0x3CF24Cu;
            // 0x3cf24c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF250u;
        goto label_3cf250;
    }
    ctx->pc = 0x3CF248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF250u);
        ctx->pc = 0x3CF24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF248u;
            // 0x3cf24c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF250u; }
            if (ctx->pc != 0x3CF250u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF250u;
label_3cf250:
    // 0x3cf250: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf254:
    // 0x3cf254: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x3cf254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3cf258:
    // 0x3cf258: 0x8c4466c8  lw          $a0, 0x66C8($v0)
    ctx->pc = 0x3cf258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26312)));
label_3cf25c:
    // 0x3cf25c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cf25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf260:
    // 0x3cf260: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x3cf260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3cf264:
    // 0x3cf264: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_3cf268:
    if (ctx->pc == 0x3CF268u) {
        ctx->pc = 0x3CF26Cu;
        goto label_3cf26c;
    }
    ctx->pc = 0x3CF264u;
    {
        const bool branch_taken_0x3cf264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf264) {
            ctx->pc = 0x3CF278u;
            goto label_3cf278;
        }
    }
    ctx->pc = 0x3CF26Cu;
label_3cf26c:
    // 0x3cf26c: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x3cf26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_3cf270:
    // 0x3cf270: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3cf270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf274:
    // 0x3cf274: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf278:
    // 0x3cf278: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cf278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cf27c:
    // 0x3cf27c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cf280:
    // 0x3cf280: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3cf280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3cf284:
    // 0x3cf284: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf288:
    // 0x3cf288: 0x8c6466c8  lw          $a0, 0x66C8($v1)
    ctx->pc = 0x3cf288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26312)));
label_3cf28c:
    // 0x3cf28c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cf28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf290:
    // 0x3cf290: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x3cf290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cf294:
    // 0x3cf294: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x3cf294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_3cf298:
    // 0x3cf298: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cf298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cf29c:
    // 0x3cf29c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3cf29cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cf2a0:
    // 0x3cf2a0: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3cf2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3cf2a4:
    // 0x3cf2a4: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf2a8:
    // 0x3cf2a8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3cf2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf2ac:
    // 0x3cf2ac: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf2b0:
    // 0x3cf2b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cf2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cf2b4:
    // 0x3cf2b4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3cf2b8:
    if (ctx->pc == 0x3CF2B8u) {
        ctx->pc = 0x3CF2B8u;
            // 0x3cf2b8: 0x8e430078  lw          $v1, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->pc = 0x3CF2BCu;
        goto label_3cf2bc;
    }
    ctx->pc = 0x3CF2B4u;
    {
        const bool branch_taken_0x3cf2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cf2b4) {
            ctx->pc = 0x3CF2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF2B4u;
            // 0x3cf2b8: 0x8e430078  lw          $v1, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF2C4u;
            goto label_3cf2c4;
        }
    }
    ctx->pc = 0x3CF2BCu;
label_3cf2bc:
    // 0x3cf2bc: 0xe6410068  swc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf2bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf2c0:
    // 0x3cf2c0: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x3cf2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_3cf2c4:
    // 0x3cf2c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cf2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cf2c8:
    // 0x3cf2c8: 0x8c630e10  lw          $v1, 0xE10($v1)
    ctx->pc = 0x3cf2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3600)));
label_3cf2cc:
    // 0x3cf2cc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_3cf2d0:
    if (ctx->pc == 0x3CF2D0u) {
        ctx->pc = 0x3CF2D0u;
            // 0x3cf2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF2D4u;
        goto label_3cf2d4;
    }
    ctx->pc = 0x3CF2CCu;
    {
        const bool branch_taken_0x3cf2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cf2cc) {
            ctx->pc = 0x3CF2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF2CCu;
            // 0x3cf2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF2F8u;
            goto label_3cf2f8;
        }
    }
    ctx->pc = 0x3CF2D4u;
label_3cf2d4:
    // 0x3cf2d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cf2d8:
    // 0x3cf2d8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3cf2dc:
    if (ctx->pc == 0x3CF2DCu) {
        ctx->pc = 0x3CF2E0u;
        goto label_3cf2e0;
    }
    ctx->pc = 0x3CF2D8u;
    {
        const bool branch_taken_0x3cf2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cf2d8) {
            ctx->pc = 0x3CF2F4u;
            goto label_3cf2f4;
        }
    }
    ctx->pc = 0x3CF2E0u;
label_3cf2e0:
    // 0x3cf2e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cf2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cf2e4:
    // 0x3cf2e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3cf2e8:
    if (ctx->pc == 0x3CF2E8u) {
        ctx->pc = 0x3CF2ECu;
        goto label_3cf2ec;
    }
    ctx->pc = 0x3CF2E4u;
    {
        const bool branch_taken_0x3cf2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cf2e4) {
            ctx->pc = 0x3CF2F4u;
            goto label_3cf2f4;
        }
    }
    ctx->pc = 0x3CF2ECu;
label_3cf2ec:
    // 0x3cf2ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cf2f0:
    if (ctx->pc == 0x3CF2F0u) {
        ctx->pc = 0x3CF2F0u;
            // 0x3cf2f0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CF2F4u;
        goto label_3cf2f4;
    }
    ctx->pc = 0x3CF2ECu;
    {
        const bool branch_taken_0x3cf2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF2ECu;
            // 0x3cf2f0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf2ec) {
            ctx->pc = 0x3CF2F8u;
            goto label_3cf2f8;
        }
    }
    ctx->pc = 0x3CF2F4u;
label_3cf2f4:
    // 0x3cf2f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cf2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf2f8:
    // 0x3cf2f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3cf2fc:
    if (ctx->pc == 0x3CF2FCu) {
        ctx->pc = 0x3CF2FCu;
            // 0x3cf2fc: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->pc = 0x3CF300u;
        goto label_3cf300;
    }
    ctx->pc = 0x3CF2F8u;
    {
        const bool branch_taken_0x3cf2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf2f8) {
            ctx->pc = 0x3CF2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF2F8u;
            // 0x3cf2fc: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF318u;
            goto label_3cf318;
        }
    }
    ctx->pc = 0x3CF300u;
label_3cf300:
    // 0x3cf300: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cf300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf304:
    // 0x3cf304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cf304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf308:
    // 0x3cf308: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf30c:
    // 0x3cf30c: 0x320f809  jalr        $t9
label_3cf310:
    if (ctx->pc == 0x3CF310u) {
        ctx->pc = 0x3CF310u;
            // 0x3cf310: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3CF314u;
        goto label_3cf314;
    }
    ctx->pc = 0x3CF30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF314u);
        ctx->pc = 0x3CF310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF30Cu;
            // 0x3cf310: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF314u; }
            if (ctx->pc != 0x3CF314u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF314u;
label_3cf314:
    // 0x3cf314: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x3cf314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_3cf318:
    // 0x3cf318: 0xc11088c  jal         func_442230
label_3cf31c:
    if (ctx->pc == 0x3CF31Cu) {
        ctx->pc = 0x3CF320u;
        goto label_3cf320;
    }
    ctx->pc = 0x3CF318u;
    SET_GPR_U32(ctx, 31, 0x3CF320u);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF320u; }
        if (ctx->pc != 0x3CF320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF320u; }
        if (ctx->pc != 0x3CF320u) { return; }
    }
    ctx->pc = 0x3CF320u;
label_3cf320:
    // 0x3cf320: 0x10000119  b           . + 4 + (0x119 << 2)
label_3cf324:
    if (ctx->pc == 0x3CF324u) {
        ctx->pc = 0x3CF328u;
        goto label_3cf328;
    }
    ctx->pc = 0x3CF320u;
    {
        const bool branch_taken_0x3cf320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf320) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF328u;
label_3cf328:
    // 0x3cf328: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf32c:
    // 0x3cf32c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cf330:
    // 0x3cf330: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cf330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cf334:
    // 0x3cf334: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cf334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cf338:
    // 0x3cf338: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cf33c:
    if (ctx->pc == 0x3CF33Cu) {
        ctx->pc = 0x3CF33Cu;
            // 0x3cf33c: 0x8e450058  lw          $a1, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x3CF340u;
        goto label_3cf340;
    }
    ctx->pc = 0x3CF338u;
    {
        const bool branch_taken_0x3cf338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf338) {
            ctx->pc = 0x3CF33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF338u;
            // 0x3cf33c: 0x8e450058  lw          $a1, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF358u;
            goto label_3cf358;
        }
    }
    ctx->pc = 0x3CF340u;
label_3cf340:
    // 0x3cf340: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cf340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cf344:
    // 0x3cf344: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf348:
    // 0x3cf348: 0x320f809  jalr        $t9
label_3cf34c:
    if (ctx->pc == 0x3CF34Cu) {
        ctx->pc = 0x3CF34Cu;
            // 0x3cf34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF350u;
        goto label_3cf350;
    }
    ctx->pc = 0x3CF348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF350u);
        ctx->pc = 0x3CF34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF348u;
            // 0x3cf34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF350u; }
            if (ctx->pc != 0x3CF350u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF350u;
label_3cf350:
    // 0x3cf350: 0x1000010d  b           . + 4 + (0x10D << 2)
label_3cf354:
    if (ctx->pc == 0x3CF354u) {
        ctx->pc = 0x3CF358u;
        goto label_3cf358;
    }
    ctx->pc = 0x3CF350u;
    {
        const bool branch_taken_0x3cf350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf350) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF358u;
label_3cf358:
    // 0x3cf358: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cf35c:
    // 0x3cf35c: 0x9244006f  lbu         $a0, 0x6F($s2)
    ctx->pc = 0x3cf35cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 111)));
label_3cf360:
    // 0x3cf360: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cf360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cf364:
    // 0x3cf364: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x3cf364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3cf368:
    // 0x3cf368: 0x90c500e4  lbu         $a1, 0xE4($a2)
    ctx->pc = 0x3cf368u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 228)));
label_3cf36c:
    // 0x3cf36c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3cf36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_3cf370:
    // 0x3cf370: 0xa0c400e4  sb          $a0, 0xE4($a2)
    ctx->pc = 0x3cf370u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 228), (uint8_t)GPR_U32(ctx, 4));
label_3cf374:
    // 0x3cf374: 0x8c6566c8  lw          $a1, 0x66C8($v1)
    ctx->pc = 0x3cf374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26312)));
label_3cf378:
    // 0x3cf378: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3cf378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3cf37c:
    // 0x3cf37c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3cf37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf380:
    // 0x3cf380: 0x8642006c  lh          $v0, 0x6C($s2)
    ctx->pc = 0x3cf380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_3cf384:
    // 0x3cf384: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cf384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cf388:
    // 0x3cf388: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3cf388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cf38c:
    // 0x3cf38c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cf38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cf390:
    // 0x3cf390: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3cf390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3cf394:
    // 0x3cf394: 0x0  nop
    ctx->pc = 0x3cf394u;
    // NOP
label_3cf398:
    // 0x3cf398: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3cf398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3cf39c:
    // 0x3cf39c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3cf39cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3cf3a0:
    // 0x3cf3a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cf3a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cf3a4:
    // 0x3cf3a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cf3a8:
    // 0x3cf3a8: 0xa642006c  sh          $v0, 0x6C($s2)
    ctx->pc = 0x3cf3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 2));
label_3cf3ac:
    // 0x3cf3ac: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x3cf3acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3cf3b0:
    // 0x3cf3b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cf3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cf3b4:
    // 0x3cf3b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cf3b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cf3b8:
    // 0x3cf3b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3cf3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3cf3bc:
    // 0x3cf3bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cf3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3cf3c0:
    // 0x3cf3c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3cf3c4:
    if (ctx->pc == 0x3CF3C4u) {
        ctx->pc = 0x3CF3C4u;
            // 0x3cf3c4: 0x9243006e  lbu         $v1, 0x6E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 110)));
        ctx->pc = 0x3CF3C8u;
        goto label_3cf3c8;
    }
    ctx->pc = 0x3CF3C0u;
    {
        const bool branch_taken_0x3cf3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf3c0) {
            ctx->pc = 0x3CF3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF3C0u;
            // 0x3cf3c4: 0x9243006e  lbu         $v1, 0x6E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 110)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF3D0u;
            goto label_3cf3d0;
        }
    }
    ctx->pc = 0x3CF3C8u;
label_3cf3c8:
    // 0x3cf3c8: 0xa643006c  sh          $v1, 0x6C($s2)
    ctx->pc = 0x3cf3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 3));
label_3cf3cc:
    // 0x3cf3cc: 0x9243006e  lbu         $v1, 0x6E($s2)
    ctx->pc = 0x3cf3ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 110)));
label_3cf3d0:
    // 0x3cf3d0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3cf3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cf3d4:
    // 0x3cf3d4: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x3cf3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_3cf3d8:
    // 0x3cf3d8: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_3cf3dc:
    if (ctx->pc == 0x3CF3DCu) {
        ctx->pc = 0x3CF3DCu;
            // 0x3cf3dc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x3CF3E0u;
        goto label_3cf3e0;
    }
    ctx->pc = 0x3CF3D8u;
    {
        const bool branch_taken_0x3cf3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf3d8) {
            ctx->pc = 0x3CF3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF3D8u;
            // 0x3cf3dc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF3F0u;
            goto label_3cf3f0;
        }
    }
    ctx->pc = 0x3CF3E0u;
label_3cf3e0:
    // 0x3cf3e0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3cf3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3cf3e4:
    // 0x3cf3e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cf3e8:
    // 0x3cf3e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cf3ec:
    if (ctx->pc == 0x3CF3ECu) {
        ctx->pc = 0x3CF3ECu;
            // 0x3cf3ec: 0xa242006e  sb          $v0, 0x6E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3CF3F0u;
        goto label_3cf3f0;
    }
    ctx->pc = 0x3CF3E8u;
    {
        const bool branch_taken_0x3cf3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF3E8u;
            // 0x3cf3ec: 0xa242006e  sb          $v0, 0x6E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf3e8) {
            ctx->pc = 0x3CF3FCu;
            goto label_3cf3fc;
        }
    }
    ctx->pc = 0x3CF3F0u;
label_3cf3f0:
    // 0x3cf3f0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3cf3f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3cf3f4:
    // 0x3cf3f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cf3f8:
    if (ctx->pc == 0x3CF3F8u) {
        ctx->pc = 0x3CF3F8u;
            // 0x3cf3f8: 0xa242006e  sb          $v0, 0x6E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3CF3FCu;
        goto label_3cf3fc;
    }
    ctx->pc = 0x3CF3F4u;
    {
        const bool branch_taken_0x3cf3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF3F4u;
            // 0x3cf3f8: 0xa242006e  sb          $v0, 0x6E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf3f4) {
            ctx->pc = 0x3CF400u;
            goto label_3cf400;
        }
    }
    ctx->pc = 0x3CF3FCu;
label_3cf3fc:
    // 0x3cf3fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3cf3fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf400:
    // 0x3cf400: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3cf404:
    if (ctx->pc == 0x3CF404u) {
        ctx->pc = 0x3CF408u;
        goto label_3cf408;
    }
    ctx->pc = 0x3CF400u;
    {
        const bool branch_taken_0x3cf400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf400) {
            ctx->pc = 0x3CF418u;
            goto label_3cf418;
        }
    }
    ctx->pc = 0x3CF408u;
label_3cf408:
    // 0x3cf408: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cf408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf40c:
    // 0x3cf40c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cf40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cf410:
    // 0x3cf410: 0x320f809  jalr        $t9
label_3cf414:
    if (ctx->pc == 0x3CF414u) {
        ctx->pc = 0x3CF414u;
            // 0x3cf414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF418u;
        goto label_3cf418;
    }
    ctx->pc = 0x3CF410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF418u);
        ctx->pc = 0x3CF414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF410u;
            // 0x3cf414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF418u; }
            if (ctx->pc != 0x3CF418u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF418u;
label_3cf418:
    // 0x3cf418: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf41c:
    // 0x3cf41c: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x3cf41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3cf420:
    // 0x3cf420: 0x8c4466c8  lw          $a0, 0x66C8($v0)
    ctx->pc = 0x3cf420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26312)));
label_3cf424:
    // 0x3cf424: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cf424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf428:
    // 0x3cf428: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x3cf428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3cf42c:
    // 0x3cf42c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_3cf430:
    if (ctx->pc == 0x3CF430u) {
        ctx->pc = 0x3CF434u;
        goto label_3cf434;
    }
    ctx->pc = 0x3CF42Cu;
    {
        const bool branch_taken_0x3cf42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf42c) {
            ctx->pc = 0x3CF440u;
            goto label_3cf440;
        }
    }
    ctx->pc = 0x3CF434u;
label_3cf434:
    // 0x3cf434: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x3cf434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_3cf438:
    // 0x3cf438: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3cf438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf43c:
    // 0x3cf43c: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf440:
    // 0x3cf440: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cf440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cf444:
    // 0x3cf444: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cf448:
    // 0x3cf448: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3cf448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3cf44c:
    // 0x3cf44c: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf450:
    // 0x3cf450: 0x8c6466c8  lw          $a0, 0x66C8($v1)
    ctx->pc = 0x3cf450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26312)));
label_3cf454:
    // 0x3cf454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cf454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf458:
    // 0x3cf458: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x3cf458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cf45c:
    // 0x3cf45c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x3cf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_3cf460:
    // 0x3cf460: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cf460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cf464:
    // 0x3cf464: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3cf464u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cf468:
    // 0x3cf468: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3cf468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3cf46c:
    // 0x3cf46c: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf470:
    // 0x3cf470: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3cf470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf474:
    // 0x3cf474: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf478:
    // 0x3cf478: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cf478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cf47c:
    // 0x3cf47c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3cf480:
    if (ctx->pc == 0x3CF480u) {
        ctx->pc = 0x3CF480u;
            // 0x3cf480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF484u;
        goto label_3cf484;
    }
    ctx->pc = 0x3CF47Cu;
    {
        const bool branch_taken_0x3cf47c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cf47c) {
            ctx->pc = 0x3CF480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF47Cu;
            // 0x3cf480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF48Cu;
            goto label_3cf48c;
        }
    }
    ctx->pc = 0x3CF484u;
label_3cf484:
    // 0x3cf484: 0xe6410068  swc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf488:
    // 0x3cf488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cf488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf48c:
    // 0x3cf48c: 0xc0f3dec  jal         func_3CF7B0
label_3cf490:
    if (ctx->pc == 0x3CF490u) {
        ctx->pc = 0x3CF494u;
        goto label_3cf494;
    }
    ctx->pc = 0x3CF48Cu;
    SET_GPR_U32(ctx, 31, 0x3CF494u);
    ctx->pc = 0x3CF7B0u;
    if (runtime->hasFunction(0x3CF7B0u)) {
        auto targetFn = runtime->lookupFunction(0x3CF7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF494u; }
        if (ctx->pc != 0x3CF494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CF7B0_0x3cf7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF494u; }
        if (ctx->pc != 0x3CF494u) { return; }
    }
    ctx->pc = 0x3CF494u;
label_3cf494:
    // 0x3cf494: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x3cf494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_3cf498:
    // 0x3cf498: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cf498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cf49c:
    // 0x3cf49c: 0x8c840e10  lw          $a0, 0xE10($a0)
    ctx->pc = 0x3cf49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3600)));
label_3cf4a0:
    // 0x3cf4a0: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
label_3cf4a4:
    if (ctx->pc == 0x3CF4A4u) {
        ctx->pc = 0x3CF4A4u;
            // 0x3cf4a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF4A8u;
        goto label_3cf4a8;
    }
    ctx->pc = 0x3CF4A0u;
    {
        const bool branch_taken_0x3cf4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf4a0) {
            ctx->pc = 0x3CF4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF4A0u;
            // 0x3cf4a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF4CCu;
            goto label_3cf4cc;
        }
    }
    ctx->pc = 0x3CF4A8u;
label_3cf4a8:
    // 0x3cf4a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cf4ac:
    // 0x3cf4ac: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3cf4b0:
    if (ctx->pc == 0x3CF4B0u) {
        ctx->pc = 0x3CF4B4u;
        goto label_3cf4b4;
    }
    ctx->pc = 0x3CF4ACu;
    {
        const bool branch_taken_0x3cf4ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf4ac) {
            ctx->pc = 0x3CF4C8u;
            goto label_3cf4c8;
        }
    }
    ctx->pc = 0x3CF4B4u;
label_3cf4b4:
    // 0x3cf4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cf4b8:
    // 0x3cf4b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3cf4bc:
    if (ctx->pc == 0x3CF4BCu) {
        ctx->pc = 0x3CF4C0u;
        goto label_3cf4c0;
    }
    ctx->pc = 0x3CF4B8u;
    {
        const bool branch_taken_0x3cf4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf4b8) {
            ctx->pc = 0x3CF4C8u;
            goto label_3cf4c8;
        }
    }
    ctx->pc = 0x3CF4C0u;
label_3cf4c0:
    // 0x3cf4c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cf4c4:
    if (ctx->pc == 0x3CF4C4u) {
        ctx->pc = 0x3CF4C4u;
            // 0x3cf4c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CF4C8u;
        goto label_3cf4c8;
    }
    ctx->pc = 0x3CF4C0u;
    {
        const bool branch_taken_0x3cf4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF4C0u;
            // 0x3cf4c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf4c0) {
            ctx->pc = 0x3CF4CCu;
            goto label_3cf4cc;
        }
    }
    ctx->pc = 0x3CF4C8u;
label_3cf4c8:
    // 0x3cf4c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3cf4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf4cc:
    // 0x3cf4cc: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
label_3cf4d0:
    if (ctx->pc == 0x3CF4D0u) {
        ctx->pc = 0x3CF4D4u;
        goto label_3cf4d4;
    }
    ctx->pc = 0x3CF4CCu;
    {
        const bool branch_taken_0x3cf4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf4cc) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF4D4u;
label_3cf4d4:
    // 0x3cf4d4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cf4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf4d8:
    // 0x3cf4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cf4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf4dc:
    // 0x3cf4dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf4e0:
    // 0x3cf4e0: 0x320f809  jalr        $t9
label_3cf4e4:
    if (ctx->pc == 0x3CF4E4u) {
        ctx->pc = 0x3CF4E4u;
            // 0x3cf4e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3CF4E8u;
        goto label_3cf4e8;
    }
    ctx->pc = 0x3CF4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF4E8u);
        ctx->pc = 0x3CF4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF4E0u;
            // 0x3cf4e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF4E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF4E8u; }
            if (ctx->pc != 0x3CF4E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF4E8u;
label_3cf4e8:
    // 0x3cf4e8: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_3cf4ec:
    if (ctx->pc == 0x3CF4ECu) {
        ctx->pc = 0x3CF4F0u;
        goto label_3cf4f0;
    }
    ctx->pc = 0x3CF4E8u;
    {
        const bool branch_taken_0x3cf4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf4e8) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF4F0u;
label_3cf4f0:
    // 0x3cf4f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf4f4:
    // 0x3cf4f4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cf4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cf4f8:
    // 0x3cf4f8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cf4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cf4fc:
    // 0x3cf4fc: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cf4fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cf500:
    // 0x3cf500: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cf504:
    if (ctx->pc == 0x3CF504u) {
        ctx->pc = 0x3CF504u;
            // 0x3cf504: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x3CF508u;
        goto label_3cf508;
    }
    ctx->pc = 0x3CF500u;
    {
        const bool branch_taken_0x3cf500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf500) {
            ctx->pc = 0x3CF504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF500u;
            // 0x3cf504: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF520u;
            goto label_3cf520;
        }
    }
    ctx->pc = 0x3CF508u;
label_3cf508:
    // 0x3cf508: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cf508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cf50c:
    // 0x3cf50c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf510:
    // 0x3cf510: 0x320f809  jalr        $t9
label_3cf514:
    if (ctx->pc == 0x3CF514u) {
        ctx->pc = 0x3CF514u;
            // 0x3cf514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF518u;
        goto label_3cf518;
    }
    ctx->pc = 0x3CF510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF518u);
        ctx->pc = 0x3CF514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF510u;
            // 0x3cf514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF518u; }
            if (ctx->pc != 0x3CF518u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF518u;
label_3cf518:
    // 0x3cf518: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3cf51c:
    if (ctx->pc == 0x3CF51Cu) {
        ctx->pc = 0x3CF520u;
        goto label_3cf520;
    }
    ctx->pc = 0x3CF518u;
    {
        const bool branch_taken_0x3cf518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf518) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF520u;
label_3cf520:
    // 0x3cf520: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf524:
    // 0x3cf524: 0x9243006f  lbu         $v1, 0x6F($s2)
    ctx->pc = 0x3cf524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 111)));
label_3cf528:
    // 0x3cf528: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x3cf528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3cf52c:
    // 0x3cf52c: 0x90a400e4  lbu         $a0, 0xE4($a1)
    ctx->pc = 0x3cf52cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
label_3cf530:
    // 0x3cf530: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3cf530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3cf534:
    // 0x3cf534: 0xa0a300e4  sb          $v1, 0xE4($a1)
    ctx->pc = 0x3cf534u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 228), (uint8_t)GPR_U32(ctx, 3));
label_3cf538:
    // 0x3cf538: 0x8c4466c8  lw          $a0, 0x66C8($v0)
    ctx->pc = 0x3cf538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26312)));
label_3cf53c:
    // 0x3cf53c: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x3cf53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3cf540:
    // 0x3cf540: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x3cf540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3cf544:
    // 0x3cf544: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cf544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf548:
    // 0x3cf548: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_3cf54c:
    if (ctx->pc == 0x3CF54Cu) {
        ctx->pc = 0x3CF550u;
        goto label_3cf550;
    }
    ctx->pc = 0x3CF548u;
    {
        const bool branch_taken_0x3cf548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf548) {
            ctx->pc = 0x3CF55Cu;
            goto label_3cf55c;
        }
    }
    ctx->pc = 0x3CF550u;
label_3cf550:
    // 0x3cf550: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x3cf550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_3cf554:
    // 0x3cf554: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3cf554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf558:
    // 0x3cf558: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf55c:
    // 0x3cf55c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cf55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cf560:
    // 0x3cf560: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cf564:
    // 0x3cf564: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3cf564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3cf568:
    // 0x3cf568: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf56c:
    // 0x3cf56c: 0x8c6466c8  lw          $a0, 0x66C8($v1)
    ctx->pc = 0x3cf56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26312)));
label_3cf570:
    // 0x3cf570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cf570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf574:
    // 0x3cf574: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x3cf574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cf578:
    // 0x3cf578: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x3cf578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_3cf57c:
    // 0x3cf57c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cf57cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cf580:
    // 0x3cf580: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3cf580u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cf584:
    // 0x3cf584: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3cf584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3cf588:
    // 0x3cf588: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf58c:
    // 0x3cf58c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3cf58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf590:
    // 0x3cf590: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf594:
    // 0x3cf594: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cf594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cf598:
    // 0x3cf598: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3cf59c:
    if (ctx->pc == 0x3CF59Cu) {
        ctx->pc = 0x3CF59Cu;
            // 0x3cf59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF5A0u;
        goto label_3cf5a0;
    }
    ctx->pc = 0x3CF598u;
    {
        const bool branch_taken_0x3cf598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cf598) {
            ctx->pc = 0x3CF59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF598u;
            // 0x3cf59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF5A8u;
            goto label_3cf5a8;
        }
    }
    ctx->pc = 0x3CF5A0u;
label_3cf5a0:
    // 0x3cf5a0: 0xe6410068  swc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf5a4:
    // 0x3cf5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cf5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf5a8:
    // 0x3cf5a8: 0xc0f3dec  jal         func_3CF7B0
label_3cf5ac:
    if (ctx->pc == 0x3CF5ACu) {
        ctx->pc = 0x3CF5B0u;
        goto label_3cf5b0;
    }
    ctx->pc = 0x3CF5A8u;
    SET_GPR_U32(ctx, 31, 0x3CF5B0u);
    ctx->pc = 0x3CF7B0u;
    if (runtime->hasFunction(0x3CF7B0u)) {
        auto targetFn = runtime->lookupFunction(0x3CF7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF5B0u; }
        if (ctx->pc != 0x3CF5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CF7B0_0x3cf7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF5B0u; }
        if (ctx->pc != 0x3CF5B0u) { return; }
    }
    ctx->pc = 0x3CF5B0u;
label_3cf5b0:
    // 0x3cf5b0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x3cf5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_3cf5b4:
    // 0x3cf5b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cf5b8:
    // 0x3cf5b8: 0x8c840e10  lw          $a0, 0xE10($a0)
    ctx->pc = 0x3cf5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3600)));
label_3cf5bc:
    // 0x3cf5bc: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
label_3cf5c0:
    if (ctx->pc == 0x3CF5C0u) {
        ctx->pc = 0x3CF5C0u;
            // 0x3cf5c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF5C4u;
        goto label_3cf5c4;
    }
    ctx->pc = 0x3CF5BCu;
    {
        const bool branch_taken_0x3cf5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf5bc) {
            ctx->pc = 0x3CF5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF5BCu;
            // 0x3cf5c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF5E8u;
            goto label_3cf5e8;
        }
    }
    ctx->pc = 0x3CF5C4u;
label_3cf5c4:
    // 0x3cf5c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cf5c8:
    // 0x3cf5c8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3cf5cc:
    if (ctx->pc == 0x3CF5CCu) {
        ctx->pc = 0x3CF5D0u;
        goto label_3cf5d0;
    }
    ctx->pc = 0x3CF5C8u;
    {
        const bool branch_taken_0x3cf5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf5c8) {
            ctx->pc = 0x3CF5E4u;
            goto label_3cf5e4;
        }
    }
    ctx->pc = 0x3CF5D0u;
label_3cf5d0:
    // 0x3cf5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cf5d4:
    // 0x3cf5d4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3cf5d8:
    if (ctx->pc == 0x3CF5D8u) {
        ctx->pc = 0x3CF5DCu;
        goto label_3cf5dc;
    }
    ctx->pc = 0x3CF5D4u;
    {
        const bool branch_taken_0x3cf5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cf5d4) {
            ctx->pc = 0x3CF5E4u;
            goto label_3cf5e4;
        }
    }
    ctx->pc = 0x3CF5DCu;
label_3cf5dc:
    // 0x3cf5dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cf5e0:
    if (ctx->pc == 0x3CF5E0u) {
        ctx->pc = 0x3CF5E0u;
            // 0x3cf5e0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CF5E4u;
        goto label_3cf5e4;
    }
    ctx->pc = 0x3CF5DCu;
    {
        const bool branch_taken_0x3cf5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF5DCu;
            // 0x3cf5e0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf5dc) {
            ctx->pc = 0x3CF5E8u;
            goto label_3cf5e8;
        }
    }
    ctx->pc = 0x3CF5E4u;
label_3cf5e4:
    // 0x3cf5e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3cf5e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf5e8:
    // 0x3cf5e8: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
label_3cf5ec:
    if (ctx->pc == 0x3CF5ECu) {
        ctx->pc = 0x3CF5F0u;
        goto label_3cf5f0;
    }
    ctx->pc = 0x3CF5E8u;
    {
        const bool branch_taken_0x3cf5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf5e8) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF5F0u;
label_3cf5f0:
    // 0x3cf5f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cf5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf5f4:
    // 0x3cf5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cf5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf5f8:
    // 0x3cf5f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf5fc:
    // 0x3cf5fc: 0x320f809  jalr        $t9
label_3cf600:
    if (ctx->pc == 0x3CF600u) {
        ctx->pc = 0x3CF600u;
            // 0x3cf600: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3CF604u;
        goto label_3cf604;
    }
    ctx->pc = 0x3CF5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF604u);
        ctx->pc = 0x3CF600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF5FCu;
            // 0x3cf600: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF604u; }
            if (ctx->pc != 0x3CF604u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF604u;
label_3cf604:
    // 0x3cf604: 0x10000060  b           . + 4 + (0x60 << 2)
label_3cf608:
    if (ctx->pc == 0x3CF608u) {
        ctx->pc = 0x3CF60Cu;
        goto label_3cf60c;
    }
    ctx->pc = 0x3CF604u;
    {
        const bool branch_taken_0x3cf604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf604) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF60Cu;
label_3cf60c:
    // 0x3cf60c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cf610:
    // 0x3cf610: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cf610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cf614:
    // 0x3cf614: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cf614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cf618:
    // 0x3cf618: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cf618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cf61c:
    // 0x3cf61c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cf620:
    if (ctx->pc == 0x3CF620u) {
        ctx->pc = 0x3CF620u;
            // 0x3cf620: 0x8e480058  lw          $t0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x3CF624u;
        goto label_3cf624;
    }
    ctx->pc = 0x3CF61Cu;
    {
        const bool branch_taken_0x3cf61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf61c) {
            ctx->pc = 0x3CF620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF61Cu;
            // 0x3cf620: 0x8e480058  lw          $t0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF63Cu;
            goto label_3cf63c;
        }
    }
    ctx->pc = 0x3CF624u;
label_3cf624:
    // 0x3cf624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cf624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cf628:
    // 0x3cf628: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf62c:
    // 0x3cf62c: 0x320f809  jalr        $t9
label_3cf630:
    if (ctx->pc == 0x3CF630u) {
        ctx->pc = 0x3CF630u;
            // 0x3cf630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF634u;
        goto label_3cf634;
    }
    ctx->pc = 0x3CF62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF634u);
        ctx->pc = 0x3CF630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF62Cu;
            // 0x3cf630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF634u; }
            if (ctx->pc != 0x3CF634u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF634u;
label_3cf634:
    // 0x3cf634: 0x10000054  b           . + 4 + (0x54 << 2)
label_3cf638:
    if (ctx->pc == 0x3CF638u) {
        ctx->pc = 0x3CF63Cu;
        goto label_3cf63c;
    }
    ctx->pc = 0x3CF634u;
    {
        const bool branch_taken_0x3cf634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf634) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF63Cu;
label_3cf63c:
    // 0x3cf63c: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x3cf63cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
label_3cf640:
    // 0x3cf640: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3cf640u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cf644:
    // 0x3cf644: 0x9247006f  lbu         $a3, 0x6F($s2)
    ctx->pc = 0x3cf644u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 111)));
label_3cf648:
    // 0x3cf648: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cf648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cf64c:
    // 0x3cf64c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3cf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3cf650:
    // 0x3cf650: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x3cf650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_3cf654:
    // 0x3cf654: 0x910600e4  lbu         $a2, 0xE4($t0)
    ctx->pc = 0x3cf654u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 228)));
label_3cf658:
    // 0x3cf658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cf658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cf65c:
    // 0x3cf65c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3cf65cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_3cf660:
    // 0x3cf660: 0xa10600e4  sb          $a2, 0xE4($t0)
    ctx->pc = 0x3cf660u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 228), (uint8_t)GPR_U32(ctx, 6));
label_3cf664:
    // 0x3cf664: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf668:
    // 0x3cf668: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3cf668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3cf66c:
    // 0x3cf66c: 0x8c8466c8  lw          $a0, 0x66C8($a0)
    ctx->pc = 0x3cf66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26312)));
label_3cf670:
    // 0x3cf670: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3cf670u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cf674:
    // 0x3cf674: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3cf674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf678:
    // 0x3cf678: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x3cf678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_3cf67c:
    // 0x3cf67c: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf680:
    // 0x3cf680: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3cf680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf684:
    // 0x3cf684: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x3cf684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf688:
    // 0x3cf688: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cf688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cf68c:
    // 0x3cf68c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3cf690:
    if (ctx->pc == 0x3CF690u) {
        ctx->pc = 0x3CF690u;
            // 0x3cf690: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x3CF694u;
        goto label_3cf694;
    }
    ctx->pc = 0x3CF68Cu;
    {
        const bool branch_taken_0x3cf68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cf68c) {
            ctx->pc = 0x3CF690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF68Cu;
            // 0x3cf690: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF69Cu;
            goto label_3cf69c;
        }
    }
    ctx->pc = 0x3CF694u;
label_3cf694:
    // 0x3cf694: 0xe6410068  swc1        $f1, 0x68($s2)
    ctx->pc = 0x3cf694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3cf698:
    // 0x3cf698: 0x8644006c  lh          $a0, 0x6C($s2)
    ctx->pc = 0x3cf698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_3cf69c:
    // 0x3cf69c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3cf69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3cf6a0:
    // 0x3cf6a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cf6a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cf6a4:
    // 0x3cf6a4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3cf6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cf6a8:
    // 0x3cf6a8: 0xa642006c  sh          $v0, 0x6C($s2)
    ctx->pc = 0x3cf6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 2));
label_3cf6ac:
    // 0x3cf6ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3cf6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3cf6b0:
    // 0x3cf6b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cf6b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cf6b4:
    // 0x3cf6b4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3cf6b8:
    if (ctx->pc == 0x3CF6B8u) {
        ctx->pc = 0x3CF6B8u;
            // 0x3cf6b8: 0x9244006e  lbu         $a0, 0x6E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 110)));
        ctx->pc = 0x3CF6BCu;
        goto label_3cf6bc;
    }
    ctx->pc = 0x3CF6B4u;
    {
        const bool branch_taken_0x3cf6b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3cf6b4) {
            ctx->pc = 0x3CF6B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF6B4u;
            // 0x3cf6b8: 0x9244006e  lbu         $a0, 0x6E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 110)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF6C4u;
            goto label_3cf6c4;
        }
    }
    ctx->pc = 0x3CF6BCu;
label_3cf6bc:
    // 0x3cf6bc: 0xa640006c  sh          $zero, 0x6C($s2)
    ctx->pc = 0x3cf6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 0));
label_3cf6c0:
    // 0x3cf6c0: 0x9244006e  lbu         $a0, 0x6E($s2)
    ctx->pc = 0x3cf6c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 110)));
label_3cf6c4:
    // 0x3cf6c4: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x3cf6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3cf6c8:
    // 0x3cf6c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3cf6cc:
    if (ctx->pc == 0x3CF6CCu) {
        ctx->pc = 0x3CF6CCu;
            // 0x3cf6cc: 0xa240006e  sb          $zero, 0x6E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3CF6D0u;
        goto label_3cf6d0;
    }
    ctx->pc = 0x3CF6C8u;
    {
        const bool branch_taken_0x3cf6c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cf6c8) {
            ctx->pc = 0x3CF6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF6C8u;
            // 0x3cf6cc: 0xa240006e  sb          $zero, 0x6E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF6DCu;
            goto label_3cf6dc;
        }
    }
    ctx->pc = 0x3CF6D0u;
label_3cf6d0:
    // 0x3cf6d0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3cf6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3cf6d4:
    // 0x3cf6d4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3cf6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cf6d8:
    // 0x3cf6d8: 0xa242006e  sb          $v0, 0x6E($s2)
    ctx->pc = 0x3cf6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 110), (uint8_t)GPR_U32(ctx, 2));
label_3cf6dc:
    // 0x3cf6dc: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x3cf6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_3cf6e0:
    // 0x3cf6e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3cf6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cf6e4:
    // 0x3cf6e4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3cf6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf6e8:
    // 0x3cf6e8: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x3cf6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf6ec:
    // 0x3cf6ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3cf6ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3cf6f0:
    // 0x3cf6f0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3cf6f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cf6f4:
    // 0x3cf6f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3cf6f8:
    if (ctx->pc == 0x3CF6F8u) {
        ctx->pc = 0x3CF6F8u;
            // 0x3cf6f8: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->pc = 0x3CF6FCu;
        goto label_3cf6fc;
    }
    ctx->pc = 0x3CF6F4u;
    {
        const bool branch_taken_0x3cf6f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CF6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF6F4u;
            // 0x3cf6f8: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf6f4) {
            ctx->pc = 0x3CF714u;
            goto label_3cf714;
        }
    }
    ctx->pc = 0x3CF6FCu;
label_3cf6fc:
    // 0x3cf6fc: 0xe6420070  swc1        $f2, 0x70($s2)
    ctx->pc = 0x3cf6fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_3cf700:
    // 0x3cf700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cf700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf704:
    // 0x3cf704: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cf704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf708:
    // 0x3cf708: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cf708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cf70c:
    // 0x3cf70c: 0x320f809  jalr        $t9
label_3cf710:
    if (ctx->pc == 0x3CF710u) {
        ctx->pc = 0x3CF710u;
            // 0x3cf710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CF714u;
        goto label_3cf714;
    }
    ctx->pc = 0x3CF70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF714u);
        ctx->pc = 0x3CF710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF70Cu;
            // 0x3cf710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF714u; }
            if (ctx->pc != 0x3CF714u) { return; }
        }
        }
    }
    ctx->pc = 0x3CF714u;
label_3cf714:
    // 0x3cf714: 0xc11088c  jal         func_442230
label_3cf718:
    if (ctx->pc == 0x3CF718u) {
        ctx->pc = 0x3CF718u;
            // 0x3cf718: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->pc = 0x3CF71Cu;
        goto label_3cf71c;
    }
    ctx->pc = 0x3CF714u;
    SET_GPR_U32(ctx, 31, 0x3CF71Cu);
    ctx->pc = 0x3CF718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF714u;
            // 0x3cf718: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF71Cu; }
        if (ctx->pc != 0x3CF71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF71Cu; }
        if (ctx->pc != 0x3CF71Cu) { return; }
    }
    ctx->pc = 0x3CF71Cu;
label_3cf71c:
    // 0x3cf71c: 0xc11088c  jal         func_442230
label_3cf720:
    if (ctx->pc == 0x3CF720u) {
        ctx->pc = 0x3CF720u;
            // 0x3cf720: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x3CF724u;
        goto label_3cf724;
    }
    ctx->pc = 0x3CF71Cu;
    SET_GPR_U32(ctx, 31, 0x3CF724u);
    ctx->pc = 0x3CF720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF71Cu;
            // 0x3cf720: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF724u; }
        if (ctx->pc != 0x3CF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF724u; }
        if (ctx->pc != 0x3CF724u) { return; }
    }
    ctx->pc = 0x3CF724u;
label_3cf724:
    // 0x3cf724: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x3cf724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_3cf728:
    // 0x3cf728: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3cf728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3cf72c:
    // 0x3cf72c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3cf72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3cf730:
    // 0x3cf730: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3cf730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3cf734:
    // 0x3cf734: 0x10000014  b           . + 4 + (0x14 << 2)
label_3cf738:
    if (ctx->pc == 0x3CF738u) {
        ctx->pc = 0x3CF738u;
            // 0x3cf738: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x3CF73Cu;
        goto label_3cf73c;
    }
    ctx->pc = 0x3CF734u;
    {
        const bool branch_taken_0x3cf734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF734u;
            // 0x3cf738: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf734) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF73Cu;
label_3cf73c:
    // 0x3cf73c: 0x9243006f  lbu         $v1, 0x6F($s2)
    ctx->pc = 0x3cf73cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 111)));
label_3cf740:
    // 0x3cf740: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x3cf740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3cf744:
    // 0x3cf744: 0x602827  not         $a1, $v1
    ctx->pc = 0x3cf744u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3cf748:
    // 0x3cf748: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3cf748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cf74c:
    // 0x3cf74c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3cf74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3cf750:
    // 0x3cf750: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x3cf750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3cf754:
    // 0x3cf754: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3cf754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3cf758:
    // 0x3cf758: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x3cf758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_3cf75c:
    // 0x3cf75c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cf75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cf760:
    // 0x3cf760: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cf760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cf764:
    // 0x3cf764: 0x320f809  jalr        $t9
label_3cf768:
    if (ctx->pc == 0x3CF768u) {
        ctx->pc = 0x3CF76Cu;
        goto label_3cf76c;
    }
    ctx->pc = 0x3CF764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CF76Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CF76Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CF76Cu; }
            if (ctx->pc != 0x3CF76Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CF76Cu;
label_3cf76c:
    // 0x3cf76c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cf770:
    if (ctx->pc == 0x3CF770u) {
        ctx->pc = 0x3CF774u;
        goto label_3cf774;
    }
    ctx->pc = 0x3CF76Cu;
    {
        const bool branch_taken_0x3cf76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf76c) {
            ctx->pc = 0x3CF788u;
            goto label_3cf788;
        }
    }
    ctx->pc = 0x3CF774u;
label_3cf774:
    // 0x3cf774: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3cf774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3cf778:
    // 0x3cf778: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3cf778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cf77c:
    // 0x3cf77c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3cf77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3cf780:
    // 0x3cf780: 0xc057b7c  jal         func_15EDF0
label_3cf784:
    if (ctx->pc == 0x3CF784u) {
        ctx->pc = 0x3CF784u;
            // 0x3cf784: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CF788u;
        goto label_3cf788;
    }
    ctx->pc = 0x3CF780u;
    SET_GPR_U32(ctx, 31, 0x3CF788u);
    ctx->pc = 0x3CF784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF780u;
            // 0x3cf784: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF788u; }
        if (ctx->pc != 0x3CF788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF788u; }
        if (ctx->pc != 0x3CF788u) { return; }
    }
    ctx->pc = 0x3CF788u;
label_3cf788:
    // 0x3cf788: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cf788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3cf78c:
    // 0x3cf78c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cf78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cf790:
    // 0x3cf790: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3cf790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cf794:
    // 0x3cf794: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cf794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cf798:
    // 0x3cf798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cf798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cf79c:
    // 0x3cf79c: 0x3e00008  jr          $ra
label_3cf7a0:
    if (ctx->pc == 0x3CF7A0u) {
        ctx->pc = 0x3CF7A0u;
            // 0x3cf7a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CF7A4u;
        goto label_3cf7a4;
    }
    ctx->pc = 0x3CF79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF79Cu;
            // 0x3cf7a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CF7A4u;
label_3cf7a4:
    // 0x3cf7a4: 0x0  nop
    ctx->pc = 0x3cf7a4u;
    // NOP
label_3cf7a8:
    // 0x3cf7a8: 0x0  nop
    ctx->pc = 0x3cf7a8u;
    // NOP
label_3cf7ac:
    // 0x3cf7ac: 0x0  nop
    ctx->pc = 0x3cf7acu;
    // NOP
}
