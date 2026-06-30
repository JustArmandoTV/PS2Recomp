#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DBEB0
// Address: 0x3dbeb0 - 0x3dc400
void sub_003DBEB0_0x3dbeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBEB0_0x3dbeb0");
#endif

    switch (ctx->pc) {
        case 0x3dbeb0u: goto label_3dbeb0;
        case 0x3dbeb4u: goto label_3dbeb4;
        case 0x3dbeb8u: goto label_3dbeb8;
        case 0x3dbebcu: goto label_3dbebc;
        case 0x3dbec0u: goto label_3dbec0;
        case 0x3dbec4u: goto label_3dbec4;
        case 0x3dbec8u: goto label_3dbec8;
        case 0x3dbeccu: goto label_3dbecc;
        case 0x3dbed0u: goto label_3dbed0;
        case 0x3dbed4u: goto label_3dbed4;
        case 0x3dbed8u: goto label_3dbed8;
        case 0x3dbedcu: goto label_3dbedc;
        case 0x3dbee0u: goto label_3dbee0;
        case 0x3dbee4u: goto label_3dbee4;
        case 0x3dbee8u: goto label_3dbee8;
        case 0x3dbeecu: goto label_3dbeec;
        case 0x3dbef0u: goto label_3dbef0;
        case 0x3dbef4u: goto label_3dbef4;
        case 0x3dbef8u: goto label_3dbef8;
        case 0x3dbefcu: goto label_3dbefc;
        case 0x3dbf00u: goto label_3dbf00;
        case 0x3dbf04u: goto label_3dbf04;
        case 0x3dbf08u: goto label_3dbf08;
        case 0x3dbf0cu: goto label_3dbf0c;
        case 0x3dbf10u: goto label_3dbf10;
        case 0x3dbf14u: goto label_3dbf14;
        case 0x3dbf18u: goto label_3dbf18;
        case 0x3dbf1cu: goto label_3dbf1c;
        case 0x3dbf20u: goto label_3dbf20;
        case 0x3dbf24u: goto label_3dbf24;
        case 0x3dbf28u: goto label_3dbf28;
        case 0x3dbf2cu: goto label_3dbf2c;
        case 0x3dbf30u: goto label_3dbf30;
        case 0x3dbf34u: goto label_3dbf34;
        case 0x3dbf38u: goto label_3dbf38;
        case 0x3dbf3cu: goto label_3dbf3c;
        case 0x3dbf40u: goto label_3dbf40;
        case 0x3dbf44u: goto label_3dbf44;
        case 0x3dbf48u: goto label_3dbf48;
        case 0x3dbf4cu: goto label_3dbf4c;
        case 0x3dbf50u: goto label_3dbf50;
        case 0x3dbf54u: goto label_3dbf54;
        case 0x3dbf58u: goto label_3dbf58;
        case 0x3dbf5cu: goto label_3dbf5c;
        case 0x3dbf60u: goto label_3dbf60;
        case 0x3dbf64u: goto label_3dbf64;
        case 0x3dbf68u: goto label_3dbf68;
        case 0x3dbf6cu: goto label_3dbf6c;
        case 0x3dbf70u: goto label_3dbf70;
        case 0x3dbf74u: goto label_3dbf74;
        case 0x3dbf78u: goto label_3dbf78;
        case 0x3dbf7cu: goto label_3dbf7c;
        case 0x3dbf80u: goto label_3dbf80;
        case 0x3dbf84u: goto label_3dbf84;
        case 0x3dbf88u: goto label_3dbf88;
        case 0x3dbf8cu: goto label_3dbf8c;
        case 0x3dbf90u: goto label_3dbf90;
        case 0x3dbf94u: goto label_3dbf94;
        case 0x3dbf98u: goto label_3dbf98;
        case 0x3dbf9cu: goto label_3dbf9c;
        case 0x3dbfa0u: goto label_3dbfa0;
        case 0x3dbfa4u: goto label_3dbfa4;
        case 0x3dbfa8u: goto label_3dbfa8;
        case 0x3dbfacu: goto label_3dbfac;
        case 0x3dbfb0u: goto label_3dbfb0;
        case 0x3dbfb4u: goto label_3dbfb4;
        case 0x3dbfb8u: goto label_3dbfb8;
        case 0x3dbfbcu: goto label_3dbfbc;
        case 0x3dbfc0u: goto label_3dbfc0;
        case 0x3dbfc4u: goto label_3dbfc4;
        case 0x3dbfc8u: goto label_3dbfc8;
        case 0x3dbfccu: goto label_3dbfcc;
        case 0x3dbfd0u: goto label_3dbfd0;
        case 0x3dbfd4u: goto label_3dbfd4;
        case 0x3dbfd8u: goto label_3dbfd8;
        case 0x3dbfdcu: goto label_3dbfdc;
        case 0x3dbfe0u: goto label_3dbfe0;
        case 0x3dbfe4u: goto label_3dbfe4;
        case 0x3dbfe8u: goto label_3dbfe8;
        case 0x3dbfecu: goto label_3dbfec;
        case 0x3dbff0u: goto label_3dbff0;
        case 0x3dbff4u: goto label_3dbff4;
        case 0x3dbff8u: goto label_3dbff8;
        case 0x3dbffcu: goto label_3dbffc;
        case 0x3dc000u: goto label_3dc000;
        case 0x3dc004u: goto label_3dc004;
        case 0x3dc008u: goto label_3dc008;
        case 0x3dc00cu: goto label_3dc00c;
        case 0x3dc010u: goto label_3dc010;
        case 0x3dc014u: goto label_3dc014;
        case 0x3dc018u: goto label_3dc018;
        case 0x3dc01cu: goto label_3dc01c;
        case 0x3dc020u: goto label_3dc020;
        case 0x3dc024u: goto label_3dc024;
        case 0x3dc028u: goto label_3dc028;
        case 0x3dc02cu: goto label_3dc02c;
        case 0x3dc030u: goto label_3dc030;
        case 0x3dc034u: goto label_3dc034;
        case 0x3dc038u: goto label_3dc038;
        case 0x3dc03cu: goto label_3dc03c;
        case 0x3dc040u: goto label_3dc040;
        case 0x3dc044u: goto label_3dc044;
        case 0x3dc048u: goto label_3dc048;
        case 0x3dc04cu: goto label_3dc04c;
        case 0x3dc050u: goto label_3dc050;
        case 0x3dc054u: goto label_3dc054;
        case 0x3dc058u: goto label_3dc058;
        case 0x3dc05cu: goto label_3dc05c;
        case 0x3dc060u: goto label_3dc060;
        case 0x3dc064u: goto label_3dc064;
        case 0x3dc068u: goto label_3dc068;
        case 0x3dc06cu: goto label_3dc06c;
        case 0x3dc070u: goto label_3dc070;
        case 0x3dc074u: goto label_3dc074;
        case 0x3dc078u: goto label_3dc078;
        case 0x3dc07cu: goto label_3dc07c;
        case 0x3dc080u: goto label_3dc080;
        case 0x3dc084u: goto label_3dc084;
        case 0x3dc088u: goto label_3dc088;
        case 0x3dc08cu: goto label_3dc08c;
        case 0x3dc090u: goto label_3dc090;
        case 0x3dc094u: goto label_3dc094;
        case 0x3dc098u: goto label_3dc098;
        case 0x3dc09cu: goto label_3dc09c;
        case 0x3dc0a0u: goto label_3dc0a0;
        case 0x3dc0a4u: goto label_3dc0a4;
        case 0x3dc0a8u: goto label_3dc0a8;
        case 0x3dc0acu: goto label_3dc0ac;
        case 0x3dc0b0u: goto label_3dc0b0;
        case 0x3dc0b4u: goto label_3dc0b4;
        case 0x3dc0b8u: goto label_3dc0b8;
        case 0x3dc0bcu: goto label_3dc0bc;
        case 0x3dc0c0u: goto label_3dc0c0;
        case 0x3dc0c4u: goto label_3dc0c4;
        case 0x3dc0c8u: goto label_3dc0c8;
        case 0x3dc0ccu: goto label_3dc0cc;
        case 0x3dc0d0u: goto label_3dc0d0;
        case 0x3dc0d4u: goto label_3dc0d4;
        case 0x3dc0d8u: goto label_3dc0d8;
        case 0x3dc0dcu: goto label_3dc0dc;
        case 0x3dc0e0u: goto label_3dc0e0;
        case 0x3dc0e4u: goto label_3dc0e4;
        case 0x3dc0e8u: goto label_3dc0e8;
        case 0x3dc0ecu: goto label_3dc0ec;
        case 0x3dc0f0u: goto label_3dc0f0;
        case 0x3dc0f4u: goto label_3dc0f4;
        case 0x3dc0f8u: goto label_3dc0f8;
        case 0x3dc0fcu: goto label_3dc0fc;
        case 0x3dc100u: goto label_3dc100;
        case 0x3dc104u: goto label_3dc104;
        case 0x3dc108u: goto label_3dc108;
        case 0x3dc10cu: goto label_3dc10c;
        case 0x3dc110u: goto label_3dc110;
        case 0x3dc114u: goto label_3dc114;
        case 0x3dc118u: goto label_3dc118;
        case 0x3dc11cu: goto label_3dc11c;
        case 0x3dc120u: goto label_3dc120;
        case 0x3dc124u: goto label_3dc124;
        case 0x3dc128u: goto label_3dc128;
        case 0x3dc12cu: goto label_3dc12c;
        case 0x3dc130u: goto label_3dc130;
        case 0x3dc134u: goto label_3dc134;
        case 0x3dc138u: goto label_3dc138;
        case 0x3dc13cu: goto label_3dc13c;
        case 0x3dc140u: goto label_3dc140;
        case 0x3dc144u: goto label_3dc144;
        case 0x3dc148u: goto label_3dc148;
        case 0x3dc14cu: goto label_3dc14c;
        case 0x3dc150u: goto label_3dc150;
        case 0x3dc154u: goto label_3dc154;
        case 0x3dc158u: goto label_3dc158;
        case 0x3dc15cu: goto label_3dc15c;
        case 0x3dc160u: goto label_3dc160;
        case 0x3dc164u: goto label_3dc164;
        case 0x3dc168u: goto label_3dc168;
        case 0x3dc16cu: goto label_3dc16c;
        case 0x3dc170u: goto label_3dc170;
        case 0x3dc174u: goto label_3dc174;
        case 0x3dc178u: goto label_3dc178;
        case 0x3dc17cu: goto label_3dc17c;
        case 0x3dc180u: goto label_3dc180;
        case 0x3dc184u: goto label_3dc184;
        case 0x3dc188u: goto label_3dc188;
        case 0x3dc18cu: goto label_3dc18c;
        case 0x3dc190u: goto label_3dc190;
        case 0x3dc194u: goto label_3dc194;
        case 0x3dc198u: goto label_3dc198;
        case 0x3dc19cu: goto label_3dc19c;
        case 0x3dc1a0u: goto label_3dc1a0;
        case 0x3dc1a4u: goto label_3dc1a4;
        case 0x3dc1a8u: goto label_3dc1a8;
        case 0x3dc1acu: goto label_3dc1ac;
        case 0x3dc1b0u: goto label_3dc1b0;
        case 0x3dc1b4u: goto label_3dc1b4;
        case 0x3dc1b8u: goto label_3dc1b8;
        case 0x3dc1bcu: goto label_3dc1bc;
        case 0x3dc1c0u: goto label_3dc1c0;
        case 0x3dc1c4u: goto label_3dc1c4;
        case 0x3dc1c8u: goto label_3dc1c8;
        case 0x3dc1ccu: goto label_3dc1cc;
        case 0x3dc1d0u: goto label_3dc1d0;
        case 0x3dc1d4u: goto label_3dc1d4;
        case 0x3dc1d8u: goto label_3dc1d8;
        case 0x3dc1dcu: goto label_3dc1dc;
        case 0x3dc1e0u: goto label_3dc1e0;
        case 0x3dc1e4u: goto label_3dc1e4;
        case 0x3dc1e8u: goto label_3dc1e8;
        case 0x3dc1ecu: goto label_3dc1ec;
        case 0x3dc1f0u: goto label_3dc1f0;
        case 0x3dc1f4u: goto label_3dc1f4;
        case 0x3dc1f8u: goto label_3dc1f8;
        case 0x3dc1fcu: goto label_3dc1fc;
        case 0x3dc200u: goto label_3dc200;
        case 0x3dc204u: goto label_3dc204;
        case 0x3dc208u: goto label_3dc208;
        case 0x3dc20cu: goto label_3dc20c;
        case 0x3dc210u: goto label_3dc210;
        case 0x3dc214u: goto label_3dc214;
        case 0x3dc218u: goto label_3dc218;
        case 0x3dc21cu: goto label_3dc21c;
        case 0x3dc220u: goto label_3dc220;
        case 0x3dc224u: goto label_3dc224;
        case 0x3dc228u: goto label_3dc228;
        case 0x3dc22cu: goto label_3dc22c;
        case 0x3dc230u: goto label_3dc230;
        case 0x3dc234u: goto label_3dc234;
        case 0x3dc238u: goto label_3dc238;
        case 0x3dc23cu: goto label_3dc23c;
        case 0x3dc240u: goto label_3dc240;
        case 0x3dc244u: goto label_3dc244;
        case 0x3dc248u: goto label_3dc248;
        case 0x3dc24cu: goto label_3dc24c;
        case 0x3dc250u: goto label_3dc250;
        case 0x3dc254u: goto label_3dc254;
        case 0x3dc258u: goto label_3dc258;
        case 0x3dc25cu: goto label_3dc25c;
        case 0x3dc260u: goto label_3dc260;
        case 0x3dc264u: goto label_3dc264;
        case 0x3dc268u: goto label_3dc268;
        case 0x3dc26cu: goto label_3dc26c;
        case 0x3dc270u: goto label_3dc270;
        case 0x3dc274u: goto label_3dc274;
        case 0x3dc278u: goto label_3dc278;
        case 0x3dc27cu: goto label_3dc27c;
        case 0x3dc280u: goto label_3dc280;
        case 0x3dc284u: goto label_3dc284;
        case 0x3dc288u: goto label_3dc288;
        case 0x3dc28cu: goto label_3dc28c;
        case 0x3dc290u: goto label_3dc290;
        case 0x3dc294u: goto label_3dc294;
        case 0x3dc298u: goto label_3dc298;
        case 0x3dc29cu: goto label_3dc29c;
        case 0x3dc2a0u: goto label_3dc2a0;
        case 0x3dc2a4u: goto label_3dc2a4;
        case 0x3dc2a8u: goto label_3dc2a8;
        case 0x3dc2acu: goto label_3dc2ac;
        case 0x3dc2b0u: goto label_3dc2b0;
        case 0x3dc2b4u: goto label_3dc2b4;
        case 0x3dc2b8u: goto label_3dc2b8;
        case 0x3dc2bcu: goto label_3dc2bc;
        case 0x3dc2c0u: goto label_3dc2c0;
        case 0x3dc2c4u: goto label_3dc2c4;
        case 0x3dc2c8u: goto label_3dc2c8;
        case 0x3dc2ccu: goto label_3dc2cc;
        case 0x3dc2d0u: goto label_3dc2d0;
        case 0x3dc2d4u: goto label_3dc2d4;
        case 0x3dc2d8u: goto label_3dc2d8;
        case 0x3dc2dcu: goto label_3dc2dc;
        case 0x3dc2e0u: goto label_3dc2e0;
        case 0x3dc2e4u: goto label_3dc2e4;
        case 0x3dc2e8u: goto label_3dc2e8;
        case 0x3dc2ecu: goto label_3dc2ec;
        case 0x3dc2f0u: goto label_3dc2f0;
        case 0x3dc2f4u: goto label_3dc2f4;
        case 0x3dc2f8u: goto label_3dc2f8;
        case 0x3dc2fcu: goto label_3dc2fc;
        case 0x3dc300u: goto label_3dc300;
        case 0x3dc304u: goto label_3dc304;
        case 0x3dc308u: goto label_3dc308;
        case 0x3dc30cu: goto label_3dc30c;
        case 0x3dc310u: goto label_3dc310;
        case 0x3dc314u: goto label_3dc314;
        case 0x3dc318u: goto label_3dc318;
        case 0x3dc31cu: goto label_3dc31c;
        case 0x3dc320u: goto label_3dc320;
        case 0x3dc324u: goto label_3dc324;
        case 0x3dc328u: goto label_3dc328;
        case 0x3dc32cu: goto label_3dc32c;
        case 0x3dc330u: goto label_3dc330;
        case 0x3dc334u: goto label_3dc334;
        case 0x3dc338u: goto label_3dc338;
        case 0x3dc33cu: goto label_3dc33c;
        case 0x3dc340u: goto label_3dc340;
        case 0x3dc344u: goto label_3dc344;
        case 0x3dc348u: goto label_3dc348;
        case 0x3dc34cu: goto label_3dc34c;
        case 0x3dc350u: goto label_3dc350;
        case 0x3dc354u: goto label_3dc354;
        case 0x3dc358u: goto label_3dc358;
        case 0x3dc35cu: goto label_3dc35c;
        case 0x3dc360u: goto label_3dc360;
        case 0x3dc364u: goto label_3dc364;
        case 0x3dc368u: goto label_3dc368;
        case 0x3dc36cu: goto label_3dc36c;
        case 0x3dc370u: goto label_3dc370;
        case 0x3dc374u: goto label_3dc374;
        case 0x3dc378u: goto label_3dc378;
        case 0x3dc37cu: goto label_3dc37c;
        case 0x3dc380u: goto label_3dc380;
        case 0x3dc384u: goto label_3dc384;
        case 0x3dc388u: goto label_3dc388;
        case 0x3dc38cu: goto label_3dc38c;
        case 0x3dc390u: goto label_3dc390;
        case 0x3dc394u: goto label_3dc394;
        case 0x3dc398u: goto label_3dc398;
        case 0x3dc39cu: goto label_3dc39c;
        case 0x3dc3a0u: goto label_3dc3a0;
        case 0x3dc3a4u: goto label_3dc3a4;
        case 0x3dc3a8u: goto label_3dc3a8;
        case 0x3dc3acu: goto label_3dc3ac;
        case 0x3dc3b0u: goto label_3dc3b0;
        case 0x3dc3b4u: goto label_3dc3b4;
        case 0x3dc3b8u: goto label_3dc3b8;
        case 0x3dc3bcu: goto label_3dc3bc;
        case 0x3dc3c0u: goto label_3dc3c0;
        case 0x3dc3c4u: goto label_3dc3c4;
        case 0x3dc3c8u: goto label_3dc3c8;
        case 0x3dc3ccu: goto label_3dc3cc;
        case 0x3dc3d0u: goto label_3dc3d0;
        case 0x3dc3d4u: goto label_3dc3d4;
        case 0x3dc3d8u: goto label_3dc3d8;
        case 0x3dc3dcu: goto label_3dc3dc;
        case 0x3dc3e0u: goto label_3dc3e0;
        case 0x3dc3e4u: goto label_3dc3e4;
        case 0x3dc3e8u: goto label_3dc3e8;
        case 0x3dc3ecu: goto label_3dc3ec;
        case 0x3dc3f0u: goto label_3dc3f0;
        case 0x3dc3f4u: goto label_3dc3f4;
        case 0x3dc3f8u: goto label_3dc3f8;
        case 0x3dc3fcu: goto label_3dc3fc;
        default: break;
    }

    ctx->pc = 0x3dbeb0u;

