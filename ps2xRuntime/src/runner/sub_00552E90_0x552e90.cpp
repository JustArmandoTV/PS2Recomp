#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00552E90
// Address: 0x552e90 - 0x553510
void sub_00552E90_0x552e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00552E90_0x552e90");
#endif

    switch (ctx->pc) {
        case 0x552e90u: goto label_552e90;
        case 0x552e94u: goto label_552e94;
        case 0x552e98u: goto label_552e98;
        case 0x552e9cu: goto label_552e9c;
        case 0x552ea0u: goto label_552ea0;
        case 0x552ea4u: goto label_552ea4;
        case 0x552ea8u: goto label_552ea8;
        case 0x552eacu: goto label_552eac;
        case 0x552eb0u: goto label_552eb0;
        case 0x552eb4u: goto label_552eb4;
        case 0x552eb8u: goto label_552eb8;
        case 0x552ebcu: goto label_552ebc;
        case 0x552ec0u: goto label_552ec0;
        case 0x552ec4u: goto label_552ec4;
        case 0x552ec8u: goto label_552ec8;
        case 0x552eccu: goto label_552ecc;
        case 0x552ed0u: goto label_552ed0;
        case 0x552ed4u: goto label_552ed4;
        case 0x552ed8u: goto label_552ed8;
        case 0x552edcu: goto label_552edc;
        case 0x552ee0u: goto label_552ee0;
        case 0x552ee4u: goto label_552ee4;
        case 0x552ee8u: goto label_552ee8;
        case 0x552eecu: goto label_552eec;
        case 0x552ef0u: goto label_552ef0;
        case 0x552ef4u: goto label_552ef4;
        case 0x552ef8u: goto label_552ef8;
        case 0x552efcu: goto label_552efc;
        case 0x552f00u: goto label_552f00;
        case 0x552f04u: goto label_552f04;
        case 0x552f08u: goto label_552f08;
        case 0x552f0cu: goto label_552f0c;
        case 0x552f10u: goto label_552f10;
        case 0x552f14u: goto label_552f14;
        case 0x552f18u: goto label_552f18;
        case 0x552f1cu: goto label_552f1c;
        case 0x552f20u: goto label_552f20;
        case 0x552f24u: goto label_552f24;
        case 0x552f28u: goto label_552f28;
        case 0x552f2cu: goto label_552f2c;
        case 0x552f30u: goto label_552f30;
        case 0x552f34u: goto label_552f34;
        case 0x552f38u: goto label_552f38;
        case 0x552f3cu: goto label_552f3c;
        case 0x552f40u: goto label_552f40;
        case 0x552f44u: goto label_552f44;
        case 0x552f48u: goto label_552f48;
        case 0x552f4cu: goto label_552f4c;
        case 0x552f50u: goto label_552f50;
        case 0x552f54u: goto label_552f54;
        case 0x552f58u: goto label_552f58;
        case 0x552f5cu: goto label_552f5c;
        case 0x552f60u: goto label_552f60;
        case 0x552f64u: goto label_552f64;
        case 0x552f68u: goto label_552f68;
        case 0x552f6cu: goto label_552f6c;
        case 0x552f70u: goto label_552f70;
        case 0x552f74u: goto label_552f74;
        case 0x552f78u: goto label_552f78;
        case 0x552f7cu: goto label_552f7c;
        case 0x552f80u: goto label_552f80;
        case 0x552f84u: goto label_552f84;
        case 0x552f88u: goto label_552f88;
        case 0x552f8cu: goto label_552f8c;
        case 0x552f90u: goto label_552f90;
        case 0x552f94u: goto label_552f94;
        case 0x552f98u: goto label_552f98;
        case 0x552f9cu: goto label_552f9c;
        case 0x552fa0u: goto label_552fa0;
        case 0x552fa4u: goto label_552fa4;
        case 0x552fa8u: goto label_552fa8;
        case 0x552facu: goto label_552fac;
        case 0x552fb0u: goto label_552fb0;
        case 0x552fb4u: goto label_552fb4;
        case 0x552fb8u: goto label_552fb8;
        case 0x552fbcu: goto label_552fbc;
        case 0x552fc0u: goto label_552fc0;
        case 0x552fc4u: goto label_552fc4;
        case 0x552fc8u: goto label_552fc8;
        case 0x552fccu: goto label_552fcc;
        case 0x552fd0u: goto label_552fd0;
        case 0x552fd4u: goto label_552fd4;
        case 0x552fd8u: goto label_552fd8;
        case 0x552fdcu: goto label_552fdc;
        case 0x552fe0u: goto label_552fe0;
        case 0x552fe4u: goto label_552fe4;
        case 0x552fe8u: goto label_552fe8;
        case 0x552fecu: goto label_552fec;
        case 0x552ff0u: goto label_552ff0;
        case 0x552ff4u: goto label_552ff4;
        case 0x552ff8u: goto label_552ff8;
        case 0x552ffcu: goto label_552ffc;
        case 0x553000u: goto label_553000;
        case 0x553004u: goto label_553004;
        case 0x553008u: goto label_553008;
        case 0x55300cu: goto label_55300c;
        case 0x553010u: goto label_553010;
        case 0x553014u: goto label_553014;
        case 0x553018u: goto label_553018;
        case 0x55301cu: goto label_55301c;
        case 0x553020u: goto label_553020;
        case 0x553024u: goto label_553024;
        case 0x553028u: goto label_553028;
        case 0x55302cu: goto label_55302c;
        case 0x553030u: goto label_553030;
        case 0x553034u: goto label_553034;
        case 0x553038u: goto label_553038;
        case 0x55303cu: goto label_55303c;
        case 0x553040u: goto label_553040;
        case 0x553044u: goto label_553044;
        case 0x553048u: goto label_553048;
        case 0x55304cu: goto label_55304c;
        case 0x553050u: goto label_553050;
        case 0x553054u: goto label_553054;
        case 0x553058u: goto label_553058;
        case 0x55305cu: goto label_55305c;
        case 0x553060u: goto label_553060;
        case 0x553064u: goto label_553064;
        case 0x553068u: goto label_553068;
        case 0x55306cu: goto label_55306c;
        case 0x553070u: goto label_553070;
        case 0x553074u: goto label_553074;
        case 0x553078u: goto label_553078;
        case 0x55307cu: goto label_55307c;
        case 0x553080u: goto label_553080;
        case 0x553084u: goto label_553084;
        case 0x553088u: goto label_553088;
        case 0x55308cu: goto label_55308c;
        case 0x553090u: goto label_553090;
        case 0x553094u: goto label_553094;
        case 0x553098u: goto label_553098;
        case 0x55309cu: goto label_55309c;
        case 0x5530a0u: goto label_5530a0;
        case 0x5530a4u: goto label_5530a4;
        case 0x5530a8u: goto label_5530a8;
        case 0x5530acu: goto label_5530ac;
        case 0x5530b0u: goto label_5530b0;
        case 0x5530b4u: goto label_5530b4;
        case 0x5530b8u: goto label_5530b8;
        case 0x5530bcu: goto label_5530bc;
        case 0x5530c0u: goto label_5530c0;
        case 0x5530c4u: goto label_5530c4;
        case 0x5530c8u: goto label_5530c8;
        case 0x5530ccu: goto label_5530cc;
        case 0x5530d0u: goto label_5530d0;
        case 0x5530d4u: goto label_5530d4;
        case 0x5530d8u: goto label_5530d8;
        case 0x5530dcu: goto label_5530dc;
        case 0x5530e0u: goto label_5530e0;
        case 0x5530e4u: goto label_5530e4;
        case 0x5530e8u: goto label_5530e8;
        case 0x5530ecu: goto label_5530ec;
        case 0x5530f0u: goto label_5530f0;
        case 0x5530f4u: goto label_5530f4;
        case 0x5530f8u: goto label_5530f8;
        case 0x5530fcu: goto label_5530fc;
        case 0x553100u: goto label_553100;
        case 0x553104u: goto label_553104;
        case 0x553108u: goto label_553108;
        case 0x55310cu: goto label_55310c;
        case 0x553110u: goto label_553110;
        case 0x553114u: goto label_553114;
        case 0x553118u: goto label_553118;
        case 0x55311cu: goto label_55311c;
        case 0x553120u: goto label_553120;
        case 0x553124u: goto label_553124;
        case 0x553128u: goto label_553128;
        case 0x55312cu: goto label_55312c;
        case 0x553130u: goto label_553130;
        case 0x553134u: goto label_553134;
        case 0x553138u: goto label_553138;
        case 0x55313cu: goto label_55313c;
        case 0x553140u: goto label_553140;
        case 0x553144u: goto label_553144;
        case 0x553148u: goto label_553148;
        case 0x55314cu: goto label_55314c;
        case 0x553150u: goto label_553150;
        case 0x553154u: goto label_553154;
        case 0x553158u: goto label_553158;
        case 0x55315cu: goto label_55315c;
        case 0x553160u: goto label_553160;
        case 0x553164u: goto label_553164;
        case 0x553168u: goto label_553168;
        case 0x55316cu: goto label_55316c;
        case 0x553170u: goto label_553170;
        case 0x553174u: goto label_553174;
        case 0x553178u: goto label_553178;
        case 0x55317cu: goto label_55317c;
        case 0x553180u: goto label_553180;
        case 0x553184u: goto label_553184;
        case 0x553188u: goto label_553188;
        case 0x55318cu: goto label_55318c;
        case 0x553190u: goto label_553190;
        case 0x553194u: goto label_553194;
        case 0x553198u: goto label_553198;
        case 0x55319cu: goto label_55319c;
        case 0x5531a0u: goto label_5531a0;
        case 0x5531a4u: goto label_5531a4;
        case 0x5531a8u: goto label_5531a8;
        case 0x5531acu: goto label_5531ac;
        case 0x5531b0u: goto label_5531b0;
        case 0x5531b4u: goto label_5531b4;
        case 0x5531b8u: goto label_5531b8;
        case 0x5531bcu: goto label_5531bc;
        case 0x5531c0u: goto label_5531c0;
        case 0x5531c4u: goto label_5531c4;
        case 0x5531c8u: goto label_5531c8;
        case 0x5531ccu: goto label_5531cc;
        case 0x5531d0u: goto label_5531d0;
        case 0x5531d4u: goto label_5531d4;
        case 0x5531d8u: goto label_5531d8;
        case 0x5531dcu: goto label_5531dc;
        case 0x5531e0u: goto label_5531e0;
        case 0x5531e4u: goto label_5531e4;
        case 0x5531e8u: goto label_5531e8;
        case 0x5531ecu: goto label_5531ec;
        case 0x5531f0u: goto label_5531f0;
        case 0x5531f4u: goto label_5531f4;
        case 0x5531f8u: goto label_5531f8;
        case 0x5531fcu: goto label_5531fc;
        case 0x553200u: goto label_553200;
        case 0x553204u: goto label_553204;
        case 0x553208u: goto label_553208;
        case 0x55320cu: goto label_55320c;
        case 0x553210u: goto label_553210;
        case 0x553214u: goto label_553214;
        case 0x553218u: goto label_553218;
        case 0x55321cu: goto label_55321c;
        case 0x553220u: goto label_553220;
        case 0x553224u: goto label_553224;
        case 0x553228u: goto label_553228;
        case 0x55322cu: goto label_55322c;
        case 0x553230u: goto label_553230;
        case 0x553234u: goto label_553234;
        case 0x553238u: goto label_553238;
        case 0x55323cu: goto label_55323c;
        case 0x553240u: goto label_553240;
        case 0x553244u: goto label_553244;
        case 0x553248u: goto label_553248;
        case 0x55324cu: goto label_55324c;
        case 0x553250u: goto label_553250;
        case 0x553254u: goto label_553254;
        case 0x553258u: goto label_553258;
        case 0x55325cu: goto label_55325c;
        case 0x553260u: goto label_553260;
        case 0x553264u: goto label_553264;
        case 0x553268u: goto label_553268;
        case 0x55326cu: goto label_55326c;
        case 0x553270u: goto label_553270;
        case 0x553274u: goto label_553274;
        case 0x553278u: goto label_553278;
        case 0x55327cu: goto label_55327c;
        case 0x553280u: goto label_553280;
        case 0x553284u: goto label_553284;
        case 0x553288u: goto label_553288;
        case 0x55328cu: goto label_55328c;
        case 0x553290u: goto label_553290;
        case 0x553294u: goto label_553294;
        case 0x553298u: goto label_553298;
        case 0x55329cu: goto label_55329c;
        case 0x5532a0u: goto label_5532a0;
        case 0x5532a4u: goto label_5532a4;
        case 0x5532a8u: goto label_5532a8;
        case 0x5532acu: goto label_5532ac;
        case 0x5532b0u: goto label_5532b0;
        case 0x5532b4u: goto label_5532b4;
        case 0x5532b8u: goto label_5532b8;
        case 0x5532bcu: goto label_5532bc;
        case 0x5532c0u: goto label_5532c0;
        case 0x5532c4u: goto label_5532c4;
        case 0x5532c8u: goto label_5532c8;
        case 0x5532ccu: goto label_5532cc;
        case 0x5532d0u: goto label_5532d0;
        case 0x5532d4u: goto label_5532d4;
        case 0x5532d8u: goto label_5532d8;
        case 0x5532dcu: goto label_5532dc;
        case 0x5532e0u: goto label_5532e0;
        case 0x5532e4u: goto label_5532e4;
        case 0x5532e8u: goto label_5532e8;
        case 0x5532ecu: goto label_5532ec;
        case 0x5532f0u: goto label_5532f0;
        case 0x5532f4u: goto label_5532f4;
        case 0x5532f8u: goto label_5532f8;
        case 0x5532fcu: goto label_5532fc;
        case 0x553300u: goto label_553300;
        case 0x553304u: goto label_553304;
        case 0x553308u: goto label_553308;
        case 0x55330cu: goto label_55330c;
        case 0x553310u: goto label_553310;
        case 0x553314u: goto label_553314;
        case 0x553318u: goto label_553318;
        case 0x55331cu: goto label_55331c;
        case 0x553320u: goto label_553320;
        case 0x553324u: goto label_553324;
        case 0x553328u: goto label_553328;
        case 0x55332cu: goto label_55332c;
        case 0x553330u: goto label_553330;
        case 0x553334u: goto label_553334;
        case 0x553338u: goto label_553338;
        case 0x55333cu: goto label_55333c;
        case 0x553340u: goto label_553340;
        case 0x553344u: goto label_553344;
        case 0x553348u: goto label_553348;
        case 0x55334cu: goto label_55334c;
        case 0x553350u: goto label_553350;
        case 0x553354u: goto label_553354;
        case 0x553358u: goto label_553358;
        case 0x55335cu: goto label_55335c;
        case 0x553360u: goto label_553360;
        case 0x553364u: goto label_553364;
        case 0x553368u: goto label_553368;
        case 0x55336cu: goto label_55336c;
        case 0x553370u: goto label_553370;
        case 0x553374u: goto label_553374;
        case 0x553378u: goto label_553378;
        case 0x55337cu: goto label_55337c;
        case 0x553380u: goto label_553380;
        case 0x553384u: goto label_553384;
        case 0x553388u: goto label_553388;
        case 0x55338cu: goto label_55338c;
        case 0x553390u: goto label_553390;
        case 0x553394u: goto label_553394;
        case 0x553398u: goto label_553398;
        case 0x55339cu: goto label_55339c;
        case 0x5533a0u: goto label_5533a0;
        case 0x5533a4u: goto label_5533a4;
        case 0x5533a8u: goto label_5533a8;
        case 0x5533acu: goto label_5533ac;
        case 0x5533b0u: goto label_5533b0;
        case 0x5533b4u: goto label_5533b4;
        case 0x5533b8u: goto label_5533b8;
        case 0x5533bcu: goto label_5533bc;
        case 0x5533c0u: goto label_5533c0;
        case 0x5533c4u: goto label_5533c4;
        case 0x5533c8u: goto label_5533c8;
        case 0x5533ccu: goto label_5533cc;
        case 0x5533d0u: goto label_5533d0;
        case 0x5533d4u: goto label_5533d4;
        case 0x5533d8u: goto label_5533d8;
        case 0x5533dcu: goto label_5533dc;
        case 0x5533e0u: goto label_5533e0;
        case 0x5533e4u: goto label_5533e4;
        case 0x5533e8u: goto label_5533e8;
        case 0x5533ecu: goto label_5533ec;
        case 0x5533f0u: goto label_5533f0;
        case 0x5533f4u: goto label_5533f4;
        case 0x5533f8u: goto label_5533f8;
        case 0x5533fcu: goto label_5533fc;
        case 0x553400u: goto label_553400;
        case 0x553404u: goto label_553404;
        case 0x553408u: goto label_553408;
        case 0x55340cu: goto label_55340c;
        case 0x553410u: goto label_553410;
        case 0x553414u: goto label_553414;
        case 0x553418u: goto label_553418;
        case 0x55341cu: goto label_55341c;
        case 0x553420u: goto label_553420;
        case 0x553424u: goto label_553424;
        case 0x553428u: goto label_553428;
        case 0x55342cu: goto label_55342c;
        case 0x553430u: goto label_553430;
        case 0x553434u: goto label_553434;
        case 0x553438u: goto label_553438;
        case 0x55343cu: goto label_55343c;
        case 0x553440u: goto label_553440;
        case 0x553444u: goto label_553444;
        case 0x553448u: goto label_553448;
        case 0x55344cu: goto label_55344c;
        case 0x553450u: goto label_553450;
        case 0x553454u: goto label_553454;
        case 0x553458u: goto label_553458;
        case 0x55345cu: goto label_55345c;
        case 0x553460u: goto label_553460;
        case 0x553464u: goto label_553464;
        case 0x553468u: goto label_553468;
        case 0x55346cu: goto label_55346c;
        case 0x553470u: goto label_553470;
        case 0x553474u: goto label_553474;
        case 0x553478u: goto label_553478;
        case 0x55347cu: goto label_55347c;
        case 0x553480u: goto label_553480;
        case 0x553484u: goto label_553484;
        case 0x553488u: goto label_553488;
        case 0x55348cu: goto label_55348c;
        case 0x553490u: goto label_553490;
        case 0x553494u: goto label_553494;
        case 0x553498u: goto label_553498;
        case 0x55349cu: goto label_55349c;
        case 0x5534a0u: goto label_5534a0;
        case 0x5534a4u: goto label_5534a4;
        case 0x5534a8u: goto label_5534a8;
        case 0x5534acu: goto label_5534ac;
        case 0x5534b0u: goto label_5534b0;
        case 0x5534b4u: goto label_5534b4;
        case 0x5534b8u: goto label_5534b8;
        case 0x5534bcu: goto label_5534bc;
        case 0x5534c0u: goto label_5534c0;
        case 0x5534c4u: goto label_5534c4;
        case 0x5534c8u: goto label_5534c8;
        case 0x5534ccu: goto label_5534cc;
        case 0x5534d0u: goto label_5534d0;
        case 0x5534d4u: goto label_5534d4;
        case 0x5534d8u: goto label_5534d8;
        case 0x5534dcu: goto label_5534dc;
        case 0x5534e0u: goto label_5534e0;
        case 0x5534e4u: goto label_5534e4;
        case 0x5534e8u: goto label_5534e8;
        case 0x5534ecu: goto label_5534ec;
        case 0x5534f0u: goto label_5534f0;
        case 0x5534f4u: goto label_5534f4;
        case 0x5534f8u: goto label_5534f8;
        case 0x5534fcu: goto label_5534fc;
        case 0x553500u: goto label_553500;
        case 0x553504u: goto label_553504;
        case 0x553508u: goto label_553508;
        case 0x55350cu: goto label_55350c;
        default: break;
    }

    ctx->pc = 0x552e90u;

