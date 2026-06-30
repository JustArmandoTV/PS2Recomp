#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049EC20
// Address: 0x49ec20 - 0x49f2e0
void sub_0049EC20_0x49ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EC20_0x49ec20");
#endif

    switch (ctx->pc) {
        case 0x49ec20u: goto label_49ec20;
        case 0x49ec24u: goto label_49ec24;
        case 0x49ec28u: goto label_49ec28;
        case 0x49ec2cu: goto label_49ec2c;
        case 0x49ec30u: goto label_49ec30;
        case 0x49ec34u: goto label_49ec34;
        case 0x49ec38u: goto label_49ec38;
        case 0x49ec3cu: goto label_49ec3c;
        case 0x49ec40u: goto label_49ec40;
        case 0x49ec44u: goto label_49ec44;
        case 0x49ec48u: goto label_49ec48;
        case 0x49ec4cu: goto label_49ec4c;
        case 0x49ec50u: goto label_49ec50;
        case 0x49ec54u: goto label_49ec54;
        case 0x49ec58u: goto label_49ec58;
        case 0x49ec5cu: goto label_49ec5c;
        case 0x49ec60u: goto label_49ec60;
        case 0x49ec64u: goto label_49ec64;
        case 0x49ec68u: goto label_49ec68;
        case 0x49ec6cu: goto label_49ec6c;
        case 0x49ec70u: goto label_49ec70;
        case 0x49ec74u: goto label_49ec74;
        case 0x49ec78u: goto label_49ec78;
        case 0x49ec7cu: goto label_49ec7c;
        case 0x49ec80u: goto label_49ec80;
        case 0x49ec84u: goto label_49ec84;
        case 0x49ec88u: goto label_49ec88;
        case 0x49ec8cu: goto label_49ec8c;
        case 0x49ec90u: goto label_49ec90;
        case 0x49ec94u: goto label_49ec94;
        case 0x49ec98u: goto label_49ec98;
        case 0x49ec9cu: goto label_49ec9c;
        case 0x49eca0u: goto label_49eca0;
        case 0x49eca4u: goto label_49eca4;
        case 0x49eca8u: goto label_49eca8;
        case 0x49ecacu: goto label_49ecac;
        case 0x49ecb0u: goto label_49ecb0;
        case 0x49ecb4u: goto label_49ecb4;
        case 0x49ecb8u: goto label_49ecb8;
        case 0x49ecbcu: goto label_49ecbc;
        case 0x49ecc0u: goto label_49ecc0;
        case 0x49ecc4u: goto label_49ecc4;
        case 0x49ecc8u: goto label_49ecc8;
        case 0x49ecccu: goto label_49eccc;
        case 0x49ecd0u: goto label_49ecd0;
        case 0x49ecd4u: goto label_49ecd4;
        case 0x49ecd8u: goto label_49ecd8;
        case 0x49ecdcu: goto label_49ecdc;
        case 0x49ece0u: goto label_49ece0;
        case 0x49ece4u: goto label_49ece4;
        case 0x49ece8u: goto label_49ece8;
        case 0x49ececu: goto label_49ecec;
        case 0x49ecf0u: goto label_49ecf0;
        case 0x49ecf4u: goto label_49ecf4;
        case 0x49ecf8u: goto label_49ecf8;
        case 0x49ecfcu: goto label_49ecfc;
        case 0x49ed00u: goto label_49ed00;
        case 0x49ed04u: goto label_49ed04;
        case 0x49ed08u: goto label_49ed08;
        case 0x49ed0cu: goto label_49ed0c;
        case 0x49ed10u: goto label_49ed10;
        case 0x49ed14u: goto label_49ed14;
        case 0x49ed18u: goto label_49ed18;
        case 0x49ed1cu: goto label_49ed1c;
        case 0x49ed20u: goto label_49ed20;
        case 0x49ed24u: goto label_49ed24;
        case 0x49ed28u: goto label_49ed28;
        case 0x49ed2cu: goto label_49ed2c;
        case 0x49ed30u: goto label_49ed30;
        case 0x49ed34u: goto label_49ed34;
        case 0x49ed38u: goto label_49ed38;
        case 0x49ed3cu: goto label_49ed3c;
        case 0x49ed40u: goto label_49ed40;
        case 0x49ed44u: goto label_49ed44;
        case 0x49ed48u: goto label_49ed48;
        case 0x49ed4cu: goto label_49ed4c;
        case 0x49ed50u: goto label_49ed50;
        case 0x49ed54u: goto label_49ed54;
        case 0x49ed58u: goto label_49ed58;
        case 0x49ed5cu: goto label_49ed5c;
        case 0x49ed60u: goto label_49ed60;
        case 0x49ed64u: goto label_49ed64;
        case 0x49ed68u: goto label_49ed68;
        case 0x49ed6cu: goto label_49ed6c;
        case 0x49ed70u: goto label_49ed70;
        case 0x49ed74u: goto label_49ed74;
        case 0x49ed78u: goto label_49ed78;
        case 0x49ed7cu: goto label_49ed7c;
        case 0x49ed80u: goto label_49ed80;
        case 0x49ed84u: goto label_49ed84;
        case 0x49ed88u: goto label_49ed88;
        case 0x49ed8cu: goto label_49ed8c;
        case 0x49ed90u: goto label_49ed90;
        case 0x49ed94u: goto label_49ed94;
        case 0x49ed98u: goto label_49ed98;
        case 0x49ed9cu: goto label_49ed9c;
        case 0x49eda0u: goto label_49eda0;
        case 0x49eda4u: goto label_49eda4;
        case 0x49eda8u: goto label_49eda8;
        case 0x49edacu: goto label_49edac;
        case 0x49edb0u: goto label_49edb0;
        case 0x49edb4u: goto label_49edb4;
        case 0x49edb8u: goto label_49edb8;
        case 0x49edbcu: goto label_49edbc;
        case 0x49edc0u: goto label_49edc0;
        case 0x49edc4u: goto label_49edc4;
        case 0x49edc8u: goto label_49edc8;
        case 0x49edccu: goto label_49edcc;
        case 0x49edd0u: goto label_49edd0;
        case 0x49edd4u: goto label_49edd4;
        case 0x49edd8u: goto label_49edd8;
        case 0x49eddcu: goto label_49eddc;
        case 0x49ede0u: goto label_49ede0;
        case 0x49ede4u: goto label_49ede4;
        case 0x49ede8u: goto label_49ede8;
        case 0x49edecu: goto label_49edec;
        case 0x49edf0u: goto label_49edf0;
        case 0x49edf4u: goto label_49edf4;
        case 0x49edf8u: goto label_49edf8;
        case 0x49edfcu: goto label_49edfc;
        case 0x49ee00u: goto label_49ee00;
        case 0x49ee04u: goto label_49ee04;
        case 0x49ee08u: goto label_49ee08;
        case 0x49ee0cu: goto label_49ee0c;
        case 0x49ee10u: goto label_49ee10;
        case 0x49ee14u: goto label_49ee14;
        case 0x49ee18u: goto label_49ee18;
        case 0x49ee1cu: goto label_49ee1c;
        case 0x49ee20u: goto label_49ee20;
        case 0x49ee24u: goto label_49ee24;
        case 0x49ee28u: goto label_49ee28;
        case 0x49ee2cu: goto label_49ee2c;
        case 0x49ee30u: goto label_49ee30;
        case 0x49ee34u: goto label_49ee34;
        case 0x49ee38u: goto label_49ee38;
        case 0x49ee3cu: goto label_49ee3c;
        case 0x49ee40u: goto label_49ee40;
        case 0x49ee44u: goto label_49ee44;
        case 0x49ee48u: goto label_49ee48;
        case 0x49ee4cu: goto label_49ee4c;
        case 0x49ee50u: goto label_49ee50;
        case 0x49ee54u: goto label_49ee54;
        case 0x49ee58u: goto label_49ee58;
        case 0x49ee5cu: goto label_49ee5c;
        case 0x49ee60u: goto label_49ee60;
        case 0x49ee64u: goto label_49ee64;
        case 0x49ee68u: goto label_49ee68;
        case 0x49ee6cu: goto label_49ee6c;
        case 0x49ee70u: goto label_49ee70;
        case 0x49ee74u: goto label_49ee74;
        case 0x49ee78u: goto label_49ee78;
        case 0x49ee7cu: goto label_49ee7c;
        case 0x49ee80u: goto label_49ee80;
        case 0x49ee84u: goto label_49ee84;
        case 0x49ee88u: goto label_49ee88;
        case 0x49ee8cu: goto label_49ee8c;
        case 0x49ee90u: goto label_49ee90;
        case 0x49ee94u: goto label_49ee94;
        case 0x49ee98u: goto label_49ee98;
        case 0x49ee9cu: goto label_49ee9c;
        case 0x49eea0u: goto label_49eea0;
        case 0x49eea4u: goto label_49eea4;
        case 0x49eea8u: goto label_49eea8;
        case 0x49eeacu: goto label_49eeac;
        case 0x49eeb0u: goto label_49eeb0;
        case 0x49eeb4u: goto label_49eeb4;
        case 0x49eeb8u: goto label_49eeb8;
        case 0x49eebcu: goto label_49eebc;
        case 0x49eec0u: goto label_49eec0;
        case 0x49eec4u: goto label_49eec4;
        case 0x49eec8u: goto label_49eec8;
        case 0x49eeccu: goto label_49eecc;
        case 0x49eed0u: goto label_49eed0;
        case 0x49eed4u: goto label_49eed4;
        case 0x49eed8u: goto label_49eed8;
        case 0x49eedcu: goto label_49eedc;
        case 0x49eee0u: goto label_49eee0;
        case 0x49eee4u: goto label_49eee4;
        case 0x49eee8u: goto label_49eee8;
        case 0x49eeecu: goto label_49eeec;
        case 0x49eef0u: goto label_49eef0;
        case 0x49eef4u: goto label_49eef4;
        case 0x49eef8u: goto label_49eef8;
        case 0x49eefcu: goto label_49eefc;
        case 0x49ef00u: goto label_49ef00;
        case 0x49ef04u: goto label_49ef04;
        case 0x49ef08u: goto label_49ef08;
        case 0x49ef0cu: goto label_49ef0c;
        case 0x49ef10u: goto label_49ef10;
        case 0x49ef14u: goto label_49ef14;
        case 0x49ef18u: goto label_49ef18;
        case 0x49ef1cu: goto label_49ef1c;
        case 0x49ef20u: goto label_49ef20;
        case 0x49ef24u: goto label_49ef24;
        case 0x49ef28u: goto label_49ef28;
        case 0x49ef2cu: goto label_49ef2c;
        case 0x49ef30u: goto label_49ef30;
        case 0x49ef34u: goto label_49ef34;
        case 0x49ef38u: goto label_49ef38;
        case 0x49ef3cu: goto label_49ef3c;
        case 0x49ef40u: goto label_49ef40;
        case 0x49ef44u: goto label_49ef44;
        case 0x49ef48u: goto label_49ef48;
        case 0x49ef4cu: goto label_49ef4c;
        case 0x49ef50u: goto label_49ef50;
        case 0x49ef54u: goto label_49ef54;
        case 0x49ef58u: goto label_49ef58;
        case 0x49ef5cu: goto label_49ef5c;
        case 0x49ef60u: goto label_49ef60;
        case 0x49ef64u: goto label_49ef64;
        case 0x49ef68u: goto label_49ef68;
        case 0x49ef6cu: goto label_49ef6c;
        case 0x49ef70u: goto label_49ef70;
        case 0x49ef74u: goto label_49ef74;
        case 0x49ef78u: goto label_49ef78;
        case 0x49ef7cu: goto label_49ef7c;
        case 0x49ef80u: goto label_49ef80;
        case 0x49ef84u: goto label_49ef84;
        case 0x49ef88u: goto label_49ef88;
        case 0x49ef8cu: goto label_49ef8c;
        case 0x49ef90u: goto label_49ef90;
        case 0x49ef94u: goto label_49ef94;
        case 0x49ef98u: goto label_49ef98;
        case 0x49ef9cu: goto label_49ef9c;
        case 0x49efa0u: goto label_49efa0;
        case 0x49efa4u: goto label_49efa4;
        case 0x49efa8u: goto label_49efa8;
        case 0x49efacu: goto label_49efac;
        case 0x49efb0u: goto label_49efb0;
        case 0x49efb4u: goto label_49efb4;
        case 0x49efb8u: goto label_49efb8;
        case 0x49efbcu: goto label_49efbc;
        case 0x49efc0u: goto label_49efc0;
        case 0x49efc4u: goto label_49efc4;
        case 0x49efc8u: goto label_49efc8;
        case 0x49efccu: goto label_49efcc;
        case 0x49efd0u: goto label_49efd0;
        case 0x49efd4u: goto label_49efd4;
        case 0x49efd8u: goto label_49efd8;
        case 0x49efdcu: goto label_49efdc;
        case 0x49efe0u: goto label_49efe0;
        case 0x49efe4u: goto label_49efe4;
        case 0x49efe8u: goto label_49efe8;
        case 0x49efecu: goto label_49efec;
        case 0x49eff0u: goto label_49eff0;
        case 0x49eff4u: goto label_49eff4;
        case 0x49eff8u: goto label_49eff8;
        case 0x49effcu: goto label_49effc;
        case 0x49f000u: goto label_49f000;
        case 0x49f004u: goto label_49f004;
        case 0x49f008u: goto label_49f008;
        case 0x49f00cu: goto label_49f00c;
        case 0x49f010u: goto label_49f010;
        case 0x49f014u: goto label_49f014;
        case 0x49f018u: goto label_49f018;
        case 0x49f01cu: goto label_49f01c;
        case 0x49f020u: goto label_49f020;
        case 0x49f024u: goto label_49f024;
        case 0x49f028u: goto label_49f028;
        case 0x49f02cu: goto label_49f02c;
        case 0x49f030u: goto label_49f030;
        case 0x49f034u: goto label_49f034;
        case 0x49f038u: goto label_49f038;
        case 0x49f03cu: goto label_49f03c;
        case 0x49f040u: goto label_49f040;
        case 0x49f044u: goto label_49f044;
        case 0x49f048u: goto label_49f048;
        case 0x49f04cu: goto label_49f04c;
        case 0x49f050u: goto label_49f050;
        case 0x49f054u: goto label_49f054;
        case 0x49f058u: goto label_49f058;
        case 0x49f05cu: goto label_49f05c;
        case 0x49f060u: goto label_49f060;
        case 0x49f064u: goto label_49f064;
        case 0x49f068u: goto label_49f068;
        case 0x49f06cu: goto label_49f06c;
        case 0x49f070u: goto label_49f070;
        case 0x49f074u: goto label_49f074;
        case 0x49f078u: goto label_49f078;
        case 0x49f07cu: goto label_49f07c;
        case 0x49f080u: goto label_49f080;
        case 0x49f084u: goto label_49f084;
        case 0x49f088u: goto label_49f088;
        case 0x49f08cu: goto label_49f08c;
        case 0x49f090u: goto label_49f090;
        case 0x49f094u: goto label_49f094;
        case 0x49f098u: goto label_49f098;
        case 0x49f09cu: goto label_49f09c;
        case 0x49f0a0u: goto label_49f0a0;
        case 0x49f0a4u: goto label_49f0a4;
        case 0x49f0a8u: goto label_49f0a8;
        case 0x49f0acu: goto label_49f0ac;
        case 0x49f0b0u: goto label_49f0b0;
        case 0x49f0b4u: goto label_49f0b4;
        case 0x49f0b8u: goto label_49f0b8;
        case 0x49f0bcu: goto label_49f0bc;
        case 0x49f0c0u: goto label_49f0c0;
        case 0x49f0c4u: goto label_49f0c4;
        case 0x49f0c8u: goto label_49f0c8;
        case 0x49f0ccu: goto label_49f0cc;
        case 0x49f0d0u: goto label_49f0d0;
        case 0x49f0d4u: goto label_49f0d4;
        case 0x49f0d8u: goto label_49f0d8;
        case 0x49f0dcu: goto label_49f0dc;
        case 0x49f0e0u: goto label_49f0e0;
        case 0x49f0e4u: goto label_49f0e4;
        case 0x49f0e8u: goto label_49f0e8;
        case 0x49f0ecu: goto label_49f0ec;
        case 0x49f0f0u: goto label_49f0f0;
        case 0x49f0f4u: goto label_49f0f4;
        case 0x49f0f8u: goto label_49f0f8;
        case 0x49f0fcu: goto label_49f0fc;
        case 0x49f100u: goto label_49f100;
        case 0x49f104u: goto label_49f104;
        case 0x49f108u: goto label_49f108;
        case 0x49f10cu: goto label_49f10c;
        case 0x49f110u: goto label_49f110;
        case 0x49f114u: goto label_49f114;
        case 0x49f118u: goto label_49f118;
        case 0x49f11cu: goto label_49f11c;
        case 0x49f120u: goto label_49f120;
        case 0x49f124u: goto label_49f124;
        case 0x49f128u: goto label_49f128;
        case 0x49f12cu: goto label_49f12c;
        case 0x49f130u: goto label_49f130;
        case 0x49f134u: goto label_49f134;
        case 0x49f138u: goto label_49f138;
        case 0x49f13cu: goto label_49f13c;
        case 0x49f140u: goto label_49f140;
        case 0x49f144u: goto label_49f144;
        case 0x49f148u: goto label_49f148;
        case 0x49f14cu: goto label_49f14c;
        case 0x49f150u: goto label_49f150;
        case 0x49f154u: goto label_49f154;
        case 0x49f158u: goto label_49f158;
        case 0x49f15cu: goto label_49f15c;
        case 0x49f160u: goto label_49f160;
        case 0x49f164u: goto label_49f164;
        case 0x49f168u: goto label_49f168;
        case 0x49f16cu: goto label_49f16c;
        case 0x49f170u: goto label_49f170;
        case 0x49f174u: goto label_49f174;
        case 0x49f178u: goto label_49f178;
        case 0x49f17cu: goto label_49f17c;
        case 0x49f180u: goto label_49f180;
        case 0x49f184u: goto label_49f184;
        case 0x49f188u: goto label_49f188;
        case 0x49f18cu: goto label_49f18c;
        case 0x49f190u: goto label_49f190;
        case 0x49f194u: goto label_49f194;
        case 0x49f198u: goto label_49f198;
        case 0x49f19cu: goto label_49f19c;
        case 0x49f1a0u: goto label_49f1a0;
        case 0x49f1a4u: goto label_49f1a4;
        case 0x49f1a8u: goto label_49f1a8;
        case 0x49f1acu: goto label_49f1ac;
        case 0x49f1b0u: goto label_49f1b0;
        case 0x49f1b4u: goto label_49f1b4;
        case 0x49f1b8u: goto label_49f1b8;
        case 0x49f1bcu: goto label_49f1bc;
        case 0x49f1c0u: goto label_49f1c0;
        case 0x49f1c4u: goto label_49f1c4;
        case 0x49f1c8u: goto label_49f1c8;
        case 0x49f1ccu: goto label_49f1cc;
        case 0x49f1d0u: goto label_49f1d0;
        case 0x49f1d4u: goto label_49f1d4;
        case 0x49f1d8u: goto label_49f1d8;
        case 0x49f1dcu: goto label_49f1dc;
        case 0x49f1e0u: goto label_49f1e0;
        case 0x49f1e4u: goto label_49f1e4;
        case 0x49f1e8u: goto label_49f1e8;
        case 0x49f1ecu: goto label_49f1ec;
        case 0x49f1f0u: goto label_49f1f0;
        case 0x49f1f4u: goto label_49f1f4;
        case 0x49f1f8u: goto label_49f1f8;
        case 0x49f1fcu: goto label_49f1fc;
        case 0x49f200u: goto label_49f200;
        case 0x49f204u: goto label_49f204;
        case 0x49f208u: goto label_49f208;
        case 0x49f20cu: goto label_49f20c;
        case 0x49f210u: goto label_49f210;
        case 0x49f214u: goto label_49f214;
        case 0x49f218u: goto label_49f218;
        case 0x49f21cu: goto label_49f21c;
        case 0x49f220u: goto label_49f220;
        case 0x49f224u: goto label_49f224;
        case 0x49f228u: goto label_49f228;
        case 0x49f22cu: goto label_49f22c;
        case 0x49f230u: goto label_49f230;
        case 0x49f234u: goto label_49f234;
        case 0x49f238u: goto label_49f238;
        case 0x49f23cu: goto label_49f23c;
        case 0x49f240u: goto label_49f240;
        case 0x49f244u: goto label_49f244;
        case 0x49f248u: goto label_49f248;
        case 0x49f24cu: goto label_49f24c;
        case 0x49f250u: goto label_49f250;
        case 0x49f254u: goto label_49f254;
        case 0x49f258u: goto label_49f258;
        case 0x49f25cu: goto label_49f25c;
        case 0x49f260u: goto label_49f260;
        case 0x49f264u: goto label_49f264;
        case 0x49f268u: goto label_49f268;
        case 0x49f26cu: goto label_49f26c;
        case 0x49f270u: goto label_49f270;
        case 0x49f274u: goto label_49f274;
        case 0x49f278u: goto label_49f278;
        case 0x49f27cu: goto label_49f27c;
        case 0x49f280u: goto label_49f280;
        case 0x49f284u: goto label_49f284;
        case 0x49f288u: goto label_49f288;
        case 0x49f28cu: goto label_49f28c;
        case 0x49f290u: goto label_49f290;
        case 0x49f294u: goto label_49f294;
        case 0x49f298u: goto label_49f298;
        case 0x49f29cu: goto label_49f29c;
        case 0x49f2a0u: goto label_49f2a0;
        case 0x49f2a4u: goto label_49f2a4;
        case 0x49f2a8u: goto label_49f2a8;
        case 0x49f2acu: goto label_49f2ac;
        case 0x49f2b0u: goto label_49f2b0;
        case 0x49f2b4u: goto label_49f2b4;
        case 0x49f2b8u: goto label_49f2b8;
        case 0x49f2bcu: goto label_49f2bc;
        case 0x49f2c0u: goto label_49f2c0;
        case 0x49f2c4u: goto label_49f2c4;
        case 0x49f2c8u: goto label_49f2c8;
        case 0x49f2ccu: goto label_49f2cc;
        case 0x49f2d0u: goto label_49f2d0;
        case 0x49f2d4u: goto label_49f2d4;
        case 0x49f2d8u: goto label_49f2d8;
        case 0x49f2dcu: goto label_49f2dc;
        default: break;
    }

    ctx->pc = 0x49ec20u;

