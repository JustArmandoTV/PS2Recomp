#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D5FC0
// Address: 0x4d5fc0 - 0x4d6510
void sub_004D5FC0_0x4d5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5FC0_0x4d5fc0");
#endif

    switch (ctx->pc) {
        case 0x4d5fc0u: goto label_4d5fc0;
        case 0x4d5fc4u: goto label_4d5fc4;
        case 0x4d5fc8u: goto label_4d5fc8;
        case 0x4d5fccu: goto label_4d5fcc;
        case 0x4d5fd0u: goto label_4d5fd0;
        case 0x4d5fd4u: goto label_4d5fd4;
        case 0x4d5fd8u: goto label_4d5fd8;
        case 0x4d5fdcu: goto label_4d5fdc;
        case 0x4d5fe0u: goto label_4d5fe0;
        case 0x4d5fe4u: goto label_4d5fe4;
        case 0x4d5fe8u: goto label_4d5fe8;
        case 0x4d5fecu: goto label_4d5fec;
        case 0x4d5ff0u: goto label_4d5ff0;
        case 0x4d5ff4u: goto label_4d5ff4;
        case 0x4d5ff8u: goto label_4d5ff8;
        case 0x4d5ffcu: goto label_4d5ffc;
        case 0x4d6000u: goto label_4d6000;
        case 0x4d6004u: goto label_4d6004;
        case 0x4d6008u: goto label_4d6008;
        case 0x4d600cu: goto label_4d600c;
        case 0x4d6010u: goto label_4d6010;
        case 0x4d6014u: goto label_4d6014;
        case 0x4d6018u: goto label_4d6018;
        case 0x4d601cu: goto label_4d601c;
        case 0x4d6020u: goto label_4d6020;
        case 0x4d6024u: goto label_4d6024;
        case 0x4d6028u: goto label_4d6028;
        case 0x4d602cu: goto label_4d602c;
        case 0x4d6030u: goto label_4d6030;
        case 0x4d6034u: goto label_4d6034;
        case 0x4d6038u: goto label_4d6038;
        case 0x4d603cu: goto label_4d603c;
        case 0x4d6040u: goto label_4d6040;
        case 0x4d6044u: goto label_4d6044;
        case 0x4d6048u: goto label_4d6048;
        case 0x4d604cu: goto label_4d604c;
        case 0x4d6050u: goto label_4d6050;
        case 0x4d6054u: goto label_4d6054;
        case 0x4d6058u: goto label_4d6058;
        case 0x4d605cu: goto label_4d605c;
        case 0x4d6060u: goto label_4d6060;
        case 0x4d6064u: goto label_4d6064;
        case 0x4d6068u: goto label_4d6068;
        case 0x4d606cu: goto label_4d606c;
        case 0x4d6070u: goto label_4d6070;
        case 0x4d6074u: goto label_4d6074;
        case 0x4d6078u: goto label_4d6078;
        case 0x4d607cu: goto label_4d607c;
        case 0x4d6080u: goto label_4d6080;
        case 0x4d6084u: goto label_4d6084;
        case 0x4d6088u: goto label_4d6088;
        case 0x4d608cu: goto label_4d608c;
        case 0x4d6090u: goto label_4d6090;
        case 0x4d6094u: goto label_4d6094;
        case 0x4d6098u: goto label_4d6098;
        case 0x4d609cu: goto label_4d609c;
        case 0x4d60a0u: goto label_4d60a0;
        case 0x4d60a4u: goto label_4d60a4;
        case 0x4d60a8u: goto label_4d60a8;
        case 0x4d60acu: goto label_4d60ac;
        case 0x4d60b0u: goto label_4d60b0;
        case 0x4d60b4u: goto label_4d60b4;
        case 0x4d60b8u: goto label_4d60b8;
        case 0x4d60bcu: goto label_4d60bc;
        case 0x4d60c0u: goto label_4d60c0;
        case 0x4d60c4u: goto label_4d60c4;
        case 0x4d60c8u: goto label_4d60c8;
        case 0x4d60ccu: goto label_4d60cc;
        case 0x4d60d0u: goto label_4d60d0;
        case 0x4d60d4u: goto label_4d60d4;
        case 0x4d60d8u: goto label_4d60d8;
        case 0x4d60dcu: goto label_4d60dc;
        case 0x4d60e0u: goto label_4d60e0;
        case 0x4d60e4u: goto label_4d60e4;
        case 0x4d60e8u: goto label_4d60e8;
        case 0x4d60ecu: goto label_4d60ec;
        case 0x4d60f0u: goto label_4d60f0;
        case 0x4d60f4u: goto label_4d60f4;
        case 0x4d60f8u: goto label_4d60f8;
        case 0x4d60fcu: goto label_4d60fc;
        case 0x4d6100u: goto label_4d6100;
        case 0x4d6104u: goto label_4d6104;
        case 0x4d6108u: goto label_4d6108;
        case 0x4d610cu: goto label_4d610c;
        case 0x4d6110u: goto label_4d6110;
        case 0x4d6114u: goto label_4d6114;
        case 0x4d6118u: goto label_4d6118;
        case 0x4d611cu: goto label_4d611c;
        case 0x4d6120u: goto label_4d6120;
        case 0x4d6124u: goto label_4d6124;
        case 0x4d6128u: goto label_4d6128;
        case 0x4d612cu: goto label_4d612c;
        case 0x4d6130u: goto label_4d6130;
        case 0x4d6134u: goto label_4d6134;
        case 0x4d6138u: goto label_4d6138;
        case 0x4d613cu: goto label_4d613c;
        case 0x4d6140u: goto label_4d6140;
        case 0x4d6144u: goto label_4d6144;
        case 0x4d6148u: goto label_4d6148;
        case 0x4d614cu: goto label_4d614c;
        case 0x4d6150u: goto label_4d6150;
        case 0x4d6154u: goto label_4d6154;
        case 0x4d6158u: goto label_4d6158;
        case 0x4d615cu: goto label_4d615c;
        case 0x4d6160u: goto label_4d6160;
        case 0x4d6164u: goto label_4d6164;
        case 0x4d6168u: goto label_4d6168;
        case 0x4d616cu: goto label_4d616c;
        case 0x4d6170u: goto label_4d6170;
        case 0x4d6174u: goto label_4d6174;
        case 0x4d6178u: goto label_4d6178;
        case 0x4d617cu: goto label_4d617c;
        case 0x4d6180u: goto label_4d6180;
        case 0x4d6184u: goto label_4d6184;
        case 0x4d6188u: goto label_4d6188;
        case 0x4d618cu: goto label_4d618c;
        case 0x4d6190u: goto label_4d6190;
        case 0x4d6194u: goto label_4d6194;
        case 0x4d6198u: goto label_4d6198;
        case 0x4d619cu: goto label_4d619c;
        case 0x4d61a0u: goto label_4d61a0;
        case 0x4d61a4u: goto label_4d61a4;
        case 0x4d61a8u: goto label_4d61a8;
        case 0x4d61acu: goto label_4d61ac;
        case 0x4d61b0u: goto label_4d61b0;
        case 0x4d61b4u: goto label_4d61b4;
        case 0x4d61b8u: goto label_4d61b8;
        case 0x4d61bcu: goto label_4d61bc;
        case 0x4d61c0u: goto label_4d61c0;
        case 0x4d61c4u: goto label_4d61c4;
        case 0x4d61c8u: goto label_4d61c8;
        case 0x4d61ccu: goto label_4d61cc;
        case 0x4d61d0u: goto label_4d61d0;
        case 0x4d61d4u: goto label_4d61d4;
        case 0x4d61d8u: goto label_4d61d8;
        case 0x4d61dcu: goto label_4d61dc;
        case 0x4d61e0u: goto label_4d61e0;
        case 0x4d61e4u: goto label_4d61e4;
        case 0x4d61e8u: goto label_4d61e8;
        case 0x4d61ecu: goto label_4d61ec;
        case 0x4d61f0u: goto label_4d61f0;
        case 0x4d61f4u: goto label_4d61f4;
        case 0x4d61f8u: goto label_4d61f8;
        case 0x4d61fcu: goto label_4d61fc;
        case 0x4d6200u: goto label_4d6200;
        case 0x4d6204u: goto label_4d6204;
        case 0x4d6208u: goto label_4d6208;
        case 0x4d620cu: goto label_4d620c;
        case 0x4d6210u: goto label_4d6210;
        case 0x4d6214u: goto label_4d6214;
        case 0x4d6218u: goto label_4d6218;
        case 0x4d621cu: goto label_4d621c;
        case 0x4d6220u: goto label_4d6220;
        case 0x4d6224u: goto label_4d6224;
        case 0x4d6228u: goto label_4d6228;
        case 0x4d622cu: goto label_4d622c;
        case 0x4d6230u: goto label_4d6230;
        case 0x4d6234u: goto label_4d6234;
        case 0x4d6238u: goto label_4d6238;
        case 0x4d623cu: goto label_4d623c;
        case 0x4d6240u: goto label_4d6240;
        case 0x4d6244u: goto label_4d6244;
        case 0x4d6248u: goto label_4d6248;
        case 0x4d624cu: goto label_4d624c;
        case 0x4d6250u: goto label_4d6250;
        case 0x4d6254u: goto label_4d6254;
        case 0x4d6258u: goto label_4d6258;
        case 0x4d625cu: goto label_4d625c;
        case 0x4d6260u: goto label_4d6260;
        case 0x4d6264u: goto label_4d6264;
        case 0x4d6268u: goto label_4d6268;
        case 0x4d626cu: goto label_4d626c;
        case 0x4d6270u: goto label_4d6270;
        case 0x4d6274u: goto label_4d6274;
        case 0x4d6278u: goto label_4d6278;
        case 0x4d627cu: goto label_4d627c;
        case 0x4d6280u: goto label_4d6280;
        case 0x4d6284u: goto label_4d6284;
        case 0x4d6288u: goto label_4d6288;
        case 0x4d628cu: goto label_4d628c;
        case 0x4d6290u: goto label_4d6290;
        case 0x4d6294u: goto label_4d6294;
        case 0x4d6298u: goto label_4d6298;
        case 0x4d629cu: goto label_4d629c;
        case 0x4d62a0u: goto label_4d62a0;
        case 0x4d62a4u: goto label_4d62a4;
        case 0x4d62a8u: goto label_4d62a8;
        case 0x4d62acu: goto label_4d62ac;
        case 0x4d62b0u: goto label_4d62b0;
        case 0x4d62b4u: goto label_4d62b4;
        case 0x4d62b8u: goto label_4d62b8;
        case 0x4d62bcu: goto label_4d62bc;
        case 0x4d62c0u: goto label_4d62c0;
        case 0x4d62c4u: goto label_4d62c4;
        case 0x4d62c8u: goto label_4d62c8;
        case 0x4d62ccu: goto label_4d62cc;
        case 0x4d62d0u: goto label_4d62d0;
        case 0x4d62d4u: goto label_4d62d4;
        case 0x4d62d8u: goto label_4d62d8;
        case 0x4d62dcu: goto label_4d62dc;
        case 0x4d62e0u: goto label_4d62e0;
        case 0x4d62e4u: goto label_4d62e4;
        case 0x4d62e8u: goto label_4d62e8;
        case 0x4d62ecu: goto label_4d62ec;
        case 0x4d62f0u: goto label_4d62f0;
        case 0x4d62f4u: goto label_4d62f4;
        case 0x4d62f8u: goto label_4d62f8;
        case 0x4d62fcu: goto label_4d62fc;
        case 0x4d6300u: goto label_4d6300;
        case 0x4d6304u: goto label_4d6304;
        case 0x4d6308u: goto label_4d6308;
        case 0x4d630cu: goto label_4d630c;
        case 0x4d6310u: goto label_4d6310;
        case 0x4d6314u: goto label_4d6314;
        case 0x4d6318u: goto label_4d6318;
        case 0x4d631cu: goto label_4d631c;
        case 0x4d6320u: goto label_4d6320;
        case 0x4d6324u: goto label_4d6324;
        case 0x4d6328u: goto label_4d6328;
        case 0x4d632cu: goto label_4d632c;
        case 0x4d6330u: goto label_4d6330;
        case 0x4d6334u: goto label_4d6334;
        case 0x4d6338u: goto label_4d6338;
        case 0x4d633cu: goto label_4d633c;
        case 0x4d6340u: goto label_4d6340;
        case 0x4d6344u: goto label_4d6344;
        case 0x4d6348u: goto label_4d6348;
        case 0x4d634cu: goto label_4d634c;
        case 0x4d6350u: goto label_4d6350;
        case 0x4d6354u: goto label_4d6354;
        case 0x4d6358u: goto label_4d6358;
        case 0x4d635cu: goto label_4d635c;
        case 0x4d6360u: goto label_4d6360;
        case 0x4d6364u: goto label_4d6364;
        case 0x4d6368u: goto label_4d6368;
        case 0x4d636cu: goto label_4d636c;
        case 0x4d6370u: goto label_4d6370;
        case 0x4d6374u: goto label_4d6374;
        case 0x4d6378u: goto label_4d6378;
        case 0x4d637cu: goto label_4d637c;
        case 0x4d6380u: goto label_4d6380;
        case 0x4d6384u: goto label_4d6384;
        case 0x4d6388u: goto label_4d6388;
        case 0x4d638cu: goto label_4d638c;
        case 0x4d6390u: goto label_4d6390;
        case 0x4d6394u: goto label_4d6394;
        case 0x4d6398u: goto label_4d6398;
        case 0x4d639cu: goto label_4d639c;
        case 0x4d63a0u: goto label_4d63a0;
        case 0x4d63a4u: goto label_4d63a4;
        case 0x4d63a8u: goto label_4d63a8;
        case 0x4d63acu: goto label_4d63ac;
        case 0x4d63b0u: goto label_4d63b0;
        case 0x4d63b4u: goto label_4d63b4;
        case 0x4d63b8u: goto label_4d63b8;
        case 0x4d63bcu: goto label_4d63bc;
        case 0x4d63c0u: goto label_4d63c0;
        case 0x4d63c4u: goto label_4d63c4;
        case 0x4d63c8u: goto label_4d63c8;
        case 0x4d63ccu: goto label_4d63cc;
        case 0x4d63d0u: goto label_4d63d0;
        case 0x4d63d4u: goto label_4d63d4;
        case 0x4d63d8u: goto label_4d63d8;
        case 0x4d63dcu: goto label_4d63dc;
        case 0x4d63e0u: goto label_4d63e0;
        case 0x4d63e4u: goto label_4d63e4;
        case 0x4d63e8u: goto label_4d63e8;
        case 0x4d63ecu: goto label_4d63ec;
        case 0x4d63f0u: goto label_4d63f0;
        case 0x4d63f4u: goto label_4d63f4;
        case 0x4d63f8u: goto label_4d63f8;
        case 0x4d63fcu: goto label_4d63fc;
        case 0x4d6400u: goto label_4d6400;
        case 0x4d6404u: goto label_4d6404;
        case 0x4d6408u: goto label_4d6408;
        case 0x4d640cu: goto label_4d640c;
        case 0x4d6410u: goto label_4d6410;
        case 0x4d6414u: goto label_4d6414;
        case 0x4d6418u: goto label_4d6418;
        case 0x4d641cu: goto label_4d641c;
        case 0x4d6420u: goto label_4d6420;
        case 0x4d6424u: goto label_4d6424;
        case 0x4d6428u: goto label_4d6428;
        case 0x4d642cu: goto label_4d642c;
        case 0x4d6430u: goto label_4d6430;
        case 0x4d6434u: goto label_4d6434;
        case 0x4d6438u: goto label_4d6438;
        case 0x4d643cu: goto label_4d643c;
        case 0x4d6440u: goto label_4d6440;
        case 0x4d6444u: goto label_4d6444;
        case 0x4d6448u: goto label_4d6448;
        case 0x4d644cu: goto label_4d644c;
        case 0x4d6450u: goto label_4d6450;
        case 0x4d6454u: goto label_4d6454;
        case 0x4d6458u: goto label_4d6458;
        case 0x4d645cu: goto label_4d645c;
        case 0x4d6460u: goto label_4d6460;
        case 0x4d6464u: goto label_4d6464;
        case 0x4d6468u: goto label_4d6468;
        case 0x4d646cu: goto label_4d646c;
        case 0x4d6470u: goto label_4d6470;
        case 0x4d6474u: goto label_4d6474;
        case 0x4d6478u: goto label_4d6478;
        case 0x4d647cu: goto label_4d647c;
        case 0x4d6480u: goto label_4d6480;
        case 0x4d6484u: goto label_4d6484;
        case 0x4d6488u: goto label_4d6488;
        case 0x4d648cu: goto label_4d648c;
        case 0x4d6490u: goto label_4d6490;
        case 0x4d6494u: goto label_4d6494;
        case 0x4d6498u: goto label_4d6498;
        case 0x4d649cu: goto label_4d649c;
        case 0x4d64a0u: goto label_4d64a0;
        case 0x4d64a4u: goto label_4d64a4;
        case 0x4d64a8u: goto label_4d64a8;
        case 0x4d64acu: goto label_4d64ac;
        case 0x4d64b0u: goto label_4d64b0;
        case 0x4d64b4u: goto label_4d64b4;
        case 0x4d64b8u: goto label_4d64b8;
        case 0x4d64bcu: goto label_4d64bc;
        case 0x4d64c0u: goto label_4d64c0;
        case 0x4d64c4u: goto label_4d64c4;
        case 0x4d64c8u: goto label_4d64c8;
        case 0x4d64ccu: goto label_4d64cc;
        case 0x4d64d0u: goto label_4d64d0;
        case 0x4d64d4u: goto label_4d64d4;
        case 0x4d64d8u: goto label_4d64d8;
        case 0x4d64dcu: goto label_4d64dc;
        case 0x4d64e0u: goto label_4d64e0;
        case 0x4d64e4u: goto label_4d64e4;
        case 0x4d64e8u: goto label_4d64e8;
        case 0x4d64ecu: goto label_4d64ec;
        case 0x4d64f0u: goto label_4d64f0;
        case 0x4d64f4u: goto label_4d64f4;
        case 0x4d64f8u: goto label_4d64f8;
        case 0x4d64fcu: goto label_4d64fc;
        case 0x4d6500u: goto label_4d6500;
        case 0x4d6504u: goto label_4d6504;
        case 0x4d6508u: goto label_4d6508;
        case 0x4d650cu: goto label_4d650c;
        default: break;
    }

    ctx->pc = 0x4d5fc0u;

