#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014BD20
// Address: 0x14bd20 - 0x14c390
void sub_0014BD20_0x14bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BD20_0x14bd20");
#endif

    switch (ctx->pc) {
        case 0x14bd20u: goto label_14bd20;
        case 0x14bd24u: goto label_14bd24;
        case 0x14bd28u: goto label_14bd28;
        case 0x14bd2cu: goto label_14bd2c;
        case 0x14bd30u: goto label_14bd30;
        case 0x14bd34u: goto label_14bd34;
        case 0x14bd38u: goto label_14bd38;
        case 0x14bd3cu: goto label_14bd3c;
        case 0x14bd40u: goto label_14bd40;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bd48u: goto label_14bd48;
        case 0x14bd4cu: goto label_14bd4c;
        case 0x14bd50u: goto label_14bd50;
        case 0x14bd54u: goto label_14bd54;
        case 0x14bd58u: goto label_14bd58;
        case 0x14bd5cu: goto label_14bd5c;
        case 0x14bd60u: goto label_14bd60;
        case 0x14bd64u: goto label_14bd64;
        case 0x14bd68u: goto label_14bd68;
        case 0x14bd6cu: goto label_14bd6c;
        case 0x14bd70u: goto label_14bd70;
        case 0x14bd74u: goto label_14bd74;
        case 0x14bd78u: goto label_14bd78;
        case 0x14bd7cu: goto label_14bd7c;
        case 0x14bd80u: goto label_14bd80;
        case 0x14bd84u: goto label_14bd84;
        case 0x14bd88u: goto label_14bd88;
        case 0x14bd8cu: goto label_14bd8c;
        case 0x14bd90u: goto label_14bd90;
        case 0x14bd94u: goto label_14bd94;
        case 0x14bd98u: goto label_14bd98;
        case 0x14bd9cu: goto label_14bd9c;
        case 0x14bda0u: goto label_14bda0;
        case 0x14bda4u: goto label_14bda4;
        case 0x14bda8u: goto label_14bda8;
        case 0x14bdacu: goto label_14bdac;
        case 0x14bdb0u: goto label_14bdb0;
        case 0x14bdb4u: goto label_14bdb4;
        case 0x14bdb8u: goto label_14bdb8;
        case 0x14bdbcu: goto label_14bdbc;
        case 0x14bdc0u: goto label_14bdc0;
        case 0x14bdc4u: goto label_14bdc4;
        case 0x14bdc8u: goto label_14bdc8;
        case 0x14bdccu: goto label_14bdcc;
        case 0x14bdd0u: goto label_14bdd0;
        case 0x14bdd4u: goto label_14bdd4;
        case 0x14bdd8u: goto label_14bdd8;
        case 0x14bddcu: goto label_14bddc;
        case 0x14bde0u: goto label_14bde0;
        case 0x14bde4u: goto label_14bde4;
        case 0x14bde8u: goto label_14bde8;
        case 0x14bdecu: goto label_14bdec;
        case 0x14bdf0u: goto label_14bdf0;
        case 0x14bdf4u: goto label_14bdf4;
        case 0x14bdf8u: goto label_14bdf8;
        case 0x14bdfcu: goto label_14bdfc;
        case 0x14be00u: goto label_14be00;
        case 0x14be04u: goto label_14be04;
        case 0x14be08u: goto label_14be08;
        case 0x14be0cu: goto label_14be0c;
        case 0x14be10u: goto label_14be10;
        case 0x14be14u: goto label_14be14;
        case 0x14be18u: goto label_14be18;
        case 0x14be1cu: goto label_14be1c;
        case 0x14be20u: goto label_14be20;
        case 0x14be24u: goto label_14be24;
        case 0x14be28u: goto label_14be28;
        case 0x14be2cu: goto label_14be2c;
        case 0x14be30u: goto label_14be30;
        case 0x14be34u: goto label_14be34;
        case 0x14be38u: goto label_14be38;
        case 0x14be3cu: goto label_14be3c;
        case 0x14be40u: goto label_14be40;
        case 0x14be44u: goto label_14be44;
        case 0x14be48u: goto label_14be48;
        case 0x14be4cu: goto label_14be4c;
        case 0x14be50u: goto label_14be50;
        case 0x14be54u: goto label_14be54;
        case 0x14be58u: goto label_14be58;
        case 0x14be5cu: goto label_14be5c;
        case 0x14be60u: goto label_14be60;
        case 0x14be64u: goto label_14be64;
        case 0x14be68u: goto label_14be68;
        case 0x14be6cu: goto label_14be6c;
        case 0x14be70u: goto label_14be70;
        case 0x14be74u: goto label_14be74;
        case 0x14be78u: goto label_14be78;
        case 0x14be7cu: goto label_14be7c;
        case 0x14be80u: goto label_14be80;
        case 0x14be84u: goto label_14be84;
        case 0x14be88u: goto label_14be88;
        case 0x14be8cu: goto label_14be8c;
        case 0x14be90u: goto label_14be90;
        case 0x14be94u: goto label_14be94;
        case 0x14be98u: goto label_14be98;
        case 0x14be9cu: goto label_14be9c;
        case 0x14bea0u: goto label_14bea0;
        case 0x14bea4u: goto label_14bea4;
        case 0x14bea8u: goto label_14bea8;
        case 0x14beacu: goto label_14beac;
        case 0x14beb0u: goto label_14beb0;
        case 0x14beb4u: goto label_14beb4;
        case 0x14beb8u: goto label_14beb8;
        case 0x14bebcu: goto label_14bebc;
        case 0x14bec0u: goto label_14bec0;
        case 0x14bec4u: goto label_14bec4;
        case 0x14bec8u: goto label_14bec8;
        case 0x14beccu: goto label_14becc;
        case 0x14bed0u: goto label_14bed0;
        case 0x14bed4u: goto label_14bed4;
        case 0x14bed8u: goto label_14bed8;
        case 0x14bedcu: goto label_14bedc;
        case 0x14bee0u: goto label_14bee0;
        case 0x14bee4u: goto label_14bee4;
        case 0x14bee8u: goto label_14bee8;
        case 0x14beecu: goto label_14beec;
        case 0x14bef0u: goto label_14bef0;
        case 0x14bef4u: goto label_14bef4;
        case 0x14bef8u: goto label_14bef8;
        case 0x14befcu: goto label_14befc;
        case 0x14bf00u: goto label_14bf00;
        case 0x14bf04u: goto label_14bf04;
        case 0x14bf08u: goto label_14bf08;
        case 0x14bf0cu: goto label_14bf0c;
        case 0x14bf10u: goto label_14bf10;
        case 0x14bf14u: goto label_14bf14;
        case 0x14bf18u: goto label_14bf18;
        case 0x14bf1cu: goto label_14bf1c;
        case 0x14bf20u: goto label_14bf20;
        case 0x14bf24u: goto label_14bf24;
        case 0x14bf28u: goto label_14bf28;
        case 0x14bf2cu: goto label_14bf2c;
        case 0x14bf30u: goto label_14bf30;
        case 0x14bf34u: goto label_14bf34;
        case 0x14bf38u: goto label_14bf38;
        case 0x14bf3cu: goto label_14bf3c;
        case 0x14bf40u: goto label_14bf40;
        case 0x14bf44u: goto label_14bf44;
        case 0x14bf48u: goto label_14bf48;
        case 0x14bf4cu: goto label_14bf4c;
        case 0x14bf50u: goto label_14bf50;
        case 0x14bf54u: goto label_14bf54;
        case 0x14bf58u: goto label_14bf58;
        case 0x14bf5cu: goto label_14bf5c;
        case 0x14bf60u: goto label_14bf60;
        case 0x14bf64u: goto label_14bf64;
        case 0x14bf68u: goto label_14bf68;
        case 0x14bf6cu: goto label_14bf6c;
        case 0x14bf70u: goto label_14bf70;
        case 0x14bf74u: goto label_14bf74;
        case 0x14bf78u: goto label_14bf78;
        case 0x14bf7cu: goto label_14bf7c;
        case 0x14bf80u: goto label_14bf80;
        case 0x14bf84u: goto label_14bf84;
        case 0x14bf88u: goto label_14bf88;
        case 0x14bf8cu: goto label_14bf8c;
        case 0x14bf90u: goto label_14bf90;
        case 0x14bf94u: goto label_14bf94;
        case 0x14bf98u: goto label_14bf98;
        case 0x14bf9cu: goto label_14bf9c;
        case 0x14bfa0u: goto label_14bfa0;
        case 0x14bfa4u: goto label_14bfa4;
        case 0x14bfa8u: goto label_14bfa8;
        case 0x14bfacu: goto label_14bfac;
        case 0x14bfb0u: goto label_14bfb0;
        case 0x14bfb4u: goto label_14bfb4;
        case 0x14bfb8u: goto label_14bfb8;
        case 0x14bfbcu: goto label_14bfbc;
        case 0x14bfc0u: goto label_14bfc0;
        case 0x14bfc4u: goto label_14bfc4;
        case 0x14bfc8u: goto label_14bfc8;
        case 0x14bfccu: goto label_14bfcc;
        case 0x14bfd0u: goto label_14bfd0;
        case 0x14bfd4u: goto label_14bfd4;
        case 0x14bfd8u: goto label_14bfd8;
        case 0x14bfdcu: goto label_14bfdc;
        case 0x14bfe0u: goto label_14bfe0;
        case 0x14bfe4u: goto label_14bfe4;
        case 0x14bfe8u: goto label_14bfe8;
        case 0x14bfecu: goto label_14bfec;
        case 0x14bff0u: goto label_14bff0;
        case 0x14bff4u: goto label_14bff4;
        case 0x14bff8u: goto label_14bff8;
        case 0x14bffcu: goto label_14bffc;
        case 0x14c000u: goto label_14c000;
        case 0x14c004u: goto label_14c004;
        case 0x14c008u: goto label_14c008;
        case 0x14c00cu: goto label_14c00c;
        case 0x14c010u: goto label_14c010;
        case 0x14c014u: goto label_14c014;
        case 0x14c018u: goto label_14c018;
        case 0x14c01cu: goto label_14c01c;
        case 0x14c020u: goto label_14c020;
        case 0x14c024u: goto label_14c024;
        case 0x14c028u: goto label_14c028;
        case 0x14c02cu: goto label_14c02c;
        case 0x14c030u: goto label_14c030;
        case 0x14c034u: goto label_14c034;
        case 0x14c038u: goto label_14c038;
        case 0x14c03cu: goto label_14c03c;
        case 0x14c040u: goto label_14c040;
        case 0x14c044u: goto label_14c044;
        case 0x14c048u: goto label_14c048;
        case 0x14c04cu: goto label_14c04c;
        case 0x14c050u: goto label_14c050;
        case 0x14c054u: goto label_14c054;
        case 0x14c058u: goto label_14c058;
        case 0x14c05cu: goto label_14c05c;
        case 0x14c060u: goto label_14c060;
        case 0x14c064u: goto label_14c064;
        case 0x14c068u: goto label_14c068;
        case 0x14c06cu: goto label_14c06c;
        case 0x14c070u: goto label_14c070;
        case 0x14c074u: goto label_14c074;
        case 0x14c078u: goto label_14c078;
        case 0x14c07cu: goto label_14c07c;
        case 0x14c080u: goto label_14c080;
        case 0x14c084u: goto label_14c084;
        case 0x14c088u: goto label_14c088;
        case 0x14c08cu: goto label_14c08c;
        case 0x14c090u: goto label_14c090;
        case 0x14c094u: goto label_14c094;
        case 0x14c098u: goto label_14c098;
        case 0x14c09cu: goto label_14c09c;
        case 0x14c0a0u: goto label_14c0a0;
        case 0x14c0a4u: goto label_14c0a4;
        case 0x14c0a8u: goto label_14c0a8;
        case 0x14c0acu: goto label_14c0ac;
        case 0x14c0b0u: goto label_14c0b0;
        case 0x14c0b4u: goto label_14c0b4;
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0bcu: goto label_14c0bc;
        case 0x14c0c0u: goto label_14c0c0;
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0c8u: goto label_14c0c8;
        case 0x14c0ccu: goto label_14c0cc;
        case 0x14c0d0u: goto label_14c0d0;
        case 0x14c0d4u: goto label_14c0d4;
        case 0x14c0d8u: goto label_14c0d8;
        case 0x14c0dcu: goto label_14c0dc;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c0e4u: goto label_14c0e4;
        case 0x14c0e8u: goto label_14c0e8;
        case 0x14c0ecu: goto label_14c0ec;
        case 0x14c0f0u: goto label_14c0f0;
        case 0x14c0f4u: goto label_14c0f4;
        case 0x14c0f8u: goto label_14c0f8;
        case 0x14c0fcu: goto label_14c0fc;
        case 0x14c100u: goto label_14c100;
        case 0x14c104u: goto label_14c104;
        case 0x14c108u: goto label_14c108;
        case 0x14c10cu: goto label_14c10c;
        case 0x14c110u: goto label_14c110;
        case 0x14c114u: goto label_14c114;
        case 0x14c118u: goto label_14c118;
        case 0x14c11cu: goto label_14c11c;
        case 0x14c120u: goto label_14c120;
        case 0x14c124u: goto label_14c124;
        case 0x14c128u: goto label_14c128;
        case 0x14c12cu: goto label_14c12c;
        case 0x14c130u: goto label_14c130;
        case 0x14c134u: goto label_14c134;
        case 0x14c138u: goto label_14c138;
        case 0x14c13cu: goto label_14c13c;
        case 0x14c140u: goto label_14c140;
        case 0x14c144u: goto label_14c144;
        case 0x14c148u: goto label_14c148;
        case 0x14c14cu: goto label_14c14c;
        case 0x14c150u: goto label_14c150;
        case 0x14c154u: goto label_14c154;
        case 0x14c158u: goto label_14c158;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c160u: goto label_14c160;
        case 0x14c164u: goto label_14c164;
        case 0x14c168u: goto label_14c168;
        case 0x14c16cu: goto label_14c16c;
        case 0x14c170u: goto label_14c170;
        case 0x14c174u: goto label_14c174;
        case 0x14c178u: goto label_14c178;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c180u: goto label_14c180;
        case 0x14c184u: goto label_14c184;
        case 0x14c188u: goto label_14c188;
        case 0x14c18cu: goto label_14c18c;
        case 0x14c190u: goto label_14c190;
        case 0x14c194u: goto label_14c194;
        case 0x14c198u: goto label_14c198;
        case 0x14c19cu: goto label_14c19c;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1a8u: goto label_14c1a8;
        case 0x14c1acu: goto label_14c1ac;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b4u: goto label_14c1b4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1bcu: goto label_14c1bc;
        case 0x14c1c0u: goto label_14c1c0;
        case 0x14c1c4u: goto label_14c1c4;
        case 0x14c1c8u: goto label_14c1c8;
        case 0x14c1ccu: goto label_14c1cc;
        case 0x14c1d0u: goto label_14c1d0;
        case 0x14c1d4u: goto label_14c1d4;
        case 0x14c1d8u: goto label_14c1d8;
        case 0x14c1dcu: goto label_14c1dc;
        case 0x14c1e0u: goto label_14c1e0;
        case 0x14c1e4u: goto label_14c1e4;
        case 0x14c1e8u: goto label_14c1e8;
        case 0x14c1ecu: goto label_14c1ec;
        case 0x14c1f0u: goto label_14c1f0;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c1fcu: goto label_14c1fc;
        case 0x14c200u: goto label_14c200;
        case 0x14c204u: goto label_14c204;
        case 0x14c208u: goto label_14c208;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c210u: goto label_14c210;
        case 0x14c214u: goto label_14c214;
        case 0x14c218u: goto label_14c218;
        case 0x14c21cu: goto label_14c21c;
        case 0x14c220u: goto label_14c220;
        case 0x14c224u: goto label_14c224;
        case 0x14c228u: goto label_14c228;
        case 0x14c22cu: goto label_14c22c;
        case 0x14c230u: goto label_14c230;
        case 0x14c234u: goto label_14c234;
        case 0x14c238u: goto label_14c238;
        case 0x14c23cu: goto label_14c23c;
        case 0x14c240u: goto label_14c240;
        case 0x14c244u: goto label_14c244;
        case 0x14c248u: goto label_14c248;
        case 0x14c24cu: goto label_14c24c;
        case 0x14c250u: goto label_14c250;
        case 0x14c254u: goto label_14c254;
        case 0x14c258u: goto label_14c258;
        case 0x14c25cu: goto label_14c25c;
        case 0x14c260u: goto label_14c260;
        case 0x14c264u: goto label_14c264;
        case 0x14c268u: goto label_14c268;
        case 0x14c26cu: goto label_14c26c;
        case 0x14c270u: goto label_14c270;
        case 0x14c274u: goto label_14c274;
        case 0x14c278u: goto label_14c278;
        case 0x14c27cu: goto label_14c27c;
        case 0x14c280u: goto label_14c280;
        case 0x14c284u: goto label_14c284;
        case 0x14c288u: goto label_14c288;
        case 0x14c28cu: goto label_14c28c;
        case 0x14c290u: goto label_14c290;
        case 0x14c294u: goto label_14c294;
        case 0x14c298u: goto label_14c298;
        case 0x14c29cu: goto label_14c29c;
        case 0x14c2a0u: goto label_14c2a0;
        case 0x14c2a4u: goto label_14c2a4;
        case 0x14c2a8u: goto label_14c2a8;
        case 0x14c2acu: goto label_14c2ac;
        case 0x14c2b0u: goto label_14c2b0;
        case 0x14c2b4u: goto label_14c2b4;
        case 0x14c2b8u: goto label_14c2b8;
        case 0x14c2bcu: goto label_14c2bc;
        case 0x14c2c0u: goto label_14c2c0;
        case 0x14c2c4u: goto label_14c2c4;
        case 0x14c2c8u: goto label_14c2c8;
        case 0x14c2ccu: goto label_14c2cc;
        case 0x14c2d0u: goto label_14c2d0;
        case 0x14c2d4u: goto label_14c2d4;
        case 0x14c2d8u: goto label_14c2d8;
        case 0x14c2dcu: goto label_14c2dc;
        case 0x14c2e0u: goto label_14c2e0;
        case 0x14c2e4u: goto label_14c2e4;
        case 0x14c2e8u: goto label_14c2e8;
        case 0x14c2ecu: goto label_14c2ec;
        case 0x14c2f0u: goto label_14c2f0;
        case 0x14c2f4u: goto label_14c2f4;
        case 0x14c2f8u: goto label_14c2f8;
        case 0x14c2fcu: goto label_14c2fc;
        case 0x14c300u: goto label_14c300;
        case 0x14c304u: goto label_14c304;
        case 0x14c308u: goto label_14c308;
        case 0x14c30cu: goto label_14c30c;
        case 0x14c310u: goto label_14c310;
        case 0x14c314u: goto label_14c314;
        case 0x14c318u: goto label_14c318;
        case 0x14c31cu: goto label_14c31c;
        case 0x14c320u: goto label_14c320;
        case 0x14c324u: goto label_14c324;
        case 0x14c328u: goto label_14c328;
        case 0x14c32cu: goto label_14c32c;
        case 0x14c330u: goto label_14c330;
        case 0x14c334u: goto label_14c334;
        case 0x14c338u: goto label_14c338;
        case 0x14c33cu: goto label_14c33c;
        case 0x14c340u: goto label_14c340;
        case 0x14c344u: goto label_14c344;
        case 0x14c348u: goto label_14c348;
        case 0x14c34cu: goto label_14c34c;
        case 0x14c350u: goto label_14c350;
        case 0x14c354u: goto label_14c354;
        case 0x14c358u: goto label_14c358;
        case 0x14c35cu: goto label_14c35c;
        case 0x14c360u: goto label_14c360;
        case 0x14c364u: goto label_14c364;
        case 0x14c368u: goto label_14c368;
        case 0x14c36cu: goto label_14c36c;
        case 0x14c370u: goto label_14c370;
        case 0x14c374u: goto label_14c374;
        case 0x14c378u: goto label_14c378;
        case 0x14c37cu: goto label_14c37c;
        case 0x14c380u: goto label_14c380;
        case 0x14c384u: goto label_14c384;
        case 0x14c388u: goto label_14c388;
        case 0x14c38cu: goto label_14c38c;
        default: break;
    }

    ctx->pc = 0x14bd20u;