label_49ec20:
    // 0x49ec20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49ec24:
    // 0x49ec24: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x49ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_49ec28:
    // 0x49ec28: 0x8c457c18  lw          $a1, 0x7C18($v0)
    ctx->pc = 0x49ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31768)));
label_49ec2c:
    // 0x49ec2c: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x49ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_49ec30:
    // 0x49ec30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x49ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49ec34:
    // 0x49ec34: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_49ec38:
    if (ctx->pc == 0x49EC38u) {
        ctx->pc = 0x49EC38u;
            // 0x49ec38: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x49EC3Cu;
        goto label_49ec3c;
    }
    ctx->pc = 0x49EC34u;
    {
        const bool branch_taken_0x49ec34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EC34u;
            // 0x49ec38: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec34) {
            ctx->pc = 0x49EC88u;
            goto label_49ec88;
        }
    }
    ctx->pc = 0x49EC3Cu;
label_49ec3c:
    // 0x49ec3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ec40:
    // 0x49ec40: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_49ec44:
    if (ctx->pc == 0x49EC44u) {
        ctx->pc = 0x49EC44u;
            // 0x49ec44: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x49EC48u;
        goto label_49ec48;
    }
    ctx->pc = 0x49EC40u;
    {
        const bool branch_taken_0x49ec40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49ec40) {
            ctx->pc = 0x49EC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49EC40u;
            // 0x49ec44: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49EC50u;
            goto label_49ec50;
        }
    }
    ctx->pc = 0x49EC48u;