label_3dbeb0:
    // 0x3dbeb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3dbeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3dbeb4:
    // 0x3dbeb4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3dbeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3dbeb8:
    // 0x3dbeb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3dbeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3dbebc:
    // 0x3dbebc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3dbebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3dbec0:
    // 0x3dbec0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3dbec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3dbec4:
    // 0x3dbec4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3dbec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3dbec8:
    // 0x3dbec8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3dbec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3dbecc:
    // 0x3dbecc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3dbeccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dbed0:
    // 0x3dbed0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dbed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3dbed4:
    // 0x3dbed4: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x3dbed4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_3dbed8:
    // 0x3dbed8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dbed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3dbedc:
    // 0x3dbedc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3dbedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3dbee0:
    // 0x3dbee0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dbee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3dbee4:
    // 0x3dbee4: 0x26940e84  addiu       $s4, $s4, 0xE84
    ctx->pc = 0x3dbee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3716));
label_3dbee8:
    // 0x3dbee8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dbee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3dbeec:
    // 0x3dbeec: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x3dbeecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_3dbef0:
    // 0x3dbef0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3dbef0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3dbef4:
    // 0x3dbef4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dbef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3dbef8:
    // 0x3dbef8: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x3dbef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_3dbefc:
    // 0x3dbefc: 0xc4741360  lwc1        $f20, 0x1360($v1)
    ctx->pc = 0x3dbefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dbf00:
    // 0x3dbf00: 0x8c97077c  lw          $s7, 0x77C($a0)
    ctx->pc = 0x3dbf00u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_3dbf04:
    // 0x3dbf04: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3dbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3dbf08:
    // 0x3dbf08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dbf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dbf0c:
    // 0x3dbf0c: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