label_14bd20:
    // 0x14bd20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x14bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_14bd24:
    // 0x14bd24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_14bd28:
    // 0x14bd28: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_14bd2c:
    // 0x14bd2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_14bd30:
    // 0x14bd30: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x14bd30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14bd34:
    // 0x14bd34: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_14bd38:
    // 0x14bd38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_14bd3c:
    // 0x14bd3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14bd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14bd40:
    // 0x14bd40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14bd44:
    // 0x14bd44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14bd48:
    // 0x14bd48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14bd48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bd4c:
    // 0x14bd4c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14bd4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14bd50:
    // 0x14bd50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14bd50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14bd54:
    // 0x14bd54: 0xc7818070  lwc1        $f1, -0x7F90($gp)
    ctx->pc = 0x14bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bd58:
    // 0x14bd58: 0x8f828158  lw          $v0, -0x7EA8($gp)
    ctx->pc = 0x14bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_14bd5c:
    // 0x14bd5c: 0xc7808074  lwc1        $f0, -0x7F8C($gp)
    ctx->pc = 0x14bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14bd60:
    // 0x14bd60: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x14bd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_14bd64:
    // 0x14bd64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_14bd68:
    if (ctx->pc == 0x14BD68u) {
        ctx->pc = 0x14BD68u;
            // 0x14bd68: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x14BD6Cu;
        goto label_14bd6c;
    }
    ctx->pc = 0x14BD64u;
    {
        const bool branch_taken_0x14bd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD64u;
            // 0x14bd68: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd64) {
            ctx->pc = 0x14BD74u;
            goto label_14bd74;
        }
    }
    ctx->pc = 0x14BD6Cu;