label_4d5fc0:
    // 0x4d5fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d5fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d5fc4:
    // 0x4d5fc4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d5fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d5fc8:
    // 0x4d5fc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d5fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d5fcc:
    // 0x4d5fcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d5fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d5fd0:
    // 0x4d5fd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d5fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d5fd4:
    // 0x4d5fd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d5fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d5fd8:
    // 0x4d5fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d5fdc:
    // 0x4d5fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d5fe0:
    // 0x4d5fe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d5fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d5fe4:
    // 0x4d5fe4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d5fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4d5fe8:
    // 0x4d5fe8: 0xc10ca68  jal         func_4329A0
label_4d5fec:
    if (ctx->pc == 0x4D5FECu) {
        ctx->pc = 0x4D5FECu;
            // 0x4d5fec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4D5FF0u;
        goto label_4d5ff0;
    }
    ctx->pc = 0x4D5FE8u;
    SET_GPR_U32(ctx, 31, 0x4D5FF0u);
    ctx->pc = 0x4D5FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5FE8u;
            // 0x4d5fec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5FF0u; }
        if (ctx->pc != 0x4D5FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5FF0u; }
        if (ctx->pc != 0x4D5FF0u) { return; }
    }
    ctx->pc = 0x4D5FF0u;
label_4d5ff0:
    // 0x4d5ff0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d5ff4:
    // 0x4d5ff4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d5ff8:
    // 0x4d5ff8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4d5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4d5ffc:
    // 0x4d5ffc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d6000:
    // 0x4d6000: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d6000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d6004:
    // 0x4d6004: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4d6004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4d6008:
    // 0x4d6008: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d6008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d600c:
    // 0x4d600c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d6010:
    // 0x4d6010: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4d6010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4d6014:
    // 0x4d6014: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d6014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d6018:
    // 0x4d6018: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4d6018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4d601c:
    // 0x4d601c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d601cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d6020:
    // 0x4d6020: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4d6020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4d6024:
    // 0x4d6024: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4d6024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4d6028:
    // 0x4d6028: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4d6028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4d602c:
    // 0x4d602c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4d602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4d6030:
    // 0x4d6030: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4d6030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4d6034:
    // 0x4d6034: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4d6034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4d6038:
    // 0x4d6038: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4d6038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4d603c:
    // 0x4d603c: 0xc0582cc  jal         func_160B30