label_3dbf10:
    if (ctx->pc == 0x3DBF10u) {
        ctx->pc = 0x3DBF14u;
        goto label_3dbf14;
    }
    ctx->pc = 0x3DBF0Cu;
    {
        const bool branch_taken_0x3dbf0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dbf0c) {
            ctx->pc = 0x3DC008u;
            goto label_3dc008;
        }
    }
    ctx->pc = 0x3DBF14u;
label_3dbf14:
    // 0x3dbf14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dbf18:
    // 0x3dbf18: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_3dbf1c:
    if (ctx->pc == 0x3DBF1Cu) {
        ctx->pc = 0x3DBF20u;
        goto label_3dbf20;
    }
    ctx->pc = 0x3DBF18u;
    {
        const bool branch_taken_0x3dbf18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dbf18) {
            ctx->pc = 0x3DBF30u;
            goto label_3dbf30;
        }
    }
    ctx->pc = 0x3DBF20u;
label_3dbf20:
    // 0x3dbf20: 0x10800123  beqz        $a0, . + 4 + (0x123 << 2)
label_3dbf24:
    if (ctx->pc == 0x3DBF24u) {
        ctx->pc = 0x3DBF28u;
        goto label_3dbf28;
    }
    ctx->pc = 0x3DBF20u;
    {
        const bool branch_taken_0x3dbf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbf20) {
            ctx->pc = 0x3DC3B0u;
            goto label_3dc3b0;
        }
    }
    ctx->pc = 0x3DBF28u;
label_3dbf28:
    // 0x3dbf28: 0x10000121  b           . + 4 + (0x121 << 2)
label_3dbf2c:
    if (ctx->pc == 0x3DBF2Cu) {
        ctx->pc = 0x3DBF30u;
        goto label_3dbf30;
    }
    ctx->pc = 0x3DBF28u;
    {
        const bool branch_taken_0x3dbf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbf28) {
            ctx->pc = 0x3DC3B0u;
            goto label_3dc3b0;
        }
    }
    ctx->pc = 0x3DBF30u;
label_3dbf30:
    // 0x3dbf30: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x3dbf30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3dbf34:
    // 0x3dbf34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3dbf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3dbf38:
    // 0x3dbf38: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x3dbf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_3dbf3c:
    // 0x3dbf3c: 0xc04cc90  jal         func_133240
label_3dbf40:
    if (ctx->pc == 0x3DBF40u) {
        ctx->pc = 0x3DBF40u;
            // 0x3dbf40: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x3DBF44u;
        goto label_3dbf44;
    }
    ctx->pc = 0x3DBF3Cu;
    SET_GPR_U32(ctx, 31, 0x3DBF44u);
    ctx->pc = 0x3DBF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBF3Cu;
            // 0x3dbf40: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF44u; }
        if (ctx->pc != 0x3DBF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF44u; }
        if (ctx->pc != 0x3DBF44u) { return; }
    }
    ctx->pc = 0x3DBF44u;
label_3dbf44:
    // 0x3dbf44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3dbf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3dbf48:
    // 0x3dbf48: 0xc04cc44  jal         func_133110
label_3dbf4c:
    if (ctx->pc == 0x3DBF4Cu) {
        ctx->pc = 0x3DBF4Cu;
            // 0x3dbf4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBF50u;
        goto label_3dbf50;
    }
    ctx->pc = 0x3DBF48u;
    SET_GPR_U32(ctx, 31, 0x3DBF50u);
    ctx->pc = 0x3DBF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBF48u;
            // 0x3dbf4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF50u; }
        if (ctx->pc != 0x3DBF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF50u; }
        if (ctx->pc != 0x3DBF50u) { return; }
    }
    ctx->pc = 0x3DBF50u;
label_3dbf50:
    // 0x3dbf50: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3dbf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3dbf54:
    // 0x3dbf54: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3dbf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3dbf58:
    // 0x3dbf58: 0xc075378  jal         func_1D4DE0
label_3dbf5c:
    if (ctx->pc == 0x3DBF5Cu) {
        ctx->pc = 0x3DBF5Cu;
            // 0x3dbf5c: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x3DBF60u;
        goto label_3dbf60;
    }
    ctx->pc = 0x3DBF58u;
    SET_GPR_U32(ctx, 31, 0x3DBF60u);
    ctx->pc = 0x3DBF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBF58u;
            // 0x3dbf5c: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF60u; }
        if (ctx->pc != 0x3DBF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF60u; }
        if (ctx->pc != 0x3DBF60u) { return; }
    }
    ctx->pc = 0x3DBF60u;
label_3dbf60:
    // 0x3dbf60: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x3dbf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dbf64:
    // 0x3dbf64: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3dbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_3dbf68:
    // 0x3dbf68: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3dbf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3dbf6c:
    // 0x3dbf6c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3dbf6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dbf70:
    // 0x3dbf70: 0xc0c753c  jal         func_31D4F0
label_3dbf74:
    if (ctx->pc == 0x3DBF74u) {
        ctx->pc = 0x3DBF74u;
            // 0x3dbf74: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DBF78u;
        goto label_3dbf78;
    }
    ctx->pc = 0x3DBF70u;
    SET_GPR_U32(ctx, 31, 0x3DBF78u);
    ctx->pc = 0x3DBF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBF70u;
            // 0x3dbf74: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF78u; }
        if (ctx->pc != 0x3DBF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF78u; }
        if (ctx->pc != 0x3DBF78u) { return; }
    }
    ctx->pc = 0x3DBF78u;
