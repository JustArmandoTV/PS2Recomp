#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040EEC0
// Address: 0x40eec0 - 0x40f4c0
void sub_0040EEC0_0x40eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040EEC0_0x40eec0");
#endif

    switch (ctx->pc) {
        case 0x40eec0u: goto label_40eec0;
        case 0x40eec4u: goto label_40eec4;
        case 0x40eec8u: goto label_40eec8;
        case 0x40eeccu: goto label_40eecc;
        case 0x40eed0u: goto label_40eed0;
        case 0x40eed4u: goto label_40eed4;
        case 0x40eed8u: goto label_40eed8;
        case 0x40eedcu: goto label_40eedc;
        case 0x40eee0u: goto label_40eee0;
        case 0x40eee4u: goto label_40eee4;
        case 0x40eee8u: goto label_40eee8;
        case 0x40eeecu: goto label_40eeec;
        case 0x40eef0u: goto label_40eef0;
        case 0x40eef4u: goto label_40eef4;
        case 0x40eef8u: goto label_40eef8;
        case 0x40eefcu: goto label_40eefc;
        case 0x40ef00u: goto label_40ef00;
        case 0x40ef04u: goto label_40ef04;
        case 0x40ef08u: goto label_40ef08;
        case 0x40ef0cu: goto label_40ef0c;
        case 0x40ef10u: goto label_40ef10;
        case 0x40ef14u: goto label_40ef14;
        case 0x40ef18u: goto label_40ef18;
        case 0x40ef1cu: goto label_40ef1c;
        case 0x40ef20u: goto label_40ef20;
        case 0x40ef24u: goto label_40ef24;
        case 0x40ef28u: goto label_40ef28;
        case 0x40ef2cu: goto label_40ef2c;
        case 0x40ef30u: goto label_40ef30;
        case 0x40ef34u: goto label_40ef34;
        case 0x40ef38u: goto label_40ef38;
        case 0x40ef3cu: goto label_40ef3c;
        case 0x40ef40u: goto label_40ef40;
        case 0x40ef44u: goto label_40ef44;
        case 0x40ef48u: goto label_40ef48;
        case 0x40ef4cu: goto label_40ef4c;
        case 0x40ef50u: goto label_40ef50;
        case 0x40ef54u: goto label_40ef54;
        case 0x40ef58u: goto label_40ef58;
        case 0x40ef5cu: goto label_40ef5c;
        case 0x40ef60u: goto label_40ef60;
        case 0x40ef64u: goto label_40ef64;
        case 0x40ef68u: goto label_40ef68;
        case 0x40ef6cu: goto label_40ef6c;
        case 0x40ef70u: goto label_40ef70;
        case 0x40ef74u: goto label_40ef74;
        case 0x40ef78u: goto label_40ef78;
        case 0x40ef7cu: goto label_40ef7c;
        case 0x40ef80u: goto label_40ef80;
        case 0x40ef84u: goto label_40ef84;
        case 0x40ef88u: goto label_40ef88;
        case 0x40ef8cu: goto label_40ef8c;
        case 0x40ef90u: goto label_40ef90;
        case 0x40ef94u: goto label_40ef94;
        case 0x40ef98u: goto label_40ef98;
        case 0x40ef9cu: goto label_40ef9c;
        case 0x40efa0u: goto label_40efa0;
        case 0x40efa4u: goto label_40efa4;
        case 0x40efa8u: goto label_40efa8;
        case 0x40efacu: goto label_40efac;
        case 0x40efb0u: goto label_40efb0;
        case 0x40efb4u: goto label_40efb4;
        case 0x40efb8u: goto label_40efb8;
        case 0x40efbcu: goto label_40efbc;
        case 0x40efc0u: goto label_40efc0;
        case 0x40efc4u: goto label_40efc4;
        case 0x40efc8u: goto label_40efc8;
        case 0x40efccu: goto label_40efcc;
        case 0x40efd0u: goto label_40efd0;
        case 0x40efd4u: goto label_40efd4;
        case 0x40efd8u: goto label_40efd8;
        case 0x40efdcu: goto label_40efdc;
        case 0x40efe0u: goto label_40efe0;
        case 0x40efe4u: goto label_40efe4;
        case 0x40efe8u: goto label_40efe8;
        case 0x40efecu: goto label_40efec;
        case 0x40eff0u: goto label_40eff0;
        case 0x40eff4u: goto label_40eff4;
        case 0x40eff8u: goto label_40eff8;
        case 0x40effcu: goto label_40effc;
        case 0x40f000u: goto label_40f000;
        case 0x40f004u: goto label_40f004;
        case 0x40f008u: goto label_40f008;
        case 0x40f00cu: goto label_40f00c;
        case 0x40f010u: goto label_40f010;
        case 0x40f014u: goto label_40f014;
        case 0x40f018u: goto label_40f018;
        case 0x40f01cu: goto label_40f01c;
        case 0x40f020u: goto label_40f020;
        case 0x40f024u: goto label_40f024;
        case 0x40f028u: goto label_40f028;
        case 0x40f02cu: goto label_40f02c;
        case 0x40f030u: goto label_40f030;
        case 0x40f034u: goto label_40f034;
        case 0x40f038u: goto label_40f038;
        case 0x40f03cu: goto label_40f03c;
        case 0x40f040u: goto label_40f040;
        case 0x40f044u: goto label_40f044;
        case 0x40f048u: goto label_40f048;
        case 0x40f04cu: goto label_40f04c;
        case 0x40f050u: goto label_40f050;
        case 0x40f054u: goto label_40f054;
        case 0x40f058u: goto label_40f058;
        case 0x40f05cu: goto label_40f05c;
        case 0x40f060u: goto label_40f060;
        case 0x40f064u: goto label_40f064;
        case 0x40f068u: goto label_40f068;
        case 0x40f06cu: goto label_40f06c;
        case 0x40f070u: goto label_40f070;
        case 0x40f074u: goto label_40f074;
        case 0x40f078u: goto label_40f078;
        case 0x40f07cu: goto label_40f07c;
        case 0x40f080u: goto label_40f080;
        case 0x40f084u: goto label_40f084;
        case 0x40f088u: goto label_40f088;
        case 0x40f08cu: goto label_40f08c;
        case 0x40f090u: goto label_40f090;
        case 0x40f094u: goto label_40f094;
        case 0x40f098u: goto label_40f098;
        case 0x40f09cu: goto label_40f09c;
        case 0x40f0a0u: goto label_40f0a0;
        case 0x40f0a4u: goto label_40f0a4;
        case 0x40f0a8u: goto label_40f0a8;
        case 0x40f0acu: goto label_40f0ac;
        case 0x40f0b0u: goto label_40f0b0;
        case 0x40f0b4u: goto label_40f0b4;
        case 0x40f0b8u: goto label_40f0b8;
        case 0x40f0bcu: goto label_40f0bc;
        case 0x40f0c0u: goto label_40f0c0;
        case 0x40f0c4u: goto label_40f0c4;
        case 0x40f0c8u: goto label_40f0c8;
        case 0x40f0ccu: goto label_40f0cc;
        case 0x40f0d0u: goto label_40f0d0;
        case 0x40f0d4u: goto label_40f0d4;
        case 0x40f0d8u: goto label_40f0d8;
        case 0x40f0dcu: goto label_40f0dc;
        case 0x40f0e0u: goto label_40f0e0;
        case 0x40f0e4u: goto label_40f0e4;
        case 0x40f0e8u: goto label_40f0e8;
        case 0x40f0ecu: goto label_40f0ec;
        case 0x40f0f0u: goto label_40f0f0;
        case 0x40f0f4u: goto label_40f0f4;
        case 0x40f0f8u: goto label_40f0f8;
        case 0x40f0fcu: goto label_40f0fc;
        case 0x40f100u: goto label_40f100;
        case 0x40f104u: goto label_40f104;
        case 0x40f108u: goto label_40f108;
        case 0x40f10cu: goto label_40f10c;
        case 0x40f110u: goto label_40f110;
        case 0x40f114u: goto label_40f114;
        case 0x40f118u: goto label_40f118;
        case 0x40f11cu: goto label_40f11c;
        case 0x40f120u: goto label_40f120;
        case 0x40f124u: goto label_40f124;
        case 0x40f128u: goto label_40f128;
        case 0x40f12cu: goto label_40f12c;
        case 0x40f130u: goto label_40f130;
        case 0x40f134u: goto label_40f134;
        case 0x40f138u: goto label_40f138;
        case 0x40f13cu: goto label_40f13c;
        case 0x40f140u: goto label_40f140;
        case 0x40f144u: goto label_40f144;
        case 0x40f148u: goto label_40f148;
        case 0x40f14cu: goto label_40f14c;
        case 0x40f150u: goto label_40f150;
        case 0x40f154u: goto label_40f154;
        case 0x40f158u: goto label_40f158;
        case 0x40f15cu: goto label_40f15c;
        case 0x40f160u: goto label_40f160;
        case 0x40f164u: goto label_40f164;
        case 0x40f168u: goto label_40f168;
        case 0x40f16cu: goto label_40f16c;
        case 0x40f170u: goto label_40f170;
        case 0x40f174u: goto label_40f174;
        case 0x40f178u: goto label_40f178;
        case 0x40f17cu: goto label_40f17c;
        case 0x40f180u: goto label_40f180;
        case 0x40f184u: goto label_40f184;
        case 0x40f188u: goto label_40f188;
        case 0x40f18cu: goto label_40f18c;
        case 0x40f190u: goto label_40f190;
        case 0x40f194u: goto label_40f194;
        case 0x40f198u: goto label_40f198;
        case 0x40f19cu: goto label_40f19c;
        case 0x40f1a0u: goto label_40f1a0;
        case 0x40f1a4u: goto label_40f1a4;
        case 0x40f1a8u: goto label_40f1a8;
        case 0x40f1acu: goto label_40f1ac;
        case 0x40f1b0u: goto label_40f1b0;
        case 0x40f1b4u: goto label_40f1b4;
        case 0x40f1b8u: goto label_40f1b8;
        case 0x40f1bcu: goto label_40f1bc;
        case 0x40f1c0u: goto label_40f1c0;
        case 0x40f1c4u: goto label_40f1c4;
        case 0x40f1c8u: goto label_40f1c8;
        case 0x40f1ccu: goto label_40f1cc;
        case 0x40f1d0u: goto label_40f1d0;
        case 0x40f1d4u: goto label_40f1d4;
        case 0x40f1d8u: goto label_40f1d8;
        case 0x40f1dcu: goto label_40f1dc;
        case 0x40f1e0u: goto label_40f1e0;
        case 0x40f1e4u: goto label_40f1e4;
        case 0x40f1e8u: goto label_40f1e8;
        case 0x40f1ecu: goto label_40f1ec;
        case 0x40f1f0u: goto label_40f1f0;
        case 0x40f1f4u: goto label_40f1f4;
        case 0x40f1f8u: goto label_40f1f8;
        case 0x40f1fcu: goto label_40f1fc;
        case 0x40f200u: goto label_40f200;
        case 0x40f204u: goto label_40f204;
        case 0x40f208u: goto label_40f208;
        case 0x40f20cu: goto label_40f20c;
        case 0x40f210u: goto label_40f210;
        case 0x40f214u: goto label_40f214;
        case 0x40f218u: goto label_40f218;
        case 0x40f21cu: goto label_40f21c;
        case 0x40f220u: goto label_40f220;
        case 0x40f224u: goto label_40f224;
        case 0x40f228u: goto label_40f228;
        case 0x40f22cu: goto label_40f22c;
        case 0x40f230u: goto label_40f230;
        case 0x40f234u: goto label_40f234;
        case 0x40f238u: goto label_40f238;
        case 0x40f23cu: goto label_40f23c;
        case 0x40f240u: goto label_40f240;
        case 0x40f244u: goto label_40f244;
        case 0x40f248u: goto label_40f248;
        case 0x40f24cu: goto label_40f24c;
        case 0x40f250u: goto label_40f250;
        case 0x40f254u: goto label_40f254;
        case 0x40f258u: goto label_40f258;
        case 0x40f25cu: goto label_40f25c;
        case 0x40f260u: goto label_40f260;
        case 0x40f264u: goto label_40f264;
        case 0x40f268u: goto label_40f268;
        case 0x40f26cu: goto label_40f26c;
        case 0x40f270u: goto label_40f270;
        case 0x40f274u: goto label_40f274;
        case 0x40f278u: goto label_40f278;
        case 0x40f27cu: goto label_40f27c;
        case 0x40f280u: goto label_40f280;
        case 0x40f284u: goto label_40f284;
        case 0x40f288u: goto label_40f288;
        case 0x40f28cu: goto label_40f28c;
        case 0x40f290u: goto label_40f290;
        case 0x40f294u: goto label_40f294;
        case 0x40f298u: goto label_40f298;
        case 0x40f29cu: goto label_40f29c;
        case 0x40f2a0u: goto label_40f2a0;
        case 0x40f2a4u: goto label_40f2a4;
        case 0x40f2a8u: goto label_40f2a8;
        case 0x40f2acu: goto label_40f2ac;
        case 0x40f2b0u: goto label_40f2b0;
        case 0x40f2b4u: goto label_40f2b4;
        case 0x40f2b8u: goto label_40f2b8;
        case 0x40f2bcu: goto label_40f2bc;
        case 0x40f2c0u: goto label_40f2c0;
        case 0x40f2c4u: goto label_40f2c4;
        case 0x40f2c8u: goto label_40f2c8;
        case 0x40f2ccu: goto label_40f2cc;
        case 0x40f2d0u: goto label_40f2d0;
        case 0x40f2d4u: goto label_40f2d4;
        case 0x40f2d8u: goto label_40f2d8;
        case 0x40f2dcu: goto label_40f2dc;
        case 0x40f2e0u: goto label_40f2e0;
        case 0x40f2e4u: goto label_40f2e4;
        case 0x40f2e8u: goto label_40f2e8;
        case 0x40f2ecu: goto label_40f2ec;
        case 0x40f2f0u: goto label_40f2f0;
        case 0x40f2f4u: goto label_40f2f4;
        case 0x40f2f8u: goto label_40f2f8;
        case 0x40f2fcu: goto label_40f2fc;
        case 0x40f300u: goto label_40f300;
        case 0x40f304u: goto label_40f304;
        case 0x40f308u: goto label_40f308;
        case 0x40f30cu: goto label_40f30c;
        case 0x40f310u: goto label_40f310;
        case 0x40f314u: goto label_40f314;
        case 0x40f318u: goto label_40f318;
        case 0x40f31cu: goto label_40f31c;
        case 0x40f320u: goto label_40f320;
        case 0x40f324u: goto label_40f324;
        case 0x40f328u: goto label_40f328;
        case 0x40f32cu: goto label_40f32c;
        case 0x40f330u: goto label_40f330;
        case 0x40f334u: goto label_40f334;
        case 0x40f338u: goto label_40f338;
        case 0x40f33cu: goto label_40f33c;
        case 0x40f340u: goto label_40f340;
        case 0x40f344u: goto label_40f344;
        case 0x40f348u: goto label_40f348;
        case 0x40f34cu: goto label_40f34c;
        case 0x40f350u: goto label_40f350;
        case 0x40f354u: goto label_40f354;
        case 0x40f358u: goto label_40f358;
        case 0x40f35cu: goto label_40f35c;
        case 0x40f360u: goto label_40f360;
        case 0x40f364u: goto label_40f364;
        case 0x40f368u: goto label_40f368;
        case 0x40f36cu: goto label_40f36c;
        case 0x40f370u: goto label_40f370;
        case 0x40f374u: goto label_40f374;
        case 0x40f378u: goto label_40f378;
        case 0x40f37cu: goto label_40f37c;
        case 0x40f380u: goto label_40f380;
        case 0x40f384u: goto label_40f384;
        case 0x40f388u: goto label_40f388;
        case 0x40f38cu: goto label_40f38c;
        case 0x40f390u: goto label_40f390;
        case 0x40f394u: goto label_40f394;
        case 0x40f398u: goto label_40f398;
        case 0x40f39cu: goto label_40f39c;
        case 0x40f3a0u: goto label_40f3a0;
        case 0x40f3a4u: goto label_40f3a4;
        case 0x40f3a8u: goto label_40f3a8;
        case 0x40f3acu: goto label_40f3ac;
        case 0x40f3b0u: goto label_40f3b0;
        case 0x40f3b4u: goto label_40f3b4;
        case 0x40f3b8u: goto label_40f3b8;
        case 0x40f3bcu: goto label_40f3bc;
        case 0x40f3c0u: goto label_40f3c0;
        case 0x40f3c4u: goto label_40f3c4;
        case 0x40f3c8u: goto label_40f3c8;
        case 0x40f3ccu: goto label_40f3cc;
        case 0x40f3d0u: goto label_40f3d0;
        case 0x40f3d4u: goto label_40f3d4;
        case 0x40f3d8u: goto label_40f3d8;
        case 0x40f3dcu: goto label_40f3dc;
        case 0x40f3e0u: goto label_40f3e0;
        case 0x40f3e4u: goto label_40f3e4;
        case 0x40f3e8u: goto label_40f3e8;
        case 0x40f3ecu: goto label_40f3ec;
        case 0x40f3f0u: goto label_40f3f0;
        case 0x40f3f4u: goto label_40f3f4;
        case 0x40f3f8u: goto label_40f3f8;
        case 0x40f3fcu: goto label_40f3fc;
        case 0x40f400u: goto label_40f400;
        case 0x40f404u: goto label_40f404;
        case 0x40f408u: goto label_40f408;
        case 0x40f40cu: goto label_40f40c;
        case 0x40f410u: goto label_40f410;
        case 0x40f414u: goto label_40f414;
        case 0x40f418u: goto label_40f418;
        case 0x40f41cu: goto label_40f41c;
        case 0x40f420u: goto label_40f420;
        case 0x40f424u: goto label_40f424;
        case 0x40f428u: goto label_40f428;
        case 0x40f42cu: goto label_40f42c;
        case 0x40f430u: goto label_40f430;
        case 0x40f434u: goto label_40f434;
        case 0x40f438u: goto label_40f438;
        case 0x40f43cu: goto label_40f43c;
        case 0x40f440u: goto label_40f440;
        case 0x40f444u: goto label_40f444;
        case 0x40f448u: goto label_40f448;
        case 0x40f44cu: goto label_40f44c;
        case 0x40f450u: goto label_40f450;
        case 0x40f454u: goto label_40f454;
        case 0x40f458u: goto label_40f458;
        case 0x40f45cu: goto label_40f45c;
        case 0x40f460u: goto label_40f460;
        case 0x40f464u: goto label_40f464;
        case 0x40f468u: goto label_40f468;
        case 0x40f46cu: goto label_40f46c;
        case 0x40f470u: goto label_40f470;
        case 0x40f474u: goto label_40f474;
        case 0x40f478u: goto label_40f478;
        case 0x40f47cu: goto label_40f47c;
        case 0x40f480u: goto label_40f480;
        case 0x40f484u: goto label_40f484;
        case 0x40f488u: goto label_40f488;
        case 0x40f48cu: goto label_40f48c;
        case 0x40f490u: goto label_40f490;
        case 0x40f494u: goto label_40f494;
        case 0x40f498u: goto label_40f498;
        case 0x40f49cu: goto label_40f49c;
        case 0x40f4a0u: goto label_40f4a0;
        case 0x40f4a4u: goto label_40f4a4;
        case 0x40f4a8u: goto label_40f4a8;
        case 0x40f4acu: goto label_40f4ac;
        case 0x40f4b0u: goto label_40f4b0;
        case 0x40f4b4u: goto label_40f4b4;
        case 0x40f4b8u: goto label_40f4b8;
        case 0x40f4bcu: goto label_40f4bc;
        default: break;
    }

    ctx->pc = 0x40eec0u;