label_4d6040:
    if (ctx->pc == 0x4D6040u) {
        ctx->pc = 0x4D6040u;
            // 0x4d6040: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4D6044u;
        goto label_4d6044;
    }
    ctx->pc = 0x4D603Cu;
    SET_GPR_U32(ctx, 31, 0x4D6044u);
    ctx->pc = 0x4D6040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D603Cu;
            // 0x4d6040: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6044u; }
        if (ctx->pc != 0x4D6044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6044u; }
        if (ctx->pc != 0x4D6044u) { return; }
    }
    ctx->pc = 0x4D6044u;
label_4d6044:
    // 0x4d6044: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d6048:
    // 0x4d6048: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4d6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4d604c:
    // 0x4d604c: 0x246325f8  addiu       $v1, $v1, 0x25F8
    ctx->pc = 0x4d604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9720));
label_4d6050:
    // 0x4d6050: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4d6050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4d6054:
    // 0x4d6054: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4d6054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4d6058:
    // 0x4d6058: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d6058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d605c:
    // 0x4d605c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d6060:
    // 0x4d6060: 0xac44aa48  sw          $a0, -0x55B8($v0)
    ctx->pc = 0x4d6060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945352), GPR_U32(ctx, 4));
label_4d6064:
    // 0x4d6064: 0x24632610  addiu       $v1, $v1, 0x2610
    ctx->pc = 0x4d6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9744));