label_49ec48:
    // 0x49ec48: 0x1000001d  b           . + 4 + (0x1D << 2)
label_49ec4c:
    if (ctx->pc == 0x49EC4Cu) {
        ctx->pc = 0x49EC4Cu;
            // 0x49ec4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49EC50u;
        goto label_49ec50;
    }
    ctx->pc = 0x49EC48u;
    {
        const bool branch_taken_0x49ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EC48u;
            // 0x49ec4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec48) {
            ctx->pc = 0x49ECC0u;
            goto label_49ecc0;
        }
    }
    ctx->pc = 0x49EC50u;
label_49ec50:
    // 0x49ec50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49ec50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ec54:
    // 0x49ec54: 0x0  nop
    ctx->pc = 0x49ec54u;
    // NOP
label_49ec58:
    // 0x49ec58: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x49ec58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_49ec5c:
    // 0x49ec5c: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x49ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ec60:
    // 0x49ec60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x49ec60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49ec64:
    // 0x49ec64: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_49ec68:
    if (ctx->pc == 0x49EC68u) {
        ctx->pc = 0x49EC68u;
            // 0x49ec68: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->pc = 0x49EC6Cu;
        goto label_49ec6c;
    }
    ctx->pc = 0x49EC64u;
    {
        const bool branch_taken_0x49ec64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49ec64) {
            ctx->pc = 0x49EC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49EC64u;
            // 0x49ec68: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49ECBCu;
            goto label_49ecbc;
        }
    }
    ctx->pc = 0x49EC6Cu;
label_49ec6c:
    // 0x49ec6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49ec70:
    // 0x49ec70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49ec70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ec74:
    // 0x49ec74: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x49ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_49ec78:
    // 0x49ec78: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x49ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49ec7c:
    // 0x49ec7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x49ec7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_49ec80:
    // 0x49ec80: 0x1000000f  b           . + 4 + (0xF << 2)
label_49ec84:
    if (ctx->pc == 0x49EC84u) {
        ctx->pc = 0x49EC84u;
            // 0x49ec84: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->pc = 0x49EC88u;
        goto label_49ec88;
    }
    ctx->pc = 0x49EC80u;
    {
        const bool branch_taken_0x49ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EC80u;
            // 0x49ec84: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec80) {
            ctx->pc = 0x49ECC0u;
            goto label_49ecc0;
        }
    }
    ctx->pc = 0x49EC88u;
label_49ec88:
    // 0x49ec88: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x49ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ec8c:
    // 0x49ec8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49ec8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ec90:
    // 0x49ec90: 0x0  nop
    ctx->pc = 0x49ec90u;
    // NOP
label_49ec94:
    // 0x49ec94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49ec94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49ec98:
    // 0x49ec98: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_49ec9c:
    if (ctx->pc == 0x49EC9Cu) {
        ctx->pc = 0x49EC9Cu;
            // 0x49ec9c: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->pc = 0x49ECA0u;
        goto label_49eca0;
    }
    ctx->pc = 0x49EC98u;
    {
        const bool branch_taken_0x49ec98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49ec98) {
            ctx->pc = 0x49EC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49EC98u;
            // 0x49ec9c: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49ECBCu;
            goto label_49ecbc;
        }
    }
    ctx->pc = 0x49ECA0u;
label_49eca0:
    // 0x49eca0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49eca4:
    // 0x49eca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49eca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eca8:
    // 0x49eca8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x49eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_49ecac:
    // 0x49ecac: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x49ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49ecb0:
    // 0x49ecb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49ecb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49ecb4:
    // 0x49ecb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_49ecb8:
    if (ctx->pc == 0x49ECB8u) {
        ctx->pc = 0x49ECB8u;
            // 0x49ecb8: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->pc = 0x49ECBCu;
        goto label_49ecbc;
    }
    ctx->pc = 0x49ECB4u;
    {
        const bool branch_taken_0x49ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ECB4u;
            // 0x49ecb8: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ecb4) {
            ctx->pc = 0x49ECC0u;
            goto label_49ecc0;
        }
    }
    ctx->pc = 0x49ECBCu;
label_49ecbc:
    // 0x49ecbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ecc0:
    // 0x49ecc0: 0x3e00008  jr          $ra
label_49ecc4:
    if (ctx->pc == 0x49ECC4u) {
        ctx->pc = 0x49ECC8u;
        goto label_49ecc8;
    }
    ctx->pc = 0x49ECC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49ECC8u;
label_49ecc8:
    // 0x49ecc8: 0x0  nop
    ctx->pc = 0x49ecc8u;
    // NOP
