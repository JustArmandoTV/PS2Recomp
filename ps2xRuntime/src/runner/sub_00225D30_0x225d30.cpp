#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225D30
// Address: 0x225d30 - 0x2263e0
void sub_00225D30_0x225d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225D30_0x225d30");
#endif

    switch (ctx->pc) {
        case 0x225d30u: goto label_225d30;
        case 0x225d34u: goto label_225d34;
        case 0x225d38u: goto label_225d38;
        case 0x225d3cu: goto label_225d3c;
        case 0x225d40u: goto label_225d40;
        case 0x225d44u: goto label_225d44;
        case 0x225d48u: goto label_225d48;
        case 0x225d4cu: goto label_225d4c;
        case 0x225d50u: goto label_225d50;
        case 0x225d54u: goto label_225d54;
        case 0x225d58u: goto label_225d58;
        case 0x225d5cu: goto label_225d5c;
        case 0x225d60u: goto label_225d60;
        case 0x225d64u: goto label_225d64;
        case 0x225d68u: goto label_225d68;
        case 0x225d6cu: goto label_225d6c;
        case 0x225d70u: goto label_225d70;
        case 0x225d74u: goto label_225d74;
        case 0x225d78u: goto label_225d78;
        case 0x225d7cu: goto label_225d7c;
        case 0x225d80u: goto label_225d80;
        case 0x225d84u: goto label_225d84;
        case 0x225d88u: goto label_225d88;
        case 0x225d8cu: goto label_225d8c;
        case 0x225d90u: goto label_225d90;
        case 0x225d94u: goto label_225d94;
        case 0x225d98u: goto label_225d98;
        case 0x225d9cu: goto label_225d9c;
        case 0x225da0u: goto label_225da0;
        case 0x225da4u: goto label_225da4;
        case 0x225da8u: goto label_225da8;
        case 0x225dacu: goto label_225dac;
        case 0x225db0u: goto label_225db0;
        case 0x225db4u: goto label_225db4;
        case 0x225db8u: goto label_225db8;
        case 0x225dbcu: goto label_225dbc;
        case 0x225dc0u: goto label_225dc0;
        case 0x225dc4u: goto label_225dc4;
        case 0x225dc8u: goto label_225dc8;
        case 0x225dccu: goto label_225dcc;
        case 0x225dd0u: goto label_225dd0;
        case 0x225dd4u: goto label_225dd4;
        case 0x225dd8u: goto label_225dd8;
        case 0x225ddcu: goto label_225ddc;
        case 0x225de0u: goto label_225de0;
        case 0x225de4u: goto label_225de4;
        case 0x225de8u: goto label_225de8;
        case 0x225decu: goto label_225dec;
        case 0x225df0u: goto label_225df0;
        case 0x225df4u: goto label_225df4;
        case 0x225df8u: goto label_225df8;
        case 0x225dfcu: goto label_225dfc;
        case 0x225e00u: goto label_225e00;
        case 0x225e04u: goto label_225e04;
        case 0x225e08u: goto label_225e08;
        case 0x225e0cu: goto label_225e0c;
        case 0x225e10u: goto label_225e10;
        case 0x225e14u: goto label_225e14;
        case 0x225e18u: goto label_225e18;
        case 0x225e1cu: goto label_225e1c;
        case 0x225e20u: goto label_225e20;
        case 0x225e24u: goto label_225e24;
        case 0x225e28u: goto label_225e28;
        case 0x225e2cu: goto label_225e2c;
        case 0x225e30u: goto label_225e30;
        case 0x225e34u: goto label_225e34;
        case 0x225e38u: goto label_225e38;
        case 0x225e3cu: goto label_225e3c;
        case 0x225e40u: goto label_225e40;
        case 0x225e44u: goto label_225e44;
        case 0x225e48u: goto label_225e48;
        case 0x225e4cu: goto label_225e4c;
        case 0x225e50u: goto label_225e50;
        case 0x225e54u: goto label_225e54;
        case 0x225e58u: goto label_225e58;
        case 0x225e5cu: goto label_225e5c;
        case 0x225e60u: goto label_225e60;
        case 0x225e64u: goto label_225e64;
        case 0x225e68u: goto label_225e68;
        case 0x225e6cu: goto label_225e6c;
        case 0x225e70u: goto label_225e70;
        case 0x225e74u: goto label_225e74;
        case 0x225e78u: goto label_225e78;
        case 0x225e7cu: goto label_225e7c;
        case 0x225e80u: goto label_225e80;
        case 0x225e84u: goto label_225e84;
        case 0x225e88u: goto label_225e88;
        case 0x225e8cu: goto label_225e8c;
        case 0x225e90u: goto label_225e90;
        case 0x225e94u: goto label_225e94;
        case 0x225e98u: goto label_225e98;
        case 0x225e9cu: goto label_225e9c;
        case 0x225ea0u: goto label_225ea0;
        case 0x225ea4u: goto label_225ea4;
        case 0x225ea8u: goto label_225ea8;
        case 0x225eacu: goto label_225eac;
        case 0x225eb0u: goto label_225eb0;
        case 0x225eb4u: goto label_225eb4;
        case 0x225eb8u: goto label_225eb8;
        case 0x225ebcu: goto label_225ebc;
        case 0x225ec0u: goto label_225ec0;
        case 0x225ec4u: goto label_225ec4;
        case 0x225ec8u: goto label_225ec8;
        case 0x225eccu: goto label_225ecc;
        case 0x225ed0u: goto label_225ed0;
        case 0x225ed4u: goto label_225ed4;
        case 0x225ed8u: goto label_225ed8;
        case 0x225edcu: goto label_225edc;
        case 0x225ee0u: goto label_225ee0;
        case 0x225ee4u: goto label_225ee4;
        case 0x225ee8u: goto label_225ee8;
        case 0x225eecu: goto label_225eec;
        case 0x225ef0u: goto label_225ef0;
        case 0x225ef4u: goto label_225ef4;
        case 0x225ef8u: goto label_225ef8;
        case 0x225efcu: goto label_225efc;
        case 0x225f00u: goto label_225f00;
        case 0x225f04u: goto label_225f04;
        case 0x225f08u: goto label_225f08;
        case 0x225f0cu: goto label_225f0c;
        case 0x225f10u: goto label_225f10;
        case 0x225f14u: goto label_225f14;
        case 0x225f18u: goto label_225f18;
        case 0x225f1cu: goto label_225f1c;
        case 0x225f20u: goto label_225f20;
        case 0x225f24u: goto label_225f24;
        case 0x225f28u: goto label_225f28;
        case 0x225f2cu: goto label_225f2c;
        case 0x225f30u: goto label_225f30;
        case 0x225f34u: goto label_225f34;
        case 0x225f38u: goto label_225f38;
        case 0x225f3cu: goto label_225f3c;
        case 0x225f40u: goto label_225f40;
        case 0x225f44u: goto label_225f44;
        case 0x225f48u: goto label_225f48;
        case 0x225f4cu: goto label_225f4c;
        case 0x225f50u: goto label_225f50;
        case 0x225f54u: goto label_225f54;
        case 0x225f58u: goto label_225f58;
        case 0x225f5cu: goto label_225f5c;
        case 0x225f60u: goto label_225f60;
        case 0x225f64u: goto label_225f64;
        case 0x225f68u: goto label_225f68;
        case 0x225f6cu: goto label_225f6c;
        case 0x225f70u: goto label_225f70;
        case 0x225f74u: goto label_225f74;
        case 0x225f78u: goto label_225f78;
        case 0x225f7cu: goto label_225f7c;
        case 0x225f80u: goto label_225f80;
        case 0x225f84u: goto label_225f84;
        case 0x225f88u: goto label_225f88;
        case 0x225f8cu: goto label_225f8c;
        case 0x225f90u: goto label_225f90;
        case 0x225f94u: goto label_225f94;
        case 0x225f98u: goto label_225f98;
        case 0x225f9cu: goto label_225f9c;
        case 0x225fa0u: goto label_225fa0;
        case 0x225fa4u: goto label_225fa4;
        case 0x225fa8u: goto label_225fa8;
        case 0x225facu: goto label_225fac;
        case 0x225fb0u: goto label_225fb0;
        case 0x225fb4u: goto label_225fb4;
        case 0x225fb8u: goto label_225fb8;
        case 0x225fbcu: goto label_225fbc;
        case 0x225fc0u: goto label_225fc0;
        case 0x225fc4u: goto label_225fc4;
        case 0x225fc8u: goto label_225fc8;
        case 0x225fccu: goto label_225fcc;
        case 0x225fd0u: goto label_225fd0;
        case 0x225fd4u: goto label_225fd4;
        case 0x225fd8u: goto label_225fd8;
        case 0x225fdcu: goto label_225fdc;
        case 0x225fe0u: goto label_225fe0;
        case 0x225fe4u: goto label_225fe4;
        case 0x225fe8u: goto label_225fe8;
        case 0x225fecu: goto label_225fec;
        case 0x225ff0u: goto label_225ff0;
        case 0x225ff4u: goto label_225ff4;
        case 0x225ff8u: goto label_225ff8;
        case 0x225ffcu: goto label_225ffc;
        case 0x226000u: goto label_226000;
        case 0x226004u: goto label_226004;
        case 0x226008u: goto label_226008;
        case 0x22600cu: goto label_22600c;
        case 0x226010u: goto label_226010;
        case 0x226014u: goto label_226014;
        case 0x226018u: goto label_226018;
        case 0x22601cu: goto label_22601c;
        case 0x226020u: goto label_226020;
        case 0x226024u: goto label_226024;
        case 0x226028u: goto label_226028;
        case 0x22602cu: goto label_22602c;
        case 0x226030u: goto label_226030;
        case 0x226034u: goto label_226034;
        case 0x226038u: goto label_226038;
        case 0x22603cu: goto label_22603c;
        case 0x226040u: goto label_226040;
        case 0x226044u: goto label_226044;
        case 0x226048u: goto label_226048;
        case 0x22604cu: goto label_22604c;
        case 0x226050u: goto label_226050;
        case 0x226054u: goto label_226054;
        case 0x226058u: goto label_226058;
        case 0x22605cu: goto label_22605c;
        case 0x226060u: goto label_226060;
        case 0x226064u: goto label_226064;
        case 0x226068u: goto label_226068;
        case 0x22606cu: goto label_22606c;
        case 0x226070u: goto label_226070;
        case 0x226074u: goto label_226074;
        case 0x226078u: goto label_226078;
        case 0x22607cu: goto label_22607c;
        case 0x226080u: goto label_226080;
        case 0x226084u: goto label_226084;
        case 0x226088u: goto label_226088;
        case 0x22608cu: goto label_22608c;
        case 0x226090u: goto label_226090;
        case 0x226094u: goto label_226094;
        case 0x226098u: goto label_226098;
        case 0x22609cu: goto label_22609c;
        case 0x2260a0u: goto label_2260a0;
        case 0x2260a4u: goto label_2260a4;
        case 0x2260a8u: goto label_2260a8;
        case 0x2260acu: goto label_2260ac;
        case 0x2260b0u: goto label_2260b0;
        case 0x2260b4u: goto label_2260b4;
        case 0x2260b8u: goto label_2260b8;
        case 0x2260bcu: goto label_2260bc;
        case 0x2260c0u: goto label_2260c0;
        case 0x2260c4u: goto label_2260c4;
        case 0x2260c8u: goto label_2260c8;
        case 0x2260ccu: goto label_2260cc;
        case 0x2260d0u: goto label_2260d0;
        case 0x2260d4u: goto label_2260d4;
        case 0x2260d8u: goto label_2260d8;
        case 0x2260dcu: goto label_2260dc;
        case 0x2260e0u: goto label_2260e0;
        case 0x2260e4u: goto label_2260e4;
        case 0x2260e8u: goto label_2260e8;
        case 0x2260ecu: goto label_2260ec;
        case 0x2260f0u: goto label_2260f0;
        case 0x2260f4u: goto label_2260f4;
        case 0x2260f8u: goto label_2260f8;
        case 0x2260fcu: goto label_2260fc;
        case 0x226100u: goto label_226100;
        case 0x226104u: goto label_226104;
        case 0x226108u: goto label_226108;
        case 0x22610cu: goto label_22610c;
        case 0x226110u: goto label_226110;
        case 0x226114u: goto label_226114;
        case 0x226118u: goto label_226118;
        case 0x22611cu: goto label_22611c;
        case 0x226120u: goto label_226120;
        case 0x226124u: goto label_226124;
        case 0x226128u: goto label_226128;
        case 0x22612cu: goto label_22612c;
        case 0x226130u: goto label_226130;
        case 0x226134u: goto label_226134;
        case 0x226138u: goto label_226138;
        case 0x22613cu: goto label_22613c;
        case 0x226140u: goto label_226140;
        case 0x226144u: goto label_226144;
        case 0x226148u: goto label_226148;
        case 0x22614cu: goto label_22614c;
        case 0x226150u: goto label_226150;
        case 0x226154u: goto label_226154;
        case 0x226158u: goto label_226158;
        case 0x22615cu: goto label_22615c;
        case 0x226160u: goto label_226160;
        case 0x226164u: goto label_226164;
        case 0x226168u: goto label_226168;
        case 0x22616cu: goto label_22616c;
        case 0x226170u: goto label_226170;
        case 0x226174u: goto label_226174;
        case 0x226178u: goto label_226178;
        case 0x22617cu: goto label_22617c;
        case 0x226180u: goto label_226180;
        case 0x226184u: goto label_226184;
        case 0x226188u: goto label_226188;
        case 0x22618cu: goto label_22618c;
        case 0x226190u: goto label_226190;
        case 0x226194u: goto label_226194;
        case 0x226198u: goto label_226198;
        case 0x22619cu: goto label_22619c;
        case 0x2261a0u: goto label_2261a0;
        case 0x2261a4u: goto label_2261a4;
        case 0x2261a8u: goto label_2261a8;
        case 0x2261acu: goto label_2261ac;
        case 0x2261b0u: goto label_2261b0;
        case 0x2261b4u: goto label_2261b4;
        case 0x2261b8u: goto label_2261b8;
        case 0x2261bcu: goto label_2261bc;
        case 0x2261c0u: goto label_2261c0;
        case 0x2261c4u: goto label_2261c4;
        case 0x2261c8u: goto label_2261c8;
        case 0x2261ccu: goto label_2261cc;
        case 0x2261d0u: goto label_2261d0;
        case 0x2261d4u: goto label_2261d4;
        case 0x2261d8u: goto label_2261d8;
        case 0x2261dcu: goto label_2261dc;
        case 0x2261e0u: goto label_2261e0;
        case 0x2261e4u: goto label_2261e4;
        case 0x2261e8u: goto label_2261e8;
        case 0x2261ecu: goto label_2261ec;
        case 0x2261f0u: goto label_2261f0;
        case 0x2261f4u: goto label_2261f4;
        case 0x2261f8u: goto label_2261f8;
        case 0x2261fcu: goto label_2261fc;
        case 0x226200u: goto label_226200;
        case 0x226204u: goto label_226204;
        case 0x226208u: goto label_226208;
        case 0x22620cu: goto label_22620c;
        case 0x226210u: goto label_226210;
        case 0x226214u: goto label_226214;
        case 0x226218u: goto label_226218;
        case 0x22621cu: goto label_22621c;
        case 0x226220u: goto label_226220;
        case 0x226224u: goto label_226224;
        case 0x226228u: goto label_226228;
        case 0x22622cu: goto label_22622c;
        case 0x226230u: goto label_226230;
        case 0x226234u: goto label_226234;
        case 0x226238u: goto label_226238;
        case 0x22623cu: goto label_22623c;
        case 0x226240u: goto label_226240;
        case 0x226244u: goto label_226244;
        case 0x226248u: goto label_226248;
        case 0x22624cu: goto label_22624c;
        case 0x226250u: goto label_226250;
        case 0x226254u: goto label_226254;
        case 0x226258u: goto label_226258;
        case 0x22625cu: goto label_22625c;
        case 0x226260u: goto label_226260;
        case 0x226264u: goto label_226264;
        case 0x226268u: goto label_226268;
        case 0x22626cu: goto label_22626c;
        case 0x226270u: goto label_226270;
        case 0x226274u: goto label_226274;
        case 0x226278u: goto label_226278;
        case 0x22627cu: goto label_22627c;
        case 0x226280u: goto label_226280;
        case 0x226284u: goto label_226284;
        case 0x226288u: goto label_226288;
        case 0x22628cu: goto label_22628c;
        case 0x226290u: goto label_226290;
        case 0x226294u: goto label_226294;
        case 0x226298u: goto label_226298;
        case 0x22629cu: goto label_22629c;
        case 0x2262a0u: goto label_2262a0;
        case 0x2262a4u: goto label_2262a4;
        case 0x2262a8u: goto label_2262a8;
        case 0x2262acu: goto label_2262ac;
        case 0x2262b0u: goto label_2262b0;
        case 0x2262b4u: goto label_2262b4;
        case 0x2262b8u: goto label_2262b8;
        case 0x2262bcu: goto label_2262bc;
        case 0x2262c0u: goto label_2262c0;
        case 0x2262c4u: goto label_2262c4;
        case 0x2262c8u: goto label_2262c8;
        case 0x2262ccu: goto label_2262cc;
        case 0x2262d0u: goto label_2262d0;
        case 0x2262d4u: goto label_2262d4;
        case 0x2262d8u: goto label_2262d8;
        case 0x2262dcu: goto label_2262dc;
        case 0x2262e0u: goto label_2262e0;
        case 0x2262e4u: goto label_2262e4;
        case 0x2262e8u: goto label_2262e8;
        case 0x2262ecu: goto label_2262ec;
        case 0x2262f0u: goto label_2262f0;
        case 0x2262f4u: goto label_2262f4;
        case 0x2262f8u: goto label_2262f8;
        case 0x2262fcu: goto label_2262fc;
        case 0x226300u: goto label_226300;
        case 0x226304u: goto label_226304;
        case 0x226308u: goto label_226308;
        case 0x22630cu: goto label_22630c;
        case 0x226310u: goto label_226310;
        case 0x226314u: goto label_226314;
        case 0x226318u: goto label_226318;
        case 0x22631cu: goto label_22631c;
        case 0x226320u: goto label_226320;
        case 0x226324u: goto label_226324;
        case 0x226328u: goto label_226328;
        case 0x22632cu: goto label_22632c;
        case 0x226330u: goto label_226330;
        case 0x226334u: goto label_226334;
        case 0x226338u: goto label_226338;
        case 0x22633cu: goto label_22633c;
        case 0x226340u: goto label_226340;
        case 0x226344u: goto label_226344;
        case 0x226348u: goto label_226348;
        case 0x22634cu: goto label_22634c;
        case 0x226350u: goto label_226350;
        case 0x226354u: goto label_226354;
        case 0x226358u: goto label_226358;
        case 0x22635cu: goto label_22635c;
        case 0x226360u: goto label_226360;
        case 0x226364u: goto label_226364;
        case 0x226368u: goto label_226368;
        case 0x22636cu: goto label_22636c;
        case 0x226370u: goto label_226370;
        case 0x226374u: goto label_226374;
        case 0x226378u: goto label_226378;
        case 0x22637cu: goto label_22637c;
        case 0x226380u: goto label_226380;
        case 0x226384u: goto label_226384;
        case 0x226388u: goto label_226388;
        case 0x22638cu: goto label_22638c;
        case 0x226390u: goto label_226390;
        case 0x226394u: goto label_226394;
        case 0x226398u: goto label_226398;
        case 0x22639cu: goto label_22639c;
        case 0x2263a0u: goto label_2263a0;
        case 0x2263a4u: goto label_2263a4;
        case 0x2263a8u: goto label_2263a8;
        case 0x2263acu: goto label_2263ac;
        case 0x2263b0u: goto label_2263b0;
        case 0x2263b4u: goto label_2263b4;
        case 0x2263b8u: goto label_2263b8;
        case 0x2263bcu: goto label_2263bc;
        case 0x2263c0u: goto label_2263c0;
        case 0x2263c4u: goto label_2263c4;
        case 0x2263c8u: goto label_2263c8;
        case 0x2263ccu: goto label_2263cc;
        case 0x2263d0u: goto label_2263d0;
        case 0x2263d4u: goto label_2263d4;
        case 0x2263d8u: goto label_2263d8;
        case 0x2263dcu: goto label_2263dc;
        default: break;
    }

    ctx->pc = 0x225d30u;

