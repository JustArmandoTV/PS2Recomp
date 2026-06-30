#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D5F40
// Address: 0x3d5f40 - 0x3d6490
void sub_003D5F40_0x3d5f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5F40_0x3d5f40");
#endif

    switch (ctx->pc) {
        case 0x3d5f40u: goto label_3d5f40;
        case 0x3d5f44u: goto label_3d5f44;
        case 0x3d5f48u: goto label_3d5f48;
        case 0x3d5f4cu: goto label_3d5f4c;
        case 0x3d5f50u: goto label_3d5f50;
        case 0x3d5f54u: goto label_3d5f54;
        case 0x3d5f58u: goto label_3d5f58;
        case 0x3d5f5cu: goto label_3d5f5c;
        case 0x3d5f60u: goto label_3d5f60;
        case 0x3d5f64u: goto label_3d5f64;
        case 0x3d5f68u: goto label_3d5f68;
        case 0x3d5f6cu: goto label_3d5f6c;
        case 0x3d5f70u: goto label_3d5f70;
        case 0x3d5f74u: goto label_3d5f74;
        case 0x3d5f78u: goto label_3d5f78;
        case 0x3d5f7cu: goto label_3d5f7c;
        case 0x3d5f80u: goto label_3d5f80;
        case 0x3d5f84u: goto label_3d5f84;
        case 0x3d5f88u: goto label_3d5f88;
        case 0x3d5f8cu: goto label_3d5f8c;
        case 0x3d5f90u: goto label_3d5f90;
        case 0x3d5f94u: goto label_3d5f94;
        case 0x3d5f98u: goto label_3d5f98;
        case 0x3d5f9cu: goto label_3d5f9c;
        case 0x3d5fa0u: goto label_3d5fa0;
        case 0x3d5fa4u: goto label_3d5fa4;
        case 0x3d5fa8u: goto label_3d5fa8;
        case 0x3d5facu: goto label_3d5fac;
        case 0x3d5fb0u: goto label_3d5fb0;
        case 0x3d5fb4u: goto label_3d5fb4;
        case 0x3d5fb8u: goto label_3d5fb8;
        case 0x3d5fbcu: goto label_3d5fbc;
        case 0x3d5fc0u: goto label_3d5fc0;
        case 0x3d5fc4u: goto label_3d5fc4;
        case 0x3d5fc8u: goto label_3d5fc8;
        case 0x3d5fccu: goto label_3d5fcc;
        case 0x3d5fd0u: goto label_3d5fd0;
        case 0x3d5fd4u: goto label_3d5fd4;
        case 0x3d5fd8u: goto label_3d5fd8;
        case 0x3d5fdcu: goto label_3d5fdc;
        case 0x3d5fe0u: goto label_3d5fe0;
        case 0x3d5fe4u: goto label_3d5fe4;
        case 0x3d5fe8u: goto label_3d5fe8;
        case 0x3d5fecu: goto label_3d5fec;
        case 0x3d5ff0u: goto label_3d5ff0;
        case 0x3d5ff4u: goto label_3d5ff4;
        case 0x3d5ff8u: goto label_3d5ff8;
        case 0x3d5ffcu: goto label_3d5ffc;
        case 0x3d6000u: goto label_3d6000;
        case 0x3d6004u: goto label_3d6004;
        case 0x3d6008u: goto label_3d6008;
        case 0x3d600cu: goto label_3d600c;
        case 0x3d6010u: goto label_3d6010;
        case 0x3d6014u: goto label_3d6014;
        case 0x3d6018u: goto label_3d6018;
        case 0x3d601cu: goto label_3d601c;
        case 0x3d6020u: goto label_3d6020;
        case 0x3d6024u: goto label_3d6024;
        case 0x3d6028u: goto label_3d6028;
        case 0x3d602cu: goto label_3d602c;
        case 0x3d6030u: goto label_3d6030;
        case 0x3d6034u: goto label_3d6034;
        case 0x3d6038u: goto label_3d6038;
        case 0x3d603cu: goto label_3d603c;
        case 0x3d6040u: goto label_3d6040;
        case 0x3d6044u: goto label_3d6044;
        case 0x3d6048u: goto label_3d6048;
        case 0x3d604cu: goto label_3d604c;
        case 0x3d6050u: goto label_3d6050;
        case 0x3d6054u: goto label_3d6054;
        case 0x3d6058u: goto label_3d6058;
        case 0x3d605cu: goto label_3d605c;
        case 0x3d6060u: goto label_3d6060;
        case 0x3d6064u: goto label_3d6064;
        case 0x3d6068u: goto label_3d6068;
        case 0x3d606cu: goto label_3d606c;
        case 0x3d6070u: goto label_3d6070;
        case 0x3d6074u: goto label_3d6074;
        case 0x3d6078u: goto label_3d6078;
        case 0x3d607cu: goto label_3d607c;
        case 0x3d6080u: goto label_3d6080;
        case 0x3d6084u: goto label_3d6084;
        case 0x3d6088u: goto label_3d6088;
        case 0x3d608cu: goto label_3d608c;
        case 0x3d6090u: goto label_3d6090;
        case 0x3d6094u: goto label_3d6094;
        case 0x3d6098u: goto label_3d6098;
        case 0x3d609cu: goto label_3d609c;
        case 0x3d60a0u: goto label_3d60a0;
        case 0x3d60a4u: goto label_3d60a4;
        case 0x3d60a8u: goto label_3d60a8;
        case 0x3d60acu: goto label_3d60ac;
        case 0x3d60b0u: goto label_3d60b0;
        case 0x3d60b4u: goto label_3d60b4;
        case 0x3d60b8u: goto label_3d60b8;
        case 0x3d60bcu: goto label_3d60bc;
        case 0x3d60c0u: goto label_3d60c0;
        case 0x3d60c4u: goto label_3d60c4;
        case 0x3d60c8u: goto label_3d60c8;
        case 0x3d60ccu: goto label_3d60cc;
        case 0x3d60d0u: goto label_3d60d0;
        case 0x3d60d4u: goto label_3d60d4;
        case 0x3d60d8u: goto label_3d60d8;
        case 0x3d60dcu: goto label_3d60dc;
        case 0x3d60e0u: goto label_3d60e0;
        case 0x3d60e4u: goto label_3d60e4;
        case 0x3d60e8u: goto label_3d60e8;
        case 0x3d60ecu: goto label_3d60ec;
        case 0x3d60f0u: goto label_3d60f0;
        case 0x3d60f4u: goto label_3d60f4;
        case 0x3d60f8u: goto label_3d60f8;
        case 0x3d60fcu: goto label_3d60fc;
        case 0x3d6100u: goto label_3d6100;
        case 0x3d6104u: goto label_3d6104;
        case 0x3d6108u: goto label_3d6108;
        case 0x3d610cu: goto label_3d610c;
        case 0x3d6110u: goto label_3d6110;
        case 0x3d6114u: goto label_3d6114;
        case 0x3d6118u: goto label_3d6118;
        case 0x3d611cu: goto label_3d611c;
        case 0x3d6120u: goto label_3d6120;
        case 0x3d6124u: goto label_3d6124;
        case 0x3d6128u: goto label_3d6128;
        case 0x3d612cu: goto label_3d612c;
        case 0x3d6130u: goto label_3d6130;
        case 0x3d6134u: goto label_3d6134;
        case 0x3d6138u: goto label_3d6138;
        case 0x3d613cu: goto label_3d613c;
        case 0x3d6140u: goto label_3d6140;
        case 0x3d6144u: goto label_3d6144;
        case 0x3d6148u: goto label_3d6148;
        case 0x3d614cu: goto label_3d614c;
        case 0x3d6150u: goto label_3d6150;
        case 0x3d6154u: goto label_3d6154;
        case 0x3d6158u: goto label_3d6158;
        case 0x3d615cu: goto label_3d615c;
        case 0x3d6160u: goto label_3d6160;
        case 0x3d6164u: goto label_3d6164;
        case 0x3d6168u: goto label_3d6168;
        case 0x3d616cu: goto label_3d616c;
        case 0x3d6170u: goto label_3d6170;
        case 0x3d6174u: goto label_3d6174;
        case 0x3d6178u: goto label_3d6178;
        case 0x3d617cu: goto label_3d617c;
        case 0x3d6180u: goto label_3d6180;
        case 0x3d6184u: goto label_3d6184;
        case 0x3d6188u: goto label_3d6188;
        case 0x3d618cu: goto label_3d618c;
        case 0x3d6190u: goto label_3d6190;
        case 0x3d6194u: goto label_3d6194;
        case 0x3d6198u: goto label_3d6198;
        case 0x3d619cu: goto label_3d619c;
        case 0x3d61a0u: goto label_3d61a0;
        case 0x3d61a4u: goto label_3d61a4;
        case 0x3d61a8u: goto label_3d61a8;
        case 0x3d61acu: goto label_3d61ac;
        case 0x3d61b0u: goto label_3d61b0;
        case 0x3d61b4u: goto label_3d61b4;
        case 0x3d61b8u: goto label_3d61b8;
        case 0x3d61bcu: goto label_3d61bc;
        case 0x3d61c0u: goto label_3d61c0;
        case 0x3d61c4u: goto label_3d61c4;
        case 0x3d61c8u: goto label_3d61c8;
        case 0x3d61ccu: goto label_3d61cc;
        case 0x3d61d0u: goto label_3d61d0;
        case 0x3d61d4u: goto label_3d61d4;
        case 0x3d61d8u: goto label_3d61d8;
        case 0x3d61dcu: goto label_3d61dc;
        case 0x3d61e0u: goto label_3d61e0;
        case 0x3d61e4u: goto label_3d61e4;
        case 0x3d61e8u: goto label_3d61e8;
        case 0x3d61ecu: goto label_3d61ec;
        case 0x3d61f0u: goto label_3d61f0;
        case 0x3d61f4u: goto label_3d61f4;
        case 0x3d61f8u: goto label_3d61f8;
        case 0x3d61fcu: goto label_3d61fc;
        case 0x3d6200u: goto label_3d6200;
        case 0x3d6204u: goto label_3d6204;
        case 0x3d6208u: goto label_3d6208;
        case 0x3d620cu: goto label_3d620c;
        case 0x3d6210u: goto label_3d6210;
        case 0x3d6214u: goto label_3d6214;
        case 0x3d6218u: goto label_3d6218;
        case 0x3d621cu: goto label_3d621c;
        case 0x3d6220u: goto label_3d6220;
        case 0x3d6224u: goto label_3d6224;
        case 0x3d6228u: goto label_3d6228;
        case 0x3d622cu: goto label_3d622c;
        case 0x3d6230u: goto label_3d6230;
        case 0x3d6234u: goto label_3d6234;
        case 0x3d6238u: goto label_3d6238;
        case 0x3d623cu: goto label_3d623c;
        case 0x3d6240u: goto label_3d6240;
        case 0x3d6244u: goto label_3d6244;
        case 0x3d6248u: goto label_3d6248;
        case 0x3d624cu: goto label_3d624c;
        case 0x3d6250u: goto label_3d6250;
        case 0x3d6254u: goto label_3d6254;
        case 0x3d6258u: goto label_3d6258;
        case 0x3d625cu: goto label_3d625c;
        case 0x3d6260u: goto label_3d6260;
        case 0x3d6264u: goto label_3d6264;
        case 0x3d6268u: goto label_3d6268;
        case 0x3d626cu: goto label_3d626c;
        case 0x3d6270u: goto label_3d6270;
        case 0x3d6274u: goto label_3d6274;
        case 0x3d6278u: goto label_3d6278;
        case 0x3d627cu: goto label_3d627c;
        case 0x3d6280u: goto label_3d6280;
        case 0x3d6284u: goto label_3d6284;
        case 0x3d6288u: goto label_3d6288;
        case 0x3d628cu: goto label_3d628c;
        case 0x3d6290u: goto label_3d6290;
        case 0x3d6294u: goto label_3d6294;
        case 0x3d6298u: goto label_3d6298;
        case 0x3d629cu: goto label_3d629c;
        case 0x3d62a0u: goto label_3d62a0;
        case 0x3d62a4u: goto label_3d62a4;
        case 0x3d62a8u: goto label_3d62a8;
        case 0x3d62acu: goto label_3d62ac;
        case 0x3d62b0u: goto label_3d62b0;
        case 0x3d62b4u: goto label_3d62b4;
        case 0x3d62b8u: goto label_3d62b8;
        case 0x3d62bcu: goto label_3d62bc;
        case 0x3d62c0u: goto label_3d62c0;
        case 0x3d62c4u: goto label_3d62c4;
        case 0x3d62c8u: goto label_3d62c8;
        case 0x3d62ccu: goto label_3d62cc;
        case 0x3d62d0u: goto label_3d62d0;
        case 0x3d62d4u: goto label_3d62d4;
        case 0x3d62d8u: goto label_3d62d8;
        case 0x3d62dcu: goto label_3d62dc;
        case 0x3d62e0u: goto label_3d62e0;
        case 0x3d62e4u: goto label_3d62e4;
        case 0x3d62e8u: goto label_3d62e8;
        case 0x3d62ecu: goto label_3d62ec;
        case 0x3d62f0u: goto label_3d62f0;
        case 0x3d62f4u: goto label_3d62f4;
        case 0x3d62f8u: goto label_3d62f8;
        case 0x3d62fcu: goto label_3d62fc;
        case 0x3d6300u: goto label_3d6300;
        case 0x3d6304u: goto label_3d6304;
        case 0x3d6308u: goto label_3d6308;
        case 0x3d630cu: goto label_3d630c;
        case 0x3d6310u: goto label_3d6310;
        case 0x3d6314u: goto label_3d6314;
        case 0x3d6318u: goto label_3d6318;
        case 0x3d631cu: goto label_3d631c;
        case 0x3d6320u: goto label_3d6320;
        case 0x3d6324u: goto label_3d6324;
        case 0x3d6328u: goto label_3d6328;
        case 0x3d632cu: goto label_3d632c;
        case 0x3d6330u: goto label_3d6330;
        case 0x3d6334u: goto label_3d6334;
        case 0x3d6338u: goto label_3d6338;
        case 0x3d633cu: goto label_3d633c;
        case 0x3d6340u: goto label_3d6340;
        case 0x3d6344u: goto label_3d6344;
        case 0x3d6348u: goto label_3d6348;
        case 0x3d634cu: goto label_3d634c;
        case 0x3d6350u: goto label_3d6350;
        case 0x3d6354u: goto label_3d6354;
        case 0x3d6358u: goto label_3d6358;
        case 0x3d635cu: goto label_3d635c;
        case 0x3d6360u: goto label_3d6360;
        case 0x3d6364u: goto label_3d6364;
        case 0x3d6368u: goto label_3d6368;
        case 0x3d636cu: goto label_3d636c;
        case 0x3d6370u: goto label_3d6370;
        case 0x3d6374u: goto label_3d6374;
        case 0x3d6378u: goto label_3d6378;
        case 0x3d637cu: goto label_3d637c;
        case 0x3d6380u: goto label_3d6380;
        case 0x3d6384u: goto label_3d6384;
        case 0x3d6388u: goto label_3d6388;
        case 0x3d638cu: goto label_3d638c;
        case 0x3d6390u: goto label_3d6390;
        case 0x3d6394u: goto label_3d6394;
        case 0x3d6398u: goto label_3d6398;
        case 0x3d639cu: goto label_3d639c;
        case 0x3d63a0u: goto label_3d63a0;
        case 0x3d63a4u: goto label_3d63a4;
        case 0x3d63a8u: goto label_3d63a8;
        case 0x3d63acu: goto label_3d63ac;
        case 0x3d63b0u: goto label_3d63b0;
        case 0x3d63b4u: goto label_3d63b4;
        case 0x3d63b8u: goto label_3d63b8;
        case 0x3d63bcu: goto label_3d63bc;
        case 0x3d63c0u: goto label_3d63c0;
        case 0x3d63c4u: goto label_3d63c4;
        case 0x3d63c8u: goto label_3d63c8;
        case 0x3d63ccu: goto label_3d63cc;
        case 0x3d63d0u: goto label_3d63d0;
        case 0x3d63d4u: goto label_3d63d4;
        case 0x3d63d8u: goto label_3d63d8;
        case 0x3d63dcu: goto label_3d63dc;
        case 0x3d63e0u: goto label_3d63e0;
        case 0x3d63e4u: goto label_3d63e4;
        case 0x3d63e8u: goto label_3d63e8;
        case 0x3d63ecu: goto label_3d63ec;
        case 0x3d63f0u: goto label_3d63f0;
        case 0x3d63f4u: goto label_3d63f4;
        case 0x3d63f8u: goto label_3d63f8;
        case 0x3d63fcu: goto label_3d63fc;
        case 0x3d6400u: goto label_3d6400;
        case 0x3d6404u: goto label_3d6404;
        case 0x3d6408u: goto label_3d6408;
        case 0x3d640cu: goto label_3d640c;
        case 0x3d6410u: goto label_3d6410;
        case 0x3d6414u: goto label_3d6414;
        case 0x3d6418u: goto label_3d6418;
        case 0x3d641cu: goto label_3d641c;
        case 0x3d6420u: goto label_3d6420;
        case 0x3d6424u: goto label_3d6424;
        case 0x3d6428u: goto label_3d6428;
        case 0x3d642cu: goto label_3d642c;
        case 0x3d6430u: goto label_3d6430;
        case 0x3d6434u: goto label_3d6434;
        case 0x3d6438u: goto label_3d6438;
        case 0x3d643cu: goto label_3d643c;
        case 0x3d6440u: goto label_3d6440;
        case 0x3d6444u: goto label_3d6444;
        case 0x3d6448u: goto label_3d6448;
        case 0x3d644cu: goto label_3d644c;
        case 0x3d6450u: goto label_3d6450;
        case 0x3d6454u: goto label_3d6454;
        case 0x3d6458u: goto label_3d6458;
        case 0x3d645cu: goto label_3d645c;
        case 0x3d6460u: goto label_3d6460;
        case 0x3d6464u: goto label_3d6464;
        case 0x3d6468u: goto label_3d6468;
        case 0x3d646cu: goto label_3d646c;
        case 0x3d6470u: goto label_3d6470;
        case 0x3d6474u: goto label_3d6474;
        case 0x3d6478u: goto label_3d6478;
        case 0x3d647cu: goto label_3d647c;
        case 0x3d6480u: goto label_3d6480;
        case 0x3d6484u: goto label_3d6484;
        case 0x3d6488u: goto label_3d6488;
        case 0x3d648cu: goto label_3d648c;
        default: break;
    }

    ctx->pc = 0x3d5f40u;