label_552e90:
    // 0x552e90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x552e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_552e94:
    // 0x552e94: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x552e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_552e98:
    // 0x552e98: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x552e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_552e9c:
    // 0x552e9c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x552e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_552ea0:
    // 0x552ea0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x552ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_552ea4:
    // 0x552ea4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x552ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_552ea8:
    // 0x552ea8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x552ea8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_552eac:
    // 0x552eac: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x552eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_552eb0:
    // 0x552eb0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x552eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_552eb4:
    // 0x552eb4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x552eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_552eb8:
    // 0x552eb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x552eb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_552ebc:
    // 0x552ebc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x552ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_552ec0:
    // 0x552ec0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x552ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_552ec4:
    // 0x552ec4: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x552ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_552ec8:
    // 0x552ec8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x552ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_552ecc:
    // 0x552ecc: 0x2673e080  addiu       $s3, $s3, -0x1F80
    ctx->pc = 0x552eccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959232));
label_552ed0:
    // 0x552ed0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x552ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_552ed4:
    // 0x552ed4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x552ed4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_552ed8:
    // 0x552ed8: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x552ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
label_552edc:
    // 0x552edc: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x552edcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_552ee0:
    // 0x552ee0: 0x2610d960  addiu       $s0, $s0, -0x26A0
    ctx->pc = 0x552ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957408));
