#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207F40
// Address: 0x207f40 - 0x208490
void sub_00207F40_0x207f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207F40_0x207f40");
#endif

    switch (ctx->pc) {
        case 0x207f40u: goto label_207f40;
        case 0x207f44u: goto label_207f44;
        case 0x207f48u: goto label_207f48;
        case 0x207f4cu: goto label_207f4c;
        case 0x207f50u: goto label_207f50;
        case 0x207f54u: goto label_207f54;
        case 0x207f58u: goto label_207f58;
        case 0x207f5cu: goto label_207f5c;
        case 0x207f60u: goto label_207f60;
        case 0x207f64u: goto label_207f64;
        case 0x207f68u: goto label_207f68;
        case 0x207f6cu: goto label_207f6c;
        case 0x207f70u: goto label_207f70;
        case 0x207f74u: goto label_207f74;
        case 0x207f78u: goto label_207f78;
        case 0x207f7cu: goto label_207f7c;
        case 0x207f80u: goto label_207f80;
        case 0x207f84u: goto label_207f84;
        case 0x207f88u: goto label_207f88;
        case 0x207f8cu: goto label_207f8c;
        case 0x207f90u: goto label_207f90;
        case 0x207f94u: goto label_207f94;
        case 0x207f98u: goto label_207f98;
        case 0x207f9cu: goto label_207f9c;
        case 0x207fa0u: goto label_207fa0;
        case 0x207fa4u: goto label_207fa4;
        case 0x207fa8u: goto label_207fa8;
        case 0x207facu: goto label_207fac;
        case 0x207fb0u: goto label_207fb0;
        case 0x207fb4u: goto label_207fb4;
        case 0x207fb8u: goto label_207fb8;
        case 0x207fbcu: goto label_207fbc;
        case 0x207fc0u: goto label_207fc0;
        case 0x207fc4u: goto label_207fc4;
        case 0x207fc8u: goto label_207fc8;
        case 0x207fccu: goto label_207fcc;
        case 0x207fd0u: goto label_207fd0;
        case 0x207fd4u: goto label_207fd4;
        case 0x207fd8u: goto label_207fd8;
        case 0x207fdcu: goto label_207fdc;
        case 0x207fe0u: goto label_207fe0;
        case 0x207fe4u: goto label_207fe4;
        case 0x207fe8u: goto label_207fe8;
        case 0x207fecu: goto label_207fec;
        case 0x207ff0u: goto label_207ff0;
        case 0x207ff4u: goto label_207ff4;
        case 0x207ff8u: goto label_207ff8;
        case 0x207ffcu: goto label_207ffc;
        case 0x208000u: goto label_208000;
        case 0x208004u: goto label_208004;
        case 0x208008u: goto label_208008;
        case 0x20800cu: goto label_20800c;
        case 0x208010u: goto label_208010;
        case 0x208014u: goto label_208014;
        case 0x208018u: goto label_208018;
        case 0x20801cu: goto label_20801c;
        case 0x208020u: goto label_208020;
        case 0x208024u: goto label_208024;
        case 0x208028u: goto label_208028;
        case 0x20802cu: goto label_20802c;
        case 0x208030u: goto label_208030;
        case 0x208034u: goto label_208034;
        case 0x208038u: goto label_208038;
        case 0x20803cu: goto label_20803c;
        case 0x208040u: goto label_208040;
        case 0x208044u: goto label_208044;
        case 0x208048u: goto label_208048;
        case 0x20804cu: goto label_20804c;
        case 0x208050u: goto label_208050;
        case 0x208054u: goto label_208054;
        case 0x208058u: goto label_208058;
        case 0x20805cu: goto label_20805c;
        case 0x208060u: goto label_208060;
        case 0x208064u: goto label_208064;
        case 0x208068u: goto label_208068;
        case 0x20806cu: goto label_20806c;
        case 0x208070u: goto label_208070;
        case 0x208074u: goto label_208074;
        case 0x208078u: goto label_208078;
        case 0x20807cu: goto label_20807c;
        case 0x208080u: goto label_208080;
        case 0x208084u: goto label_208084;
        case 0x208088u: goto label_208088;
        case 0x20808cu: goto label_20808c;
        case 0x208090u: goto label_208090;
        case 0x208094u: goto label_208094;
        case 0x208098u: goto label_208098;
        case 0x20809cu: goto label_20809c;
        case 0x2080a0u: goto label_2080a0;
        case 0x2080a4u: goto label_2080a4;
        case 0x2080a8u: goto label_2080a8;
        case 0x2080acu: goto label_2080ac;
        case 0x2080b0u: goto label_2080b0;
        case 0x2080b4u: goto label_2080b4;
        case 0x2080b8u: goto label_2080b8;
        case 0x2080bcu: goto label_2080bc;
        case 0x2080c0u: goto label_2080c0;
        case 0x2080c4u: goto label_2080c4;
        case 0x2080c8u: goto label_2080c8;
        case 0x2080ccu: goto label_2080cc;
        case 0x2080d0u: goto label_2080d0;
        case 0x2080d4u: goto label_2080d4;
        case 0x2080d8u: goto label_2080d8;
        case 0x2080dcu: goto label_2080dc;
        case 0x2080e0u: goto label_2080e0;
        case 0x2080e4u: goto label_2080e4;
        case 0x2080e8u: goto label_2080e8;
        case 0x2080ecu: goto label_2080ec;
        case 0x2080f0u: goto label_2080f0;
        case 0x2080f4u: goto label_2080f4;
        case 0x2080f8u: goto label_2080f8;
        case 0x2080fcu: goto label_2080fc;
        case 0x208100u: goto label_208100;
        case 0x208104u: goto label_208104;
        case 0x208108u: goto label_208108;
        case 0x20810cu: goto label_20810c;
        case 0x208110u: goto label_208110;
        case 0x208114u: goto label_208114;
        case 0x208118u: goto label_208118;
        case 0x20811cu: goto label_20811c;
        case 0x208120u: goto label_208120;
        case 0x208124u: goto label_208124;
        case 0x208128u: goto label_208128;
        case 0x20812cu: goto label_20812c;
        case 0x208130u: goto label_208130;
        case 0x208134u: goto label_208134;
        case 0x208138u: goto label_208138;
        case 0x20813cu: goto label_20813c;
        case 0x208140u: goto label_208140;
        case 0x208144u: goto label_208144;
        case 0x208148u: goto label_208148;
        case 0x20814cu: goto label_20814c;
        case 0x208150u: goto label_208150;
        case 0x208154u: goto label_208154;
        case 0x208158u: goto label_208158;
        case 0x20815cu: goto label_20815c;
        case 0x208160u: goto label_208160;
        case 0x208164u: goto label_208164;
        case 0x208168u: goto label_208168;
        case 0x20816cu: goto label_20816c;
        case 0x208170u: goto label_208170;
        case 0x208174u: goto label_208174;
        case 0x208178u: goto label_208178;
        case 0x20817cu: goto label_20817c;
        case 0x208180u: goto label_208180;
        case 0x208184u: goto label_208184;
        case 0x208188u: goto label_208188;
        case 0x20818cu: goto label_20818c;
        case 0x208190u: goto label_208190;
        case 0x208194u: goto label_208194;
        case 0x208198u: goto label_208198;
        case 0x20819cu: goto label_20819c;
        case 0x2081a0u: goto label_2081a0;
        case 0x2081a4u: goto label_2081a4;
        case 0x2081a8u: goto label_2081a8;
        case 0x2081acu: goto label_2081ac;
        case 0x2081b0u: goto label_2081b0;
        case 0x2081b4u: goto label_2081b4;
        case 0x2081b8u: goto label_2081b8;
        case 0x2081bcu: goto label_2081bc;
        case 0x2081c0u: goto label_2081c0;
        case 0x2081c4u: goto label_2081c4;
        case 0x2081c8u: goto label_2081c8;
        case 0x2081ccu: goto label_2081cc;
        case 0x2081d0u: goto label_2081d0;
        case 0x2081d4u: goto label_2081d4;
        case 0x2081d8u: goto label_2081d8;
        case 0x2081dcu: goto label_2081dc;
        case 0x2081e0u: goto label_2081e0;
        case 0x2081e4u: goto label_2081e4;
        case 0x2081e8u: goto label_2081e8;
        case 0x2081ecu: goto label_2081ec;
        case 0x2081f0u: goto label_2081f0;
        case 0x2081f4u: goto label_2081f4;
        case 0x2081f8u: goto label_2081f8;
        case 0x2081fcu: goto label_2081fc;
        case 0x208200u: goto label_208200;
        case 0x208204u: goto label_208204;
        case 0x208208u: goto label_208208;
        case 0x20820cu: goto label_20820c;
        case 0x208210u: goto label_208210;
        case 0x208214u: goto label_208214;
        case 0x208218u: goto label_208218;
        case 0x20821cu: goto label_20821c;
        case 0x208220u: goto label_208220;
        case 0x208224u: goto label_208224;
        case 0x208228u: goto label_208228;
        case 0x20822cu: goto label_20822c;
        case 0x208230u: goto label_208230;
        case 0x208234u: goto label_208234;
        case 0x208238u: goto label_208238;
        case 0x20823cu: goto label_20823c;
        case 0x208240u: goto label_208240;
        case 0x208244u: goto label_208244;
        case 0x208248u: goto label_208248;
        case 0x20824cu: goto label_20824c;
        case 0x208250u: goto label_208250;
        case 0x208254u: goto label_208254;
        case 0x208258u: goto label_208258;
        case 0x20825cu: goto label_20825c;
        case 0x208260u: goto label_208260;
        case 0x208264u: goto label_208264;
        case 0x208268u: goto label_208268;
        case 0x20826cu: goto label_20826c;
        case 0x208270u: goto label_208270;
        case 0x208274u: goto label_208274;
        case 0x208278u: goto label_208278;
        case 0x20827cu: goto label_20827c;
        case 0x208280u: goto label_208280;
        case 0x208284u: goto label_208284;
        case 0x208288u: goto label_208288;
        case 0x20828cu: goto label_20828c;
        case 0x208290u: goto label_208290;
        case 0x208294u: goto label_208294;
        case 0x208298u: goto label_208298;
        case 0x20829cu: goto label_20829c;
        case 0x2082a0u: goto label_2082a0;
        case 0x2082a4u: goto label_2082a4;
        case 0x2082a8u: goto label_2082a8;
        case 0x2082acu: goto label_2082ac;
        case 0x2082b0u: goto label_2082b0;
        case 0x2082b4u: goto label_2082b4;
        case 0x2082b8u: goto label_2082b8;
        case 0x2082bcu: goto label_2082bc;
        case 0x2082c0u: goto label_2082c0;
        case 0x2082c4u: goto label_2082c4;
        case 0x2082c8u: goto label_2082c8;
        case 0x2082ccu: goto label_2082cc;
        case 0x2082d0u: goto label_2082d0;
        case 0x2082d4u: goto label_2082d4;
        case 0x2082d8u: goto label_2082d8;
        case 0x2082dcu: goto label_2082dc;
        case 0x2082e0u: goto label_2082e0;
        case 0x2082e4u: goto label_2082e4;
        case 0x2082e8u: goto label_2082e8;
        case 0x2082ecu: goto label_2082ec;
        case 0x2082f0u: goto label_2082f0;
        case 0x2082f4u: goto label_2082f4;
        case 0x2082f8u: goto label_2082f8;
        case 0x2082fcu: goto label_2082fc;
        case 0x208300u: goto label_208300;
        case 0x208304u: goto label_208304;
        case 0x208308u: goto label_208308;
        case 0x20830cu: goto label_20830c;
        case 0x208310u: goto label_208310;
        case 0x208314u: goto label_208314;
        case 0x208318u: goto label_208318;
        case 0x20831cu: goto label_20831c;
        case 0x208320u: goto label_208320;
        case 0x208324u: goto label_208324;
        case 0x208328u: goto label_208328;
        case 0x20832cu: goto label_20832c;
        case 0x208330u: goto label_208330;
        case 0x208334u: goto label_208334;
        case 0x208338u: goto label_208338;
        case 0x20833cu: goto label_20833c;
        case 0x208340u: goto label_208340;
        case 0x208344u: goto label_208344;
        case 0x208348u: goto label_208348;
        case 0x20834cu: goto label_20834c;
        case 0x208350u: goto label_208350;
        case 0x208354u: goto label_208354;
        case 0x208358u: goto label_208358;
        case 0x20835cu: goto label_20835c;
        case 0x208360u: goto label_208360;
        case 0x208364u: goto label_208364;
        case 0x208368u: goto label_208368;
        case 0x20836cu: goto label_20836c;
        case 0x208370u: goto label_208370;
        case 0x208374u: goto label_208374;
        case 0x208378u: goto label_208378;
        case 0x20837cu: goto label_20837c;
        case 0x208380u: goto label_208380;
        case 0x208384u: goto label_208384;
        case 0x208388u: goto label_208388;
        case 0x20838cu: goto label_20838c;
        case 0x208390u: goto label_208390;
        case 0x208394u: goto label_208394;
        case 0x208398u: goto label_208398;
        case 0x20839cu: goto label_20839c;
        case 0x2083a0u: goto label_2083a0;
        case 0x2083a4u: goto label_2083a4;
        case 0x2083a8u: goto label_2083a8;
        case 0x2083acu: goto label_2083ac;
        case 0x2083b0u: goto label_2083b0;
        case 0x2083b4u: goto label_2083b4;
        case 0x2083b8u: goto label_2083b8;
        case 0x2083bcu: goto label_2083bc;
        case 0x2083c0u: goto label_2083c0;
        case 0x2083c4u: goto label_2083c4;
        case 0x2083c8u: goto label_2083c8;
        case 0x2083ccu: goto label_2083cc;
        case 0x2083d0u: goto label_2083d0;
        case 0x2083d4u: goto label_2083d4;
        case 0x2083d8u: goto label_2083d8;
        case 0x2083dcu: goto label_2083dc;
        case 0x2083e0u: goto label_2083e0;
        case 0x2083e4u: goto label_2083e4;
        case 0x2083e8u: goto label_2083e8;
        case 0x2083ecu: goto label_2083ec;
        case 0x2083f0u: goto label_2083f0;
        case 0x2083f4u: goto label_2083f4;
        case 0x2083f8u: goto label_2083f8;
        case 0x2083fcu: goto label_2083fc;
        case 0x208400u: goto label_208400;
        case 0x208404u: goto label_208404;
        case 0x208408u: goto label_208408;
        case 0x20840cu: goto label_20840c;
        case 0x208410u: goto label_208410;
        case 0x208414u: goto label_208414;
        case 0x208418u: goto label_208418;
        case 0x20841cu: goto label_20841c;
        case 0x208420u: goto label_208420;
        case 0x208424u: goto label_208424;
        case 0x208428u: goto label_208428;
        case 0x20842cu: goto label_20842c;
        case 0x208430u: goto label_208430;
        case 0x208434u: goto label_208434;
        case 0x208438u: goto label_208438;
        case 0x20843cu: goto label_20843c;
        case 0x208440u: goto label_208440;
        case 0x208444u: goto label_208444;
        case 0x208448u: goto label_208448;
        case 0x20844cu: goto label_20844c;
        case 0x208450u: goto label_208450;
        case 0x208454u: goto label_208454;
        case 0x208458u: goto label_208458;
        case 0x20845cu: goto label_20845c;
        case 0x208460u: goto label_208460;
        case 0x208464u: goto label_208464;
        case 0x208468u: goto label_208468;
        case 0x20846cu: goto label_20846c;
        case 0x208470u: goto label_208470;
        case 0x208474u: goto label_208474;
        case 0x208478u: goto label_208478;
        case 0x20847cu: goto label_20847c;
        case 0x208480u: goto label_208480;
        case 0x208484u: goto label_208484;
        case 0x208488u: goto label_208488;
        case 0x20848cu: goto label_20848c;
        default: break;
    }

    ctx->pc = 0x207f40u;