label_3dbf78:
    // 0x3dbf78: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3dbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3dbf7c:
    // 0x3dbf7c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3dbf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3dbf80:
    // 0x3dbf80: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x3dbf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dbf84:
    // 0x3dbf84: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x3dbf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3dbf88:
    // 0x3dbf88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3dbf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3dbf8c:
    // 0x3dbf8c: 0xc0c753c  jal         func_31D4F0
label_3dbf90:
    if (ctx->pc == 0x3DBF90u) {
        ctx->pc = 0x3DBF90u;
            // 0x3dbf90: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->pc = 0x3DBF94u;
        goto label_3dbf94;
    }
    ctx->pc = 0x3DBF8Cu;
    SET_GPR_U32(ctx, 31, 0x3DBF94u);
    ctx->pc = 0x3DBF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBF8Cu;
            // 0x3dbf90: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF94u; }
        if (ctx->pc != 0x3DBF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBF94u; }
        if (ctx->pc != 0x3DBF94u) { return; }
    }
    ctx->pc = 0x3DBF94u;
label_3dbf94:
    // 0x3dbf94: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3dbf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3dbf98:
    // 0x3dbf98: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3dbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3dbf9c:
    // 0x3dbf9c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3dbf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3dbfa0:
    // 0x3dbfa0: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3dbfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3dbfa4:
    // 0x3dbfa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dbfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dbfa8:
    // 0x3dbfa8: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3dbfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3dbfac:
    // 0x3dbfac: 0xc0c6250  jal         func_318940
label_3dbfb0:
    if (ctx->pc == 0x3DBFB0u) {
        ctx->pc = 0x3DBFB0u;
            // 0x3dbfb0: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x3DBFB4u;
        goto label_3dbfb4;
    }
    ctx->pc = 0x3DBFACu;
    SET_GPR_U32(ctx, 31, 0x3DBFB4u);
    ctx->pc = 0x3DBFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBFACu;
            // 0x3dbfb0: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBFB4u; }
        if (ctx->pc != 0x3DBFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBFB4u; }
        if (ctx->pc != 0x3DBFB4u) { return; }
    }
    ctx->pc = 0x3DBFB4u;
label_3dbfb4:
    // 0x3dbfb4: 0x8e030d9c  lw          $v1, 0xD9C($s0)
    ctx->pc = 0x3dbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_3dbfb8:
    // 0x3dbfb8: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3dbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3dbfbc:
    // 0x3dbfbc: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x3dbfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3dbfc0:
    // 0x3dbfc0: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x3dbfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_3dbfc4:
    // 0x3dbfc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3dbfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3dbfc8:
    // 0x3dbfc8: 0xc04cc34  jal         func_1330D0
label_3dbfcc:
    if (ctx->pc == 0x3DBFCCu) {
        ctx->pc = 0x3DBFCCu;
            // 0x3dbfcc: 0xae020d9c  sw          $v0, 0xD9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x3DBFD0u;
        goto label_3dbfd0;
    }
    ctx->pc = 0x3DBFC8u;
    SET_GPR_U32(ctx, 31, 0x3DBFD0u);
    ctx->pc = 0x3DBFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBFC8u;
            // 0x3dbfcc: 0xae020d9c  sw          $v0, 0xD9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBFD0u; }
        if (ctx->pc != 0x3DBFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBFD0u; }
        if (ctx->pc != 0x3DBFD0u) { return; }
    }
    ctx->pc = 0x3DBFD0u;
label_3dbfd0:
    // 0x3dbfd0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x3dbfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_3dbfd4:
    // 0x3dbfd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3dbfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dbfd8:
    // 0x3dbfd8: 0x0  nop
    ctx->pc = 0x3dbfd8u;
    // NOP
label_3dbfdc:
    // 0x3dbfdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3dbfdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dbfe0:
    // 0x3dbfe0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3dbfe4:
    if (ctx->pc == 0x3DBFE4u) {
        ctx->pc = 0x3DBFE8u;
        goto label_3dbfe8;
    }
    ctx->pc = 0x3DBFE0u;
    {
        const bool branch_taken_0x3dbfe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dbfe0) {
            ctx->pc = 0x3DBFF8u;
            goto label_3dbff8;
        }
    }
    ctx->pc = 0x3DBFE8u;
label_3dbfe8:
    // 0x3dbfe8: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x3dbfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
label_3dbfec:
    // 0x3dbfec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dbff0:
    // 0x3dbff0: 0x100000ef  b           . + 4 + (0xEF << 2)
label_3dbff4:
    if (ctx->pc == 0x3DBFF4u) {
        ctx->pc = 0x3DBFF4u;
            // 0x3dbff4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3DBFF8u;
        goto label_3dbff8;
    }
    ctx->pc = 0x3DBFF0u;
    {
        const bool branch_taken_0x3dbff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBFF0u;
            // 0x3dbff4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbff0) {
            ctx->pc = 0x3DC3B0u;
            goto label_3dc3b0;
        }
    }
    ctx->pc = 0x3DBFF8u;
label_3dbff8:
    // 0x3dbff8: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x3dbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_3dbffc:
    // 0x3dbffc: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3dbffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3dc000:
    // 0x3dc000: 0x100000eb  b           . + 4 + (0xEB << 2)
label_3dc004:
    if (ctx->pc == 0x3DC004u) {
        ctx->pc = 0x3DC004u;
            // 0x3dc004: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->pc = 0x3DC008u;
        goto label_3dc008;
    }
    ctx->pc = 0x3DC000u;
    {
        const bool branch_taken_0x3dc000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC000u;
            // 0x3dc004: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc000) {
            ctx->pc = 0x3DC3B0u;
            goto label_3dc3b0;
        }
    }
    ctx->pc = 0x3DC008u;
label_3dc008:
    // 0x3dc008: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x3dc008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3dc00c:
    // 0x3dc00c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3dc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3dc010:
    // 0x3dc010: 0x8e040d9c  lw          $a0, 0xD9C($s0)
    ctx->pc = 0x3dc010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_3dc014:
    // 0x3dc014: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3dc014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3dc018:
    // 0x3dc018: 0xae030d9c  sw          $v1, 0xD9C($s0)
    ctx->pc = 0x3dc018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
label_3dc01c:
    // 0x3dc01c: 0x8ea600a8  lw          $a2, 0xA8($s5)
    ctx->pc = 0x3dc01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_3dc020:
    // 0x3dc020: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_3dc024:
    if (ctx->pc == 0x3DC024u) {
        ctx->pc = 0x3DC028u;
        goto label_3dc028;
    }
    ctx->pc = 0x3DC020u;
    {
        const bool branch_taken_0x3dc020 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc020) {
            ctx->pc = 0x3DC060u;
            goto label_3dc060;
        }
    }
    ctx->pc = 0x3DC028u;
label_3dc028:
    // 0x3dc028: 0x8ea500b8  lw          $a1, 0xB8($s5)
    ctx->pc = 0x3dc028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_3dc02c:
    // 0x3dc02c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3dc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3dc030:
    // 0x3dc030: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x3dc030u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3dc034:
    // 0x3dc034: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x3dc034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_3dc038:
    // 0x3dc038: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_3dc03c:
    if (ctx->pc == 0x3DC03Cu) {
        ctx->pc = 0x3DC040u;
        goto label_3dc040;
    }
    ctx->pc = 0x3DC038u;
    {
        const bool branch_taken_0x3dc038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3dc038) {
            ctx->pc = 0x3DC048u;
            goto label_3dc048;
        }
    }
    ctx->pc = 0x3DC040u;
label_3dc040:
    // 0x3dc040: 0x10000009  b           . + 4 + (0x9 << 2)
label_3dc044:
    if (ctx->pc == 0x3DC044u) {
        ctx->pc = 0x3DC048u;
        goto label_3dc048;
    }
    ctx->pc = 0x3DC040u;
    {
        const bool branch_taken_0x3dc040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc040) {
            ctx->pc = 0x3DC068u;
            goto label_3dc068;
        }
    }
    ctx->pc = 0x3DC048u;
label_3dc048:
    // 0x3dc048: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3dc048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3dc04c:
    // 0x3dc04c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_3dc050:
    if (ctx->pc == 0x3DC050u) {
        ctx->pc = 0x3DC050u;
            // 0x3dc050: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3DC054u;
        goto label_3dc054;
    }
    ctx->pc = 0x3DC04Cu;
    {
        const bool branch_taken_0x3dc04c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC04Cu;
            // 0x3dc050: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc04c) {
            ctx->pc = 0x3DC030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dc030;
        }
    }
    ctx->pc = 0x3DC054u;
label_3dc054:
    // 0x3dc054: 0x10000004  b           . + 4 + (0x4 << 2)
label_3dc058:
    if (ctx->pc == 0x3DC058u) {
        ctx->pc = 0x3DC058u;
            // 0x3dc058: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC05Cu;
        goto label_3dc05c;
    }
    ctx->pc = 0x3DC054u;
    {
        const bool branch_taken_0x3dc054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC054u;
            // 0x3dc058: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc054) {
            ctx->pc = 0x3DC068u;
            goto label_3dc068;
        }
    }
    ctx->pc = 0x3DC05Cu;