label_552ee4:
    // 0x552ee4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x552ee4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_552ee8:
    // 0x552ee8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x552ee8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_552eec:
    // 0x552eec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x552eecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_552ef0:
    // 0x552ef0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x552ef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_552ef4:
    // 0x552ef4: 0x9472dc28  lhu         $s2, -0x23D8($v1)
    ctx->pc = 0x552ef4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958120)));
label_552ef8:
    // 0x552ef8: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x552ef8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_552efc:
    // 0x552efc: 0x9451dc2a  lhu         $s1, -0x23D6($v0)
    ctx->pc = 0x552efcu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958122)));
label_552f00:
    // 0x552f00: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x552f00u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_552f04:
    // 0x552f04: 0x90840082  lbu         $a0, 0x82($a0)
    ctx->pc = 0x552f04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
label_552f08:
    // 0x552f08: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x552f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_552f0c:
    // 0x552f0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x552f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_552f10:
    // 0x552f10: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x552f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_552f14:
    // 0x552f14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x552f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_552f18:
    // 0x552f18: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x552f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_552f1c:
    // 0x552f1c: 0x288100c8  slti        $at, $a0, 0xC8
    ctx->pc = 0x552f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)200) ? 1 : 0);
label_552f20:
    // 0x552f20: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_552f24:
    if (ctx->pc == 0x552F24u) {
        ctx->pc = 0x552F24u;
            // 0x552f24: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x552F28u;
        goto label_552f28;
    }
    ctx->pc = 0x552F20u;
    {
        const bool branch_taken_0x552f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x552F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552F20u;
            // 0x552f24: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552f20) {
            ctx->pc = 0x552F34u;
            goto label_552f34;
        }
    }
    ctx->pc = 0x552F28u;
label_552f28:
    // 0x552f28: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x552f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_552f2c:
    // 0x552f2c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x552f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_552f30:
    // 0x552f30: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x552f30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552f34:
    // 0x552f34: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x552f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_552f38:
    // 0x552f38: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x552f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_552f3c:
    // 0x552f3c: 0xc0506ac  jal         func_141AB0
label_552f40:
    if (ctx->pc == 0x552F40u) {
        ctx->pc = 0x552F40u;
            // 0x552f40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x552F44u;
        goto label_552f44;
    }
    ctx->pc = 0x552F3Cu;
    SET_GPR_U32(ctx, 31, 0x552F44u);
    ctx->pc = 0x552F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552F3Cu;
            // 0x552f40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552F44u; }
        if (ctx->pc != 0x552F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552F44u; }
        if (ctx->pc != 0x552F44u) { return; }
    }
    ctx->pc = 0x552F44u;