label_49eccc:
    // 0x49eccc: 0x0  nop
    ctx->pc = 0x49ecccu;
    // NOP
label_49ecd0:
    // 0x49ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49ecd4:
    // 0x49ecd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49ecd8:
    // 0x49ecd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ecdc:
    // 0x49ecdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49ecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ece0:
    // 0x49ece0: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x49ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_49ece4:
    // 0x49ece4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49ece8:
    if (ctx->pc == 0x49ECE8u) {
        ctx->pc = 0x49ECE8u;
            // 0x49ece8: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x49ECECu;
        goto label_49ecec;
    }
    ctx->pc = 0x49ECE4u;
    {
        const bool branch_taken_0x49ece4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ece4) {
            ctx->pc = 0x49ECE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49ECE4u;
            // 0x49ece8: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49ED00u;
            goto label_49ed00;
        }
    }
    ctx->pc = 0x49ECECu;
label_49ecec:
    // 0x49ecec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49ececu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ecf0:
    // 0x49ecf0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49ecf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49ecf4:
    // 0x49ecf4: 0x320f809  jalr        $t9
label_49ecf8:
    if (ctx->pc == 0x49ECF8u) {
        ctx->pc = 0x49ECF8u;
            // 0x49ecf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49ECFCu;
        goto label_49ecfc;
    }
    ctx->pc = 0x49ECF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49ECFCu);
        ctx->pc = 0x49ECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ECF4u;
            // 0x49ecf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49ECFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49ECFCu; }
            if (ctx->pc != 0x49ECFCu) { return; }
        }
        }
    }
    ctx->pc = 0x49ECFCu;
label_49ecfc:
    // 0x49ecfc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x49ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_49ed00:
    // 0x49ed00: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x49ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_49ed04:
    // 0x49ed04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49ed08:
    if (ctx->pc == 0x49ED08u) {
        ctx->pc = 0x49ED08u;
            // 0x49ed08: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x49ED0Cu;
        goto label_49ed0c;
    }
    ctx->pc = 0x49ED04u;
    {
        const bool branch_taken_0x49ed04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ed04) {
            ctx->pc = 0x49ED08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED04u;
            // 0x49ed08: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49ED20u;
            goto label_49ed20;
        }
    }
    ctx->pc = 0x49ED0Cu;
label_49ed0c:
    // 0x49ed0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49ed0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ed10:
    // 0x49ed10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49ed10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49ed14:
    // 0x49ed14: 0x320f809  jalr        $t9
label_49ed18:
    if (ctx->pc == 0x49ED18u) {
        ctx->pc = 0x49ED18u;
            // 0x49ed18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49ED1Cu;
        goto label_49ed1c;
    }
    ctx->pc = 0x49ED14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49ED1Cu);
        ctx->pc = 0x49ED18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED14u;
            // 0x49ed18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49ED1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49ED1Cu; }
            if (ctx->pc != 0x49ED1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49ED1Cu;
label_49ed1c:
    // 0x49ed1c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x49ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_49ed20:
    // 0x49ed20: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x49ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_49ed24:
    // 0x49ed24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49ed28:
    if (ctx->pc == 0x49ED28u) {
        ctx->pc = 0x49ED28u;
            // 0x49ed28: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x49ED2Cu;
        goto label_49ed2c;
    }
    ctx->pc = 0x49ED24u;
    {
        const bool branch_taken_0x49ed24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ed24) {
            ctx->pc = 0x49ED28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED24u;
            // 0x49ed28: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49ED40u;
            goto label_49ed40;
        }
    }
    ctx->pc = 0x49ED2Cu;
label_49ed2c:
    // 0x49ed2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49ed2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ed30:
    // 0x49ed30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49ed30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49ed34:
    // 0x49ed34: 0x320f809  jalr        $t9
label_49ed38:
    if (ctx->pc == 0x49ED38u) {
        ctx->pc = 0x49ED38u;
            // 0x49ed38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49ED3Cu;
        goto label_49ed3c;
    }
    ctx->pc = 0x49ED34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49ED3Cu);
        ctx->pc = 0x49ED38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED34u;
            // 0x49ed38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49ED3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49ED3Cu; }
            if (ctx->pc != 0x49ED3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49ED3Cu;
label_49ed3c:
    // 0x49ed3c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x49ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_49ed40:
    // 0x49ed40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49ed40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49ed44:
    // 0x49ed44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ed44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49ed48:
    // 0x49ed48: 0x3e00008  jr          $ra
label_49ed4c:
    if (ctx->pc == 0x49ED4Cu) {
        ctx->pc = 0x49ED4Cu;
            // 0x49ed4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49ED50u;
        goto label_49ed50;
    }
    ctx->pc = 0x49ED48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED48u;
            // 0x49ed4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49ED50u;
label_49ed50:
    // 0x49ed50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49ed54:
    // 0x49ed54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49ed58:
    // 0x49ed58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49ed5c:
    // 0x49ed5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ed60:
    // 0x49ed60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49ed60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ed64:
    // 0x49ed64: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_49ed68:
    if (ctx->pc == 0x49ED68u) {
        ctx->pc = 0x49ED68u;
            // 0x49ed68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49ED6Cu;
        goto label_49ed6c;
    }
    ctx->pc = 0x49ED64u;
    {
        const bool branch_taken_0x49ed64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED64u;
            // 0x49ed68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed64) {
            ctx->pc = 0x49EDC8u;
            goto label_49edc8;
        }
    }
    ctx->pc = 0x49ED6Cu;
label_49ed6c:
    // 0x49ed6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49ed70:
    // 0x49ed70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x49ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_49ed74:
    // 0x49ed74: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_49ed78:
    if (ctx->pc == 0x49ED78u) {
        ctx->pc = 0x49ED78u;
            // 0x49ed78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49ED7Cu;
        goto label_49ed7c;
    }
    ctx->pc = 0x49ED74u;
    {
        const bool branch_taken_0x49ed74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED74u;
            // 0x49ed78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed74) {
            ctx->pc = 0x49EDB0u;
            goto label_49edb0;
        }
    }
    ctx->pc = 0x49ED7Cu;
label_49ed7c:
    // 0x49ed7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49ed80:
    // 0x49ed80: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x49ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_49ed84:
    // 0x49ed84: 0xc0d37dc  jal         func_34DF70
label_49ed88:
    if (ctx->pc == 0x49ED88u) {
        ctx->pc = 0x49ED88u;
            // 0x49ed88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49ED8Cu;
        goto label_49ed8c;
    }
    ctx->pc = 0x49ED84u;
    SET_GPR_U32(ctx, 31, 0x49ED8Cu);
    ctx->pc = 0x49ED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED84u;
            // 0x49ed88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ED8Cu; }
        if (ctx->pc != 0x49ED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ED8Cu; }
        if (ctx->pc != 0x49ED8Cu) { return; }
    }
    ctx->pc = 0x49ED8Cu;
label_49ed8c:
    // 0x49ed8c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_49ed90:
    if (ctx->pc == 0x49ED90u) {
        ctx->pc = 0x49ED90u;
            // 0x49ed90: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x49ED94u;
        goto label_49ed94;
    }
    ctx->pc = 0x49ED8Cu;
    {
        const bool branch_taken_0x49ed8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ed8c) {
            ctx->pc = 0x49ED90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED8Cu;
            // 0x49ed90: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49EDB4u;
            goto label_49edb4;
        }
    }
    ctx->pc = 0x49ED94u;
label_49ed94:
    // 0x49ed94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49ed98:
    // 0x49ed98: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x49ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_49ed9c:
    // 0x49ed9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_49eda0:
    if (ctx->pc == 0x49EDA0u) {
        ctx->pc = 0x49EDA0u;
            // 0x49eda0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49EDA4u;
        goto label_49eda4;
    }
    ctx->pc = 0x49ED9Cu;
    {
        const bool branch_taken_0x49ed9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ED9Cu;
            // 0x49eda0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed9c) {
            ctx->pc = 0x49EDB0u;
            goto label_49edb0;
        }
    }
    ctx->pc = 0x49EDA4u;
label_49eda4:
    // 0x49eda4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49eda8:
    // 0x49eda8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x49eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_49edac:
    // 0x49edac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49edacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_49edb0:
    // 0x49edb0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_49edb4:
    // 0x49edb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49edb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49edb8:
    // 0x49edb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49edbc:
    if (ctx->pc == 0x49EDBCu) {
        ctx->pc = 0x49EDBCu;
            // 0x49edbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49EDC0u;
        goto label_49edc0;
    }
    ctx->pc = 0x49EDB8u;
    {
        const bool branch_taken_0x49edb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49edb8) {
            ctx->pc = 0x49EDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49EDB8u;
            // 0x49edbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49EDCCu;
            goto label_49edcc;
        }
    }
    ctx->pc = 0x49EDC0u;
label_49edc0:
    // 0x49edc0: 0xc0400a8  jal         func_1002A0
label_49edc4:
    if (ctx->pc == 0x49EDC4u) {
        ctx->pc = 0x49EDC4u;
            // 0x49edc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49EDC8u;
        goto label_49edc8;
    }
    ctx->pc = 0x49EDC0u;
    SET_GPR_U32(ctx, 31, 0x49EDC8u);
    ctx->pc = 0x49EDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EDC0u;
            // 0x49edc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EDC8u; }
        if (ctx->pc != 0x49EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EDC8u; }
        if (ctx->pc != 0x49EDC8u) { return; }
    }
    ctx->pc = 0x49EDC8u;
