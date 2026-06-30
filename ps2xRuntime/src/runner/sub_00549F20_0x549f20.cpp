#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00549F20
// Address: 0x549f20 - 0x54a4b0
void sub_00549F20_0x549f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00549F20_0x549f20");
#endif

    switch (ctx->pc) {
        case 0x549f20u: goto label_549f20;
        case 0x549f24u: goto label_549f24;
        case 0x549f28u: goto label_549f28;
        case 0x549f2cu: goto label_549f2c;
        case 0x549f30u: goto label_549f30;
        case 0x549f34u: goto label_549f34;
        case 0x549f38u: goto label_549f38;
        case 0x549f3cu: goto label_549f3c;
        case 0x549f40u: goto label_549f40;
        case 0x549f44u: goto label_549f44;
        case 0x549f48u: goto label_549f48;
        case 0x549f4cu: goto label_549f4c;
        case 0x549f50u: goto label_549f50;
        case 0x549f54u: goto label_549f54;
        case 0x549f58u: goto label_549f58;
        case 0x549f5cu: goto label_549f5c;
        case 0x549f60u: goto label_549f60;
        case 0x549f64u: goto label_549f64;
        case 0x549f68u: goto label_549f68;
        case 0x549f6cu: goto label_549f6c;
        case 0x549f70u: goto label_549f70;
        case 0x549f74u: goto label_549f74;
        case 0x549f78u: goto label_549f78;
        case 0x549f7cu: goto label_549f7c;
        case 0x549f80u: goto label_549f80;
        case 0x549f84u: goto label_549f84;
        case 0x549f88u: goto label_549f88;
        case 0x549f8cu: goto label_549f8c;
        case 0x549f90u: goto label_549f90;
        case 0x549f94u: goto label_549f94;
        case 0x549f98u: goto label_549f98;
        case 0x549f9cu: goto label_549f9c;
        case 0x549fa0u: goto label_549fa0;
        case 0x549fa4u: goto label_549fa4;
        case 0x549fa8u: goto label_549fa8;
        case 0x549facu: goto label_549fac;
        case 0x549fb0u: goto label_549fb0;
        case 0x549fb4u: goto label_549fb4;
        case 0x549fb8u: goto label_549fb8;
        case 0x549fbcu: goto label_549fbc;
        case 0x549fc0u: goto label_549fc0;
        case 0x549fc4u: goto label_549fc4;
        case 0x549fc8u: goto label_549fc8;
        case 0x549fccu: goto label_549fcc;
        case 0x549fd0u: goto label_549fd0;
        case 0x549fd4u: goto label_549fd4;
        case 0x549fd8u: goto label_549fd8;
        case 0x549fdcu: goto label_549fdc;
        case 0x549fe0u: goto label_549fe0;
        case 0x549fe4u: goto label_549fe4;
        case 0x549fe8u: goto label_549fe8;
        case 0x549fecu: goto label_549fec;
        case 0x549ff0u: goto label_549ff0;
        case 0x549ff4u: goto label_549ff4;
        case 0x549ff8u: goto label_549ff8;
        case 0x549ffcu: goto label_549ffc;
        case 0x54a000u: goto label_54a000;
        case 0x54a004u: goto label_54a004;
        case 0x54a008u: goto label_54a008;
        case 0x54a00cu: goto label_54a00c;
        case 0x54a010u: goto label_54a010;
        case 0x54a014u: goto label_54a014;
        case 0x54a018u: goto label_54a018;
        case 0x54a01cu: goto label_54a01c;
        case 0x54a020u: goto label_54a020;
        case 0x54a024u: goto label_54a024;
        case 0x54a028u: goto label_54a028;
        case 0x54a02cu: goto label_54a02c;
        case 0x54a030u: goto label_54a030;
        case 0x54a034u: goto label_54a034;
        case 0x54a038u: goto label_54a038;
        case 0x54a03cu: goto label_54a03c;
        case 0x54a040u: goto label_54a040;
        case 0x54a044u: goto label_54a044;
        case 0x54a048u: goto label_54a048;
        case 0x54a04cu: goto label_54a04c;
        case 0x54a050u: goto label_54a050;
        case 0x54a054u: goto label_54a054;
        case 0x54a058u: goto label_54a058;
        case 0x54a05cu: goto label_54a05c;
        case 0x54a060u: goto label_54a060;
        case 0x54a064u: goto label_54a064;
        case 0x54a068u: goto label_54a068;
        case 0x54a06cu: goto label_54a06c;
        case 0x54a070u: goto label_54a070;
        case 0x54a074u: goto label_54a074;
        case 0x54a078u: goto label_54a078;
        case 0x54a07cu: goto label_54a07c;
        case 0x54a080u: goto label_54a080;
        case 0x54a084u: goto label_54a084;
        case 0x54a088u: goto label_54a088;
        case 0x54a08cu: goto label_54a08c;
        case 0x54a090u: goto label_54a090;
        case 0x54a094u: goto label_54a094;
        case 0x54a098u: goto label_54a098;
        case 0x54a09cu: goto label_54a09c;
        case 0x54a0a0u: goto label_54a0a0;
        case 0x54a0a4u: goto label_54a0a4;
        case 0x54a0a8u: goto label_54a0a8;
        case 0x54a0acu: goto label_54a0ac;
        case 0x54a0b0u: goto label_54a0b0;
        case 0x54a0b4u: goto label_54a0b4;
        case 0x54a0b8u: goto label_54a0b8;
        case 0x54a0bcu: goto label_54a0bc;
        case 0x54a0c0u: goto label_54a0c0;
        case 0x54a0c4u: goto label_54a0c4;
        case 0x54a0c8u: goto label_54a0c8;
        case 0x54a0ccu: goto label_54a0cc;
        case 0x54a0d0u: goto label_54a0d0;
        case 0x54a0d4u: goto label_54a0d4;
        case 0x54a0d8u: goto label_54a0d8;
        case 0x54a0dcu: goto label_54a0dc;
        case 0x54a0e0u: goto label_54a0e0;
        case 0x54a0e4u: goto label_54a0e4;
        case 0x54a0e8u: goto label_54a0e8;
        case 0x54a0ecu: goto label_54a0ec;
        case 0x54a0f0u: goto label_54a0f0;
        case 0x54a0f4u: goto label_54a0f4;
        case 0x54a0f8u: goto label_54a0f8;
        case 0x54a0fcu: goto label_54a0fc;
        case 0x54a100u: goto label_54a100;
        case 0x54a104u: goto label_54a104;
        case 0x54a108u: goto label_54a108;
        case 0x54a10cu: goto label_54a10c;
        case 0x54a110u: goto label_54a110;
        case 0x54a114u: goto label_54a114;
        case 0x54a118u: goto label_54a118;
        case 0x54a11cu: goto label_54a11c;
        case 0x54a120u: goto label_54a120;
        case 0x54a124u: goto label_54a124;
        case 0x54a128u: goto label_54a128;
        case 0x54a12cu: goto label_54a12c;
        case 0x54a130u: goto label_54a130;
        case 0x54a134u: goto label_54a134;
        case 0x54a138u: goto label_54a138;
        case 0x54a13cu: goto label_54a13c;
        case 0x54a140u: goto label_54a140;
        case 0x54a144u: goto label_54a144;
        case 0x54a148u: goto label_54a148;
        case 0x54a14cu: goto label_54a14c;
        case 0x54a150u: goto label_54a150;
        case 0x54a154u: goto label_54a154;
        case 0x54a158u: goto label_54a158;
        case 0x54a15cu: goto label_54a15c;
        case 0x54a160u: goto label_54a160;
        case 0x54a164u: goto label_54a164;
        case 0x54a168u: goto label_54a168;
        case 0x54a16cu: goto label_54a16c;
        case 0x54a170u: goto label_54a170;
        case 0x54a174u: goto label_54a174;
        case 0x54a178u: goto label_54a178;
        case 0x54a17cu: goto label_54a17c;
        case 0x54a180u: goto label_54a180;
        case 0x54a184u: goto label_54a184;
        case 0x54a188u: goto label_54a188;
        case 0x54a18cu: goto label_54a18c;
        case 0x54a190u: goto label_54a190;
        case 0x54a194u: goto label_54a194;
        case 0x54a198u: goto label_54a198;
        case 0x54a19cu: goto label_54a19c;
        case 0x54a1a0u: goto label_54a1a0;
        case 0x54a1a4u: goto label_54a1a4;
        case 0x54a1a8u: goto label_54a1a8;
        case 0x54a1acu: goto label_54a1ac;
        case 0x54a1b0u: goto label_54a1b0;
        case 0x54a1b4u: goto label_54a1b4;
        case 0x54a1b8u: goto label_54a1b8;
        case 0x54a1bcu: goto label_54a1bc;
        case 0x54a1c0u: goto label_54a1c0;
        case 0x54a1c4u: goto label_54a1c4;
        case 0x54a1c8u: goto label_54a1c8;
        case 0x54a1ccu: goto label_54a1cc;
        case 0x54a1d0u: goto label_54a1d0;
        case 0x54a1d4u: goto label_54a1d4;
        case 0x54a1d8u: goto label_54a1d8;
        case 0x54a1dcu: goto label_54a1dc;
        case 0x54a1e0u: goto label_54a1e0;
        case 0x54a1e4u: goto label_54a1e4;
        case 0x54a1e8u: goto label_54a1e8;
        case 0x54a1ecu: goto label_54a1ec;
        case 0x54a1f0u: goto label_54a1f0;
        case 0x54a1f4u: goto label_54a1f4;
        case 0x54a1f8u: goto label_54a1f8;
        case 0x54a1fcu: goto label_54a1fc;
        case 0x54a200u: goto label_54a200;
        case 0x54a204u: goto label_54a204;
        case 0x54a208u: goto label_54a208;
        case 0x54a20cu: goto label_54a20c;
        case 0x54a210u: goto label_54a210;
        case 0x54a214u: goto label_54a214;
        case 0x54a218u: goto label_54a218;
        case 0x54a21cu: goto label_54a21c;
        case 0x54a220u: goto label_54a220;
        case 0x54a224u: goto label_54a224;
        case 0x54a228u: goto label_54a228;
        case 0x54a22cu: goto label_54a22c;
        case 0x54a230u: goto label_54a230;
        case 0x54a234u: goto label_54a234;
        case 0x54a238u: goto label_54a238;
        case 0x54a23cu: goto label_54a23c;
        case 0x54a240u: goto label_54a240;
        case 0x54a244u: goto label_54a244;
        case 0x54a248u: goto label_54a248;
        case 0x54a24cu: goto label_54a24c;
        case 0x54a250u: goto label_54a250;
        case 0x54a254u: goto label_54a254;
        case 0x54a258u: goto label_54a258;
        case 0x54a25cu: goto label_54a25c;
        case 0x54a260u: goto label_54a260;
        case 0x54a264u: goto label_54a264;
        case 0x54a268u: goto label_54a268;
        case 0x54a26cu: goto label_54a26c;
        case 0x54a270u: goto label_54a270;
        case 0x54a274u: goto label_54a274;
        case 0x54a278u: goto label_54a278;
        case 0x54a27cu: goto label_54a27c;
        case 0x54a280u: goto label_54a280;
        case 0x54a284u: goto label_54a284;
        case 0x54a288u: goto label_54a288;
        case 0x54a28cu: goto label_54a28c;
        case 0x54a290u: goto label_54a290;
        case 0x54a294u: goto label_54a294;
        case 0x54a298u: goto label_54a298;
        case 0x54a29cu: goto label_54a29c;
        case 0x54a2a0u: goto label_54a2a0;
        case 0x54a2a4u: goto label_54a2a4;
        case 0x54a2a8u: goto label_54a2a8;
        case 0x54a2acu: goto label_54a2ac;
        case 0x54a2b0u: goto label_54a2b0;
        case 0x54a2b4u: goto label_54a2b4;
        case 0x54a2b8u: goto label_54a2b8;
        case 0x54a2bcu: goto label_54a2bc;
        case 0x54a2c0u: goto label_54a2c0;
        case 0x54a2c4u: goto label_54a2c4;
        case 0x54a2c8u: goto label_54a2c8;
        case 0x54a2ccu: goto label_54a2cc;
        case 0x54a2d0u: goto label_54a2d0;
        case 0x54a2d4u: goto label_54a2d4;
        case 0x54a2d8u: goto label_54a2d8;
        case 0x54a2dcu: goto label_54a2dc;
        case 0x54a2e0u: goto label_54a2e0;
        case 0x54a2e4u: goto label_54a2e4;
        case 0x54a2e8u: goto label_54a2e8;
        case 0x54a2ecu: goto label_54a2ec;
        case 0x54a2f0u: goto label_54a2f0;
        case 0x54a2f4u: goto label_54a2f4;
        case 0x54a2f8u: goto label_54a2f8;
        case 0x54a2fcu: goto label_54a2fc;
        case 0x54a300u: goto label_54a300;
        case 0x54a304u: goto label_54a304;
        case 0x54a308u: goto label_54a308;
        case 0x54a30cu: goto label_54a30c;
        case 0x54a310u: goto label_54a310;
        case 0x54a314u: goto label_54a314;
        case 0x54a318u: goto label_54a318;
        case 0x54a31cu: goto label_54a31c;
        case 0x54a320u: goto label_54a320;
        case 0x54a324u: goto label_54a324;
        case 0x54a328u: goto label_54a328;
        case 0x54a32cu: goto label_54a32c;
        case 0x54a330u: goto label_54a330;
        case 0x54a334u: goto label_54a334;
        case 0x54a338u: goto label_54a338;
        case 0x54a33cu: goto label_54a33c;
        case 0x54a340u: goto label_54a340;
        case 0x54a344u: goto label_54a344;
        case 0x54a348u: goto label_54a348;
        case 0x54a34cu: goto label_54a34c;
        case 0x54a350u: goto label_54a350;
        case 0x54a354u: goto label_54a354;
        case 0x54a358u: goto label_54a358;
        case 0x54a35cu: goto label_54a35c;
        case 0x54a360u: goto label_54a360;
        case 0x54a364u: goto label_54a364;
        case 0x54a368u: goto label_54a368;
        case 0x54a36cu: goto label_54a36c;
        case 0x54a370u: goto label_54a370;
        case 0x54a374u: goto label_54a374;
        case 0x54a378u: goto label_54a378;
        case 0x54a37cu: goto label_54a37c;
        case 0x54a380u: goto label_54a380;
        case 0x54a384u: goto label_54a384;
        case 0x54a388u: goto label_54a388;
        case 0x54a38cu: goto label_54a38c;
        case 0x54a390u: goto label_54a390;
        case 0x54a394u: goto label_54a394;
        case 0x54a398u: goto label_54a398;
        case 0x54a39cu: goto label_54a39c;
        case 0x54a3a0u: goto label_54a3a0;
        case 0x54a3a4u: goto label_54a3a4;
        case 0x54a3a8u: goto label_54a3a8;
        case 0x54a3acu: goto label_54a3ac;
        case 0x54a3b0u: goto label_54a3b0;
        case 0x54a3b4u: goto label_54a3b4;
        case 0x54a3b8u: goto label_54a3b8;
        case 0x54a3bcu: goto label_54a3bc;
        case 0x54a3c0u: goto label_54a3c0;
        case 0x54a3c4u: goto label_54a3c4;
        case 0x54a3c8u: goto label_54a3c8;
        case 0x54a3ccu: goto label_54a3cc;
        case 0x54a3d0u: goto label_54a3d0;
        case 0x54a3d4u: goto label_54a3d4;
        case 0x54a3d8u: goto label_54a3d8;
        case 0x54a3dcu: goto label_54a3dc;
        case 0x54a3e0u: goto label_54a3e0;
        case 0x54a3e4u: goto label_54a3e4;
        case 0x54a3e8u: goto label_54a3e8;
        case 0x54a3ecu: goto label_54a3ec;
        case 0x54a3f0u: goto label_54a3f0;
        case 0x54a3f4u: goto label_54a3f4;
        case 0x54a3f8u: goto label_54a3f8;
        case 0x54a3fcu: goto label_54a3fc;
        case 0x54a400u: goto label_54a400;
        case 0x54a404u: goto label_54a404;
        case 0x54a408u: goto label_54a408;
        case 0x54a40cu: goto label_54a40c;
        case 0x54a410u: goto label_54a410;
        case 0x54a414u: goto label_54a414;
        case 0x54a418u: goto label_54a418;
        case 0x54a41cu: goto label_54a41c;
        case 0x54a420u: goto label_54a420;
        case 0x54a424u: goto label_54a424;
        case 0x54a428u: goto label_54a428;
        case 0x54a42cu: goto label_54a42c;
        case 0x54a430u: goto label_54a430;
        case 0x54a434u: goto label_54a434;
        case 0x54a438u: goto label_54a438;
        case 0x54a43cu: goto label_54a43c;
        case 0x54a440u: goto label_54a440;
        case 0x54a444u: goto label_54a444;
        case 0x54a448u: goto label_54a448;
        case 0x54a44cu: goto label_54a44c;
        case 0x54a450u: goto label_54a450;
        case 0x54a454u: goto label_54a454;
        case 0x54a458u: goto label_54a458;
        case 0x54a45cu: goto label_54a45c;
        case 0x54a460u: goto label_54a460;
        case 0x54a464u: goto label_54a464;
        case 0x54a468u: goto label_54a468;
        case 0x54a46cu: goto label_54a46c;
        case 0x54a470u: goto label_54a470;
        case 0x54a474u: goto label_54a474;
        case 0x54a478u: goto label_54a478;
        case 0x54a47cu: goto label_54a47c;
        case 0x54a480u: goto label_54a480;
        case 0x54a484u: goto label_54a484;
        case 0x54a488u: goto label_54a488;
        case 0x54a48cu: goto label_54a48c;
        case 0x54a490u: goto label_54a490;
        case 0x54a494u: goto label_54a494;
        case 0x54a498u: goto label_54a498;
        case 0x54a49cu: goto label_54a49c;
        case 0x54a4a0u: goto label_54a4a0;
        case 0x54a4a4u: goto label_54a4a4;
        case 0x54a4a8u: goto label_54a4a8;
        case 0x54a4acu: goto label_54a4ac;
        default: break;
    }

    ctx->pc = 0x549f20u;