label_14bd6c:
    // 0x14bd6c: 0x1000017a  b           . + 4 + (0x17A << 2)
label_14bd70:
    if (ctx->pc == 0x14BD70u) {
        ctx->pc = 0x14BD70u;
            // 0x14bd70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x14BD74u;
        goto label_14bd74;
    }
    ctx->pc = 0x14BD6Cu;
    {
        const bool branch_taken_0x14bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD6Cu;
            // 0x14bd70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd6c) {
            ctx->pc = 0x14C358u;
            goto label_14c358;
        }
    }
    ctx->pc = 0x14BD74u;
label_14bd74:
    // 0x14bd74: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x14bd74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14bd78:
    // 0x14bd78: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_14bd7c:
    if (ctx->pc == 0x14BD7Cu) {
        ctx->pc = 0x14BD7Cu;
            // 0x14bd7c: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->pc = 0x14BD80u;
        goto label_14bd80;
    }
    ctx->pc = 0x14BD78u;
    {
        const bool branch_taken_0x14bd78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd78) {
            ctx->pc = 0x14BD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD78u;
            // 0x14bd7c: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BD88u;
            goto label_14bd88;
        }
    }
    ctx->pc = 0x14BD80u;
label_14bd80:
    // 0x14bd80: 0x10000175  b           . + 4 + (0x175 << 2)
label_14bd84:
    if (ctx->pc == 0x14BD84u) {
        ctx->pc = 0x14BD84u;
            // 0x14bd84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x14BD88u;
        goto label_14bd88;
    }
    ctx->pc = 0x14BD80u;
    {
        const bool branch_taken_0x14bd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD80u;
            // 0x14bd84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd80) {
            ctx->pc = 0x14C358u;
            goto label_14c358;
        }
    }
    ctx->pc = 0x14BD88u;
label_14bd88:
    // 0x14bd88: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x14bd88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_14bd8c:
    // 0x14bd8c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x14bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_14bd90:
    // 0x14bd90: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_14bd94:
    if (ctx->pc == 0x14BD94u) {
        ctx->pc = 0x14BD94u;
            // 0x14bd94: 0xafa500cc  sw          $a1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
        ctx->pc = 0x14BD98u;
        goto label_14bd98;
    }
    ctx->pc = 0x14BD90u;
    {
        const bool branch_taken_0x14bd90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD90u;
            // 0x14bd94: 0xafa500cc  sw          $a1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd90) {
            ctx->pc = 0x14BD9Cu;
            goto label_14bd9c;
        }
    }
    ctx->pc = 0x14BD98u;
label_14bd98:
    // 0x14bd98: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x14bd98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd9c:
    // 0x14bd9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14bda0:
    // 0x14bda0: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x14bda0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
label_14bda4:
    // 0x14bda4: 0x8f89819c  lw          $t1, -0x7E64($gp)
    ctx->pc = 0x14bda4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_14bda8:
    // 0x14bda8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_14bdac:
    // 0x14bdac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_14bdb0:
    // 0x14bdb0: 0x8c4a5808  lw          $t2, 0x5808($v0)
    ctx->pc = 0x14bdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22536)));
label_14bdb4:
    // 0x14bdb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14bdb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bdb8:
    // 0x14bdb8: 0x27af00c8  addiu       $t7, $sp, 0xC8
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_14bdbc:
    // 0x14bdbc: 0x27ae00b8  addiu       $t6, $sp, 0xB8
    ctx->pc = 0x14bdbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_14bdc0:
    // 0x14bdc0: 0x25ad5840  addiu       $t5, $t5, 0x5840
    ctx->pc = 0x14bdc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 22592));
label_14bdc4:
    // 0x14bdc4: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x14bdc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14bdc8:
    // 0x14bdc8: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x14bdc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14bdcc:
    // 0x14bdcc: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x14bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14bdd0:
    // 0x14bdd0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x14bdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14bdd4:
    // 0x14bdd4: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14bdd8:
    // 0x14bdd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bddc:
    // 0x14bddc: 0x24a54f10  addiu       $a1, $a1, 0x4F10
    ctx->pc = 0x14bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20240));
label_14bde0:
    // 0x14bde0: 0x24844f40  addiu       $a0, $a0, 0x4F40
    ctx->pc = 0x14bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
label_14bde4:
    // 0x14bde4: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x14bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_14bde8:
    // 0x14bde8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x14bde8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_14bdec:
    // 0x14bdec: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14bdf0:
    // 0x14bdf0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_14bdf4:
    // 0x14bdf4: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_14bdf8:
    // 0x14bdf8: 0x2139821  addu        $s3, $s0, $s3
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_14bdfc:
    // 0x14bdfc: 0x11400012  beqz        $t2, . + 4 + (0x12 << 2)
label_14be00:
    if (ctx->pc == 0x14BE00u) {
        ctx->pc = 0x14BE00u;
            // 0x14be00: 0xadd30000  sw          $s3, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x14BE04u;
        goto label_14be04;
    }
    ctx->pc = 0x14BDFCu;
    {
        const bool branch_taken_0x14bdfc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDFCu;
            // 0x14be00: 0xadd30000  sw          $s3, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdfc) {
            ctx->pc = 0x14BE48u;
            goto label_14be48;
        }
    }
    ctx->pc = 0x14BE04u;
label_14be04:
    // 0x14be04: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_14be08:
    // 0x14be08: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x14be08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_14be0c:
    // 0x14be0c: 0x1048000c  beq         $v0, $t0, . + 4 + (0xC << 2)