label_49edc8:
    // 0x49edc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49edc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49edcc:
    // 0x49edcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49edccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49edd0:
    // 0x49edd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49edd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49edd4:
    // 0x49edd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49edd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49edd8:
    // 0x49edd8: 0x3e00008  jr          $ra
label_49eddc:
    if (ctx->pc == 0x49EDDCu) {
        ctx->pc = 0x49EDDCu;
            // 0x49eddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49EDE0u;
        goto label_49ede0;
    }
    ctx->pc = 0x49EDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EDD8u;
            // 0x49eddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EDE0u;
label_49ede0:
    // 0x49ede0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49ede4:
    // 0x49ede4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ede8:
    // 0x49ede8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49edec:
    // 0x49edec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x49edecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49edf0:
    // 0x49edf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49edf4:
    // 0x49edf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49edf8:
    // 0x49edf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49edf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49edfc:
    // 0x49edfc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49ee00:
    // 0x49ee00: 0xc0a7a88  jal         func_29EA20
label_49ee04:
    if (ctx->pc == 0x49EE04u) {
        ctx->pc = 0x49EE04u;
            // 0x49ee04: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x49EE08u;
        goto label_49ee08;
    }
    ctx->pc = 0x49EE00u;
    SET_GPR_U32(ctx, 31, 0x49EE08u);
    ctx->pc = 0x49EE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EE00u;
            // 0x49ee04: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE08u; }
        if (ctx->pc != 0x49EE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE08u; }
        if (ctx->pc != 0x49EE08u) { return; }
    }
    ctx->pc = 0x49EE08u;
label_49ee08:
    // 0x49ee08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x49ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49ee0c:
    // 0x49ee0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49ee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ee10:
    // 0x49ee10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_49ee14:
    if (ctx->pc == 0x49EE14u) {
        ctx->pc = 0x49EE14u;
            // 0x49ee14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49EE18u;
        goto label_49ee18;
    }
    ctx->pc = 0x49EE10u;
    {
        const bool branch_taken_0x49ee10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EE10u;
            // 0x49ee14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee10) {
            ctx->pc = 0x49EE30u;
            goto label_49ee30;
        }
    }
    ctx->pc = 0x49EE18u;
label_49ee18:
    // 0x49ee18: 0x3c024389  lui         $v0, 0x4389
    ctx->pc = 0x49ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17289 << 16));
label_49ee1c:
    // 0x49ee1c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49ee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_49ee20:
    // 0x49ee20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49ee24:
    // 0x49ee24: 0xc0827ac  jal         func_209EB0
label_49ee28:
    if (ctx->pc == 0x49EE28u) {
        ctx->pc = 0x49EE2Cu;
        goto label_49ee2c;
    }
    ctx->pc = 0x49EE24u;
    SET_GPR_U32(ctx, 31, 0x49EE2Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE2Cu; }
        if (ctx->pc != 0x49EE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE2Cu; }
        if (ctx->pc != 0x49EE2Cu) { return; }
    }
    ctx->pc = 0x49EE2Cu;
label_49ee2c:
    // 0x49ee2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ee30:
    // 0x49ee30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49ee30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ee34:
    // 0x49ee34: 0xc040180  jal         func_100600
label_49ee38:
    if (ctx->pc == 0x49EE38u) {
        ctx->pc = 0x49EE38u;
            // 0x49ee38: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x49EE3Cu;
        goto label_49ee3c;
    }
    ctx->pc = 0x49EE34u;
    SET_GPR_U32(ctx, 31, 0x49EE3Cu);
    ctx->pc = 0x49EE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EE34u;
            // 0x49ee38: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE3Cu; }
        if (ctx->pc != 0x49EE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE3Cu; }
        if (ctx->pc != 0x49EE3Cu) { return; }
    }
    ctx->pc = 0x49EE3Cu;
label_49ee3c:
    // 0x49ee3c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_49ee40:
    if (ctx->pc == 0x49EE40u) {
        ctx->pc = 0x49EE40u;
            // 0x49ee40: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x49EE44u;
        goto label_49ee44;
    }
    ctx->pc = 0x49EE3Cu;
    {
        const bool branch_taken_0x49ee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ee3c) {
            ctx->pc = 0x49EE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49EE3Cu;
            // 0x49ee40: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49EE80u;
            goto label_49ee80;
        }
    }
    ctx->pc = 0x49EE44u;
label_49ee44:
    // 0x49ee44: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x49ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_49ee48:
    // 0x49ee48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49ee4c:
    // 0x49ee4c: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x49ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_49ee50:
    // 0x49ee50: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x49ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_49ee54:
    // 0x49ee54: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49ee58:
    // 0x49ee58: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x49ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_49ee5c:
    // 0x49ee5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x49ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_49ee60:
    // 0x49ee60: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x49ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_49ee64:
    // 0x49ee64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49ee68:
    // 0x49ee68: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49ee6c:
    // 0x49ee6c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x49ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_49ee70:
    // 0x49ee70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x49ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_49ee74:
    // 0x49ee74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x49ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_49ee78:
    // 0x49ee78: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x49ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_49ee7c:
    // 0x49ee7c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x49ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_49ee80:
    // 0x49ee80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49ee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ee84:
    // 0x49ee84: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x49ee84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49ee88:
    // 0x49ee88: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x49ee88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_49ee8c:
    // 0x49ee8c: 0xc0d37ec  jal         func_34DFB0
label_49ee90:
    if (ctx->pc == 0x49EE90u) {
        ctx->pc = 0x49EE90u;
            // 0x49ee90: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49EE94u;
        goto label_49ee94;
    }
    ctx->pc = 0x49EE8Cu;
    SET_GPR_U32(ctx, 31, 0x49EE94u);
    ctx->pc = 0x49EE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EE8Cu;
            // 0x49ee90: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE94u; }
        if (ctx->pc != 0x49EE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EE94u; }
        if (ctx->pc != 0x49EE94u) { return; }
    }
    ctx->pc = 0x49EE94u;
label_49ee94:
    // 0x49ee94: 0xae11005c  sw          $s1, 0x5C($s0)
    ctx->pc = 0x49ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
label_49ee98:
    // 0x49ee98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x49ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_49ee9c:
    // 0x49ee9c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x49ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_49eea0:
    // 0x49eea0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x49eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_49eea4:
    // 0x49eea4: 0xa6000088  sh          $zero, 0x88($s0)
    ctx->pc = 0x49eea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 0));
label_49eea8:
    // 0x49eea8: 0xc040180  jal         func_100600
label_49eeac:
    if (ctx->pc == 0x49EEACu) {
        ctx->pc = 0x49EEACu;
            // 0x49eeac: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x49EEB0u;
        goto label_49eeb0;
    }
    ctx->pc = 0x49EEA8u;
    SET_GPR_U32(ctx, 31, 0x49EEB0u);
    ctx->pc = 0x49EEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EEA8u;
            // 0x49eeac: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EEB0u; }
        if (ctx->pc != 0x49EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EEB0u; }
        if (ctx->pc != 0x49EEB0u) { return; }
    }
    ctx->pc = 0x49EEB0u;
label_49eeb0:
    // 0x49eeb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49eeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49eeb4:
    // 0x49eeb4: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_49eeb8:
    if (ctx->pc == 0x49EEB8u) {
        ctx->pc = 0x49EEB8u;
            // 0x49eeb8: 0x3c02481c  lui         $v0, 0x481C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18460 << 16));
        ctx->pc = 0x49EEBCu;
        goto label_49eebc;
    }
    ctx->pc = 0x49EEB4u;
    {
        const bool branch_taken_0x49eeb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49eeb4) {
            ctx->pc = 0x49EEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49EEB4u;
            // 0x49eeb8: 0x3c02481c  lui         $v0, 0x481C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18460 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49EEF4u;
            goto label_49eef4;
        }
    }
    ctx->pc = 0x49EEBCu;
label_49eebc:
    // 0x49eebc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49eec0:
    // 0x49eec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49eec4:
    // 0x49eec4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x49eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_49eec8:
    // 0x49eec8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x49eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_49eecc:
    // 0x49eecc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_49eed0:
    // 0x49eed0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x49eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_49eed4:
    // 0x49eed4: 0xc040138  jal         func_1004E0
label_49eed8:
    if (ctx->pc == 0x49EED8u) {
        ctx->pc = 0x49EED8u;
            // 0x49eed8: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x49EEDCu;
        goto label_49eedc;
    }
    ctx->pc = 0x49EED4u;
    SET_GPR_U32(ctx, 31, 0x49EEDCu);
    ctx->pc = 0x49EED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EED4u;
            // 0x49eed8: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EEDCu; }
        if (ctx->pc != 0x49EEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EEDCu; }
        if (ctx->pc != 0x49EEDCu) { return; }
    }
    ctx->pc = 0x49EEDCu;
label_49eedc:
    // 0x49eedc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x49eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_49eee0:
    // 0x49eee0: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x49eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_49eee4:
    // 0x49eee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49eee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eee8:
    // 0x49eee8: 0xc04a576  jal         func_1295D8
label_49eeec:
    if (ctx->pc == 0x49EEECu) {
        ctx->pc = 0x49EEECu;
            // 0x49eeec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x49EEF0u;
        goto label_49eef0;
    }
    ctx->pc = 0x49EEE8u;
    SET_GPR_U32(ctx, 31, 0x49EEF0u);
    ctx->pc = 0x49EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EEE8u;
            // 0x49eeec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EEF0u; }
        if (ctx->pc != 0x49EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EEF0u; }
        if (ctx->pc != 0x49EEF0u) { return; }
    }
    ctx->pc = 0x49EEF0u;
label_49eef0:
    // 0x49eef0: 0x3c02481c  lui         $v0, 0x481C
    ctx->pc = 0x49eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18460 << 16));