label_549f20:
    // 0x549f20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x549f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_549f24:
    // 0x549f24: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x549f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_549f28:
    // 0x549f28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x549f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_549f2c:
    // 0x549f2c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x549f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_549f30:
    // 0x549f30: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x549f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_549f34:
    // 0x549f34: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x549f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_549f38:
    // 0x549f38: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x549f38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_549f3c:
    // 0x549f3c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x549f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_549f40:
    // 0x549f40: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x549f40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_549f44:
    // 0x549f44: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x549f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_549f48:
    // 0x549f48: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x549f48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_549f4c:
    // 0x549f4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x549f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_549f50:
    // 0x549f50: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x549f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_549f54:
    // 0x549f54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x549f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_549f58:
    // 0x549f58: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x549f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_549f5c:
    // 0x549f5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x549f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_549f60:
    // 0x549f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x549f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_549f64:
    // 0x549f64: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x549f64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_549f68:
    // 0x549f68: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x549f68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_549f6c:
    // 0x549f6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x549f6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_549f70:
    // 0x549f70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x549f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_549f74:
    // 0x549f74: 0x9450d9aa  lhu         $s0, -0x2656($v0)
    ctx->pc = 0x549f74u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957482)));
label_549f78:
    // 0x549f78: 0x9471d9a8  lhu         $s1, -0x2658($v1)
    ctx->pc = 0x549f78u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957480)));