label_40eec0:
    // 0x40eec0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x40eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_40eec4:
    // 0x40eec4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x40eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_40eec8:
    // 0x40eec8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40eecc:
    // 0x40eecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40eeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40eed0:
    // 0x40eed0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40eed4:
    // 0x40eed4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40eed8:
    // 0x40eed8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40eed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40eedc:
    // 0x40eedc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40eee0:
    // 0x40eee0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40eee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40eee4:
    // 0x40eee4: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x40eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40eee8:
    // 0x40eee8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40eee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40eeec:
    // 0x40eeec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_40eef0:
    if (ctx->pc == 0x40EEF0u) {
        ctx->pc = 0x40EEF0u;
            // 0x40eef0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EEF4u;
        goto label_40eef4;
    }
    ctx->pc = 0x40EEECu;
    {
        const bool branch_taken_0x40eeec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40EEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EEECu;
            // 0x40eef0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eeec) {
            ctx->pc = 0x40EF04u;
            goto label_40ef04;
        }
    }
    ctx->pc = 0x40EEF4u;
label_40eef4:
    // 0x40eef4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x40eef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_40eef8:
    // 0x40eef8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x40eef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_40eefc:
    // 0x40eefc: 0x10000008  b           . + 4 + (0x8 << 2)
label_40ef00:
    if (ctx->pc == 0x40EF00u) {
        ctx->pc = 0x40EF00u;
            // 0x40ef00: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x40EF04u;
        goto label_40ef04;
    }
    ctx->pc = 0x40EEFCu;
    {
        const bool branch_taken_0x40eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EEFCu;
            // 0x40ef00: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eefc) {
            ctx->pc = 0x40EF20u;
            goto label_40ef20;
        }
    }
    ctx->pc = 0x40EF04u;
