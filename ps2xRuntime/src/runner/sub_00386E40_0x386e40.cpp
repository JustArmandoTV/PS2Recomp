#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386E40
// Address: 0x386e40 - 0x387520
void sub_00386E40_0x386e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386E40_0x386e40");
#endif

    switch (ctx->pc) {
        case 0x386e40u: goto label_386e40;
        case 0x386e44u: goto label_386e44;
        case 0x386e48u: goto label_386e48;
        case 0x386e4cu: goto label_386e4c;
        case 0x386e50u: goto label_386e50;
        case 0x386e54u: goto label_386e54;
        case 0x386e58u: goto label_386e58;
        case 0x386e5cu: goto label_386e5c;
        case 0x386e60u: goto label_386e60;
        case 0x386e64u: goto label_386e64;
        case 0x386e68u: goto label_386e68;
        case 0x386e6cu: goto label_386e6c;
        case 0x386e70u: goto label_386e70;
        case 0x386e74u: goto label_386e74;
        case 0x386e78u: goto label_386e78;
        case 0x386e7cu: goto label_386e7c;
        case 0x386e80u: goto label_386e80;
        case 0x386e84u: goto label_386e84;
        case 0x386e88u: goto label_386e88;
        case 0x386e8cu: goto label_386e8c;
        case 0x386e90u: goto label_386e90;
        case 0x386e94u: goto label_386e94;
        case 0x386e98u: goto label_386e98;
        case 0x386e9cu: goto label_386e9c;
        case 0x386ea0u: goto label_386ea0;
        case 0x386ea4u: goto label_386ea4;
        case 0x386ea8u: goto label_386ea8;
        case 0x386eacu: goto label_386eac;
        case 0x386eb0u: goto label_386eb0;
        case 0x386eb4u: goto label_386eb4;
        case 0x386eb8u: goto label_386eb8;
        case 0x386ebcu: goto label_386ebc;
        case 0x386ec0u: goto label_386ec0;
        case 0x386ec4u: goto label_386ec4;
        case 0x386ec8u: goto label_386ec8;
        case 0x386eccu: goto label_386ecc;
        case 0x386ed0u: goto label_386ed0;
        case 0x386ed4u: goto label_386ed4;
        case 0x386ed8u: goto label_386ed8;
        case 0x386edcu: goto label_386edc;
        case 0x386ee0u: goto label_386ee0;
        case 0x386ee4u: goto label_386ee4;
        case 0x386ee8u: goto label_386ee8;
        case 0x386eecu: goto label_386eec;
        case 0x386ef0u: goto label_386ef0;
        case 0x386ef4u: goto label_386ef4;
        case 0x386ef8u: goto label_386ef8;
        case 0x386efcu: goto label_386efc;
        case 0x386f00u: goto label_386f00;
        case 0x386f04u: goto label_386f04;
        case 0x386f08u: goto label_386f08;
        case 0x386f0cu: goto label_386f0c;
        case 0x386f10u: goto label_386f10;
        case 0x386f14u: goto label_386f14;
        case 0x386f18u: goto label_386f18;
        case 0x386f1cu: goto label_386f1c;
        case 0x386f20u: goto label_386f20;
        case 0x386f24u: goto label_386f24;
        case 0x386f28u: goto label_386f28;
        case 0x386f2cu: goto label_386f2c;
        case 0x386f30u: goto label_386f30;
        case 0x386f34u: goto label_386f34;
        case 0x386f38u: goto label_386f38;
        case 0x386f3cu: goto label_386f3c;
        case 0x386f40u: goto label_386f40;
        case 0x386f44u: goto label_386f44;
        case 0x386f48u: goto label_386f48;
        case 0x386f4cu: goto label_386f4c;
        case 0x386f50u: goto label_386f50;
        case 0x386f54u: goto label_386f54;
        case 0x386f58u: goto label_386f58;
        case 0x386f5cu: goto label_386f5c;
        case 0x386f60u: goto label_386f60;
        case 0x386f64u: goto label_386f64;
        case 0x386f68u: goto label_386f68;
        case 0x386f6cu: goto label_386f6c;
        case 0x386f70u: goto label_386f70;
        case 0x386f74u: goto label_386f74;
        case 0x386f78u: goto label_386f78;
        case 0x386f7cu: goto label_386f7c;
        case 0x386f80u: goto label_386f80;
        case 0x386f84u: goto label_386f84;
        case 0x386f88u: goto label_386f88;
        case 0x386f8cu: goto label_386f8c;
        case 0x386f90u: goto label_386f90;
        case 0x386f94u: goto label_386f94;
        case 0x386f98u: goto label_386f98;
        case 0x386f9cu: goto label_386f9c;
        case 0x386fa0u: goto label_386fa0;
        case 0x386fa4u: goto label_386fa4;
        case 0x386fa8u: goto label_386fa8;
        case 0x386facu: goto label_386fac;
        case 0x386fb0u: goto label_386fb0;
        case 0x386fb4u: goto label_386fb4;
        case 0x386fb8u: goto label_386fb8;
        case 0x386fbcu: goto label_386fbc;
        case 0x386fc0u: goto label_386fc0;
        case 0x386fc4u: goto label_386fc4;
        case 0x386fc8u: goto label_386fc8;
        case 0x386fccu: goto label_386fcc;
        case 0x386fd0u: goto label_386fd0;
        case 0x386fd4u: goto label_386fd4;
        case 0x386fd8u: goto label_386fd8;
        case 0x386fdcu: goto label_386fdc;
        case 0x386fe0u: goto label_386fe0;
        case 0x386fe4u: goto label_386fe4;
        case 0x386fe8u: goto label_386fe8;
        case 0x386fecu: goto label_386fec;
        case 0x386ff0u: goto label_386ff0;
        case 0x386ff4u: goto label_386ff4;
        case 0x386ff8u: goto label_386ff8;
        case 0x386ffcu: goto label_386ffc;
        case 0x387000u: goto label_387000;
        case 0x387004u: goto label_387004;
        case 0x387008u: goto label_387008;
        case 0x38700cu: goto label_38700c;
        case 0x387010u: goto label_387010;
        case 0x387014u: goto label_387014;
        case 0x387018u: goto label_387018;
        case 0x38701cu: goto label_38701c;
        case 0x387020u: goto label_387020;
        case 0x387024u: goto label_387024;
        case 0x387028u: goto label_387028;
        case 0x38702cu: goto label_38702c;
        case 0x387030u: goto label_387030;
        case 0x387034u: goto label_387034;
        case 0x387038u: goto label_387038;
        case 0x38703cu: goto label_38703c;
        case 0x387040u: goto label_387040;
        case 0x387044u: goto label_387044;
        case 0x387048u: goto label_387048;
        case 0x38704cu: goto label_38704c;
        case 0x387050u: goto label_387050;
        case 0x387054u: goto label_387054;
        case 0x387058u: goto label_387058;
        case 0x38705cu: goto label_38705c;
        case 0x387060u: goto label_387060;
        case 0x387064u: goto label_387064;
        case 0x387068u: goto label_387068;
        case 0x38706cu: goto label_38706c;
        case 0x387070u: goto label_387070;
        case 0x387074u: goto label_387074;
        case 0x387078u: goto label_387078;
        case 0x38707cu: goto label_38707c;
        case 0x387080u: goto label_387080;
        case 0x387084u: goto label_387084;
        case 0x387088u: goto label_387088;
        case 0x38708cu: goto label_38708c;
        case 0x387090u: goto label_387090;
        case 0x387094u: goto label_387094;
        case 0x387098u: goto label_387098;
        case 0x38709cu: goto label_38709c;
        case 0x3870a0u: goto label_3870a0;
        case 0x3870a4u: goto label_3870a4;
        case 0x3870a8u: goto label_3870a8;
        case 0x3870acu: goto label_3870ac;
        case 0x3870b0u: goto label_3870b0;
        case 0x3870b4u: goto label_3870b4;
        case 0x3870b8u: goto label_3870b8;
        case 0x3870bcu: goto label_3870bc;
        case 0x3870c0u: goto label_3870c0;
        case 0x3870c4u: goto label_3870c4;
        case 0x3870c8u: goto label_3870c8;
        case 0x3870ccu: goto label_3870cc;
        case 0x3870d0u: goto label_3870d0;
        case 0x3870d4u: goto label_3870d4;
        case 0x3870d8u: goto label_3870d8;
        case 0x3870dcu: goto label_3870dc;
        case 0x3870e0u: goto label_3870e0;
        case 0x3870e4u: goto label_3870e4;
        case 0x3870e8u: goto label_3870e8;
        case 0x3870ecu: goto label_3870ec;
        case 0x3870f0u: goto label_3870f0;
        case 0x3870f4u: goto label_3870f4;
        case 0x3870f8u: goto label_3870f8;
        case 0x3870fcu: goto label_3870fc;
        case 0x387100u: goto label_387100;
        case 0x387104u: goto label_387104;
        case 0x387108u: goto label_387108;
        case 0x38710cu: goto label_38710c;
        case 0x387110u: goto label_387110;
        case 0x387114u: goto label_387114;
        case 0x387118u: goto label_387118;
        case 0x38711cu: goto label_38711c;
        case 0x387120u: goto label_387120;
        case 0x387124u: goto label_387124;
        case 0x387128u: goto label_387128;
        case 0x38712cu: goto label_38712c;
        case 0x387130u: goto label_387130;
        case 0x387134u: goto label_387134;
        case 0x387138u: goto label_387138;
        case 0x38713cu: goto label_38713c;
        case 0x387140u: goto label_387140;
        case 0x387144u: goto label_387144;
        case 0x387148u: goto label_387148;
        case 0x38714cu: goto label_38714c;
        case 0x387150u: goto label_387150;
        case 0x387154u: goto label_387154;
        case 0x387158u: goto label_387158;
        case 0x38715cu: goto label_38715c;
        case 0x387160u: goto label_387160;
        case 0x387164u: goto label_387164;
        case 0x387168u: goto label_387168;
        case 0x38716cu: goto label_38716c;
        case 0x387170u: goto label_387170;
        case 0x387174u: goto label_387174;
        case 0x387178u: goto label_387178;
        case 0x38717cu: goto label_38717c;
        case 0x387180u: goto label_387180;
        case 0x387184u: goto label_387184;
        case 0x387188u: goto label_387188;
        case 0x38718cu: goto label_38718c;
        case 0x387190u: goto label_387190;
        case 0x387194u: goto label_387194;
        case 0x387198u: goto label_387198;
        case 0x38719cu: goto label_38719c;
        case 0x3871a0u: goto label_3871a0;
        case 0x3871a4u: goto label_3871a4;
        case 0x3871a8u: goto label_3871a8;
        case 0x3871acu: goto label_3871ac;
        case 0x3871b0u: goto label_3871b0;
        case 0x3871b4u: goto label_3871b4;
        case 0x3871b8u: goto label_3871b8;
        case 0x3871bcu: goto label_3871bc;
        case 0x3871c0u: goto label_3871c0;
        case 0x3871c4u: goto label_3871c4;
        case 0x3871c8u: goto label_3871c8;
        case 0x3871ccu: goto label_3871cc;
        case 0x3871d0u: goto label_3871d0;
        case 0x3871d4u: goto label_3871d4;
        case 0x3871d8u: goto label_3871d8;
        case 0x3871dcu: goto label_3871dc;
        case 0x3871e0u: goto label_3871e0;
        case 0x3871e4u: goto label_3871e4;
        case 0x3871e8u: goto label_3871e8;
        case 0x3871ecu: goto label_3871ec;
        case 0x3871f0u: goto label_3871f0;
        case 0x3871f4u: goto label_3871f4;
        case 0x3871f8u: goto label_3871f8;
        case 0x3871fcu: goto label_3871fc;
        case 0x387200u: goto label_387200;
        case 0x387204u: goto label_387204;
        case 0x387208u: goto label_387208;
        case 0x38720cu: goto label_38720c;
        case 0x387210u: goto label_387210;
        case 0x387214u: goto label_387214;
        case 0x387218u: goto label_387218;
        case 0x38721cu: goto label_38721c;
        case 0x387220u: goto label_387220;
        case 0x387224u: goto label_387224;
        case 0x387228u: goto label_387228;
        case 0x38722cu: goto label_38722c;
        case 0x387230u: goto label_387230;
        case 0x387234u: goto label_387234;
        case 0x387238u: goto label_387238;
        case 0x38723cu: goto label_38723c;
        case 0x387240u: goto label_387240;
        case 0x387244u: goto label_387244;
        case 0x387248u: goto label_387248;
        case 0x38724cu: goto label_38724c;
        case 0x387250u: goto label_387250;
        case 0x387254u: goto label_387254;
        case 0x387258u: goto label_387258;
        case 0x38725cu: goto label_38725c;
        case 0x387260u: goto label_387260;
        case 0x387264u: goto label_387264;
        case 0x387268u: goto label_387268;
        case 0x38726cu: goto label_38726c;
        case 0x387270u: goto label_387270;
        case 0x387274u: goto label_387274;
        case 0x387278u: goto label_387278;
        case 0x38727cu: goto label_38727c;
        case 0x387280u: goto label_387280;
        case 0x387284u: goto label_387284;
        case 0x387288u: goto label_387288;
        case 0x38728cu: goto label_38728c;
        case 0x387290u: goto label_387290;
        case 0x387294u: goto label_387294;
        case 0x387298u: goto label_387298;
        case 0x38729cu: goto label_38729c;
        case 0x3872a0u: goto label_3872a0;
        case 0x3872a4u: goto label_3872a4;
        case 0x3872a8u: goto label_3872a8;
        case 0x3872acu: goto label_3872ac;
        case 0x3872b0u: goto label_3872b0;
        case 0x3872b4u: goto label_3872b4;
        case 0x3872b8u: goto label_3872b8;
        case 0x3872bcu: goto label_3872bc;
        case 0x3872c0u: goto label_3872c0;
        case 0x3872c4u: goto label_3872c4;
        case 0x3872c8u: goto label_3872c8;
        case 0x3872ccu: goto label_3872cc;
        case 0x3872d0u: goto label_3872d0;
        case 0x3872d4u: goto label_3872d4;
        case 0x3872d8u: goto label_3872d8;
        case 0x3872dcu: goto label_3872dc;
        case 0x3872e0u: goto label_3872e0;
        case 0x3872e4u: goto label_3872e4;
        case 0x3872e8u: goto label_3872e8;
        case 0x3872ecu: goto label_3872ec;
        case 0x3872f0u: goto label_3872f0;
        case 0x3872f4u: goto label_3872f4;
        case 0x3872f8u: goto label_3872f8;
        case 0x3872fcu: goto label_3872fc;
        case 0x387300u: goto label_387300;
        case 0x387304u: goto label_387304;
        case 0x387308u: goto label_387308;
        case 0x38730cu: goto label_38730c;
        case 0x387310u: goto label_387310;
        case 0x387314u: goto label_387314;
        case 0x387318u: goto label_387318;
        case 0x38731cu: goto label_38731c;
        case 0x387320u: goto label_387320;
        case 0x387324u: goto label_387324;
        case 0x387328u: goto label_387328;
        case 0x38732cu: goto label_38732c;
        case 0x387330u: goto label_387330;
        case 0x387334u: goto label_387334;
        case 0x387338u: goto label_387338;
        case 0x38733cu: goto label_38733c;
        case 0x387340u: goto label_387340;
        case 0x387344u: goto label_387344;
        case 0x387348u: goto label_387348;
        case 0x38734cu: goto label_38734c;
        case 0x387350u: goto label_387350;
        case 0x387354u: goto label_387354;
        case 0x387358u: goto label_387358;
        case 0x38735cu: goto label_38735c;
        case 0x387360u: goto label_387360;
        case 0x387364u: goto label_387364;
        case 0x387368u: goto label_387368;
        case 0x38736cu: goto label_38736c;
        case 0x387370u: goto label_387370;
        case 0x387374u: goto label_387374;
        case 0x387378u: goto label_387378;
        case 0x38737cu: goto label_38737c;
        case 0x387380u: goto label_387380;
        case 0x387384u: goto label_387384;
        case 0x387388u: goto label_387388;
        case 0x38738cu: goto label_38738c;
        case 0x387390u: goto label_387390;
        case 0x387394u: goto label_387394;
        case 0x387398u: goto label_387398;
        case 0x38739cu: goto label_38739c;
        case 0x3873a0u: goto label_3873a0;
        case 0x3873a4u: goto label_3873a4;
        case 0x3873a8u: goto label_3873a8;
        case 0x3873acu: goto label_3873ac;
        case 0x3873b0u: goto label_3873b0;
        case 0x3873b4u: goto label_3873b4;
        case 0x3873b8u: goto label_3873b8;
        case 0x3873bcu: goto label_3873bc;
        case 0x3873c0u: goto label_3873c0;
        case 0x3873c4u: goto label_3873c4;
        case 0x3873c8u: goto label_3873c8;
        case 0x3873ccu: goto label_3873cc;
        case 0x3873d0u: goto label_3873d0;
        case 0x3873d4u: goto label_3873d4;
        case 0x3873d8u: goto label_3873d8;
        case 0x3873dcu: goto label_3873dc;
        case 0x3873e0u: goto label_3873e0;
        case 0x3873e4u: goto label_3873e4;
        case 0x3873e8u: goto label_3873e8;
        case 0x3873ecu: goto label_3873ec;
        case 0x3873f0u: goto label_3873f0;
        case 0x3873f4u: goto label_3873f4;
        case 0x3873f8u: goto label_3873f8;
        case 0x3873fcu: goto label_3873fc;
        case 0x387400u: goto label_387400;
        case 0x387404u: goto label_387404;
        case 0x387408u: goto label_387408;
        case 0x38740cu: goto label_38740c;
        case 0x387410u: goto label_387410;
        case 0x387414u: goto label_387414;
        case 0x387418u: goto label_387418;
        case 0x38741cu: goto label_38741c;
        case 0x387420u: goto label_387420;
        case 0x387424u: goto label_387424;
        case 0x387428u: goto label_387428;
        case 0x38742cu: goto label_38742c;
        case 0x387430u: goto label_387430;
        case 0x387434u: goto label_387434;
        case 0x387438u: goto label_387438;
        case 0x38743cu: goto label_38743c;
        case 0x387440u: goto label_387440;
        case 0x387444u: goto label_387444;
        case 0x387448u: goto label_387448;
        case 0x38744cu: goto label_38744c;
        case 0x387450u: goto label_387450;
        case 0x387454u: goto label_387454;
        case 0x387458u: goto label_387458;
        case 0x38745cu: goto label_38745c;
        case 0x387460u: goto label_387460;
        case 0x387464u: goto label_387464;
        case 0x387468u: goto label_387468;
        case 0x38746cu: goto label_38746c;
        case 0x387470u: goto label_387470;
        case 0x387474u: goto label_387474;
        case 0x387478u: goto label_387478;
        case 0x38747cu: goto label_38747c;
        case 0x387480u: goto label_387480;
        case 0x387484u: goto label_387484;
        case 0x387488u: goto label_387488;
        case 0x38748cu: goto label_38748c;
        case 0x387490u: goto label_387490;
        case 0x387494u: goto label_387494;
        case 0x387498u: goto label_387498;
        case 0x38749cu: goto label_38749c;
        case 0x3874a0u: goto label_3874a0;
        case 0x3874a4u: goto label_3874a4;
        case 0x3874a8u: goto label_3874a8;
        case 0x3874acu: goto label_3874ac;
        case 0x3874b0u: goto label_3874b0;
        case 0x3874b4u: goto label_3874b4;
        case 0x3874b8u: goto label_3874b8;
        case 0x3874bcu: goto label_3874bc;
        case 0x3874c0u: goto label_3874c0;
        case 0x3874c4u: goto label_3874c4;
        case 0x3874c8u: goto label_3874c8;
        case 0x3874ccu: goto label_3874cc;
        case 0x3874d0u: goto label_3874d0;
        case 0x3874d4u: goto label_3874d4;
        case 0x3874d8u: goto label_3874d8;
        case 0x3874dcu: goto label_3874dc;
        case 0x3874e0u: goto label_3874e0;
        case 0x3874e4u: goto label_3874e4;
        case 0x3874e8u: goto label_3874e8;
        case 0x3874ecu: goto label_3874ec;
        case 0x3874f0u: goto label_3874f0;
        case 0x3874f4u: goto label_3874f4;
        case 0x3874f8u: goto label_3874f8;
        case 0x3874fcu: goto label_3874fc;
        case 0x387500u: goto label_387500;
        case 0x387504u: goto label_387504;
        case 0x387508u: goto label_387508;
        case 0x38750cu: goto label_38750c;
        case 0x387510u: goto label_387510;
        case 0x387514u: goto label_387514;
        case 0x387518u: goto label_387518;
        case 0x38751cu: goto label_38751c;
        default: break;
    }

    ctx->pc = 0x386e40u;