label_549f7c:
    // 0x549f7c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x549f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_549f80:
    // 0x549f80: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x549f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_549f84:
    // 0x549f84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x549f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_549f88:
    // 0x549f88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x549f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_549f8c:
    // 0x549f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x549f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_549f90:
    // 0x549f90: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x549f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_549f94:
    // 0x549f94: 0xc0506ac  jal         func_141AB0
label_549f98:
    if (ctx->pc == 0x549F98u) {
        ctx->pc = 0x549F98u;
            // 0x549f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x549F9Cu;
        goto label_549f9c;
    }
    ctx->pc = 0x549F94u;
    SET_GPR_U32(ctx, 31, 0x549F9Cu);
    ctx->pc = 0x549F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549F94u;
            // 0x549f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549F9Cu; }
        if (ctx->pc != 0x549F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549F9Cu; }
        if (ctx->pc != 0x549F9Cu) { return; }
    }
    ctx->pc = 0x549F9Cu;
label_549f9c:
    // 0x549f9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x549f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_549fa0:
    // 0x549fa0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x549fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_549fa4:
    // 0x549fa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x549fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_549fa8:
    // 0x549fa8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x549fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_549fac:
    // 0x549fac: 0x320f809  jalr        $t9
label_549fb0:
    if (ctx->pc == 0x549FB0u) {
        ctx->pc = 0x549FB0u;
            // 0x549fb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x549FB4u;
        goto label_549fb4;
    }
    ctx->pc = 0x549FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x549FB4u);
        ctx->pc = 0x549FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549FACu;
            // 0x549fb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x549FB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x549FB4u; }
            if (ctx->pc != 0x549FB4u) { return; }
        }
        }
    }
    ctx->pc = 0x549FB4u;