label_4d6068:
    // 0x4d6068: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d606c:
    // 0x4d606c: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x4d606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
label_4d6070:
    // 0x4d6070: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d6070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d6074:
    // 0x4d6074: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4d6074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4d6078:
    // 0x4d6078: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4d6078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4d607c:
    // 0x4d607c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4d607cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4d6080:
    // 0x4d6080: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4d6080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4d6084:
    // 0x4d6084: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4d6084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4d6088:
    // 0x4d6088: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4d6088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4d608c:
    // 0x4d608c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4d608cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4d6090:
    // 0x4d6090: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4d6090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4d6094:
    // 0x4d6094: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4d6094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4d6098:
    // 0x4d6098: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4d6098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4d609c:
    // 0x4d609c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4d609cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4d60a0:
    // 0x4d60a0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4d60a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4d60a4:
    // 0x4d60a4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4d60a8:
    if (ctx->pc == 0x4D60A8u) {
        ctx->pc = 0x4D60ACu;
        goto label_4d60ac;
    }
    ctx->pc = 0x4D60A4u;
    {
        const bool branch_taken_0x4d60a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d60a4) {
            ctx->pc = 0x4D6138u;
            goto label_4d6138;
        }
    }
    ctx->pc = 0x4D60ACu;
label_4d60ac:
    // 0x4d60ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d60acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4d60b0:
    // 0x4d60b0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4d60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4d60b4:
    // 0x4d60b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4d60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4d60b8:
    // 0x4d60b8: 0xc040138  jal         func_1004E0
label_4d60bc:
    if (ctx->pc == 0x4D60BCu) {
        ctx->pc = 0x4D60BCu;
            // 0x4d60bc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4D60C0u;
        goto label_4d60c0;
    }
    ctx->pc = 0x4D60B8u;
    SET_GPR_U32(ctx, 31, 0x4D60C0u);
    ctx->pc = 0x4D60BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D60B8u;
            // 0x4d60bc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D60C0u; }
        if (ctx->pc != 0x4D60C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D60C0u; }
        if (ctx->pc != 0x4D60C0u) { return; }
    }
    ctx->pc = 0x4D60C0u;
label_4d60c0:
    // 0x4d60c0: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d60c4:
    // 0x4d60c4: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4d60c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4d60c8:
    // 0x4d60c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d60c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d60cc:
    // 0x4d60cc: 0x24a56160  addiu       $a1, $a1, 0x6160
    ctx->pc = 0x4d60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24928));
label_4d60d0:
    // 0x4d60d0: 0x24c65900  addiu       $a2, $a2, 0x5900
    ctx->pc = 0x4d60d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22784));
label_4d60d4:
    // 0x4d60d4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4d60d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4d60d8:
    // 0x4d60d8: 0xc040840  jal         func_102100
label_4d60dc:
    if (ctx->pc == 0x4D60DCu) {
        ctx->pc = 0x4D60DCu;
            // 0x4d60dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D60E0u;
        goto label_4d60e0;
    }
    ctx->pc = 0x4D60D8u;
    SET_GPR_U32(ctx, 31, 0x4D60E0u);
    ctx->pc = 0x4D60DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D60D8u;
            // 0x4d60dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D60E0u; }
        if (ctx->pc != 0x4D60E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D60E0u; }
        if (ctx->pc != 0x4D60E0u) { return; }
    }
    ctx->pc = 0x4D60E0u;
label_4d60e0:
    // 0x4d60e0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4d60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4d60e4:
    // 0x4d60e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d60e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d60e8:
    // 0x4d60e8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4d60e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4d60ec:
    // 0x4d60ec: 0xc0788fc  jal         func_1E23F0
label_4d60f0:
    if (ctx->pc == 0x4D60F0u) {
        ctx->pc = 0x4D60F0u;
            // 0x4d60f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D60F4u;
        goto label_4d60f4;
    }
    ctx->pc = 0x4D60ECu;
    SET_GPR_U32(ctx, 31, 0x4D60F4u);
    ctx->pc = 0x4D60F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D60ECu;
            // 0x4d60f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D60F4u; }
        if (ctx->pc != 0x4D60F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D60F4u; }
        if (ctx->pc != 0x4D60F4u) { return; }
    }
    ctx->pc = 0x4D60F4u;
label_4d60f4:
    // 0x4d60f4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d60f8:
    // 0x4d60f8: 0xc0788fc  jal         func_1E23F0
label_4d60fc:
    if (ctx->pc == 0x4D60FCu) {
        ctx->pc = 0x4D60FCu;
            // 0x4d60fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6100u;
        goto label_4d6100;
    }
    ctx->pc = 0x4D60F8u;
    SET_GPR_U32(ctx, 31, 0x4D6100u);
    ctx->pc = 0x4D60FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D60F8u;
            // 0x4d60fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6100u; }
        if (ctx->pc != 0x4D6100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6100u; }
        if (ctx->pc != 0x4D6100u) { return; }
    }
    ctx->pc = 0x4D6100u;
label_4d6100:
    // 0x4d6100: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d6100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6104:
    // 0x4d6104: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4d6104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4d6108:
    // 0x4d6108: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d6108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d610c:
    // 0x4d610c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4d610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4d6110:
    // 0x4d6110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d6110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d6114:
    // 0x4d6114: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4d6114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4d6118:
    // 0x4d6118: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4d6118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4d611c:
    // 0x4d611c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d611cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d6120:
    // 0x4d6120: 0xc0a997c  jal         func_2A65F0
label_4d6124:
    if (ctx->pc == 0x4D6124u) {
        ctx->pc = 0x4D6124u;
            // 0x4d6124: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4D6128u;
        goto label_4d6128;
    }
    ctx->pc = 0x4D6120u;
    SET_GPR_U32(ctx, 31, 0x4D6128u);
    ctx->pc = 0x4D6124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6120u;
            // 0x4d6124: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6128u; }
        if (ctx->pc != 0x4D6128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6128u; }
        if (ctx->pc != 0x4D6128u) { return; }
    }
    ctx->pc = 0x4D6128u;