label_40ef04:
    // 0x40ef04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x40ef04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_40ef08:
    // 0x40ef08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x40ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_40ef0c:
    // 0x40ef0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x40ef0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_40ef10:
    // 0x40ef10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x40ef10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_40ef14:
    // 0x40ef14: 0x0  nop
    ctx->pc = 0x40ef14u;
    // NOP
label_40ef18:
    // 0x40ef18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40ef1c:
    // 0x40ef1c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x40ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40ef20:
    // 0x40ef20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40ef24:
    // 0x40ef24: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x40ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_40ef28:
    // 0x40ef28: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x40ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_40ef2c:
    // 0x40ef2c: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x40ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_40ef30:
    // 0x40ef30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40ef34:
    // 0x40ef34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40ef38:
    // 0x40ef38: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x40ef38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_40ef3c:
    // 0x40ef3c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_40ef40:
    if (ctx->pc == 0x40EF40u) {
        ctx->pc = 0x40EF40u;
            // 0x40ef40: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x40EF44u;
        goto label_40ef44;
    }
    ctx->pc = 0x40EF3Cu;
    {
        const bool branch_taken_0x40ef3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EF3Cu;
            // 0x40ef40: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef3c) {
            ctx->pc = 0x40EF7Cu;
            goto label_40ef7c;
        }
    }
    ctx->pc = 0x40EF44u;
label_40ef44:
    // 0x40ef44: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x40ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_40ef48:
    // 0x40ef48: 0x26230a50  addiu       $v1, $s1, 0xA50
    ctx->pc = 0x40ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_40ef4c:
    // 0x40ef4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_40ef50:
    // 0x40ef50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40ef54:
    // 0x40ef54: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x40ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40ef58:
    // 0x40ef58: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x40ef58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_40ef5c:
    // 0x40ef5c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x40ef5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_40ef60:
    // 0x40ef60: 0x320f809  jalr        $t9
label_40ef64:
    if (ctx->pc == 0x40EF64u) {
        ctx->pc = 0x40EF68u;
        goto label_40ef68;
    }
    ctx->pc = 0x40EF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40EF68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40EF68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40EF68u; }
            if (ctx->pc != 0x40EF68u) { return; }
        }
        }
    }
    ctx->pc = 0x40EF68u;
label_40ef68:
    // 0x40ef68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x40ef68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40ef6c:
    // 0x40ef6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40ef70:
    // 0x40ef70: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x40ef70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_40ef74:
    // 0x40ef74: 0x320f809  jalr        $t9
label_40ef78:
    if (ctx->pc == 0x40EF78u) {
        ctx->pc = 0x40EF78u;
            // 0x40ef78: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x40EF7Cu;
        goto label_40ef7c;
    }
    ctx->pc = 0x40EF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40EF7Cu);
        ctx->pc = 0x40EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EF74u;
            // 0x40ef78: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40EF7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40EF7Cu; }
            if (ctx->pc != 0x40EF7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40EF7Cu;
label_40ef7c:
    // 0x40ef7c: 0x8e230db0  lw          $v1, 0xDB0($s1)
    ctx->pc = 0x40ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_40ef80:
    // 0x40ef80: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x40ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_40ef84:
    // 0x40ef84: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
label_40ef88:
    if (ctx->pc == 0x40EF88u) {
        ctx->pc = 0x40EF88u;
            // 0x40ef88: 0x26240580  addiu       $a0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->pc = 0x40EF8Cu;
        goto label_40ef8c;
    }
    ctx->pc = 0x40EF84u;
    {
        const bool branch_taken_0x40ef84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x40ef84) {
            ctx->pc = 0x40EF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40EF84u;
            // 0x40ef88: 0x26240580  addiu       $a0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40EFECu;
            goto label_40efec;
        }
    }
    ctx->pc = 0x40EF8Cu;
label_40ef8c:
    // 0x40ef8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40ef90:
    // 0x40ef90: 0xc07626c  jal         func_1D89B0
label_40ef94:
    if (ctx->pc == 0x40EF94u) {
        ctx->pc = 0x40EF94u;
            // 0x40ef94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EF98u;
        goto label_40ef98;
    }
    ctx->pc = 0x40EF90u;
    SET_GPR_U32(ctx, 31, 0x40EF98u);
    ctx->pc = 0x40EF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EF90u;
            // 0x40ef94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EF98u; }
        if (ctx->pc != 0x40EF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EF98u; }
        if (ctx->pc != 0x40EF98u) { return; }
    }
    ctx->pc = 0x40EF98u;
label_40ef98:
    // 0x40ef98: 0x8e230d74  lw          $v1, 0xD74($s1)
    ctx->pc = 0x40ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_40ef9c:
    // 0x40ef9c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_40efa0:
    // 0x40efa0: 0x24a5bcd0  addiu       $a1, $a1, -0x4330
    ctx->pc = 0x40efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950096));
label_40efa4:
    // 0x40efa4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x40efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40efa8:
    // 0x40efa8: 0x906202c5  lbu         $v0, 0x2C5($v1)
    ctx->pc = 0x40efa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 709)));
label_40efac:
    // 0x40efac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40efacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_40efb0:
    // 0x40efb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x40efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40efb4:
    // 0x40efb4: 0xc04a508  jal         func_129420
label_40efb8:
    if (ctx->pc == 0x40EFB8u) {
        ctx->pc = 0x40EFB8u;
            // 0x40efb8: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->pc = 0x40EFBCu;
        goto label_40efbc;
    }
    ctx->pc = 0x40EFB4u;
    SET_GPR_U32(ctx, 31, 0x40EFBCu);
    ctx->pc = 0x40EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EFB4u;
            // 0x40efb8: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFBCu; }
        if (ctx->pc != 0x40EFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFBCu; }
        if (ctx->pc != 0x40EFBCu) { return; }
    }
    ctx->pc = 0x40EFBCu;
label_40efbc:
    // 0x40efbc: 0xc142c1c  jal         func_50B070
label_40efc0:
    if (ctx->pc == 0x40EFC0u) {
        ctx->pc = 0x40EFC0u;
            // 0x40efc0: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->pc = 0x40EFC4u;
        goto label_40efc4;
    }
    ctx->pc = 0x40EFBCu;
    SET_GPR_U32(ctx, 31, 0x40EFC4u);
    ctx->pc = 0x40EFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EFBCu;
            // 0x40efc0: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B070u;
    if (runtime->hasFunction(0x50B070u)) {
        auto targetFn = runtime->lookupFunction(0x50B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFC4u; }
        if (ctx->pc != 0x40EFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B070_0x50b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFC4u; }
        if (ctx->pc != 0x40EFC4u) { return; }
    }
    ctx->pc = 0x40EFC4u;
label_40efc4:
    // 0x40efc4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x40efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40efc8:
    // 0x40efc8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40efcc:
    // 0x40efcc: 0xae2309dc  sw          $v1, 0x9DC($s1)
    ctx->pc = 0x40efccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2524), GPR_U32(ctx, 3));
label_40efd0:
    // 0x40efd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40efd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40efd4:
    // 0x40efd4: 0xae2309e0  sw          $v1, 0x9E0($s1)
    ctx->pc = 0x40efd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2528), GPR_U32(ctx, 3));
label_40efd8:
    // 0x40efd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40efdc:
    // 0x40efdc: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x40efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_40efe0:
    // 0x40efe0: 0xc0bdf9c  jal         func_2F7E70