label_549fb4:
    // 0x549fb4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x549fb4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549fb8:
    // 0x549fb8: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x549fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_549fbc:
    // 0x549fbc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x549fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_549fc0:
    // 0x549fc0: 0x2652e5b0  addiu       $s2, $s2, -0x1A50
    ctx->pc = 0x549fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960560));
label_549fc4:
    // 0x549fc4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x549fc4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549fc8:
    // 0x549fc8: 0x0  nop
    ctx->pc = 0x549fc8u;
    // NOP
label_549fcc:
    // 0x549fcc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x549fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_549fd0:
    // 0x549fd0: 0xc6540008  lwc1        $f20, 0x8($s2)
    ctx->pc = 0x549fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_549fd4:
    // 0x549fd4: 0xc655000c  lwc1        $f21, 0xC($s2)
    ctx->pc = 0x549fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_549fd8:
    // 0x549fd8: 0x46146580  add.s       $f22, $f12, $f20
    ctx->pc = 0x549fd8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_549fdc:
    // 0x549fdc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_549fe0:
    if (ctx->pc == 0x549FE0u) {
        ctx->pc = 0x549FE0u;
            // 0x549fe0: 0x46156dc0  add.s       $f23, $f13, $f21 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x549FE4u;
        goto label_549fe4;
    }
    ctx->pc = 0x549FDCu;
    {
        const bool branch_taken_0x549fdc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x549FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549FDCu;
            // 0x549fe0: 0x46156dc0  add.s       $f23, $f13, $f21 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x549fdc) {
            ctx->pc = 0x549FF0u;
            goto label_549ff0;
        }
    }
    ctx->pc = 0x549FE4u;
label_549fe4:
    // 0x549fe4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x549fe4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549fe8:
    // 0x549fe8: 0x10000008  b           . + 4 + (0x8 << 2)
label_549fec:
    if (ctx->pc == 0x549FECu) {
        ctx->pc = 0x549FECu;
            // 0x549fec: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549FF0u;
        goto label_549ff0;
    }
    ctx->pc = 0x549FE8u;
    {
        const bool branch_taken_0x549fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549FE8u;
            // 0x549fec: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549fe8) {
            ctx->pc = 0x54A00Cu;
            goto label_54a00c;
        }
    }
    ctx->pc = 0x549FF0u;
label_549ff0:
    // 0x549ff0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x549ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_549ff4:
    // 0x549ff4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_549ff8:
    // 0x549ff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549ffc:
    // 0x549ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a000:
    // 0x54a000: 0x0  nop
    ctx->pc = 0x54a000u;
    // NOP
label_54a004:
    // 0x54a004: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a008:
    // 0x54a008: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a008u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a00c:
    // 0x54a00c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a010:
    if (ctx->pc == 0x54A010u) {
        ctx->pc = 0x54A010u;
            // 0x54a010: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A014u;
        goto label_54a014;
    }
    ctx->pc = 0x54A00Cu;
    {
        const bool branch_taken_0x54a00c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a00c) {
            ctx->pc = 0x54A010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A00Cu;
            // 0x54a010: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A020u;
            goto label_54a020;
        }
    }
    ctx->pc = 0x54A014u;
label_54a014:
    // 0x54a014: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a014u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a018:
    // 0x54a018: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a01c:
    if (ctx->pc == 0x54A01Cu) {
        ctx->pc = 0x54A01Cu;
            // 0x54a01c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A020u;
        goto label_54a020;
    }
    ctx->pc = 0x54A018u;
    {
        const bool branch_taken_0x54a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A018u;
            // 0x54a01c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a018) {
            ctx->pc = 0x54A038u;
            goto label_54a038;
        }
    }
    ctx->pc = 0x54A020u;
label_54a020:
    // 0x54a020: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a024:
    // 0x54a024: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a028:
    // 0x54a028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a02c:
    // 0x54a02c: 0x0  nop
    ctx->pc = 0x54a02cu;
    // NOP
label_54a030:
    // 0x54a030: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a034:
    // 0x54a034: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a034u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a038:
    // 0x54a038: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a03c:
    // 0x54a03c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a040:
    // 0x54a040: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a044:
    // 0x54a044: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a048:
    // 0x54a048: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54a048u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54a04c:
    // 0x54a04c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a050:
    // 0x54a050: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x54a050u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_54a054:
    // 0x54a054: 0xc0bc284  jal         func_2F0A10
label_54a058:
    if (ctx->pc == 0x54A058u) {
        ctx->pc = 0x54A058u;
            // 0x54a058: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A05Cu;
        goto label_54a05c;
    }
    ctx->pc = 0x54A054u;
    SET_GPR_U32(ctx, 31, 0x54A05Cu);
    ctx->pc = 0x54A058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A054u;
            // 0x54a058: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A05Cu; }
        if (ctx->pc != 0x54A05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A05Cu; }
        if (ctx->pc != 0x54A05Cu) { return; }
    }
    ctx->pc = 0x54A05Cu;
label_54a05c:
    // 0x54a05c: 0x2b6b021  addu        $s6, $s5, $s6
    ctx->pc = 0x54a05cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_54a060:
    // 0x54a060: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54a060u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a064:
    // 0x54a064: 0x0  nop
    ctx->pc = 0x54a064u;
    // NOP
label_54a068:
    // 0x54a068: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54a068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54a06c:
    // 0x54a06c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54a06cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a070:
    // 0x54a070: 0x0  nop
    ctx->pc = 0x54a070u;
    // NOP
label_54a074:
    // 0x54a074: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54a074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54a078:
    // 0x54a078: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a07c:
    if (ctx->pc == 0x54A07Cu) {
        ctx->pc = 0x54A07Cu;
            // 0x54a07c: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x54A080u;
        goto label_54a080;
    }
    ctx->pc = 0x54A078u;
    {
        const bool branch_taken_0x54a078 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A078u;
            // 0x54a07c: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a078) {
            ctx->pc = 0x54A08Cu;
            goto label_54a08c;
        }
    }
    ctx->pc = 0x54A080u;
label_54a080:
    // 0x54a080: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a080u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a084:
    // 0x54a084: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a088:
    if (ctx->pc == 0x54A088u) {
        ctx->pc = 0x54A088u;
            // 0x54a088: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A08Cu;
        goto label_54a08c;
    }
    ctx->pc = 0x54A084u;
    {
        const bool branch_taken_0x54a084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A084u;
            // 0x54a088: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a084) {
            ctx->pc = 0x54A0A8u;
            goto label_54a0a8;
        }
    }
    ctx->pc = 0x54A08Cu;
label_54a08c:
    // 0x54a08c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a090:
    // 0x54a090: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a094:
    // 0x54a094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a098:
    // 0x54a098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a09c:
    // 0x54a09c: 0x0  nop
    ctx->pc = 0x54a09cu;
    // NOP