label_3d5f40:
    // 0x3d5f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d5f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d5f44:
    // 0x3d5f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d5f48:
    // 0x3d5f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d5f4c:
    // 0x3d5f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d5f50:
    // 0x3d5f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d5f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f54:
    // 0x3d5f54: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3d5f58:
    if (ctx->pc == 0x3D5F58u) {
        ctx->pc = 0x3D5F58u;
            // 0x3d5f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D5F5Cu;
        goto label_3d5f5c;
    }
    ctx->pc = 0x3D5F54u;
    {
        const bool branch_taken_0x3d5f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F54u;
            // 0x3d5f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5f54) {
            ctx->pc = 0x3D6088u;
            goto label_3d6088;
        }
    }
    ctx->pc = 0x3D5F5Cu;
label_3d5f5c:
    // 0x3d5f5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d5f60:
    // 0x3d5f60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d5f64:
    // 0x3d5f64: 0x24639510  addiu       $v1, $v1, -0x6AF0
    ctx->pc = 0x3d5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939920));
label_3d5f68:
    // 0x3d5f68: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d5f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d5f6c:
    // 0x3d5f6c: 0x24429548  addiu       $v0, $v0, -0x6AB8
    ctx->pc = 0x3d5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939976));
label_3d5f70:
    // 0x3d5f70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d5f74:
    // 0x3d5f74: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3d5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3d5f78:
    // 0x3d5f78: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3d5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3d5f7c:
    // 0x3d5f7c: 0xc0407c0  jal         func_101F00