label_40efe4:
    if (ctx->pc == 0x40EFE4u) {
        ctx->pc = 0x40EFE4u;
            // 0x40efe4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x40EFE8u;
        goto label_40efe8;
    }
    ctx->pc = 0x40EFE0u;
    SET_GPR_U32(ctx, 31, 0x40EFE8u);
    ctx->pc = 0x40EFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EFE0u;
            // 0x40efe4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFE8u; }
        if (ctx->pc != 0x40EFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFE8u; }
        if (ctx->pc != 0x40EFE8u) { return; }
    }
    ctx->pc = 0x40EFE8u;
label_40efe8:
    // 0x40efe8: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x40efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_40efec:
    // 0x40efec: 0xc0ab5d4  jal         func_2AD750
label_40eff0:
    if (ctx->pc == 0x40EFF0u) {
        ctx->pc = 0x40EFF0u;
            // 0x40eff0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x40EFF4u;
        goto label_40eff4;
    }
    ctx->pc = 0x40EFECu;
    SET_GPR_U32(ctx, 31, 0x40EFF4u);
    ctx->pc = 0x40EFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EFECu;
            // 0x40eff0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD750u;
    if (runtime->hasFunction(0x2AD750u)) {
        auto targetFn = runtime->lookupFunction(0x2AD750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFF4u; }
        if (ctx->pc != 0x40EFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD750_0x2ad750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EFF4u; }
        if (ctx->pc != 0x40EFF4u) { return; }
    }
    ctx->pc = 0x40EFF4u;
label_40eff4:
    // 0x40eff4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x40eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_40eff8:
    // 0x40eff8: 0xc04f278  jal         func_13C9E0
label_40effc:
    if (ctx->pc == 0x40EFFCu) {
        ctx->pc = 0x40EFFCu;
            // 0x40effc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x40F000u;
        goto label_40f000;
    }
    ctx->pc = 0x40EFF8u;
    SET_GPR_U32(ctx, 31, 0x40F000u);
    ctx->pc = 0x40EFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EFF8u;
            // 0x40effc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F000u; }
        if (ctx->pc != 0x40F000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F000u; }
        if (ctx->pc != 0x40F000u) { return; }
    }
    ctx->pc = 0x40F000u;
label_40f000:
    // 0x40f000: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x40f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_40f004:
    // 0x40f004: 0xc04ce80  jal         func_133A00
label_40f008:
    if (ctx->pc == 0x40F008u) {
        ctx->pc = 0x40F008u;
            // 0x40f008: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x40F00Cu;
        goto label_40f00c;
    }
    ctx->pc = 0x40F004u;
    SET_GPR_U32(ctx, 31, 0x40F00Cu);
    ctx->pc = 0x40F008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F004u;
            // 0x40f008: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F00Cu; }
        if (ctx->pc != 0x40F00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F00Cu; }
        if (ctx->pc != 0x40F00Cu) { return; }
    }
    ctx->pc = 0x40F00Cu;
label_40f00c:
    // 0x40f00c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x40f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40f010:
    // 0x40f010: 0xc04ccf4  jal         func_1333D0
label_40f014:
    if (ctx->pc == 0x40F014u) {
        ctx->pc = 0x40F014u;
            // 0x40f014: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x40F018u;
        goto label_40f018;
    }
    ctx->pc = 0x40F010u;
    SET_GPR_U32(ctx, 31, 0x40F018u);
    ctx->pc = 0x40F014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F010u;
            // 0x40f014: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F018u; }
        if (ctx->pc != 0x40F018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F018u; }
        if (ctx->pc != 0x40F018u) { return; }
    }
    ctx->pc = 0x40F018u;
label_40f018:
    // 0x40f018: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x40f018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_40f01c:
    // 0x40f01c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x40f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40f020:
    // 0x40f020: 0xc04cca0  jal         func_133280
label_40f024:
    if (ctx->pc == 0x40F024u) {
        ctx->pc = 0x40F024u;
            // 0x40f024: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x40F028u;
        goto label_40f028;
    }
    ctx->pc = 0x40F020u;
    SET_GPR_U32(ctx, 31, 0x40F028u);
    ctx->pc = 0x40F024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F020u;
            // 0x40f024: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F028u; }
        if (ctx->pc != 0x40F028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F028u; }
        if (ctx->pc != 0x40F028u) { return; }
    }
    ctx->pc = 0x40F028u;
label_40f028:
    // 0x40f028: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x40f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_40f02c:
    // 0x40f02c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x40f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_40f030:
    // 0x40f030: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x40f030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_40f034:
    // 0x40f034: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x40f034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f038:
    // 0x40f038: 0x3c023edc  lui         $v0, 0x3EDC
    ctx->pc = 0x40f038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16092 << 16));
label_40f03c:
    // 0x40f03c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x40f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_40f040:
    // 0x40f040: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x40f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
label_40f044:
    // 0x40f044: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x40f044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_40f048:
    // 0x40f048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40f048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40f04c:
    // 0x40f04c: 0x0  nop
    ctx->pc = 0x40f04cu;
    // NOP
label_40f050:
    // 0x40f050: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40f050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40f054:
    // 0x40f054: 0xc04f278  jal         func_13C9E0
label_40f058:
    if (ctx->pc == 0x40F058u) {
        ctx->pc = 0x40F058u;
            // 0x40f058: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x40F05Cu;
        goto label_40f05c;
    }
    ctx->pc = 0x40F054u;
    SET_GPR_U32(ctx, 31, 0x40F05Cu);
    ctx->pc = 0x40F058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F054u;
            // 0x40f058: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F05Cu; }
        if (ctx->pc != 0x40F05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F05Cu; }
        if (ctx->pc != 0x40F05Cu) { return; }
    }
    ctx->pc = 0x40F05Cu;
label_40f05c:
    // 0x40f05c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x40f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_40f060:
    // 0x40f060: 0xc04cce8  jal         func_1333A0
label_40f064:
    if (ctx->pc == 0x40F064u) {
        ctx->pc = 0x40F064u;
            // 0x40f064: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x40F068u;
        goto label_40f068;
    }
    ctx->pc = 0x40F060u;
    SET_GPR_U32(ctx, 31, 0x40F068u);
    ctx->pc = 0x40F064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F060u;
            // 0x40f064: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F068u; }
        if (ctx->pc != 0x40F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F068u; }
        if (ctx->pc != 0x40F068u) { return; }
    }
    ctx->pc = 0x40F068u;
label_40f068:
    // 0x40f068: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x40f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_40f06c:
    // 0x40f06c: 0xc04ce80  jal         func_133A00
label_40f070:
    if (ctx->pc == 0x40F070u) {
        ctx->pc = 0x40F070u;
            // 0x40f070: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x40F074u;
        goto label_40f074;
    }
    ctx->pc = 0x40F06Cu;
    SET_GPR_U32(ctx, 31, 0x40F074u);
    ctx->pc = 0x40F070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F06Cu;
            // 0x40f070: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F074u; }
        if (ctx->pc != 0x40F074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F074u; }
        if (ctx->pc != 0x40F074u) { return; }
    }
    ctx->pc = 0x40F074u;
label_40f074:
    // 0x40f074: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x40f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_40f078:
    // 0x40f078: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x40f078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_40f07c:
    // 0x40f07c: 0xc04cca0  jal         func_133280
label_40f080:
    if (ctx->pc == 0x40F080u) {
        ctx->pc = 0x40F080u;
            // 0x40f080: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F084u;
        goto label_40f084;
    }
    ctx->pc = 0x40F07Cu;
    SET_GPR_U32(ctx, 31, 0x40F084u);
    ctx->pc = 0x40F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F07Cu;
            // 0x40f080: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F084u; }
        if (ctx->pc != 0x40F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F084u; }
        if (ctx->pc != 0x40F084u) { return; }
    }
    ctx->pc = 0x40F084u;
label_40f084:
    // 0x40f084: 0x262402d0  addiu       $a0, $s1, 0x2D0
    ctx->pc = 0x40f084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
label_40f088:
    // 0x40f088: 0xc04cc04  jal         func_133010
label_40f08c:
    if (ctx->pc == 0x40F08Cu) {
        ctx->pc = 0x40F08Cu;
            // 0x40f08c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x40F090u;
        goto label_40f090;
    }
    ctx->pc = 0x40F088u;
    SET_GPR_U32(ctx, 31, 0x40F090u);
    ctx->pc = 0x40F08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F088u;
            // 0x40f08c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F090u; }
        if (ctx->pc != 0x40F090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F090u; }
        if (ctx->pc != 0x40F090u) { return; }
    }
    ctx->pc = 0x40F090u;
label_40f090:
    // 0x40f090: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x40f090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_40f094:
    // 0x40f094: 0xc04cc04  jal         func_133010
label_40f098:
    if (ctx->pc == 0x40F098u) {
        ctx->pc = 0x40F098u;
            // 0x40f098: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x40F09Cu;
        goto label_40f09c;
    }
    ctx->pc = 0x40F094u;
    SET_GPR_U32(ctx, 31, 0x40F09Cu);
    ctx->pc = 0x40F098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F094u;
            // 0x40f098: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F09Cu; }
        if (ctx->pc != 0x40F09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F09Cu; }
        if (ctx->pc != 0x40F09Cu) { return; }
    }
    ctx->pc = 0x40F09Cu;
label_40f09c:
    // 0x40f09c: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x40f09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_40f0a0:
    // 0x40f0a0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x40f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f0a4:
    // 0x40f0a4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x40f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f0a8:
    // 0x40f0a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x40f0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_40f0ac:
    // 0x40f0ac: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x40f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_40f0b0:
    // 0x40f0b0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x40f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f0b4:
    // 0x40f0b4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x40f0b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_40f0b8:
    // 0x40f0b8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x40f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_40f0bc:
    // 0x40f0bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x40f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40f0c0:
    // 0x40f0c0: 0xc0a5444  jal         func_295110