label_54a0a0:
    // 0x54a0a0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a0a4:
    // 0x54a0a4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a0a4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a0a8:
    // 0x54a0a8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a0ac:
    if (ctx->pc == 0x54A0ACu) {
        ctx->pc = 0x54A0ACu;
            // 0x54a0ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A0B0u;
        goto label_54a0b0;
    }
    ctx->pc = 0x54A0A8u;
    {
        const bool branch_taken_0x54a0a8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a0a8) {
            ctx->pc = 0x54A0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A0A8u;
            // 0x54a0ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A0BCu;
            goto label_54a0bc;
        }
    }
    ctx->pc = 0x54A0B0u;
label_54a0b0:
    // 0x54a0b0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a0b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a0b4:
    // 0x54a0b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a0b8:
    if (ctx->pc == 0x54A0B8u) {
        ctx->pc = 0x54A0B8u;
            // 0x54a0b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A0BCu;
        goto label_54a0bc;
    }
    ctx->pc = 0x54A0B4u;
    {
        const bool branch_taken_0x54a0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A0B4u;
            // 0x54a0b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a0b4) {
            ctx->pc = 0x54A0D4u;
            goto label_54a0d4;
        }
    }
    ctx->pc = 0x54A0BCu;
label_54a0bc:
    // 0x54a0bc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a0c0:
    // 0x54a0c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a0c4:
    // 0x54a0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a0c8:
    // 0x54a0c8: 0x0  nop
    ctx->pc = 0x54a0c8u;
    // NOP
label_54a0cc:
    // 0x54a0cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a0d0:
    // 0x54a0d0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a0d0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a0d4:
    // 0x54a0d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a0d8:
    // 0x54a0d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a0dc:
    // 0x54a0dc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a0e0:
    // 0x54a0e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a0e4:
    // 0x54a0e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54a0e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54a0e8:
    // 0x54a0e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a0ec:
    // 0x54a0ec: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x54a0ecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_54a0f0:
    // 0x54a0f0: 0xc0bc284  jal         func_2F0A10
label_54a0f4:
    if (ctx->pc == 0x54A0F4u) {
        ctx->pc = 0x54A0F4u;
            // 0x54a0f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A0F8u;
        goto label_54a0f8;
    }
    ctx->pc = 0x54A0F0u;
    SET_GPR_U32(ctx, 31, 0x54A0F8u);
    ctx->pc = 0x54A0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A0F0u;
            // 0x54a0f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A0F8u; }
        if (ctx->pc != 0x54A0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A0F8u; }
        if (ctx->pc != 0x54A0F8u) { return; }
    }
    ctx->pc = 0x54A0F8u;
label_54a0f8:
    // 0x54a0f8: 0x297b821  addu        $s7, $s4, $s7
    ctx->pc = 0x54a0f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
label_54a0fc:
    // 0x54a0fc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54a0fcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a100:
    // 0x54a100: 0x0  nop
    ctx->pc = 0x54a100u;
    // NOP
label_54a104:
    // 0x54a104: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54a104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54a108:
    // 0x54a108: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54a108u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a10c:
    // 0x54a10c: 0x0  nop
    ctx->pc = 0x54a10cu;
    // NOP
label_54a110:
    // 0x54a110: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54a110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54a114:
    // 0x54a114: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a118:
    if (ctx->pc == 0x54A118u) {
        ctx->pc = 0x54A118u;
            // 0x54a118: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x54A11Cu;
        goto label_54a11c;
    }
    ctx->pc = 0x54A114u;
    {
        const bool branch_taken_0x54a114 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A114u;
            // 0x54a118: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a114) {
            ctx->pc = 0x54A128u;
            goto label_54a128;
        }
    }
    ctx->pc = 0x54A11Cu;
label_54a11c:
    // 0x54a11c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a11cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a120:
    // 0x54a120: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a124:
    if (ctx->pc == 0x54A124u) {
        ctx->pc = 0x54A124u;
            // 0x54a124: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A128u;
        goto label_54a128;
    }
    ctx->pc = 0x54A120u;
    {
        const bool branch_taken_0x54a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A120u;
            // 0x54a124: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a120) {
            ctx->pc = 0x54A144u;
            goto label_54a144;
        }
    }
    ctx->pc = 0x54A128u;
label_54a128:
    // 0x54a128: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a12c:
    // 0x54a12c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a130:
    // 0x54a130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a134:
    // 0x54a134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a138:
    // 0x54a138: 0x0  nop
    ctx->pc = 0x54a138u;
    // NOP
label_54a13c:
    // 0x54a13c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a140:
    // 0x54a140: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a140u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a144:
    // 0x54a144: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a148:
    if (ctx->pc == 0x54A148u) {
        ctx->pc = 0x54A148u;
            // 0x54a148: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A14Cu;
        goto label_54a14c;
    }
    ctx->pc = 0x54A144u;
    {
        const bool branch_taken_0x54a144 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a144) {
            ctx->pc = 0x54A148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A144u;
            // 0x54a148: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A158u;
            goto label_54a158;
        }
    }
    ctx->pc = 0x54A14Cu;
label_54a14c:
    // 0x54a14c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a14cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a150:
    // 0x54a150: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a154:
    if (ctx->pc == 0x54A154u) {
        ctx->pc = 0x54A154u;
            // 0x54a154: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A158u;
        goto label_54a158;
    }
    ctx->pc = 0x54A150u;
    {
        const bool branch_taken_0x54a150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A150u;
            // 0x54a154: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a150) {
            ctx->pc = 0x54A170u;
            goto label_54a170;
        }
    }
    ctx->pc = 0x54A158u;
label_54a158:
    // 0x54a158: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a15c:
    // 0x54a15c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a160:
    // 0x54a160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a164:
    // 0x54a164: 0x0  nop
    ctx->pc = 0x54a164u;
    // NOP
label_54a168:
    // 0x54a168: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a16c:
    // 0x54a16c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a16cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a170:
    // 0x54a170: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a174:
    // 0x54a174: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a178:
    // 0x54a178: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a17c:
    // 0x54a17c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a180:
    // 0x54a180: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54a180u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54a184:
    // 0x54a184: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a188:
    // 0x54a188: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x54a188u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_54a18c:
    // 0x54a18c: 0xc0bc284  jal         func_2F0A10
label_54a190:
    if (ctx->pc == 0x54A190u) {
        ctx->pc = 0x54A190u;
            // 0x54a190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A194u;
        goto label_54a194;
    }
    ctx->pc = 0x54A18Cu;
    SET_GPR_U32(ctx, 31, 0x54A194u);
    ctx->pc = 0x54A190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A18Cu;
            // 0x54a190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A194u; }
        if (ctx->pc != 0x54A194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A194u; }
        if (ctx->pc != 0x54A194u) { return; }
    }
    ctx->pc = 0x54A194u;
label_54a194:
    // 0x54a194: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54a194u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a198:
    // 0x54a198: 0x0  nop
    ctx->pc = 0x54a198u;
    // NOP
label_54a19c:
    // 0x54a19c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54a19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54a1a0:
    // 0x54a1a0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54a1a0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a1a4:
    // 0x54a1a4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a1a8:
    if (ctx->pc == 0x54A1A8u) {
        ctx->pc = 0x54A1A8u;
            // 0x54a1a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A1ACu;
        goto label_54a1ac;
    }
    ctx->pc = 0x54A1A4u;
    {
        const bool branch_taken_0x54a1a4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A1A4u;
            // 0x54a1a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a1a4) {
            ctx->pc = 0x54A1B8u;
            goto label_54a1b8;
        }
    }
    ctx->pc = 0x54A1ACu;