label_49eef4:
    // 0x49eef4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x49eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_49eef8:
    // 0x49eef8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x49eef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_49eefc:
    // 0x49eefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49eefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49ef00:
    // 0x49ef00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49ef00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49ef04:
    // 0x49ef04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49ef04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ef08:
    // 0x49ef08: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x49ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_49ef0c:
    // 0x49ef0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49ef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ef10:
    // 0x49ef10: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x49ef10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_49ef14:
    // 0x49ef14: 0x344616ae  ori         $a2, $v0, 0x16AE
    ctx->pc = 0x49ef14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
label_49ef18:
    // 0x49ef18: 0xc122cd8  jal         func_48B360
label_49ef1c:
    if (ctx->pc == 0x49EF1Cu) {
        ctx->pc = 0x49EF1Cu;
            // 0x49ef1c: 0xae1100d0  sw          $s1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
        ctx->pc = 0x49EF20u;
        goto label_49ef20;
    }
    ctx->pc = 0x49EF18u;
    SET_GPR_U32(ctx, 31, 0x49EF20u);
    ctx->pc = 0x49EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EF18u;
            // 0x49ef1c: 0xae1100d0  sw          $s1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EF20u; }
        if (ctx->pc != 0x49EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EF20u; }
        if (ctx->pc != 0x49EF20u) { return; }
    }
    ctx->pc = 0x49EF20u;
label_49ef20:
    // 0x49ef20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49ef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49ef24:
    // 0x49ef24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49ef24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49ef28:
    // 0x49ef28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ef28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49ef2c:
    // 0x49ef2c: 0x3e00008  jr          $ra
label_49ef30:
    if (ctx->pc == 0x49EF30u) {
        ctx->pc = 0x49EF30u;
            // 0x49ef30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49EF34u;
        goto label_49ef34;
    }
    ctx->pc = 0x49EF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EF2Cu;
            // 0x49ef30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EF34u;
label_49ef34:
    // 0x49ef34: 0x0  nop
    ctx->pc = 0x49ef34u;
    // NOP
label_49ef38:
    // 0x49ef38: 0x0  nop
    ctx->pc = 0x49ef38u;
    // NOP
label_49ef3c:
    // 0x49ef3c: 0x0  nop
    ctx->pc = 0x49ef3cu;
    // NOP
label_49ef40:
    // 0x49ef40: 0x3e00008  jr          $ra
label_49ef44:
    if (ctx->pc == 0x49EF44u) {
        ctx->pc = 0x49EF48u;
        goto label_49ef48;
    }
    ctx->pc = 0x49EF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EF48u;
label_49ef48:
    // 0x49ef48: 0x0  nop
    ctx->pc = 0x49ef48u;
    // NOP
label_49ef4c:
    // 0x49ef4c: 0x0  nop
    ctx->pc = 0x49ef4cu;
    // NOP
label_49ef50:
    // 0x49ef50: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x49ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_49ef54:
    // 0x49ef54: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x49ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_49ef58:
    // 0x49ef58: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x49ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_49ef5c:
    // 0x49ef5c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x49ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_49ef60:
    // 0x49ef60: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x49ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_49ef64:
    // 0x49ef64: 0xa4800088  sh          $zero, 0x88($a0)
    ctx->pc = 0x49ef64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 0));
label_49ef68:
    // 0x49ef68: 0x8122c94  j           func_48B250
label_49ef6c:
    if (ctx->pc == 0x49EF6Cu) {
        ctx->pc = 0x49EF6Cu;
            // 0x49ef6c: 0x8c8400d0  lw          $a0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->pc = 0x49EF70u;
        goto label_49ef70;
    }
    ctx->pc = 0x49EF68u;
    ctx->pc = 0x49EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EF68u;
            // 0x49ef6c: 0x8c8400d0  lw          $a0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B250_0x48b250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x49EF70u;
label_49ef70:
    // 0x49ef70: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x49ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49ef74:
    // 0x49ef74: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x49ef74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
label_49ef78:
    // 0x49ef78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_49ef7c:
    // 0x49ef7c: 0x3e00008  jr          $ra
label_49ef80:
    if (ctx->pc == 0x49EF80u) {
        ctx->pc = 0x49EF80u;
            // 0x49ef80: 0xa4830088  sh          $v1, 0x88($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49EF84u;
        goto label_49ef84;
    }
    ctx->pc = 0x49EF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EF7Cu;
            // 0x49ef80: 0xa4830088  sh          $v1, 0x88($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EF84u;
label_49ef84:
    // 0x49ef84: 0x0  nop
    ctx->pc = 0x49ef84u;
    // NOP
label_49ef88:
    // 0x49ef88: 0x0  nop
    ctx->pc = 0x49ef88u;
    // NOP
label_49ef8c:
    // 0x49ef8c: 0x0  nop
    ctx->pc = 0x49ef8cu;
    // NOP
label_49ef90:
    // 0x49ef90: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x49ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49ef94:
    // 0x49ef94: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x49ef94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
label_49ef98:
    // 0x49ef98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_49ef9c:
    // 0x49ef9c: 0x3e00008  jr          $ra
label_49efa0:
    if (ctx->pc == 0x49EFA0u) {
        ctx->pc = 0x49EFA0u;
            // 0x49efa0: 0xa4830088  sh          $v1, 0x88($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49EFA4u;
        goto label_49efa4;
    }
    ctx->pc = 0x49EF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EF9Cu;
            // 0x49efa0: 0xa4830088  sh          $v1, 0x88($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EFA4u;
label_49efa4:
    // 0x49efa4: 0x0  nop
    ctx->pc = 0x49efa4u;
    // NOP
label_49efa8:
    // 0x49efa8: 0x0  nop
    ctx->pc = 0x49efa8u;
    // NOP
label_49efac:
    // 0x49efac: 0x0  nop
    ctx->pc = 0x49efacu;
    // NOP
label_49efb0:
    // 0x49efb0: 0x3e00008  jr          $ra
label_49efb4:
    if (ctx->pc == 0x49EFB4u) {
        ctx->pc = 0x49EFB4u;
            // 0x49efb4: 0x24025a0a  addiu       $v0, $zero, 0x5A0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23050));
        ctx->pc = 0x49EFB8u;
        goto label_49efb8;
    }
    ctx->pc = 0x49EFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EFB0u;
            // 0x49efb4: 0x24025a0a  addiu       $v0, $zero, 0x5A0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EFB8u;
label_49efb8:
    // 0x49efb8: 0x0  nop
    ctx->pc = 0x49efb8u;
    // NOP
label_49efbc:
    // 0x49efbc: 0x0  nop
    ctx->pc = 0x49efbcu;
    // NOP
label_49efc0:
    // 0x49efc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49efc4:
    // 0x49efc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x49efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_49efc8:
    // 0x49efc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49efcc:
    // 0x49efcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49efd0:
    // 0x49efd0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49efd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49efd4:
    // 0x49efd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49efd8:
    // 0x49efd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49efdc:
    // 0x49efdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49efe0:
    // 0x49efe0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x49efe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49efe4:
    // 0x49efe4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_49efe8:
    if (ctx->pc == 0x49EFE8u) {
        ctx->pc = 0x49EFE8u;
            // 0x49efe8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49EFECu;
        goto label_49efec;
    }
    ctx->pc = 0x49EFE4u;
    {
        const bool branch_taken_0x49efe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EFE4u;
            // 0x49efe8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49efe4) {
            ctx->pc = 0x49F028u;
            goto label_49f028;
        }
    }
    ctx->pc = 0x49EFECu;
label_49efec:
    // 0x49efec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49efecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eff0:
    // 0x49eff0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49eff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eff4:
    // 0x49eff4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49eff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eff8:
    // 0x49eff8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x49eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_49effc:
    // 0x49effc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_49f000:
    // 0x49f000: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49f000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49f004:
    // 0x49f004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49f004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49f008:
    // 0x49f008: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x49f008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_49f00c:
    // 0x49f00c: 0x320f809  jalr        $t9
label_49f010:
    if (ctx->pc == 0x49F010u) {
        ctx->pc = 0x49F014u;
        goto label_49f014;
    }
    ctx->pc = 0x49F00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49F014u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49F014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49F014u; }
            if (ctx->pc != 0x49F014u) { return; }
        }
        }
    }
    ctx->pc = 0x49F014u;
label_49f014:
    // 0x49f014: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x49f014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49f018:
    // 0x49f018: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x49f018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49f01c:
    // 0x49f01c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x49f01cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49f020:
    // 0x49f020: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_49f024:
    if (ctx->pc == 0x49F024u) {
        ctx->pc = 0x49F024u;
            // 0x49f024: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x49F028u;
        goto label_49f028;
    }
    ctx->pc = 0x49F020u;
    {
        const bool branch_taken_0x49f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F020u;
            // 0x49f024: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f020) {
            ctx->pc = 0x49EFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49eff8;
        }
    }
    ctx->pc = 0x49F028u;
label_49f028:
    // 0x49f028: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49f028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49f02c:
    // 0x49f02c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49f02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_49f030:
    // 0x49f030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49f030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49f034:
    // 0x49f034: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49f034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49f038:
    // 0x49f038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49f038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49f03c:
    // 0x49f03c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f040:
    // 0x49f040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49f040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49f044:
    // 0x49f044: 0x3e00008  jr          $ra
label_49f048:
    if (ctx->pc == 0x49F048u) {
        ctx->pc = 0x49F048u;
            // 0x49f048: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49F04Cu;
        goto label_49f04c;
    }
    ctx->pc = 0x49F044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F044u;
            // 0x49f048: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F04Cu;