label_225d30:
    // 0x225d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225d34:
    // 0x225d34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225d38:
    // 0x225d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_225d3c:
    // 0x225d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225d40:
    // 0x225d40: 0xc0895e4  jal         func_225790
label_225d44:
    if (ctx->pc == 0x225D44u) {
        ctx->pc = 0x225D44u;
            // 0x225d44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225D48u;
        goto label_225d48;
    }
    ctx->pc = 0x225D40u;
    SET_GPR_U32(ctx, 31, 0x225D48u);
    ctx->pc = 0x225D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225D40u;
            // 0x225d44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225790u;
    if (runtime->hasFunction(0x225790u)) {
        auto targetFn = runtime->lookupFunction(0x225790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D48u; }
        if (ctx->pc != 0x225D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225790_0x225790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D48u; }
        if (ctx->pc != 0x225D48u) { return; }
    }
    ctx->pc = 0x225D48u;
label_225d48:
    // 0x225d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x225d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_225d4c:
    // 0x225d4c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x225d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_225d50:
    // 0x225d50: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x225d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
label_225d54:
    // 0x225d54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x225d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_225d58:
    // 0x225d58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x225d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_225d5c:
    // 0x225d5c: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x225d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
label_225d60:
    // 0x225d60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225d64:
    // 0x225d64: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x225d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