label_14be10:
    if (ctx->pc == 0x14BE10u) {
        ctx->pc = 0x14BE14u;
        goto label_14be14;
    }
    ctx->pc = 0x14BE0Cu;
    {
        const bool branch_taken_0x14be0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x14be0c) {
            ctx->pc = 0x14BE40u;
            goto label_14be40;
        }
    }
    ctx->pc = 0x14BE14u;
label_14be14:
    // 0x14be14: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
label_14be18:
    if (ctx->pc == 0x14BE18u) {
        ctx->pc = 0x14BE1Cu;
        goto label_14be1c;
    }
    ctx->pc = 0x14BE14u;
    {
        const bool branch_taken_0x14be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x14be14) {
            ctx->pc = 0x14BE38u;
            goto label_14be38;
        }
    }
    ctx->pc = 0x14BE1Cu;
label_14be1c:
    // 0x14be1c: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
label_14be20:
    if (ctx->pc == 0x14BE20u) {
        ctx->pc = 0x14BE24u;
        goto label_14be24;
    }
    ctx->pc = 0x14BE1Cu;
    {
        const bool branch_taken_0x14be1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x14be1c) {
            ctx->pc = 0x14BE30u;
            goto label_14be30;
        }
    }
    ctx->pc = 0x14BE24u;
label_14be24:
    // 0x14be24: 0x10000006  b           . + 4 + (0x6 << 2)
label_14be28:
    if (ctx->pc == 0x14BE28u) {
        ctx->pc = 0x14BE2Cu;
        goto label_14be2c;
    }
    ctx->pc = 0x14BE24u;
    {
        const bool branch_taken_0x14be24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14be24) {
            ctx->pc = 0x14BE40u;
            goto label_14be40;
        }
    }
    ctx->pc = 0x14BE2Cu;
label_14be2c:
    // 0x14be2c: 0x0  nop
    ctx->pc = 0x14be2cu;
    // NOP
label_14be30:
    // 0x14be30: 0x10000019  b           . + 4 + (0x19 << 2)
label_14be34:
    if (ctx->pc == 0x14BE34u) {
        ctx->pc = 0x14BE34u;
            // 0x14be34: 0xadc50000  sw          $a1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x14BE38u;
        goto label_14be38;
    }
    ctx->pc = 0x14BE30u;
    {
        const bool branch_taken_0x14be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE30u;
            // 0x14be34: 0xadc50000  sw          $a1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be30) {
            ctx->pc = 0x14BE98u;
            goto label_14be98;
        }
    }
    ctx->pc = 0x14BE38u;
label_14be38:
    // 0x14be38: 0x10000017  b           . + 4 + (0x17 << 2)
label_14be3c:
    if (ctx->pc == 0x14BE3Cu) {
        ctx->pc = 0x14BE3Cu;
            // 0x14be3c: 0xadc40000  sw          $a0, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x14BE40u;
        goto label_14be40;
    }
    ctx->pc = 0x14BE38u;
    {
        const bool branch_taken_0x14be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE38u;
            // 0x14be3c: 0xadc40000  sw          $a0, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be38) {
            ctx->pc = 0x14BE98u;
            goto label_14be98;
        }
    }
    ctx->pc = 0x14BE40u;
label_14be40:
    // 0x14be40: 0x10000015  b           . + 4 + (0x15 << 2)
label_14be44:
    if (ctx->pc == 0x14BE44u) {
        ctx->pc = 0x14BE44u;
            // 0x14be44: 0xadc50000  sw          $a1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x14BE48u;
        goto label_14be48;
    }
    ctx->pc = 0x14BE40u;
    {
        const bool branch_taken_0x14be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE40u;
            // 0x14be44: 0xadc50000  sw          $a1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be40) {
            ctx->pc = 0x14BE98u;
            goto label_14be98;
        }
    }
    ctx->pc = 0x14BE48u;
label_14be48:
    // 0x14be48: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
label_14be4c:
    if (ctx->pc == 0x14BE4Cu) {
        ctx->pc = 0x14BE50u;
        goto label_14be50;
    }
    ctx->pc = 0x14BE48u;
    {
        const bool branch_taken_0x14be48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x14be48) {
            ctx->pc = 0x14BE70u;
            goto label_14be70;
        }
    }
    ctx->pc = 0x14BE50u;
label_14be50:
    // 0x14be50: 0x8db40014  lw          $s4, 0x14($t5)
    ctx->pc = 0x14be50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
label_14be54:
    // 0x14be54: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x14be54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14be58:
    // 0x14be58: 0x12930003  beq         $s4, $s3, . + 4 + (0x3 << 2)
label_14be5c:
    if (ctx->pc == 0x14BE5Cu) {
        ctx->pc = 0x14BE60u;
        goto label_14be60;
    }
    ctx->pc = 0x14BE58u;
    {
        const bool branch_taken_0x14be58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        if (branch_taken_0x14be58) {
            ctx->pc = 0x14BE68u;
            goto label_14be68;
        }
    }
    ctx->pc = 0x14BE60u;
label_14be60:
    // 0x14be60: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x14be60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14be64:
    // 0x14be64: 0x0  nop
    ctx->pc = 0x14be64u;
    // NOP
label_14be68:
    // 0x14be68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14be6c:
    // 0x14be6c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x14be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_14be70:
    // 0x14be70: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x14be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_14be74:
    // 0x14be74: 0x94540006  lhu         $s4, 0x6($v0)
    ctx->pc = 0x14be74u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_14be78:
    // 0x14be78: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x14be78u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_14be7c:
    // 0x14be7c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x14be7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_14be80:
    // 0x14be80: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x14be80u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_14be84:
    // 0x14be84: 0x2139821  addu        $s3, $s0, $s3
    ctx->pc = 0x14be84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_14be88:
    // 0x14be88: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x14be88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
label_14be8c:
    // 0x14be8c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x14be8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_14be90:
    // 0x14be90: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x14be90u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
label_14be94:
    // 0x14be94: 0x0  nop
    ctx->pc = 0x14be94u;
    // NOP
label_14be98:
    // 0x14be98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14be98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14be9c:
    // 0x14be9c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x14be9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14bea0:
    // 0x14bea0: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x14bea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_14bea4:
    // 0x14bea4: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x14bea4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_14bea8:
    // 0x14bea8: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x14bea8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_14beac:
    // 0x14beac: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x14beacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_14beb0:
    // 0x14beb0: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_14beb4:
    if (ctx->pc == 0x14BEB4u) {
        ctx->pc = 0x14BEB4u;
            // 0x14beb4: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->pc = 0x14BEB8u;
        goto label_14beb8;
    }
    ctx->pc = 0x14BEB0u;
    {
        const bool branch_taken_0x14beb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEB0u;
            // 0x14beb4: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14beb0) {
            ctx->pc = 0x14BDE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14bde4;
        }
    }
    ctx->pc = 0x14BEB8u;
label_14beb8:
    // 0x14beb8: 0x8f82819c  lw          $v0, -0x7E64($gp)
    ctx->pc = 0x14beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_14bebc:
    // 0x14bebc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_14bec0:
    if (ctx->pc == 0x14BEC0u) {
        ctx->pc = 0x14BEC0u;
            // 0x14bec0: 0x8fa600cc  lw          $a2, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->pc = 0x14BEC4u;
        goto label_14bec4;
    }
    ctx->pc = 0x14BEBCu;
    {
        const bool branch_taken_0x14bebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bebc) {
            ctx->pc = 0x14BEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEBCu;
            // 0x14bec0: 0x8fa600cc  lw          $a2, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BF10u;
            goto label_14bf10;
        }
    }
    ctx->pc = 0x14BEC4u;
label_14bec4:
    // 0x14bec4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_14bec8:
    if (ctx->pc == 0x14BEC8u) {
        ctx->pc = 0x14BECCu;
        goto label_14becc;
    }
    ctx->pc = 0x14BEC4u;
    {
        const bool branch_taken_0x14bec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bec4) {
            ctx->pc = 0x14BF0Cu;
            goto label_14bf0c;
        }
    }
    ctx->pc = 0x14BECCu;
label_14becc:
    // 0x14becc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14bed0:
    // 0x14bed0: 0x40f809  jalr        $v0
label_14bed4:
    if (ctx->pc == 0x14BED4u) {
        ctx->pc = 0x14BED4u;
            // 0x14bed4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14BED8u;
        goto label_14bed8;
    }
    ctx->pc = 0x14BED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14BED8u);
        ctx->pc = 0x14BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BED0u;
            // 0x14bed4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14BED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14BED8u; }
            if (ctx->pc != 0x14BED8u) { return; }
        }
        }
    }
    ctx->pc = 0x14BED8u;
label_14bed8:
    // 0x14bed8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_14bedc:
    if (ctx->pc == 0x14BEDCu) {
        ctx->pc = 0x14BEDCu;
            // 0x14bedc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14BEE0u;
        goto label_14bee0;
    }
    ctx->pc = 0x14BED8u;
    {
        const bool branch_taken_0x14bed8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14bed8) {
            ctx->pc = 0x14BEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BED8u;
            // 0x14bedc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BEE8u;
            goto label_14bee8;
        }
    }
    ctx->pc = 0x14BEE0u;