label_3dc05c:
    // 0x3dc05c: 0x0  nop
    ctx->pc = 0x3dc05cu;
    // NOP
label_3dc060:
    // 0x3dc060: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3dc060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc064:
    // 0x3dc064: 0x0  nop
    ctx->pc = 0x3dc064u;
    // NOP
label_3dc068:
    // 0x3dc068: 0x124000d1  beqz        $s2, . + 4 + (0xD1 << 2)
label_3dc06c:
    if (ctx->pc == 0x3DC06Cu) {
        ctx->pc = 0x3DC070u;
        goto label_3dc070;
    }
    ctx->pc = 0x3DC068u;
    {
        const bool branch_taken_0x3dc068 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc068) {
            ctx->pc = 0x3DC3B0u;
            goto label_3dc3b0;
        }
    }
    ctx->pc = 0x3DC070u;
label_3dc070:
    // 0x3dc070: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3dc070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dc074:
    // 0x3dc074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc078:
    // 0x3dc078: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3dc078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3dc07c:
    // 0x3dc07c: 0x320f809  jalr        $t9
label_3dc080:
    if (ctx->pc == 0x3DC080u) {
        ctx->pc = 0x3DC080u;
            // 0x3dc080: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3DC084u;
        goto label_3dc084;
    }
    ctx->pc = 0x3DC07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DC084u);
        ctx->pc = 0x3DC080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC07Cu;
            // 0x3dc080: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DC084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DC084u; }
            if (ctx->pc != 0x3DC084u) { return; }
        }
        }
    }
    ctx->pc = 0x3DC084u;
label_3dc084:
    // 0x3dc084: 0x8e110550  lw          $s1, 0x550($s0)
    ctx->pc = 0x3dc084u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_3dc088:
    // 0x3dc088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3dc088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3dc08c:
    // 0x3dc08c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3dc08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc090:
    // 0x3dc090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dc090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc094:
    // 0x3dc094: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3dc094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dc098:
    // 0x3dc098: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3dc098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dc09c:
    // 0x3dc09c: 0x8222010c  lb          $v0, 0x10C($s1)
    ctx->pc = 0x3dc09cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_3dc0a0:
    // 0x3dc0a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dc0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc0a4:
    // 0x3dc0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc0a8:
    // 0x3dc0a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3dc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dc0ac:
    // 0x3dc0ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3dc0b0:
    // 0x3dc0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dc0b4:
    // 0x3dc0b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3dc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3dc0b8:
    // 0x3dc0b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3dc0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3dc0bc:
    // 0x3dc0bc: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3dc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3dc0c0:
    // 0x3dc0c0: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3dc0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3dc0c4:
    // 0x3dc0c4: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x3dc0c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_3dc0c8:
    // 0x3dc0c8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3dc0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3dc0cc:
    // 0x3dc0cc: 0x320f809  jalr        $t9
label_3dc0d0:
    if (ctx->pc == 0x3DC0D0u) {
        ctx->pc = 0x3DC0D0u;
            // 0x3dc0d0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3DC0D4u;
        goto label_3dc0d4;
    }
    ctx->pc = 0x3DC0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DC0D4u);
        ctx->pc = 0x3DC0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC0CCu;
            // 0x3dc0d0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DC0D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DC0D4u; }
            if (ctx->pc != 0x3DC0D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3DC0D4u;
label_3dc0d4:
    // 0x3dc0d4: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3dc0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3dc0d8:
    // 0x3dc0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc0dc:
    // 0x3dc0dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3dc0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3dc0e0:
    // 0x3dc0e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3dc0e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3dc0e4:
    // 0x3dc0e4: 0x320f809  jalr        $t9
label_3dc0e8:
    if (ctx->pc == 0x3DC0E8u) {
        ctx->pc = 0x3DC0E8u;
            // 0x3dc0e8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3DC0ECu;
        goto label_3dc0ec;
    }
    ctx->pc = 0x3DC0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DC0ECu);
        ctx->pc = 0x3DC0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC0E4u;
            // 0x3dc0e8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DC0ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DC0ECu; }
            if (ctx->pc != 0x3DC0ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3DC0ECu;
label_3dc0ec:
    // 0x3dc0ec: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x3dc0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3dc0f0:
    // 0x3dc0f0: 0xc04cc34  jal         func_1330D0
label_3dc0f4:
    if (ctx->pc == 0x3DC0F4u) {
        ctx->pc = 0x3DC0F4u;
            // 0x3dc0f4: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x3DC0F8u;
        goto label_3dc0f8;
    }
    ctx->pc = 0x3DC0F0u;
    SET_GPR_U32(ctx, 31, 0x3DC0F8u);
    ctx->pc = 0x3DC0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC0F0u;
            // 0x3dc0f4: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC0F8u; }
        if (ctx->pc != 0x3DC0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC0F8u; }
        if (ctx->pc != 0x3DC0F8u) { return; }
    }
    ctx->pc = 0x3DC0F8u;
label_3dc0f8:
    // 0x3dc0f8: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3dc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3dc0fc:
    // 0x3dc0fc: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x3dc0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_3dc100:
    // 0x3dc100: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dc100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc104:
    // 0x3dc104: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3dc104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3dc108:
    // 0x3dc108: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3dc108u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3dc10c:
    // 0x3dc10c: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x3dc10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_3dc110:
    // 0x3dc110: 0xae020de4  sw          $v0, 0xDE4($s0)
    ctx->pc = 0x3dc110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 2));
label_3dc114:
    // 0x3dc114: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3dc114u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3dc118:
    // 0x3dc118: 0xc04cbd8  jal         func_132F60
label_3dc11c:
    if (ctx->pc == 0x3DC11Cu) {
        ctx->pc = 0x3DC11Cu;
            // 0x3dc11c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DC120u;
        goto label_3dc120;
    }
    ctx->pc = 0x3DC118u;
    SET_GPR_U32(ctx, 31, 0x3DC120u);
    ctx->pc = 0x3DC11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC118u;
            // 0x3dc11c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC120u; }
        if (ctx->pc != 0x3DC120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC120u; }
        if (ctx->pc != 0x3DC120u) { return; }
    }
    ctx->pc = 0x3DC120u;
label_3dc120:
    // 0x3dc120: 0x0  nop
    ctx->pc = 0x3dc120u;
    // NOP
label_3dc124:
    // 0x3dc124: 0x0  nop
    ctx->pc = 0x3dc124u;
    // NOP
label_3dc128:
    // 0x3dc128: 0x46150044  c1          0x150044
    ctx->pc = 0x3dc128u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_3dc12c:
    // 0x3dc12c: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3dc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3dc130:
    // 0x3dc130: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x3dc130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3dc134:
    // 0x3dc134: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3dc134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3dc138:
    // 0x3dc138: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3dc138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3dc13c:
    // 0x3dc13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dc140:
    // 0x3dc140: 0x0  nop
    ctx->pc = 0x3dc140u;
    // NOP
label_3dc144:
    // 0x3dc144: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3dc144u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3dc148:
    // 0x3dc148: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x3dc148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3dc14c:
    // 0x3dc14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dc14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dc150:
    // 0x3dc150: 0x0  nop
    ctx->pc = 0x3dc150u;
    // NOP
label_3dc154:
    // 0x3dc154: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x3dc154u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dc158:
    // 0x3dc158: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dc158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc15c:
    // 0x3dc15c: 0xc04cbd8  jal         func_132F60
label_3dc160:
    if (ctx->pc == 0x3DC160u) {
        ctx->pc = 0x3DC160u;
            // 0x3dc160: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DC164u;
        goto label_3dc164;
    }
    ctx->pc = 0x3DC15Cu;
    SET_GPR_U32(ctx, 31, 0x3DC164u);
    ctx->pc = 0x3DC160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC15Cu;
            // 0x3dc160: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC164u; }
        if (ctx->pc != 0x3DC164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC164u; }
        if (ctx->pc != 0x3DC164u) { return; }
    }
    ctx->pc = 0x3DC164u;
label_3dc164:
    // 0x3dc164: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x3dc164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_3dc168:
    // 0x3dc168: 0x260507e0  addiu       $a1, $s0, 0x7E0
    ctx->pc = 0x3dc168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
label_3dc16c:
    // 0x3dc16c: 0xc04cca0  jal         func_133280
label_3dc170:
    if (ctx->pc == 0x3DC170u) {
        ctx->pc = 0x3DC170u;
            // 0x3dc170: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3DC174u;
        goto label_3dc174;
    }
    ctx->pc = 0x3DC16Cu;
    SET_GPR_U32(ctx, 31, 0x3DC174u);
    ctx->pc = 0x3DC170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC16Cu;
            // 0x3dc170: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC174u; }
        if (ctx->pc != 0x3DC174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC174u; }
        if (ctx->pc != 0x3DC174u) { return; }
    }
    ctx->pc = 0x3DC174u;
label_3dc174:
    // 0x3dc174: 0xc0d1dc8  jal         func_347720