label_552f44:
    // 0x552f44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x552f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_552f48:
    // 0x552f48: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x552f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_552f4c:
    // 0x552f4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x552f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_552f50:
    // 0x552f50: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x552f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_552f54:
    // 0x552f54: 0x320f809  jalr        $t9
label_552f58:
    if (ctx->pc == 0x552F58u) {
        ctx->pc = 0x552F58u;
            // 0x552f58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x552F5Cu;
        goto label_552f5c;
    }
    ctx->pc = 0x552F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x552F5Cu);
        ctx->pc = 0x552F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552F54u;
            // 0x552f58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x552F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x552F5Cu; }
            if (ctx->pc != 0x552F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x552F5Cu;
label_552f5c:
    // 0x552f5c: 0x8604001c  lh          $a0, 0x1C($s0)
    ctx->pc = 0x552f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_552f60:
    // 0x552f60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x552f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_552f64:
    // 0x552f64: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x552f64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_552f68:
    // 0x552f68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x552f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_552f6c:
    // 0x552f6c: 0xc6740098  lwc1        $f20, 0x98($s3)
    ctx->pc = 0x552f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_552f70:
    // 0x552f70: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x552f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_552f74:
    // 0x552f74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x552f74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552f78:
    // 0x552f78: 0x0  nop
    ctx->pc = 0x552f78u;
    // NOP
label_552f7c:
    // 0x552f7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552f80:
    // 0x552f80: 0x4600bd40  add.s       $f21, $f23, $f0
    ctx->pc = 0x552f80u;
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_552f84:
    // 0x552f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552f88:
    // 0x552f88: 0x0  nop
    ctx->pc = 0x552f88u;
    // NOP
label_552f8c:
    // 0x552f8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552f90:
    // 0x552f90: 0x4600b018  adda.s      $f22, $f0
    ctx->pc = 0x552f90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_552f94:
    // 0x552f94: 0xc660009c  lwc1        $f0, 0x9C($s3)
    ctx->pc = 0x552f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_552f98:
    // 0x552f98: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x552f98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_552f9c:
    // 0x552f9c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_552fa0:
    if (ctx->pc == 0x552FA0u) {
        ctx->pc = 0x552FA0u;
            // 0x552fa0: 0x46000d9c  madd.s      $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x552FA4u;
        goto label_552fa4;
    }
    ctx->pc = 0x552F9Cu;
    {
        const bool branch_taken_0x552f9c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x552FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552F9Cu;
            // 0x552fa0: 0x46000d9c  madd.s      $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552f9c) {
            ctx->pc = 0x552FB0u;
            goto label_552fb0;
        }
    }
    ctx->pc = 0x552FA4u;
label_552fa4:
    // 0x552fa4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x552fa4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552fa8:
    // 0x552fa8: 0x10000008  b           . + 4 + (0x8 << 2)
label_552fac:
    if (ctx->pc == 0x552FACu) {
        ctx->pc = 0x552FACu;
            // 0x552fac: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552FB0u;
        goto label_552fb0;
    }
    ctx->pc = 0x552FA8u;
    {
        const bool branch_taken_0x552fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552FA8u;
            // 0x552fac: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552fa8) {
            ctx->pc = 0x552FCCu;
            goto label_552fcc;
        }
    }
    ctx->pc = 0x552FB0u;
label_552fb0:
    // 0x552fb0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x552fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_552fb4:
    // 0x552fb4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x552fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_552fb8:
    // 0x552fb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552fbc:
    // 0x552fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552fc0:
    // 0x552fc0: 0x0  nop
    ctx->pc = 0x552fc0u;
    // NOP
label_552fc4:
    // 0x552fc4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552fc8:
    // 0x552fc8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552fc8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552fcc:
    // 0x552fcc: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552fd0:
    if (ctx->pc == 0x552FD0u) {
        ctx->pc = 0x552FD0u;
            // 0x552fd0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x552FD4u;
        goto label_552fd4;
    }
    ctx->pc = 0x552FCCu;
    {
        const bool branch_taken_0x552fcc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552fcc) {
            ctx->pc = 0x552FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552FCCu;
            // 0x552fd0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552FE0u;
            goto label_552fe0;
        }
    }
    ctx->pc = 0x552FD4u;
label_552fd4:
    // 0x552fd4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552fd4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552fd8:
    // 0x552fd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_552fdc:
    if (ctx->pc == 0x552FDCu) {
        ctx->pc = 0x552FDCu;
            // 0x552fdc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552FE0u;
        goto label_552fe0;
    }
    ctx->pc = 0x552FD8u;
    {
        const bool branch_taken_0x552fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552FD8u;
            // 0x552fdc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552fd8) {
            ctx->pc = 0x552FF8u;
            goto label_552ff8;
        }
    }
    ctx->pc = 0x552FE0u;
label_552fe0:
    // 0x552fe0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_552fe4:
    // 0x552fe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552fe8:
    // 0x552fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552fec:
    // 0x552fec: 0x0  nop
    ctx->pc = 0x552fecu;
    // NOP
label_552ff0:
    // 0x552ff0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_552ff4:
    // 0x552ff4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x552ff4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_552ff8:
    // 0x552ff8: 0x4602b341  sub.s       $f13, $f22, $f2
    ctx->pc = 0x552ff8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
label_552ffc:
    // 0x552ffc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x552ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553000:
    // 0x553000: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553004:
    // 0x553004: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x553004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_553008:
    // 0x553008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x553008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55300c:
    // 0x55300c: 0x4602b3c0  add.s       $f15, $f22, $f2
    ctx->pc = 0x55300cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
label_553010:
    // 0x553010: 0x4614ab80  add.s       $f14, $f21, $f20
    ctx->pc = 0x553010u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_553014:
    // 0x553014: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x553014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553018:
    // 0x553018: 0xc0bc284  jal         func_2F0A10
label_55301c:
    if (ctx->pc == 0x55301Cu) {
        ctx->pc = 0x55301Cu;
            // 0x55301c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x553020u;
        goto label_553020;
    }
    ctx->pc = 0x553018u;
    SET_GPR_U32(ctx, 31, 0x553020u);
    ctx->pc = 0x55301Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553018u;
            // 0x55301c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553020u; }
        if (ctx->pc != 0x553020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553020u; }
        if (ctx->pc != 0x553020u) { return; }
    }
    ctx->pc = 0x553020u;
label_553020:
    // 0x553020: 0xc66000ec  lwc1        $f0, 0xEC($s3)
    ctx->pc = 0x553020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_553024:
    // 0x553024: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x553024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_553028:
    // 0x553028: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x553028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55302c:
    // 0x55302c: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x55302cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_553030:
    // 0x553030: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x553030u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_553034:
    // 0x553034: 0x266500e0  addiu       $a1, $s3, 0xE0
    ctx->pc = 0x553034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_553038:
    // 0x553038: 0xc66200e8  lwc1        $f2, 0xE8($s3)
    ctx->pc = 0x553038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55303c:
    // 0x55303c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_553040:
    if (ctx->pc == 0x553040u) {
        ctx->pc = 0x553040u;
            // 0x553040: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x553044u;
        goto label_553044;
    }
    ctx->pc = 0x55303Cu;
    {
        const bool branch_taken_0x55303c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x553040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55303Cu;
            // 0x553040: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55303c) {
            ctx->pc = 0x553050u;
            goto label_553050;
        }
    }
    ctx->pc = 0x553044u;
label_553044:
    // 0x553044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x553044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553048:
    // 0x553048: 0x10000008  b           . + 4 + (0x8 << 2)
label_55304c:
    if (ctx->pc == 0x55304Cu) {
        ctx->pc = 0x55304Cu;
            // 0x55304c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553050u;
        goto label_553050;
    }
    ctx->pc = 0x553048u;
    {
        const bool branch_taken_0x553048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553048u;
            // 0x55304c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553048) {
            ctx->pc = 0x55306Cu;
            goto label_55306c;
        }
    }
    ctx->pc = 0x553050u;