label_207f40:
    // 0x207f40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207f44:
    // 0x207f44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x207f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_207f48:
    // 0x207f48: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_207f4c:
    // 0x207f4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207f50:
    // 0x207f50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_207f54:
    // 0x207f54: 0x2463e3d0  addiu       $v1, $v1, -0x1C30
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960080));
label_207f58:
    // 0x207f58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207f5c:
    // 0x207f5c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x207f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_207f60:
    // 0x207f60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_207f64:
    // 0x207f64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207f68:
    // 0x207f68: 0xa4860006  sh          $a2, 0x6($a0)
    ctx->pc = 0x207f68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 6));
label_207f6c:
    // 0x207f6c: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x207f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_207f70:
    // 0x207f70: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_207f74:
    // 0x207f74: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x207f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_207f78:
    // 0x207f78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207f7c:
    // 0x207f7c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x207f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_207f80:
    // 0x207f80: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x207f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_207f84:
    // 0x207f84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x207f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_207f88:
    // 0x207f88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_207f8c:
    // 0x207f8c: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
label_207f90:
    // 0x207f90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207f94:
    // 0x207f94: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x207f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_207f98:
    // 0x207f98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x207f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_207f9c:
    // 0x207f9c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x207f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_207fa0:
    // 0x207fa0: 0x2463e470  addiu       $v1, $v1, -0x1B90
    ctx->pc = 0x207fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960240));