label_3dc178:
    if (ctx->pc == 0x3DC178u) {
        ctx->pc = 0x3DC178u;
            // 0x3dc178: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC17Cu;
        goto label_3dc17c;
    }
    ctx->pc = 0x3DC174u;
    SET_GPR_U32(ctx, 31, 0x3DC17Cu);
    ctx->pc = 0x3DC178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC174u;
            // 0x3dc178: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC17Cu; }
        if (ctx->pc != 0x3DC17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC17Cu; }
        if (ctx->pc != 0x3DC17Cu) { return; }
    }
    ctx->pc = 0x3DC17Cu;
label_3dc17c:
    // 0x3dc17c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3dc17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dc180:
    // 0x3dc180: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3dc180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3dc184:
    // 0x3dc184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dc184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dc188:
    // 0x3dc188: 0x0  nop
    ctx->pc = 0x3dc188u;
    // NOP
label_3dc18c:
    // 0x3dc18c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dc18cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dc190:
    // 0x3dc190: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3dc194:
    if (ctx->pc == 0x3DC194u) {
        ctx->pc = 0x3DC194u;
            // 0x3dc194: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3DC198u;
        goto label_3dc198;
    }
    ctx->pc = 0x3DC190u;
    {
        const bool branch_taken_0x3dc190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dc190) {
            ctx->pc = 0x3DC194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC190u;
            // 0x3dc194: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DC1A8u;
            goto label_3dc1a8;
        }
    }
    ctx->pc = 0x3DC198u;
label_3dc198:
    // 0x3dc198: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3dc19c:
    // 0x3dc19c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3dc19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_3dc1a0:
    // 0x3dc1a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3dc1a4:
    if (ctx->pc == 0x3DC1A4u) {
        ctx->pc = 0x3DC1A4u;
            // 0x3dc1a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1A8u;
        goto label_3dc1a8;
    }
    ctx->pc = 0x3DC1A0u;
    {
        const bool branch_taken_0x3dc1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC1A0u;
            // 0x3dc1a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1a0) {
            ctx->pc = 0x3DC1C0u;
            goto label_3dc1c0;
        }
    }
    ctx->pc = 0x3DC1A8u;
label_3dc1a8:
    // 0x3dc1a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3dc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3dc1ac:
    // 0x3dc1ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc1acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3dc1b0:
    // 0x3dc1b0: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3dc1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_3dc1b4:
    // 0x3dc1b4: 0x0  nop
    ctx->pc = 0x3dc1b4u;
    // NOP
label_3dc1b8:
    // 0x3dc1b8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3dc1b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_3dc1bc:
    // 0x3dc1bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dc1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dc1c0:
    // 0x3dc1c0: 0xc0f7108  jal         func_3DC420
label_3dc1c4:
    if (ctx->pc == 0x3DC1C4u) {
        ctx->pc = 0x3DC1C8u;
        goto label_3dc1c8;
    }
    ctx->pc = 0x3DC1C0u;
    SET_GPR_U32(ctx, 31, 0x3DC1C8u);
    ctx->pc = 0x3DC420u;
    if (runtime->hasFunction(0x3DC420u)) {
        auto targetFn = runtime->lookupFunction(0x3DC420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1C8u; }
        if (ctx->pc != 0x3DC1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC420_0x3dc420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1C8u; }
        if (ctx->pc != 0x3DC1C8u) { return; }
    }
    ctx->pc = 0x3DC1C8u;
label_3dc1c8:
    // 0x3dc1c8: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3dc1cc:
    // 0x3dc1cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dc1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc1d0:
    // 0x3dc1d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3dc1d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3dc1d4:
    // 0x3dc1d4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3dc1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc1d8:
    // 0x3dc1d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3dc1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3dc1dc:
    // 0x3dc1dc: 0xc122b58  jal         func_48AD60
label_3dc1e0:
    if (ctx->pc == 0x3DC1E0u) {
        ctx->pc = 0x3DC1E0u;
            // 0x3dc1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1E4u;
        goto label_3dc1e4;
    }
    ctx->pc = 0x3DC1DCu;
    SET_GPR_U32(ctx, 31, 0x3DC1E4u);
    ctx->pc = 0x3DC1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC1DCu;
            // 0x3dc1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1E4u; }
        if (ctx->pc != 0x3DC1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1E4u; }
        if (ctx->pc != 0x3DC1E4u) { return; }
    }
    ctx->pc = 0x3DC1E4u;
label_3dc1e4:
    // 0x3dc1e4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x3dc1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_3dc1e8:
    // 0x3dc1e8: 0xc04cc04  jal         func_133010
label_3dc1ec:
    if (ctx->pc == 0x3DC1ECu) {
        ctx->pc = 0x3DC1ECu;
            // 0x3dc1ec: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x3DC1F0u;
        goto label_3dc1f0;
    }
    ctx->pc = 0x3DC1E8u;
    SET_GPR_U32(ctx, 31, 0x3DC1F0u);
    ctx->pc = 0x3DC1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC1E8u;
            // 0x3dc1ec: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1F0u; }
        if (ctx->pc != 0x3DC1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1F0u; }
        if (ctx->pc != 0x3DC1F0u) { return; }
    }
    ctx->pc = 0x3DC1F0u;
label_3dc1f0:
    // 0x3dc1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dc1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc1f4:
    // 0x3dc1f4: 0xc0d1dc0  jal         func_347700
label_3dc1f8:
    if (ctx->pc == 0x3DC1F8u) {
        ctx->pc = 0x3DC1F8u;
            // 0x3dc1f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1FCu;
        goto label_3dc1fc;
    }
    ctx->pc = 0x3DC1F4u;
    SET_GPR_U32(ctx, 31, 0x3DC1FCu);
    ctx->pc = 0x3DC1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC1F4u;
            // 0x3dc1f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347700u;
    if (runtime->hasFunction(0x347700u)) {
        auto targetFn = runtime->lookupFunction(0x347700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1FCu; }
        if (ctx->pc != 0x3DC1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347700_0x347700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC1FCu; }
        if (ctx->pc != 0x3DC1FCu) { return; }
    }
    ctx->pc = 0x3DC1FCu;
label_3dc1fc:
    // 0x3dc1fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dc1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dc200:
    // 0x3dc200: 0xc0d1dc8  jal         func_347720
label_3dc204:
    if (ctx->pc == 0x3DC204u) {
        ctx->pc = 0x3DC204u;
            // 0x3dc204: 0xae5501c8  sw          $s5, 0x1C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 21));
        ctx->pc = 0x3DC208u;
        goto label_3dc208;
    }
    ctx->pc = 0x3DC200u;
    SET_GPR_U32(ctx, 31, 0x3DC208u);
    ctx->pc = 0x3DC204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC200u;
            // 0x3dc204: 0xae5501c8  sw          $s5, 0x1C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC208u; }
        if (ctx->pc != 0x3DC208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC208u; }
        if (ctx->pc != 0x3DC208u) { return; }
    }
    ctx->pc = 0x3DC208u;
label_3dc208:
    // 0x3dc208: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3dc208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dc20c:
    // 0x3dc20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dc20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dc210:
    // 0x3dc210: 0x0  nop
    ctx->pc = 0x3dc210u;
    // NOP
label_3dc214:
    // 0x3dc214: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3dc214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dc218:
    // 0x3dc218: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3dc21c:
    if (ctx->pc == 0x3DC21Cu) {
        ctx->pc = 0x3DC21Cu;
            // 0x3dc21c: 0xe64101e4  swc1        $f1, 0x1E4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 484), bits); }
        ctx->pc = 0x3DC220u;
        goto label_3dc220;
    }
    ctx->pc = 0x3DC218u;
    {
        const bool branch_taken_0x3dc218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DC21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC218u;
            // 0x3dc21c: 0xe64101e4  swc1        $f1, 0x1E4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 484), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc218) {
            ctx->pc = 0x3DC228u;
            goto label_3dc228;
        }
    }
    ctx->pc = 0x3DC220u;
label_3dc220:
    // 0x3dc220: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3dc220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3dc224:
    // 0x3dc224: 0xae4201e4  sw          $v0, 0x1E4($s2)
    ctx->pc = 0x3dc224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 2));
label_3dc228:
    // 0x3dc228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc22c:
    // 0x3dc22c: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x3dc22cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
label_3dc230:
    // 0x3dc230: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dc230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dc234:
    // 0x3dc234: 0xae4001c4  sw          $zero, 0x1C4($s2)
    ctx->pc = 0x3dc234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
label_3dc238:
    // 0x3dc238: 0x8c560e80  lw          $s6, 0xE80($v0)
    ctx->pc = 0x3dc238u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3dc23c:
    // 0x3dc23c: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x3dc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
label_3dc240:
    // 0x3dc240: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3dc244:
    if (ctx->pc == 0x3DC244u) {
        ctx->pc = 0x3DC248u;
        goto label_3dc248;
    }
    ctx->pc = 0x3DC240u;
    {
        const bool branch_taken_0x3dc240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc240) {
            ctx->pc = 0x3DC270u;
            goto label_3dc270;
        }
    }
    ctx->pc = 0x3DC248u;