label_4d6128:
    // 0x4d6128: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d6128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4d612c:
    // 0x4d612c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4d612cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d6130:
    // 0x4d6130: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4d6134:
    if (ctx->pc == 0x4D6134u) {
        ctx->pc = 0x4D6134u;
            // 0x4d6134: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4D6138u;
        goto label_4d6138;
    }
    ctx->pc = 0x4D6130u;
    {
        const bool branch_taken_0x4d6130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D6134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6130u;
            // 0x4d6134: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6130) {
            ctx->pc = 0x4D6104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d6104;
        }
    }
    ctx->pc = 0x4D6138u;
label_4d6138:
    // 0x4d6138: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d6138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d613c:
    // 0x4d613c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d613cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d6140:
    // 0x4d6140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d6140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d6144:
    // 0x4d6144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d6144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d6148:
    // 0x4d6148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d6148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d614c:
    // 0x4d614c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d614cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6150:
    // 0x4d6150: 0x3e00008  jr          $ra
label_4d6154:
    if (ctx->pc == 0x4D6154u) {
        ctx->pc = 0x4D6154u;
            // 0x4d6154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D6158u;
        goto label_4d6158;
    }
    ctx->pc = 0x4D6150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6150u;
            // 0x4d6154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6158u;
label_4d6158:
    // 0x4d6158: 0x0  nop
    ctx->pc = 0x4d6158u;
    // NOP
label_4d615c:
    // 0x4d615c: 0x0  nop
    ctx->pc = 0x4d615cu;
    // NOP
label_4d6160:
    // 0x4d6160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d6160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d6164:
    // 0x4d6164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d6168:
    // 0x4d6168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d616c:
    // 0x4d616c: 0xc12e6bc  jal         func_4B9AF0
label_4d6170:
    if (ctx->pc == 0x4D6170u) {
        ctx->pc = 0x4D6170u;
            // 0x4d6170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6174u;
        goto label_4d6174;
    }
    ctx->pc = 0x4D616Cu;
    SET_GPR_U32(ctx, 31, 0x4D6174u);
    ctx->pc = 0x4D6170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D616Cu;
            // 0x4d6170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6174u; }
        if (ctx->pc != 0x4D6174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6174u; }
        if (ctx->pc != 0x4D6174u) { return; }
    }
    ctx->pc = 0x4D6174u;
label_4d6174:
    // 0x4d6174: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d6178:
    // 0x4d6178: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d617c:
    // 0x4d617c: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x4d617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_4d6180:
    // 0x4d6180: 0x246326f0  addiu       $v1, $v1, 0x26F0
    ctx->pc = 0x4d6180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9968));
label_4d6184:
    // 0x4d6184: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d6184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4d6188:
    // 0x4d6188: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4d6188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4d618c:
    // 0x4d618c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d618cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d6190:
    // 0x4d6190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d6190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6194:
    // 0x4d6194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6198:
    // 0x4d6198: 0x3e00008  jr          $ra
label_4d619c:
    if (ctx->pc == 0x4D619Cu) {
        ctx->pc = 0x4D619Cu;
            // 0x4d619c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D61A0u;
        goto label_4d61a0;
    }
    ctx->pc = 0x4D6198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6198u;
            // 0x4d619c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D61A0u;
label_4d61a0:
    // 0x4d61a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d61a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d61a4:
    // 0x4d61a4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d61a8:
    // 0x4d61a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d61a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d61ac:
    // 0x4d61ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d61acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d61b0:
    // 0x4d61b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d61b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d61b4:
    // 0x4d61b4: 0x8c42aa48  lw          $v0, -0x55B8($v0)
    ctx->pc = 0x4d61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945352)));
label_4d61b8:
    // 0x4d61b8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4d61b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4d61bc:
    // 0x4d61bc: 0xc12e608  jal         func_4B9820
label_4d61c0:
    if (ctx->pc == 0x4D61C0u) {
        ctx->pc = 0x4D61C0u;
            // 0x4d61c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D61C4u;
        goto label_4d61c4;
    }
    ctx->pc = 0x4D61BCu;
    SET_GPR_U32(ctx, 31, 0x4D61C4u);
    ctx->pc = 0x4D61C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D61BCu;
            // 0x4d61c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D61C4u; }
        if (ctx->pc != 0x4D61C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D61C4u; }
        if (ctx->pc != 0x4D61C4u) { return; }
    }
    ctx->pc = 0x4D61C4u;
label_4d61c4:
    // 0x4d61c4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4d61c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4d61c8:
    // 0x4d61c8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4d61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4d61cc:
    // 0x4d61cc: 0xa20400d1  sb          $a0, 0xD1($s0)
    ctx->pc = 0x4d61ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 4));
label_4d61d0:
    // 0x4d61d0: 0xa20300d4  sb          $v1, 0xD4($s0)
    ctx->pc = 0x4d61d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 3));
label_4d61d4:
    // 0x4d61d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d61d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d61d8:
    // 0x4d61d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d61d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d61dc:
    // 0x4d61dc: 0x3e00008  jr          $ra
label_4d61e0:
    if (ctx->pc == 0x4D61E0u) {
        ctx->pc = 0x4D61E0u;
            // 0x4d61e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D61E4u;
        goto label_4d61e4;
    }
    ctx->pc = 0x4D61DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D61E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D61DCu;
            // 0x4d61e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D61E4u;
label_4d61e4:
    // 0x4d61e4: 0x0  nop
    ctx->pc = 0x4d61e4u;
    // NOP
label_4d61e8:
    // 0x4d61e8: 0x0  nop
    ctx->pc = 0x4d61e8u;
    // NOP
label_4d61ec:
    // 0x4d61ec: 0x0  nop
    ctx->pc = 0x4d61ecu;
    // NOP
label_4d61f0:
    // 0x4d61f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d61f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d61f4:
    // 0x4d61f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d61f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d61f8:
    // 0x4d61f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d61f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d61fc:
    // 0x4d61fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d6200:
    // 0x4d6200: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d6200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d6204:
    // 0x4d6204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d6204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d6208:
    // 0x4d6208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d620c:
    // 0x4d620c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6210:
    // 0x4d6210: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4d6210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d6214:
    // 0x4d6214: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4d6218:
    if (ctx->pc == 0x4D6218u) {
        ctx->pc = 0x4D6218u;
            // 0x4d6218: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D621Cu;
        goto label_4d621c;
    }
    ctx->pc = 0x4D6214u;
    {
        const bool branch_taken_0x4d6214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6214u;
            // 0x4d6218: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6214) {
            ctx->pc = 0x4D6258u;
            goto label_4d6258;
        }
    }
    ctx->pc = 0x4D621Cu;
label_4d621c:
    // 0x4d621c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d621cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6220:
    // 0x4d6220: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d6220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6224:
    // 0x4d6224: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d6224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6228:
    // 0x4d6228: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4d6228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d622c:
    // 0x4d622c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d6230:
    // 0x4d6230: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d6234:
    // 0x4d6234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d6234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d6238:
    // 0x4d6238: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4d6238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4d623c:
    // 0x4d623c: 0x320f809  jalr        $t9