label_14bee0:
    // 0x14bee0: 0x1000011e  b           . + 4 + (0x11E << 2)
label_14bee4:
    if (ctx->pc == 0x14BEE4u) {
        ctx->pc = 0x14BEE4u;
            // 0x14bee4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x14BEE8u;
        goto label_14bee8;
    }
    ctx->pc = 0x14BEE0u;
    {
        const bool branch_taken_0x14bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEE0u;
            // 0x14bee4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bee0) {
            ctx->pc = 0x14C35Cu;
            goto label_14c35c;
        }
    }
    ctx->pc = 0x14BEE8u;
label_14bee8:
    // 0x14bee8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_14beec:
    if (ctx->pc == 0x14BEECu) {
        ctx->pc = 0x14BEF0u;
        goto label_14bef0;
    }
    ctx->pc = 0x14BEE8u;
    {
        const bool branch_taken_0x14bee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bee8) {
            ctx->pc = 0x14BF0Cu;
            goto label_14bf0c;
        }
    }
    ctx->pc = 0x14BEF0u;
label_14bef0:
    // 0x14bef0: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14bef4:
    // 0x14bef4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x14bef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_14bef8:
    // 0x14bef8: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14befc:
    // 0x14befc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14befcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bf00:
    // 0x14bf00: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14bf04:
    // 0x14bf04: 0xc057540  jal         func_15D500
label_14bf08:
    if (ctx->pc == 0x14BF08u) {
        ctx->pc = 0x14BF08u;
            // 0x14bf08: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x14BF0Cu;
        goto label_14bf0c;
    }
    ctx->pc = 0x14BF04u;
    SET_GPR_U32(ctx, 31, 0x14BF0Cu);
    ctx->pc = 0x14BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF04u;
            // 0x14bf08: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF0Cu; }
        if (ctx->pc != 0x14BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF0Cu; }
        if (ctx->pc != 0x14BF0Cu) { return; }
    }
    ctx->pc = 0x14BF0Cu;
label_14bf0c:
    // 0x14bf0c: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_14bf10:
    // 0x14bf10: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14bf14:
    // 0x14bf14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14bf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_14bf18:
    // 0x14bf18: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14bf1c:
    // 0x14bf1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14bf20:
    // 0x14bf20: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14bf24:
    // 0x14bf24: 0x9cc70010  lwu         $a3, 0x10($a2)
    ctx->pc = 0x14bf24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_14bf28:
    // 0x14bf28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14bf2c:
    // 0x14bf2c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x14bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14bf30:
    // 0x14bf30: 0xaf8381d4  sw          $v1, -0x7E2C($gp)
    ctx->pc = 0x14bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 3));
label_14bf34:
    // 0x14bf34: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14bf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_14bf38:
    // 0x14bf38: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x14bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
label_14bf3c:
    // 0x14bf3c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x14bf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_14bf40:
    // 0x14bf40: 0xc057540  jal         func_15D500
label_14bf44:
    if (ctx->pc == 0x14BF44u) {
        ctx->pc = 0x14BF44u;
            // 0x14bf44: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x14BF48u;
        goto label_14bf48;
    }
    ctx->pc = 0x14BF40u;
    SET_GPR_U32(ctx, 31, 0x14BF48u);
    ctx->pc = 0x14BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF40u;
            // 0x14bf44: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF48u; }
        if (ctx->pc != 0x14BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF48u; }
        if (ctx->pc != 0x14BF48u) { return; }
    }
    ctx->pc = 0x14BF48u;
label_14bf48:
    // 0x14bf48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_14bf4c:
    // 0x14bf4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14bf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bf50:
    // 0x14bf50: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x14bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_14bf54:
    // 0x14bf54: 0x27b400c8  addiu       $s4, $sp, 0xC8
    ctx->pc = 0x14bf54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_14bf58:
    // 0x14bf58: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_14bf5c:
    // 0x14bf5c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14bf60:
    // 0x14bf60: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x14bf60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_14bf64:
    // 0x14bf64: 0xdc440018  ld          $a0, 0x18($v0)
    ctx->pc = 0x14bf64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_14bf68:
    // 0x14bf68: 0xffa500a0  sd          $a1, 0xA0($sp)
    ctx->pc = 0x14bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 5));
label_14bf6c:
    // 0x14bf6c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x14bf6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_14bf70:
    // 0x14bf70: 0xffa40090  sd          $a0, 0x90($sp)
    ctx->pc = 0x14bf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 4));
label_14bf74:
    // 0x14bf74: 0xffa200a8  sd          $v0, 0xA8($sp)
    ctx->pc = 0x14bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
label_14bf78:
    // 0x14bf78: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x14bf78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_14bf7c:
    // 0x14bf7c: 0xffa20098  sd          $v0, 0x98($sp)
    ctx->pc = 0x14bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
label_14bf80:
    // 0x14bf80: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x14bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14bf84:
    // 0x14bf84: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x14bf84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_14bf88:
    // 0x14bf88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14bf8c:
    // 0x14bf8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14bf90:
    // 0x14bf90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_14bf94:
    // 0x14bf94: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_14bf98:
    // 0x14bf98: 0x8c55004c  lw          $s5, 0x4C($v0)
    ctx->pc = 0x14bf98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_14bf9c:
    // 0x14bf9c: 0xc0531d0  jal         func_14C740
label_14bfa0:
    if (ctx->pc == 0x14BFA0u) {
        ctx->pc = 0x14BFA0u;
            // 0x14bfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14BFA4u;
        goto label_14bfa4;
    }
    ctx->pc = 0x14BF9Cu;
    SET_GPR_U32(ctx, 31, 0x14BFA4u);
    ctx->pc = 0x14BFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF9Cu;
            // 0x14bfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C740u;
    if (runtime->hasFunction(0x14C740u)) {
        auto targetFn = runtime->lookupFunction(0x14C740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFA4u; }
        if (ctx->pc != 0x14BFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C740_0x14c740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFA4u; }
        if (ctx->pc != 0x14BFA4u) { return; }
    }
    ctx->pc = 0x14BFA4u;
label_14bfa4:
    // 0x14bfa4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14bfa8:
    // 0x14bfa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14bfac:
    // 0x14bfac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_14bfb0:
    // 0x14bfb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14bfb4:
    if (ctx->pc == 0x14BFB4u) {
        ctx->pc = 0x14BFB8u;
        goto label_14bfb8;
    }
    ctx->pc = 0x14BFB0u;
    {
        const bool branch_taken_0x14bfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfb0) {
            ctx->pc = 0x14BFD8u;
            goto label_14bfd8;
        }
    }
    ctx->pc = 0x14BFB8u;
label_14bfb8:
    // 0x14bfb8: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x14bfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_14bfbc:
    // 0x14bfbc: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x14bfbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_14bfc0:
    // 0x14bfc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14bfc4:
    // 0x14bfc4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_14bfc8:
    // 0x14bfc8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14bfcc:
    // 0x14bfcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14bfd0:
    // 0x14bfd0: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x14bfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
label_14bfd4:
    // 0x14bfd4: 0x0  nop
    ctx->pc = 0x14bfd4u;
    // NOP
label_14bfd8:
    // 0x14bfd8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14bfdc:
    // 0x14bfdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14bfe0:
    // 0x14bfe0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x14bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_14bfe4:
    // 0x14bfe4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_14bfe8:
    if (ctx->pc == 0x14BFE8u) {
        ctx->pc = 0x14BFECu;
        goto label_14bfec;
    }
    ctx->pc = 0x14BFE4u;
    {
        const bool branch_taken_0x14bfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bfe4) {
            ctx->pc = 0x14C040u;
            goto label_14c040;
        }
    }
    ctx->pc = 0x14BFECu;
label_14bfec:
    // 0x14bfec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x14bfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_14bff0:
    // 0x14bff0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14bff4:
    // 0x14bff4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_14bff8:
    if (ctx->pc == 0x14BFF8u) {
        ctx->pc = 0x14BFF8u;
            // 0x14bff8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x14BFFCu;
        goto label_14bffc;
    }
    ctx->pc = 0x14BFF4u;
    {
        const bool branch_taken_0x14bff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFF4u;
            // 0x14bff8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bff4) {
            ctx->pc = 0x14C018u;
            goto label_14c018;
        }
    }
    ctx->pc = 0x14BFFCu;
label_14bffc:
    // 0x14bffc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c000:
    // 0x14c000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14c004:
    if (ctx->pc == 0x14C004u) {
        ctx->pc = 0x14C008u;
        goto label_14c008;
    }
    ctx->pc = 0x14C000u;
    {
        const bool branch_taken_0x14c000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c000) {
            ctx->pc = 0x14C010u;
            goto label_14c010;
        }
    }
    ctx->pc = 0x14C008u;
label_14c008:
    // 0x14c008: 0x10000005  b           . + 4 + (0x5 << 2)
label_14c00c:
    if (ctx->pc == 0x14C00Cu) {
        ctx->pc = 0x14C010u;
        goto label_14c010;
    }
    ctx->pc = 0x14C008u;
    {
        const bool branch_taken_0x14c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c008) {
            ctx->pc = 0x14C020u;
            goto label_14c020;
        }
    }
    ctx->pc = 0x14C010u;
label_14c010:
    // 0x14c010: 0x10000003  b           . + 4 + (0x3 << 2)