label_3dc248:
    // 0x3dc248: 0xc040180  jal         func_100600
label_3dc24c:
    if (ctx->pc == 0x3DC24Cu) {
        ctx->pc = 0x3DC24Cu;
            // 0x3dc24c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3DC250u;
        goto label_3dc250;
    }
    ctx->pc = 0x3DC248u;
    SET_GPR_U32(ctx, 31, 0x3DC250u);
    ctx->pc = 0x3DC24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC248u;
            // 0x3dc24c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC250u; }
        if (ctx->pc != 0x3DC250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC250u; }
        if (ctx->pc != 0x3DC250u) { return; }
    }
    ctx->pc = 0x3DC250u;
label_3dc250:
    // 0x3dc250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3dc254:
    if (ctx->pc == 0x3DC254u) {
        ctx->pc = 0x3DC258u;
        goto label_3dc258;
    }
    ctx->pc = 0x3DC250u;
    {
        const bool branch_taken_0x3dc250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc250) {
            ctx->pc = 0x3DC268u;
            goto label_3dc268;
        }
    }
    ctx->pc = 0x3DC258u;
label_3dc258:
    // 0x3dc258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dc258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc25c:
    // 0x3dc25c: 0xc0d1da8  jal         func_3476A0
label_3dc260:
    if (ctx->pc == 0x3DC260u) {
        ctx->pc = 0x3DC260u;
            // 0x3dc260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DC264u;
        goto label_3dc264;
    }
    ctx->pc = 0x3DC25Cu;
    SET_GPR_U32(ctx, 31, 0x3DC264u);
    ctx->pc = 0x3DC260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC25Cu;
            // 0x3dc260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3476A0u;
    if (runtime->hasFunction(0x3476A0u)) {
        auto targetFn = runtime->lookupFunction(0x3476A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC264u; }
        if (ctx->pc != 0x3DC264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003476A0_0x3476a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC264u; }
        if (ctx->pc != 0x3DC264u) { return; }
    }
    ctx->pc = 0x3DC264u;
label_3dc264:
    // 0x3dc264: 0x0  nop
    ctx->pc = 0x3dc264u;
    // NOP
label_3dc268:
    // 0x3dc268: 0xae4201f4  sw          $v0, 0x1F4($s2)
    ctx->pc = 0x3dc268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 2));
label_3dc26c:
    // 0x3dc26c: 0x0  nop
    ctx->pc = 0x3dc26cu;
    // NOP
label_3dc270:
    // 0x3dc270: 0xc0d1da4  jal         func_347690
label_3dc274:
    if (ctx->pc == 0x3DC274u) {
        ctx->pc = 0x3DC274u;
            // 0x3dc274: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC278u;
        goto label_3dc278;
    }
    ctx->pc = 0x3DC270u;
    SET_GPR_U32(ctx, 31, 0x3DC278u);
    ctx->pc = 0x3DC274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC270u;
            // 0x3dc274: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347690u;
    if (runtime->hasFunction(0x347690u)) {
        auto targetFn = runtime->lookupFunction(0x347690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC278u; }
        if (ctx->pc != 0x3DC278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347690_0x347690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC278u; }
        if (ctx->pc != 0x3DC278u) { return; }
    }
    ctx->pc = 0x3DC278u;
label_3dc278:
    // 0x3dc278: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3dc278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3dc27c:
    // 0x3dc27c: 0x8e4401f4  lw          $a0, 0x1F4($s2)
    ctx->pc = 0x3dc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
label_3dc280:
    // 0x3dc280: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dc280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3dc284:
    // 0x3dc284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dc284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc288:
    // 0x3dc288: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x3dc288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_3dc28c:
    // 0x3dc28c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3dc28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dc290:
    // 0x3dc290: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x3dc290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_3dc294:
    // 0x3dc294: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3dc294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dc298:
    // 0x3dc298: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x3dc298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_3dc29c:
    // 0x3dc29c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dc29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc2a0:
    // 0x3dc2a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3dc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3dc2a4:
    // 0x3dc2a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3dc2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc2a8:
    // 0x3dc2a8: 0xc122cd8  jal         func_48B360
label_3dc2ac:
    if (ctx->pc == 0x3DC2ACu) {
        ctx->pc = 0x3DC2ACu;
            // 0x3dc2ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DC2B0u;
        goto label_3dc2b0;
    }
    ctx->pc = 0x3DC2A8u;
    SET_GPR_U32(ctx, 31, 0x3DC2B0u);
    ctx->pc = 0x3DC2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC2A8u;
            // 0x3dc2ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2B0u; }
        if (ctx->pc != 0x3DC2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2B0u; }
        if (ctx->pc != 0x3DC2B0u) { return; }
    }
    ctx->pc = 0x3DC2B0u;
label_3dc2b0:
    // 0x3dc2b0: 0x8e4201f8  lw          $v0, 0x1F8($s2)
    ctx->pc = 0x3dc2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_3dc2b4:
    // 0x3dc2b4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_3dc2b8:
    if (ctx->pc == 0x3DC2B8u) {
        ctx->pc = 0x3DC2BCu;
        goto label_3dc2bc;
    }
    ctx->pc = 0x3DC2B4u;
    {
        const bool branch_taken_0x3dc2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc2b4) {
            ctx->pc = 0x3DC320u;
            goto label_3dc320;
        }
    }
    ctx->pc = 0x3DC2BCu;
label_3dc2bc:
    // 0x3dc2bc: 0xc040180  jal         func_100600
label_3dc2c0:
    if (ctx->pc == 0x3DC2C0u) {
        ctx->pc = 0x3DC2C0u;
            // 0x3dc2c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3DC2C4u;
        goto label_3dc2c4;
    }
    ctx->pc = 0x3DC2BCu;
    SET_GPR_U32(ctx, 31, 0x3DC2C4u);
    ctx->pc = 0x3DC2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC2BCu;
            // 0x3dc2c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2C4u; }
        if (ctx->pc != 0x3DC2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2C4u; }
        if (ctx->pc != 0x3DC2C4u) { return; }
    }
    ctx->pc = 0x3DC2C4u;
label_3dc2c4:
    // 0x3dc2c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dc2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc2c8:
    // 0x3dc2c8: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_3dc2cc:
    if (ctx->pc == 0x3DC2CCu) {
        ctx->pc = 0x3DC2D0u;
        goto label_3dc2d0;
    }
    ctx->pc = 0x3DC2C8u;
    {
        const bool branch_taken_0x3dc2c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc2c8) {
            ctx->pc = 0x3DC318u;
            goto label_3dc318;
        }
    }
    ctx->pc = 0x3DC2D0u;
label_3dc2d0:
    // 0x3dc2d0: 0xc0c05c4  jal         func_301710
label_3dc2d4:
    if (ctx->pc == 0x3DC2D4u) {
        ctx->pc = 0x3DC2D8u;
        goto label_3dc2d8;
    }
    ctx->pc = 0x3DC2D0u;
    SET_GPR_U32(ctx, 31, 0x3DC2D8u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2D8u; }
        if (ctx->pc != 0x3DC2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2D8u; }
        if (ctx->pc != 0x3DC2D8u) { return; }
    }
    ctx->pc = 0x3DC2D8u;
label_3dc2d8:
    // 0x3dc2d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3dc2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dc2dc:
    // 0x3dc2dc: 0xc0d1da4  jal         func_347690
label_3dc2e0:
    if (ctx->pc == 0x3DC2E0u) {
        ctx->pc = 0x3DC2E0u;
            // 0x3dc2e0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC2E4u;
        goto label_3dc2e4;
    }
    ctx->pc = 0x3DC2DCu;
    SET_GPR_U32(ctx, 31, 0x3DC2E4u);
    ctx->pc = 0x3DC2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC2DCu;
            // 0x3dc2e0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347690u;
    if (runtime->hasFunction(0x347690u)) {
        auto targetFn = runtime->lookupFunction(0x347690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2E4u; }
        if (ctx->pc != 0x3DC2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347690_0x347690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC2E4u; }
        if (ctx->pc != 0x3DC2E4u) { return; }
    }
    ctx->pc = 0x3DC2E4u;
label_3dc2e4:
    // 0x3dc2e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3dc2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3dc2e8:
    // 0x3dc2e8: 0x8ed90004  lw          $t9, 0x4($s6)
    ctx->pc = 0x3dc2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3dc2ec:
    // 0x3dc2ec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3dc2f0:
    // 0x3dc2f0: 0x24429c50  addiu       $v0, $v0, -0x63B0
    ctx->pc = 0x3dc2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941776));
label_3dc2f4:
    // 0x3dc2f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dc2f8:
    // 0x3dc2f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3dc2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3dc2fc:
    // 0x3dc2fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3dc2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dc300:
    // 0x3dc300: 0x320f809  jalr        $t9