label_386e40:
    // 0x386e40: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x386e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_386e44:
    // 0x386e44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x386e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_386e48:
    // 0x386e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x386e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_386e4c:
    // 0x386e4c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x386e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_386e50:
    // 0x386e50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x386e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_386e54:
    // 0x386e54: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x386e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_386e58:
    // 0x386e58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x386e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_386e5c:
    // 0x386e5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_386e60:
    // 0x386e60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x386e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386e64:
    // 0x386e64: 0xc0aeaf4  jal         func_2BABD0
label_386e68:
    if (ctx->pc == 0x386E68u) {
        ctx->pc = 0x386E68u;
            // 0x386e68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x386E6Cu;
        goto label_386e6c;
    }
    ctx->pc = 0x386E64u;
    SET_GPR_U32(ctx, 31, 0x386E6Cu);
    ctx->pc = 0x386E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386E64u;
            // 0x386e68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E6Cu; }
        if (ctx->pc != 0x386E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E6Cu; }
        if (ctx->pc != 0x386E6Cu) { return; }
    }
    ctx->pc = 0x386E6Cu;
label_386e6c:
    // 0x386e6c: 0xc0e1e18  jal         func_387860
label_386e70:
    if (ctx->pc == 0x386E70u) {
        ctx->pc = 0x386E70u;
            // 0x386e70: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x386E74u;
        goto label_386e74;
    }
    ctx->pc = 0x386E6Cu;
    SET_GPR_U32(ctx, 31, 0x386E74u);
    ctx->pc = 0x386E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386E6Cu;
            // 0x386e70: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387860u;
    if (runtime->hasFunction(0x387860u)) {
        auto targetFn = runtime->lookupFunction(0x387860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E74u; }
        if (ctx->pc != 0x386E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387860_0x387860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E74u; }
        if (ctx->pc != 0x386E74u) { return; }
    }
    ctx->pc = 0x386E74u;