label_3d5f80:
    if (ctx->pc == 0x3D5F80u) {
        ctx->pc = 0x3D5F80u;
            // 0x3d5f80: 0x24a560a0  addiu       $a1, $a1, 0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24736));
        ctx->pc = 0x3D5F84u;
        goto label_3d5f84;
    }
    ctx->pc = 0x3D5F7Cu;
    SET_GPR_U32(ctx, 31, 0x3D5F84u);
    ctx->pc = 0x3D5F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F7Cu;
            // 0x3d5f80: 0x24a560a0  addiu       $a1, $a1, 0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F84u; }
        if (ctx->pc != 0x3D5F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F84u; }
        if (ctx->pc != 0x3D5F84u) { return; }
    }
    ctx->pc = 0x3D5F84u;
label_3d5f84:
    // 0x3d5f84: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3d5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3d5f88:
    // 0x3d5f88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3d5f8c:
    if (ctx->pc == 0x3D5F8Cu) {
        ctx->pc = 0x3D5F8Cu;
            // 0x3d5f8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3D5F90u;
        goto label_3d5f90;
    }
    ctx->pc = 0x3D5F88u;
    {
        const bool branch_taken_0x3d5f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5f88) {
            ctx->pc = 0x3D5F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F88u;
            // 0x3d5f8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5F9Cu;
            goto label_3d5f9c;
        }
    }
    ctx->pc = 0x3D5F90u;
label_3d5f90:
    // 0x3d5f90: 0xc07507c  jal         func_1D41F0
label_3d5f94:
    if (ctx->pc == 0x3D5F94u) {
        ctx->pc = 0x3D5F94u;
            // 0x3d5f94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3D5F98u;
        goto label_3d5f98;
    }
    ctx->pc = 0x3D5F90u;
    SET_GPR_U32(ctx, 31, 0x3D5F98u);
    ctx->pc = 0x3D5F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F90u;
            // 0x3d5f94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F98u; }
        if (ctx->pc != 0x3D5F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F98u; }
        if (ctx->pc != 0x3D5F98u) { return; }
    }
    ctx->pc = 0x3D5F98u;
label_3d5f98:
    // 0x3d5f98: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3d5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3d5f9c:
    // 0x3d5f9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d5fa0:
    if (ctx->pc == 0x3D5FA0u) {
        ctx->pc = 0x3D5FA0u;
            // 0x3d5fa0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3D5FA4u;
        goto label_3d5fa4;
    }
    ctx->pc = 0x3D5F9Cu;
    {
        const bool branch_taken_0x3d5f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5f9c) {
            ctx->pc = 0x3D5FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F9Cu;
            // 0x3d5fa0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5FCCu;
            goto label_3d5fcc;
        }
    }
    ctx->pc = 0x3D5FA4u;
label_3d5fa4:
    // 0x3d5fa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d5fa8:
    if (ctx->pc == 0x3D5FA8u) {
        ctx->pc = 0x3D5FACu;
        goto label_3d5fac;
    }
    ctx->pc = 0x3D5FA4u;
    {
        const bool branch_taken_0x3d5fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fa4) {
            ctx->pc = 0x3D5FC8u;
            goto label_3d5fc8;
        }
    }
    ctx->pc = 0x3D5FACu;
label_3d5fac:
    // 0x3d5fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d5fb0:
    if (ctx->pc == 0x3D5FB0u) {
        ctx->pc = 0x3D5FB4u;
        goto label_3d5fb4;
    }
    ctx->pc = 0x3D5FACu;
    {
        const bool branch_taken_0x3d5fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fac) {
            ctx->pc = 0x3D5FC8u;
            goto label_3d5fc8;
        }
    }
    ctx->pc = 0x3D5FB4u;