label_4d6240:
    if (ctx->pc == 0x4D6240u) {
        ctx->pc = 0x4D6244u;
        goto label_4d6244;
    }
    ctx->pc = 0x4D623Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D6244u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D6244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D6244u; }
            if (ctx->pc != 0x4D6244u) { return; }
        }
        }
    }
    ctx->pc = 0x4D6244u;
label_4d6244:
    // 0x4d6244: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4d6244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4d6248:
    // 0x4d6248: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d6248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d624c:
    // 0x4d624c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4d624cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d6250:
    // 0x4d6250: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4d6254:
    if (ctx->pc == 0x4D6254u) {
        ctx->pc = 0x4D6254u;
            // 0x4d6254: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D6258u;
        goto label_4d6258;
    }
    ctx->pc = 0x4D6250u;
    {
        const bool branch_taken_0x4d6250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D6254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6250u;
            // 0x4d6254: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6250) {
            ctx->pc = 0x4D6228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d6228;
        }
    }
    ctx->pc = 0x4D6258u;
label_4d6258:
    // 0x4d6258: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d6258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d625c:
    // 0x4d625c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4d625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d6260:
    // 0x4d6260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d6260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d6264:
    // 0x4d6264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d6264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d6268:
    // 0x4d6268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d6268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d626c:
    // 0x4d626c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d626cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6270:
    // 0x4d6270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6274:
    // 0x4d6274: 0x3e00008  jr          $ra
label_4d6278:
    if (ctx->pc == 0x4D6278u) {
        ctx->pc = 0x4D6278u;
            // 0x4d6278: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D627Cu;
        goto label_4d627c;
    }
    ctx->pc = 0x4D6274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6274u;
            // 0x4d6278: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D627Cu;
label_4d627c:
    // 0x4d627c: 0x0  nop
    ctx->pc = 0x4d627cu;
    // NOP
label_4d6280:
    // 0x4d6280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d6280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d6284:
    // 0x4d6284: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d6284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d6288:
    // 0x4d6288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d628c:
    // 0x4d628c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4d628cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4d6290:
    // 0x4d6290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6294:
    // 0x4d6294: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4d6294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d6298:
    // 0x4d6298: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d6298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d629c:
    // 0x4d629c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4d629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4d62a0:
    // 0x4d62a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d62a4:
    // 0x4d62a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d62a8:
    // 0x4d62a8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4d62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4d62ac:
    // 0x4d62ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4d62acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d62b0:
    // 0x4d62b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d62b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4d62b4:
    // 0x4d62b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4d62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4d62b8:
    // 0x4d62b8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4d62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4d62bc:
    // 0x4d62bc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4d62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4d62c0:
    // 0x4d62c0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4d62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d62c4:
    // 0x4d62c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d62c8:
    // 0x4d62c8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4d62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4d62cc:
    // 0x4d62cc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4d62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d62d0:
    // 0x4d62d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4d62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4d62d4:
    // 0x4d62d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d62d8:
    // 0x4d62d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4d62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d62dc:
    // 0x4d62dc: 0xc0a997c  jal         func_2A65F0
label_4d62e0:
    if (ctx->pc == 0x4D62E0u) {
        ctx->pc = 0x4D62E0u;
            // 0x4d62e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4D62E4u;
        goto label_4d62e4;
    }
    ctx->pc = 0x4D62DCu;
    SET_GPR_U32(ctx, 31, 0x4D62E4u);
    ctx->pc = 0x4D62E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D62DCu;
            // 0x4d62e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D62E4u; }
        if (ctx->pc != 0x4D62E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D62E4u; }
        if (ctx->pc != 0x4D62E4u) { return; }
    }
    ctx->pc = 0x4D62E4u;
label_4d62e4:
    // 0x4d62e4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4d62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4d62e8:
    // 0x4d62e8: 0xc0d879c  jal         func_361E70
label_4d62ec:
    if (ctx->pc == 0x4D62ECu) {
        ctx->pc = 0x4D62ECu;
            // 0x4d62ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D62F0u;
        goto label_4d62f0;
    }
    ctx->pc = 0x4D62E8u;
    SET_GPR_U32(ctx, 31, 0x4D62F0u);
    ctx->pc = 0x4D62ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D62E8u;
            // 0x4d62ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D62F0u; }
        if (ctx->pc != 0x4D62F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D62F0u; }
        if (ctx->pc != 0x4D62F0u) { return; }
    }
    ctx->pc = 0x4D62F0u;
label_4d62f0:
    // 0x4d62f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d62f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d62f4:
    // 0x4d62f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d62f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d62f8:
    // 0x4d62f8: 0x3e00008  jr          $ra
label_4d62fc:
    if (ctx->pc == 0x4D62FCu) {
        ctx->pc = 0x4D62FCu;
            // 0x4d62fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D6300u;
        goto label_4d6300;
    }
    ctx->pc = 0x4D62F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D62FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D62F8u;
            // 0x4d62fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6300u;
label_4d6300:
    // 0x4d6300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d6300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d6304:
    // 0x4d6304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d6308:
    // 0x4d6308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d630c:
    // 0x4d630c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4d630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4d6310:
    // 0x4d6310: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4d6314:
    if (ctx->pc == 0x4D6314u) {
        ctx->pc = 0x4D6314u;
            // 0x4d6314: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6318u;
        goto label_4d6318;
    }
    ctx->pc = 0x4D6310u;
    {
        const bool branch_taken_0x4d6310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6310u;
            // 0x4d6314: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6310) {
            ctx->pc = 0x4D6430u;
            goto label_4d6430;
        }
    }
    ctx->pc = 0x4D6318u;
label_4d6318:
    // 0x4d6318: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d631c:
    // 0x4d631c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4d6320:
    // 0x4d6320: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d6320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d6324:
    // 0x4d6324: 0xc075128  jal         func_1D44A0
label_4d6328:
    if (ctx->pc == 0x4D6328u) {
        ctx->pc = 0x4D6328u;
            // 0x4d6328: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4D632Cu;
        goto label_4d632c;
    }
    ctx->pc = 0x4D6324u;
    SET_GPR_U32(ctx, 31, 0x4D632Cu);
    ctx->pc = 0x4D6328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6324u;
            // 0x4d6328: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D632Cu; }
        if (ctx->pc != 0x4D632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D632Cu; }
        if (ctx->pc != 0x4D632Cu) { return; }
    }
    ctx->pc = 0x4D632Cu;
label_4d632c:
    // 0x4d632c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4d632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d6330:
    // 0x4d6330: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d6334:
    // 0x4d6334: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4d6334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4d6338:
    // 0x4d6338: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4d6338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4d633c:
    // 0x4d633c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d633cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d6340:
    // 0x4d6340: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d6344:
    if (ctx->pc == 0x4D6344u) {
        ctx->pc = 0x4D6344u;
            // 0x4d6344: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4D6348u;
        goto label_4d6348;
    }
    ctx->pc = 0x4D6340u;
    {
        const bool branch_taken_0x4d6340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6340u;
            // 0x4d6344: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6340) {
            ctx->pc = 0x4D6350u;
            goto label_4d6350;
        }
    }
    ctx->pc = 0x4D6348u;