label_40f0c4:
    if (ctx->pc == 0x40F0C4u) {
        ctx->pc = 0x40F0C4u;
            // 0x40f0c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40F0C8u;
        goto label_40f0c8;
    }
    ctx->pc = 0x40F0C0u;
    SET_GPR_U32(ctx, 31, 0x40F0C8u);
    ctx->pc = 0x40F0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F0C0u;
            // 0x40f0c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F0C8u; }
        if (ctx->pc != 0x40F0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F0C8u; }
        if (ctx->pc != 0x40F0C8u) { return; }
    }
    ctx->pc = 0x40F0C8u;
label_40f0c8:
    // 0x40f0c8: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x40f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
label_40f0cc:
    // 0x40f0cc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x40f0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_40f0d0:
    // 0x40f0d0: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x40f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_40f0d4:
    // 0x40f0d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x40f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40f0d8:
    // 0x40f0d8: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x40f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
label_40f0dc:
    // 0x40f0dc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x40f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_40f0e0:
    // 0x40f0e0: 0x24c6bd00  addiu       $a2, $a2, -0x4300
    ctx->pc = 0x40f0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_40f0e4:
    // 0x40f0e4: 0xc04cca0  jal         func_133280
label_40f0e8:
    if (ctx->pc == 0x40F0E8u) {
        ctx->pc = 0x40F0E8u;
            // 0x40f0e8: 0xae0002dc  sw          $zero, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
        ctx->pc = 0x40F0ECu;
        goto label_40f0ec;
    }
    ctx->pc = 0x40F0E4u;
    SET_GPR_U32(ctx, 31, 0x40F0ECu);
    ctx->pc = 0x40F0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F0E4u;
            // 0x40f0e8: 0xae0002dc  sw          $zero, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F0ECu; }
        if (ctx->pc != 0x40F0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F0ECu; }
        if (ctx->pc != 0x40F0ECu) { return; }
    }
    ctx->pc = 0x40F0ECu;
label_40f0ec:
    // 0x40f0ec: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x40f0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_40f0f0:
    // 0x40f0f0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x40f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_40f0f4:
    // 0x40f0f4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x40f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_40f0f8:
    // 0x40f0f8: 0xc04cca0  jal         func_133280
label_40f0fc:
    if (ctx->pc == 0x40F0FCu) {
        ctx->pc = 0x40F0FCu;
            // 0x40f0fc: 0x24c6bd10  addiu       $a2, $a2, -0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950160));
        ctx->pc = 0x40F100u;
        goto label_40f100;
    }
    ctx->pc = 0x40F0F8u;
    SET_GPR_U32(ctx, 31, 0x40F100u);
    ctx->pc = 0x40F0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F0F8u;
            // 0x40f0fc: 0x24c6bd10  addiu       $a2, $a2, -0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F100u; }
        if (ctx->pc != 0x40F100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F100u; }
        if (ctx->pc != 0x40F100u) { return; }
    }
    ctx->pc = 0x40F100u;
label_40f100:
    // 0x40f100: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x40f100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_40f104:
    // 0x40f104: 0xc04cc04  jal         func_133010
label_40f108:
    if (ctx->pc == 0x40F108u) {
        ctx->pc = 0x40F108u;
            // 0x40f108: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x40F10Cu;
        goto label_40f10c;
    }
    ctx->pc = 0x40F104u;
    SET_GPR_U32(ctx, 31, 0x40F10Cu);
    ctx->pc = 0x40F108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F104u;
            // 0x40f108: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F10Cu; }
        if (ctx->pc != 0x40F10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F10Cu; }
        if (ctx->pc != 0x40F10Cu) { return; }
    }
    ctx->pc = 0x40F10Cu;
label_40f10c:
    // 0x40f10c: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x40f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_40f110:
    // 0x40f110: 0xc075318  jal         func_1D4C60
label_40f114:
    if (ctx->pc == 0x40F114u) {
        ctx->pc = 0x40F114u;
            // 0x40f114: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x40F118u;
        goto label_40f118;
    }
    ctx->pc = 0x40F110u;
    SET_GPR_U32(ctx, 31, 0x40F118u);
    ctx->pc = 0x40F114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F110u;
            // 0x40f114: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F118u; }
        if (ctx->pc != 0x40F118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F118u; }
        if (ctx->pc != 0x40F118u) { return; }
    }
    ctx->pc = 0x40F118u;
label_40f118:
    // 0x40f118: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x40f118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_40f11c:
    // 0x40f11c: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x40f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_40f120:
    // 0x40f120: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40f120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40f124:
    // 0x40f124: 0xc0c6250  jal         func_318940
label_40f128:
    if (ctx->pc == 0x40F128u) {
        ctx->pc = 0x40F128u;
            // 0x40f128: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F12Cu;
        goto label_40f12c;
    }
    ctx->pc = 0x40F124u;
    SET_GPR_U32(ctx, 31, 0x40F12Cu);
    ctx->pc = 0x40F128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F124u;
            // 0x40f128: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F12Cu; }
        if (ctx->pc != 0x40F12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F12Cu; }
        if (ctx->pc != 0x40F12Cu) { return; }
    }
    ctx->pc = 0x40F12Cu;
label_40f12c:
    // 0x40f12c: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x40f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_40f130:
    // 0x40f130: 0x262408f0  addiu       $a0, $s1, 0x8F0
    ctx->pc = 0x40f130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2288));
label_40f134:
    // 0x40f134: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40f134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40f138:
    // 0x40f138: 0xc0c6250  jal         func_318940
label_40f13c:
    if (ctx->pc == 0x40F13Cu) {
        ctx->pc = 0x40F13Cu;
            // 0x40f13c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F140u;
        goto label_40f140;
    }
    ctx->pc = 0x40F138u;
    SET_GPR_U32(ctx, 31, 0x40F140u);
    ctx->pc = 0x40F13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F138u;
            // 0x40f13c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F140u; }
        if (ctx->pc != 0x40F140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F140u; }
        if (ctx->pc != 0x40F140u) { return; }
    }
    ctx->pc = 0x40F140u;
label_40f140:
    // 0x40f140: 0xc0b9210  jal         func_2E4840
label_40f144:
    if (ctx->pc == 0x40F144u) {
        ctx->pc = 0x40F144u;
            // 0x40f144: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x40F148u;
        goto label_40f148;
    }
    ctx->pc = 0x40F140u;
    SET_GPR_U32(ctx, 31, 0x40F148u);
    ctx->pc = 0x40F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F140u;
            // 0x40f144: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F148u; }
        if (ctx->pc != 0x40F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F148u; }
        if (ctx->pc != 0x40F148u) { return; }
    }
    ctx->pc = 0x40F148u;
label_40f148:
    // 0x40f148: 0xc0b9210  jal         func_2E4840
label_40f14c:
    if (ctx->pc == 0x40F14Cu) {
        ctx->pc = 0x40F14Cu;
            // 0x40f14c: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->pc = 0x40F150u;
        goto label_40f150;
    }
    ctx->pc = 0x40F148u;
    SET_GPR_U32(ctx, 31, 0x40F150u);
    ctx->pc = 0x40F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F148u;
            // 0x40f14c: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F150u; }
        if (ctx->pc != 0x40F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F150u; }
        if (ctx->pc != 0x40F150u) { return; }
    }
    ctx->pc = 0x40F150u;
label_40f150:
    // 0x40f150: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x40f150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_40f154:
    // 0x40f154: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x40f154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40f158:
    // 0x40f158: 0xc075378  jal         func_1D4DE0
label_40f15c:
    if (ctx->pc == 0x40F15Cu) {
        ctx->pc = 0x40F15Cu;
            // 0x40f15c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F160u;
        goto label_40f160;
    }
    ctx->pc = 0x40F158u;
    SET_GPR_U32(ctx, 31, 0x40F160u);
    ctx->pc = 0x40F15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F158u;
            // 0x40f15c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F160u; }
        if (ctx->pc != 0x40F160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F160u; }
        if (ctx->pc != 0x40F160u) { return; }
    }
    ctx->pc = 0x40F160u;
label_40f160:
    // 0x40f160: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x40f160u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_40f164:
    // 0x40f164: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x40f164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_40f168:
    // 0x40f168: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x40f168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40f16c:
    // 0x40f16c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40f16cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40f170:
    // 0x40f170: 0xc0c753c  jal         func_31D4F0
label_40f174:
    if (ctx->pc == 0x40F174u) {
        ctx->pc = 0x40F174u;
            // 0x40f174: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x40F178u;
        goto label_40f178;
    }
    ctx->pc = 0x40F170u;
    SET_GPR_U32(ctx, 31, 0x40F178u);
    ctx->pc = 0x40F174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F170u;
            // 0x40f174: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F178u; }
        if (ctx->pc != 0x40F178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F178u; }
        if (ctx->pc != 0x40F178u) { return; }
    }
    ctx->pc = 0x40F178u;
label_40f178:
    // 0x40f178: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x40f178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40f17c:
    // 0x40f17c: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x40f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_40f180:
    // 0x40f180: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40f180u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40f184:
    // 0x40f184: 0xc0c753c  jal         func_31D4F0
label_40f188:
    if (ctx->pc == 0x40F188u) {
        ctx->pc = 0x40F188u;
            // 0x40f188: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x40F18Cu;
        goto label_40f18c;
    }
    ctx->pc = 0x40F184u;
    SET_GPR_U32(ctx, 31, 0x40F18Cu);
    ctx->pc = 0x40F188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F184u;
            // 0x40f188: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F18Cu; }
        if (ctx->pc != 0x40F18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F18Cu; }
        if (ctx->pc != 0x40F18Cu) { return; }
    }
    ctx->pc = 0x40F18Cu;