label_14c014:
    if (ctx->pc == 0x14C014u) {
        ctx->pc = 0x14C014u;
            // 0x14c014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14C018u;
        goto label_14c018;
    }
    ctx->pc = 0x14C010u;
    {
        const bool branch_taken_0x14c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C010u;
            // 0x14c014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c010) {
            ctx->pc = 0x14C020u;
            goto label_14c020;
        }
    }
    ctx->pc = 0x14C018u;
label_14c018:
    // 0x14c018: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c01c:
    // 0x14c01c: 0x0  nop
    ctx->pc = 0x14c01cu;
    // NOP
label_14c020:
    // 0x14c020: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x14c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_14c024:
    // 0x14c024: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x14c024u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_14c028:
    // 0x14c028: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x14c028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_14c02c:
    // 0x14c02c: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x14c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_14c030:
    // 0x14c030: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c034:
    // 0x14c034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c038:
    // 0x14c038: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x14c038u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
label_14c03c:
    // 0x14c03c: 0x0  nop
    ctx->pc = 0x14c03cu;
    // NOP
label_14c040:
    // 0x14c040: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x14c040u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_14c044:
    // 0x14c044: 0x416fc  dsll32      $v0, $a0, 27
    ctx->pc = 0x14c044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 27));
label_14c048:
    // 0x14c048: 0x2177e  dsrl32      $v0, $v0, 29
    ctx->pc = 0x14c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 29));
label_14c04c:
    // 0x14c04c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_14c050:
    if (ctx->pc == 0x14C050u) {
        ctx->pc = 0x14C054u;
        goto label_14c054;
    }
    ctx->pc = 0x14C04Cu;
    {
        const bool branch_taken_0x14c04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c04c) {
            ctx->pc = 0x14C0C0u;
            goto label_14c0c0;
        }
    }
    ctx->pc = 0x14C054u;
label_14c054:
    // 0x14c054: 0x32a21000  andi        $v0, $s5, 0x1000
    ctx->pc = 0x14c054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
label_14c058:
    // 0x14c058: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_14c05c:
    if (ctx->pc == 0x14C05Cu) {
        ctx->pc = 0x14C060u;
        goto label_14c060;
    }
    ctx->pc = 0x14C058u;
    {
        const bool branch_taken_0x14c058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c058) {
            ctx->pc = 0x14C0C0u;
            goto label_14c0c0;
        }
    }
    ctx->pc = 0x14C060u;
label_14c060:
    // 0x14c060: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14c064:
    // 0x14c064: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_14c068:
    // 0x14c068: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x14c068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c06c:
    // 0x14c06c: 0x2404ffe7  addiu       $a0, $zero, -0x19
    ctx->pc = 0x14c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_14c070:
    // 0x14c070: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x14c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_14c074:
    // 0x14c074: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x14c074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14c078:
    // 0x14c078: 0x94650014  lhu         $a1, 0x14($v1)
    ctx->pc = 0x14c078u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_14c07c:
    // 0x14c07c: 0x30e70040  andi        $a3, $a3, 0x40
    ctx->pc = 0x14c07cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_14c080:
    // 0x14c080: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x14c080u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
label_14c084:
    // 0x14c084: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x14c084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_14c088:
    // 0x14c088: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x14c088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_14c08c:
    // 0x14c08c: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x14c08cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_14c090:
    // 0x14c090: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x14c090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_14c094:
    // 0x14c094: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14c094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_14c098:
    // 0x14c098: 0xa2460000  sb          $a2, 0x0($s2)
    ctx->pc = 0x14c098u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 6));
label_14c09c:
    // 0x14c09c: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x14c09cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_14c0a0:
    // 0x14c0a0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x14c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_14c0a4:
    // 0x14c0a4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x14c0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_14c0a8:
    // 0x14c0a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x14c0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_14c0ac:
    // 0x14c0ac: 0xa2440002  sb          $a0, 0x2($s2)
    ctx->pc = 0x14c0acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 4));
label_14c0b0:
    // 0x14c0b0: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x14c0b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_14c0b4:
    // 0x14c0b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c0b8:
    // 0x14c0b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c0bc:
    // 0x14c0bc: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x14c0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_14c0c0:
    // 0x14c0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c0c4:
    // 0x14c0c4: 0x1622002a  bne         $s1, $v0, . + 4 + (0x2A << 2)
label_14c0c8:
    if (ctx->pc == 0x14C0C8u) {
        ctx->pc = 0x14C0CCu;
        goto label_14c0cc;
    }
    ctx->pc = 0x14C0C4u;
    {
        const bool branch_taken_0x14c0c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c0c4) {
            ctx->pc = 0x14C170u;
            goto label_14c170;
        }
    }
    ctx->pc = 0x14C0CCu;
label_14c0cc:
    // 0x14c0cc: 0x32a22000  andi        $v0, $s5, 0x2000
    ctx->pc = 0x14c0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8192);
label_14c0d0:
    // 0x14c0d0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_14c0d4:
    if (ctx->pc == 0x14C0D4u) {
        ctx->pc = 0x14C0D8u;
        goto label_14c0d8;
    }
    ctx->pc = 0x14C0D0u;
    {
        const bool branch_taken_0x14c0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c0d0) {
            ctx->pc = 0x14C170u;
            goto label_14c170;
        }
    }
    ctx->pc = 0x14C0D8u;
label_14c0d8:
    // 0x14c0d8: 0x92620006  lbu         $v0, 0x6($s3)
    ctx->pc = 0x14c0d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_14c0dc:
    // 0x14c0dc: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x14c0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
label_14c0e0:
    // 0x14c0e0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x14c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_14c0e4:
    // 0x14c0e4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_14c0e8:
    if (ctx->pc == 0x14C0E8u) {
        ctx->pc = 0x14C0ECu;
        goto label_14c0ec;
    }
    ctx->pc = 0x14C0E4u;
    {
        const bool branch_taken_0x14c0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c0e4) {
            ctx->pc = 0x14C120u;
            goto label_14c120;
        }
    }
    ctx->pc = 0x14C0ECu;
label_14c0ec:
    // 0x14c0ec: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x14c0ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_14c0f0:
    // 0x14c0f0: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x14c0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
label_14c0f4:
    // 0x14c0f4: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x14c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
label_14c0f8:
    // 0x14c0f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14c0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_14c0fc:
    // 0x14c0fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_14c100:
    if (ctx->pc == 0x14C100u) {
        ctx->pc = 0x14C104u;
        goto label_14c104;
    }
    ctx->pc = 0x14C0FCu;
    {
        const bool branch_taken_0x14c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c0fc) {
            ctx->pc = 0x14C170u;
            goto label_14c170;
        }
    }
    ctx->pc = 0x14C104u;
label_14c104:
    // 0x14c104: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x14c104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_14c108:
    // 0x14c108: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x14c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_14c10c:
    // 0x14c10c: 0x6403000f  daddiu      $v1, $zero, 0xF
    ctx->pc = 0x14c10cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
label_14c110:
    // 0x14c110: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c114:
    // 0x14c114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c118:
    // 0x14c118: 0x10000015  b           . + 4 + (0x15 << 2)
label_14c11c:
    if (ctx->pc == 0x14C11Cu) {
        ctx->pc = 0x14C11Cu;
            // 0x14c11c: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x14C120u;
        goto label_14c120;
    }
    ctx->pc = 0x14C118u;
    {
        const bool branch_taken_0x14c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C118u;
            // 0x14c11c: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c118) {
            ctx->pc = 0x14C170u;
            goto label_14c170;
        }
    }
    ctx->pc = 0x14C120u;
label_14c120:
    // 0x14c120: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x14c120u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_14c124:
    // 0x14c124: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x14c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
label_14c128:
    // 0x14c128: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x14c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
label_14c12c:
    // 0x14c12c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_14c130:
    // 0x14c130: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_14c134:
    if (ctx->pc == 0x14C134u) {
        ctx->pc = 0x14C138u;
        goto label_14c138;
    }
    ctx->pc = 0x14C130u;
    {
        const bool branch_taken_0x14c130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c130) {
            ctx->pc = 0x14C158u;
            goto label_14c158;
        }
    }
    ctx->pc = 0x14C138u;
label_14c138:
    // 0x14c138: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x14c138u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_14c13c:
    // 0x14c13c: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x14c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_14c140:
    // 0x14c140: 0x64030010  daddiu      $v1, $zero, 0x10
    ctx->pc = 0x14c140u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_14c144:
    // 0x14c144: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c148:
    // 0x14c148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c14c:
    // 0x14c14c: 0x10000008  b           . + 4 + (0x8 << 2)
label_14c150:
    if (ctx->pc == 0x14C150u) {
        ctx->pc = 0x14C150u;
            // 0x14c150: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x14C154u;
        goto label_14c154;
    }
    ctx->pc = 0x14C14Cu;
    {
        const bool branch_taken_0x14c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C14Cu;
            // 0x14c150: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c14c) {
            ctx->pc = 0x14C170u;
            goto label_14c170;
        }
    }
    ctx->pc = 0x14C154u;
label_14c154:
    // 0x14c154: 0x0  nop
    ctx->pc = 0x14c154u;
    // NOP