label_207fa4:
    // 0x207fa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207fa8:
    // 0x207fa8: 0x2442e498  addiu       $v0, $v0, -0x1B68
    ctx->pc = 0x207fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960280));
label_207fac:
    // 0x207fac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x207facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_207fb0:
    // 0x207fb0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_207fb4:
    if (ctx->pc == 0x207FB4u) {
        ctx->pc = 0x207FB4u;
            // 0x207fb4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x207FB8u;
        goto label_207fb8;
    }
    ctx->pc = 0x207FB0u;
    {
        const bool branch_taken_0x207fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207FB0u;
            // 0x207fb4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fb0) {
            ctx->pc = 0x208008u;
            goto label_208008;
        }
    }
    ctx->pc = 0x207FB8u;
label_207fb8:
    // 0x207fb8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x207fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_207fbc:
    // 0x207fbc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_207fc0:
    if (ctx->pc == 0x207FC0u) {
        ctx->pc = 0x207FC0u;
            // 0x207fc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207FC4u;
        goto label_207fc4;
    }
    ctx->pc = 0x207FBCu;
    {
        const bool branch_taken_0x207fbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x207FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207FBCu;
            // 0x207fc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fbc) {
            ctx->pc = 0x208008u;
            goto label_208008;
        }
    }
    ctx->pc = 0x207FC4u;
label_207fc4:
    // 0x207fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207fc8:
    // 0x207fc8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_207fcc:
    // 0x207fcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_207fd0:
    // 0x207fd0: 0x24430011  addiu       $v1, $v0, 0x11
    ctx->pc = 0x207fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