label_40f18c:
    // 0x40f18c: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x40f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_40f190:
    // 0x40f190: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x40f190u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_40f194:
    // 0x40f194: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_40f198:
    if (ctx->pc == 0x40F198u) {
        ctx->pc = 0x40F198u;
            // 0x40f198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F19Cu;
        goto label_40f19c;
    }
    ctx->pc = 0x40F194u;
    {
        const bool branch_taken_0x40f194 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x40F198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F194u;
            // 0x40f198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f194) {
            ctx->pc = 0x40F1ACu;
            goto label_40f1ac;
        }
    }
    ctx->pc = 0x40F19Cu;
label_40f19c:
    // 0x40f19c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x40f19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_40f1a0:
    // 0x40f1a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_40f1a4:
    if (ctx->pc == 0x40F1A4u) {
        ctx->pc = 0x40F1A8u;
        goto label_40f1a8;
    }
    ctx->pc = 0x40F1A0u;
    {
        const bool branch_taken_0x40f1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f1a0) {
            ctx->pc = 0x40F1ACu;
            goto label_40f1ac;
        }
    }
    ctx->pc = 0x40F1A8u;
label_40f1a8:
    // 0x40f1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40f1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40f1ac:
    // 0x40f1ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_40f1b0:
    if (ctx->pc == 0x40F1B0u) {
        ctx->pc = 0x40F1B4u;
        goto label_40f1b4;
    }
    ctx->pc = 0x40F1ACu;
    {
        const bool branch_taken_0x40f1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x40f1ac) {
            ctx->pc = 0x40F1C8u;
            goto label_40f1c8;
        }
    }
    ctx->pc = 0x40F1B4u;
label_40f1b4:
    // 0x40f1b4: 0xc075eb4  jal         func_1D7AD0
label_40f1b8:
    if (ctx->pc == 0x40F1B8u) {
        ctx->pc = 0x40F1B8u;
            // 0x40f1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F1BCu;
        goto label_40f1bc;
    }
    ctx->pc = 0x40F1B4u;
    SET_GPR_U32(ctx, 31, 0x40F1BCu);
    ctx->pc = 0x40F1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F1B4u;
            // 0x40f1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F1BCu; }
        if (ctx->pc != 0x40F1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F1BCu; }
        if (ctx->pc != 0x40F1BCu) { return; }
    }
    ctx->pc = 0x40F1BCu;
label_40f1bc:
    // 0x40f1bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_40f1c0:
    if (ctx->pc == 0x40F1C0u) {
        ctx->pc = 0x40F1C4u;
        goto label_40f1c4;
    }
    ctx->pc = 0x40F1BCu;
    {
        const bool branch_taken_0x40f1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40f1bc) {
            ctx->pc = 0x40F1C8u;
            goto label_40f1c8;
        }
    }
    ctx->pc = 0x40F1C4u;
label_40f1c4:
    // 0x40f1c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x40f1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f1c8:
    // 0x40f1c8: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_40f1cc:
    if (ctx->pc == 0x40F1CCu) {
        ctx->pc = 0x40F1CCu;
            // 0x40f1cc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x40F1D0u;
        goto label_40f1d0;
    }
    ctx->pc = 0x40F1C8u;
    {
        const bool branch_taken_0x40f1c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f1c8) {
            ctx->pc = 0x40F1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40F1C8u;
            // 0x40f1cc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40F240u;
            goto label_40f240;
        }
    }
    ctx->pc = 0x40F1D0u;
label_40f1d0:
    // 0x40f1d0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x40f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_40f1d4:
    // 0x40f1d4: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x40f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_40f1d8:
    // 0x40f1d8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x40f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_40f1dc:
    // 0x40f1dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x40f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_40f1e0:
    // 0x40f1e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x40f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40f1e4:
    // 0x40f1e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40f1e8:
    // 0x40f1e8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x40f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_40f1ec:
    // 0x40f1ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40f1f0:
    // 0x40f1f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x40f1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40f1f4:
    // 0x40f1f4: 0xc04cca0  jal         func_133280
label_40f1f8:
    if (ctx->pc == 0x40F1F8u) {
        ctx->pc = 0x40F1F8u;
            // 0x40f1f8: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->pc = 0x40F1FCu;
        goto label_40f1fc;
    }
    ctx->pc = 0x40F1F4u;
    SET_GPR_U32(ctx, 31, 0x40F1FCu);
    ctx->pc = 0x40F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F1F4u;
            // 0x40f1f8: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F1FCu; }
        if (ctx->pc != 0x40F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F1FCu; }
        if (ctx->pc != 0x40F1FCu) { return; }
    }
    ctx->pc = 0x40F1FCu;
label_40f1fc:
    // 0x40f1fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x40f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_40f200:
    // 0x40f200: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x40f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_40f204:
    // 0x40f204: 0xc04cca0  jal         func_133280
label_40f208:
    if (ctx->pc == 0x40F208u) {
        ctx->pc = 0x40F208u;
            // 0x40f208: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F20Cu;
        goto label_40f20c;
    }
    ctx->pc = 0x40F204u;
    SET_GPR_U32(ctx, 31, 0x40F20Cu);
    ctx->pc = 0x40F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F204u;
            // 0x40f208: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F20Cu; }
        if (ctx->pc != 0x40F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F20Cu; }
        if (ctx->pc != 0x40F20Cu) { return; }
    }
    ctx->pc = 0x40F20Cu;
label_40f20c:
    // 0x40f20c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x40f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f210:
    // 0x40f210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40f210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40f214:
    // 0x40f214: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x40f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_40f218:
    // 0x40f218: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x40f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f21c:
    // 0x40f21c: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x40f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_40f220:
    // 0x40f220: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x40f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f224:
    // 0x40f224: 0xc0a950c  jal         func_2A5430
label_40f228:
    if (ctx->pc == 0x40F228u) {
        ctx->pc = 0x40F228u;
            // 0x40f228: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->pc = 0x40F22Cu;
        goto label_40f22c;
    }
    ctx->pc = 0x40F224u;
    SET_GPR_U32(ctx, 31, 0x40F22Cu);
    ctx->pc = 0x40F228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F224u;
            // 0x40f228: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5430u;
    if (runtime->hasFunction(0x2A5430u)) {
        auto targetFn = runtime->lookupFunction(0x2A5430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F22Cu; }
        if (ctx->pc != 0x40F22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5430_0x2a5430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F22Cu; }
        if (ctx->pc != 0x40F22Cu) { return; }
    }
    ctx->pc = 0x40F22Cu;
label_40f22c:
    // 0x40f22c: 0x922509e0  lbu         $a1, 0x9E0($s1)
    ctx->pc = 0x40f22cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2528)));
label_40f230:
    // 0x40f230: 0x8e2609d4  lw          $a2, 0x9D4($s1)
    ctx->pc = 0x40f230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2516)));
label_40f234:
    // 0x40f234: 0xc0765fc  jal         func_1D97F0
label_40f238:
    if (ctx->pc == 0x40F238u) {
        ctx->pc = 0x40F238u;
            // 0x40f238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F23Cu;
        goto label_40f23c;
    }
    ctx->pc = 0x40F234u;
    SET_GPR_U32(ctx, 31, 0x40F23Cu);
    ctx->pc = 0x40F238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F234u;
            // 0x40f238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D97F0u;
    if (runtime->hasFunction(0x1D97F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D97F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F23Cu; }
        if (ctx->pc != 0x40F23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D97F0_0x1d97f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F23Cu; }
        if (ctx->pc != 0x40F23Cu) { return; }
    }
    ctx->pc = 0x40F23Cu;
label_40f23c:
    // 0x40f23c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40f23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40f240:
    // 0x40f240: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40f244:
    // 0x40f244: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40f244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40f248:
    // 0x40f248: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40f248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40f24c:
    // 0x40f24c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40f24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40f250:
    // 0x40f250: 0x3e00008  jr          $ra
label_40f254:
    if (ctx->pc == 0x40F254u) {
        ctx->pc = 0x40F254u;
            // 0x40f254: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x40F258u;
        goto label_40f258;
    }
    ctx->pc = 0x40F250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F250u;
            // 0x40f254: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40F258u;
label_40f258:
    // 0x40f258: 0x0  nop
    ctx->pc = 0x40f258u;
    // NOP
label_40f25c:
    // 0x40f25c: 0x0  nop
    ctx->pc = 0x40f25cu;
    // NOP
label_40f260:
    // 0x40f260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40f264:
    // 0x40f264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40f264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40f268:
    // 0x40f268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40f268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40f26c:
    // 0x40f26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40f26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40f270:
    // 0x40f270: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x40f270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_40f274:
    // 0x40f274: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_40f278:
    if (ctx->pc == 0x40F278u) {
        ctx->pc = 0x40F278u;
            // 0x40f278: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x40F27Cu;
        goto label_40f27c;
    }
    ctx->pc = 0x40F274u;
    {
        const bool branch_taken_0x40f274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f274) {
            ctx->pc = 0x40F278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40F274u;
            // 0x40f278: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40F29Cu;
            goto label_40f29c;
        }
    }
    ctx->pc = 0x40F27Cu;
label_40f27c:
    // 0x40f27c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40f280:
    if (ctx->pc == 0x40F280u) {
        ctx->pc = 0x40F280u;
            // 0x40f280: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x40F284u;
        goto label_40f284;
    }
    ctx->pc = 0x40F27Cu;
    {
        const bool branch_taken_0x40f27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f27c) {
            ctx->pc = 0x40F280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40F27Cu;
            // 0x40f280: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40F298u;
            goto label_40f298;
        }
    }
    ctx->pc = 0x40F284u;