label_54a1ac:
    // 0x54a1ac: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a1acu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a1b0:
    // 0x54a1b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a1b4:
    if (ctx->pc == 0x54A1B4u) {
        ctx->pc = 0x54A1B4u;
            // 0x54a1b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A1B8u;
        goto label_54a1b8;
    }
    ctx->pc = 0x54A1B0u;
    {
        const bool branch_taken_0x54a1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A1B0u;
            // 0x54a1b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a1b0) {
            ctx->pc = 0x54A1D4u;
            goto label_54a1d4;
        }
    }
    ctx->pc = 0x54A1B8u;
label_54a1b8:
    // 0x54a1b8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a1bc:
    // 0x54a1bc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a1c0:
    // 0x54a1c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a1c4:
    // 0x54a1c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a1c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a1c8:
    // 0x54a1c8: 0x0  nop
    ctx->pc = 0x54a1c8u;
    // NOP
label_54a1cc:
    // 0x54a1cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a1d0:
    // 0x54a1d0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a1d0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a1d4:
    // 0x54a1d4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a1d8:
    if (ctx->pc == 0x54A1D8u) {
        ctx->pc = 0x54A1D8u;
            // 0x54a1d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A1DCu;
        goto label_54a1dc;
    }
    ctx->pc = 0x54A1D4u;
    {
        const bool branch_taken_0x54a1d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a1d4) {
            ctx->pc = 0x54A1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A1D4u;
            // 0x54a1d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A1E8u;
            goto label_54a1e8;
        }
    }
    ctx->pc = 0x54A1DCu;
label_54a1dc:
    // 0x54a1dc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a1dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a1e0:
    // 0x54a1e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a1e4:
    if (ctx->pc == 0x54A1E4u) {
        ctx->pc = 0x54A1E4u;
            // 0x54a1e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A1E8u;
        goto label_54a1e8;
    }
    ctx->pc = 0x54A1E0u;
    {
        const bool branch_taken_0x54a1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A1E0u;
            // 0x54a1e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a1e0) {
            ctx->pc = 0x54A200u;
            goto label_54a200;
        }
    }
    ctx->pc = 0x54A1E8u;
label_54a1e8:
    // 0x54a1e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a1ec:
    // 0x54a1ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a1f0:
    // 0x54a1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a1f4:
    // 0x54a1f4: 0x0  nop
    ctx->pc = 0x54a1f4u;
    // NOP
label_54a1f8:
    // 0x54a1f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a1fc:
    // 0x54a1fc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a1fcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a200:
    // 0x54a200: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a204:
    // 0x54a204: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a208:
    // 0x54a208: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a20c:
    // 0x54a20c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a210:
    // 0x54a210: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54a210u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54a214:
    // 0x54a214: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a218:
    // 0x54a218: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x54a218u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_54a21c:
    // 0x54a21c: 0xc0bc284  jal         func_2F0A10
label_54a220:
    if (ctx->pc == 0x54A220u) {
        ctx->pc = 0x54A220u;
            // 0x54a220: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A224u;
        goto label_54a224;
    }
    ctx->pc = 0x54A21Cu;
    SET_GPR_U32(ctx, 31, 0x54A224u);
    ctx->pc = 0x54A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A21Cu;
            // 0x54a220: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A224u; }
        if (ctx->pc != 0x54A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A224u; }
        if (ctx->pc != 0x54A224u) { return; }
    }
    ctx->pc = 0x54A224u;
label_54a224:
    // 0x54a224: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54a224u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a228:
    // 0x54a228: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x54a228u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_54a22c:
    // 0x54a22c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54a22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54a230:
    // 0x54a230: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a234:
    if (ctx->pc == 0x54A234u) {
        ctx->pc = 0x54A234u;
            // 0x54a234: 0x2652e5d0  addiu       $s2, $s2, -0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960592));
        ctx->pc = 0x54A238u;
        goto label_54a238;
    }
    ctx->pc = 0x54A230u;
    {
        const bool branch_taken_0x54a230 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A230u;
            // 0x54a234: 0x2652e5d0  addiu       $s2, $s2, -0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a230) {
            ctx->pc = 0x54A244u;
            goto label_54a244;
        }
    }
    ctx->pc = 0x54A238u;
label_54a238:
    // 0x54a238: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a238u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a23c:
    // 0x54a23c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a240:
    if (ctx->pc == 0x54A240u) {
        ctx->pc = 0x54A240u;
            // 0x54a240: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A244u;
        goto label_54a244;
    }
    ctx->pc = 0x54A23Cu;
    {
        const bool branch_taken_0x54a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A23Cu;
            // 0x54a240: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a23c) {
            ctx->pc = 0x54A260u;
            goto label_54a260;
        }
    }
    ctx->pc = 0x54A244u;
label_54a244:
    // 0x54a244: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a244u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a248:
    // 0x54a248: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a24c:
    // 0x54a24c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a250:
    // 0x54a250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a254:
    // 0x54a254: 0x0  nop
    ctx->pc = 0x54a254u;
    // NOP
label_54a258:
    // 0x54a258: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a25c:
    // 0x54a25c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a25cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a260:
    // 0x54a260: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a264:
    if (ctx->pc == 0x54A264u) {
        ctx->pc = 0x54A264u;
            // 0x54a264: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A268u;
        goto label_54a268;
    }
    ctx->pc = 0x54A260u;
    {
        const bool branch_taken_0x54a260 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a260) {
            ctx->pc = 0x54A264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A260u;
            // 0x54a264: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A274u;
            goto label_54a274;
        }
    }
    ctx->pc = 0x54A268u;
label_54a268:
    // 0x54a268: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a268u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a26c:
    // 0x54a26c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a270:
    if (ctx->pc == 0x54A270u) {
        ctx->pc = 0x54A270u;
            // 0x54a270: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A274u;
        goto label_54a274;
    }
    ctx->pc = 0x54A26Cu;
    {
        const bool branch_taken_0x54a26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A26Cu;
            // 0x54a270: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a26c) {
            ctx->pc = 0x54A28Cu;
            goto label_54a28c;
        }
    }
    ctx->pc = 0x54A274u;
label_54a274:
    // 0x54a274: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a278:
    // 0x54a278: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a27c:
    // 0x54a27c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a27cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a280:
    // 0x54a280: 0x0  nop
    ctx->pc = 0x54a280u;
    // NOP
label_54a284:
    // 0x54a284: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a288:
    // 0x54a288: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a288u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a28c:
    // 0x54a28c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a290:
    // 0x54a290: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a294:
    // 0x54a294: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a298:
    // 0x54a298: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a29c:
    // 0x54a29c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54a29cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54a2a0:
    // 0x54a2a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a2a4:
    // 0x54a2a4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54a2a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54a2a8:
    // 0x54a2a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54a2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54a2ac:
    // 0x54a2ac: 0xc0bc284  jal         func_2F0A10