label_386e74:
    // 0x386e74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x386e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_386e78:
    // 0x386e78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386e7c:
    // 0x386e7c: 0x24637ac0  addiu       $v1, $v1, 0x7AC0
    ctx->pc = 0x386e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31424));
label_386e80:
    // 0x386e80: 0x24427af8  addiu       $v0, $v0, 0x7AF8
    ctx->pc = 0x386e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31480));
label_386e84:
    // 0x386e84: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x386e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_386e88:
    // 0x386e88: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x386e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_386e8c:
    // 0x386e8c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x386e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_386e90:
    // 0x386e90: 0xc0e1e10  jal         func_387840
label_386e94:
    if (ctx->pc == 0x386E94u) {
        ctx->pc = 0x386E94u;
            // 0x386e94: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x386E98u;
        goto label_386e98;
    }
    ctx->pc = 0x386E90u;
    SET_GPR_U32(ctx, 31, 0x386E98u);
    ctx->pc = 0x386E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386E90u;
            // 0x386e94: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387840u;
    if (runtime->hasFunction(0x387840u)) {
        auto targetFn = runtime->lookupFunction(0x387840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E98u; }
        if (ctx->pc != 0x386E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387840_0x387840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E98u; }
        if (ctx->pc != 0x386E98u) { return; }
    }
    ctx->pc = 0x386E98u;
label_386e98:
    // 0x386e98: 0xc0e1e10  jal         func_387840
label_386e9c:
    if (ctx->pc == 0x386E9Cu) {
        ctx->pc = 0x386E9Cu;
            // 0x386e9c: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x386EA0u;
        goto label_386ea0;
    }
    ctx->pc = 0x386E98u;
    SET_GPR_U32(ctx, 31, 0x386EA0u);
    ctx->pc = 0x386E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386E98u;
            // 0x386e9c: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387840u;
    if (runtime->hasFunction(0x387840u)) {
        auto targetFn = runtime->lookupFunction(0x387840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EA0u; }
        if (ctx->pc != 0x386EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387840_0x387840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EA0u; }
        if (ctx->pc != 0x386EA0u) { return; }
    }
    ctx->pc = 0x386EA0u;
label_386ea0:
    // 0x386ea0: 0xc0e1e08  jal         func_387820
label_386ea4:
    if (ctx->pc == 0x386EA4u) {
        ctx->pc = 0x386EA4u;
            // 0x386ea4: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x386EA8u;
        goto label_386ea8;
    }
    ctx->pc = 0x386EA0u;
    SET_GPR_U32(ctx, 31, 0x386EA8u);
    ctx->pc = 0x386EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386EA0u;
            // 0x386ea4: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387820u;
    if (runtime->hasFunction(0x387820u)) {
        auto targetFn = runtime->lookupFunction(0x387820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EA8u; }
        if (ctx->pc != 0x386EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387820_0x387820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EA8u; }
        if (ctx->pc != 0x386EA8u) { return; }
    }
    ctx->pc = 0x386EA8u;
label_386ea8:
    // 0x386ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x386ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_386eac:
    // 0x386eac: 0xc0aeac0  jal         func_2BAB00
label_386eb0:
    if (ctx->pc == 0x386EB0u) {
        ctx->pc = 0x386EB0u;
            // 0x386eb0: 0xae400098  sw          $zero, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x386EB4u;
        goto label_386eb4;
    }
    ctx->pc = 0x386EACu;
    SET_GPR_U32(ctx, 31, 0x386EB4u);
    ctx->pc = 0x386EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386EACu;
            // 0x386eb0: 0xae400098  sw          $zero, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EB4u; }
        if (ctx->pc != 0x386EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EB4u; }
        if (ctx->pc != 0x386EB4u) { return; }
    }
    ctx->pc = 0x386EB4u;
label_386eb4:
    // 0x386eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386eb8:
    // 0x386eb8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_386ebc:
    if (ctx->pc == 0x386EBCu) {
        ctx->pc = 0x386EC0u;
        goto label_386ec0;
    }
    ctx->pc = 0x386EB8u;
    {
        const bool branch_taken_0x386eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x386eb8) {
            ctx->pc = 0x386F40u;
            goto label_386f40;
        }
    }
    ctx->pc = 0x386EC0u;
label_386ec0:
    // 0x386ec0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x386ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_386ec4:
    // 0x386ec4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x386ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_386ec8:
    // 0x386ec8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x386ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_386ecc:
    // 0x386ecc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x386eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_386ed0:
    // 0x386ed0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x386ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_386ed4:
    // 0x386ed4: 0xc040138  jal         func_1004E0
label_386ed8:
    if (ctx->pc == 0x386ED8u) {
        ctx->pc = 0x386ED8u;
            // 0x386ed8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x386EDCu;
        goto label_386edc;
    }
    ctx->pc = 0x386ED4u;
    SET_GPR_U32(ctx, 31, 0x386EDCu);
    ctx->pc = 0x386ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386ED4u;
            // 0x386ed8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EDCu; }
        if (ctx->pc != 0x386EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EDCu; }
        if (ctx->pc != 0x386EDCu) { return; }
    }
    ctx->pc = 0x386EDCu;
label_386edc:
    // 0x386edc: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x386edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_386ee0:
    // 0x386ee0: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x386ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_386ee4:
    // 0x386ee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x386ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386ee8:
    // 0x386ee8: 0x24a57550  addiu       $a1, $a1, 0x7550
    ctx->pc = 0x386ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30032));
label_386eec:
    // 0x386eec: 0x24c66240  addiu       $a2, $a2, 0x6240
    ctx->pc = 0x386eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25152));
label_386ef0:
    // 0x386ef0: 0x240702f0  addiu       $a3, $zero, 0x2F0
    ctx->pc = 0x386ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
label_386ef4:
    // 0x386ef4: 0xc040840  jal         func_102100
label_386ef8:
    if (ctx->pc == 0x386EF8u) {
        ctx->pc = 0x386EF8u;
            // 0x386ef8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386EFCu;
        goto label_386efc;
    }
    ctx->pc = 0x386EF4u;
    SET_GPR_U32(ctx, 31, 0x386EFCu);
    ctx->pc = 0x386EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386EF4u;
            // 0x386ef8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EFCu; }
        if (ctx->pc != 0x386EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386EFCu; }
        if (ctx->pc != 0x386EFCu) { return; }
    }
    ctx->pc = 0x386EFCu;
label_386efc:
    // 0x386efc: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x386efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_386f00:
    // 0x386f00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x386f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386f04:
    // 0x386f04: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x386f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_386f08:
    // 0x386f08: 0xc0e1d50  jal         func_387540
label_386f0c:
    if (ctx->pc == 0x386F0Cu) {
        ctx->pc = 0x386F0Cu;
            // 0x386f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386F10u;
        goto label_386f10;
    }
    ctx->pc = 0x386F08u;
    SET_GPR_U32(ctx, 31, 0x386F10u);
    ctx->pc = 0x386F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386F08u;
            // 0x386f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387540u;
    if (runtime->hasFunction(0x387540u)) {
        auto targetFn = runtime->lookupFunction(0x387540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386F10u; }
        if (ctx->pc != 0x386F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387540_0x387540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386F10u; }
        if (ctx->pc != 0x386F10u) { return; }
    }
    ctx->pc = 0x386F10u;
label_386f10:
    // 0x386f10: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x386f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_386f14:
    // 0x386f14: 0xc0e1d50  jal         func_387540