label_207fd4:
    // 0x207fd4: 0x80420011  lb          $v0, 0x11($v0)
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_207fd8:
    // 0x207fd8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x207fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_207fdc:
    // 0x207fdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x207fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_207fe0:
    // 0x207fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_207fe4:
    if (ctx->pc == 0x207FE4u) {
        ctx->pc = 0x207FE8u;
        goto label_207fe8;
    }
    ctx->pc = 0x207FE0u;
    {
        const bool branch_taken_0x207fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fe0) {
            ctx->pc = 0x207FF0u;
            goto label_207ff0;
        }
    }
    ctx->pc = 0x207FE8u;
label_207fe8:
    // 0x207fe8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x207fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_207fec:
    // 0x207fec: 0x0  nop
    ctx->pc = 0x207fecu;
    // NOP
label_207ff0:
    // 0x207ff0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_207ff4:
    // 0x207ff4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x207ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_207ff8:
    // 0x207ff8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x207ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_207ffc:
    // 0x207ffc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_208000:
    if (ctx->pc == 0x208000u) {
        ctx->pc = 0x208000u;
            // 0x208000: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->pc = 0x208004u;
        goto label_208004;
    }
    ctx->pc = 0x207FFCu;
    {
        const bool branch_taken_0x207ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207FFCu;
            // 0x208000: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ffc) {
            ctx->pc = 0x207FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207fc8;
        }
    }
    ctx->pc = 0x208004u;
label_208004:
    // 0x208004: 0x0  nop
    ctx->pc = 0x208004u;
    // NOP
label_208008:
    // 0x208008: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x208008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20800c:
    // 0x20800c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x20800cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_208010:
    // 0x208010: 0x3e00008  jr          $ra
label_208014:
    if (ctx->pc == 0x208014u) {
        ctx->pc = 0x208014u;
            // 0x208014: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208018u;
        goto label_208018;
    }
    ctx->pc = 0x208010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208010u;
            // 0x208014: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208018u;
label_208018:
    // 0x208018: 0x0  nop
    ctx->pc = 0x208018u;
    // NOP
label_20801c:
    // 0x20801c: 0x0  nop
    ctx->pc = 0x20801cu;
    // NOP
label_208020:
    // 0x208020: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x208020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_208024:
    // 0x208024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_208028:
    // 0x208028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20802c:
    // 0x20802c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x20802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_208030:
    // 0x208030: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_208034:
    if (ctx->pc == 0x208034u) {
        ctx->pc = 0x208034u;
            // 0x208034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208038u;
        goto label_208038;
    }
    ctx->pc = 0x208030u;
    {
        const bool branch_taken_0x208030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208030u;
            // 0x208034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208030) {
            ctx->pc = 0x208040u;
            goto label_208040;
        }
    }
    ctx->pc = 0x208038u;
label_208038:
    // 0x208038: 0x10000019  b           . + 4 + (0x19 << 2)
label_20803c:
    if (ctx->pc == 0x20803Cu) {
        ctx->pc = 0x20803Cu;
            // 0x20803c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x208040u;
        goto label_208040;
    }
    ctx->pc = 0x208038u;
    {
        const bool branch_taken_0x208038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208038u;
            // 0x20803c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208038) {
            ctx->pc = 0x2080A0u;
            goto label_2080a0;
        }
    }
    ctx->pc = 0x208040u;
label_208040:
    // 0x208040: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x208040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_208044:
    // 0x208044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208048:
    // 0x208048: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x208048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_20804c:
    // 0x20804c: 0x320f809  jalr        $t9
label_208050:
    if (ctx->pc == 0x208050u) {
        ctx->pc = 0x208050u;
            // 0x208050: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x208054u;
        goto label_208054;
    }
    ctx->pc = 0x20804Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x208054u);
        ctx->pc = 0x208050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20804Cu;
            // 0x208050: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208054u; }
            if (ctx->pc != 0x208054u) { return; }
        }
        }
    }
    ctx->pc = 0x208054u;
label_208054:
    // 0x208054: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x208054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_208058:
    // 0x208058: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x208058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_20805c:
    // 0x20805c: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_208060:
    // 0x208060: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_208064:
    // 0x208064: 0xc44cc080  lwc1        $f12, -0x3F80($v0)
    ctx->pc = 0x208064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_208068:
    // 0x208068: 0xc0833a8  jal         func_20CEA0
label_20806c:
    if (ctx->pc == 0x20806Cu) {
        ctx->pc = 0x20806Cu;
            // 0x20806c: 0x27a4022c  addiu       $a0, $sp, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
        ctx->pc = 0x208070u;
        goto label_208070;
    }
    ctx->pc = 0x208068u;
    SET_GPR_U32(ctx, 31, 0x208070u);
    ctx->pc = 0x20806Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208068u;
            // 0x20806c: 0x27a4022c  addiu       $a0, $sp, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CEA0u;
    if (runtime->hasFunction(0x20CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x20CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208070u; }
        if (ctx->pc != 0x208070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020CEA0_0x20cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208070u; }
        if (ctx->pc != 0x208070u) { return; }
    }
    ctx->pc = 0x208070u;
label_208070:
    // 0x208070: 0x27a2022c  addiu       $v0, $sp, 0x22C
    ctx->pc = 0x208070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_208074:
    // 0x208074: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_208078:
    // 0x208078: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x208078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_20807c:
    // 0x20807c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20807cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_208080:
    // 0x208080: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_208084:
    if (ctx->pc == 0x208084u) {
        ctx->pc = 0x208084u;
            // 0x208084: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x208088u;
        goto label_208088;
    }
    ctx->pc = 0x208080u;
    {
        const bool branch_taken_0x208080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208080) {
            ctx->pc = 0x208084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208080u;
            // 0x208084: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208090u;
            goto label_208090;
        }
    }
    ctx->pc = 0x208088u;
label_208088:
    // 0x208088: 0x10000005  b           . + 4 + (0x5 << 2)
label_20808c:
    if (ctx->pc == 0x20808Cu) {
        ctx->pc = 0x20808Cu;
            // 0x20808c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208090u;
        goto label_208090;
    }
    ctx->pc = 0x208088u;
    {
        const bool branch_taken_0x208088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20808Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208088u;
            // 0x20808c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208088) {
            ctx->pc = 0x2080A0u;
            goto label_2080a0;
        }
    }
    ctx->pc = 0x208090u;
label_208090:
    // 0x208090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208094:
    // 0x208094: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x208094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_208098:
    // 0x208098: 0x320f809  jalr        $t9