label_54a2b0:
    if (ctx->pc == 0x54A2B0u) {
        ctx->pc = 0x54A2B0u;
            // 0x54a2b0: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54A2B4u;
        goto label_54a2b4;
    }
    ctx->pc = 0x54A2ACu;
    SET_GPR_U32(ctx, 31, 0x54A2B4u);
    ctx->pc = 0x54A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A2ACu;
            // 0x54a2b0: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A2B4u; }
        if (ctx->pc != 0x54A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A2B4u; }
        if (ctx->pc != 0x54A2B4u) { return; }
    }
    ctx->pc = 0x54A2B4u;
label_54a2b4:
    // 0x54a2b4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54a2b4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a2b8:
    // 0x54a2b8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a2bc:
    if (ctx->pc == 0x54A2BCu) {
        ctx->pc = 0x54A2BCu;
            // 0x54a2bc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A2C0u;
        goto label_54a2c0;
    }
    ctx->pc = 0x54A2B8u;
    {
        const bool branch_taken_0x54a2b8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A2B8u;
            // 0x54a2bc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a2b8) {
            ctx->pc = 0x54A2CCu;
            goto label_54a2cc;
        }
    }
    ctx->pc = 0x54A2C0u;
label_54a2c0:
    // 0x54a2c0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a2c0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a2c4:
    // 0x54a2c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a2c8:
    if (ctx->pc == 0x54A2C8u) {
        ctx->pc = 0x54A2C8u;
            // 0x54a2c8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A2CCu;
        goto label_54a2cc;
    }
    ctx->pc = 0x54A2C4u;
    {
        const bool branch_taken_0x54a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A2C4u;
            // 0x54a2c8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a2c4) {
            ctx->pc = 0x54A2E8u;
            goto label_54a2e8;
        }
    }
    ctx->pc = 0x54A2CCu;
label_54a2cc:
    // 0x54a2cc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a2d0:
    // 0x54a2d0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a2d4:
    // 0x54a2d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a2d8:
    // 0x54a2d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a2d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a2dc:
    // 0x54a2dc: 0x0  nop
    ctx->pc = 0x54a2dcu;
    // NOP
label_54a2e0:
    // 0x54a2e0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a2e4:
    // 0x54a2e4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a2e4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a2e8:
    // 0x54a2e8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a2ec:
    if (ctx->pc == 0x54A2ECu) {
        ctx->pc = 0x54A2ECu;
            // 0x54a2ec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A2F0u;
        goto label_54a2f0;
    }
    ctx->pc = 0x54A2E8u;
    {
        const bool branch_taken_0x54a2e8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a2e8) {
            ctx->pc = 0x54A2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A2E8u;
            // 0x54a2ec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A2FCu;
            goto label_54a2fc;
        }
    }
    ctx->pc = 0x54A2F0u;
label_54a2f0:
    // 0x54a2f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a2f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a2f4:
    // 0x54a2f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a2f8:
    if (ctx->pc == 0x54A2F8u) {
        ctx->pc = 0x54A2F8u;
            // 0x54a2f8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A2FCu;
        goto label_54a2fc;
    }
    ctx->pc = 0x54A2F4u;
    {
        const bool branch_taken_0x54a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A2F4u;
            // 0x54a2f8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a2f4) {
            ctx->pc = 0x54A314u;
            goto label_54a314;
        }
    }
    ctx->pc = 0x54A2FCu;
label_54a2fc:
    // 0x54a2fc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a300:
    // 0x54a300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a304:
    // 0x54a304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a308:
    // 0x54a308: 0x0  nop
    ctx->pc = 0x54a308u;
    // NOP
label_54a30c:
    // 0x54a30c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a310:
    // 0x54a310: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a310u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a314:
    // 0x54a314: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a318:
    // 0x54a318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a31c:
    // 0x54a31c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a320:
    // 0x54a320: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a324:
    // 0x54a324: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54a324u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54a328:
    // 0x54a328: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a32c:
    // 0x54a32c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54a32cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54a330:
    // 0x54a330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54a330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54a334:
    // 0x54a334: 0xc0bc284  jal         func_2F0A10
label_54a338:
    if (ctx->pc == 0x54A338u) {
        ctx->pc = 0x54A338u;
            // 0x54a338: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54A33Cu;
        goto label_54a33c;
    }
    ctx->pc = 0x54A334u;
    SET_GPR_U32(ctx, 31, 0x54A33Cu);
    ctx->pc = 0x54A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A334u;
            // 0x54a338: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A33Cu; }
        if (ctx->pc != 0x54A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A33Cu; }
        if (ctx->pc != 0x54A33Cu) { return; }
    }
    ctx->pc = 0x54A33Cu;
label_54a33c:
    // 0x54a33c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54a33cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a340:
    // 0x54a340: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x54a340u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_54a344:
    // 0x54a344: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54a344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54a348:
    // 0x54a348: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a34c:
    if (ctx->pc == 0x54A34Cu) {
        ctx->pc = 0x54A34Cu;
            // 0x54a34c: 0x2652e5c0  addiu       $s2, $s2, -0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960576));
        ctx->pc = 0x54A350u;
        goto label_54a350;
    }
    ctx->pc = 0x54A348u;
    {
        const bool branch_taken_0x54a348 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A348u;
            // 0x54a34c: 0x2652e5c0  addiu       $s2, $s2, -0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a348) {
            ctx->pc = 0x54A35Cu;
            goto label_54a35c;
        }
    }
    ctx->pc = 0x54A350u;
label_54a350:
    // 0x54a350: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a350u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a354:
    // 0x54a354: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a358:
    if (ctx->pc == 0x54A358u) {
        ctx->pc = 0x54A358u;
            // 0x54a358: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A35Cu;
        goto label_54a35c;
    }
    ctx->pc = 0x54A354u;
    {
        const bool branch_taken_0x54a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A354u;
            // 0x54a358: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a354) {
            ctx->pc = 0x54A378u;
            goto label_54a378;
        }
    }
    ctx->pc = 0x54A35Cu;
label_54a35c:
    // 0x54a35c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a360:
    // 0x54a360: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a364:
    // 0x54a364: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a368:
    // 0x54a368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a36c:
    // 0x54a36c: 0x0  nop
    ctx->pc = 0x54a36cu;
    // NOP
label_54a370:
    // 0x54a370: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a374:
    // 0x54a374: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a374u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a378:
    // 0x54a378: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a37c:
    if (ctx->pc == 0x54A37Cu) {
        ctx->pc = 0x54A37Cu;
            // 0x54a37c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A380u;
        goto label_54a380;
    }
    ctx->pc = 0x54A378u;
    {
        const bool branch_taken_0x54a378 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a378) {
            ctx->pc = 0x54A37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A378u;
            // 0x54a37c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A38Cu;
            goto label_54a38c;
        }
    }
    ctx->pc = 0x54A380u;
label_54a380:
    // 0x54a380: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a380u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a384:
    // 0x54a384: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a388:
    if (ctx->pc == 0x54A388u) {
        ctx->pc = 0x54A388u;
            // 0x54a388: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A38Cu;
        goto label_54a38c;
    }
    ctx->pc = 0x54A384u;
    {
        const bool branch_taken_0x54a384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A384u;
            // 0x54a388: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a384) {
            ctx->pc = 0x54A3A4u;
            goto label_54a3a4;
        }
    }
    ctx->pc = 0x54A38Cu;