label_386f18:
    if (ctx->pc == 0x386F18u) {
        ctx->pc = 0x386F18u;
            // 0x386f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386F1Cu;
        goto label_386f1c;
    }
    ctx->pc = 0x386F14u;
    SET_GPR_U32(ctx, 31, 0x386F1Cu);
    ctx->pc = 0x386F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386F14u;
            // 0x386f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387540u;
    if (runtime->hasFunction(0x387540u)) {
        auto targetFn = runtime->lookupFunction(0x387540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386F1Cu; }
        if (ctx->pc != 0x386F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387540_0x387540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386F1Cu; }
        if (ctx->pc != 0x386F1Cu) { return; }
    }
    ctx->pc = 0x386F1Cu;
label_386f1c:
    // 0x386f1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x386f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386f20:
    // 0x386f20: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x386f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_386f24:
    // 0x386f24: 0x27a5012c  addiu       $a1, $sp, 0x12C
    ctx->pc = 0x386f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_386f28:
    // 0x386f28: 0xc0e1d48  jal         func_387520
label_386f2c:
    if (ctx->pc == 0x386F2Cu) {
        ctx->pc = 0x386F2Cu;
            // 0x386f2c: 0xafb3012c  sw          $s3, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 19));
        ctx->pc = 0x386F30u;
        goto label_386f30;
    }
    ctx->pc = 0x386F28u;
    SET_GPR_U32(ctx, 31, 0x386F30u);
    ctx->pc = 0x386F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386F28u;
            // 0x386f2c: 0xafb3012c  sw          $s3, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387520u;
    if (runtime->hasFunction(0x387520u)) {
        auto targetFn = runtime->lookupFunction(0x387520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386F30u; }
        if (ctx->pc != 0x386F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387520_0x387520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386F30u; }
        if (ctx->pc != 0x386F30u) { return; }
    }
    ctx->pc = 0x386F30u;
label_386f30:
    // 0x386f30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x386f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_386f34:
    // 0x386f34: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x386f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_386f38:
    // 0x386f38: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_386f3c:
    if (ctx->pc == 0x386F3Cu) {
        ctx->pc = 0x386F3Cu;
            // 0x386f3c: 0x267302f0  addiu       $s3, $s3, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
        ctx->pc = 0x386F40u;
        goto label_386f40;
    }
    ctx->pc = 0x386F38u;
    {
        const bool branch_taken_0x386f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386F38u;
            // 0x386f3c: 0x267302f0  addiu       $s3, $s3, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f38) {
            ctx->pc = 0x386F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_386f20;
        }
    }
    ctx->pc = 0x386F40u;
label_386f40:
    // 0x386f40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386f44:
    // 0x386f44: 0x244279c0  addiu       $v0, $v0, 0x79C0
    ctx->pc = 0x386f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31168));
label_386f48:
    // 0x386f48: 0x3c0340b0  lui         $v1, 0x40B0
    ctx->pc = 0x386f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16560 << 16));
label_386f4c:
    // 0x386f4c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x386f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_386f50:
    // 0x386f50: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x386f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_386f54:
    // 0x386f54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386f58:
    // 0x386f58: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x386f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_386f5c:
    // 0x386f5c: 0x244279f8  addiu       $v0, $v0, 0x79F8
    ctx->pc = 0x386f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31224));
label_386f60:
    // 0x386f60: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x386f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_386f64:
    // 0x386f64: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x386f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_386f68:
    // 0x386f68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x386f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_386f6c:
    // 0x386f6c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x386f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_386f70:
    // 0x386f70: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x386f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_386f74:
    // 0x386f74: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x386f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_386f78:
    // 0x386f78: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x386f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_386f7c:
    // 0x386f7c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x386f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_386f80:
    // 0x386f80: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x386f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_386f84:
    // 0x386f84: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x386f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
label_386f88:
    // 0x386f88: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x386f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_386f8c:
    // 0x386f8c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x386f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_386f90:
    // 0x386f90: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x386f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_386f94:
    // 0x386f94: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x386f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_386f98:
    // 0x386f98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x386f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_386f9c:
    // 0x386f9c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x386f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_386fa0:
    // 0x386fa0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x386fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_386fa4:
    // 0x386fa4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x386fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_386fa8:
    // 0x386fa8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x386fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_386fac:
    // 0x386fac: 0xc0a7a88  jal         func_29EA20
label_386fb0:
    if (ctx->pc == 0x386FB0u) {
        ctx->pc = 0x386FB0u;
            // 0x386fb0: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x386FB4u;
        goto label_386fb4;
    }
    ctx->pc = 0x386FACu;
    SET_GPR_U32(ctx, 31, 0x386FB4u);
    ctx->pc = 0x386FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386FACu;
            // 0x386fb0: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386FB4u; }
        if (ctx->pc != 0x386FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386FB4u; }
        if (ctx->pc != 0x386FB4u) { return; }
    }
    ctx->pc = 0x386FB4u;
label_386fb4:
    // 0x386fb4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x386fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_386fb8:
    // 0x386fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x386fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386fbc:
    // 0x386fbc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_386fc0:
    if (ctx->pc == 0x386FC0u) {
        ctx->pc = 0x386FC0u;
            // 0x386fc0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x386FC4u;
        goto label_386fc4;
    }
    ctx->pc = 0x386FBCu;
    {
        const bool branch_taken_0x386fbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386FBCu;
            // 0x386fc0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fbc) {
            ctx->pc = 0x386FDCu;
            goto label_386fdc;
        }
    }
    ctx->pc = 0x386FC4u;
label_386fc4:
    // 0x386fc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x386fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_386fc8:
    // 0x386fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386fcc:
    // 0x386fcc: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x386fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_386fd0:
    // 0x386fd0: 0xc0804bc  jal         func_2012F0
label_386fd4:
    if (ctx->pc == 0x386FD4u) {
        ctx->pc = 0x386FD4u;
            // 0x386fd4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x386FD8u;
        goto label_386fd8;
    }
    ctx->pc = 0x386FD0u;
    SET_GPR_U32(ctx, 31, 0x386FD8u);
    ctx->pc = 0x386FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386FD0u;
            // 0x386fd4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386FD8u; }
        if (ctx->pc != 0x386FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386FD8u; }
        if (ctx->pc != 0x386FD8u) { return; }
    }
    ctx->pc = 0x386FD8u;
label_386fd8:
    // 0x386fd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x386fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386fdc:
    // 0x386fdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x386fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_386fe0:
    // 0x386fe0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x386fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_386fe4:
    // 0x386fe4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x386fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_386fe8:
    // 0x386fe8: 0xc0a7a88  jal         func_29EA20
label_386fec:
    if (ctx->pc == 0x386FECu) {
        ctx->pc = 0x386FECu;
            // 0x386fec: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x386FF0u;
        goto label_386ff0;
    }
    ctx->pc = 0x386FE8u;
    SET_GPR_U32(ctx, 31, 0x386FF0u);
    ctx->pc = 0x386FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386FE8u;
            // 0x386fec: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386FF0u; }
        if (ctx->pc != 0x386FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386FF0u; }
        if (ctx->pc != 0x386FF0u) { return; }
    }
    ctx->pc = 0x386FF0u;
label_386ff0:
    // 0x386ff0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x386ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_386ff4:
    // 0x386ff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386ff8:
    // 0x386ff8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_386ffc:
    if (ctx->pc == 0x386FFCu) {
        ctx->pc = 0x386FFCu;
            // 0x386ffc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x387000u;
        goto label_387000;
    }
    ctx->pc = 0x386FF8u;
    {
        const bool branch_taken_0x386ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386FF8u;
            // 0x386ffc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ff8) {
            ctx->pc = 0x387018u;
            goto label_387018;
        }
    }
    ctx->pc = 0x387000u;
label_387000:
    // 0x387000: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x387000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_387004:
    // 0x387004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387008:
    // 0x387008: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x387008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38700c:
    // 0x38700c: 0xc0804bc  jal         func_2012F0
label_387010:
    if (ctx->pc == 0x387010u) {
        ctx->pc = 0x387010u;
            // 0x387010: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x387014u;
        goto label_387014;
    }
    ctx->pc = 0x38700Cu;
    SET_GPR_U32(ctx, 31, 0x387014u);
    ctx->pc = 0x387010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38700Cu;
            // 0x387010: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387014u; }
        if (ctx->pc != 0x387014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387014u; }
        if (ctx->pc != 0x387014u) { return; }
    }
    ctx->pc = 0x387014u;
label_387014:
    // 0x387014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x387014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387018:
    // 0x387018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x387018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38701c:
    // 0x38701c: 0x3c0640c0  lui         $a2, 0x40C0
    ctx->pc = 0x38701cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16576 << 16));
label_387020:
    // 0x387020: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x387020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_387024:
    // 0x387024: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x387024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_387028:
    // 0x387028: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x387028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_38702c:
    // 0x38702c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38702cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_387030:
    // 0x387030: 0xafa60114  sw          $a2, 0x114($sp)
    ctx->pc = 0x387030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 6));
label_387034:
    // 0x387034: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x387034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_387038:
    // 0x387038: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x387038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
label_38703c:
    // 0x38703c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x38703cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_387040:
    // 0x387040: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x387040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_387044:
    // 0x387044: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x387044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_387048:
    // 0x387048: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x387048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_38704c:
    // 0x38704c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x38704cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_387050:
    // 0x387050: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x387050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_387054:
    // 0x387054: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x387054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_387058:
    // 0x387058: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x387058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_38705c:
    // 0x38705c: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x38705cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_387060:
    // 0x387060: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x387060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_387064:
    // 0x387064: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x387064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_387068:
    // 0x387068: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x387068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_38706c:
    // 0x38706c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x38706cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_387070:
    // 0x387070: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x387070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_387074:
    // 0x387074: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x387074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_387078:
    // 0x387078: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x387078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_38707c:
    // 0x38707c: 0xc0a3830  jal         func_28E0C0
label_387080:
    if (ctx->pc == 0x387080u) {
        ctx->pc = 0x387080u;
            // 0x387080: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x387084u;
        goto label_387084;
    }
    ctx->pc = 0x38707Cu;
    SET_GPR_U32(ctx, 31, 0x387084u);
    ctx->pc = 0x387080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38707Cu;
            // 0x387080: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387084u; }
        if (ctx->pc != 0x387084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387084u; }
        if (ctx->pc != 0x387084u) { return; }
    }
    ctx->pc = 0x387084u;
label_387084:
    // 0x387084: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x387084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_387088:
    // 0x387088: 0xc0a3830  jal         func_28E0C0