label_553050:
    // 0x553050: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x553050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_553054:
    // 0x553054: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x553054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_553058:
    // 0x553058: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55305c:
    // 0x55305c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55305cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553060:
    // 0x553060: 0x0  nop
    ctx->pc = 0x553060u;
    // NOP
label_553064:
    // 0x553064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553068:
    // 0x553068: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x553068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_55306c:
    // 0x55306c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_553070:
    if (ctx->pc == 0x553070u) {
        ctx->pc = 0x553070u;
            // 0x553070: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x553074u;
        goto label_553074;
    }
    ctx->pc = 0x55306Cu;
    {
        const bool branch_taken_0x55306c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x553070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55306Cu;
            // 0x553070: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55306c) {
            ctx->pc = 0x553080u;
            goto label_553080;
        }
    }
    ctx->pc = 0x553074u;
label_553074:
    // 0x553074: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x553074u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553078:
    // 0x553078: 0x10000008  b           . + 4 + (0x8 << 2)
label_55307c:
    if (ctx->pc == 0x55307Cu) {
        ctx->pc = 0x55307Cu;
            // 0x55307c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553080u;
        goto label_553080;
    }
    ctx->pc = 0x553078u;
    {
        const bool branch_taken_0x553078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553078u;
            // 0x55307c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553078) {
            ctx->pc = 0x55309Cu;
            goto label_55309c;
        }
    }
    ctx->pc = 0x553080u;
label_553080:
    // 0x553080: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x553080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_553084:
    // 0x553084: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x553084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_553088:
    // 0x553088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55308c:
    // 0x55308c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55308cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553090:
    // 0x553090: 0x0  nop
    ctx->pc = 0x553090u;
    // NOP
label_553094:
    // 0x553094: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553098:
    // 0x553098: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553098u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_55309c:
    // 0x55309c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5530a0:
    if (ctx->pc == 0x5530A0u) {
        ctx->pc = 0x5530A0u;
            // 0x5530a0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x5530A4u;
        goto label_5530a4;
    }
    ctx->pc = 0x55309Cu;
    {
        const bool branch_taken_0x55309c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x55309c) {
            ctx->pc = 0x5530A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55309Cu;
            // 0x5530a0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5530B0u;
            goto label_5530b0;
        }
    }
    ctx->pc = 0x5530A4u;
label_5530a4:
    // 0x5530a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5530a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5530a8:
    // 0x5530a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_5530ac:
    if (ctx->pc == 0x5530ACu) {
        ctx->pc = 0x5530ACu;
            // 0x5530ac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5530B0u;
        goto label_5530b0;
    }
    ctx->pc = 0x5530A8u;
    {
        const bool branch_taken_0x5530a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5530ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5530A8u;
            // 0x5530ac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5530a8) {
            ctx->pc = 0x5530C8u;
            goto label_5530c8;
        }
    }
    ctx->pc = 0x5530B0u;
label_5530b0:
    // 0x5530b0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5530b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5530b4:
    // 0x5530b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5530b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5530b8:
    // 0x5530b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5530b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5530bc:
    // 0x5530bc: 0x0  nop
    ctx->pc = 0x5530bcu;
    // NOP
label_5530c0:
    // 0x5530c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5530c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5530c4:
    // 0x5530c4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5530c4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5530c8:
    // 0x5530c8: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x5530c8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_5530cc:
    // 0x5530cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5530ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5530d0:
    // 0x5530d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5530d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5530d4:
    // 0x5530d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x5530d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_5530d8:
    // 0x5530d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5530d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5530dc:
    // 0x5530dc: 0x4601b341  sub.s       $f13, $f22, $f1
    ctx->pc = 0x5530dcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_5530e0:
    // 0x5530e0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5530e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5530e4:
    // 0x5530e4: 0xc0bc284  jal         func_2F0A10
label_5530e8:
    if (ctx->pc == 0x5530E8u) {
        ctx->pc = 0x5530E8u;
            // 0x5530e8: 0x4601b3c0  add.s       $f15, $f22, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->pc = 0x5530ECu;
        goto label_5530ec;
    }
    ctx->pc = 0x5530E4u;
    SET_GPR_U32(ctx, 31, 0x5530ECu);
    ctx->pc = 0x5530E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5530E4u;
            // 0x5530e8: 0x4601b3c0  add.s       $f15, $f22, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5530ECu; }
        if (ctx->pc != 0x5530ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5530ECu; }
        if (ctx->pc != 0x5530ECu) { return; }
    }
    ctx->pc = 0x5530ECu;
label_5530ec:
    // 0x5530ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5530ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5530f0:
    // 0x5530f0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5530f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5530f4:
    // 0x5530f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5530f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5530f8:
    // 0x5530f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5530f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5530fc:
    // 0x5530fc: 0x320f809  jalr        $t9
label_553100:
    if (ctx->pc == 0x553100u) {
        ctx->pc = 0x553104u;
        goto label_553104;
    }
    ctx->pc = 0x5530FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x553104u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x553104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x553104u; }
            if (ctx->pc != 0x553104u) { return; }
        }
        }
    }
    ctx->pc = 0x553104u;
label_553104:
    // 0x553104: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x553104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_553108:
    // 0x553108: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x553108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_55310c:
    // 0x55310c: 0x246398e0  addiu       $v1, $v1, -0x6720
    ctx->pc = 0x55310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940896));
label_553110:
    // 0x553110: 0x26960004  addiu       $s6, $s4, 0x4
    ctx->pc = 0x553110u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_553114:
    // 0x553114: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x553114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_553118:
    // 0x553118: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x553118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55311c:
    // 0x55311c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x55311cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_553120:
    // 0x553120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x553120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553124:
    // 0x553124: 0x24632114  addiu       $v1, $v1, 0x2114
    ctx->pc = 0x553124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8468));
label_553128:
    // 0x553128: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x553128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55312c:
    // 0x55312c: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x55312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_553130:
    // 0x553130: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x553130u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553134:
    // 0x553134: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x553134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_553138:
    // 0x553138: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x553138u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_55313c:
    // 0x55313c: 0x2463a2a0  addiu       $v1, $v1, -0x5D60
    ctx->pc = 0x55313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943392));
label_553140:
    // 0x553140: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x553140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_553144:
    // 0x553144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553148:
    // 0x553148: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x553148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_55314c:
    // 0x55314c: 0x2463211c  addiu       $v1, $v1, 0x211C
    ctx->pc = 0x55314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8476));
label_553150:
    // 0x553150: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x553150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_553154:
    // 0x553154: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x553154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_553158:
    // 0x553158: 0x2463a3e0  addiu       $v1, $v1, -0x5C20
    ctx->pc = 0x553158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943712));
label_55315c:
    // 0x55315c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x55315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_553160:
    // 0x553160: 0x4600bd00  add.s       $f20, $f23, $f0
    ctx->pc = 0x553160u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_553164:
    // 0x553164: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x553164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_553168:
    // 0x553168: 0x24632120  addiu       $v1, $v1, 0x2120
    ctx->pc = 0x553168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8480));
label_55316c:
    // 0x55316c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x55316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_553170:
    // 0x553170: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x553170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_553174:
    // 0x553174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553178:
    // 0x553178: 0x0  nop
    ctx->pc = 0x553178u;
    // NOP
label_55317c:
    // 0x55317c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x55317cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_553180:
    // 0x553180: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x553180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_553184:
    // 0x553184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x553184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_553188:
    // 0x553188: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
label_55318c:
    if (ctx->pc == 0x55318Cu) {
        ctx->pc = 0x553190u;
        goto label_553190;
    }
    ctx->pc = 0x553188u;
    {
        const bool branch_taken_0x553188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x553188) {
            ctx->pc = 0x553380u;
            goto label_553380;
        }
    }
    ctx->pc = 0x553190u;
label_553190:
    // 0x553190: 0xc078cf0  jal         func_1E33C0