label_3d5fb4:
    // 0x3d5fb4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3d5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3d5fb8:
    // 0x3d5fb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d5fbc:
    if (ctx->pc == 0x3D5FBCu) {
        ctx->pc = 0x3D5FC0u;
        goto label_3d5fc0;
    }
    ctx->pc = 0x3D5FB8u;
    {
        const bool branch_taken_0x3d5fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fb8) {
            ctx->pc = 0x3D5FC8u;
            goto label_3d5fc8;
        }
    }
    ctx->pc = 0x3D5FC0u;
label_3d5fc0:
    // 0x3d5fc0: 0xc0400a8  jal         func_1002A0
label_3d5fc4:
    if (ctx->pc == 0x3D5FC4u) {
        ctx->pc = 0x3D5FC8u;
        goto label_3d5fc8;
    }
    ctx->pc = 0x3D5FC0u;
    SET_GPR_U32(ctx, 31, 0x3D5FC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5FC8u; }
        if (ctx->pc != 0x3D5FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5FC8u; }
        if (ctx->pc != 0x3D5FC8u) { return; }
    }
    ctx->pc = 0x3D5FC8u;
label_3d5fc8:
    // 0x3d5fc8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3d5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3d5fcc:
    // 0x3d5fcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d5fd0:
    if (ctx->pc == 0x3D5FD0u) {
        ctx->pc = 0x3D5FD0u;
            // 0x3d5fd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3D5FD4u;
        goto label_3d5fd4;
    }
    ctx->pc = 0x3D5FCCu;
    {
        const bool branch_taken_0x3d5fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fcc) {
            ctx->pc = 0x3D5FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5FCCu;
            // 0x3d5fd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5FFCu;
            goto label_3d5ffc;
        }
    }
    ctx->pc = 0x3D5FD4u;
label_3d5fd4:
    // 0x3d5fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d5fd8:
    if (ctx->pc == 0x3D5FD8u) {
        ctx->pc = 0x3D5FDCu;
        goto label_3d5fdc;
    }
    ctx->pc = 0x3D5FD4u;
    {
        const bool branch_taken_0x3d5fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fd4) {
            ctx->pc = 0x3D5FF8u;
            goto label_3d5ff8;
        }
    }
    ctx->pc = 0x3D5FDCu;
label_3d5fdc:
    // 0x3d5fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d5fe0:
    if (ctx->pc == 0x3D5FE0u) {
        ctx->pc = 0x3D5FE4u;
        goto label_3d5fe4;
    }
    ctx->pc = 0x3D5FDCu;
    {
        const bool branch_taken_0x3d5fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fdc) {
            ctx->pc = 0x3D5FF8u;
            goto label_3d5ff8;
        }
    }
    ctx->pc = 0x3D5FE4u;
label_3d5fe4:
    // 0x3d5fe4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3d5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3d5fe8:
    // 0x3d5fe8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d5fec:
    if (ctx->pc == 0x3D5FECu) {
        ctx->pc = 0x3D5FF0u;
        goto label_3d5ff0;
    }
    ctx->pc = 0x3D5FE8u;
    {
        const bool branch_taken_0x3d5fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fe8) {
            ctx->pc = 0x3D5FF8u;
            goto label_3d5ff8;
        }
    }
    ctx->pc = 0x3D5FF0u;
label_3d5ff0:
    // 0x3d5ff0: 0xc0400a8  jal         func_1002A0
label_3d5ff4:
    if (ctx->pc == 0x3D5FF4u) {
        ctx->pc = 0x3D5FF8u;
        goto label_3d5ff8;
    }
    ctx->pc = 0x3D5FF0u;
    SET_GPR_U32(ctx, 31, 0x3D5FF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5FF8u; }
        if (ctx->pc != 0x3D5FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5FF8u; }
        if (ctx->pc != 0x3D5FF8u) { return; }
    }
    ctx->pc = 0x3D5FF8u;
label_3d5ff8:
    // 0x3d5ff8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3d5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3d5ffc:
    // 0x3d5ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d6000:
    if (ctx->pc == 0x3D6000u) {
        ctx->pc = 0x3D6004u;
        goto label_3d6004;
    }
    ctx->pc = 0x3D5FFCu;
    {
        const bool branch_taken_0x3d5ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5ffc) {
            ctx->pc = 0x3D6018u;
            goto label_3d6018;
        }
    }
    ctx->pc = 0x3D6004u;
label_3d6004:
    // 0x3d6004: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d6004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d6008:
    // 0x3d6008: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d6008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d600c:
    // 0x3d600c: 0x24639500  addiu       $v1, $v1, -0x6B00
    ctx->pc = 0x3d600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
label_3d6010:
    // 0x3d6010: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3d6010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3d6014:
    // 0x3d6014: 0xac406ea8  sw          $zero, 0x6EA8($v0)
    ctx->pc = 0x3d6014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28328), GPR_U32(ctx, 0));
label_3d6018:
    // 0x3d6018: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3d601c:
    if (ctx->pc == 0x3D601Cu) {
        ctx->pc = 0x3D601Cu;
            // 0x3d601c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3D6020u;
        goto label_3d6020;
    }
    ctx->pc = 0x3D6018u;
    {
        const bool branch_taken_0x3d6018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6018) {
            ctx->pc = 0x3D601Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6018u;
            // 0x3d601c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6074u;
            goto label_3d6074;
        }
    }
    ctx->pc = 0x3D6020u;
label_3d6020:
    // 0x3d6020: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d6020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d6024:
    // 0x3d6024: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3d6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3d6028:
    // 0x3d6028: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d6028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d602c:
    // 0x3d602c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3d602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3d6030:
    // 0x3d6030: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d6034:
    if (ctx->pc == 0x3D6034u) {
        ctx->pc = 0x3D6034u;
            // 0x3d6034: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3D6038u;
        goto label_3d6038;
    }
    ctx->pc = 0x3D6030u;
    {
        const bool branch_taken_0x3d6030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6030) {
            ctx->pc = 0x3D6034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6030u;
            // 0x3d6034: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D604Cu;
            goto label_3d604c;
        }
    }
    ctx->pc = 0x3D6038u;
label_3d6038:
    // 0x3d6038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d6038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d603c:
    // 0x3d603c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d603cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d6040:
    // 0x3d6040: 0x320f809  jalr        $t9
label_3d6044:
    if (ctx->pc == 0x3D6044u) {
        ctx->pc = 0x3D6044u;
            // 0x3d6044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D6048u;
        goto label_3d6048;
    }
    ctx->pc = 0x3D6040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D6048u);
        ctx->pc = 0x3D6044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6040u;
            // 0x3d6044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D6048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D6048u; }
            if (ctx->pc != 0x3D6048u) { return; }
        }
        }
    }
    ctx->pc = 0x3D6048u;
label_3d6048:
    // 0x3d6048: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3d6048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3d604c:
    // 0x3d604c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d6050:
    if (ctx->pc == 0x3D6050u) {
        ctx->pc = 0x3D6050u;
            // 0x3d6050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6054u;
        goto label_3d6054;
    }
    ctx->pc = 0x3D604Cu;
    {
        const bool branch_taken_0x3d604c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d604c) {
            ctx->pc = 0x3D6050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D604Cu;
            // 0x3d6050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6068u;
            goto label_3d6068;
        }
    }
    ctx->pc = 0x3D6054u;
label_3d6054:
    // 0x3d6054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d6054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d6058:
    // 0x3d6058: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d6058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d605c:
    // 0x3d605c: 0x320f809  jalr        $t9
label_3d6060:
    if (ctx->pc == 0x3D6060u) {
        ctx->pc = 0x3D6060u;
            // 0x3d6060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D6064u;
        goto label_3d6064;
    }
    ctx->pc = 0x3D605Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D6064u);
        ctx->pc = 0x3D6060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D605Cu;
            // 0x3d6060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D6064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D6064u; }
            if (ctx->pc != 0x3D6064u) { return; }
        }
        }
    }
    ctx->pc = 0x3D6064u;
label_3d6064:
    // 0x3d6064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6068:
    // 0x3d6068: 0xc075bf8  jal         func_1D6FE0