label_40f284:
    // 0x40f284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40f284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40f288:
    // 0x40f288: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40f288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40f28c:
    // 0x40f28c: 0x320f809  jalr        $t9
label_40f290:
    if (ctx->pc == 0x40F290u) {
        ctx->pc = 0x40F290u;
            // 0x40f290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40F294u;
        goto label_40f294;
    }
    ctx->pc = 0x40F28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40F294u);
        ctx->pc = 0x40F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F28Cu;
            // 0x40f290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40F294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40F294u; }
            if (ctx->pc != 0x40F294u) { return; }
        }
        }
    }
    ctx->pc = 0x40F294u;
label_40f294:
    // 0x40f294: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x40f294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_40f298:
    // 0x40f298: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x40f298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_40f29c:
    // 0x40f29c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40f2a0:
    if (ctx->pc == 0x40F2A0u) {
        ctx->pc = 0x40F2A0u;
            // 0x40f2a0: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x40F2A4u;
        goto label_40f2a4;
    }
    ctx->pc = 0x40F29Cu;
    {
        const bool branch_taken_0x40f29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f29c) {
            ctx->pc = 0x40F2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40F29Cu;
            // 0x40f2a0: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40F2B8u;
            goto label_40f2b8;
        }
    }
    ctx->pc = 0x40F2A4u;
label_40f2a4:
    // 0x40f2a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40f2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40f2a8:
    // 0x40f2a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40f2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40f2ac:
    // 0x40f2ac: 0x320f809  jalr        $t9
label_40f2b0:
    if (ctx->pc == 0x40F2B0u) {
        ctx->pc = 0x40F2B0u;
            // 0x40f2b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40F2B4u;
        goto label_40f2b4;
    }
    ctx->pc = 0x40F2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40F2B4u);
        ctx->pc = 0x40F2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F2ACu;
            // 0x40f2b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40F2B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40F2B4u; }
            if (ctx->pc != 0x40F2B4u) { return; }
        }
        }
    }
    ctx->pc = 0x40F2B4u;
label_40f2b4:
    // 0x40f2b4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x40f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_40f2b8:
    // 0x40f2b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40f2bc:
    // 0x40f2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40f2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40f2c0:
    // 0x40f2c0: 0x3e00008  jr          $ra
label_40f2c4:
    if (ctx->pc == 0x40F2C4u) {
        ctx->pc = 0x40F2C4u;
            // 0x40f2c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40F2C8u;
        goto label_40f2c8;
    }
    ctx->pc = 0x40F2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F2C0u;
            // 0x40f2c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40F2C8u;
label_40f2c8:
    // 0x40f2c8: 0x0  nop
    ctx->pc = 0x40f2c8u;
    // NOP
label_40f2cc:
    // 0x40f2cc: 0x0  nop
    ctx->pc = 0x40f2ccu;
    // NOP
label_40f2d0:
    // 0x40f2d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x40f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_40f2d4:
    // 0x40f2d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40f2d8:
    // 0x40f2d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_40f2dc:
    // 0x40f2dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40f2e0:
    // 0x40f2e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40f2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40f2e4:
    // 0x40f2e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40f2e8:
    // 0x40f2e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40f2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40f2ec:
    // 0x40f2ec: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x40f2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_40f2f0:
    // 0x40f2f0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x40f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_40f2f4:
    // 0x40f2f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40f2f8:
    // 0x40f2f8: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
label_40f2fc:
    if (ctx->pc == 0x40F2FCu) {
        ctx->pc = 0x40F2FCu;
            // 0x40f2fc: 0xc6220038  lwc1        $f2, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x40F300u;
        goto label_40f300;
    }
    ctx->pc = 0x40F2F8u;
    {
        const bool branch_taken_0x40f2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40f2f8) {
            ctx->pc = 0x40F2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40F2F8u;
            // 0x40f2fc: 0xc6220038  lwc1        $f2, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40F340u;
            goto label_40f340;
        }
    }
    ctx->pc = 0x40F300u;
label_40f300:
    // 0x40f300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f304:
    // 0x40f304: 0x50830061  beql        $a0, $v1, . + 4 + (0x61 << 2)
label_40f308:
    if (ctx->pc == 0x40F308u) {
        ctx->pc = 0x40F308u;
            // 0x40f308: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x40F30Cu;
        goto label_40f30c;
    }
    ctx->pc = 0x40F304u;
    {
        const bool branch_taken_0x40f304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40f304) {
            ctx->pc = 0x40F308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40F304u;
            // 0x40f308: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40F48Cu;
            goto label_40f48c;
        }
    }
    ctx->pc = 0x40F30Cu;
label_40f30c:
    // 0x40f30c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_40f310:
    if (ctx->pc == 0x40F310u) {
        ctx->pc = 0x40F310u;
            // 0x40f310: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x40F314u;
        goto label_40f314;
    }
    ctx->pc = 0x40F30Cu;
    {
        const bool branch_taken_0x40f30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f30c) {
            ctx->pc = 0x40F310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40F30Cu;
            // 0x40f310: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40F320u;
            goto label_40f320;
        }
    }
    ctx->pc = 0x40F314u;
label_40f314:
    // 0x40f314: 0x10000011  b           . + 4 + (0x11 << 2)
label_40f318:
    if (ctx->pc == 0x40F318u) {
        ctx->pc = 0x40F318u;
            // 0x40f318: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x40F31Cu;
        goto label_40f31c;
    }
    ctx->pc = 0x40F314u;
    {
        const bool branch_taken_0x40f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F314u;
            // 0x40f318: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f314) {
            ctx->pc = 0x40F35Cu;
            goto label_40f35c;
        }
    }
    ctx->pc = 0x40F31Cu;
label_40f31c:
    // 0x40f31c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x40f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f320:
    // 0x40f320: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x40f320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_40f324:
    // 0x40f324: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x40f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f328:
    // 0x40f328: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x40f328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_40f32c:
    // 0x40f32c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x40f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_40f330:
    // 0x40f330: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x40f330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_40f334:
    // 0x40f334: 0x10000008  b           . + 4 + (0x8 << 2)
label_40f338:
    if (ctx->pc == 0x40F338u) {
        ctx->pc = 0x40F338u;
            // 0x40f338: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x40F33Cu;
        goto label_40f33c;
    }
    ctx->pc = 0x40F334u;
    {
        const bool branch_taken_0x40f334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F334u;
            // 0x40f338: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f334) {
            ctx->pc = 0x40F358u;
            goto label_40f358;
        }
    }
    ctx->pc = 0x40F33Cu;
label_40f33c:
    // 0x40f33c: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x40f33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40f340:
    // 0x40f340: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x40f340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f344:
    // 0x40f344: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x40f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f348:
    // 0x40f348: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x40f348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_40f34c:
    // 0x40f34c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x40f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_40f350:
    // 0x40f350: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x40f350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_40f354:
    // 0x40f354: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x40f354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_40f358:
    // 0x40f358: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x40f358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_40f35c:
    // 0x40f35c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f360:
    // 0x40f360: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_40f364:
    if (ctx->pc == 0x40F364u) {
        ctx->pc = 0x40F368u;
        goto label_40f368;
    }
    ctx->pc = 0x40F360u;
    {
        const bool branch_taken_0x40f360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40f360) {
            ctx->pc = 0x40F488u;
            goto label_40f488;
        }
    }
    ctx->pc = 0x40F368u;
label_40f368:
    // 0x40f368: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40f36c:
    // 0x40f36c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x40f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_40f370:
    // 0x40f370: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40f374:
    // 0x40f374: 0xc0a7a88  jal         func_29EA20
label_40f378:
    if (ctx->pc == 0x40F378u) {
        ctx->pc = 0x40F378u;
            // 0x40f378: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x40F37Cu;
        goto label_40f37c;
    }
    ctx->pc = 0x40F374u;
    SET_GPR_U32(ctx, 31, 0x40F37Cu);
    ctx->pc = 0x40F378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F374u;
            // 0x40f378: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F37Cu; }
        if (ctx->pc != 0x40F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F37Cu; }
        if (ctx->pc != 0x40F37Cu) { return; }
    }
    ctx->pc = 0x40F37Cu;
label_40f37c:
    // 0x40f37c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x40f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_40f380:
    // 0x40f380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40f380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40f384:
    // 0x40f384: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_40f388:
    if (ctx->pc == 0x40F388u) {
        ctx->pc = 0x40F388u;
            // 0x40f388: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40F38Cu;
        goto label_40f38c;
    }
    ctx->pc = 0x40F384u;
    {
        const bool branch_taken_0x40f384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F384u;
            // 0x40f388: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f384) {
            ctx->pc = 0x40F3A0u;
            goto label_40f3a0;
        }
    }
    ctx->pc = 0x40F38Cu;
label_40f38c:
    // 0x40f38c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x40f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_40f390:
    // 0x40f390: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x40f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40f394:
    // 0x40f394: 0xc0804bc  jal         func_2012F0
label_40f398:
    if (ctx->pc == 0x40F398u) {
        ctx->pc = 0x40F398u;
            // 0x40f398: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x40F39Cu;
        goto label_40f39c;
    }
    ctx->pc = 0x40F394u;
    SET_GPR_U32(ctx, 31, 0x40F39Cu);
    ctx->pc = 0x40F398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F394u;
            // 0x40f398: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F39Cu; }
        if (ctx->pc != 0x40F39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F39Cu; }
        if (ctx->pc != 0x40F39Cu) { return; }
    }
    ctx->pc = 0x40F39Cu;