label_225d68:
    // 0x225d68: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x225d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
label_225d6c:
    // 0x225d6c: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x225d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
label_225d70:
    // 0x225d70: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x225d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_225d74:
    // 0x225d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225d78:
    // 0x225d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_225d7c:
    // 0x225d7c: 0x3e00008  jr          $ra
label_225d80:
    if (ctx->pc == 0x225D80u) {
        ctx->pc = 0x225D80u;
            // 0x225d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x225D84u;
        goto label_225d84;
    }
    ctx->pc = 0x225D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225D7Cu;
            // 0x225d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225D84u;
label_225d84:
    // 0x225d84: 0x0  nop
    ctx->pc = 0x225d84u;
    // NOP
label_225d88:
    // 0x225d88: 0x0  nop
    ctx->pc = 0x225d88u;
    // NOP
label_225d8c:
    // 0x225d8c: 0x0  nop
    ctx->pc = 0x225d8cu;
    // NOP
label_225d90:
    // 0x225d90: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x225d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225d94:
    // 0x225d94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x225d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_225d98:
    // 0x225d98: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x225d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225d9c:
    // 0x225d9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x225d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_225da0:
    // 0x225da0: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x225da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225da4:
    // 0x225da4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x225da4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_225da8:
    // 0x225da8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x225da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_225dac:
    // 0x225dac: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x225dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_225db0:
    // 0x225db0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x225db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_225db4:
    // 0x225db4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x225db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_225db8:
    // 0x225db8: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x225db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_225dbc:
    // 0x225dbc: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x225dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_225dc0:
    // 0x225dc0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x225dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_225dc4:
    // 0x225dc4: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x225dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_225dc8:
    // 0x225dc8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x225dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_225dcc:
    // 0x225dcc: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x225dccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_225dd0:
    // 0x225dd0: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x225dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_225dd4:
    // 0x225dd4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x225dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_225dd8:
    // 0x225dd8: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x225dd8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[1];