label_3d606c:
    if (ctx->pc == 0x3D606Cu) {
        ctx->pc = 0x3D606Cu;
            // 0x3d606c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6070u;
        goto label_3d6070;
    }
    ctx->pc = 0x3D6068u;
    SET_GPR_U32(ctx, 31, 0x3D6070u);
    ctx->pc = 0x3D606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6068u;
            // 0x3d606c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6070u; }
        if (ctx->pc != 0x3D6070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6070u; }
        if (ctx->pc != 0x3D6070u) { return; }
    }
    ctx->pc = 0x3D6070u;
label_3d6070:
    // 0x3d6070: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d6070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d6074:
    // 0x3d6074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d6074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d6078:
    // 0x3d6078: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d607c:
    if (ctx->pc == 0x3D607Cu) {
        ctx->pc = 0x3D607Cu;
            // 0x3d607c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6080u;
        goto label_3d6080;
    }
    ctx->pc = 0x3D6078u;
    {
        const bool branch_taken_0x3d6078 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d6078) {
            ctx->pc = 0x3D607Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6078u;
            // 0x3d607c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D608Cu;
            goto label_3d608c;
        }
    }
    ctx->pc = 0x3D6080u;
label_3d6080:
    // 0x3d6080: 0xc0400a8  jal         func_1002A0
label_3d6084:
    if (ctx->pc == 0x3D6084u) {
        ctx->pc = 0x3D6084u;
            // 0x3d6084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6088u;
        goto label_3d6088;
    }
    ctx->pc = 0x3D6080u;
    SET_GPR_U32(ctx, 31, 0x3D6088u);
    ctx->pc = 0x3D6084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6080u;
            // 0x3d6084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6088u; }
        if (ctx->pc != 0x3D6088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6088u; }
        if (ctx->pc != 0x3D6088u) { return; }
    }
    ctx->pc = 0x3D6088u;
label_3d6088:
    // 0x3d6088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d6088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d608c:
    // 0x3d608c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d608cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6090:
    // 0x3d6090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d6090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6094:
    // 0x3d6094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d6098:
    // 0x3d6098: 0x3e00008  jr          $ra
label_3d609c:
    if (ctx->pc == 0x3D609Cu) {
        ctx->pc = 0x3D609Cu;
            // 0x3d609c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D60A0u;
        goto label_3d60a0;
    }
    ctx->pc = 0x3D6098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6098u;
            // 0x3d609c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D60A0u;
label_3d60a0:
    // 0x3d60a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d60a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d60a4:
    // 0x3d60a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d60a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d60a8:
    // 0x3d60a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d60a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d60ac:
    // 0x3d60ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d60b0:
    // 0x3d60b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d60b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d60b4:
    // 0x3d60b4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_3d60b8:
    if (ctx->pc == 0x3D60B8u) {
        ctx->pc = 0x3D60B8u;
            // 0x3d60b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D60BCu;
        goto label_3d60bc;
    }
    ctx->pc = 0x3D60B4u;
    {
        const bool branch_taken_0x3d60b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D60B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D60B4u;
            // 0x3d60b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d60b4) {
            ctx->pc = 0x3D6128u;
            goto label_3d6128;
        }
    }
    ctx->pc = 0x3D60BCu;
label_3d60bc:
    // 0x3d60bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d60c0:
    // 0x3d60c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d60c4:
    // 0x3d60c4: 0x24639450  addiu       $v1, $v1, -0x6BB0
    ctx->pc = 0x3d60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939728));
label_3d60c8:
    // 0x3d60c8: 0x24429490  addiu       $v0, $v0, -0x6B70
    ctx->pc = 0x3d60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
label_3d60cc:
    // 0x3d60cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d60ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d60d0:
    // 0x3d60d0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d60d4:
    // 0x3d60d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d60d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d60d8:
    // 0x3d60d8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3d60d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3d60dc:
    // 0x3d60dc: 0x320f809  jalr        $t9
label_3d60e0:
    if (ctx->pc == 0x3D60E0u) {
        ctx->pc = 0x3D60E4u;
        goto label_3d60e4;
    }
    ctx->pc = 0x3D60DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D60E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D60E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D60E4u; }
            if (ctx->pc != 0x3D60E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D60E4u;
label_3d60e4:
    // 0x3d60e4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_3d60e8:
    if (ctx->pc == 0x3D60E8u) {
        ctx->pc = 0x3D60E8u;
            // 0x3d60e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3D60ECu;
        goto label_3d60ec;
    }
    ctx->pc = 0x3D60E4u;
    {
        const bool branch_taken_0x3d60e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d60e4) {
            ctx->pc = 0x3D60E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D60E4u;
            // 0x3d60e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6114u;
            goto label_3d6114;
        }
    }
    ctx->pc = 0x3D60ECu;
label_3d60ec:
    // 0x3d60ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d60f0:
    // 0x3d60f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d60f4:
    // 0x3d60f4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x3d60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_3d60f8:
    // 0x3d60f8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x3d60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_3d60fc:
    // 0x3d60fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d6100:
    // 0x3d6100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6104:
    // 0x3d6104: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d6104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d6108:
    // 0x3d6108: 0xc0aee40  jal         func_2BB900
label_3d610c:
    if (ctx->pc == 0x3D610Cu) {
        ctx->pc = 0x3D610Cu;
            // 0x3d610c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6110u;
        goto label_3d6110;
    }
    ctx->pc = 0x3D6108u;
    SET_GPR_U32(ctx, 31, 0x3D6110u);
    ctx->pc = 0x3D610Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6108u;
            // 0x3d610c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6110u; }
        if (ctx->pc != 0x3D6110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6110u; }
        if (ctx->pc != 0x3D6110u) { return; }
    }
    ctx->pc = 0x3D6110u;
label_3d6110:
    // 0x3d6110: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d6110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3d6114:
    // 0x3d6114: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d6114u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d6118:
    // 0x3d6118: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d611c:
    if (ctx->pc == 0x3D611Cu) {
        ctx->pc = 0x3D611Cu;
            // 0x3d611c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6120u;
        goto label_3d6120;
    }
    ctx->pc = 0x3D6118u;
    {
        const bool branch_taken_0x3d6118 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d6118) {
            ctx->pc = 0x3D611Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6118u;
            // 0x3d611c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D612Cu;
            goto label_3d612c;
        }
    }
    ctx->pc = 0x3D6120u;
label_3d6120:
    // 0x3d6120: 0xc0400a8  jal         func_1002A0
label_3d6124:
    if (ctx->pc == 0x3D6124u) {
        ctx->pc = 0x3D6124u;
            // 0x3d6124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6128u;
        goto label_3d6128;
    }
    ctx->pc = 0x3D6120u;
    SET_GPR_U32(ctx, 31, 0x3D6128u);
    ctx->pc = 0x3D6124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6120u;
            // 0x3d6124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6128u; }
        if (ctx->pc != 0x3D6128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6128u; }
        if (ctx->pc != 0x3D6128u) { return; }
    }
    ctx->pc = 0x3D6128u;
label_3d6128:
    // 0x3d6128: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d612c:
    // 0x3d612c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d612cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6130:
    // 0x3d6130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d6130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6134:
    // 0x3d6134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d6138:
    // 0x3d6138: 0x3e00008  jr          $ra
label_3d613c:
    if (ctx->pc == 0x3D613Cu) {
        ctx->pc = 0x3D613Cu;
            // 0x3d613c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D6140u;
        goto label_3d6140;
    }
    ctx->pc = 0x3D6138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D613Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6138u;
            // 0x3d613c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D6140u;
label_3d6140:
    // 0x3d6140: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d6140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3d6144:
    // 0x3d6144: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d6144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d6148:
    // 0x3d6148: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d6148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3d614c:
    // 0x3d614c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3d6150:
    // 0x3d6150: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d6150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3d6154:
    // 0x3d6154: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d6154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d6158:
    // 0x3d6158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d6158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d615c:
    // 0x3d615c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d6160:
    // 0x3d6160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d6160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d6164:
    // 0x3d6164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d6168:
    // 0x3d6168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d616c:
    // 0x3d616c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3d616cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3d6170:
    // 0x3d6170: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d6170u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d6174:
    // 0x3d6174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d6174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d6178:
    // 0x3d6178: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3d617c:
    if (ctx->pc == 0x3D617Cu) {
        ctx->pc = 0x3D617Cu;
            // 0x3d617c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6180u;
        goto label_3d6180;
    }
    ctx->pc = 0x3D6178u;
    {
        const bool branch_taken_0x3d6178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6178u;
            // 0x3d617c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6178) {
            ctx->pc = 0x3D61BCu;
            goto label_3d61bc;
        }
    }
    ctx->pc = 0x3D6180u;