label_4d6348:
    // 0x4d6348: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d634c:
    // 0x4d634c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4d634cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4d6350:
    // 0x4d6350: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d6354:
    // 0x4d6354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d6358:
    // 0x4d6358: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4d6358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4d635c:
    // 0x4d635c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d6360:
    // 0x4d6360: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d6360u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d6364:
    // 0x4d6364: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d6368:
    if (ctx->pc == 0x4D6368u) {
        ctx->pc = 0x4D6368u;
            // 0x4d6368: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D636Cu;
        goto label_4d636c;
    }
    ctx->pc = 0x4D6364u;
    {
        const bool branch_taken_0x4d6364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6364) {
            ctx->pc = 0x4D6368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6364u;
            // 0x4d6368: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D6378u;
            goto label_4d6378;
        }
    }
    ctx->pc = 0x4D636Cu;
label_4d636c:
    // 0x4d636c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d6370:
    // 0x4d6370: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4d6370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4d6374:
    // 0x4d6374: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d6374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d6378:
    // 0x4d6378: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d637c:
    // 0x4d637c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4d637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4d6380:
    // 0x4d6380: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d6380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d6384:
    // 0x4d6384: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d6384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d6388:
    // 0x4d6388: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d638c:
    if (ctx->pc == 0x4D638Cu) {
        ctx->pc = 0x4D638Cu;
            // 0x4d638c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4D6390u;
        goto label_4d6390;
    }
    ctx->pc = 0x4D6388u;
    {
        const bool branch_taken_0x4d6388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6388) {
            ctx->pc = 0x4D638Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6388u;
            // 0x4d638c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D639Cu;
            goto label_4d639c;
        }
    }
    ctx->pc = 0x4D6390u;
label_4d6390:
    // 0x4d6390: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d6394:
    // 0x4d6394: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4d6394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4d6398:
    // 0x4d6398: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4d6398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d639c:
    // 0x4d639c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d639cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d63a0:
    // 0x4d63a0: 0x320f809  jalr        $t9
label_4d63a4:
    if (ctx->pc == 0x4D63A4u) {
        ctx->pc = 0x4D63A4u;
            // 0x4d63a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D63A8u;
        goto label_4d63a8;
    }
    ctx->pc = 0x4D63A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D63A8u);
        ctx->pc = 0x4D63A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D63A0u;
            // 0x4d63a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D63A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D63A8u; }
            if (ctx->pc != 0x4D63A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D63A8u;
label_4d63a8:
    // 0x4d63a8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d63ac:
    // 0x4d63ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d63acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d63b0:
    // 0x4d63b0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4d63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4d63b4:
    // 0x4d63b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d63b8:
    // 0x4d63b8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d63b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d63bc:
    // 0x4d63bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d63bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d63c0:
    // 0x4d63c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d63c4:
    if (ctx->pc == 0x4D63C4u) {
        ctx->pc = 0x4D63C4u;
            // 0x4d63c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4D63C8u;
        goto label_4d63c8;
    }
    ctx->pc = 0x4D63C0u;
    {
        const bool branch_taken_0x4d63c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d63c0) {
            ctx->pc = 0x4D63C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D63C0u;
            // 0x4d63c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D63D4u;
            goto label_4d63d4;
        }
    }
    ctx->pc = 0x4D63C8u;
label_4d63c8:
    // 0x4d63c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d63cc:
    // 0x4d63cc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4d63ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4d63d0:
    // 0x4d63d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d63d4:
    // 0x4d63d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d63d8:
    // 0x4d63d8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4d63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4d63dc:
    // 0x4d63dc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d63e0:
    // 0x4d63e0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d63e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d63e4:
    // 0x4d63e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d63e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d63e8:
    // 0x4d63e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d63ec:
    if (ctx->pc == 0x4D63ECu) {
        ctx->pc = 0x4D63F0u;
        goto label_4d63f0;
    }
    ctx->pc = 0x4D63E8u;
    {
        const bool branch_taken_0x4d63e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d63e8) {
            ctx->pc = 0x4D63F8u;
            goto label_4d63f8;
        }
    }
    ctx->pc = 0x4D63F0u;
label_4d63f0:
    // 0x4d63f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d63f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d63f4:
    // 0x4d63f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4d63f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4d63f8:
    // 0x4d63f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d63fc:
    // 0x4d63fc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4d63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4d6400:
    // 0x4d6400: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d6400u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d6404:
    // 0x4d6404: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d6408:
    if (ctx->pc == 0x4D6408u) {
        ctx->pc = 0x4D640Cu;
        goto label_4d640c;
    }
    ctx->pc = 0x4D6404u;
    {
        const bool branch_taken_0x4d6404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6404) {
            ctx->pc = 0x4D6414u;
            goto label_4d6414;
        }
    }
    ctx->pc = 0x4D640Cu;
label_4d640c:
    // 0x4d640c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d640cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d6410:
    // 0x4d6410: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4d6410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4d6414:
    // 0x4d6414: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d6414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d6418:
    // 0x4d6418: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4d6418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4d641c:
    // 0x4d641c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d641cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d6420:
    // 0x4d6420: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d6424:
    if (ctx->pc == 0x4D6424u) {
        ctx->pc = 0x4D6424u;
            // 0x4d6424: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D6428u;
        goto label_4d6428;
    }
    ctx->pc = 0x4D6420u;
    {
        const bool branch_taken_0x4d6420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6420) {
            ctx->pc = 0x4D6424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6420u;
            // 0x4d6424: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D6434u;
            goto label_4d6434;
        }
    }
    ctx->pc = 0x4D6428u;
label_4d6428:
    // 0x4d6428: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d6428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d642c:
    // 0x4d642c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4d642cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4d6430:
    // 0x4d6430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d6430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6434:
    // 0x4d6434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6438:
    // 0x4d6438: 0x3e00008  jr          $ra
label_4d643c:
    if (ctx->pc == 0x4D643Cu) {
        ctx->pc = 0x4D643Cu;
            // 0x4d643c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D6440u;
        goto label_4d6440;
    }
    ctx->pc = 0x4D6438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6438u;
            // 0x4d643c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6440u;
label_4d6440:
    // 0x4d6440: 0x8135640  j           func_4D5900