label_225ddc:
    // 0x225ddc: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x225ddcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
label_225de0:
    // 0x225de0: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x225de0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_225de4:
    // 0x225de4: 0x0  nop
    ctx->pc = 0x225de4u;
    // NOP
label_225de8:
    // 0x225de8: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x225de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_225dec:
    // 0x225dec: 0x3e00008  jr          $ra
label_225df0:
    if (ctx->pc == 0x225DF0u) {
        ctx->pc = 0x225DF0u;
            // 0x225df0: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->pc = 0x225DF4u;
        goto label_225df4;
    }
    ctx->pc = 0x225DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225DECu;
            // 0x225df0: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225DF4u;
label_225df4:
    // 0x225df4: 0x0  nop
    ctx->pc = 0x225df4u;
    // NOP
label_225df8:
    // 0x225df8: 0x0  nop
    ctx->pc = 0x225df8u;
    // NOP
label_225dfc:
    // 0x225dfc: 0x0  nop
    ctx->pc = 0x225dfcu;
    // NOP
label_225e00:
    // 0x225e00: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x225e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225e04:
    // 0x225e04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x225e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_225e08:
    // 0x225e08: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x225e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_225e0c:
    // 0x225e0c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x225e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225e10:
    // 0x225e10: 0x460220c3  div.s       $f3, $f4, $f2
    ctx->pc = 0x225e10u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[2];
label_225e14:
    // 0x225e14: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x225e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225e18:
    // 0x225e18: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x225e18u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_225e1c:
    // 0x225e1c: 0x46012083  div.s       $f2, $f4, $f1
    ctx->pc = 0x225e1cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[1];
label_225e20:
    // 0x225e20: 0xc48100dc  lwc1        $f1, 0xDC($a0)
    ctx->pc = 0x225e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225e24:
    // 0x225e24: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x225e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_225e28:
    // 0x225e28: 0xe48300d4  swc1        $f3, 0xD4($a0)
    ctx->pc = 0x225e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_225e2c:
    // 0x225e2c: 0xe48200d8  swc1        $f2, 0xD8($a0)
    ctx->pc = 0x225e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_225e30:
    // 0x225e30: 0x3e00008  jr          $ra
label_225e34:
    if (ctx->pc == 0x225E34u) {
        ctx->pc = 0x225E34u;
            // 0x225e34: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->pc = 0x225E38u;
        goto label_225e38;
    }
    ctx->pc = 0x225E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225E30u;
            // 0x225e34: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225E38u;
label_225e38:
    // 0x225e38: 0x0  nop
    ctx->pc = 0x225e38u;
    // NOP
label_225e3c:
    // 0x225e3c: 0x0  nop
    ctx->pc = 0x225e3cu;
    // NOP
label_225e40:
    // 0x225e40: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x225e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225e44:
    // 0x225e44: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x225e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225e48:
    // 0x225e48: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x225e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225e4c:
    // 0x225e4c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x225e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_225e50:
    // 0x225e50: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x225e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_225e54:
    // 0x225e54: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x225e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_225e58:
    // 0x225e58: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x225e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_225e5c:
    // 0x225e5c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x225e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_225e60:
    // 0x225e60: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x225e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_225e64:
    // 0x225e64: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x225e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_225e68:
    // 0x225e68: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x225e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_225e6c:
    // 0x225e6c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x225e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_225e70:
    // 0x225e70: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x225e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_225e74:
    // 0x225e74: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x225e74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_225e78:
    // 0x225e78: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x225e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_225e7c:
    // 0x225e7c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x225e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_225e80:
    // 0x225e80: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x225e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_225e84:
    // 0x225e84: 0x3e00008  jr          $ra
label_225e88:
    if (ctx->pc == 0x225E88u) {
        ctx->pc = 0x225E88u;
            // 0x225e88: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->pc = 0x225E8Cu;
        goto label_225e8c;
    }
    ctx->pc = 0x225E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225E84u;
            // 0x225e88: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225E8Cu;
label_225e8c:
    // 0x225e8c: 0x0  nop
    ctx->pc = 0x225e8cu;
    // NOP
label_225e90:
    // 0x225e90: 0xc48300dc  lwc1        $f3, 0xDC($a0)
    ctx->pc = 0x225e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_225e94:
    // 0x225e94: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x225e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225e98:
    // 0x225e98: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x225e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225e9c:
    // 0x225e9c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x225e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225ea0:
    // 0x225ea0: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x225ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_225ea4:
    // 0x225ea4: 0xe48100d4  swc1        $f1, 0xD4($a0)
    ctx->pc = 0x225ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_225ea8:
    // 0x225ea8: 0xe48200d8  swc1        $f2, 0xD8($a0)
    ctx->pc = 0x225ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_225eac:
    // 0x225eac: 0x3e00008  jr          $ra