label_3d6180:
    // 0x3d6180: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d6180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d6184:
    // 0x3d6184: 0x50a30044  beql        $a1, $v1, . + 4 + (0x44 << 2)
label_3d6188:
    if (ctx->pc == 0x3D6188u) {
        ctx->pc = 0x3D6188u;
            // 0x3d6188: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x3D618Cu;
        goto label_3d618c;
    }
    ctx->pc = 0x3D6184u;
    {
        const bool branch_taken_0x3d6184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d6184) {
            ctx->pc = 0x3D6188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6184u;
            // 0x3d6188: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6298u;
            goto label_3d6298;
        }
    }
    ctx->pc = 0x3D618Cu;
label_3d618c:
    // 0x3d618c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d6190:
    // 0x3d6190: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3d6194:
    if (ctx->pc == 0x3D6194u) {
        ctx->pc = 0x3D6194u;
            // 0x3d6194: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D6198u;
        goto label_3d6198;
    }
    ctx->pc = 0x3D6190u;
    {
        const bool branch_taken_0x3d6190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d6190) {
            ctx->pc = 0x3D6194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6190u;
            // 0x3d6194: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D61A0u;
            goto label_3d61a0;
        }
    }
    ctx->pc = 0x3D6198u;
label_3d6198:
    // 0x3d6198: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3d619c:
    if (ctx->pc == 0x3D619Cu) {
        ctx->pc = 0x3D61A0u;
        goto label_3d61a0;
    }
    ctx->pc = 0x3D6198u;
    {
        const bool branch_taken_0x3d6198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6198) {
            ctx->pc = 0x3D6294u;
            goto label_3d6294;
        }
    }
    ctx->pc = 0x3D61A0u;
label_3d61a0:
    // 0x3d61a0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3d61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3d61a4:
    // 0x3d61a4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3d61a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3d61a8:
    // 0x3d61a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3d61a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3d61ac:
    // 0x3d61ac: 0x320f809  jalr        $t9
label_3d61b0:
    if (ctx->pc == 0x3D61B0u) {
        ctx->pc = 0x3D61B0u;
            // 0x3d61b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3D61B4u;
        goto label_3d61b4;
    }
    ctx->pc = 0x3D61ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D61B4u);
        ctx->pc = 0x3D61B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D61ACu;
            // 0x3d61b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D61B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D61B4u; }
            if (ctx->pc != 0x3D61B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D61B4u;
label_3d61b4:
    // 0x3d61b4: 0x10000037  b           . + 4 + (0x37 << 2)
label_3d61b8:
    if (ctx->pc == 0x3D61B8u) {
        ctx->pc = 0x3D61BCu;
        goto label_3d61bc;
    }
    ctx->pc = 0x3D61B4u;
    {
        const bool branch_taken_0x3d61b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d61b4) {
            ctx->pc = 0x3D6294u;
            goto label_3d6294;
        }
    }
    ctx->pc = 0x3D61BCu;
label_3d61bc:
    // 0x3d61bc: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x3d61bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3d61c0:
    // 0x3d61c0: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_3d61c4:
    if (ctx->pc == 0x3D61C4u) {
        ctx->pc = 0x3D61C8u;
        goto label_3d61c8;
    }
    ctx->pc = 0x3D61C0u;
    {
        const bool branch_taken_0x3d61c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d61c0) {
            ctx->pc = 0x3D6294u;
            goto label_3d6294;
        }
    }
    ctx->pc = 0x3D61C8u;
label_3d61c8:
    // 0x3d61c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d61cc:
    // 0x3d61cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d61d0:
    // 0x3d61d0: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x3d61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d61d4:
    // 0x3d61d4: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x3d61d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_3d61d8:
    // 0x3d61d8: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x3d61d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3d61dc:
    // 0x3d61dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d61e0:
    // 0x3d61e0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x3d61e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3d61e4:
    // 0x3d61e4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3d61e8:
    // 0x3d61e8: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x3d61e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3d61ec:
    // 0x3d61ec: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3d61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3d61f0:
    // 0x3d61f0: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x3d61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_3d61f4:
    // 0x3d61f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3d61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3d61f8:
    // 0x3d61f8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d61fc:
    // 0x3d61fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d6200:
    // 0x3d6200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d6200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d6204:
    // 0x3d6204: 0xc04e738  jal         func_139CE0
label_3d6208:
    if (ctx->pc == 0x3D6208u) {
        ctx->pc = 0x3D6208u;
            // 0x3d6208: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3D620Cu;
        goto label_3d620c;
    }
    ctx->pc = 0x3D6204u;
    SET_GPR_U32(ctx, 31, 0x3D620Cu);
    ctx->pc = 0x3D6208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6204u;
            // 0x3d6208: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D620Cu; }
        if (ctx->pc != 0x3D620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D620Cu; }
        if (ctx->pc != 0x3D620Cu) { return; }
    }
    ctx->pc = 0x3D620Cu;
label_3d620c:
    // 0x3d620c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d6210:
    // 0x3d6210: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d6210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d6214:
    // 0x3d6214: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3d6214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3d6218:
    // 0x3d6218: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d6218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d621c:
    // 0x3d621c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3d621cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3d6220:
    // 0x3d6220: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d6220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6224:
    // 0x3d6224: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x3d6224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3d6228:
    // 0x3d6228: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d6228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d622c:
    // 0x3d622c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3d622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d6230:
    // 0x3d6230: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3d6230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6234:
    // 0x3d6234: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3d6234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6238:
    // 0x3d6238: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3d6238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d623c:
    // 0x3d623c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3d623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3d6240:
    // 0x3d6240: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3d6240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6244:
    // 0x3d6244: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d6244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d6248:
    // 0x3d6248: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x3d6248u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3d624c:
    // 0x3d624c: 0xc0f5d64  jal         func_3D7590
label_3d6250:
    if (ctx->pc == 0x3D6250u) {
        ctx->pc = 0x3D6250u;
            // 0x3d6250: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D6254u;
        goto label_3d6254;
    }
    ctx->pc = 0x3D624Cu;
    SET_GPR_U32(ctx, 31, 0x3D6254u);
    ctx->pc = 0x3D6250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D624Cu;
            // 0x3d6250: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D7590u;
    if (runtime->hasFunction(0x3D7590u)) {
        auto targetFn = runtime->lookupFunction(0x3D7590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6254u; }
        if (ctx->pc != 0x3D6254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D7590_0x3d7590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6254u; }
        if (ctx->pc != 0x3D6254u) { return; }
    }
    ctx->pc = 0x3D6254u;
label_3d6254:
    // 0x3d6254: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d6254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d6258:
    // 0x3d6258: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3d6258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3d625c:
    // 0x3d625c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_3d6260:
    if (ctx->pc == 0x3D6260u) {
        ctx->pc = 0x3D6260u;
            // 0x3d6260: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3D6264u;
        goto label_3d6264;
    }
    ctx->pc = 0x3D625Cu;
    {
        const bool branch_taken_0x3d625c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D625Cu;
            // 0x3d6260: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d625c) {
            ctx->pc = 0x3D6224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d6224;
        }
    }
    ctx->pc = 0x3D6264u;
label_3d6264:
    // 0x3d6264: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d6264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d6268:
    // 0x3d6268: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3d6268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3d626c:
    // 0x3d626c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_3d6270:
    if (ctx->pc == 0x3D6270u) {
        ctx->pc = 0x3D6270u;
            // 0x3d6270: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D6274u;
        goto label_3d6274;
    }
    ctx->pc = 0x3D626Cu;
    {
        const bool branch_taken_0x3d626c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3D6270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D626Cu;
            // 0x3d6270: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d626c) {
            ctx->pc = 0x3D6294u;
            goto label_3d6294;
        }
    }
    ctx->pc = 0x3D6274u;