label_553194:
    if (ctx->pc == 0x553194u) {
        ctx->pc = 0x553198u;
        goto label_553198;
    }
    ctx->pc = 0x553190u;
    SET_GPR_U32(ctx, 31, 0x553198u);
    ctx->pc = 0x1E33C0u;
    if (runtime->hasFunction(0x1E33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553198u; }
        if (ctx->pc != 0x553198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E33C0_0x1e33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553198u; }
        if (ctx->pc != 0x553198u) { return; }
    }
    ctx->pc = 0x553198u;
label_553198:
    // 0x553198: 0x26e3ffe8  addiu       $v1, $s7, -0x18
    ctx->pc = 0x553198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
label_55319c:
    // 0x55319c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x55319cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5531a0:
    // 0x5531a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5531a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5531a4:
    // 0x5531a4: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x5531a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_5531a8:
    // 0x5531a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5531a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5531ac:
    // 0x5531ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5531acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5531b0:
    // 0x5531b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5531b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5531b4:
    // 0x5531b4: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x5531b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_5531b8:
    // 0x5531b8: 0xc0506ac  jal         func_141AB0
label_5531bc:
    if (ctx->pc == 0x5531BCu) {
        ctx->pc = 0x5531BCu;
            // 0x5531bc: 0x4600b540  add.s       $f21, $f22, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x5531C0u;
        goto label_5531c0;
    }
    ctx->pc = 0x5531B8u;
    SET_GPR_U32(ctx, 31, 0x5531C0u);
    ctx->pc = 0x5531BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5531B8u;
            // 0x5531bc: 0x4600b540  add.s       $f21, $f22, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5531C0u; }
        if (ctx->pc != 0x5531C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5531C0u; }
        if (ctx->pc != 0x5531C0u) { return; }
    }
    ctx->pc = 0x5531C0u;
label_5531c0:
    // 0x5531c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5531c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5531c4:
    // 0x5531c4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5531c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5531c8:
    // 0x5531c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5531c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5531cc:
    // 0x5531cc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5531ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5531d0:
    // 0x5531d0: 0x320f809  jalr        $t9
label_5531d4:
    if (ctx->pc == 0x5531D4u) {
        ctx->pc = 0x5531D4u;
            // 0x5531d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5531D8u;
        goto label_5531d8;
    }
    ctx->pc = 0x5531D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5531D8u);
        ctx->pc = 0x5531D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5531D0u;
            // 0x5531d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5531D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5531D8u; }
            if (ctx->pc != 0x5531D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5531D8u;
label_5531d8:
    // 0x5531d8: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x5531d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_5531dc:
    // 0x5531dc: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x5531dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_5531e0:
    // 0x5531e0: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x5531e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_5531e4:
    // 0x5531e4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x5531e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_5531e8:
    // 0x5531e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x5531e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_5531ec:
    // 0x5531ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5531ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5531f0:
    // 0x5531f0: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x5531f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_5531f4:
    // 0x5531f4: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x5531f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_5531f8:
    // 0x5531f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x5531f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5531fc:
    // 0x5531fc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x5531fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_553200:
    // 0x553200: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x553200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_553204:
    // 0x553204: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x553204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_553208:
    // 0x553208: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x553208u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_55320c:
    // 0x55320c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x55320cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_553210:
    // 0x553210: 0x46031602  mul.s       $f24, $f2, $f3
    ctx->pc = 0x553210u;
    ctx->f[24] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_553214:
    // 0x553214: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x553214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_553218:
    // 0x553218: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55321c:
    // 0x55321c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x55321cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553220:
    // 0x553220: 0x0  nop
    ctx->pc = 0x553220u;
    // NOP
label_553224:
    // 0x553224: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553228:
    // 0x553228: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55322c:
    // 0x55322c: 0x46030dc2  mul.s       $f23, $f1, $f3
    ctx->pc = 0x55322cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_553230:
    // 0x553230: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553234:
    // 0x553234: 0x0  nop
    ctx->pc = 0x553234u;
    // NOP
label_553238:
    // 0x553238: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55323c:
    // 0x55323c: 0x4618a380  add.s       $f14, $f20, $f24
    ctx->pc = 0x55323cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
label_553240:
    // 0x553240: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x553240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553244:
    // 0x553244: 0xc0bc284  jal         func_2F0A10
label_553248:
    if (ctx->pc == 0x553248u) {
        ctx->pc = 0x553248u;
            // 0x553248: 0x4617abc0  add.s       $f15, $f21, $f23 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->pc = 0x55324Cu;
        goto label_55324c;
    }
    ctx->pc = 0x553244u;
    SET_GPR_U32(ctx, 31, 0x55324Cu);
    ctx->pc = 0x553248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553244u;
            // 0x553248: 0x4617abc0  add.s       $f15, $f21, $f23 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55324Cu; }
        if (ctx->pc != 0x55324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55324Cu; }
        if (ctx->pc != 0x55324Cu) { return; }
    }
    ctx->pc = 0x55324Cu;
label_55324c:
    // 0x55324c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_553250:
    // 0x553250: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x553250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_553254:
    // 0x553254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x553254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_553258:
    // 0x553258: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x553258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55325c:
    // 0x55325c: 0x320f809  jalr        $t9
label_553260:
    if (ctx->pc == 0x553260u) {
        ctx->pc = 0x553264u;
        goto label_553264;
    }
    ctx->pc = 0x55325Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x553264u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x553264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x553264u; }
            if (ctx->pc != 0x553264u) { return; }
        }
        }
    }
    ctx->pc = 0x553264u;
label_553264:
    // 0x553264: 0x4618a640  add.s       $f25, $f20, $f24
    ctx->pc = 0x553264u;
    ctx->f[25] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
label_553268:
    // 0x553268: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x553268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_55326c:
    // 0x55326c: 0x2a61000e  slti        $at, $s3, 0xE
    ctx->pc = 0x55326cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
label_553270:
    // 0x553270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x553270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553274:
    // 0x553274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x553274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_553278:
    // 0x553278: 0x0  nop
    ctx->pc = 0x553278u;
    // NOP
label_55327c:
    // 0x55327c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x55327cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_553280:
    // 0x553280: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_553284:
    if (ctx->pc == 0x553284u) {
        ctx->pc = 0x553284u;
            // 0x553284: 0x46170e1c  madd.s      $f24, $f1, $f23 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
        ctx->pc = 0x553288u;
        goto label_553288;
    }
    ctx->pc = 0x553280u;
    {
        const bool branch_taken_0x553280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x553284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553280u;
            // 0x553284: 0x46170e1c  madd.s      $f24, $f1, $f23 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553280) {
            ctx->pc = 0x5532B0u;
            goto label_5532b0;
        }
    }
    ctx->pc = 0x553288u;
label_553288:
    // 0x553288: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x553288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_55328c:
    // 0x55328c: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x55328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_553290:
    // 0x553290: 0xc0506ac  jal         func_141AB0
label_553294:
    if (ctx->pc == 0x553294u) {
        ctx->pc = 0x553294u;
            // 0x553294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x553298u;
        goto label_553298;
    }
    ctx->pc = 0x553290u;
    SET_GPR_U32(ctx, 31, 0x553298u);
    ctx->pc = 0x553294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553290u;
            // 0x553294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553298u; }
        if (ctx->pc != 0x553298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553298u; }
        if (ctx->pc != 0x553298u) { return; }
    }
    ctx->pc = 0x553298u;
label_553298:
    // 0x553298: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x553298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_55329c:
    // 0x55329c: 0x8fb40110  lw          $s4, 0x110($sp)
    ctx->pc = 0x55329cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_5532a0:
    // 0x5532a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x5532a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_5532a4:
    // 0x5532a4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x5532a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_5532a8:
    // 0x5532a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_5532ac:
    if (ctx->pc == 0x5532ACu) {
        ctx->pc = 0x5532ACu;
            // 0x5532ac: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5532B0u;
        goto label_5532b0;
    }
    ctx->pc = 0x5532A8u;
    {
        const bool branch_taken_0x5532a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5532ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5532A8u;
            // 0x5532ac: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5532a8) {
            ctx->pc = 0x5532D8u;
            goto label_5532d8;
        }
    }
    ctx->pc = 0x5532B0u;