label_54a38c:
    // 0x54a38c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a390:
    // 0x54a390: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a394:
    // 0x54a394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a398:
    // 0x54a398: 0x0  nop
    ctx->pc = 0x54a398u;
    // NOP
label_54a39c:
    // 0x54a39c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a39cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a3a0:
    // 0x54a3a0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a3a0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a3a4:
    // 0x54a3a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a3a8:
    // 0x54a3a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a3ac:
    // 0x54a3ac: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x54a3acu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_54a3b0:
    // 0x54a3b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a3b4:
    // 0x54a3b4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a3b8:
    // 0x54a3b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a3bc:
    // 0x54a3bc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54a3bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54a3c0:
    // 0x54a3c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54a3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54a3c4:
    // 0x54a3c4: 0xc0bc284  jal         func_2F0A10
label_54a3c8:
    if (ctx->pc == 0x54A3C8u) {
        ctx->pc = 0x54A3C8u;
            // 0x54a3c8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54A3CCu;
        goto label_54a3cc;
    }
    ctx->pc = 0x54A3C4u;
    SET_GPR_U32(ctx, 31, 0x54A3CCu);
    ctx->pc = 0x54A3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A3C4u;
            // 0x54a3c8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A3CCu; }
        if (ctx->pc != 0x54A3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A3CCu; }
        if (ctx->pc != 0x54A3CCu) { return; }
    }
    ctx->pc = 0x54A3CCu;
label_54a3cc:
    // 0x54a3cc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54a3ccu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a3d0:
    // 0x54a3d0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a3d4:
    if (ctx->pc == 0x54A3D4u) {
        ctx->pc = 0x54A3D4u;
            // 0x54a3d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A3D8u;
        goto label_54a3d8;
    }
    ctx->pc = 0x54A3D0u;
    {
        const bool branch_taken_0x54a3d0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A3D0u;
            // 0x54a3d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a3d0) {
            ctx->pc = 0x54A3E4u;
            goto label_54a3e4;
        }
    }
    ctx->pc = 0x54A3D8u;
label_54a3d8:
    // 0x54a3d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a3d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a3dc:
    // 0x54a3dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a3e0:
    if (ctx->pc == 0x54A3E0u) {
        ctx->pc = 0x54A3E0u;
            // 0x54a3e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A3E4u;
        goto label_54a3e4;
    }
    ctx->pc = 0x54A3DCu;
    {
        const bool branch_taken_0x54a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A3DCu;
            // 0x54a3e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a3dc) {
            ctx->pc = 0x54A400u;
            goto label_54a400;
        }
    }
    ctx->pc = 0x54A3E4u;
label_54a3e4:
    // 0x54a3e4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a3e8:
    // 0x54a3e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a3ec:
    // 0x54a3ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a3f0:
    // 0x54a3f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a3f4:
    // 0x54a3f4: 0x0  nop
    ctx->pc = 0x54a3f4u;
    // NOP
label_54a3f8:
    // 0x54a3f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a3fc:
    // 0x54a3fc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a3fcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a400:
    // 0x54a400: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a404:
    if (ctx->pc == 0x54A404u) {
        ctx->pc = 0x54A404u;
            // 0x54a404: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A408u;
        goto label_54a408;
    }
    ctx->pc = 0x54A400u;
    {
        const bool branch_taken_0x54a400 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a400) {
            ctx->pc = 0x54A404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A400u;
            // 0x54a404: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A414u;
            goto label_54a414;
        }
    }
    ctx->pc = 0x54A408u;
label_54a408:
    // 0x54a408: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a408u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a40c:
    // 0x54a40c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a410:
    if (ctx->pc == 0x54A410u) {
        ctx->pc = 0x54A410u;
            // 0x54a410: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A414u;
        goto label_54a414;
    }
    ctx->pc = 0x54A40Cu;
    {
        const bool branch_taken_0x54a40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A40Cu;
            // 0x54a410: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a40c) {
            ctx->pc = 0x54A42Cu;
            goto label_54a42c;
        }
    }
    ctx->pc = 0x54A414u;
label_54a414:
    // 0x54a414: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a418:
    // 0x54a418: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a41c:
    // 0x54a41c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a420:
    // 0x54a420: 0x0  nop
    ctx->pc = 0x54a420u;
    // NOP
label_54a424:
    // 0x54a424: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a428:
    // 0x54a428: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a428u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a42c:
    // 0x54a42c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a430:
    // 0x54a430: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a434:
    // 0x54a434: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54a434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54a438:
    // 0x54a438: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a43c:
    // 0x54a43c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54a43cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54a440:
    // 0x54a440: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a444:
    // 0x54a444: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x54a444u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_54a448:
    // 0x54a448: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a44c:
    // 0x54a44c: 0xc0bc284  jal         func_2F0A10
label_54a450:
    if (ctx->pc == 0x54A450u) {
        ctx->pc = 0x54A450u;
            // 0x54a450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A454u;
        goto label_54a454;
    }
    ctx->pc = 0x54A44Cu;
    SET_GPR_U32(ctx, 31, 0x54A454u);
    ctx->pc = 0x54A450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A44Cu;
            // 0x54a450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A454u; }
        if (ctx->pc != 0x54A454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A454u; }
        if (ctx->pc != 0x54A454u) { return; }
    }
    ctx->pc = 0x54A454u;
label_54a454:
    // 0x54a454: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54a458:
    // 0x54a458: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54a458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54a45c:
    // 0x54a45c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54a45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54a460:
    // 0x54a460: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54a460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54a464:
    // 0x54a464: 0x320f809  jalr        $t9
label_54a468:
    if (ctx->pc == 0x54A468u) {
        ctx->pc = 0x54A46Cu;
        goto label_54a46c;
    }
    ctx->pc = 0x54A464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54A46Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54A46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54A46Cu; }
            if (ctx->pc != 0x54A46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54A46Cu;
label_54a46c:
    // 0x54a46c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x54a46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_54a470:
    // 0x54a470: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54a474:
    // 0x54a474: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x54a474u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_54a478:
    // 0x54a478: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54a47c:
    // 0x54a47c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x54a47cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54a480:
    // 0x54a480: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54a484:
    // 0x54a484: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x54a484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54a488:
    // 0x54a488: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54a48c:
    // 0x54a48c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x54a48cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54a490:
    // 0x54a490: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x54a490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54a494:
    // 0x54a494: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x54a494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54a498:
    // 0x54a498: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x54a498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54a49c:
    // 0x54a49c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x54a49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54a4a0:
    // 0x54a4a0: 0x3e00008  jr          $ra
label_54a4a4:
    if (ctx->pc == 0x54A4A4u) {
        ctx->pc = 0x54A4A4u;
            // 0x54a4a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x54A4A8u;
        goto label_54a4a8;
    }
    ctx->pc = 0x54A4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54A4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A4A0u;
            // 0x54a4a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54A4A8u;
label_54a4a8:
    // 0x54a4a8: 0x0  nop
    ctx->pc = 0x54a4a8u;
    // NOP
label_54a4ac:
    // 0x54a4ac: 0x0  nop
    ctx->pc = 0x54a4acu;
    // NOP
}