label_38708c:
    if (ctx->pc == 0x38708Cu) {
        ctx->pc = 0x38708Cu;
            // 0x38708c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x387090u;
        goto label_387090;
    }
    ctx->pc = 0x387088u;
    SET_GPR_U32(ctx, 31, 0x387090u);
    ctx->pc = 0x38708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387088u;
            // 0x38708c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387090u; }
        if (ctx->pc != 0x387090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387090u; }
        if (ctx->pc != 0x387090u) { return; }
    }
    ctx->pc = 0x387090u;
label_387090:
    // 0x387090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x387090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_387094:
    // 0x387094: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x387094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_387098:
    // 0x387098: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x387098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_38709c:
    // 0x38709c: 0xc0a7a88  jal         func_29EA20
label_3870a0:
    if (ctx->pc == 0x3870A0u) {
        ctx->pc = 0x3870A0u;
            // 0x3870a0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3870A4u;
        goto label_3870a4;
    }
    ctx->pc = 0x38709Cu;
    SET_GPR_U32(ctx, 31, 0x3870A4u);
    ctx->pc = 0x3870A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38709Cu;
            // 0x3870a0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870A4u; }
        if (ctx->pc != 0x3870A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870A4u; }
        if (ctx->pc != 0x3870A4u) { return; }
    }
    ctx->pc = 0x3870A4u;
label_3870a4:
    // 0x3870a4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3870a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3870a8:
    // 0x3870a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3870a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3870ac:
    // 0x3870ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3870b0:
    if (ctx->pc == 0x3870B0u) {
        ctx->pc = 0x3870B0u;
            // 0x3870b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3870B4u;
        goto label_3870b4;
    }
    ctx->pc = 0x3870ACu;
    {
        const bool branch_taken_0x3870ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3870B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3870ACu;
            // 0x3870b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3870ac) {
            ctx->pc = 0x3870C4u;
            goto label_3870c4;
        }
    }
    ctx->pc = 0x3870B4u;
label_3870b4:
    // 0x3870b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3870b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3870b8:
    // 0x3870b8: 0xc082940  jal         func_20A500
label_3870bc:
    if (ctx->pc == 0x3870BCu) {
        ctx->pc = 0x3870BCu;
            // 0x3870bc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3870C0u;
        goto label_3870c0;
    }
    ctx->pc = 0x3870B8u;
    SET_GPR_U32(ctx, 31, 0x3870C0u);
    ctx->pc = 0x3870BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3870B8u;
            // 0x3870bc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870C0u; }
        if (ctx->pc != 0x3870C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870C0u; }
        if (ctx->pc != 0x3870C0u) { return; }
    }
    ctx->pc = 0x3870C0u;
label_3870c0:
    // 0x3870c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3870c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3870c4:
    // 0x3870c4: 0xae4400a0  sw          $a0, 0xA0($s2)
    ctx->pc = 0x3870c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 4));
label_3870c8:
    // 0x3870c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3870c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3870cc:
    // 0x3870cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3870ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3870d0:
    // 0x3870d0: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3870d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3870d4:
    // 0x3870d4: 0xc0a7a88  jal         func_29EA20
label_3870d8:
    if (ctx->pc == 0x3870D8u) {
        ctx->pc = 0x3870D8u;
            // 0x3870d8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3870DCu;
        goto label_3870dc;
    }
    ctx->pc = 0x3870D4u;
    SET_GPR_U32(ctx, 31, 0x3870DCu);
    ctx->pc = 0x3870D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3870D4u;
            // 0x3870d8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870DCu; }
        if (ctx->pc != 0x3870DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870DCu; }
        if (ctx->pc != 0x3870DCu) { return; }
    }
    ctx->pc = 0x3870DCu;
label_3870dc:
    // 0x3870dc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3870dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3870e0:
    // 0x3870e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3870e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3870e4:
    // 0x3870e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3870e8:
    if (ctx->pc == 0x3870E8u) {
        ctx->pc = 0x3870E8u;
            // 0x3870e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3870ECu;
        goto label_3870ec;
    }
    ctx->pc = 0x3870E4u;
    {
        const bool branch_taken_0x3870e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3870E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3870E4u;
            // 0x3870e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3870e4) {
            ctx->pc = 0x3870FCu;
            goto label_3870fc;
        }
    }
    ctx->pc = 0x3870ECu;
label_3870ec:
    // 0x3870ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3870ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3870f0:
    // 0x3870f0: 0xc082940  jal         func_20A500
label_3870f4:
    if (ctx->pc == 0x3870F4u) {
        ctx->pc = 0x3870F4u;
            // 0x3870f4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3870F8u;
        goto label_3870f8;
    }
    ctx->pc = 0x3870F0u;
    SET_GPR_U32(ctx, 31, 0x3870F8u);
    ctx->pc = 0x3870F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3870F0u;
            // 0x3870f4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870F8u; }
        if (ctx->pc != 0x3870F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3870F8u; }
        if (ctx->pc != 0x3870F8u) { return; }
    }
    ctx->pc = 0x3870F8u;
label_3870f8:
    // 0x3870f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3870f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3870fc:
    // 0x3870fc: 0xae4400a4  sw          $a0, 0xA4($s2)
    ctx->pc = 0x3870fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 4));
label_387100:
    // 0x387100: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x387100u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_387104:
    // 0x387104: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_387108:
    if (ctx->pc == 0x387108u) {
        ctx->pc = 0x387108u;
            // 0x387108: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x38710Cu;
        goto label_38710c;
    }
    ctx->pc = 0x387104u;
    {
        const bool branch_taken_0x387104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387104) {
            ctx->pc = 0x387108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387104u;
            // 0x387108: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387148u;
            goto label_387148;
        }
    }
    ctx->pc = 0x38710Cu;
label_38710c:
    // 0x38710c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x38710cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_387110:
    // 0x387110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x387110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_387114:
    // 0x387114: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x387114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_387118:
    // 0x387118: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x387118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_38711c:
    // 0x38711c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38711cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_387120:
    // 0x387120: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_387124:
    if (ctx->pc == 0x387124u) {
        ctx->pc = 0x387128u;
        goto label_387128;
    }
    ctx->pc = 0x387120u;
    {
        const bool branch_taken_0x387120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387120) {
            ctx->pc = 0x387144u;
            goto label_387144;
        }
    }
    ctx->pc = 0x387128u;
label_387128:
    // 0x387128: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_38712c:
    if (ctx->pc == 0x38712Cu) {
        ctx->pc = 0x387130u;
        goto label_387130;
    }
    ctx->pc = 0x387128u;
    {
        const bool branch_taken_0x387128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x387128) {
            ctx->pc = 0x387144u;
            goto label_387144;
        }
    }
    ctx->pc = 0x387130u;
label_387130:
    // 0x387130: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x387130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387134:
    // 0x387134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387138:
    // 0x387138: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x387138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38713c:
    // 0x38713c: 0x320f809  jalr        $t9
label_387140:
    if (ctx->pc == 0x387140u) {
        ctx->pc = 0x387140u;
            // 0x387140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x387144u;
        goto label_387144;
    }
    ctx->pc = 0x38713Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387144u);
        ctx->pc = 0x387140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38713Cu;
            // 0x387140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x387144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x387144u; }
            if (ctx->pc != 0x387144u) { return; }
        }
        }
    }
    ctx->pc = 0x387144u;
label_387144:
    // 0x387144: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x387144u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_387148:
    // 0x387148: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_38714c:
    if (ctx->pc == 0x38714Cu) {
        ctx->pc = 0x38714Cu;
            // 0x38714c: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x387150u;
        goto label_387150;
    }
    ctx->pc = 0x387148u;
    {
        const bool branch_taken_0x387148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387148) {
            ctx->pc = 0x38714Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387148u;
            // 0x38714c: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38718Cu;
            goto label_38718c;
        }
    }
    ctx->pc = 0x387150u;
label_387150:
    // 0x387150: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x387150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_387154:
    // 0x387154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x387154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_387158:
    // 0x387158: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x387158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_38715c:
    // 0x38715c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x38715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_387160:
    // 0x387160: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x387160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_387164:
    // 0x387164: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_387168:
    if (ctx->pc == 0x387168u) {
        ctx->pc = 0x38716Cu;
        goto label_38716c;
    }
    ctx->pc = 0x387164u;
    {
        const bool branch_taken_0x387164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387164) {
            ctx->pc = 0x387188u;
            goto label_387188;
        }
    }
    ctx->pc = 0x38716Cu;
label_38716c:
    // 0x38716c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_387170:
    if (ctx->pc == 0x387170u) {
        ctx->pc = 0x387174u;
        goto label_387174;
    }
    ctx->pc = 0x38716Cu;
    {
        const bool branch_taken_0x38716c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38716c) {
            ctx->pc = 0x387188u;
            goto label_387188;
        }
    }
    ctx->pc = 0x387174u;
label_387174:
    // 0x387174: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x387174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_387178:
    // 0x387178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38717c:
    // 0x38717c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38717cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_387180:
    // 0x387180: 0x320f809  jalr        $t9
label_387184:
    if (ctx->pc == 0x387184u) {
        ctx->pc = 0x387184u;
            // 0x387184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x387188u;
        goto label_387188;
    }
    ctx->pc = 0x387180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387188u);
        ctx->pc = 0x387184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387180u;
            // 0x387184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x387188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x387188u; }
            if (ctx->pc != 0x387188u) { return; }
        }
        }
    }
    ctx->pc = 0x387188u;
label_387188:
    // 0x387188: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x387188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_38718c:
    // 0x38718c: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x38718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_387190:
    // 0x387190: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x387190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_387194:
    // 0x387194: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x387194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_387198:
    // 0x387198: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_38719c:
    if (ctx->pc == 0x38719Cu) {
        ctx->pc = 0x38719Cu;
            // 0x38719c: 0x8fa30124  lw          $v1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->pc = 0x3871A0u;
        goto label_3871a0;
    }
    ctx->pc = 0x387198u;
    {
        const bool branch_taken_0x387198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x387198) {
            ctx->pc = 0x38719Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387198u;
            // 0x38719c: 0x8fa30124  lw          $v1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3871B0u;
            goto label_3871b0;
        }
    }
    ctx->pc = 0x3871A0u;