label_4d6444:
    if (ctx->pc == 0x4D6444u) {
        ctx->pc = 0x4D6444u;
            // 0x4d6444: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4D6448u;
        goto label_4d6448;
    }
    ctx->pc = 0x4D6440u;
    ctx->pc = 0x4D6444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6440u;
            // 0x4d6444: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5900u;
    {
        auto targetFn = runtime->lookupFunction(0x4D5900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D6448u;
label_4d6448:
    // 0x4d6448: 0x0  nop
    ctx->pc = 0x4d6448u;
    // NOP
label_4d644c:
    // 0x4d644c: 0x0  nop
    ctx->pc = 0x4d644cu;
    // NOP
label_4d6450:
    // 0x4d6450: 0x8135784  j           func_4D5E10
label_4d6454:
    if (ctx->pc == 0x4D6454u) {
        ctx->pc = 0x4D6454u;
            // 0x4d6454: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D6458u;
        goto label_4d6458;
    }
    ctx->pc = 0x4D6450u;
    ctx->pc = 0x4D6454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6450u;
            // 0x4d6454: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5E10u;
    {
        auto targetFn = runtime->lookupFunction(0x4D5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D6458u;
label_4d6458:
    // 0x4d6458: 0x0  nop
    ctx->pc = 0x4d6458u;
    // NOP
label_4d645c:
    // 0x4d645c: 0x0  nop
    ctx->pc = 0x4d645cu;
    // NOP
label_4d6460:
    // 0x4d6460: 0x81355e8  j           func_4D57A0
label_4d6464:
    if (ctx->pc == 0x4D6464u) {
        ctx->pc = 0x4D6464u;
            // 0x4d6464: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D6468u;
        goto label_4d6468;
    }
    ctx->pc = 0x4D6460u;
    ctx->pc = 0x4D6464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6460u;
            // 0x4d6464: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D57A0u;
    if (runtime->hasFunction(0x4D57A0u)) {
        auto targetFn = runtime->lookupFunction(0x4D57A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004D57A0_0x4d57a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4D6468u;
label_4d6468:
    // 0x4d6468: 0x0  nop
    ctx->pc = 0x4d6468u;
    // NOP
label_4d646c:
    // 0x4d646c: 0x0  nop
    ctx->pc = 0x4d646cu;
    // NOP
label_4d6470:
    // 0x4d6470: 0x81355c4  j           func_4D5710
label_4d6474:
    if (ctx->pc == 0x4D6474u) {
        ctx->pc = 0x4D6474u;
            // 0x4d6474: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D6478u;
        goto label_4d6478;
    }
    ctx->pc = 0x4D6470u;
    ctx->pc = 0x4D6474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6470u;
            // 0x4d6474: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5710u;
    {
        auto targetFn = runtime->lookupFunction(0x4D5710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D6478u;
label_4d6478:
    // 0x4d6478: 0x0  nop
    ctx->pc = 0x4d6478u;
    // NOP
label_4d647c:
    // 0x4d647c: 0x0  nop
    ctx->pc = 0x4d647cu;
    // NOP
label_4d6480:
    // 0x4d6480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d6480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d6484:
    // 0x4d6484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d6484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d6488:
    // 0x4d6488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d648c:
    // 0x4d648c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6490:
    // 0x4d6490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d6490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d6494:
    // 0x4d6494: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4d6498:
    if (ctx->pc == 0x4D6498u) {
        ctx->pc = 0x4D6498u;
            // 0x4d6498: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D649Cu;
        goto label_4d649c;
    }
    ctx->pc = 0x4D6494u;
    {
        const bool branch_taken_0x4d6494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6494u;
            // 0x4d6498: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6494) {
            ctx->pc = 0x4D64F0u;
            goto label_4d64f0;
        }
    }
    ctx->pc = 0x4D649Cu;
label_4d649c:
    // 0x4d649c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d64a0:
    // 0x4d64a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d64a4:
    // 0x4d64a4: 0x24632750  addiu       $v1, $v1, 0x2750
    ctx->pc = 0x4d64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10064));
label_4d64a8:
    // 0x4d64a8: 0x24422788  addiu       $v0, $v0, 0x2788
    ctx->pc = 0x4d64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10120));
label_4d64ac:
    // 0x4d64ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d64acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d64b0:
    // 0x4d64b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4d64b4:
    if (ctx->pc == 0x4D64B4u) {
        ctx->pc = 0x4D64B4u;
            // 0x4d64b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D64B8u;
        goto label_4d64b8;
    }
    ctx->pc = 0x4D64B0u;
    {
        const bool branch_taken_0x4d64b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D64B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D64B0u;
            // 0x4d64b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d64b0) {
            ctx->pc = 0x4D64D8u;
            goto label_4d64d8;
        }
    }
    ctx->pc = 0x4D64B8u;
label_4d64b8:
    // 0x4d64b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d64bc:
    // 0x4d64bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d64c0:
    // 0x4d64c0: 0x24632800  addiu       $v1, $v1, 0x2800
    ctx->pc = 0x4d64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10240));
label_4d64c4:
    // 0x4d64c4: 0x24422838  addiu       $v0, $v0, 0x2838
    ctx->pc = 0x4d64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
label_4d64c8:
    // 0x4d64c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d64cc:
    // 0x4d64cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d64ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d64d0:
    // 0x4d64d0: 0xc135944  jal         func_4D6510
label_4d64d4:
    if (ctx->pc == 0x4D64D4u) {
        ctx->pc = 0x4D64D4u;
            // 0x4d64d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D64D8u;
        goto label_4d64d8;
    }
    ctx->pc = 0x4D64D0u;
    SET_GPR_U32(ctx, 31, 0x4D64D8u);
    ctx->pc = 0x4D64D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D64D0u;
            // 0x4d64d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6510u;
    if (runtime->hasFunction(0x4D6510u)) {
        auto targetFn = runtime->lookupFunction(0x4D6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D64D8u; }
        if (ctx->pc != 0x4D64D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D6510_0x4d6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D64D8u; }
        if (ctx->pc != 0x4D64D8u) { return; }
    }
    ctx->pc = 0x4D64D8u;
label_4d64d8:
    // 0x4d64d8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d64d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4d64dc:
    // 0x4d64dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d64dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d64e0:
    // 0x4d64e0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d64e4:
    if (ctx->pc == 0x4D64E4u) {
        ctx->pc = 0x4D64E4u;
            // 0x4d64e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D64E8u;
        goto label_4d64e8;
    }
    ctx->pc = 0x4D64E0u;
    {
        const bool branch_taken_0x4d64e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d64e0) {
            ctx->pc = 0x4D64E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D64E0u;
            // 0x4d64e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D64F4u;
            goto label_4d64f4;
        }
    }
    ctx->pc = 0x4D64E8u;
label_4d64e8:
    // 0x4d64e8: 0xc0400a8  jal         func_1002A0
label_4d64ec:
    if (ctx->pc == 0x4D64ECu) {
        ctx->pc = 0x4D64ECu;
            // 0x4d64ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D64F0u;
        goto label_4d64f0;
    }
    ctx->pc = 0x4D64E8u;
    SET_GPR_U32(ctx, 31, 0x4D64F0u);
    ctx->pc = 0x4D64ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D64E8u;
            // 0x4d64ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D64F0u; }
        if (ctx->pc != 0x4D64F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D64F0u; }
        if (ctx->pc != 0x4D64F0u) { return; }
    }
    ctx->pc = 0x4D64F0u;
label_4d64f0:
    // 0x4d64f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d64f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d64f4:
    // 0x4d64f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d64f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d64f8:
    // 0x4d64f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d64f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d64fc:
    // 0x4d64fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d64fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6500:
    // 0x4d6500: 0x3e00008  jr          $ra
label_4d6504:
    if (ctx->pc == 0x4D6504u) {
        ctx->pc = 0x4D6504u;
            // 0x4d6504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D6508u;
        goto label_4d6508;
    }
    ctx->pc = 0x4D6500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6500u;
            // 0x4d6504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6508u;
label_4d6508:
    // 0x4d6508: 0x0  nop
    ctx->pc = 0x4d6508u;
    // NOP
label_4d650c:
    // 0x4d650c: 0x0  nop
    ctx->pc = 0x4d650cu;
    // NOP
}