label_5532b0:
    // 0x5532b0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x5532b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_5532b4:
    // 0x5532b4: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x5532b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_5532b8:
    // 0x5532b8: 0xc0506ac  jal         func_141AB0
label_5532bc:
    if (ctx->pc == 0x5532BCu) {
        ctx->pc = 0x5532BCu;
            // 0x5532bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5532C0u;
        goto label_5532c0;
    }
    ctx->pc = 0x5532B8u;
    SET_GPR_U32(ctx, 31, 0x5532C0u);
    ctx->pc = 0x5532BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5532B8u;
            // 0x5532bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5532C0u; }
        if (ctx->pc != 0x5532C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5532C0u; }
        if (ctx->pc != 0x5532C0u) { return; }
    }
    ctx->pc = 0x5532C0u;
label_5532c0:
    // 0x5532c0: 0x2662fff2  addiu       $v0, $s3, -0xE
    ctx->pc = 0x5532c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967282));
label_5532c4:
    // 0x5532c4: 0x8fb40100  lw          $s4, 0x100($sp)
    ctx->pc = 0x5532c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_5532c8:
    // 0x5532c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x5532c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_5532cc:
    // 0x5532cc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x5532ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_5532d0:
    // 0x5532d0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x5532d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5532d4:
    // 0x5532d4: 0x0  nop
    ctx->pc = 0x5532d4u;
    // NOP
label_5532d8:
    // 0x5532d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5532d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5532dc:
    // 0x5532dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5532dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5532e0:
    // 0x5532e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x5532e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5532e4:
    // 0x5532e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5532e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5532e8:
    // 0x5532e8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5532e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5532ec:
    // 0x5532ec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x5532ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5532f0:
    // 0x5532f0: 0xc6170008  lwc1        $f23, 0x8($s0)
    ctx->pc = 0x5532f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_5532f4:
    // 0x5532f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5532f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5532f8:
    // 0x5532f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5532f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5532fc:
    // 0x5532fc: 0x320f809  jalr        $t9
label_553300:
    if (ctx->pc == 0x553300u) {
        ctx->pc = 0x553300u;
            // 0x553300: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x553304u;
        goto label_553304;
    }
    ctx->pc = 0x5532FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x553304u);
        ctx->pc = 0x553300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5532FCu;
            // 0x553300: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x553304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x553304u; }
            if (ctx->pc != 0x553304u) { return; }
        }
        }
    }
    ctx->pc = 0x553304u;
label_553304:
    // 0x553304: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x553304u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_553308:
    // 0x553308: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55330c:
    // 0x55330c: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x55330cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_553310:
    // 0x553310: 0x4617cb80  add.s       $f14, $f25, $f23
    ctx->pc = 0x553310u;
    ctx->f[14] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
label_553314:
    // 0x553314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x553314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_553318:
    // 0x553318: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55331c:
    // 0x55331c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x55331cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_553320:
    // 0x553320: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x553320u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553324:
    // 0x553324: 0x0  nop
    ctx->pc = 0x553324u;
    // NOP
label_553328:
    // 0x553328: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55332c:
    // 0x55332c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55332cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553330:
    // 0x553330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553334:
    // 0x553334: 0x0  nop
    ctx->pc = 0x553334u;
    // NOP
label_553338:
    // 0x553338: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55333c:
    // 0x55333c: 0x4615c341  sub.s       $f13, $f24, $f21
    ctx->pc = 0x55333cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
label_553340:
    // 0x553340: 0x4615c3c0  add.s       $f15, $f24, $f21
    ctx->pc = 0x553340u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_553344:
    // 0x553344: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x553344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553348:
    // 0x553348: 0xc0bc284  jal         func_2F0A10
label_55334c:
    if (ctx->pc == 0x55334Cu) {
        ctx->pc = 0x55334Cu;
            // 0x55334c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->pc = 0x553350u;
        goto label_553350;
    }
    ctx->pc = 0x553348u;
    SET_GPR_U32(ctx, 31, 0x553350u);
    ctx->pc = 0x55334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553348u;
            // 0x55334c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553350u; }
        if (ctx->pc != 0x553350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553350u; }
        if (ctx->pc != 0x553350u) { return; }
    }
    ctx->pc = 0x553350u;
label_553350:
    // 0x553350: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x553350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_553354:
    // 0x553354: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x553354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_553358:
    // 0x553358: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x553358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55335c:
    // 0x55335c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55335cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_553360:
    // 0x553360: 0x320f809  jalr        $t9
label_553364:
    if (ctx->pc == 0x553364u) {
        ctx->pc = 0x553368u;
        goto label_553368;
    }
    ctx->pc = 0x553360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x553368u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x553368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x553368u; }
            if (ctx->pc != 0x553368u) { return; }
        }
        }
    }
    ctx->pc = 0x553368u;
label_553368:
    // 0x553368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x553368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_55336c:
    // 0x55336c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x55336cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_553370:
    // 0x553370: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x553370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_553374:
    // 0x553374: 0x1460ff82  bnez        $v1, . + 4 + (-0x7E << 2)
label_553378:
    if (ctx->pc == 0x553378u) {
        ctx->pc = 0x553378u;
            // 0x553378: 0x26f70018  addiu       $s7, $s7, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
        ctx->pc = 0x55337Cu;
        goto label_55337c;
    }
    ctx->pc = 0x553374u;
    {
        const bool branch_taken_0x553374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x553378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553374u;
            // 0x553378: 0x26f70018  addiu       $s7, $s7, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553374) {
            ctx->pc = 0x553180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_553180;
        }
    }
    ctx->pc = 0x55337Cu;
label_55337c:
    // 0x55337c: 0x0  nop
    ctx->pc = 0x55337cu;
    // NOP
label_553380:
    // 0x553380: 0x56400050  bnel        $s2, $zero, . + 4 + (0x50 << 2)
label_553384:
    if (ctx->pc == 0x553384u) {
        ctx->pc = 0x553384u;
            // 0x553384: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x553388u;
        goto label_553388;
    }
    ctx->pc = 0x553380u;
    {
        const bool branch_taken_0x553380 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x553380) {
            ctx->pc = 0x553384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553380u;
            // 0x553384: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5534C4u;
            goto label_5534c4;
        }
    }
    ctx->pc = 0x553388u;
label_553388:
    // 0x553388: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x553388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_55338c:
    // 0x55338c: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x55338cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_553390:
    // 0x553390: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x553390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_553394:
    // 0x553394: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x553394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_553398:
    // 0x553398: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x553398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_55339c:
    // 0x55339c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5533a0:
    // 0x5533a0: 0x9451dc30  lhu         $s1, -0x23D0($v0)
    ctx->pc = 0x5533a0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958128)));
label_5533a4:
    // 0x5533a4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x5533a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5533a8:
    // 0x5533a8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5533a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5533ac:
    // 0x5533ac: 0x8c640134  lw          $a0, 0x134($v1)
    ctx->pc = 0x5533acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_5533b0:
    // 0x5533b0: 0x9450dc32  lhu         $s0, -0x23CE($v0)
    ctx->pc = 0x5533b0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958130)));
label_5533b4:
    // 0x5533b4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x5533b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_5533b8:
    // 0x5533b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5533b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5533bc:
    // 0x5533bc: 0x0  nop
    ctx->pc = 0x5533bcu;
    // NOP
label_5533c0:
    // 0x5533c0: 0x4601b0c0  add.s       $f3, $f22, $f1
    ctx->pc = 0x5533c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_5533c4:
    // 0x5533c4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x5533c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_5533c8:
    // 0x5533c8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x5533c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_5533cc:
    // 0x5533cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5533ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5533d0:
    // 0x5533d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5533d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5533d4:
    // 0x5533d4: 0x0  nop
    ctx->pc = 0x5533d4u;
    // NOP