label_3871a0:
    // 0x3871a0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3871a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3871a4:
    // 0x3871a4: 0xc0a728c  jal         func_29CA30
label_3871a8:
    if (ctx->pc == 0x3871A8u) {
        ctx->pc = 0x3871A8u;
            // 0x3871a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3871ACu;
        goto label_3871ac;
    }
    ctx->pc = 0x3871A4u;
    SET_GPR_U32(ctx, 31, 0x3871ACu);
    ctx->pc = 0x3871A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3871A4u;
            // 0x3871a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3871ACu; }
        if (ctx->pc != 0x3871ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3871ACu; }
        if (ctx->pc != 0x3871ACu) { return; }
    }
    ctx->pc = 0x3871ACu;
label_3871ac:
    // 0x3871ac: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x3871acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_3871b0:
    // 0x3871b0: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x3871b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3871b4:
    // 0x3871b4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x3871b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3871b8:
    // 0x3871b8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3871b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3871bc:
    // 0x3871bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3871bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3871c0:
    // 0x3871c0: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x3871c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
label_3871c4:
    // 0x3871c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3871c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3871c8:
    // 0x3871c8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3871c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3871cc:
    // 0x3871cc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3871ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_3871d0:
    // 0x3871d0: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x3871d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_3871d4:
    // 0x3871d4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3871d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_3871d8:
    // 0x3871d8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x3871d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_3871dc:
    // 0x3871dc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3871e0:
    if (ctx->pc == 0x3871E0u) {
        ctx->pc = 0x3871E0u;
            // 0x3871e0: 0x8fa40124  lw          $a0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->pc = 0x3871E4u;
        goto label_3871e4;
    }
    ctx->pc = 0x3871DCu;
    {
        const bool branch_taken_0x3871dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3871dc) {
            ctx->pc = 0x3871E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3871DCu;
            // 0x3871e0: 0x8fa40124  lw          $a0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3871F4u;
            goto label_3871f4;
        }
    }
    ctx->pc = 0x3871E4u;
label_3871e4:
    // 0x3871e4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3871e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3871e8:
    // 0x3871e8: 0xc0a728c  jal         func_29CA30
label_3871ec:
    if (ctx->pc == 0x3871ECu) {
        ctx->pc = 0x3871ECu;
            // 0x3871ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3871F0u;
        goto label_3871f0;
    }
    ctx->pc = 0x3871E8u;
    SET_GPR_U32(ctx, 31, 0x3871F0u);
    ctx->pc = 0x3871ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3871E8u;
            // 0x3871ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3871F0u; }
        if (ctx->pc != 0x3871F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3871F0u; }
        if (ctx->pc != 0x3871F0u) { return; }
    }
    ctx->pc = 0x3871F0u;
label_3871f0:
    // 0x3871f0: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x3871f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_3871f4:
    // 0x3871f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3871f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3871f8:
    // 0x3871f8: 0x8e4800a4  lw          $t0, 0xA4($s2)
    ctx->pc = 0x3871f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_3871fc:
    // 0x3871fc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3871fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_387200:
    // 0x387200: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x387200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_387204:
    // 0x387204: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x387204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_387208:
    // 0x387208: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x387208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38720c:
    // 0x38720c: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x38720cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
label_387210:
    // 0x387210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x387210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_387214:
    // 0x387214: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x387214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_387218:
    // 0x387218: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x387218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_38721c:
    // 0x38721c: 0xc0a7a88  jal         func_29EA20
label_387220:
    if (ctx->pc == 0x387220u) {
        ctx->pc = 0x387220u;
            // 0x387220: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x387224u;
        goto label_387224;
    }
    ctx->pc = 0x38721Cu;
    SET_GPR_U32(ctx, 31, 0x387224u);
    ctx->pc = 0x387220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38721Cu;
            // 0x387220: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387224u; }
        if (ctx->pc != 0x387224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387224u; }
        if (ctx->pc != 0x387224u) { return; }
    }
    ctx->pc = 0x387224u;
label_387224:
    // 0x387224: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x387224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_387228:
    // 0x387228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38722c:
    // 0x38722c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_387230:
    if (ctx->pc == 0x387230u) {
        ctx->pc = 0x387230u;
            // 0x387230: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x387234u;
        goto label_387234;
    }
    ctx->pc = 0x38722Cu;
    {
        const bool branch_taken_0x38722c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38722Cu;
            // 0x387230: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38722c) {
            ctx->pc = 0x387244u;
            goto label_387244;
        }
    }
    ctx->pc = 0x387234u;
label_387234:
    // 0x387234: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x387234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_387238:
    // 0x387238: 0xc081c54  jal         func_207150
label_38723c:
    if (ctx->pc == 0x38723Cu) {
        ctx->pc = 0x38723Cu;
            // 0x38723c: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->pc = 0x387240u;
        goto label_387240;
    }
    ctx->pc = 0x387238u;
    SET_GPR_U32(ctx, 31, 0x387240u);
    ctx->pc = 0x38723Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387238u;
            // 0x38723c: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387240u; }
        if (ctx->pc != 0x387240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387240u; }
        if (ctx->pc != 0x387240u) { return; }
    }
    ctx->pc = 0x387240u;
label_387240:
    // 0x387240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387244:
    // 0x387244: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x387244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_387248:
    // 0x387248: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x387248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_38724c:
    // 0x38724c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x38724cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_387250:
    // 0x387250: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_387254:
    if (ctx->pc == 0x387254u) {
        ctx->pc = 0x387254u;
            // 0x387254: 0x8e4400a4  lw          $a0, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->pc = 0x387258u;
        goto label_387258;
    }
    ctx->pc = 0x387250u;
    {
        const bool branch_taken_0x387250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387250) {
            ctx->pc = 0x387254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387250u;
            // 0x387254: 0x8e4400a4  lw          $a0, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387290u;
            goto label_387290;
        }
    }
    ctx->pc = 0x387258u;
label_387258:
    // 0x387258: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x387258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_38725c:
    // 0x38725c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_387260:
    // 0x387260: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x387260u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_387264:
    // 0x387264: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x387264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_387268:
    // 0x387268: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x387268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38726c:
    // 0x38726c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_387270:
    if (ctx->pc == 0x387270u) {
        ctx->pc = 0x387274u;
        goto label_387274;
    }
    ctx->pc = 0x38726Cu;
    {
        const bool branch_taken_0x38726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38726c) {
            ctx->pc = 0x38728Cu;
            goto label_38728c;
        }
    }
    ctx->pc = 0x387274u;
label_387274:
    // 0x387274: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_387278:
    if (ctx->pc == 0x387278u) {
        ctx->pc = 0x38727Cu;
        goto label_38727c;
    }
    ctx->pc = 0x387274u;
    {
        const bool branch_taken_0x387274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387274) {
            ctx->pc = 0x38728Cu;
            goto label_38728c;
        }
    }
    ctx->pc = 0x38727Cu;
label_38727c:
    // 0x38727c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38727cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_387280:
    // 0x387280: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x387280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_387284:
    // 0x387284: 0x320f809  jalr        $t9
label_387288:
    if (ctx->pc == 0x387288u) {
        ctx->pc = 0x387288u;
            // 0x387288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38728Cu;
        goto label_38728c;
    }
    ctx->pc = 0x387284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38728Cu);
        ctx->pc = 0x387288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387284u;
            // 0x387288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38728Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38728Cu; }
            if (ctx->pc != 0x38728Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38728Cu;
label_38728c:
    // 0x38728c: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x38728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_387290:
    // 0x387290: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x387290u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_387294:
    // 0x387294: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_387298:
    if (ctx->pc == 0x387298u) {
        ctx->pc = 0x387298u;
            // 0x387298: 0x3c024248  lui         $v0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
        ctx->pc = 0x38729Cu;
        goto label_38729c;
    }
    ctx->pc = 0x387294u;
    {
        const bool branch_taken_0x387294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387294) {
            ctx->pc = 0x387298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387294u;
            // 0x387298: 0x3c024248  lui         $v0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3872D4u;
            goto label_3872d4;
        }
    }
    ctx->pc = 0x38729Cu;
label_38729c:
    // 0x38729c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x38729cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3872a0:
    // 0x3872a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3872a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3872a4:
    // 0x3872a4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3872a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_3872a8:
    // 0x3872a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3872a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3872ac:
    // 0x3872ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3872acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3872b0:
    // 0x3872b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3872b4:
    if (ctx->pc == 0x3872B4u) {
        ctx->pc = 0x3872B8u;
        goto label_3872b8;
    }
    ctx->pc = 0x3872B0u;
    {
        const bool branch_taken_0x3872b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3872b0) {
            ctx->pc = 0x3872D0u;
            goto label_3872d0;
        }
    }
    ctx->pc = 0x3872B8u;
label_3872b8:
    // 0x3872b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3872bc:
    if (ctx->pc == 0x3872BCu) {
        ctx->pc = 0x3872C0u;
        goto label_3872c0;
    }
    ctx->pc = 0x3872B8u;
    {
        const bool branch_taken_0x3872b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3872b8) {
            ctx->pc = 0x3872D0u;
            goto label_3872d0;
        }
    }
    ctx->pc = 0x3872C0u;
label_3872c0:
    // 0x3872c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3872c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3872c4:
    // 0x3872c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3872c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3872c8:
    // 0x3872c8: 0x320f809  jalr        $t9
label_3872cc:
    if (ctx->pc == 0x3872CCu) {
        ctx->pc = 0x3872CCu;
            // 0x3872cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3872D0u;
        goto label_3872d0;
    }
    ctx->pc = 0x3872C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3872D0u);
        ctx->pc = 0x3872CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3872C8u;
            // 0x3872cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3872D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3872D0u; }
            if (ctx->pc != 0x3872D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3872D0u;
label_3872d0:
    // 0x3872d0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3872d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3872d4:
    // 0x3872d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3872d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3872d8:
    // 0x3872d8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3872d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_3872dc:
    // 0x3872dc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3872dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3872e0:
    // 0x3872e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3872e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3872e4:
    // 0x3872e4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3872e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3872e8:
    // 0x3872e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3872e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_3872ec:
    // 0x3872ec: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3872ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3872f0:
    // 0x3872f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3872f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3872f4:
    // 0x3872f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3872f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3872f8:
    // 0x3872f8: 0xc0a7a88  jal         func_29EA20
label_3872fc:
    if (ctx->pc == 0x3872FCu) {
        ctx->pc = 0x3872FCu;
            // 0x3872fc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x387300u;
        goto label_387300;
    }
    ctx->pc = 0x3872F8u;
    SET_GPR_U32(ctx, 31, 0x387300u);
    ctx->pc = 0x3872FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3872F8u;
            // 0x3872fc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387300u; }
        if (ctx->pc != 0x387300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387300u; }
        if (ctx->pc != 0x387300u) { return; }
    }
    ctx->pc = 0x387300u;