label_49f04c:
    // 0x49f04c: 0x0  nop
    ctx->pc = 0x49f04cu;
    // NOP
label_49f050:
    // 0x49f050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49f054:
    // 0x49f054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49f054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f058:
    // 0x49f058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49f05c:
    // 0x49f05c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x49f05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_49f060:
    // 0x49f060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49f064:
    // 0x49f064: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x49f064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_49f068:
    // 0x49f068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49f068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49f06c:
    // 0x49f06c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x49f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_49f070:
    // 0x49f070: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49f070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49f074:
    // 0x49f074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49f078:
    // 0x49f078: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x49f078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_49f07c:
    // 0x49f07c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x49f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49f080:
    // 0x49f080: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x49f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_49f084:
    // 0x49f084: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_49f088:
    // 0x49f088: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x49f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_49f08c:
    // 0x49f08c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x49f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_49f090:
    // 0x49f090: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x49f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_49f094:
    // 0x49f094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49f098:
    // 0x49f098: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x49f098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_49f09c:
    // 0x49f09c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x49f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49f0a0:
    // 0x49f0a0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x49f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_49f0a4:
    // 0x49f0a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49f0a8:
    // 0x49f0a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x49f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49f0ac:
    // 0x49f0ac: 0xc0a997c  jal         func_2A65F0
label_49f0b0:
    if (ctx->pc == 0x49F0B0u) {
        ctx->pc = 0x49F0B0u;
            // 0x49f0b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x49F0B4u;
        goto label_49f0b4;
    }
    ctx->pc = 0x49F0ACu;
    SET_GPR_U32(ctx, 31, 0x49F0B4u);
    ctx->pc = 0x49F0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F0ACu;
            // 0x49f0b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F0B4u; }
        if (ctx->pc != 0x49F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F0B4u; }
        if (ctx->pc != 0x49F0B4u) { return; }
    }
    ctx->pc = 0x49F0B4u;
label_49f0b4:
    // 0x49f0b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x49f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_49f0b8:
    // 0x49f0b8: 0xc0d879c  jal         func_361E70
label_49f0bc:
    if (ctx->pc == 0x49F0BCu) {
        ctx->pc = 0x49F0BCu;
            // 0x49f0bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F0C0u;
        goto label_49f0c0;
    }
    ctx->pc = 0x49F0B8u;
    SET_GPR_U32(ctx, 31, 0x49F0C0u);
    ctx->pc = 0x49F0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F0B8u;
            // 0x49f0bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F0C0u; }
        if (ctx->pc != 0x49F0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F0C0u; }
        if (ctx->pc != 0x49F0C0u) { return; }
    }
    ctx->pc = 0x49F0C0u;
label_49f0c0:
    // 0x49f0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49f0c4:
    // 0x49f0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49f0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49f0c8:
    // 0x49f0c8: 0x3e00008  jr          $ra
label_49f0cc:
    if (ctx->pc == 0x49F0CCu) {
        ctx->pc = 0x49F0CCu;
            // 0x49f0cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49F0D0u;
        goto label_49f0d0;
    }
    ctx->pc = 0x49F0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F0C8u;
            // 0x49f0cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F0D0u;
label_49f0d0:
    // 0x49f0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49f0d4:
    // 0x49f0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49f0d8:
    // 0x49f0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49f0dc:
    // 0x49f0dc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x49f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_49f0e0:
    // 0x49f0e0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_49f0e4:
    if (ctx->pc == 0x49F0E4u) {
        ctx->pc = 0x49F0E4u;
            // 0x49f0e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F0E8u;
        goto label_49f0e8;
    }
    ctx->pc = 0x49F0E0u;
    {
        const bool branch_taken_0x49f0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F0E0u;
            // 0x49f0e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0e0) {
            ctx->pc = 0x49F200u;
            goto label_49f200;
        }
    }
    ctx->pc = 0x49F0E8u;
label_49f0e8:
    // 0x49f0e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49f0ec:
    // 0x49f0ec: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x49f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_49f0f0:
    // 0x49f0f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x49f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_49f0f4:
    // 0x49f0f4: 0xc075128  jal         func_1D44A0
label_49f0f8:
    if (ctx->pc == 0x49F0F8u) {
        ctx->pc = 0x49F0F8u;
            // 0x49f0f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x49F0FCu;
        goto label_49f0fc;
    }
    ctx->pc = 0x49F0F4u;
    SET_GPR_U32(ctx, 31, 0x49F0FCu);
    ctx->pc = 0x49F0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F0F4u;
            // 0x49f0f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F0FCu; }
        if (ctx->pc != 0x49F0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F0FCu; }
        if (ctx->pc != 0x49F0FCu) { return; }
    }
    ctx->pc = 0x49F0FCu;
label_49f0fc:
    // 0x49f0fc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x49f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49f100:
    // 0x49f100: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f104:
    // 0x49f104: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x49f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_49f108:
    // 0x49f108: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x49f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_49f10c:
    // 0x49f10c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49f10cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49f110:
    // 0x49f110: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49f114:
    if (ctx->pc == 0x49F114u) {
        ctx->pc = 0x49F114u;
            // 0x49f114: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x49F118u;
        goto label_49f118;
    }
    ctx->pc = 0x49F110u;
    {
        const bool branch_taken_0x49f110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F110u;
            // 0x49f114: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f110) {
            ctx->pc = 0x49F120u;
            goto label_49f120;
        }
    }
    ctx->pc = 0x49F118u;
label_49f118:
    // 0x49f118: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f11c:
    // 0x49f11c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x49f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_49f120:
    // 0x49f120: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49f124:
    // 0x49f124: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f128:
    // 0x49f128: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x49f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_49f12c:
    // 0x49f12c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x49f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_49f130:
    // 0x49f130: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49f130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49f134:
    // 0x49f134: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49f138:
    if (ctx->pc == 0x49F138u) {
        ctx->pc = 0x49F138u;
            // 0x49f138: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49F13Cu;
        goto label_49f13c;
    }
    ctx->pc = 0x49F134u;
    {
        const bool branch_taken_0x49f134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f134) {
            ctx->pc = 0x49F138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F134u;
            // 0x49f138: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F148u;
            goto label_49f148;
        }
    }
    ctx->pc = 0x49F13Cu;
label_49f13c:
    // 0x49f13c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f140:
    // 0x49f140: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x49f140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_49f144:
    // 0x49f144: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49f148:
    // 0x49f148: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f14c:
    // 0x49f14c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x49f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_49f150:
    // 0x49f150: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x49f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_49f154:
    // 0x49f154: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49f154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49f158:
    // 0x49f158: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49f15c:
    if (ctx->pc == 0x49F15Cu) {
        ctx->pc = 0x49F15Cu;
            // 0x49f15c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x49F160u;
        goto label_49f160;
    }
    ctx->pc = 0x49F158u;
    {
        const bool branch_taken_0x49f158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f158) {
            ctx->pc = 0x49F15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F158u;
            // 0x49f15c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F16Cu;
            goto label_49f16c;
        }
    }
    ctx->pc = 0x49F160u;
label_49f160:
    // 0x49f160: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f164:
    // 0x49f164: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x49f164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_49f168:
    // 0x49f168: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x49f168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49f16c:
    // 0x49f16c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x49f16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_49f170:
    // 0x49f170: 0x320f809  jalr        $t9
label_49f174:
    if (ctx->pc == 0x49F174u) {
        ctx->pc = 0x49F174u;
            // 0x49f174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F178u;
        goto label_49f178;
    }
    ctx->pc = 0x49F170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49F178u);
        ctx->pc = 0x49F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F170u;
            // 0x49f174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49F178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49F178u; }
            if (ctx->pc != 0x49F178u) { return; }
        }
        }
    }
    ctx->pc = 0x49F178u;
label_49f178:
    // 0x49f178: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x49f178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49f17c:
    // 0x49f17c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f180:
    // 0x49f180: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x49f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_49f184:
    // 0x49f184: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x49f184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49f188:
    // 0x49f188: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x49f188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_49f18c:
    // 0x49f18c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x49f18cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_49f190:
    // 0x49f190: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49f194:
    if (ctx->pc == 0x49F194u) {
        ctx->pc = 0x49F194u;
            // 0x49f194: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x49F198u;
        goto label_49f198;
    }
    ctx->pc = 0x49F190u;
    {
        const bool branch_taken_0x49f190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f190) {
            ctx->pc = 0x49F194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F190u;
            // 0x49f194: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F1A4u;
            goto label_49f1a4;
        }
    }
    ctx->pc = 0x49F198u;
label_49f198:
    // 0x49f198: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f19c:
    // 0x49f19c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x49f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_49f1a0:
    // 0x49f1a0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x49f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49f1a4:
    // 0x49f1a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f1a8:
    // 0x49f1a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x49f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_49f1ac:
    // 0x49f1ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x49f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49f1b0:
    // 0x49f1b0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x49f1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_49f1b4:
    // 0x49f1b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x49f1b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_49f1b8:
    // 0x49f1b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49f1bc:
    if (ctx->pc == 0x49F1BCu) {
        ctx->pc = 0x49F1C0u;
        goto label_49f1c0;
    }
    ctx->pc = 0x49F1B8u;
    {
        const bool branch_taken_0x49f1b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f1b8) {
            ctx->pc = 0x49F1C8u;
            goto label_49f1c8;
        }
    }
    ctx->pc = 0x49F1C0u;