label_20809c:
    if (ctx->pc == 0x20809Cu) {
        ctx->pc = 0x20809Cu;
            // 0x20809c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2080A0u;
        goto label_2080a0;
    }
    ctx->pc = 0x208098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2080A0u);
        ctx->pc = 0x20809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208098u;
            // 0x20809c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2080A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2080A0u; }
            if (ctx->pc != 0x2080A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2080A0u;
label_2080a0:
    // 0x2080a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2080a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2080a4:
    // 0x2080a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2080a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2080a8:
    // 0x2080a8: 0x3e00008  jr          $ra
label_2080ac:
    if (ctx->pc == 0x2080ACu) {
        ctx->pc = 0x2080ACu;
            // 0x2080ac: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2080B0u;
        goto label_2080b0;
    }
    ctx->pc = 0x2080A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2080ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2080A8u;
            // 0x2080ac: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2080B0u;
label_2080b0:
    // 0x2080b0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x2080b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_2080b4:
    // 0x2080b4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2080b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2080b8:
    // 0x2080b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2080b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2080bc:
    // 0x2080bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2080bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2080c0:
    // 0x2080c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2080c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2080c4:
    // 0x2080c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2080c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2080c8:
    // 0x2080c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2080c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2080cc:
    // 0x2080cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2080ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2080d0:
    // 0x2080d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2080d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2080d4:
    // 0x2080d4: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x2080d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2080d8:
    // 0x2080d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2080d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2080dc:
    // 0x2080dc: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2080dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_2080e0:
    // 0x2080e0: 0x659006  srlv        $s2, $a1, $v1
    ctx->pc = 0x2080e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_2080e4:
    // 0x2080e4: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x2080e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2080e8:
    // 0x2080e8: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2080e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2080ec:
    // 0x2080ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2080ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2080f0:
    // 0x2080f0: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x2080f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2080f4:
    // 0x2080f4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x2080f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2080f8:
    // 0x2080f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2080f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2080fc:
    // 0x2080fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2080fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208100:
    // 0x208100: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x208100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_208104:
    // 0x208104: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x208104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_208108:
    // 0x208108: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_20810c:
    if (ctx->pc == 0x20810Cu) {
        ctx->pc = 0x208110u;
        goto label_208110;
    }
    ctx->pc = 0x208108u;
    {
        const bool branch_taken_0x208108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208108) {
            ctx->pc = 0x208130u;
            goto label_208130;
        }
    }
    ctx->pc = 0x208110u;
label_208110:
    // 0x208110: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_208114:
    // 0x208114: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x208114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_208118:
    // 0x208118: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x208118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20811c:
    // 0x20811c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_208120:
    if (ctx->pc == 0x208120u) {
        ctx->pc = 0x208120u;
            // 0x208120: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208124u;
        goto label_208124;
    }
    ctx->pc = 0x20811Cu;
    {
        const bool branch_taken_0x20811c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20811c) {
            ctx->pc = 0x208120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20811Cu;
            // 0x208120: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20812Cu;
            goto label_20812c;
        }
    }
    ctx->pc = 0x208124u;
label_208124:
    // 0x208124: 0x1000001b  b           . + 4 + (0x1B << 2)
label_208128:
    if (ctx->pc == 0x208128u) {
        ctx->pc = 0x208128u;
            // 0x208128: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20812Cu;
        goto label_20812c;
    }
    ctx->pc = 0x208124u;
    {
        const bool branch_taken_0x208124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208124u;
            // 0x208128: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208124) {
            ctx->pc = 0x208194u;
            goto label_208194;
        }
    }
    ctx->pc = 0x20812Cu;
label_20812c:
    // 0x20812c: 0x0  nop
    ctx->pc = 0x20812cu;
    // NOP
label_208130:
    // 0x208130: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x208130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_208134:
    // 0x208134: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x208134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208138:
    // 0x208138: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x208138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20813c:
    // 0x20813c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20813cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_208140:
    // 0x208140: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x208140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_208144:
    // 0x208144: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x208144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208148:
    // 0x208148: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x208148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
label_20814c:
    // 0x20814c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x20814cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_208150:
    // 0x208150: 0x2228025  or          $s0, $s1, $v0
    ctx->pc = 0x208150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_208154:
    // 0x208154: 0x320f809  jalr        $t9
label_208158:
    if (ctx->pc == 0x208158u) {
        ctx->pc = 0x208158u;
            // 0x208158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20815Cu;
        goto label_20815c;
    }
    ctx->pc = 0x208154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20815Cu);
        ctx->pc = 0x208158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208154u;
            // 0x208158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20815Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20815Cu; }
            if (ctx->pc != 0x20815Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20815Cu;
label_20815c:
    // 0x20815c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x20815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_208160:
    // 0x208160: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x208160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_208164:
    // 0x208164: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x208164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_208168:
    // 0x208168: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x208168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20816c:
    // 0x20816c: 0xc44cc080  lwc1        $f12, -0x3F80($v0)
    ctx->pc = 0x20816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_208170:
    // 0x208170: 0xc0833a8  jal         func_20CEA0
label_208174:
    if (ctx->pc == 0x208174u) {
        ctx->pc = 0x208174u;
            // 0x208174: 0x27a4025c  addiu       $a0, $sp, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
        ctx->pc = 0x208178u;
        goto label_208178;
    }
    ctx->pc = 0x208170u;
    SET_GPR_U32(ctx, 31, 0x208178u);
    ctx->pc = 0x208174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208170u;
            // 0x208174: 0x27a4025c  addiu       $a0, $sp, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CEA0u;
    if (runtime->hasFunction(0x20CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x20CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208178u; }
        if (ctx->pc != 0x208178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020CEA0_0x20cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208178u; }
        if (ctx->pc != 0x208178u) { return; }
    }
    ctx->pc = 0x208178u;
label_208178:
    // 0x208178: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x208178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_20817c:
    // 0x20817c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x20817cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_208180:
    // 0x208180: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x208180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_208184:
    // 0x208184: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x208184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_208188:
    // 0x208188: 0x5040ffd8  beql        $v0, $zero, . + 4 + (-0x28 << 2)
label_20818c:
    if (ctx->pc == 0x20818Cu) {
        ctx->pc = 0x20818Cu;
            // 0x20818c: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->pc = 0x208190u;
        goto label_208190;
    }
    ctx->pc = 0x208188u;
    {
        const bool branch_taken_0x208188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208188) {
            ctx->pc = 0x20818Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208188u;
            // 0x20818c: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2080ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2080ec;
        }
    }
    ctx->pc = 0x208190u;