label_225eb0:
    if (ctx->pc == 0x225EB0u) {
        ctx->pc = 0x225EB0u;
            // 0x225eb0: 0xe48300dc  swc1        $f3, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->pc = 0x225EB4u;
        goto label_225eb4;
    }
    ctx->pc = 0x225EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225EACu;
            // 0x225eb0: 0xe48300dc  swc1        $f3, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225EB4u;
label_225eb4:
    // 0x225eb4: 0x0  nop
    ctx->pc = 0x225eb4u;
    // NOP
label_225eb8:
    // 0x225eb8: 0x0  nop
    ctx->pc = 0x225eb8u;
    // NOP
label_225ebc:
    // 0x225ebc: 0x0  nop
    ctx->pc = 0x225ebcu;
    // NOP
label_225ec0:
    // 0x225ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_225ec4:
    // 0x225ec4: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x225ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_225ec8:
    // 0x225ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225ecc:
    // 0x225ecc: 0xc48300d0  lwc1        $f3, 0xD0($a0)
    ctx->pc = 0x225eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_225ed0:
    // 0x225ed0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x225ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225ed4:
    // 0x225ed4: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x225ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225ed8:
    // 0x225ed8: 0xc48100d8  lwc1        $f1, 0xD8($a0)
    ctx->pc = 0x225ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225edc:
    // 0x225edc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x225edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_225ee0:
    // 0x225ee0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x225ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_225ee4:
    // 0x225ee4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x225ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225ee8:
    // 0x225ee8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x225ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_225eec:
    // 0x225eec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x225eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_225ef0:
    // 0x225ef0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x225ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225ef4:
    // 0x225ef4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x225ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_225ef8:
    // 0x225ef8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x225ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_225efc:
    // 0x225efc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x225efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f00:
    // 0x225f00: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x225f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_225f04:
    // 0x225f04: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x225f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_225f08:
    // 0x225f08: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x225f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f0c:
    // 0x225f0c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x225f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_225f10:
    // 0x225f10: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x225f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_225f14:
    // 0x225f14: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x225f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f18:
    // 0x225f18: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x225f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_225f1c:
    // 0x225f1c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x225f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_225f20:
    // 0x225f20: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x225f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f24:
    // 0x225f24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x225f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_225f28:
    // 0x225f28: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x225f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_225f2c:
    // 0x225f2c: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x225f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f30:
    // 0x225f30: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x225f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_225f34:
    // 0x225f34: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x225f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_225f38:
    // 0x225f38: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x225f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f3c:
    // 0x225f3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x225f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_225f40:
    // 0x225f40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x225f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_225f44:
    // 0x225f44: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x225f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f48:
    // 0x225f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x225f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_225f4c:
    // 0x225f4c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x225f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_225f50:
    // 0x225f50: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x225f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f54:
    // 0x225f54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x225f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_225f58:
    // 0x225f58: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x225f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_225f5c:
    // 0x225f5c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x225f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225f60:
    // 0x225f60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x225f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_225f64:
    // 0x225f64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225f68:
    // 0x225f68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x225f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_225f6c:
    // 0x225f6c: 0xc0a3348  jal         func_28CD20
label_225f70:
    if (ctx->pc == 0x225F70u) {
        ctx->pc = 0x225F70u;
            // 0x225f70: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x225F74u;
        goto label_225f74;
    }
    ctx->pc = 0x225F6Cu;
    SET_GPR_U32(ctx, 31, 0x225F74u);
    ctx->pc = 0x225F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225F6Cu;
            // 0x225f70: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CD20u;
    if (runtime->hasFunction(0x28CD20u)) {
        auto targetFn = runtime->lookupFunction(0x28CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F74u; }
        if (ctx->pc != 0x225F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CD20_0x28cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F74u; }
        if (ctx->pc != 0x225F74u) { return; }
    }
    ctx->pc = 0x225F74u;
label_225f74:
    // 0x225f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225f78:
    // 0x225f78: 0x3e00008  jr          $ra
label_225f7c:
    if (ctx->pc == 0x225F7Cu) {
        ctx->pc = 0x225F7Cu;
            // 0x225f7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x225F80u;
        goto label_225f80;
    }
    ctx->pc = 0x225F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F78u;
            // 0x225f7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225F80u;
label_225f80:
    // 0x225f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_225f84:
    // 0x225f84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_225f88:
    // 0x225f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225f8c:
    // 0x225f8c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x225f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_225f90:
    // 0x225f90: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x225f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225f94:
    // 0x225f94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x225f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225f98:
    // 0x225f98: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x225f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225f9c:
    // 0x225f9c: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x225f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225fa0:
    // 0x225fa0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x225fa0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_225fa4:
    // 0x225fa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x225fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_225fa8:
    // 0x225fa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225fac:
    // 0x225fac: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x225facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_225fb0:
    // 0x225fb0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x225fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_225fb4:
    // 0x225fb4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x225fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_225fb8:
    // 0x225fb8: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x225fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_225fbc:
    // 0x225fbc: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x225fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_225fc0:
    // 0x225fc0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x225fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_225fc4:
    // 0x225fc4: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x225fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_225fc8:
    // 0x225fc8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x225fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_225fcc:
    // 0x225fcc: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x225fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_225fd0:
    // 0x225fd0: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x225fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_225fd4:
    // 0x225fd4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x225fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_225fd8:
    // 0x225fd8: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x225fd8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[1];
label_225fdc:
    // 0x225fdc: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x225fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_225fe0:
    // 0x225fe0: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x225fe0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
label_225fe4:
    // 0x225fe4: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x225fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_225fe8:
    // 0x225fe8: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x225fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_225fec:
    // 0x225fec: 0xc0a343c  jal         func_28D0F0
label_225ff0:
    if (ctx->pc == 0x225FF0u) {
        ctx->pc = 0x225FF0u;
            // 0x225ff0: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x225FF4u;
        goto label_225ff4;
    }
    ctx->pc = 0x225FECu;
    SET_GPR_U32(ctx, 31, 0x225FF4u);
    ctx->pc = 0x225FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225FECu;
            // 0x225ff0: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D0F0u;
    if (runtime->hasFunction(0x28D0F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225FF4u; }
        if (ctx->pc != 0x225FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D0F0_0x28d0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225FF4u; }
        if (ctx->pc != 0x225FF4u) { return; }
    }
    ctx->pc = 0x225FF4u;
label_225ff4:
    // 0x225ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225ff8:
    // 0x225ff8: 0x3e00008  jr          $ra
label_225ffc:
    if (ctx->pc == 0x225FFCu) {
        ctx->pc = 0x225FFCu;
            // 0x225ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x226000u;
        goto label_226000;
    }
    ctx->pc = 0x225FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225FF8u;
            // 0x225ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226000u;
label_226000:
    // 0x226000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_226004:
    // 0x226004: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x226004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_226008:
    // 0x226008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22600c:
    // 0x22600c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226010:
    // 0x226010: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x226010u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_226014:
    // 0x226014: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x226014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226018:
    // 0x226018: 0x0  nop
    ctx->pc = 0x226018u;
    // NOP
label_22601c:
    // 0x22601c: 0x0  nop
    ctx->pc = 0x22601cu;
    // NOP
label_226020:
    // 0x226020: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x226020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_226024:
    // 0x226024: 0x320f809  jalr        $t9