label_387300:
    // 0x387300: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x387300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_387304:
    // 0x387304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387308:
    // 0x387308: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_38730c:
    if (ctx->pc == 0x38730Cu) {
        ctx->pc = 0x38730Cu;
            // 0x38730c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x387310u;
        goto label_387310;
    }
    ctx->pc = 0x387308u;
    {
        const bool branch_taken_0x387308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387308u;
            // 0x38730c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387308) {
            ctx->pc = 0x387324u;
            goto label_387324;
        }
    }
    ctx->pc = 0x387310u;
label_387310:
    // 0x387310: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x387310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_387314:
    // 0x387314: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x387314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_387318:
    // 0x387318: 0xc0804bc  jal         func_2012F0
label_38731c:
    if (ctx->pc == 0x38731Cu) {
        ctx->pc = 0x38731Cu;
            // 0x38731c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x387320u;
        goto label_387320;
    }
    ctx->pc = 0x387318u;
    SET_GPR_U32(ctx, 31, 0x387320u);
    ctx->pc = 0x38731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387318u;
            // 0x38731c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387320u; }
        if (ctx->pc != 0x387320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387320u; }
        if (ctx->pc != 0x387320u) { return; }
    }
    ctx->pc = 0x387320u;
label_387320:
    // 0x387320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387324:
    // 0x387324: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x387324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
label_387328:
    // 0x387328: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x387328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_38732c:
    // 0x38732c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x38732cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_387330:
    // 0x387330: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x387330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_387334:
    // 0x387334: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x387334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_387338:
    // 0x387338: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x387338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38733c:
    // 0x38733c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_387340:
    // 0x387340: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x387340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_387344:
    // 0x387344: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x387344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_387348:
    // 0x387348: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x387348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_38734c:
    // 0x38734c: 0xc0a7a88  jal         func_29EA20
label_387350:
    if (ctx->pc == 0x387350u) {
        ctx->pc = 0x387350u;
            // 0x387350: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x387354u;
        goto label_387354;
    }
    ctx->pc = 0x38734Cu;
    SET_GPR_U32(ctx, 31, 0x387354u);
    ctx->pc = 0x387350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38734Cu;
            // 0x387350: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387354u; }
        if (ctx->pc != 0x387354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387354u; }
        if (ctx->pc != 0x387354u) { return; }
    }
    ctx->pc = 0x387354u;
label_387354:
    // 0x387354: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x387354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_387358:
    // 0x387358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38735c:
    // 0x38735c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_387360:
    if (ctx->pc == 0x387360u) {
        ctx->pc = 0x387360u;
            // 0x387360: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x387364u;
        goto label_387364;
    }
    ctx->pc = 0x38735Cu;
    {
        const bool branch_taken_0x38735c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38735Cu;
            // 0x387360: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38735c) {
            ctx->pc = 0x387378u;
            goto label_387378;
        }
    }
    ctx->pc = 0x387364u;
label_387364:
    // 0x387364: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x387364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_387368:
    // 0x387368: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x387368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38736c:
    // 0x38736c: 0xc0804bc  jal         func_2012F0
label_387370:
    if (ctx->pc == 0x387370u) {
        ctx->pc = 0x387370u;
            // 0x387370: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x387374u;
        goto label_387374;
    }
    ctx->pc = 0x38736Cu;
    SET_GPR_U32(ctx, 31, 0x387374u);
    ctx->pc = 0x387370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38736Cu;
            // 0x387370: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387374u; }
        if (ctx->pc != 0x387374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387374u; }
        if (ctx->pc != 0x387374u) { return; }
    }
    ctx->pc = 0x387374u;
label_387374:
    // 0x387374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387378:
    // 0x387378: 0xae44009c  sw          $a0, 0x9C($s2)
    ctx->pc = 0x387378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 4));
label_38737c:
    // 0x38737c: 0xc0b61c4  jal         func_2D8710
label_387380:
    if (ctx->pc == 0x387380u) {
        ctx->pc = 0x387380u;
            // 0x387380: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x387384u;
        goto label_387384;
    }
    ctx->pc = 0x38737Cu;
    SET_GPR_U32(ctx, 31, 0x387384u);
    ctx->pc = 0x387380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38737Cu;
            // 0x387380: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387384u; }
        if (ctx->pc != 0x387384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387384u; }
        if (ctx->pc != 0x387384u) { return; }
    }
    ctx->pc = 0x387384u;
label_387384:
    // 0x387384: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x387384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387388:
    // 0x387388: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x387388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38738c:
    // 0x38738c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38738cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_387390:
    // 0x387390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x387390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387394:
    // 0x387394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387398:
    // 0x387398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38739c:
    // 0x38739c: 0x3e00008  jr          $ra
label_3873a0:
    if (ctx->pc == 0x3873A0u) {
        ctx->pc = 0x3873A0u;
            // 0x3873a0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3873A4u;
        goto label_3873a4;
    }
    ctx->pc = 0x38739Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3873A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38739Cu;
            // 0x3873a0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3873A4u;
label_3873a4:
    // 0x3873a4: 0x0  nop
    ctx->pc = 0x3873a4u;
    // NOP
label_3873a8:
    // 0x3873a8: 0x0  nop
    ctx->pc = 0x3873a8u;
    // NOP
label_3873ac:
    // 0x3873ac: 0x0  nop
    ctx->pc = 0x3873acu;
    // NOP
label_3873b0:
    // 0x3873b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3873b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3873b4:
    // 0x3873b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3873b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3873b8:
    // 0x3873b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3873b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3873bc:
    // 0x3873bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3873bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3873c0:
    // 0x3873c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3873c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3873c4:
    // 0x3873c4: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_3873c8:
    if (ctx->pc == 0x3873C8u) {
        ctx->pc = 0x3873C8u;
            // 0x3873c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3873CCu;
        goto label_3873cc;
    }
    ctx->pc = 0x3873C4u;
    {
        const bool branch_taken_0x3873c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3873C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3873C4u;
            // 0x3873c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3873c4) {
            ctx->pc = 0x387500u;
            goto label_387500;
        }
    }
    ctx->pc = 0x3873CCu;
label_3873cc:
    // 0x3873cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3873ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3873d0:
    // 0x3873d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3873d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3873d4:
    // 0x3873d4: 0x24637ac0  addiu       $v1, $v1, 0x7AC0
    ctx->pc = 0x3873d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31424));
label_3873d8:
    // 0x3873d8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3873d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_3873dc:
    // 0x3873dc: 0x24427af8  addiu       $v0, $v0, 0x7AF8
    ctx->pc = 0x3873dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31480));
label_3873e0:
    // 0x3873e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3873e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3873e4:
    // 0x3873e4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3873e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3873e8:
    // 0x3873e8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3873e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3873ec:
    // 0x3873ec: 0xc0407c0  jal         func_101F00
label_3873f0:
    if (ctx->pc == 0x3873F0u) {
        ctx->pc = 0x3873F0u;
            // 0x3873f0: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
        ctx->pc = 0x3873F4u;
        goto label_3873f4;
    }
    ctx->pc = 0x3873ECu;
    SET_GPR_U32(ctx, 31, 0x3873F4u);
    ctx->pc = 0x3873F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3873ECu;
            // 0x3873f0: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3873F4u; }
        if (ctx->pc != 0x3873F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3873F4u; }
        if (ctx->pc != 0x3873F4u) { return; }
    }
    ctx->pc = 0x3873F4u;
label_3873f4:
    // 0x3873f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3873f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3873f8:
    // 0x3873f8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3873fc:
    if (ctx->pc == 0x3873FCu) {
        ctx->pc = 0x3873FCu;
            // 0x3873fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x387400u;
        goto label_387400;
    }
    ctx->pc = 0x3873F8u;
    {
        const bool branch_taken_0x3873f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3873f8) {
            ctx->pc = 0x3873FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3873F8u;
            // 0x3873fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387414u;
            goto label_387414;
        }
    }
    ctx->pc = 0x387400u;
label_387400:
    // 0x387400: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_387404:
    if (ctx->pc == 0x387404u) {
        ctx->pc = 0x387408u;
        goto label_387408;
    }
    ctx->pc = 0x387400u;
    {
        const bool branch_taken_0x387400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387400) {
            ctx->pc = 0x387410u;
            goto label_387410;
        }
    }
    ctx->pc = 0x387408u;
label_387408:
    // 0x387408: 0xc07507c  jal         func_1D41F0
label_38740c:
    if (ctx->pc == 0x38740Cu) {
        ctx->pc = 0x38740Cu;
            // 0x38740c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x387410u;
        goto label_387410;
    }
    ctx->pc = 0x387408u;
    SET_GPR_U32(ctx, 31, 0x387410u);
    ctx->pc = 0x38740Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387408u;
            // 0x38740c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387410u; }
        if (ctx->pc != 0x387410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387410u; }
        if (ctx->pc != 0x387410u) { return; }
    }
    ctx->pc = 0x387410u;
label_387410:
    // 0x387410: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x387410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_387414:
    // 0x387414: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_387418:
    if (ctx->pc == 0x387418u) {
        ctx->pc = 0x387418u;
            // 0x387418: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x38741Cu;
        goto label_38741c;
    }
    ctx->pc = 0x387414u;
    {
        const bool branch_taken_0x387414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387414) {
            ctx->pc = 0x387418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387414u;
            // 0x387418: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387444u;
            goto label_387444;
        }
    }
    ctx->pc = 0x38741Cu;