label_208190:
    // 0x208190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x208190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208194:
    // 0x208194: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x208194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_208198:
    // 0x208198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x208198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20819c:
    // 0x20819c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20819cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2081a0:
    // 0x2081a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2081a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2081a4:
    // 0x2081a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2081a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2081a8:
    // 0x2081a8: 0x3e00008  jr          $ra
label_2081ac:
    if (ctx->pc == 0x2081ACu) {
        ctx->pc = 0x2081ACu;
            // 0x2081ac: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x2081B0u;
        goto label_2081b0;
    }
    ctx->pc = 0x2081A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2081ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2081A8u;
            // 0x2081ac: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2081B0u;
label_2081b0:
    // 0x2081b0: 0x8c890030  lw          $t1, 0x30($a0)
    ctx->pc = 0x2081b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2081b4:
    // 0x2081b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2081b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2081b8:
    // 0x2081b8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2081b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2081bc:
    // 0x2081bc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2081bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2081c0:
    // 0x2081c0: 0x1274006  srlv        $t0, $a3, $t1
    ctx->pc = 0x2081c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_2081c4:
    // 0x2081c4: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x2081c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2081c8:
    // 0x2081c8: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x2081c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
label_2081cc:
    // 0x2081cc: 0xe53806  srlv        $a3, $a1, $a3
    ctx->pc = 0x2081ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_2081d0:
    // 0x2081d0: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x2081d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2081d4:
    // 0x2081d4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2081d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2081d8:
    // 0x2081d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2081dc:
    // 0x2081dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2081dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2081e0:
    // 0x2081e0: 0x80450010  lb          $a1, 0x10($v0)
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_2081e4:
    // 0x2081e4: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x2081e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2081e8:
    // 0x2081e8: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2081e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_2081ec:
    // 0x2081ec: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x2081ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2081f0:
    // 0x2081f0: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_2081f4:
    if (ctx->pc == 0x2081F4u) {
        ctx->pc = 0x2081F4u;
            // 0x2081f4: 0x674024  and         $t0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->pc = 0x2081F8u;
        goto label_2081f8;
    }
    ctx->pc = 0x2081F0u;
    {
        const bool branch_taken_0x2081f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2081F0u;
            // 0x2081f4: 0x674024  and         $t0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081f0) {
            ctx->pc = 0x20824Cu;
            goto label_20824c;
        }
    }
    ctx->pc = 0x2081F8u;
label_2081f8:
    // 0x2081f8: 0x8c490014  lw          $t1, 0x14($v0)
    ctx->pc = 0x2081f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2081fc:
    // 0x2081fc: 0x39050001  xori        $a1, $t0, 0x1
    ctx->pc = 0x2081fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_208200:
    // 0x208200: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x208200u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_208204:
    // 0x208204: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x208204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_208208:
    // 0x208208: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x208208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20820c:
    // 0x20820c: 0x1235818  mult        $t3, $t1, $v1
    ctx->pc = 0x20820cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_208210:
    // 0x208210: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x208210u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_208214:
    // 0x208214: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x208214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_208218:
    // 0x208218: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x208218u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20821c:
    // 0x20821c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_208220:
    // 0x208220: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_208224:
    // 0x208224: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x208224u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_208228:
    // 0x208228: 0x94e70002  lhu         $a3, 0x2($a3)
    ctx->pc = 0x208228u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_20822c:
    // 0x20822c: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x20822cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_208230:
    // 0x208230: 0x1484018  mult        $t0, $t2, $t0
    ctx->pc = 0x208230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_208234:
    // 0x208234: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x208234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_208238:
    // 0x208238: 0x1285821  addu        $t3, $t1, $t0
    ctx->pc = 0x208238u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_20823c:
    // 0x20823c: 0x1452818  mult        $a1, $t2, $a1
    ctx->pc = 0x20823cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_208240:
    // 0x208240: 0x1274021  addu        $t0, $t1, $a3
    ctx->pc = 0x208240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_208244:
    // 0x208244: 0x10000015  b           . + 4 + (0x15 << 2)
label_208248:
    if (ctx->pc == 0x208248u) {
        ctx->pc = 0x208248u;
            // 0x208248: 0x1253821  addu        $a3, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->pc = 0x20824Cu;
        goto label_20824c;
    }
    ctx->pc = 0x208244u;
    {
        const bool branch_taken_0x208244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208244u;
            // 0x208248: 0x1253821  addu        $a3, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208244) {
            ctx->pc = 0x20829Cu;
            goto label_20829c;
        }
    }
    ctx->pc = 0x20824Cu;