label_226028:
    if (ctx->pc == 0x226028u) {
        ctx->pc = 0x22602Cu;
        goto label_22602c;
    }
    ctx->pc = 0x226024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22602Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22602Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22602Cu; }
            if (ctx->pc != 0x22602Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22602Cu;
label_22602c:
    // 0x22602c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226030:
    // 0x226030: 0x3e00008  jr          $ra
label_226034:
    if (ctx->pc == 0x226034u) {
        ctx->pc = 0x226034u;
            // 0x226034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x226038u;
        goto label_226038;
    }
    ctx->pc = 0x226030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226030u;
            // 0x226034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226038u;
label_226038:
    // 0x226038: 0x0  nop
    ctx->pc = 0x226038u;
    // NOP
label_22603c:
    // 0x22603c: 0x0  nop
    ctx->pc = 0x22603cu;
    // NOP
label_226040:
    // 0x226040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226044:
    // 0x226044: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x226044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226048:
    // 0x226048: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x226048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_22604c:
    // 0x22604c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22604cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_226050:
    // 0x226050: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x226050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_226054:
    // 0x226054: 0xc48300dc  lwc1        $f3, 0xDC($a0)
    ctx->pc = 0x226054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_226058:
    // 0x226058: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x226058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22605c:
    // 0x22605c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22605cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226060:
    // 0x226060: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_226064:
    // 0x226064: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x226064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_226068:
    // 0x226068: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x226068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22606c:
    // 0x22606c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x22606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226070:
    // 0x226070: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226070u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226074:
    // 0x226074: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_226078:
    // 0x226078: 0xe48100e4  swc1        $f1, 0xE4($a0)
    ctx->pc = 0x226078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_22607c:
    // 0x22607c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x22607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226080:
    // 0x226080: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x226080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226084:
    // 0x226084: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226084u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226088:
    // 0x226088: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_22608c:
    // 0x22608c: 0xe48100e8  swc1        $f1, 0xE8($a0)
    ctx->pc = 0x22608cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_226090:
    // 0x226090: 0xc48100ec  lwc1        $f1, 0xEC($a0)
    ctx->pc = 0x226090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226094:
    // 0x226094: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x226094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226098:
    // 0x226098: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226098u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22609c:
    // 0x22609c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x22609cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2260a0:
    // 0x2260a0: 0xe48100ec  swc1        $f1, 0xEC($a0)
    ctx->pc = 0x2260a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_2260a4:
    // 0x2260a4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2260a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2260a8:
    // 0x2260a8: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x2260a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2260ac:
    // 0x2260ac: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2260acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2260b0:
    // 0x2260b0: 0xc4840064  lwc1        $f4, 0x64($a0)
    ctx->pc = 0x2260b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2260b4:
    // 0x2260b4: 0x460119c1  sub.s       $f7, $f3, $f1
    ctx->pc = 0x2260b4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2260b8:
    // 0x2260b8: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x2260b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2260bc:
    // 0x2260bc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2260bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2260c0:
    // 0x2260c0: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x2260c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2260c4:
    // 0x2260c4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2260c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2260c8:
    // 0x2260c8: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x2260c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2260cc:
    // 0x2260cc: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x2260ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2260d0:
    // 0x2260d0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2260d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2260d4:
    // 0x2260d4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2260d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2260d8:
    // 0x2260d8: 0xc48d0010  lwc1        $f13, 0x10($a0)
    ctx->pc = 0x2260d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2260dc:
    // 0x2260dc: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x2260dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2260e0:
    // 0x2260e0: 0x4603241d  msub.s      $f16, $f4, $f3
    ctx->pc = 0x2260e0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_2260e4:
    // 0x2260e4: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x2260e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2260e8:
    // 0x2260e8: 0x4602399d  msub.s      $f6, $f7, $f2
    ctx->pc = 0x2260e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_2260ec:
    // 0x2260ec: 0x4603381a  mula.s      $f7, $f3
    ctx->pc = 0x2260ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_2260f0:
    // 0x2260f0: 0x46012bdd  msub.s      $f15, $f5, $f1
    ctx->pc = 0x2260f0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_2260f4:
    // 0x2260f4: 0x460c301a  mula.s      $f6, $f12
    ctx->pc = 0x2260f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
label_2260f8:
    // 0x2260f8: 0xc48e0018  lwc1        $f14, 0x18($a0)
    ctx->pc = 0x2260f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2260fc:
    // 0x2260fc: 0x460d801e  madda.s     $f16, $f13
    ctx->pc = 0x2260fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[13]));
label_226100:
    // 0x226100: 0xc48a0024  lwc1        $f10, 0x24($a0)
    ctx->pc = 0x226100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_226104:
    // 0x226104: 0x460e795c  madd.s      $f5, $f15, $f14
    ctx->pc = 0x226104u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[14]));
label_226108:
    // 0x226108: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x226108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22610c:
    // 0x22610c: 0x460a301a  mula.s      $f6, $f10
    ctx->pc = 0x22610cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
label_226110:
    // 0x226110: 0xc48b0028  lwc1        $f11, 0x28($a0)
    ctx->pc = 0x226110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_226114:
    // 0x226114: 0x4604801e  madda.s     $f16, $f4
    ctx->pc = 0x226114u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[4]));
label_226118:
    // 0x226118: 0xc4870034  lwc1        $f7, 0x34($a0)
    ctx->pc = 0x226118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_22611c:
    // 0x22611c: 0x460b78dc  madd.s      $f3, $f15, $f11
    ctx->pc = 0x22611cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_226120:
    // 0x226120: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x226120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226124:
    // 0x226124: 0x4607301a  mula.s      $f6, $f7
    ctx->pc = 0x226124u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_226128:
    // 0x226128: 0xc4880030  lwc1        $f8, 0x30($a0)
    ctx->pc = 0x226128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_22612c:
    // 0x22612c: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x22612cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_226130:
    // 0x226130: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x226130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226134:
    // 0x226134: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x226134u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_226138:
    // 0x226138: 0xc4890038  lwc1        $f9, 0x38($a0)
    ctx->pc = 0x226138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_22613c:
    // 0x22613c: 0x46030942  mul.s       $f5, $f1, $f3
    ctx->pc = 0x22613cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_226140:
    // 0x226140: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x226140u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_226144:
    // 0x226144: 0x4608801e  madda.s     $f16, $f8
    ctx->pc = 0x226144u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[8]));
label_226148:
    // 0x226148: 0x460978dc  madd.s      $f3, $f15, $f9
    ctx->pc = 0x226148u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[9]));
label_22614c:
    // 0x22614c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x22614cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_226150:
    // 0x226150: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x226150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_226154:
    // 0x226154: 0xc48100f0  lwc1        $f1, 0xF0($a0)
    ctx->pc = 0x226154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226158:
    // 0x226158: 0x460d301e  madda.s     $f6, $f13
    ctx->pc = 0x226158u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[13]));
label_22615c:
    // 0x22615c: 0x46031102  mul.s       $f4, $f2, $f3
    ctx->pc = 0x22615cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_226160:
    // 0x226160: 0x4608209c  madd.s      $f2, $f4, $f8
    ctx->pc = 0x226160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