label_14c158:
    // 0x14c158: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x14c158u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_14c15c:
    // 0x14c15c: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x14c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_14c160:
    // 0x14c160: 0x6403001f  daddiu      $v1, $zero, 0x1F
    ctx->pc = 0x14c160u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)31);
label_14c164:
    // 0x14c164: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14c164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14c168:
    // 0x14c168: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14c16c:
    // 0x14c16c: 0xa2620007  sb          $v0, 0x7($s3)
    ctx->pc = 0x14c16cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
label_14c170:
    // 0x14c170: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14c174:
    // 0x14c174: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x14c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_14c178:
    // 0x14c178: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14c178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14c17c:
    // 0x14c17c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14c17cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_14c180:
    // 0x14c180: 0xde470000  ld          $a3, 0x0($s2)
    ctx->pc = 0x14c180u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_14c184:
    // 0x14c184: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14c188:
    // 0x14c188: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x14c188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_14c18c:
    // 0x14c18c: 0xc057540  jal         func_15D500
label_14c190:
    if (ctx->pc == 0x14C190u) {
        ctx->pc = 0x14C190u;
            // 0x14c190: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x14C194u;
        goto label_14c194;
    }
    ctx->pc = 0x14C18Cu;
    SET_GPR_U32(ctx, 31, 0x14C194u);
    ctx->pc = 0x14C190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C18Cu;
            // 0x14c190: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C194u; }
        if (ctx->pc != 0x14C194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C194u; }
        if (ctx->pc != 0x14C194u) { return; }
    }
    ctx->pc = 0x14C194u;
label_14c194:
    // 0x14c194: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14c194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14c198:
    // 0x14c198: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x14c198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_14c19c:
    // 0x14c19c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14c19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_14c1a0:
    // 0x14c1a0: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14c1a4:
    // 0x14c1a4: 0xde670000  ld          $a3, 0x0($s3)
    ctx->pc = 0x14c1a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_14c1a8:
    // 0x14c1a8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x14c1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_14c1ac:
    // 0x14c1ac: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14c1b0:
    // 0x14c1b0: 0xc057540  jal         func_15D500
label_14c1b4:
    if (ctx->pc == 0x14C1B4u) {
        ctx->pc = 0x14C1B4u;
            // 0x14c1b4: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x14C1B8u;
        goto label_14c1b8;
    }
    ctx->pc = 0x14C1B0u;
    SET_GPR_U32(ctx, 31, 0x14C1B8u);
    ctx->pc = 0x14C1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1B0u;
            // 0x14c1b4: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1B8u; }
        if (ctx->pc != 0x14C1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1B8u; }
        if (ctx->pc != 0x14C1B8u) { return; }
    }
    ctx->pc = 0x14C1B8u;
label_14c1b8:
    // 0x14c1b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14c1bc:
    // 0x14c1bc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_14c1c0:
    // 0x14c1c0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x14c1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14c1c4:
    // 0x14c1c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x14c1c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_14c1c8:
    // 0x14c1c8: 0x1440ff6d  bnez        $v0, . + 4 + (-0x93 << 2)
label_14c1cc:
    if (ctx->pc == 0x14C1CCu) {
        ctx->pc = 0x14C1CCu;
            // 0x14c1cc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x14C1D0u;
        goto label_14c1d0;
    }
    ctx->pc = 0x14C1C8u;
    {
        const bool branch_taken_0x14c1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1C8u;
            // 0x14c1cc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1c8) {
            ctx->pc = 0x14BF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14bf80;
        }
    }
    ctx->pc = 0x14C1D0u;
label_14c1d0:
    // 0x14c1d0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_14c1d4:
    // 0x14c1d4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14c1d8:
    // 0x14c1d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c1dc:
    // 0x14c1dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14c1e0:
    // 0x14c1e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14c1e4:
    if (ctx->pc == 0x14C1E4u) {
        ctx->pc = 0x14C1E4u;
            // 0x14c1e4: 0xc4940008  lwc1        $f20, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x14C1E8u;
        goto label_14c1e8;
    }
    ctx->pc = 0x14C1E0u;
    {
        const bool branch_taken_0x14c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1e0) {
            ctx->pc = 0x14C1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1E0u;
            // 0x14c1e4: 0xc4940008  lwc1        $f20, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C1F4u;
            goto label_14c1f4;
        }
    }
    ctx->pc = 0x14C1E8u;
label_14c1e8:
    // 0x14c1e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14c1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14c1ec:
    // 0x14c1ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_14c1f0:
    if (ctx->pc == 0x14C1F0u) {
        ctx->pc = 0x14C1F0u;
            // 0x14c1f0: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x14C1F4u;
        goto label_14c1f4;
    }
    ctx->pc = 0x14C1ECu;
    {
        const bool branch_taken_0x14c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1ECu;
            // 0x14c1f0: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1ec) {
            ctx->pc = 0x14C1F8u;
            goto label_14c1f8;
        }
    }
    ctx->pc = 0x14C1F4u;
label_14c1f4:
    // 0x14c1f4: 0xc495000c  lwc1        $f21, 0xC($a0)
    ctx->pc = 0x14c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14c1f8:
    // 0x14c1f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c1fc:
    // 0x14c1fc: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_14c200:
    // 0x14c200: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x14c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_14c204:
    // 0x14c204: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_14c208:
    if (ctx->pc == 0x14C208u) {
        ctx->pc = 0x14C208u;
            // 0x14c208: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->pc = 0x14C20Cu;
        goto label_14c20c;
    }
    ctx->pc = 0x14C204u;
    {
        const bool branch_taken_0x14c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C204u;
            // 0x14c208: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c204) {
            ctx->pc = 0x14C288u;
            goto label_14c288;
        }
    }
    ctx->pc = 0x14C20Cu;
label_14c20c:
    // 0x14c20c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c210:
    // 0x14c210: 0xc4405864  lwc1        $f0, 0x5864($v0)
    ctx->pc = 0x14c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c214:
    // 0x14c214: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x14c214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c218:
    // 0x14c218: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_14c21c:
    if (ctx->pc == 0x14C21Cu) {
        ctx->pc = 0x14C21Cu;
            // 0x14c21c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x14C220u;
        goto label_14c220;
    }
    ctx->pc = 0x14C218u;
    {
        const bool branch_taken_0x14c218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c218) {
            ctx->pc = 0x14C21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C218u;
            // 0x14c21c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C238u;
            goto label_14c238;
        }
    }
    ctx->pc = 0x14C220u;
label_14c220:
    // 0x14c220: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c224:
    // 0x14c224: 0xc4405868  lwc1        $f0, 0x5868($v0)
    ctx->pc = 0x14c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c228:
    // 0x14c228: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x14c228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c22c:
    // 0x14c22c: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_14c230:
    if (ctx->pc == 0x14C230u) {
        ctx->pc = 0x14C230u;
            // 0x14c230: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->pc = 0x14C234u;
        goto label_14c234;
    }
    ctx->pc = 0x14C22Cu;
    {
        const bool branch_taken_0x14c22c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c22c) {
            ctx->pc = 0x14C230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C22Cu;
            // 0x14c230: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C268u;
            goto label_14c268;
        }
    }
    ctx->pc = 0x14C234u;
label_14c234:
    // 0x14c234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c238:
    // 0x14c238: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14c238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14c23c:
    // 0x14c23c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c240:
    // 0x14c240: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x14c240u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_14c244:
    // 0x14c244: 0xc057470  jal         func_15D1C0
label_14c248:
    if (ctx->pc == 0x14C248u) {
        ctx->pc = 0x14C248u;
            // 0x14c248: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x14C24Cu;
        goto label_14c24c;
    }
    ctx->pc = 0x14C244u;
    SET_GPR_U32(ctx, 31, 0x14C24Cu);
    ctx->pc = 0x14C248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C244u;
            // 0x14c248: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1C0u;
    if (runtime->hasFunction(0x15D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C24Cu; }
        if (ctx->pc != 0x14C24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1C0_0x15d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C24Cu; }
        if (ctx->pc != 0x14C24Cu) { return; }
    }
    ctx->pc = 0x14C24Cu;
label_14c24c:
    // 0x14c24c: 0xc057480  jal         func_15D200
label_14c250:
    if (ctx->pc == 0x14C250u) {
        ctx->pc = 0x14C254u;
        goto label_14c254;
    }
    ctx->pc = 0x14C24Cu;
    SET_GPR_U32(ctx, 31, 0x14C254u);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C254u; }
        if (ctx->pc != 0x14C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C254u; }
        if (ctx->pc != 0x14C254u) { return; }
    }
    ctx->pc = 0x14C254u;
label_14c254:
    // 0x14c254: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14c254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14c258:
    // 0x14c258: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c25c:
    // 0x14c25c: 0xe4745864  swc1        $f20, 0x5864($v1)
    ctx->pc = 0x14c25cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 22628), bits); }
label_14c260:
    // 0x14c260: 0xe4555868  swc1        $f21, 0x5868($v0)
    ctx->pc = 0x14c260u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22632), bits); }