label_20824c:
    // 0x20824c: 0x8c490014  lw          $t1, 0x14($v0)
    ctx->pc = 0x20824cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_208250:
    // 0x208250: 0x39050001  xori        $a1, $t0, 0x1
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_208254:
    // 0x208254: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x208254u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_208258:
    // 0x208258: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x208258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20825c:
    // 0x20825c: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x20825cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_208260:
    // 0x208260: 0x1235818  mult        $t3, $t1, $v1
    ctx->pc = 0x208260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_208264:
    // 0x208264: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x208264u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_208268:
    // 0x208268: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x208268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_20826c:
    // 0x20826c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x20826cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208270:
    // 0x208270: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x208270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_208274:
    // 0x208274: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x208274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_208278:
    // 0x208278: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x208278u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20827c:
    // 0x20827c: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x20827cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_208280:
    // 0x208280: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x208280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_208284:
    // 0x208284: 0x1484018  mult        $t0, $t2, $t0
    ctx->pc = 0x208284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_208288:
    // 0x208288: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x208288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_20828c:
    // 0x20828c: 0x1285821  addu        $t3, $t1, $t0
    ctx->pc = 0x20828cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_208290:
    // 0x208290: 0x1452818  mult        $a1, $t2, $a1
    ctx->pc = 0x208290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_208294:
    // 0x208294: 0x1274021  addu        $t0, $t1, $a3
    ctx->pc = 0x208294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_208298:
    // 0x208298: 0x1253821  addu        $a3, $t1, $a1
    ctx->pc = 0x208298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_20829c:
    // 0x20829c: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x20829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2082a0:
    // 0x2082a0: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x2082a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2082a4:
    // 0x2082a4: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2082a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2082a8:
    // 0x2082a8: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x2082a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2082ac:
    // 0x2082ac: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2082acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2082b0:
    // 0x2082b0: 0x46040282  mul.s       $f10, $f0, $f4
    ctx->pc = 0x2082b0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2082b4:
    // 0x2082b4: 0x460312c2  mul.s       $f11, $f2, $f3
    ctx->pc = 0x2082b4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2082b8:
    // 0x2082b8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2082b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2082bc:
    // 0x2082bc: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2082bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2082c0:
    // 0x2082c0: 0xc4850028  lwc1        $f5, 0x28($a0)
    ctx->pc = 0x2082c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2082c4:
    // 0x2082c4: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x2082c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2082c8:
    // 0x2082c8: 0x460401c2  mul.s       $f7, $f0, $f4
    ctx->pc = 0x2082c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2082cc:
    // 0x2082cc: 0x46050a42  mul.s       $f9, $f1, $f5
    ctx->pc = 0x2082ccu;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2082d0:
    // 0x2082d0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2082d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2082d4:
    // 0x2082d4: 0x46031202  mul.s       $f8, $f2, $f3
    ctx->pc = 0x2082d4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2082d8:
    // 0x2082d8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2082d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2082dc:
    // 0x2082dc: 0x46050982  mul.s       $f6, $f1, $f5
    ctx->pc = 0x2082dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2082e0:
    // 0x2082e0: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x2082e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2082e4:
    // 0x2082e4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2082e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2082e8:
    // 0x2082e8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2082e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2082ec:
    // 0x2082ec: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2082ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2082f0:
    // 0x2082f0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_2082f4:
    if (ctx->pc == 0x2082F4u) {
        ctx->pc = 0x2082F4u;
            // 0x2082f4: 0x460300c2  mul.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x2082F8u;
        goto label_2082f8;
    }
    ctx->pc = 0x2082F0u;
    {
        const bool branch_taken_0x2082f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2082F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2082F0u;
            // 0x2082f4: 0x460300c2  mul.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082f0) {
            ctx->pc = 0x208300u;
            goto label_208300;
        }
    }
    ctx->pc = 0x2082F8u;
label_2082f8:
    // 0x2082f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2082fc:
    if (ctx->pc == 0x2082FCu) {
        ctx->pc = 0x2082FCu;
            // 0x2082fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208300u;
        goto label_208300;
    }
    ctx->pc = 0x2082F8u;
    {
        const bool branch_taken_0x2082f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2082F8u;
            // 0x2082fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082f8) {
            ctx->pc = 0x208318u;
            goto label_208318;
        }
    }
    ctx->pc = 0x208300u;
label_208300:
    // 0x208300: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x208300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_208304:
    // 0x208304: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x208304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_208308:
    // 0x208308: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x208308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20830c:
    // 0x20830c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20830cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_208310:
    // 0x208310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208314:
    // 0x208314: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x208314u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_208318:
    // 0x208318: 0x10c00022  beqz        $a2, . + 4 + (0x22 << 2)
label_20831c:
    if (ctx->pc == 0x20831Cu) {
        ctx->pc = 0x20831Cu;
            // 0x20831c: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x208320u;
        goto label_208320;
    }
    ctx->pc = 0x208318u;
    {
        const bool branch_taken_0x208318 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208318u;
            // 0x20831c: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208318) {
            ctx->pc = 0x2083A4u;
            goto label_2083a4;
        }
    }
    ctx->pc = 0x208320u;
label_208320:
    // 0x208320: 0x9087004c  lbu         $a3, 0x4C($a0)
    ctx->pc = 0x208320u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
label_208324:
    // 0x208324: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x208324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208328:
    // 0x208328: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x208328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_20832c:
    // 0x20832c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208330:
    // 0x208330: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
label_208334:
    // 0x208334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208338:
    // 0x208338: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x208338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_20833c:
    // 0x20833c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x20833cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_208340:
    // 0x208340: 0x2484d430  addiu       $a0, $a0, -0x2BD0
    ctx->pc = 0x208340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
label_208344:
    // 0x208344: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x208344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_208348:
    // 0x208348: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x208348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_20834c:
    // 0x20834c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_208350:
    // 0x208350: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x208350u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
label_208354:
    // 0x208354: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x208354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_208358:
    // 0x208358: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x208358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_20835c:
    // 0x20835c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_208360:
    // 0x208360: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x208360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_208364:
    // 0x208364: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x208364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_208368:
    // 0x208368: 0x2484db60  addiu       $a0, $a0, -0x24A0
    ctx->pc = 0x208368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957920));
label_20836c:
    // 0x20836c: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x20836cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
label_208370:
    // 0x208370: 0x2463e1e0  addiu       $v1, $v1, -0x1E20
    ctx->pc = 0x208370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959584));
label_208374:
    // 0x208374: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x208374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_208378:
    // 0x208378: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x208378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_20837c:
    // 0x20837c: 0x2442e600  addiu       $v0, $v0, -0x1A00
    ctx->pc = 0x20837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960640));
label_208380:
    // 0x208380: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x208380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_208384:
    // 0x208384: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x208384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_208388:
    // 0x208388: 0xa4c80014  sh          $t0, 0x14($a2)
    ctx->pc = 0x208388u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 8));
label_20838c:
    // 0x20838c: 0xa0c70016  sb          $a3, 0x16($a2)
    ctx->pc = 0x20838cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 22), (uint8_t)GPR_U32(ctx, 7));
label_208390:
    // 0x208390: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x208390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
label_208394:
    // 0x208394: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x208394u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
label_208398:
    // 0x208398: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x208398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
label_20839c:
    // 0x20839c: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x20839cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
label_2083a0:
    // 0x2083a0: 0xa0c00017  sb          $zero, 0x17($a2)
    ctx->pc = 0x2083a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 23), (uint8_t)GPR_U32(ctx, 0));
label_2083a4:
    // 0x2083a4: 0xe4cb0020  swc1        $f11, 0x20($a2)
    ctx->pc = 0x2083a4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_2083a8:
    // 0x2083a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2083a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2083ac:
    // 0x2083ac: 0xe4ca0024  swc1        $f10, 0x24($a2)
    ctx->pc = 0x2083acu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_2083b0:
    // 0x2083b0: 0xe4c90028  swc1        $f9, 0x28($a2)
    ctx->pc = 0x2083b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_2083b4:
    // 0x2083b4: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x2083b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