label_49f1c0:
    // 0x49f1c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f1c4:
    // 0x49f1c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x49f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_49f1c8:
    // 0x49f1c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f1cc:
    // 0x49f1cc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x49f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_49f1d0:
    // 0x49f1d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x49f1d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49f1d4:
    // 0x49f1d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49f1d8:
    if (ctx->pc == 0x49F1D8u) {
        ctx->pc = 0x49F1DCu;
        goto label_49f1dc;
    }
    ctx->pc = 0x49F1D4u;
    {
        const bool branch_taken_0x49f1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f1d4) {
            ctx->pc = 0x49F1E4u;
            goto label_49f1e4;
        }
    }
    ctx->pc = 0x49F1DCu;
label_49f1dc:
    // 0x49f1dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f1e0:
    // 0x49f1e0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x49f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_49f1e4:
    // 0x49f1e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f1e8:
    // 0x49f1e8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x49f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_49f1ec:
    // 0x49f1ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x49f1ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49f1f0:
    // 0x49f1f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49f1f4:
    if (ctx->pc == 0x49F1F4u) {
        ctx->pc = 0x49F1F4u;
            // 0x49f1f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x49F1F8u;
        goto label_49f1f8;
    }
    ctx->pc = 0x49F1F0u;
    {
        const bool branch_taken_0x49f1f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f1f0) {
            ctx->pc = 0x49F1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F1F0u;
            // 0x49f1f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F204u;
            goto label_49f204;
        }
    }
    ctx->pc = 0x49F1F8u;
label_49f1f8:
    // 0x49f1f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f1fc:
    // 0x49f1fc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x49f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_49f200:
    // 0x49f200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49f200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49f204:
    // 0x49f204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49f204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49f208:
    // 0x49f208: 0x3e00008  jr          $ra
label_49f20c:
    if (ctx->pc == 0x49F20Cu) {
        ctx->pc = 0x49F20Cu;
            // 0x49f20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49F210u;
        goto label_49f210;
    }
    ctx->pc = 0x49F208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F208u;
            // 0x49f20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F210u;
label_49f210:
    // 0x49f210: 0x8127a08  j           func_49E820
label_49f214:
    if (ctx->pc == 0x49F214u) {
        ctx->pc = 0x49F214u;
            // 0x49f214: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49F218u;
        goto label_49f218;
    }
    ctx->pc = 0x49F210u;
    ctx->pc = 0x49F214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F210u;
            // 0x49f214: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E820u;
    {
        auto targetFn = runtime->lookupFunction(0x49E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49F218u;
label_49f218:
    // 0x49f218: 0x0  nop
    ctx->pc = 0x49f218u;
    // NOP
label_49f21c:
    // 0x49f21c: 0x0  nop
    ctx->pc = 0x49f21cu;
    // NOP
label_49f220:
    // 0x49f220: 0x81277e0  j           func_49DF80
label_49f224:
    if (ctx->pc == 0x49F224u) {
        ctx->pc = 0x49F224u;
            // 0x49f224: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49F228u;
        goto label_49f228;
    }
    ctx->pc = 0x49F220u;
    ctx->pc = 0x49F224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F220u;
            // 0x49f224: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DF80u;
    if (runtime->hasFunction(0x49DF80u)) {
        auto targetFn = runtime->lookupFunction(0x49DF80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0049DF80_0x49df80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x49F228u;
label_49f228:
    // 0x49f228: 0x0  nop
    ctx->pc = 0x49f228u;
    // NOP
label_49f22c:
    // 0x49f22c: 0x0  nop
    ctx->pc = 0x49f22cu;
    // NOP
label_49f230:
    // 0x49f230: 0x81277bc  j           func_49DEF0
label_49f234:
    if (ctx->pc == 0x49F234u) {
        ctx->pc = 0x49F234u;
            // 0x49f234: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49F238u;
        goto label_49f238;
    }
    ctx->pc = 0x49F230u;
    ctx->pc = 0x49F234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F230u;
            // 0x49f234: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DEF0u;
    {
        auto targetFn = runtime->lookupFunction(0x49DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49F238u;
label_49f238:
    // 0x49f238: 0x0  nop
    ctx->pc = 0x49f238u;
    // NOP
label_49f23c:
    // 0x49f23c: 0x0  nop
    ctx->pc = 0x49f23cu;
    // NOP
label_49f240:
    // 0x49f240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49f244:
    // 0x49f244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49f248:
    // 0x49f248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49f24c:
    // 0x49f24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49f24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49f250:
    // 0x49f250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49f250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49f254:
    // 0x49f254: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_49f258:
    if (ctx->pc == 0x49F258u) {
        ctx->pc = 0x49F258u;
            // 0x49f258: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F25Cu;
        goto label_49f25c;
    }
    ctx->pc = 0x49F254u;
    {
        const bool branch_taken_0x49f254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F254u;
            // 0x49f258: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f254) {
            ctx->pc = 0x49F2C0u;
            goto label_49f2c0;
        }
    }
    ctx->pc = 0x49F25Cu;
label_49f25c:
    // 0x49f25c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49f260:
    // 0x49f260: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49f260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49f264:
    // 0x49f264: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x49f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_49f268:
    // 0x49f268: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x49f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_49f26c:
    // 0x49f26c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49f270:
    // 0x49f270: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_49f274:
    if (ctx->pc == 0x49F274u) {
        ctx->pc = 0x49F274u;
            // 0x49f274: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x49F278u;
        goto label_49f278;
    }
    ctx->pc = 0x49F270u;
    {
        const bool branch_taken_0x49f270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F270u;
            // 0x49f274: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f270) {
            ctx->pc = 0x49F2A8u;
            goto label_49f2a8;
        }
    }
    ctx->pc = 0x49F278u;
label_49f278:
    // 0x49f278: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49f278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49f27c:
    // 0x49f27c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49f280:
    // 0x49f280: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x49f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_49f284:
    // 0x49f284: 0x24420138  addiu       $v0, $v0, 0x138
    ctx->pc = 0x49f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
label_49f288:
    // 0x49f288: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49f288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49f28c:
    // 0x49f28c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x49f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_49f290:
    // 0x49f290: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49f290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_49f294:
    // 0x49f294: 0xc0aed1c  jal         func_2BB470
label_49f298:
    if (ctx->pc == 0x49F298u) {
        ctx->pc = 0x49F298u;
            // 0x49f298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F29Cu;
        goto label_49f29c;
    }
    ctx->pc = 0x49F294u;
    SET_GPR_U32(ctx, 31, 0x49F29Cu);
    ctx->pc = 0x49F298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F294u;
            // 0x49f298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F29Cu; }
        if (ctx->pc != 0x49F29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F29Cu; }
        if (ctx->pc != 0x49F29Cu) { return; }
    }
    ctx->pc = 0x49F29Cu;
label_49f29c:
    // 0x49f29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49f29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49f2a0:
    // 0x49f2a0: 0xc127cb8  jal         func_49F2E0
label_49f2a4:
    if (ctx->pc == 0x49F2A4u) {
        ctx->pc = 0x49F2A4u;
            // 0x49f2a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F2A8u;
        goto label_49f2a8;
    }
    ctx->pc = 0x49F2A0u;
    SET_GPR_U32(ctx, 31, 0x49F2A8u);
    ctx->pc = 0x49F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F2A0u;
            // 0x49f2a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49F2E0u;
    if (runtime->hasFunction(0x49F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x49F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F2A8u; }
        if (ctx->pc != 0x49F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049F2E0_0x49f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F2A8u; }
        if (ctx->pc != 0x49F2A8u) { return; }
    }
    ctx->pc = 0x49F2A8u;
label_49f2a8:
    // 0x49f2a8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_49f2ac:
    // 0x49f2ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49f2acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49f2b0:
    // 0x49f2b0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49f2b4:
    if (ctx->pc == 0x49F2B4u) {
        ctx->pc = 0x49F2B4u;
            // 0x49f2b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F2B8u;
        goto label_49f2b8;
    }
    ctx->pc = 0x49F2B0u;
    {
        const bool branch_taken_0x49f2b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49f2b0) {
            ctx->pc = 0x49F2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F2B0u;
            // 0x49f2b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F2C4u;
            goto label_49f2c4;
        }
    }
    ctx->pc = 0x49F2B8u;
label_49f2b8:
    // 0x49f2b8: 0xc0400a8  jal         func_1002A0
label_49f2bc:
    if (ctx->pc == 0x49F2BCu) {
        ctx->pc = 0x49F2BCu;
            // 0x49f2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F2C0u;
        goto label_49f2c0;
    }
    ctx->pc = 0x49F2B8u;
    SET_GPR_U32(ctx, 31, 0x49F2C0u);
    ctx->pc = 0x49F2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F2B8u;
            // 0x49f2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F2C0u; }
        if (ctx->pc != 0x49F2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F2C0u; }
        if (ctx->pc != 0x49F2C0u) { return; }
    }
    ctx->pc = 0x49F2C0u;
label_49f2c0:
    // 0x49f2c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49f2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49f2c4:
    // 0x49f2c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49f2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49f2c8:
    // 0x49f2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f2cc:
    // 0x49f2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49f2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49f2d0:
    // 0x49f2d0: 0x3e00008  jr          $ra
label_49f2d4:
    if (ctx->pc == 0x49F2D4u) {
        ctx->pc = 0x49F2D4u;
            // 0x49f2d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49F2D8u;
        goto label_49f2d8;
    }
    ctx->pc = 0x49F2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F2D0u;
            // 0x49f2d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F2D8u;
label_49f2d8:
    // 0x49f2d8: 0x0  nop
    ctx->pc = 0x49f2d8u;
    // NOP
label_49f2dc:
    // 0x49f2dc: 0x0  nop
    ctx->pc = 0x49f2dcu;
    // NOP
}