label_40f39c:
    // 0x40f39c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40f39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40f3a0:
    // 0x40f3a0: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x40f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_40f3a4:
    // 0x40f3a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x40f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_40f3a8:
    // 0x40f3a8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x40f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40f3ac:
    // 0x40f3ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x40f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40f3b0:
    // 0x40f3b0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x40f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f3b4:
    // 0x40f3b4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x40f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f3b8:
    // 0x40f3b8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x40f3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_40f3bc:
    // 0x40f3bc: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x40f3bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_40f3c0:
    // 0x40f3c0: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x40f3c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_40f3c4:
    // 0x40f3c4: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x40f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_40f3c8:
    // 0x40f3c8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x40f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40f3cc:
    // 0x40f3cc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x40f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40f3d0:
    // 0x40f3d0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x40f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f3d4:
    // 0x40f3d4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x40f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f3d8:
    // 0x40f3d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x40f3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_40f3dc:
    // 0x40f3dc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x40f3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_40f3e0:
    // 0x40f3e0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x40f3e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_40f3e4:
    // 0x40f3e4: 0xc0a3830  jal         func_28E0C0
label_40f3e8:
    if (ctx->pc == 0x40F3E8u) {
        ctx->pc = 0x40F3E8u;
            // 0x40f3e8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x40F3ECu;
        goto label_40f3ec;
    }
    ctx->pc = 0x40F3E4u;
    SET_GPR_U32(ctx, 31, 0x40F3ECu);
    ctx->pc = 0x40F3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F3E4u;
            // 0x40f3e8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F3ECu; }
        if (ctx->pc != 0x40F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F3ECu; }
        if (ctx->pc != 0x40F3ECu) { return; }
    }
    ctx->pc = 0x40F3ECu;
label_40f3ec:
    // 0x40f3ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40f3f0:
    // 0x40f3f0: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x40f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_40f3f4:
    // 0x40f3f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40f3f8:
    // 0x40f3f8: 0xc0a7a88  jal         func_29EA20
label_40f3fc:
    if (ctx->pc == 0x40F3FCu) {
        ctx->pc = 0x40F3FCu;
            // 0x40f3fc: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x40F400u;
        goto label_40f400;
    }
    ctx->pc = 0x40F3F8u;
    SET_GPR_U32(ctx, 31, 0x40F400u);
    ctx->pc = 0x40F3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F3F8u;
            // 0x40f3fc: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F400u; }
        if (ctx->pc != 0x40F400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F400u; }
        if (ctx->pc != 0x40F400u) { return; }
    }
    ctx->pc = 0x40F400u;
label_40f400:
    // 0x40f400: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x40f400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_40f404:
    // 0x40f404: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40f404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40f408:
    // 0x40f408: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_40f40c:
    if (ctx->pc == 0x40F40Cu) {
        ctx->pc = 0x40F40Cu;
            // 0x40f40c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40F410u;
        goto label_40f410;
    }
    ctx->pc = 0x40F408u;
    {
        const bool branch_taken_0x40f408 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F408u;
            // 0x40f40c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f408) {
            ctx->pc = 0x40F43Cu;
            goto label_40f43c;
        }
    }
    ctx->pc = 0x40F410u;
label_40f410:
    // 0x40f410: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x40f410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_40f414:
    // 0x40f414: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x40f414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_40f418:
    // 0x40f418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40f418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40f41c:
    // 0x40f41c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x40f41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40f420:
    // 0x40f420: 0xc08afe0  jal         func_22BF80
label_40f424:
    if (ctx->pc == 0x40F424u) {
        ctx->pc = 0x40F424u;
            // 0x40f424: 0x34470002  ori         $a3, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x40F428u;
        goto label_40f428;
    }
    ctx->pc = 0x40F420u;
    SET_GPR_U32(ctx, 31, 0x40F428u);
    ctx->pc = 0x40F424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F420u;
            // 0x40f424: 0x34470002  ori         $a3, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F428u; }
        if (ctx->pc != 0x40F428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F428u; }
        if (ctx->pc != 0x40F428u) { return; }
    }
    ctx->pc = 0x40F428u;
label_40f428:
    // 0x40f428: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40f42c:
    // 0x40f42c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x40f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_40f430:
    // 0x40f430: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x40f430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_40f434:
    // 0x40f434: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x40f434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_40f438:
    // 0x40f438: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x40f438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_40f43c:
    // 0x40f43c: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x40f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
label_40f440:
    // 0x40f440: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x40f440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40f444:
    // 0x40f444: 0xc08c798  jal         func_231E60
label_40f448:
    if (ctx->pc == 0x40F448u) {
        ctx->pc = 0x40F448u;
            // 0x40f448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F44Cu;
        goto label_40f44c;
    }
    ctx->pc = 0x40F444u;
    SET_GPR_U32(ctx, 31, 0x40F44Cu);
    ctx->pc = 0x40F448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F444u;
            // 0x40f448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F44Cu; }
        if (ctx->pc != 0x40F44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F44Cu; }
        if (ctx->pc != 0x40F44Cu) { return; }
    }
    ctx->pc = 0x40F44Cu;
label_40f44c:
    // 0x40f44c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x40f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_40f450:
    // 0x40f450: 0xc04f278  jal         func_13C9E0
label_40f454:
    if (ctx->pc == 0x40F454u) {
        ctx->pc = 0x40F454u;
            // 0x40f454: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x40F458u;
        goto label_40f458;
    }
    ctx->pc = 0x40F450u;
    SET_GPR_U32(ctx, 31, 0x40F458u);
    ctx->pc = 0x40F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F450u;
            // 0x40f454: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F458u; }
        if (ctx->pc != 0x40F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F458u; }
        if (ctx->pc != 0x40F458u) { return; }
    }
    ctx->pc = 0x40F458u;
label_40f458:
    // 0x40f458: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x40f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40f45c:
    // 0x40f45c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x40f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_40f460:
    // 0x40f460: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x40f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_40f464:
    // 0x40f464: 0xc62e0038  lwc1        $f14, 0x38($s1)
    ctx->pc = 0x40f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_40f468:
    // 0x40f468: 0xc04ce50  jal         func_133940
label_40f46c:
    if (ctx->pc == 0x40F46Cu) {
        ctx->pc = 0x40F46Cu;
            // 0x40f46c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F470u;
        goto label_40f470;
    }
    ctx->pc = 0x40F468u;
    SET_GPR_U32(ctx, 31, 0x40F470u);
    ctx->pc = 0x40F46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F468u;
            // 0x40f46c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F470u; }
        if (ctx->pc != 0x40F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F470u; }
        if (ctx->pc != 0x40F470u) { return; }
    }
    ctx->pc = 0x40F470u;
label_40f470:
    // 0x40f470: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x40f470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_40f474:
    // 0x40f474: 0xc04ce80  jal         func_133A00
label_40f478:
    if (ctx->pc == 0x40F478u) {
        ctx->pc = 0x40F478u;
            // 0x40f478: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x40F47Cu;
        goto label_40f47c;
    }
    ctx->pc = 0x40F474u;
    SET_GPR_U32(ctx, 31, 0x40F47Cu);
    ctx->pc = 0x40F478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F474u;
            // 0x40f478: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F47Cu; }
        if (ctx->pc != 0x40F47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F47Cu; }
        if (ctx->pc != 0x40F47Cu) { return; }
    }
    ctx->pc = 0x40F47Cu;
label_40f47c:
    // 0x40f47c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x40f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_40f480:
    // 0x40f480: 0xc04ccf4  jal         func_1333D0
label_40f484:
    if (ctx->pc == 0x40F484u) {
        ctx->pc = 0x40F484u;
            // 0x40f484: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40F488u;
        goto label_40f488;
    }
    ctx->pc = 0x40F480u;
    SET_GPR_U32(ctx, 31, 0x40F488u);
    ctx->pc = 0x40F484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F480u;
            // 0x40f484: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F488u; }
        if (ctx->pc != 0x40F488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F488u; }
        if (ctx->pc != 0x40F488u) { return; }
    }
    ctx->pc = 0x40F488u;
label_40f488:
    // 0x40f488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40f488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_40f48c:
    // 0x40f48c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40f48cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40f490:
    // 0x40f490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40f490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40f494:
    // 0x40f494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40f494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40f498:
    // 0x40f498: 0x3e00008  jr          $ra
label_40f49c:
    if (ctx->pc == 0x40F49Cu) {
        ctx->pc = 0x40F49Cu;
            // 0x40f49c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x40F4A0u;
        goto label_40f4a0;
    }
    ctx->pc = 0x40F498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F498u;
            // 0x40f49c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40F4A0u;
label_40f4a0:
    // 0x40f4a0: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x40f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_40f4a4:
    // 0x40f4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f4a8:
    // 0x40f4a8: 0x804a576  j           func_1295D8
label_40f4ac:
    if (ctx->pc == 0x40F4ACu) {
        ctx->pc = 0x40F4ACu;
            // 0x40f4ac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x40F4B0u;
        goto label_40f4b0;
    }
    ctx->pc = 0x40F4A8u;
    ctx->pc = 0x40F4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F4A8u;
            // 0x40f4ac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x40F4B0u;
label_40f4b0:
    // 0x40f4b0: 0x81039d4  j           func_40E750
label_40f4b4:
    if (ctx->pc == 0x40F4B4u) {
        ctx->pc = 0x40F4B4u;
            // 0x40f4b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x40F4B8u;
        goto label_40f4b8;
    }
    ctx->pc = 0x40F4B0u;
    ctx->pc = 0x40F4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F4B0u;
            // 0x40f4b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40E750u;
    {
        auto targetFn = runtime->lookupFunction(0x40E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x40F4B8u;
label_40f4b8:
    // 0x40f4b8: 0x0  nop
    ctx->pc = 0x40f4b8u;
    // NOP
label_40f4bc:
    // 0x40f4bc: 0x0  nop
    ctx->pc = 0x40f4bcu;
    // NOP
}