label_5533d8:
    // 0x5533d8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x5533d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5533dc:
    // 0x5533dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5533dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5533e0:
    // 0x5533e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5533e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5533e4:
    // 0x5533e4: 0x0  nop
    ctx->pc = 0x5533e4u;
    // NOP
label_5533e8:
    // 0x5533e8: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x5533e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_5533ec:
    // 0x5533ec: 0xc0506ac  jal         func_141AB0
label_5533f0:
    if (ctx->pc == 0x5533F0u) {
        ctx->pc = 0x5533F0u;
            // 0x5533f0: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x5533F4u;
        goto label_5533f4;
    }
    ctx->pc = 0x5533ECu;
    SET_GPR_U32(ctx, 31, 0x5533F4u);
    ctx->pc = 0x5533F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5533ECu;
            // 0x5533f0: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5533F4u; }
        if (ctx->pc != 0x5533F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5533F4u; }
        if (ctx->pc != 0x5533F4u) { return; }
    }
    ctx->pc = 0x5533F4u;
label_5533f4:
    // 0x5533f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5533f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5533f8:
    // 0x5533f8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5533f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5533fc:
    // 0x5533fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5533fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_553400:
    // 0x553400: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x553400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_553404:
    // 0x553404: 0x320f809  jalr        $t9
label_553408:
    if (ctx->pc == 0x553408u) {
        ctx->pc = 0x553408u;
            // 0x553408: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55340Cu;
        goto label_55340c;
    }
    ctx->pc = 0x553404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55340Cu);
        ctx->pc = 0x553408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553404u;
            // 0x553408: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55340Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55340Cu; }
            if (ctx->pc != 0x55340Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55340Cu;
label_55340c:
    // 0x55340c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x55340cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_553410:
    // 0x553410: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x553410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_553414:
    // 0x553414: 0x24a5e410  addiu       $a1, $a1, -0x1BF0
    ctx->pc = 0x553414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960144));
label_553418:
    // 0x553418: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x553418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55341c:
    // 0x55341c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x55341cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_553420:
    // 0x553420: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x553420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_553424:
    // 0x553424: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_553428:
    if (ctx->pc == 0x553428u) {
        ctx->pc = 0x553428u;
            // 0x553428: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x55342Cu;
        goto label_55342c;
    }
    ctx->pc = 0x553424u;
    {
        const bool branch_taken_0x553424 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x553428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553424u;
            // 0x553428: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553424) {
            ctx->pc = 0x553438u;
            goto label_553438;
        }
    }
    ctx->pc = 0x55342Cu;
label_55342c:
    // 0x55342c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55342cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553430:
    // 0x553430: 0x10000008  b           . + 4 + (0x8 << 2)
label_553434:
    if (ctx->pc == 0x553434u) {
        ctx->pc = 0x553434u;
            // 0x553434: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553438u;
        goto label_553438;
    }
    ctx->pc = 0x553430u;
    {
        const bool branch_taken_0x553430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553430u;
            // 0x553434: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553430) {
            ctx->pc = 0x553454u;
            goto label_553454;
        }
    }
    ctx->pc = 0x553438u;
label_553438:
    // 0x553438: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x553438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_55343c:
    // 0x55343c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_553440:
    // 0x553440: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553444:
    // 0x553444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553448:
    // 0x553448: 0x0  nop
    ctx->pc = 0x553448u;
    // NOP
label_55344c:
    // 0x55344c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55344cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553450:
    // 0x553450: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553450u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553454:
    // 0x553454: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_553458:
    if (ctx->pc == 0x553458u) {
        ctx->pc = 0x553458u;
            // 0x553458: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x55345Cu;
        goto label_55345c;
    }
    ctx->pc = 0x553454u;
    {
        const bool branch_taken_0x553454 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x553454) {
            ctx->pc = 0x553458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553454u;
            // 0x553458: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553468u;
            goto label_553468;
        }
    }
    ctx->pc = 0x55345Cu;
label_55345c:
    // 0x55345c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x55345cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553460:
    // 0x553460: 0x10000007  b           . + 4 + (0x7 << 2)
label_553464:
    if (ctx->pc == 0x553464u) {
        ctx->pc = 0x553464u;
            // 0x553464: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553468u;
        goto label_553468;
    }
    ctx->pc = 0x553460u;
    {
        const bool branch_taken_0x553460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553460u;
            // 0x553464: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553460) {
            ctx->pc = 0x553480u;
            goto label_553480;
        }
    }
    ctx->pc = 0x553468u;
label_553468:
    // 0x553468: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x553468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_55346c:
    // 0x55346c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55346cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553470:
    // 0x553470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553474:
    // 0x553474: 0x0  nop
    ctx->pc = 0x553474u;
    // NOP
label_553478:
    // 0x553478: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55347c:
    // 0x55347c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x55347cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553480:
    // 0x553480: 0x4602a380  add.s       $f14, $f20, $f2
    ctx->pc = 0x553480u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_553484:
    // 0x553484: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553488:
    // 0x553488: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x553488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_55348c:
    // 0x55348c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553490:
    // 0x553490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x553490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553494:
    // 0x553494: 0x4601b341  sub.s       $f13, $f22, $f1
    ctx->pc = 0x553494u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_553498:
    // 0x553498: 0x4601b3c0  add.s       $f15, $f22, $f1
    ctx->pc = 0x553498u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_55349c:
    // 0x55349c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55349cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5534a0:
    // 0x5534a0: 0xc0bc284  jal         func_2F0A10
label_5534a4:
    if (ctx->pc == 0x5534A4u) {
        ctx->pc = 0x5534A4u;
            // 0x5534a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5534A8u;
        goto label_5534a8;
    }
    ctx->pc = 0x5534A0u;
    SET_GPR_U32(ctx, 31, 0x5534A8u);
    ctx->pc = 0x5534A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5534A0u;
            // 0x5534a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5534A8u; }
        if (ctx->pc != 0x5534A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5534A8u; }
        if (ctx->pc != 0x5534A8u) { return; }
    }
    ctx->pc = 0x5534A8u;
label_5534a8:
    // 0x5534a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5534a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5534ac:
    // 0x5534ac: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5534acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5534b0:
    // 0x5534b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5534b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5534b4:
    // 0x5534b4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5534b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5534b8:
    // 0x5534b8: 0x320f809  jalr        $t9
label_5534bc:
    if (ctx->pc == 0x5534BCu) {
        ctx->pc = 0x5534C0u;
        goto label_5534c0;
    }
    ctx->pc = 0x5534B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5534C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5534C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5534C0u; }
            if (ctx->pc != 0x5534C0u) { return; }
        }
        }
    }
    ctx->pc = 0x5534C0u;
label_5534c0:
    // 0x5534c0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x5534c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_5534c4:
    // 0x5534c4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x5534c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_5534c8:
    // 0x5534c8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x5534c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_5534cc:
    // 0x5534cc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x5534ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_5534d0:
    // 0x5534d0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x5534d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_5534d4:
    // 0x5534d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x5534d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_5534d8:
    // 0x5534d8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x5534d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5534dc:
    // 0x5534dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x5534dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_5534e0:
    // 0x5534e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x5534e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5534e4:
    // 0x5534e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5534e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5534e8:
    // 0x5534e8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x5534e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5534ec:
    // 0x5534ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5534ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5534f0:
    // 0x5534f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x5534f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5534f4:
    // 0x5534f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x5534f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5534f8:
    // 0x5534f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x5534f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5534fc:
    // 0x5534fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x5534fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_553500:
    // 0x553500: 0x3e00008  jr          $ra
label_553504:
    if (ctx->pc == 0x553504u) {
        ctx->pc = 0x553504u;
            // 0x553504: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x553508u;
        goto label_553508;
    }
    ctx->pc = 0x553500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x553504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553500u;
            // 0x553504: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x553508u;
label_553508:
    // 0x553508: 0x0  nop
    ctx->pc = 0x553508u;
    // NOP
label_55350c:
    // 0x55350c: 0x0  nop
    ctx->pc = 0x55350cu;
    // NOP
}