label_226164:
    // 0x226164: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x226164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_226168:
    // 0x226168: 0xe48100f0  swc1        $f1, 0xF0($a0)
    ctx->pc = 0x226168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_22616c:
    // 0x22616c: 0x460a281a  mula.s      $f5, $f10
    ctx->pc = 0x22616cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
label_226170:
    // 0x226170: 0xc48100f4  lwc1        $f1, 0xF4($a0)
    ctx->pc = 0x226170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226174:
    // 0x226174: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x226174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_226178:
    // 0x226178: 0x460c301e  madda.s     $f6, $f12
    ctx->pc = 0x226178u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[12]));
label_22617c:
    // 0x22617c: 0x460720dc  madd.s      $f3, $f4, $f7
    ctx->pc = 0x22617cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
label_226180:
    // 0x226180: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x226180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_226184:
    // 0x226184: 0xe48100f4  swc1        $f1, 0xF4($a0)
    ctx->pc = 0x226184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_226188:
    // 0x226188: 0x460b281a  mula.s      $f5, $f11
    ctx->pc = 0x226188u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
label_22618c:
    // 0x22618c: 0xc48100f8  lwc1        $f1, 0xF8($a0)
    ctx->pc = 0x22618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226190:
    // 0x226190: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x226190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_226194:
    // 0x226194: 0x460e301e  madda.s     $f6, $f14
    ctx->pc = 0x226194u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[14]));
label_226198:
    // 0x226198: 0x4609209c  madd.s      $f2, $f4, $f9
    ctx->pc = 0x226198u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[9]));
label_22619c:
    // 0x22619c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22619cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2261a0:
    // 0x2261a0: 0xe48100f8  swc1        $f1, 0xF8($a0)
    ctx->pc = 0x2261a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_2261a4:
    // 0x2261a4: 0xc48100fc  lwc1        $f1, 0xFC($a0)
    ctx->pc = 0x2261a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2261a8:
    // 0x2261a8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2261a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2261ac:
    // 0x2261ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2261acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2261b0:
    // 0x2261b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2261b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2261b4:
    // 0x2261b4: 0xe48000fc  swc1        $f0, 0xFC($a0)
    ctx->pc = 0x2261b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
label_2261b8:
    // 0x2261b8: 0x3e00008  jr          $ra
label_2261bc:
    if (ctx->pc == 0x2261BCu) {
        ctx->pc = 0x2261BCu;
            // 0x2261bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2261C0u;
        goto label_2261c0;
    }
    ctx->pc = 0x2261B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2261BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2261B8u;
            // 0x2261bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2261C0u;
label_2261c0:
    // 0x2261c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2261c4:
    // 0x2261c4: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2261c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2261c8:
    // 0x2261c8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2261c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2261cc:
    // 0x2261cc: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x2261ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2261d0:
    // 0x2261d0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2261d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2261d4:
    // 0x2261d4: 0xc4b00000  lwc1        $f16, 0x0($a1)
    ctx->pc = 0x2261d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_2261d8:
    // 0x2261d8: 0xc48d0010  lwc1        $f13, 0x10($a0)
    ctx->pc = 0x2261d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2261dc:
    // 0x2261dc: 0x460c281a  mula.s      $f5, $f12
    ctx->pc = 0x2261dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
label_2261e0:
    // 0x2261e0: 0xc4af0008  lwc1        $f15, 0x8($a1)
    ctx->pc = 0x2261e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2261e4:
    // 0x2261e4: 0xc48e0018  lwc1        $f14, 0x18($a0)
    ctx->pc = 0x2261e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2261e8:
    // 0x2261e8: 0x460d801e  madda.s     $f16, $f13
    ctx->pc = 0x2261e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[13]));
label_2261ec:
    // 0x2261ec: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x2261ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2261f0:
    // 0x2261f0: 0x460e791c  madd.s      $f4, $f15, $f14
    ctx->pc = 0x2261f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[14]));
label_2261f4:
    // 0x2261f4: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2261f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2261f8:
    // 0x2261f8: 0x4609281a  mula.s      $f5, $f9
    ctx->pc = 0x2261f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_2261fc:
    // 0x2261fc: 0xc48a0028  lwc1        $f10, 0x28($a0)
    ctx->pc = 0x2261fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_226200:
    // 0x226200: 0x4603801e  madda.s     $f16, $f3
    ctx->pc = 0x226200u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[3]));
label_226204:
    // 0x226204: 0xc4860034  lwc1        $f6, 0x34($a0)
    ctx->pc = 0x226204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_226208:
    // 0x226208: 0x460a789c  madd.s      $f2, $f15, $f10
    ctx->pc = 0x226208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[10]));
label_22620c:
    // 0x22620c: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x22620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226210:
    // 0x226210: 0x4606281a  mula.s      $f5, $f6
    ctx->pc = 0x226210u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_226214:
    // 0x226214: 0xc4870030  lwc1        $f7, 0x30($a0)
    ctx->pc = 0x226214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_226218:
    // 0x226218: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x226218u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_22621c:
    // 0x22621c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x22621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226220:
    // 0x226220: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x226220u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_226224:
    // 0x226224: 0xc4880038  lwc1        $f8, 0x38($a0)
    ctx->pc = 0x226224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_226228:
    // 0x226228: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x226228u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22622c:
    // 0x22622c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x22622cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_226230:
    // 0x226230: 0x4607801e  madda.s     $f16, $f7
    ctx->pc = 0x226230u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[7]));
label_226234:
    // 0x226234: 0x4608789c  madd.s      $f2, $f15, $f8
    ctx->pc = 0x226234u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[8]));
label_226238:
    // 0x226238: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x226238u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_22623c:
    // 0x22623c: 0xc48100d8  lwc1        $f1, 0xD8($a0)
    ctx->pc = 0x22623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226240:
    // 0x226240: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x226240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226244:
    // 0x226244: 0x460d281e  madda.s     $f5, $f13
    ctx->pc = 0x226244u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[13]));
label_226248:
    // 0x226248: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x226248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22624c:
    // 0x22624c: 0x4607185c  madd.s      $f1, $f3, $f7
    ctx->pc = 0x22624cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
label_226250:
    // 0x226250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_226254:
    // 0x226254: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x226254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_226258:
    // 0x226258: 0x4609201a  mula.s      $f4, $f9
    ctx->pc = 0x226258u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_22625c:
    // 0x22625c: 0xc48000f4  lwc1        $f0, 0xF4($a0)
    ctx->pc = 0x22625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226260:
    // 0x226260: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x226260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_226264:
    // 0x226264: 0x460c281e  madda.s     $f5, $f12
    ctx->pc = 0x226264u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[12]));
label_226268:
    // 0x226268: 0x4606189c  madd.s      $f2, $f3, $f6
    ctx->pc = 0x226268u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_22626c:
    // 0x22626c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22626cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_226270:
    // 0x226270: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x226270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_226274:
    // 0x226274: 0x460a201a  mula.s      $f4, $f10
    ctx->pc = 0x226274u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
label_226278:
    // 0x226278: 0xc48000f8  lwc1        $f0, 0xF8($a0)
    ctx->pc = 0x226278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22627c:
    // 0x22627c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22627cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_226280:
    // 0x226280: 0x460e281e  madda.s     $f5, $f14
    ctx->pc = 0x226280u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[14]));