label_3d6274:
    // 0x3d6274: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d6274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d6278:
    // 0x3d6278: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d6278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d627c:
    // 0x3d627c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3d627cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3d6280:
    // 0x3d6280: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3d6280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3d6284:
    // 0x3d6284: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3d6284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3d6288:
    // 0x3d6288: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3d6288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3d628c:
    // 0x3d628c: 0xc055ea8  jal         func_157AA0
label_3d6290:
    if (ctx->pc == 0x3D6290u) {
        ctx->pc = 0x3D6290u;
            // 0x3d6290: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6294u;
        goto label_3d6294;
    }
    ctx->pc = 0x3D628Cu;
    SET_GPR_U32(ctx, 31, 0x3D6294u);
    ctx->pc = 0x3D6290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D628Cu;
            // 0x3d6290: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6294u; }
        if (ctx->pc != 0x3D6294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6294u; }
        if (ctx->pc != 0x3D6294u) { return; }
    }
    ctx->pc = 0x3D6294u;
label_3d6294:
    // 0x3d6294: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d6294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d6298:
    // 0x3d6298: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d6298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d629c:
    // 0x3d629c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d629cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d62a0:
    // 0x3d62a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d62a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d62a4:
    // 0x3d62a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d62a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d62a8:
    // 0x3d62a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d62a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d62ac:
    // 0x3d62ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d62acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d62b0:
    // 0x3d62b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d62b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d62b4:
    // 0x3d62b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d62b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d62b8:
    // 0x3d62b8: 0x3e00008  jr          $ra
label_3d62bc:
    if (ctx->pc == 0x3D62BCu) {
        ctx->pc = 0x3D62BCu;
            // 0x3d62bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3D62C0u;
        goto label_3d62c0;
    }
    ctx->pc = 0x3D62B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D62BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D62B8u;
            // 0x3d62bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D62C0u;
label_3d62c0:
    // 0x3d62c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d62c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d62c4:
    // 0x3d62c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d62c8:
    // 0x3d62c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d62c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d62cc:
    // 0x3d62cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d62ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d62d0:
    // 0x3d62d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d62d4:
    // 0x3d62d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d62d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d62d8:
    // 0x3d62d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d62d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d62dc:
    // 0x3d62dc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d62dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d62e0:
    // 0x3d62e0: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_3d62e4:
    if (ctx->pc == 0x3D62E4u) {
        ctx->pc = 0x3D62E4u;
            // 0x3d62e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D62E8u;
        goto label_3d62e8;
    }
    ctx->pc = 0x3D62E0u;
    {
        const bool branch_taken_0x3d62e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D62E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D62E0u;
            // 0x3d62e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d62e0) {
            ctx->pc = 0x3D63B0u;
            goto label_3d63b0;
        }
    }
    ctx->pc = 0x3D62E8u;
label_3d62e8:
    // 0x3d62e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d62ec:
    // 0x3d62ec: 0x50a3002d  beql        $a1, $v1, . + 4 + (0x2D << 2)
label_3d62f0:
    if (ctx->pc == 0x3D62F0u) {
        ctx->pc = 0x3D62F0u;
            // 0x3d62f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D62F4u;
        goto label_3d62f4;
    }
    ctx->pc = 0x3D62ECu;
    {
        const bool branch_taken_0x3d62ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d62ec) {
            ctx->pc = 0x3D62F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D62ECu;
            // 0x3d62f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D63A4u;
            goto label_3d63a4;
        }
    }
    ctx->pc = 0x3D62F4u;
label_3d62f4:
    // 0x3d62f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d62f8:
    // 0x3d62f8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3d62fc:
    if (ctx->pc == 0x3D62FCu) {
        ctx->pc = 0x3D6300u;
        goto label_3d6300;
    }
    ctx->pc = 0x3D62F8u;
    {
        const bool branch_taken_0x3d62f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d62f8) {
            ctx->pc = 0x3D6308u;
            goto label_3d6308;
        }
    }
    ctx->pc = 0x3D6300u;
label_3d6300:
    // 0x3d6300: 0x10000039  b           . + 4 + (0x39 << 2)
label_3d6304:
    if (ctx->pc == 0x3D6304u) {
        ctx->pc = 0x3D6308u;
        goto label_3d6308;
    }
    ctx->pc = 0x3D6300u;
    {
        const bool branch_taken_0x3d6300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6300) {
            ctx->pc = 0x3D63E8u;
            goto label_3d63e8;
        }
    }
    ctx->pc = 0x3D6308u;
label_3d6308:
    // 0x3d6308: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d6308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d630c:
    // 0x3d630c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6310:
    // 0x3d6310: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3d6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3d6314:
    // 0x3d6314: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3d6314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3d6318:
    // 0x3d6318: 0x10640033  beq         $v1, $a0, . + 4 + (0x33 << 2)
label_3d631c:
    if (ctx->pc == 0x3D631Cu) {
        ctx->pc = 0x3D6320u;
        goto label_3d6320;
    }
    ctx->pc = 0x3D6318u;
    {
        const bool branch_taken_0x3d6318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3d6318) {
            ctx->pc = 0x3D63E8u;
            goto label_3d63e8;
        }
    }
    ctx->pc = 0x3D6320u;
label_3d6320:
    // 0x3d6320: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d6320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d6324:
    // 0x3d6324: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d6324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d6328:
    // 0x3d6328: 0x8c6af7c0  lw          $t2, -0x840($v1)
    ctx->pc = 0x3d6328u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965184)));
label_3d632c:
    // 0x3d632c: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x3d632cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_3d6330:
    // 0x3d6330: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3d6330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3d6334:
    // 0x3d6334: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3d6334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_3d6338:
    // 0x3d6338: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3d6338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3d633c:
    // 0x3d633c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3d633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3d6340:
    // 0x3d6340: 0x8c690090  lw          $t1, 0x90($v1)
    ctx->pc = 0x3d6340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_3d6344:
    // 0x3d6344: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3d6344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3d6348:
    // 0x3d6348: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x3d6348u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_3d634c:
    // 0x3d634c: 0xac690090  sw          $t1, 0x90($v1)
    ctx->pc = 0x3d634cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 9));
label_3d6350:
    // 0x3d6350: 0x8d09f7c8  lw          $t1, -0x838($t0)
    ctx->pc = 0x3d6350u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294965192)));
label_3d6354:
    // 0x3d6354: 0x8c680120  lw          $t0, 0x120($v1)
    ctx->pc = 0x3d6354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_3d6358:
    // 0x3d6358: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x3d6358u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_3d635c:
    // 0x3d635c: 0xac680120  sw          $t0, 0x120($v1)
    ctx->pc = 0x3d635cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 8));
label_3d6360:
    // 0x3d6360: 0x8ce8f7d0  lw          $t0, -0x830($a3)
    ctx->pc = 0x3d6360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294965200)));
label_3d6364:
    // 0x3d6364: 0x8c6701b0  lw          $a3, 0x1B0($v1)
    ctx->pc = 0x3d6364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_3d6368:
    // 0x3d6368: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3d6368u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_3d636c:
    // 0x3d636c: 0xac6701b0  sw          $a3, 0x1B0($v1)
    ctx->pc = 0x3d636cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 7));
label_3d6370:
    // 0x3d6370: 0x8cc7f7d8  lw          $a3, -0x828($a2)
    ctx->pc = 0x3d6370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294965208)));
label_3d6374:
    // 0x3d6374: 0x8c660240  lw          $a2, 0x240($v1)
    ctx->pc = 0x3d6374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 576)));
label_3d6378:
    // 0x3d6378: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3d6378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_3d637c:
    // 0x3d637c: 0xac660240  sw          $a2, 0x240($v1)
    ctx->pc = 0x3d637cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 6));
label_3d6380:
    // 0x3d6380: 0x8ca6f7e0  lw          $a2, -0x820($a1)
    ctx->pc = 0x3d6380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965216)));