label_14c264:
    // 0x14c264: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x14c264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_14c268:
    // 0x14c268: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14c26c:
    // 0x14c26c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14c270:
    // 0x14c270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14c274:
    // 0x14c274: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_14c278:
    if (ctx->pc == 0x14C278u) {
        ctx->pc = 0x14C278u;
            // 0x14c278: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14C27Cu;
        goto label_14c27c;
    }
    ctx->pc = 0x14C274u;
    {
        const bool branch_taken_0x14c274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c274) {
            ctx->pc = 0x14C278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C274u;
            // 0x14c278: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C2B0u;
            goto label_14c2b0;
        }
    }
    ctx->pc = 0x14C27Cu;
label_14c27c:
    // 0x14c27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c280:
    // 0x14c280: 0x1000000a  b           . + 4 + (0xA << 2)
label_14c284:
    if (ctx->pc == 0x14C284u) {
        ctx->pc = 0x14C284u;
            // 0x14c284: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->pc = 0x14C288u;
        goto label_14c288;
    }
    ctx->pc = 0x14C280u;
    {
        const bool branch_taken_0x14c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C280u;
            // 0x14c284: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c280) {
            ctx->pc = 0x14C2ACu;
            goto label_14c2ac;
        }
    }
    ctx->pc = 0x14C288u;
label_14c288:
    // 0x14c288: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14c28c:
    // 0x14c28c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_14c290:
    // 0x14c290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14c290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c294:
    // 0x14c294: 0x0  nop
    ctx->pc = 0x14c294u;
    // NOP
label_14c298:
    // 0x14c298: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x14c298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_14c29c:
    // 0x14c29c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14c2a0:
    // 0x14c2a0: 0xe4604e00  swc1        $f0, 0x4E00($v1)
    ctx->pc = 0x14c2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 19968), bits); }
label_14c2a4:
    // 0x14c2a4: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x14c2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_14c2a8:
    // 0x14c2a8: 0xe4404e04  swc1        $f0, 0x4E04($v0)
    ctx->pc = 0x14c2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19972), bits); }
label_14c2ac:
    // 0x14c2ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c2b0:
    // 0x14c2b0: 0x56c20029  bnel        $s6, $v0, . + 4 + (0x29 << 2)
label_14c2b4:
    if (ctx->pc == 0x14C2B4u) {
        ctx->pc = 0x14C2B4u;
            // 0x14c2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14C2B8u;
        goto label_14c2b8;
    }
    ctx->pc = 0x14C2B0u;
    {
        const bool branch_taken_0x14c2b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c2b0) {
            ctx->pc = 0x14C2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2B0u;
            // 0x14c2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C358u;
            goto label_14c358;
        }
    }
    ctx->pc = 0x14C2B8u;
label_14c2b8:
    // 0x14c2b8: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_14c2bc:
    // 0x14c2bc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14c2c0:
    // 0x14c2c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c2c4:
    // 0x14c2c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14c2c8:
    // 0x14c2c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14c2cc:
    if (ctx->pc == 0x14C2CCu) {
        ctx->pc = 0x14C2CCu;
            // 0x14c2cc: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x14C2D0u;
        goto label_14c2d0;
    }
    ctx->pc = 0x14C2C8u;
    {
        const bool branch_taken_0x14c2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2c8) {
            ctx->pc = 0x14C2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2C8u;
            // 0x14c2cc: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C2DCu;
            goto label_14c2dc;
        }
    }
    ctx->pc = 0x14C2D0u;
label_14c2d0:
    // 0x14c2d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c2d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c2d4:
    // 0x14c2d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_14c2d8:
    if (ctx->pc == 0x14C2D8u) {
        ctx->pc = 0x14C2D8u;
            // 0x14c2d8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x14C2DCu;
        goto label_14c2dc;
    }
    ctx->pc = 0x14C2D4u;
    {
        const bool branch_taken_0x14c2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2D4u;
            // 0x14c2d8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2d4) {
            ctx->pc = 0x14C2E0u;
            goto label_14c2e0;
        }
    }
    ctx->pc = 0x14C2DCu;
label_14c2dc:
    // 0x14c2dc: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x14c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c2e0:
    // 0x14c2e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14c2e4:
    // 0x14c2e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14c2e8:
    // 0x14c2e8: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x14c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_14c2ec:
    // 0x14c2ec: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x14c2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_14c2f0:
    // 0x14c2f0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_14c2f4:
    if (ctx->pc == 0x14C2F4u) {
        ctx->pc = 0x14C2F8u;
        goto label_14c2f8;
    }
    ctx->pc = 0x14C2F0u;
    {
        const bool branch_taken_0x14c2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c2f0) {
            ctx->pc = 0x14C30Cu;
            goto label_14c30c;
        }
    }
    ctx->pc = 0x14C2F8u;
label_14c2f8:
    // 0x14c2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c2fc:
    // 0x14c2fc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_14c300:
    if (ctx->pc == 0x14C300u) {
        ctx->pc = 0x14C304u;
        goto label_14c304;
    }
    ctx->pc = 0x14C2FCu;
    {
        const bool branch_taken_0x14c2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c2fc) {
            ctx->pc = 0x14C30Cu;
            goto label_14c30c;
        }
    }
    ctx->pc = 0x14C304u;
label_14c304:
    // 0x14c304: 0x1000000b  b           . + 4 + (0xB << 2)
label_14c308:
    if (ctx->pc == 0x14C308u) {
        ctx->pc = 0x14C308u;
            // 0x14c308: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x14C30Cu;
        goto label_14c30c;
    }
    ctx->pc = 0x14C304u;
    {
        const bool branch_taken_0x14c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C304u;
            // 0x14c308: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c304) {
            ctx->pc = 0x14C334u;
            goto label_14c334;
        }
    }
    ctx->pc = 0x14C30Cu;
label_14c30c:
    // 0x14c30c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_14c310:
    // 0x14c310: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14c310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14c314:
    // 0x14c314: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x14c314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_14c318:
    // 0x14c318: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14c31c:
    // 0x14c31c: 0xe4604e40  swc1        $f0, 0x4E40($v1)
    ctx->pc = 0x14c31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20032), bits); }
label_14c320:
    // 0x14c320: 0x24844e10  addiu       $a0, $a0, 0x4E10
    ctx->pc = 0x14c320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19984));
label_14c324:
    // 0x14c324: 0xc04e560  jal         func_139580
label_14c328:
    if (ctx->pc == 0x14C328u) {
        ctx->pc = 0x14C328u;
            // 0x14c328: 0xe4424e44  swc1        $f2, 0x4E44($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20036), bits); }
        ctx->pc = 0x14C32Cu;
        goto label_14c32c;
    }
    ctx->pc = 0x14C324u;
    SET_GPR_U32(ctx, 31, 0x14C32Cu);
    ctx->pc = 0x14C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C324u;
            // 0x14c328: 0xe4424e44  swc1        $f2, 0x4E44($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20036), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139580u;
    if (runtime->hasFunction(0x139580u)) {
        auto targetFn = runtime->lookupFunction(0x139580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C32Cu; }
        if (ctx->pc != 0x14C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139580_0x139580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C32Cu; }
        if (ctx->pc != 0x14C32Cu) { return; }
    }
    ctx->pc = 0x14C32Cu;
label_14c32c:
    // 0x14c32c: 0x10000009  b           . + 4 + (0x9 << 2)
label_14c330:
    if (ctx->pc == 0x14C330u) {
        ctx->pc = 0x14C334u;
        goto label_14c334;
    }
    ctx->pc = 0x14C32Cu;
    {
        const bool branch_taken_0x14c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c32c) {
            ctx->pc = 0x14C354u;
            goto label_14c354;
        }
    }
    ctx->pc = 0x14C334u;
label_14c334:
    // 0x14c334: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14c334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_14c338:
    // 0x14c338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14c338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c33c:
    // 0x14c33c: 0x0  nop
    ctx->pc = 0x14c33cu;
    // NOP
label_14c340:
    // 0x14c340: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14c340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14c344:
    // 0x14c344: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14c348:
    // 0x14c348: 0xe4604e00  swc1        $f0, 0x4E00($v1)
    ctx->pc = 0x14c348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 19968), bits); }
label_14c34c:
    // 0x14c34c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x14c34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_14c350:
    // 0x14c350: 0xe4404e04  swc1        $f0, 0x4E04($v0)
    ctx->pc = 0x14c350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19972), bits); }
label_14c354:
    // 0x14c354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c358:
    // 0x14c358: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14c358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_14c35c:
    // 0x14c35c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14c360:
    // 0x14c360: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14c360u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14c364:
    // 0x14c364: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14c368:
    // 0x14c368: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14c368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14c36c:
    // 0x14c36c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14c36cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14c370:
    // 0x14c370: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14c370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14c374:
    // 0x14c374: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14c374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c378:
    // 0x14c378: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c37c:
    // 0x14c37c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14c37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c380:
    // 0x14c380: 0x3e00008  jr          $ra
label_14c384:
    if (ctx->pc == 0x14C384u) {
        ctx->pc = 0x14C384u;
            // 0x14c384: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x14C388u;
        goto label_14c388;
    }
    ctx->pc = 0x14C380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C380u;
            // 0x14c384: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C388u;
label_14c388:
    // 0x14c388: 0x0  nop
    ctx->pc = 0x14c388u;
    // NOP
label_14c38c:
    // 0x14c38c: 0x0  nop
    ctx->pc = 0x14c38cu;
    // NOP
}