label_226284:
    // 0x226284: 0x4608185c  madd.s      $f1, $f3, $f8
    ctx->pc = 0x226284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_226288:
    // 0x226288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22628c:
    // 0x22628c: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x22628cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_226290:
    // 0x226290: 0xc48000fc  lwc1        $f0, 0xFC($a0)
    ctx->pc = 0x226290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226294:
    // 0x226294: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x226294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_226298:
    // 0x226298: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x226298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22629c:
    // 0x22629c: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x22629cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
label_2262a0:
    // 0x2262a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2262a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2262a4:
    // 0x2262a4: 0xe48000fc  swc1        $f0, 0xFC($a0)
    ctx->pc = 0x2262a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
label_2262a8:
    // 0x2262a8: 0x3e00008  jr          $ra
label_2262ac:
    if (ctx->pc == 0x2262ACu) {
        ctx->pc = 0x2262ACu;
            // 0x2262ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2262B0u;
        goto label_2262b0;
    }
    ctx->pc = 0x2262A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2262ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2262A8u;
            // 0x2262ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2262B0u;
label_2262b0:
    // 0x2262b0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2262b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2262b4:
    // 0x2262b4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2262b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2262b8:
    // 0x2262b8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2262b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2262bc:
    // 0x2262bc: 0x46016142  mul.s       $f5, $f12, $f1
    ctx->pc = 0x2262bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_2262c0:
    // 0x2262c0: 0x46026182  mul.s       $f6, $f12, $f2
    ctx->pc = 0x2262c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_2262c4:
    // 0x2262c4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2262c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2262c8:
    // 0x2262c8: 0x46006102  mul.s       $f4, $f12, $f0
    ctx->pc = 0x2262c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2262cc:
    // 0x2262cc: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x2262ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_2262d0:
    // 0x2262d0: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x2262d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2262d4:
    // 0x2262d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2262d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2262d8:
    // 0x2262d8: 0xc48300dc  lwc1        $f3, 0xDC($a0)
    ctx->pc = 0x2262d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2262dc:
    // 0x2262dc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2262dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2262e0:
    // 0x2262e0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2262e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2262e4:
    // 0x2262e4: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x2262e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_2262e8:
    // 0x2262e8: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x2262e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2262ec:
    // 0x2262ec: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2262ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2262f0:
    // 0x2262f0: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x2262f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_2262f4:
    // 0x2262f4: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x2262f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_2262f8:
    // 0x2262f8: 0xc48000e8  lwc1        $f0, 0xE8($a0)
    ctx->pc = 0x2262f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2262fc:
    // 0x2262fc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2262fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_226300:
    // 0x226300: 0x4605181c  madd.s      $f0, $f3, $f5
    ctx->pc = 0x226300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_226304:
    // 0x226304: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x226304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_226308:
    // 0x226308: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x226308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22630c:
    // 0x22630c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x22630cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_226310:
    // 0x226310: 0x4604181c  madd.s      $f0, $f3, $f4
    ctx->pc = 0x226310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_226314:
    // 0x226314: 0x3e00008  jr          $ra
label_226318:
    if (ctx->pc == 0x226318u) {
        ctx->pc = 0x226318u;
            // 0x226318: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->pc = 0x22631Cu;
        goto label_22631c;
    }
    ctx->pc = 0x226314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226314u;
            // 0x226318: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22631Cu;
label_22631c:
    // 0x22631c: 0x0  nop
    ctx->pc = 0x22631cu;
    // NOP
label_226320:
    // 0x226320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226324:
    // 0x226324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226328:
    // 0x226328: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x226328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22632c:
    // 0x22632c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x22632cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226330:
    // 0x226330: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x226330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_226334:
    // 0x226334: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x226334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226338:
    // 0x226338: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_22633c:
    // 0x22633c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_226340:
    // 0x226340: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x226340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226344:
    // 0x226344: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226348:
    // 0x226348: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x226348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_22634c:
    // 0x22634c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x22634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226350:
    // 0x226350: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226354:
    // 0x226354: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x226354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_226358:
    // 0x226358: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22635c:
    // 0x22635c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x22635cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_226360:
    // 0x226360: 0x320f809  jalr        $t9
label_226364:
    if (ctx->pc == 0x226364u) {
        ctx->pc = 0x226364u;
            // 0x226364: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x226368u;
        goto label_226368;
    }
    ctx->pc = 0x226360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x226368u);
        ctx->pc = 0x226364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226360u;
            // 0x226364: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x226368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x226368u; }
            if (ctx->pc != 0x226368u) { return; }
        }
        }
    }
    ctx->pc = 0x226368u;
label_226368:
    // 0x226368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22636c:
    // 0x22636c: 0x3e00008  jr          $ra
label_226370:
    if (ctx->pc == 0x226370u) {
        ctx->pc = 0x226370u;
            // 0x226370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x226374u;
        goto label_226374;
    }
    ctx->pc = 0x22636Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22636Cu;
            // 0x226370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226374u;
label_226374:
    // 0x226374: 0x0  nop
    ctx->pc = 0x226374u;
    // NOP
label_226378:
    // 0x226378: 0x0  nop
    ctx->pc = 0x226378u;
    // NOP
label_22637c:
    // 0x22637c: 0x0  nop
    ctx->pc = 0x22637cu;
    // NOP
label_226380:
    // 0x226380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226384:
    // 0x226384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226388:
    // 0x226388: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x226388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22638c:
    // 0x22638c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x22638cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_226390:
    // 0x226390: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x226390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_226394:
    // 0x226394: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x226394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226398:
    // 0x226398: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x226398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_22639c:
    // 0x22639c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2263a0:
    // 0x2263a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2263a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2263a4:
    // 0x2263a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2263a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2263a8:
    // 0x2263a8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2263a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2263ac:
    // 0x2263ac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2263acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2263b0:
    // 0x2263b0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2263b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2263b4:
    // 0x2263b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2263b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2263b8:
    // 0x2263b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2263b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2263bc:
    // 0x2263bc: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2263bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2263c0:
    // 0x2263c0: 0x320f809  jalr        $t9
label_2263c4:
    if (ctx->pc == 0x2263C4u) {
        ctx->pc = 0x2263C4u;
            // 0x2263c4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2263C8u;
        goto label_2263c8;
    }
    ctx->pc = 0x2263C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2263C8u);
        ctx->pc = 0x2263C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2263C0u;
            // 0x2263c4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2263C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2263C8u; }
            if (ctx->pc != 0x2263C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2263C8u;
label_2263c8:
    // 0x2263c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2263c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2263cc:
    // 0x2263cc: 0x3e00008  jr          $ra
label_2263d0:
    if (ctx->pc == 0x2263D0u) {
        ctx->pc = 0x2263D0u;
            // 0x2263d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2263D4u;
        goto label_2263d4;
    }
    ctx->pc = 0x2263CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2263D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2263CCu;
            // 0x2263d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2263D4u;
label_2263d4:
    // 0x2263d4: 0x0  nop
    ctx->pc = 0x2263d4u;
    // NOP
label_2263d8:
    // 0x2263d8: 0x0  nop
    ctx->pc = 0x2263d8u;
    // NOP
label_2263dc:
    // 0x2263dc: 0x0  nop
    ctx->pc = 0x2263dcu;
    // NOP
}