label_3dc304:
    if (ctx->pc == 0x3DC304u) {
        ctx->pc = 0x3DC304u;
            // 0x3dc304: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3DC308u;
        goto label_3dc308;
    }
    ctx->pc = 0x3DC300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DC308u);
        ctx->pc = 0x3DC304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC300u;
            // 0x3dc304: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DC308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DC308u; }
            if (ctx->pc != 0x3DC308u) { return; }
        }
        }
    }
    ctx->pc = 0x3DC308u;
label_3dc308:
    // 0x3dc308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc30c:
    // 0x3dc30c: 0xc0f7100  jal         func_3DC400
label_3dc310:
    if (ctx->pc == 0x3DC310u) {
        ctx->pc = 0x3DC310u;
            // 0x3dc310: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DC314u;
        goto label_3dc314;
    }
    ctx->pc = 0x3DC30Cu;
    SET_GPR_U32(ctx, 31, 0x3DC314u);
    ctx->pc = 0x3DC310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC30Cu;
            // 0x3dc310: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC400u;
    if (runtime->hasFunction(0x3DC400u)) {
        auto targetFn = runtime->lookupFunction(0x3DC400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC314u; }
        if (ctx->pc != 0x3DC314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC400_0x3dc400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC314u; }
        if (ctx->pc != 0x3DC314u) { return; }
    }
    ctx->pc = 0x3DC314u;
label_3dc314:
    // 0x3dc314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dc314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc318:
    // 0x3dc318: 0xae5101f8  sw          $s1, 0x1F8($s2)
    ctx->pc = 0x3dc318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 17));
label_3dc31c:
    // 0x3dc31c: 0x0  nop
    ctx->pc = 0x3dc31cu;
    // NOP
label_3dc320:
    // 0x3dc320: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3dc320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3dc324:
    // 0x3dc324: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x3dc324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3dc328:
    // 0x3dc328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dc328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc32c:
    // 0x3dc32c: 0x26b100a4  addiu       $s1, $s5, 0xA4
    ctx->pc = 0x3dc32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 164));
label_3dc330:
    // 0x3dc330: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x3dc330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_3dc334:
    // 0x3dc334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc338:
    // 0x3dc338: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x3dc338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_3dc33c:
    // 0x3dc33c: 0x601827  not         $v1, $v1
    ctx->pc = 0x3dc33cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3dc340:
    // 0x3dc340: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3dc340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3dc344:
    // 0x3dc344: 0xc0f73c0  jal         func_3DCF00
label_3dc348:
    if (ctx->pc == 0x3DC348u) {
        ctx->pc = 0x3DC348u;
            // 0x3dc348: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x3DC34Cu;
        goto label_3dc34c;
    }
    ctx->pc = 0x3DC344u;
    SET_GPR_U32(ctx, 31, 0x3DC34Cu);
    ctx->pc = 0x3DC348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC344u;
            // 0x3dc348: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF00u;
    if (runtime->hasFunction(0x3DCF00u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC34Cu; }
        if (ctx->pc != 0x3DC34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF00_0x3dcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC34Cu; }
        if (ctx->pc != 0x3DC34Cu) { return; }
    }
    ctx->pc = 0x3DC34Cu;
label_3dc34c:
    // 0x3dc34c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dc34cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc350:
    // 0x3dc350: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3dc350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3dc354:
    // 0x3dc354: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3dc354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_3dc358:
    // 0x3dc358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dc358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc35c:
    // 0x3dc35c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3dc35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3dc360:
    // 0x3dc360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dc360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc364:
    // 0x3dc364: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dc364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3dc368:
    // 0x3dc368: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3dc368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc36c:
    // 0x3dc36c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3dc36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3dc370:
    // 0x3dc370: 0xc122b58  jal         func_48AD60
label_3dc374:
    if (ctx->pc == 0x3DC374u) {
        ctx->pc = 0x3DC374u;
            // 0x3dc374: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3DC378u;
        goto label_3dc378;
    }
    ctx->pc = 0x3DC370u;
    SET_GPR_U32(ctx, 31, 0x3DC378u);
    ctx->pc = 0x3DC374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC370u;
            // 0x3dc374: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC378u; }
        if (ctx->pc != 0x3DC378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC378u; }
        if (ctx->pc != 0x3DC378u) { return; }
    }
    ctx->pc = 0x3DC378u;
label_3dc378:
    // 0x3dc378: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x3dc378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_3dc37c:
    // 0x3dc37c: 0xc04cc04  jal         func_133010
label_3dc380:
    if (ctx->pc == 0x3DC380u) {
        ctx->pc = 0x3DC380u;
            // 0x3dc380: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x3DC384u;
        goto label_3dc384;
    }
    ctx->pc = 0x3DC37Cu;
    SET_GPR_U32(ctx, 31, 0x3DC384u);
    ctx->pc = 0x3DC380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC37Cu;
            // 0x3dc380: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC384u; }
        if (ctx->pc != 0x3DC384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC384u; }
        if (ctx->pc != 0x3DC384u) { return; }
    }
    ctx->pc = 0x3DC384u;
label_3dc384:
    // 0x3dc384: 0xae5501c8  sw          $s5, 0x1C8($s2)
    ctx->pc = 0x3dc384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 21));
label_3dc388:
    // 0x3dc388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dc388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc38c:
    // 0x3dc38c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3dc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3dc390:
    // 0x3dc390: 0xae4301c0  sw          $v1, 0x1C0($s2)
    ctx->pc = 0x3dc390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
label_3dc394:
    // 0x3dc394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc398:
    // 0x3dc398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dc398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc39c:
    // 0x3dc39c: 0xc0f73cc  jal         func_3DCF30
label_3dc3a0:
    if (ctx->pc == 0x3DC3A0u) {
        ctx->pc = 0x3DC3A0u;
            // 0x3dc3a0: 0xae4201c4  sw          $v0, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x3DC3A4u;
        goto label_3dc3a4;
    }
    ctx->pc = 0x3DC39Cu;
    SET_GPR_U32(ctx, 31, 0x3DC3A4u);
    ctx->pc = 0x3DC3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC39Cu;
            // 0x3dc3a0: 0xae4201c4  sw          $v0, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF30u;
    if (runtime->hasFunction(0x3DCF30u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC3A4u; }
        if (ctx->pc != 0x3DC3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF30_0x3dcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC3A4u; }
        if (ctx->pc != 0x3DC3A4u) { return; }
    }
    ctx->pc = 0x3DC3A4u;
label_3dc3a4:
    // 0x3dc3a4: 0x8e030d9c  lw          $v1, 0xD9C($s0)
    ctx->pc = 0x3dc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_3dc3a8:
    // 0x3dc3a8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3dc3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_3dc3ac:
    // 0x3dc3ac: 0xae030d9c  sw          $v1, 0xD9C($s0)
    ctx->pc = 0x3dc3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
label_3dc3b0:
    // 0x3dc3b0: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x3dc3b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_3dc3b4:
    // 0x3dc3b4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3dc3b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_3dc3b8:
    // 0x3dc3b8: 0x16e0fed2  bnez        $s7, . + 4 + (-0x12E << 2)
label_3dc3bc:
    if (ctx->pc == 0x3DC3BCu) {
        ctx->pc = 0x3DC3BCu;
            // 0x3dc3bc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3DC3C0u;
        goto label_3dc3c0;
    }
    ctx->pc = 0x3DC3B8u;
    {
        const bool branch_taken_0x3dc3b8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC3B8u;
            // 0x3dc3bc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc3b8) {
            ctx->pc = 0x3DBF04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dbf04;
        }
    }
    ctx->pc = 0x3DC3C0u;
label_3dc3c0:
    // 0x3dc3c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3dc3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3dc3c4:
    // 0x3dc3c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3dc3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3dc3c8:
    // 0x3dc3c8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3dc3c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3dc3cc:
    // 0x3dc3cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dc3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dc3d0:
    // 0x3dc3d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3dc3d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dc3d4:
    // 0x3dc3d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3dc3d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dc3d8:
    // 0x3dc3d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3dc3d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dc3dc:
    // 0x3dc3dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3dc3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dc3e0:
    // 0x3dc3e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dc3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dc3e4:
    // 0x3dc3e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dc3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc3e8:
    // 0x3dc3e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dc3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dc3ec:
    // 0x3dc3ec: 0x3e00008  jr          $ra
label_3dc3f0:
    if (ctx->pc == 0x3DC3F0u) {
        ctx->pc = 0x3DC3F0u;
            // 0x3dc3f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3DC3F4u;
        goto label_3dc3f4;
    }
    ctx->pc = 0x3DC3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC3ECu;
            // 0x3dc3f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC3F4u;
label_3dc3f4:
    // 0x3dc3f4: 0x0  nop
    ctx->pc = 0x3dc3f4u;
    // NOP
label_3dc3f8:
    // 0x3dc3f8: 0x0  nop
    ctx->pc = 0x3dc3f8u;
    // NOP
label_3dc3fc:
    // 0x3dc3fc: 0x0  nop
    ctx->pc = 0x3dc3fcu;
    // NOP
}