label_2083b8:
    // 0x2083b8: 0xe4c80030  swc1        $f8, 0x30($a2)
    ctx->pc = 0x2083b8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
label_2083bc:
    // 0x2083bc: 0xe4c70034  swc1        $f7, 0x34($a2)
    ctx->pc = 0x2083bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_2083c0:
    // 0x2083c0: 0xe4c60038  swc1        $f6, 0x38($a2)
    ctx->pc = 0x2083c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
label_2083c4:
    // 0x2083c4: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x2083c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
label_2083c8:
    // 0x2083c8: 0xe4c30040  swc1        $f3, 0x40($a2)
    ctx->pc = 0x2083c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
label_2083cc:
    // 0x2083cc: 0xe4c20044  swc1        $f2, 0x44($a2)
    ctx->pc = 0x2083ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
label_2083d0:
    // 0x2083d0: 0xe4c10048  swc1        $f1, 0x48($a2)
    ctx->pc = 0x2083d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
label_2083d4:
    // 0x2083d4: 0x3e00008  jr          $ra
label_2083d8:
    if (ctx->pc == 0x2083D8u) {
        ctx->pc = 0x2083D8u;
            // 0x2083d8: 0xacc0004c  sw          $zero, 0x4C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2083DCu;
        goto label_2083dc;
    }
    ctx->pc = 0x2083D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2083D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2083D4u;
            // 0x2083d8: 0xacc0004c  sw          $zero, 0x4C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2083DCu;
label_2083dc:
    // 0x2083dc: 0x0  nop
    ctx->pc = 0x2083dcu;
    // NOP
label_2083e0:
    // 0x2083e0: 0x8c8a0030  lw          $t2, 0x30($a0)
    ctx->pc = 0x2083e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2083e4:
    // 0x2083e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2083e8:
    // 0x2083e8: 0x8c880034  lw          $t0, 0x34($a0)
    ctx->pc = 0x2083e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2083ec:
    // 0x2083ec: 0x4a4823  subu        $t1, $v0, $t2
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_2083f0:
    // 0x2083f0: 0x1251806  srlv        $v1, $a1, $t1
    ctx->pc = 0x2083f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
label_2083f4:
    // 0x2083f4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2083f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2083f8:
    // 0x2083f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2083f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2083fc:
    // 0x2083fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2083fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_208400:
    // 0x208400: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x208400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_208404:
    // 0x208404: 0x8ce60020  lw          $a2, 0x20($a3)
    ctx->pc = 0x208404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_208408:
    // 0x208408: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
label_20840c:
    if (ctx->pc == 0x20840Cu) {
        ctx->pc = 0x20840Cu;
            // 0x20840c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x208410u;
        goto label_208410;
    }
    ctx->pc = 0x208408u;
    {
        const bool branch_taken_0x208408 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x208408) {
            ctx->pc = 0x20840Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208408u;
            // 0x20840c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208444u;
            goto label_208444;
        }
    }
    ctx->pc = 0x208410u;
label_208410:
    // 0x208410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_208414:
    // 0x208414: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x208414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_208418:
    // 0x208418: 0x1422006  srlv        $a0, $v0, $t2
    ctx->pc = 0x208418u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
label_20841c:
    // 0x20841c: 0x80e20011  lb          $v0, 0x11($a3)
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 17)));
label_208420:
    // 0x208420: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x208420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_208424:
    // 0x208424: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x208424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_208428:
    // 0x208428: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x208428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20842c:
    // 0x20842c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20842cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_208430:
    // 0x208430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_208434:
    if (ctx->pc == 0x208434u) {
        ctx->pc = 0x208434u;
            // 0x208434: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x208438u;
        goto label_208438;
    }
    ctx->pc = 0x208430u;
    {
        const bool branch_taken_0x208430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208430u;
            // 0x208434: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208430) {
            ctx->pc = 0x208440u;
            goto label_208440;
        }
    }
    ctx->pc = 0x208438u;
label_208438:
    // 0x208438: 0x10000002  b           . + 4 + (0x2 << 2)
label_20843c:
    if (ctx->pc == 0x20843Cu) {
        ctx->pc = 0x20843Cu;
            // 0x20843c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x208440u;
        goto label_208440;
    }
    ctx->pc = 0x208438u;
    {
        const bool branch_taken_0x208438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208438u;
            // 0x20843c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208438) {
            ctx->pc = 0x208444u;
            goto label_208444;
        }
    }
    ctx->pc = 0x208440u;
label_208440:
    // 0x208440: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x208440u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_208444:
    // 0x208444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_208448:
    // 0x208448: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_20844c:
    if (ctx->pc == 0x20844Cu) {
        ctx->pc = 0x20844Cu;
            // 0x20844c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208450u;
        goto label_208450;
    }
    ctx->pc = 0x208448u;
    {
        const bool branch_taken_0x208448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x208448) {
            ctx->pc = 0x20844Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208448u;
            // 0x20844c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208474u;
            goto label_208474;
        }
    }
    ctx->pc = 0x208450u;
label_208450:
    // 0x208450: 0x1251806  srlv        $v1, $a1, $t1
    ctx->pc = 0x208450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
label_208454:
    // 0x208454: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_208458:
    // 0x208458: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x208458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20845c:
    // 0x20845c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20845cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_208460:
    // 0x208460: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x208460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_208464:
    // 0x208464: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x208464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_208468:
    // 0x208468: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x208468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20846c:
    // 0x20846c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x20846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_208470:
    // 0x208470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208474:
    // 0x208474: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_208478:
    if (ctx->pc == 0x208478u) {
        ctx->pc = 0x208478u;
            // 0x208478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20847Cu;
        goto label_20847c;
    }
    ctx->pc = 0x208474u;
    {
        const bool branch_taken_0x208474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208474) {
            ctx->pc = 0x208478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208474u;
            // 0x208478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208480u;
            goto label_208480;
        }
    }
    ctx->pc = 0x20847Cu;
label_20847c:
    // 0x20847c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208480:
    // 0x208480: 0x3e00008  jr          $ra
label_208484:
    if (ctx->pc == 0x208484u) {
        ctx->pc = 0x208488u;
        goto label_208488;
    }
    ctx->pc = 0x208480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208488u;
label_208488:
    // 0x208488: 0x0  nop
    ctx->pc = 0x208488u;
    // NOP
label_20848c:
    // 0x20848c: 0x0  nop
    ctx->pc = 0x20848cu;
    // NOP
}