label_3d6384:
    // 0x3d6384: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x3d6384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_3d6388:
    // 0x3d6388: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3d6388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_3d638c:
    // 0x3d638c: 0xac6502d0  sw          $a1, 0x2D0($v1)
    ctx->pc = 0x3d638cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 5));
label_3d6390:
    // 0x3d6390: 0x8c85f7e8  lw          $a1, -0x818($a0)
    ctx->pc = 0x3d6390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965224)));
label_3d6394:
    // 0x3d6394: 0x8c640360  lw          $a0, 0x360($v1)
    ctx->pc = 0x3d6394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
label_3d6398:
    // 0x3d6398: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3d6398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_3d639c:
    // 0x3d639c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3d63a0:
    if (ctx->pc == 0x3D63A0u) {
        ctx->pc = 0x3D63A0u;
            // 0x3d63a0: 0xac640360  sw          $a0, 0x360($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 4));
        ctx->pc = 0x3D63A4u;
        goto label_3d63a4;
    }
    ctx->pc = 0x3D639Cu;
    {
        const bool branch_taken_0x3d639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D63A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D639Cu;
            // 0x3d63a0: 0xac640360  sw          $a0, 0x360($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d639c) {
            ctx->pc = 0x3D63E8u;
            goto label_3d63e8;
        }
    }
    ctx->pc = 0x3D63A4u;
label_3d63a4:
    // 0x3d63a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d63a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d63a8:
    // 0x3d63a8: 0x320f809  jalr        $t9
label_3d63ac:
    if (ctx->pc == 0x3D63ACu) {
        ctx->pc = 0x3D63B0u;
        goto label_3d63b0;
    }
    ctx->pc = 0x3D63A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D63B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D63B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D63B0u; }
            if (ctx->pc != 0x3D63B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3D63B0u;
label_3d63b0:
    // 0x3d63b0: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3d63b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3d63b4:
    // 0x3d63b4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3d63b8:
    if (ctx->pc == 0x3D63B8u) {
        ctx->pc = 0x3D63BCu;
        goto label_3d63bc;
    }
    ctx->pc = 0x3D63B4u;
    {
        const bool branch_taken_0x3d63b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d63b4) {
            ctx->pc = 0x3D63E8u;
            goto label_3d63e8;
        }
    }
    ctx->pc = 0x3D63BCu;
label_3d63bc:
    // 0x3d63bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d63bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d63c0:
    // 0x3d63c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d63c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d63c4:
    // 0x3d63c4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3d63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3d63c8:
    // 0x3d63c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d63cc:
    // 0x3d63cc: 0xc0e3658  jal         func_38D960
label_3d63d0:
    if (ctx->pc == 0x3D63D0u) {
        ctx->pc = 0x3D63D0u;
            // 0x3d63d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3D63D4u;
        goto label_3d63d4;
    }
    ctx->pc = 0x3D63CCu;
    SET_GPR_U32(ctx, 31, 0x3D63D4u);
    ctx->pc = 0x3D63D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D63CCu;
            // 0x3d63d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D63D4u; }
        if (ctx->pc != 0x3D63D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D63D4u; }
        if (ctx->pc != 0x3D63D4u) { return; }
    }
    ctx->pc = 0x3D63D4u;
label_3d63d4:
    // 0x3d63d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d63d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d63d8:
    // 0x3d63d8: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3d63d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3d63dc:
    // 0x3d63dc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3d63e0:
    if (ctx->pc == 0x3D63E0u) {
        ctx->pc = 0x3D63E0u;
            // 0x3d63e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3D63E4u;
        goto label_3d63e4;
    }
    ctx->pc = 0x3D63DCu;
    {
        const bool branch_taken_0x3d63dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D63E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D63DCu;
            // 0x3d63e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d63dc) {
            ctx->pc = 0x3D63C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d63c4;
        }
    }
    ctx->pc = 0x3D63E4u;
label_3d63e4:
    // 0x3d63e4: 0x0  nop
    ctx->pc = 0x3d63e4u;
    // NOP
label_3d63e8:
    // 0x3d63e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d63e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d63ec:
    // 0x3d63ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d63ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d63f0:
    // 0x3d63f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d63f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d63f4:
    // 0x3d63f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d63f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d63f8:
    // 0x3d63f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d63f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d63fc:
    // 0x3d63fc: 0x3e00008  jr          $ra
label_3d6400:
    if (ctx->pc == 0x3D6400u) {
        ctx->pc = 0x3D6400u;
            // 0x3d6400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D6404u;
        goto label_3d6404;
    }
    ctx->pc = 0x3D63FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D63FCu;
            // 0x3d6400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D6404u;
label_3d6404:
    // 0x3d6404: 0x0  nop
    ctx->pc = 0x3d6404u;
    // NOP
label_3d6408:
    // 0x3d6408: 0x0  nop
    ctx->pc = 0x3d6408u;
    // NOP
label_3d640c:
    // 0x3d640c: 0x0  nop
    ctx->pc = 0x3d640cu;
    // NOP
label_3d6410:
    // 0x3d6410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d6414:
    // 0x3d6414: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d6414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d6418:
    // 0x3d6418: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d6418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d641c:
    // 0x3d641c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d6420:
    // 0x3d6420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d6424:
    // 0x3d6424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d6428:
    // 0x3d6428: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3d6428u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d642c:
    // 0x3d642c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3d6430:
    if (ctx->pc == 0x3D6430u) {
        ctx->pc = 0x3D6430u;
            // 0x3d6430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6434u;
        goto label_3d6434;
    }
    ctx->pc = 0x3D642Cu;
    {
        const bool branch_taken_0x3d642c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D642Cu;
            // 0x3d6430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d642c) {
            ctx->pc = 0x3D6468u;
            goto label_3d6468;
        }
    }
    ctx->pc = 0x3D6434u;
label_3d6434:
    // 0x3d6434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d6434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6438:
    // 0x3d6438: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d6438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d643c:
    // 0x3d643c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3d643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3d6440:
    // 0x3d6440: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d6440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d6444:
    // 0x3d6444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d6444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d6448:
    // 0x3d6448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d6448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d644c:
    // 0x3d644c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3d644cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3d6450:
    // 0x3d6450: 0x320f809  jalr        $t9
label_3d6454:
    if (ctx->pc == 0x3D6454u) {
        ctx->pc = 0x3D6458u;
        goto label_3d6458;
    }
    ctx->pc = 0x3D6450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D6458u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D6458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D6458u; }
            if (ctx->pc != 0x3D6458u) { return; }
        }
        }
    }
    ctx->pc = 0x3D6458u;
label_3d6458:
    // 0x3d6458: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d6458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d645c:
    // 0x3d645c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3d645cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3d6460:
    // 0x3d6460: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3d6464:
    if (ctx->pc == 0x3D6464u) {
        ctx->pc = 0x3D6464u;
            // 0x3d6464: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3D6468u;
        goto label_3d6468;
    }
    ctx->pc = 0x3D6460u;
    {
        const bool branch_taken_0x3d6460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6460u;
            // 0x3d6464: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6460) {
            ctx->pc = 0x3D643Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d643c;
        }
    }
    ctx->pc = 0x3D6468u;
label_3d6468:
    // 0x3d6468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d6468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d646c:
    // 0x3d646c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d646cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d6470:
    // 0x3d6470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d6470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6474:
    // 0x3d6474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d6474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6478:
    // 0x3d6478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d647c:
    // 0x3d647c: 0x3e00008  jr          $ra
label_3d6480:
    if (ctx->pc == 0x3D6480u) {
        ctx->pc = 0x3D6480u;
            // 0x3d6480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D6484u;
        goto label_3d6484;
    }
    ctx->pc = 0x3D647Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D647Cu;
            // 0x3d6480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D6484u;
label_3d6484:
    // 0x3d6484: 0x0  nop
    ctx->pc = 0x3d6484u;
    // NOP
label_3d6488:
    // 0x3d6488: 0x0  nop
    ctx->pc = 0x3d6488u;
    // NOP
label_3d648c:
    // 0x3d648c: 0x0  nop
    ctx->pc = 0x3d648cu;
    // NOP
}