label_38741c:
    // 0x38741c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_387420:
    if (ctx->pc == 0x387420u) {
        ctx->pc = 0x387424u;
        goto label_387424;
    }
    ctx->pc = 0x38741Cu;
    {
        const bool branch_taken_0x38741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38741c) {
            ctx->pc = 0x387440u;
            goto label_387440;
        }
    }
    ctx->pc = 0x387424u;
label_387424:
    // 0x387424: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_387428:
    if (ctx->pc == 0x387428u) {
        ctx->pc = 0x38742Cu;
        goto label_38742c;
    }
    ctx->pc = 0x387424u;
    {
        const bool branch_taken_0x387424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387424) {
            ctx->pc = 0x387440u;
            goto label_387440;
        }
    }
    ctx->pc = 0x38742Cu;
label_38742c:
    // 0x38742c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x38742cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_387430:
    // 0x387430: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_387434:
    if (ctx->pc == 0x387434u) {
        ctx->pc = 0x387438u;
        goto label_387438;
    }
    ctx->pc = 0x387430u;
    {
        const bool branch_taken_0x387430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387430) {
            ctx->pc = 0x387440u;
            goto label_387440;
        }
    }
    ctx->pc = 0x387438u;
label_387438:
    // 0x387438: 0xc0400a8  jal         func_1002A0
label_38743c:
    if (ctx->pc == 0x38743Cu) {
        ctx->pc = 0x387440u;
        goto label_387440;
    }
    ctx->pc = 0x387438u;
    SET_GPR_U32(ctx, 31, 0x387440u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387440u; }
        if (ctx->pc != 0x387440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387440u; }
        if (ctx->pc != 0x387440u) { return; }
    }
    ctx->pc = 0x387440u;
label_387440:
    // 0x387440: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x387440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_387444:
    // 0x387444: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_387448:
    if (ctx->pc == 0x387448u) {
        ctx->pc = 0x387448u;
            // 0x387448: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x38744Cu;
        goto label_38744c;
    }
    ctx->pc = 0x387444u;
    {
        const bool branch_taken_0x387444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387444) {
            ctx->pc = 0x387448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387444u;
            // 0x387448: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387474u;
            goto label_387474;
        }
    }
    ctx->pc = 0x38744Cu;
label_38744c:
    // 0x38744c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_387450:
    if (ctx->pc == 0x387450u) {
        ctx->pc = 0x387454u;
        goto label_387454;
    }
    ctx->pc = 0x38744Cu;
    {
        const bool branch_taken_0x38744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38744c) {
            ctx->pc = 0x387470u;
            goto label_387470;
        }
    }
    ctx->pc = 0x387454u;
label_387454:
    // 0x387454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_387458:
    if (ctx->pc == 0x387458u) {
        ctx->pc = 0x38745Cu;
        goto label_38745c;
    }
    ctx->pc = 0x387454u;
    {
        const bool branch_taken_0x387454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387454) {
            ctx->pc = 0x387470u;
            goto label_387470;
        }
    }
    ctx->pc = 0x38745Cu;
label_38745c:
    // 0x38745c: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x38745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_387460:
    // 0x387460: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_387464:
    if (ctx->pc == 0x387464u) {
        ctx->pc = 0x387468u;
        goto label_387468;
    }
    ctx->pc = 0x387460u;
    {
        const bool branch_taken_0x387460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387460) {
            ctx->pc = 0x387470u;
            goto label_387470;
        }
    }
    ctx->pc = 0x387468u;
label_387468:
    // 0x387468: 0xc0400a8  jal         func_1002A0
label_38746c:
    if (ctx->pc == 0x38746Cu) {
        ctx->pc = 0x387470u;
        goto label_387470;
    }
    ctx->pc = 0x387468u;
    SET_GPR_U32(ctx, 31, 0x387470u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387470u; }
        if (ctx->pc != 0x387470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387470u; }
        if (ctx->pc != 0x387470u) { return; }
    }
    ctx->pc = 0x387470u;
label_387470:
    // 0x387470: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x387470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_387474:
    // 0x387474: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_387478:
    if (ctx->pc == 0x387478u) {
        ctx->pc = 0x38747Cu;
        goto label_38747c;
    }
    ctx->pc = 0x387474u;
    {
        const bool branch_taken_0x387474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387474) {
            ctx->pc = 0x387490u;
            goto label_387490;
        }
    }
    ctx->pc = 0x38747Cu;
label_38747c:
    // 0x38747c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38747cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_387480:
    // 0x387480: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x387480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_387484:
    // 0x387484: 0x24637ab0  addiu       $v1, $v1, 0x7AB0
    ctx->pc = 0x387484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31408));
label_387488:
    // 0x387488: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x387488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_38748c:
    // 0x38748c: 0xac406118  sw          $zero, 0x6118($v0)
    ctx->pc = 0x38748cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24856), GPR_U32(ctx, 0));
label_387490:
    // 0x387490: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_387494:
    if (ctx->pc == 0x387494u) {
        ctx->pc = 0x387494u;
            // 0x387494: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x387498u;
        goto label_387498;
    }
    ctx->pc = 0x387490u;
    {
        const bool branch_taken_0x387490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x387490) {
            ctx->pc = 0x387494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387490u;
            // 0x387494: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3874ECu;
            goto label_3874ec;
        }
    }
    ctx->pc = 0x387498u;
label_387498:
    // 0x387498: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x387498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38749c:
    // 0x38749c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x38749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3874a0:
    // 0x3874a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3874a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3874a4:
    // 0x3874a4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3874a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3874a8:
    // 0x3874a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3874ac:
    if (ctx->pc == 0x3874ACu) {
        ctx->pc = 0x3874ACu;
            // 0x3874ac: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3874B0u;
        goto label_3874b0;
    }
    ctx->pc = 0x3874A8u;
    {
        const bool branch_taken_0x3874a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3874a8) {
            ctx->pc = 0x3874ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3874A8u;
            // 0x3874ac: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3874C4u;
            goto label_3874c4;
        }
    }
    ctx->pc = 0x3874B0u;
label_3874b0:
    // 0x3874b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3874b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3874b4:
    // 0x3874b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3874b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3874b8:
    // 0x3874b8: 0x320f809  jalr        $t9
label_3874bc:
    if (ctx->pc == 0x3874BCu) {
        ctx->pc = 0x3874BCu;
            // 0x3874bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3874C0u;
        goto label_3874c0;
    }
    ctx->pc = 0x3874B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3874C0u);
        ctx->pc = 0x3874BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3874B8u;
            // 0x3874bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3874C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3874C0u; }
            if (ctx->pc != 0x3874C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3874C0u;
label_3874c0:
    // 0x3874c0: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3874c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3874c4:
    // 0x3874c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3874c8:
    if (ctx->pc == 0x3874C8u) {
        ctx->pc = 0x3874C8u;
            // 0x3874c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3874CCu;
        goto label_3874cc;
    }
    ctx->pc = 0x3874C4u;
    {
        const bool branch_taken_0x3874c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3874c4) {
            ctx->pc = 0x3874C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3874C4u;
            // 0x3874c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3874E0u;
            goto label_3874e0;
        }
    }
    ctx->pc = 0x3874CCu;
label_3874cc:
    // 0x3874cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3874ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3874d0:
    // 0x3874d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3874d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3874d4:
    // 0x3874d4: 0x320f809  jalr        $t9
label_3874d8:
    if (ctx->pc == 0x3874D8u) {
        ctx->pc = 0x3874D8u;
            // 0x3874d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3874DCu;
        goto label_3874dc;
    }
    ctx->pc = 0x3874D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3874DCu);
        ctx->pc = 0x3874D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3874D4u;
            // 0x3874d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3874DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3874DCu; }
            if (ctx->pc != 0x3874DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3874DCu;
label_3874dc:
    // 0x3874dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3874dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3874e0:
    // 0x3874e0: 0xc075bf8  jal         func_1D6FE0
label_3874e4:
    if (ctx->pc == 0x3874E4u) {
        ctx->pc = 0x3874E4u;
            // 0x3874e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3874E8u;
        goto label_3874e8;
    }
    ctx->pc = 0x3874E0u;
    SET_GPR_U32(ctx, 31, 0x3874E8u);
    ctx->pc = 0x3874E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3874E0u;
            // 0x3874e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3874E8u; }
        if (ctx->pc != 0x3874E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3874E8u; }
        if (ctx->pc != 0x3874E8u) { return; }
    }
    ctx->pc = 0x3874E8u;
label_3874e8:
    // 0x3874e8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3874e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3874ec:
    // 0x3874ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3874ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3874f0:
    // 0x3874f0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3874f4:
    if (ctx->pc == 0x3874F4u) {
        ctx->pc = 0x3874F4u;
            // 0x3874f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3874F8u;
        goto label_3874f8;
    }
    ctx->pc = 0x3874F0u;
    {
        const bool branch_taken_0x3874f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3874f0) {
            ctx->pc = 0x3874F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3874F0u;
            // 0x3874f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387504u;
            goto label_387504;
        }
    }
    ctx->pc = 0x3874F8u;
label_3874f8:
    // 0x3874f8: 0xc0400a8  jal         func_1002A0
label_3874fc:
    if (ctx->pc == 0x3874FCu) {
        ctx->pc = 0x3874FCu;
            // 0x3874fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387500u;
        goto label_387500;
    }
    ctx->pc = 0x3874F8u;
    SET_GPR_U32(ctx, 31, 0x387500u);
    ctx->pc = 0x3874FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3874F8u;
            // 0x3874fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387500u; }
        if (ctx->pc != 0x387500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387500u; }
        if (ctx->pc != 0x387500u) { return; }
    }
    ctx->pc = 0x387500u;
label_387500:
    // 0x387500: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x387500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387504:
    // 0x387504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_387508:
    // 0x387508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38750c:
    // 0x38750c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38750cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_387510:
    // 0x387510: 0x3e00008  jr          $ra
label_387514:
    if (ctx->pc == 0x387514u) {
        ctx->pc = 0x387514u;
            // 0x387514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x387518u;
        goto label_387518;
    }
    ctx->pc = 0x387510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387510u;
            // 0x387514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387518u;
label_387518:
    // 0x387518: 0x0  nop
    ctx->pc = 0x387518u;
    // NOP
label_38751c:
    // 0x38751c: 0x0  nop
    ctx->pc = 0x38751cu;
    // NOP
}
