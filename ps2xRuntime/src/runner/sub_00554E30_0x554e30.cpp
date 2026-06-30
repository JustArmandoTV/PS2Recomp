#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00554E30
// Address: 0x554e30 - 0x555450
void sub_00554E30_0x554e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00554E30_0x554e30");
#endif

    switch (ctx->pc) {
        case 0x554e30u: goto label_554e30;
        case 0x554e34u: goto label_554e34;
        case 0x554e38u: goto label_554e38;
        case 0x554e3cu: goto label_554e3c;
        case 0x554e40u: goto label_554e40;
        case 0x554e44u: goto label_554e44;
        case 0x554e48u: goto label_554e48;
        case 0x554e4cu: goto label_554e4c;
        case 0x554e50u: goto label_554e50;
        case 0x554e54u: goto label_554e54;
        case 0x554e58u: goto label_554e58;
        case 0x554e5cu: goto label_554e5c;
        case 0x554e60u: goto label_554e60;
        case 0x554e64u: goto label_554e64;
        case 0x554e68u: goto label_554e68;
        case 0x554e6cu: goto label_554e6c;
        case 0x554e70u: goto label_554e70;
        case 0x554e74u: goto label_554e74;
        case 0x554e78u: goto label_554e78;
        case 0x554e7cu: goto label_554e7c;
        case 0x554e80u: goto label_554e80;
        case 0x554e84u: goto label_554e84;
        case 0x554e88u: goto label_554e88;
        case 0x554e8cu: goto label_554e8c;
        case 0x554e90u: goto label_554e90;
        case 0x554e94u: goto label_554e94;
        case 0x554e98u: goto label_554e98;
        case 0x554e9cu: goto label_554e9c;
        case 0x554ea0u: goto label_554ea0;
        case 0x554ea4u: goto label_554ea4;
        case 0x554ea8u: goto label_554ea8;
        case 0x554eacu: goto label_554eac;
        case 0x554eb0u: goto label_554eb0;
        case 0x554eb4u: goto label_554eb4;
        case 0x554eb8u: goto label_554eb8;
        case 0x554ebcu: goto label_554ebc;
        case 0x554ec0u: goto label_554ec0;
        case 0x554ec4u: goto label_554ec4;
        case 0x554ec8u: goto label_554ec8;
        case 0x554eccu: goto label_554ecc;
        case 0x554ed0u: goto label_554ed0;
        case 0x554ed4u: goto label_554ed4;
        case 0x554ed8u: goto label_554ed8;
        case 0x554edcu: goto label_554edc;
        case 0x554ee0u: goto label_554ee0;
        case 0x554ee4u: goto label_554ee4;
        case 0x554ee8u: goto label_554ee8;
        case 0x554eecu: goto label_554eec;
        case 0x554ef0u: goto label_554ef0;
        case 0x554ef4u: goto label_554ef4;
        case 0x554ef8u: goto label_554ef8;
        case 0x554efcu: goto label_554efc;
        case 0x554f00u: goto label_554f00;
        case 0x554f04u: goto label_554f04;
        case 0x554f08u: goto label_554f08;
        case 0x554f0cu: goto label_554f0c;
        case 0x554f10u: goto label_554f10;
        case 0x554f14u: goto label_554f14;
        case 0x554f18u: goto label_554f18;
        case 0x554f1cu: goto label_554f1c;
        case 0x554f20u: goto label_554f20;
        case 0x554f24u: goto label_554f24;
        case 0x554f28u: goto label_554f28;
        case 0x554f2cu: goto label_554f2c;
        case 0x554f30u: goto label_554f30;
        case 0x554f34u: goto label_554f34;
        case 0x554f38u: goto label_554f38;
        case 0x554f3cu: goto label_554f3c;
        case 0x554f40u: goto label_554f40;
        case 0x554f44u: goto label_554f44;
        case 0x554f48u: goto label_554f48;
        case 0x554f4cu: goto label_554f4c;
        case 0x554f50u: goto label_554f50;
        case 0x554f54u: goto label_554f54;
        case 0x554f58u: goto label_554f58;
        case 0x554f5cu: goto label_554f5c;
        case 0x554f60u: goto label_554f60;
        case 0x554f64u: goto label_554f64;
        case 0x554f68u: goto label_554f68;
        case 0x554f6cu: goto label_554f6c;
        case 0x554f70u: goto label_554f70;
        case 0x554f74u: goto label_554f74;
        case 0x554f78u: goto label_554f78;
        case 0x554f7cu: goto label_554f7c;
        case 0x554f80u: goto label_554f80;
        case 0x554f84u: goto label_554f84;
        case 0x554f88u: goto label_554f88;
        case 0x554f8cu: goto label_554f8c;
        case 0x554f90u: goto label_554f90;
        case 0x554f94u: goto label_554f94;
        case 0x554f98u: goto label_554f98;
        case 0x554f9cu: goto label_554f9c;
        case 0x554fa0u: goto label_554fa0;
        case 0x554fa4u: goto label_554fa4;
        case 0x554fa8u: goto label_554fa8;
        case 0x554facu: goto label_554fac;
        case 0x554fb0u: goto label_554fb0;
        case 0x554fb4u: goto label_554fb4;
        case 0x554fb8u: goto label_554fb8;
        case 0x554fbcu: goto label_554fbc;
        case 0x554fc0u: goto label_554fc0;
        case 0x554fc4u: goto label_554fc4;
        case 0x554fc8u: goto label_554fc8;
        case 0x554fccu: goto label_554fcc;
        case 0x554fd0u: goto label_554fd0;
        case 0x554fd4u: goto label_554fd4;
        case 0x554fd8u: goto label_554fd8;
        case 0x554fdcu: goto label_554fdc;
        case 0x554fe0u: goto label_554fe0;
        case 0x554fe4u: goto label_554fe4;
        case 0x554fe8u: goto label_554fe8;
        case 0x554fecu: goto label_554fec;
        case 0x554ff0u: goto label_554ff0;
        case 0x554ff4u: goto label_554ff4;
        case 0x554ff8u: goto label_554ff8;
        case 0x554ffcu: goto label_554ffc;
        case 0x555000u: goto label_555000;
        case 0x555004u: goto label_555004;
        case 0x555008u: goto label_555008;
        case 0x55500cu: goto label_55500c;
        case 0x555010u: goto label_555010;
        case 0x555014u: goto label_555014;
        case 0x555018u: goto label_555018;
        case 0x55501cu: goto label_55501c;
        case 0x555020u: goto label_555020;
        case 0x555024u: goto label_555024;
        case 0x555028u: goto label_555028;
        case 0x55502cu: goto label_55502c;
        case 0x555030u: goto label_555030;
        case 0x555034u: goto label_555034;
        case 0x555038u: goto label_555038;
        case 0x55503cu: goto label_55503c;
        case 0x555040u: goto label_555040;
        case 0x555044u: goto label_555044;
        case 0x555048u: goto label_555048;
        case 0x55504cu: goto label_55504c;
        case 0x555050u: goto label_555050;
        case 0x555054u: goto label_555054;
        case 0x555058u: goto label_555058;
        case 0x55505cu: goto label_55505c;
        case 0x555060u: goto label_555060;
        case 0x555064u: goto label_555064;
        case 0x555068u: goto label_555068;
        case 0x55506cu: goto label_55506c;
        case 0x555070u: goto label_555070;
        case 0x555074u: goto label_555074;
        case 0x555078u: goto label_555078;
        case 0x55507cu: goto label_55507c;
        case 0x555080u: goto label_555080;
        case 0x555084u: goto label_555084;
        case 0x555088u: goto label_555088;
        case 0x55508cu: goto label_55508c;
        case 0x555090u: goto label_555090;
        case 0x555094u: goto label_555094;
        case 0x555098u: goto label_555098;
        case 0x55509cu: goto label_55509c;
        case 0x5550a0u: goto label_5550a0;
        case 0x5550a4u: goto label_5550a4;
        case 0x5550a8u: goto label_5550a8;
        case 0x5550acu: goto label_5550ac;
        case 0x5550b0u: goto label_5550b0;
        case 0x5550b4u: goto label_5550b4;
        case 0x5550b8u: goto label_5550b8;
        case 0x5550bcu: goto label_5550bc;
        case 0x5550c0u: goto label_5550c0;
        case 0x5550c4u: goto label_5550c4;
        case 0x5550c8u: goto label_5550c8;
        case 0x5550ccu: goto label_5550cc;
        case 0x5550d0u: goto label_5550d0;
        case 0x5550d4u: goto label_5550d4;
        case 0x5550d8u: goto label_5550d8;
        case 0x5550dcu: goto label_5550dc;
        case 0x5550e0u: goto label_5550e0;
        case 0x5550e4u: goto label_5550e4;
        case 0x5550e8u: goto label_5550e8;
        case 0x5550ecu: goto label_5550ec;
        case 0x5550f0u: goto label_5550f0;
        case 0x5550f4u: goto label_5550f4;
        case 0x5550f8u: goto label_5550f8;
        case 0x5550fcu: goto label_5550fc;
        case 0x555100u: goto label_555100;
        case 0x555104u: goto label_555104;
        case 0x555108u: goto label_555108;
        case 0x55510cu: goto label_55510c;
        case 0x555110u: goto label_555110;
        case 0x555114u: goto label_555114;
        case 0x555118u: goto label_555118;
        case 0x55511cu: goto label_55511c;
        case 0x555120u: goto label_555120;
        case 0x555124u: goto label_555124;
        case 0x555128u: goto label_555128;
        case 0x55512cu: goto label_55512c;
        case 0x555130u: goto label_555130;
        case 0x555134u: goto label_555134;
        case 0x555138u: goto label_555138;
        case 0x55513cu: goto label_55513c;
        case 0x555140u: goto label_555140;
        case 0x555144u: goto label_555144;
        case 0x555148u: goto label_555148;
        case 0x55514cu: goto label_55514c;
        case 0x555150u: goto label_555150;
        case 0x555154u: goto label_555154;
        case 0x555158u: goto label_555158;
        case 0x55515cu: goto label_55515c;
        case 0x555160u: goto label_555160;
        case 0x555164u: goto label_555164;
        case 0x555168u: goto label_555168;
        case 0x55516cu: goto label_55516c;
        case 0x555170u: goto label_555170;
        case 0x555174u: goto label_555174;
        case 0x555178u: goto label_555178;
        case 0x55517cu: goto label_55517c;
        case 0x555180u: goto label_555180;
        case 0x555184u: goto label_555184;
        case 0x555188u: goto label_555188;
        case 0x55518cu: goto label_55518c;
        case 0x555190u: goto label_555190;
        case 0x555194u: goto label_555194;
        case 0x555198u: goto label_555198;
        case 0x55519cu: goto label_55519c;
        case 0x5551a0u: goto label_5551a0;
        case 0x5551a4u: goto label_5551a4;
        case 0x5551a8u: goto label_5551a8;
        case 0x5551acu: goto label_5551ac;
        case 0x5551b0u: goto label_5551b0;
        case 0x5551b4u: goto label_5551b4;
        case 0x5551b8u: goto label_5551b8;
        case 0x5551bcu: goto label_5551bc;
        case 0x5551c0u: goto label_5551c0;
        case 0x5551c4u: goto label_5551c4;
        case 0x5551c8u: goto label_5551c8;
        case 0x5551ccu: goto label_5551cc;
        case 0x5551d0u: goto label_5551d0;
        case 0x5551d4u: goto label_5551d4;
        case 0x5551d8u: goto label_5551d8;
        case 0x5551dcu: goto label_5551dc;
        case 0x5551e0u: goto label_5551e0;
        case 0x5551e4u: goto label_5551e4;
        case 0x5551e8u: goto label_5551e8;
        case 0x5551ecu: goto label_5551ec;
        case 0x5551f0u: goto label_5551f0;
        case 0x5551f4u: goto label_5551f4;
        case 0x5551f8u: goto label_5551f8;
        case 0x5551fcu: goto label_5551fc;
        case 0x555200u: goto label_555200;
        case 0x555204u: goto label_555204;
        case 0x555208u: goto label_555208;
        case 0x55520cu: goto label_55520c;
        case 0x555210u: goto label_555210;
        case 0x555214u: goto label_555214;
        case 0x555218u: goto label_555218;
        case 0x55521cu: goto label_55521c;
        case 0x555220u: goto label_555220;
        case 0x555224u: goto label_555224;
        case 0x555228u: goto label_555228;
        case 0x55522cu: goto label_55522c;
        case 0x555230u: goto label_555230;
        case 0x555234u: goto label_555234;
        case 0x555238u: goto label_555238;
        case 0x55523cu: goto label_55523c;
        case 0x555240u: goto label_555240;
        case 0x555244u: goto label_555244;
        case 0x555248u: goto label_555248;
        case 0x55524cu: goto label_55524c;
        case 0x555250u: goto label_555250;
        case 0x555254u: goto label_555254;
        case 0x555258u: goto label_555258;
        case 0x55525cu: goto label_55525c;
        case 0x555260u: goto label_555260;
        case 0x555264u: goto label_555264;
        case 0x555268u: goto label_555268;
        case 0x55526cu: goto label_55526c;
        case 0x555270u: goto label_555270;
        case 0x555274u: goto label_555274;
        case 0x555278u: goto label_555278;
        case 0x55527cu: goto label_55527c;
        case 0x555280u: goto label_555280;
        case 0x555284u: goto label_555284;
        case 0x555288u: goto label_555288;
        case 0x55528cu: goto label_55528c;
        case 0x555290u: goto label_555290;
        case 0x555294u: goto label_555294;
        case 0x555298u: goto label_555298;
        case 0x55529cu: goto label_55529c;
        case 0x5552a0u: goto label_5552a0;
        case 0x5552a4u: goto label_5552a4;
        case 0x5552a8u: goto label_5552a8;
        case 0x5552acu: goto label_5552ac;
        case 0x5552b0u: goto label_5552b0;
        case 0x5552b4u: goto label_5552b4;
        case 0x5552b8u: goto label_5552b8;
        case 0x5552bcu: goto label_5552bc;
        case 0x5552c0u: goto label_5552c0;
        case 0x5552c4u: goto label_5552c4;
        case 0x5552c8u: goto label_5552c8;
        case 0x5552ccu: goto label_5552cc;
        case 0x5552d0u: goto label_5552d0;
        case 0x5552d4u: goto label_5552d4;
        case 0x5552d8u: goto label_5552d8;
        case 0x5552dcu: goto label_5552dc;
        case 0x5552e0u: goto label_5552e0;
        case 0x5552e4u: goto label_5552e4;
        case 0x5552e8u: goto label_5552e8;
        case 0x5552ecu: goto label_5552ec;
        case 0x5552f0u: goto label_5552f0;
        case 0x5552f4u: goto label_5552f4;
        case 0x5552f8u: goto label_5552f8;
        case 0x5552fcu: goto label_5552fc;
        case 0x555300u: goto label_555300;
        case 0x555304u: goto label_555304;
        case 0x555308u: goto label_555308;
        case 0x55530cu: goto label_55530c;
        case 0x555310u: goto label_555310;
        case 0x555314u: goto label_555314;
        case 0x555318u: goto label_555318;
        case 0x55531cu: goto label_55531c;
        case 0x555320u: goto label_555320;
        case 0x555324u: goto label_555324;
        case 0x555328u: goto label_555328;
        case 0x55532cu: goto label_55532c;
        case 0x555330u: goto label_555330;
        case 0x555334u: goto label_555334;
        case 0x555338u: goto label_555338;
        case 0x55533cu: goto label_55533c;
        case 0x555340u: goto label_555340;
        case 0x555344u: goto label_555344;
        case 0x555348u: goto label_555348;
        case 0x55534cu: goto label_55534c;
        case 0x555350u: goto label_555350;
        case 0x555354u: goto label_555354;
        case 0x555358u: goto label_555358;
        case 0x55535cu: goto label_55535c;
        case 0x555360u: goto label_555360;
        case 0x555364u: goto label_555364;
        case 0x555368u: goto label_555368;
        case 0x55536cu: goto label_55536c;
        case 0x555370u: goto label_555370;
        case 0x555374u: goto label_555374;
        case 0x555378u: goto label_555378;
        case 0x55537cu: goto label_55537c;
        case 0x555380u: goto label_555380;
        case 0x555384u: goto label_555384;
        case 0x555388u: goto label_555388;
        case 0x55538cu: goto label_55538c;
        case 0x555390u: goto label_555390;
        case 0x555394u: goto label_555394;
        case 0x555398u: goto label_555398;
        case 0x55539cu: goto label_55539c;
        case 0x5553a0u: goto label_5553a0;
        case 0x5553a4u: goto label_5553a4;
        case 0x5553a8u: goto label_5553a8;
        case 0x5553acu: goto label_5553ac;
        case 0x5553b0u: goto label_5553b0;
        case 0x5553b4u: goto label_5553b4;
        case 0x5553b8u: goto label_5553b8;
        case 0x5553bcu: goto label_5553bc;
        case 0x5553c0u: goto label_5553c0;
        case 0x5553c4u: goto label_5553c4;
        case 0x5553c8u: goto label_5553c8;
        case 0x5553ccu: goto label_5553cc;
        case 0x5553d0u: goto label_5553d0;
        case 0x5553d4u: goto label_5553d4;
        case 0x5553d8u: goto label_5553d8;
        case 0x5553dcu: goto label_5553dc;
        case 0x5553e0u: goto label_5553e0;
        case 0x5553e4u: goto label_5553e4;
        case 0x5553e8u: goto label_5553e8;
        case 0x5553ecu: goto label_5553ec;
        case 0x5553f0u: goto label_5553f0;
        case 0x5553f4u: goto label_5553f4;
        case 0x5553f8u: goto label_5553f8;
        case 0x5553fcu: goto label_5553fc;
        case 0x555400u: goto label_555400;
        case 0x555404u: goto label_555404;
        case 0x555408u: goto label_555408;
        case 0x55540cu: goto label_55540c;
        case 0x555410u: goto label_555410;
        case 0x555414u: goto label_555414;
        case 0x555418u: goto label_555418;
        case 0x55541cu: goto label_55541c;
        case 0x555420u: goto label_555420;
        case 0x555424u: goto label_555424;
        case 0x555428u: goto label_555428;
        case 0x55542cu: goto label_55542c;
        case 0x555430u: goto label_555430;
        case 0x555434u: goto label_555434;
        case 0x555438u: goto label_555438;
        case 0x55543cu: goto label_55543c;
        case 0x555440u: goto label_555440;
        case 0x555444u: goto label_555444;
        case 0x555448u: goto label_555448;
        case 0x55544cu: goto label_55544c;
        default: break;
    }

    ctx->pc = 0x554e30u;

label_554e30:
    // 0x554e30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x554e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_554e34:
    // 0x554e34: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x554e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_554e38:
    // 0x554e38: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x554e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_554e3c:
    // 0x554e3c: 0x2442f430  addiu       $v0, $v0, -0xBD0
    ctx->pc = 0x554e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964272));
label_554e40:
    // 0x554e40: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x554e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_554e44:
    // 0x554e44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x554e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_554e48:
    // 0x554e48: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x554e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_554e4c:
    // 0x554e4c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x554e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_554e50:
    // 0x554e50: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x554e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_554e54:
    // 0x554e54: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x554e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_554e58:
    // 0x554e58: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x554e58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_554e5c:
    // 0x554e5c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x554e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_554e60:
    // 0x554e60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x554e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_554e64:
    // 0x554e64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x554e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_554e68:
    // 0x554e68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x554e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_554e6c:
    // 0x554e6c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x554e6cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_554e70:
    // 0x554e70: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x554e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_554e74:
    // 0x554e74: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x554e74u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_554e78:
    // 0x554e78: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x554e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_554e7c:
    // 0x554e7c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x554e7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_554e80:
    // 0x554e80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x554e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_554e84:
    // 0x554e84: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x554e84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_554e88:
    // 0x554e88: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x554e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
label_554e8c:
    // 0x554e8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x554e8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_554e90:
    // 0x554e90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x554e90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_554e94:
    // 0x554e94: 0x9454dbe0  lhu         $s4, -0x2420($v0)
    ctx->pc = 0x554e94u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958048)));
label_554e98:
    // 0x554e98: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x554e98u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_554e9c:
    // 0x554e9c: 0x8c650ec8  lw          $a1, 0xEC8($v1)
    ctx->pc = 0x554e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_554ea0:
    // 0x554ea0: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x554ea0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
label_554ea4:
    // 0x554ea4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x554ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_554ea8:
    // 0x554ea8: 0x9453dbe2  lhu         $s3, -0x241E($v0)
    ctx->pc = 0x554ea8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958050)));
label_554eac:
    // 0x554eac: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x554eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_554eb0:
    // 0x554eb0: 0x9476dbe8  lhu         $s6, -0x2418($v1)
    ctx->pc = 0x554eb0u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958056)));
label_554eb4:
    // 0x554eb4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x554eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_554eb8:
    // 0x554eb8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x554eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_554ebc:
    // 0x554ebc: 0x9472dbf0  lhu         $s2, -0x2410($v1)
    ctx->pc = 0x554ebcu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958064)));
label_554ec0:
    // 0x554ec0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x554ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_554ec4:
    // 0x554ec4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x554ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_554ec8:
    // 0x554ec8: 0x9457dbea  lhu         $s7, -0x2416($v0)
    ctx->pc = 0x554ec8u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958058)));
label_554ecc:
    // 0x554ecc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x554eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_554ed0:
    // 0x554ed0: 0x9451dbf2  lhu         $s1, -0x240E($v0)
    ctx->pc = 0x554ed0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958066)));
label_554ed4:
    // 0x554ed4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x554ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_554ed8:
    // 0x554ed8: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x554ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_554edc:
    // 0x554edc: 0xc0506ac  jal         func_141AB0
label_554ee0:
    if (ctx->pc == 0x554EE0u) {
        ctx->pc = 0x554EE0u;
            // 0x554ee0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x554EE4u;
        goto label_554ee4;
    }
    ctx->pc = 0x554EDCu;
    SET_GPR_U32(ctx, 31, 0x554EE4u);
    ctx->pc = 0x554EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554EDCu;
            // 0x554ee0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554EE4u; }
        if (ctx->pc != 0x554EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554EE4u; }
        if (ctx->pc != 0x554EE4u) { return; }
    }
    ctx->pc = 0x554EE4u;
label_554ee4:
    // 0x554ee4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554ee8:
    // 0x554ee8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x554ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554eec:
    // 0x554eec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_554ef0:
    // 0x554ef0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x554ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_554ef4:
    // 0x554ef4: 0x320f809  jalr        $t9
label_554ef8:
    if (ctx->pc == 0x554EF8u) {
        ctx->pc = 0x554EF8u;
            // 0x554ef8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x554EFCu;
        goto label_554efc;
    }
    ctx->pc = 0x554EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554EFCu);
        ctx->pc = 0x554EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554EF4u;
            // 0x554ef8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x554EFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554EFCu; }
            if (ctx->pc != 0x554EFCu) { return; }
        }
        }
    }
    ctx->pc = 0x554EFCu;
label_554efc:
    // 0x554efc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x554efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_554f00:
    // 0x554f00: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x554f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_554f04:
    // 0x554f04: 0xc441f43c  lwc1        $f1, -0xBC4($v0)
    ctx->pc = 0x554f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_554f08:
    // 0x554f08: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_554f0c:
    if (ctx->pc == 0x554F0Cu) {
        ctx->pc = 0x554F0Cu;
            // 0x554f0c: 0xc474f438  lwc1        $f20, -0xBC8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x554F10u;
        goto label_554f10;
    }
    ctx->pc = 0x554F08u;
    {
        const bool branch_taken_0x554f08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x554F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554F08u;
            // 0x554f0c: 0xc474f438  lwc1        $f20, -0xBC8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554f08) {
            ctx->pc = 0x554F1Cu;
            goto label_554f1c;
        }
    }
    ctx->pc = 0x554F10u;
label_554f10:
    // 0x554f10: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x554f10u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554f14:
    // 0x554f14: 0x10000008  b           . + 4 + (0x8 << 2)
label_554f18:
    if (ctx->pc == 0x554F18u) {
        ctx->pc = 0x554F18u;
            // 0x554f18: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554F1Cu;
        goto label_554f1c;
    }
    ctx->pc = 0x554F14u;
    {
        const bool branch_taken_0x554f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554F14u;
            // 0x554f18: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554f14) {
            ctx->pc = 0x554F38u;
            goto label_554f38;
        }
    }
    ctx->pc = 0x554F1Cu;
label_554f1c:
    // 0x554f1c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x554f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_554f20:
    // 0x554f20: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x554f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554f24:
    // 0x554f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554f28:
    // 0x554f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554f2c:
    // 0x554f2c: 0x0  nop
    ctx->pc = 0x554f2cu;
    // NOP
label_554f30:
    // 0x554f30: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554f34:
    // 0x554f34: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554f34u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554f38:
    // 0x554f38: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_554f3c:
    if (ctx->pc == 0x554F3Cu) {
        ctx->pc = 0x554F3Cu;
            // 0x554f3c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554F40u;
        goto label_554f40;
    }
    ctx->pc = 0x554F38u;
    {
        const bool branch_taken_0x554f38 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554f38) {
            ctx->pc = 0x554F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554F38u;
            // 0x554f3c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554F4Cu;
            goto label_554f4c;
        }
    }
    ctx->pc = 0x554F40u;
label_554f40:
    // 0x554f40: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554f40u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554f44:
    // 0x554f44: 0x10000007  b           . + 4 + (0x7 << 2)
label_554f48:
    if (ctx->pc == 0x554F48u) {
        ctx->pc = 0x554F48u;
            // 0x554f48: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554F4Cu;
        goto label_554f4c;
    }
    ctx->pc = 0x554F44u;
    {
        const bool branch_taken_0x554f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554F44u;
            // 0x554f48: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554f44) {
            ctx->pc = 0x554F64u;
            goto label_554f64;
        }
    }
    ctx->pc = 0x554F4Cu;
label_554f4c:
    // 0x554f4c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554f50:
    // 0x554f50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554f54:
    // 0x554f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554f58:
    // 0x554f58: 0x0  nop
    ctx->pc = 0x554f58u;
    // NOP
label_554f5c:
    // 0x554f5c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x554f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554f60:
    // 0x554f60: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554f60u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554f64:
    // 0x554f64: 0x4601c3c0  add.s       $f15, $f24, $f1
    ctx->pc = 0x554f64u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_554f68:
    // 0x554f68: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554f6c:
    // 0x554f6c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x554f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_554f70:
    // 0x554f70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554f74:
    // 0x554f74: 0x24a5f430  addiu       $a1, $a1, -0xBD0
    ctx->pc = 0x554f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
label_554f78:
    // 0x554f78: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x554f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_554f7c:
    // 0x554f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554f80:
    // 0x554f80: 0x4614cb80  add.s       $f14, $f25, $f20
    ctx->pc = 0x554f80u;
    ctx->f[14] = FPU_ADD_S(ctx->f[25], ctx->f[20]);
label_554f84:
    // 0x554f84: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x554f84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_554f88:
    // 0x554f88: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554f8c:
    // 0x554f8c: 0xc0bc284  jal         func_2F0A10
label_554f90:
    if (ctx->pc == 0x554F90u) {
        ctx->pc = 0x554F90u;
            // 0x554f90: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x554F94u;
        goto label_554f94;
    }
    ctx->pc = 0x554F8Cu;
    SET_GPR_U32(ctx, 31, 0x554F94u);
    ctx->pc = 0x554F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554F8Cu;
            // 0x554f90: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554F94u; }
        if (ctx->pc != 0x554F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554F94u; }
        if (ctx->pc != 0x554F94u) { return; }
    }
    ctx->pc = 0x554F94u;
label_554f94:
    // 0x554f94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554f98:
    // 0x554f98: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x554f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554f9c:
    // 0x554f9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_554fa0:
    // 0x554fa0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x554fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_554fa4:
    // 0x554fa4: 0x320f809  jalr        $t9
label_554fa8:
    if (ctx->pc == 0x554FA8u) {
        ctx->pc = 0x554FACu;
        goto label_554fac;
    }
    ctx->pc = 0x554FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554FACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x554FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554FACu; }
            if (ctx->pc != 0x554FACu) { return; }
        }
        }
    }
    ctx->pc = 0x554FACu;
label_554fac:
    // 0x554fac: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x554facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_554fb0:
    // 0x554fb0: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x554fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
label_554fb4:
    // 0x554fb4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_554fb8:
    if (ctx->pc == 0x554FB8u) {
        ctx->pc = 0x554FB8u;
            // 0x554fb8: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x554FBCu;
        goto label_554fbc;
    }
    ctx->pc = 0x554FB4u;
    {
        const bool branch_taken_0x554fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x554FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554FB4u;
            // 0x554fb8: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554fb4) {
            ctx->pc = 0x554FC0u;
            goto label_554fc0;
        }
    }
    ctx->pc = 0x554FBCu;
label_554fbc:
    // 0x554fbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x554fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_554fc0:
    // 0x554fc0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x554fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_554fc4:
    // 0x554fc4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_554fc8:
    if (ctx->pc == 0x554FC8u) {
        ctx->pc = 0x554FC8u;
            // 0x554fc8: 0x7ba200d0  lq          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x554FCCu;
        goto label_554fcc;
    }
    ctx->pc = 0x554FC4u;
    {
        const bool branch_taken_0x554fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x554fc4) {
            ctx->pc = 0x554FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554FC4u;
            // 0x554fc8: 0x7ba200d0  lq          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554FD4u;
            goto label_554fd4;
        }
    }
    ctx->pc = 0x554FCCu;
label_554fcc:
    // 0x554fcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x554fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_554fd0:
    // 0x554fd0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x554fd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_554fd4:
    // 0x554fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x554fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_554fd8:
    // 0x554fd8: 0xc0b90e0  jal         func_2E4380
label_554fdc:
    if (ctx->pc == 0x554FDCu) {
        ctx->pc = 0x554FDCu;
            // 0x554fdc: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x554FE0u;
        goto label_554fe0;
    }
    ctx->pc = 0x554FD8u;
    SET_GPR_U32(ctx, 31, 0x554FE0u);
    ctx->pc = 0x554FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554FD8u;
            // 0x554fdc: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554FE0u; }
        if (ctx->pc != 0x554FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554FE0u; }
        if (ctx->pc != 0x554FE0u) { return; }
    }
    ctx->pc = 0x554FE0u;
label_554fe0:
    // 0x554fe0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x554fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_554fe4:
    // 0x554fe4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x554fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_554fe8:
    // 0x554fe8: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_554fec:
    if (ctx->pc == 0x554FECu) {
        ctx->pc = 0x554FF0u;
        goto label_554ff0;
    }
    ctx->pc = 0x554FE8u;
    {
        const bool branch_taken_0x554fe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x554fe8) {
            ctx->pc = 0x55500Cu;
            goto label_55500c;
        }
    }
    ctx->pc = 0x554FF0u;
label_554ff0:
    // 0x554ff0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554ff4:
    // 0x554ff4: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x554ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_554ff8:
    // 0x554ff8: 0x8042008e  lb          $v0, 0x8E($v0)
    ctx->pc = 0x554ff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 142)));
label_554ffc:
    // 0x554ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x554ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_555000:
    // 0x555000: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_555004:
    if (ctx->pc == 0x555004u) {
        ctx->pc = 0x555008u;
        goto label_555008;
    }
    ctx->pc = 0x555000u;
    {
        const bool branch_taken_0x555000 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x555000) {
            ctx->pc = 0x55500Cu;
            goto label_55500c;
        }
    }
    ctx->pc = 0x555008u;
label_555008:
    // 0x555008: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x555008u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_55500c:
    // 0x55500c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_555010:
    if (ctx->pc == 0x555010u) {
        ctx->pc = 0x555010u;
            // 0x555010: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->pc = 0x555014u;
        goto label_555014;
    }
    ctx->pc = 0x55500Cu;
    {
        const bool branch_taken_0x55500c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55500c) {
            ctx->pc = 0x555010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55500Cu;
            // 0x555010: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55501Cu;
            goto label_55501c;
        }
    }
    ctx->pc = 0x555014u;
label_555014:
    // 0x555014: 0x241e003d  addiu       $fp, $zero, 0x3D
    ctx->pc = 0x555014u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_555018:
    // 0x555018: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x555018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55501c:
    // 0x55501c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x55501cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_555020:
    // 0x555020: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x555020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_555024:
    // 0x555024: 0x3c044280  lui         $a0, 0x4280
    ctx->pc = 0x555024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17024 << 16));
label_555028:
    // 0x555028: 0x5e0018  mult        $zero, $v0, $fp
    ctx->pc = 0x555028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55502c:
    // 0x55502c: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x55502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_555030:
    // 0x555030: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x555030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_555034:
    // 0x555034: 0x1e2fc2  srl         $a1, $fp, 31
    ctx->pc = 0x555034u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
label_555038:
    // 0x555038: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x555038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_55503c:
    // 0x55503c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x55503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_555040:
    // 0x555040: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x555040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_555044:
    // 0x555044: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x555044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
label_555048:
    // 0x555048: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x555048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_55504c:
    // 0x55504c: 0x1810  mfhi        $v1
    ctx->pc = 0x55504cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_555050:
    // 0x555050: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x555050u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_555054:
    // 0x555054: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x555054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_555058:
    // 0x555058: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x555058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_55505c:
    // 0x55505c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55505cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_555060:
    // 0x555060: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x555060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_555064:
    // 0x555064: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x555064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_555068:
    // 0x555068: 0x3c33823  subu        $a3, $fp, $v1
    ctx->pc = 0x555068u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_55506c:
    // 0x55506c: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x55506cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_555070:
    // 0x555070: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x555070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_555074:
    // 0x555074: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x555074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_555078:
    // 0x555078: 0x4600cdc0  add.s       $f23, $f25, $f0
    ctx->pc = 0x555078u;
    ctx->f[23] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_55507c:
    // 0x55507c: 0x4600c580  add.s       $f22, $f24, $f0
    ctx->pc = 0x55507cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_555080:
    // 0x555080: 0x46030d42  mul.s       $f21, $f1, $f3
    ctx->pc = 0x555080u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_555084:
    // 0x555084: 0x2010  mfhi        $a0
    ctx->pc = 0x555084u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_555088:
    // 0x555088: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x555088u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55508c:
    // 0x55508c: 0x0  nop
    ctx->pc = 0x55508cu;
    // NOP
label_555090:
    // 0x555090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x555090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_555094:
    // 0x555094: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x555094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_555098:
    // 0x555098: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x555098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_55509c:
    // 0x55509c: 0x0  nop
    ctx->pc = 0x55509cu;
    // NOP
label_5550a0:
    // 0x5550a0: 0x1010  mfhi        $v0
    ctx->pc = 0x5550a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5550a4:
    // 0x5550a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x5550a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_5550a8:
    // 0x5550a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5550a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5550ac:
    // 0x5550ac: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x5550acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_5550b0:
    // 0x5550b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5550b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5550b4:
    // 0x5550b4: 0x0  nop
    ctx->pc = 0x5550b4u;
    // NOP
label_5550b8:
    // 0x5550b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5550b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5550bc:
    // 0x5550bc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x5550bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_5550c0:
    // 0x5550c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x5550c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_5550c4:
    // 0x5550c4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x5550c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_5550c8:
    // 0x5550c8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x5550c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_5550cc:
    // 0x5550cc: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x5550ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_5550d0:
    // 0x5550d0: 0xc0506ac  jal         func_141AB0
label_5550d4:
    if (ctx->pc == 0x5550D4u) {
        ctx->pc = 0x5550D4u;
            // 0x5550d4: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x5550D8u;
        goto label_5550d8;
    }
    ctx->pc = 0x5550D0u;
    SET_GPR_U32(ctx, 31, 0x5550D8u);
    ctx->pc = 0x5550D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5550D0u;
            // 0x5550d4: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5550D8u; }
        if (ctx->pc != 0x5550D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5550D8u; }
        if (ctx->pc != 0x5550D8u) { return; }
    }
    ctx->pc = 0x5550D8u;
label_5550d8:
    // 0x5550d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5550d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5550dc:
    // 0x5550dc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5550dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5550e0:
    // 0x5550e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5550e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5550e4:
    // 0x5550e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5550e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5550e8:
    // 0x5550e8: 0x320f809  jalr        $t9
label_5550ec:
    if (ctx->pc == 0x5550ECu) {
        ctx->pc = 0x5550ECu;
            // 0x5550ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5550F0u;
        goto label_5550f0;
    }
    ctx->pc = 0x5550E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5550F0u);
        ctx->pc = 0x5550ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5550E8u;
            // 0x5550ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5550F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5550F0u; }
            if (ctx->pc != 0x5550F0u) { return; }
        }
        }
    }
    ctx->pc = 0x5550F0u;
label_5550f0:
    // 0x5550f0: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x5550f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_5550f4:
    // 0x5550f4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_5550f8:
    if (ctx->pc == 0x5550F8u) {
        ctx->pc = 0x5550FCu;
        goto label_5550fc;
    }
    ctx->pc = 0x5550F4u;
    {
        const bool branch_taken_0x5550f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5550f4) {
            ctx->pc = 0x555188u;
            goto label_555188;
        }
    }
    ctx->pc = 0x5550FCu;
label_5550fc:
    // 0x5550fc: 0x6820004  bltzl       $s4, . + 4 + (0x4 << 2)
label_555100:
    if (ctx->pc == 0x555100u) {
        ctx->pc = 0x555100u;
            // 0x555100: 0x141842  srl         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x555104u;
        goto label_555104;
    }
    ctx->pc = 0x5550FCu;
    {
        const bool branch_taken_0x5550fc = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x5550fc) {
            ctx->pc = 0x555100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5550FCu;
            // 0x555100: 0x141842  srl         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555110u;
            goto label_555110;
        }
    }
    ctx->pc = 0x555104u;
label_555104:
    // 0x555104: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x555104u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555108:
    // 0x555108: 0x10000007  b           . + 4 + (0x7 << 2)
label_55510c:
    if (ctx->pc == 0x55510Cu) {
        ctx->pc = 0x55510Cu;
            // 0x55510c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x555110u;
        goto label_555110;
    }
    ctx->pc = 0x555108u;
    {
        const bool branch_taken_0x555108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555108u;
            // 0x55510c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x555108) {
            ctx->pc = 0x555128u;
            goto label_555128;
        }
    }
    ctx->pc = 0x555110u;
label_555110:
    // 0x555110: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x555110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_555114:
    // 0x555114: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x555114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_555118:
    // 0x555118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x555118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55511c:
    // 0x55511c: 0x0  nop
    ctx->pc = 0x55511cu;
    // NOP
label_555120:
    // 0x555120: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x555120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_555124:
    // 0x555124: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x555124u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_555128:
    // 0x555128: 0x6620004  bltzl       $s3, . + 4 + (0x4 << 2)
label_55512c:
    if (ctx->pc == 0x55512Cu) {
        ctx->pc = 0x55512Cu;
            // 0x55512c: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x555130u;
        goto label_555130;
    }
    ctx->pc = 0x555128u;
    {
        const bool branch_taken_0x555128 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x555128) {
            ctx->pc = 0x55512Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555128u;
            // 0x55512c: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55513Cu;
            goto label_55513c;
        }
    }
    ctx->pc = 0x555130u;
label_555130:
    // 0x555130: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x555130u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555134:
    // 0x555134: 0x10000007  b           . + 4 + (0x7 << 2)
label_555138:
    if (ctx->pc == 0x555138u) {
        ctx->pc = 0x555138u;
            // 0x555138: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55513Cu;
        goto label_55513c;
    }
    ctx->pc = 0x555134u;
    {
        const bool branch_taken_0x555134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555134u;
            // 0x555138: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x555134) {
            ctx->pc = 0x555154u;
            goto label_555154;
        }
    }
    ctx->pc = 0x55513Cu;
label_55513c:
    // 0x55513c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x55513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_555140:
    // 0x555140: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x555140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_555144:
    // 0x555144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x555144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555148:
    // 0x555148: 0x0  nop
    ctx->pc = 0x555148u;
    // NOP
label_55514c:
    // 0x55514c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55514cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_555150:
    // 0x555150: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x555150u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_555154:
    // 0x555154: 0x4615bb01  sub.s       $f12, $f23, $f21
    ctx->pc = 0x555154u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_555158:
    // 0x555158: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x555158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55515c:
    // 0x55515c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_555160:
    // 0x555160: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x555160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_555164:
    // 0x555164: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x555164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_555168:
    // 0x555168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x555168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55516c:
    // 0x55516c: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x55516cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_555170:
    // 0x555170: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x555170u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_555174:
    // 0x555174: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x555174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_555178:
    // 0x555178: 0xc0bc284  jal         func_2F0A10
label_55517c:
    if (ctx->pc == 0x55517Cu) {
        ctx->pc = 0x55517Cu;
            // 0x55517c: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x555180u;
        goto label_555180;
    }
    ctx->pc = 0x555178u;
    SET_GPR_U32(ctx, 31, 0x555180u);
    ctx->pc = 0x55517Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555178u;
            // 0x55517c: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555180u; }
        if (ctx->pc != 0x555180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555180u; }
        if (ctx->pc != 0x555180u) { return; }
    }
    ctx->pc = 0x555180u;
label_555180:
    // 0x555180: 0x10000022  b           . + 4 + (0x22 << 2)
label_555184:
    if (ctx->pc == 0x555184u) {
        ctx->pc = 0x555188u;
        goto label_555188;
    }
    ctx->pc = 0x555180u;
    {
        const bool branch_taken_0x555180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555180) {
            ctx->pc = 0x55520Cu;
            goto label_55520c;
        }
    }
    ctx->pc = 0x555188u;
label_555188:
    // 0x555188: 0x6c20004  bltzl       $s6, . + 4 + (0x4 << 2)
label_55518c:
    if (ctx->pc == 0x55518Cu) {
        ctx->pc = 0x55518Cu;
            // 0x55518c: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x555190u;
        goto label_555190;
    }
    ctx->pc = 0x555188u;
    {
        const bool branch_taken_0x555188 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x555188) {
            ctx->pc = 0x55518Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555188u;
            // 0x55518c: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55519Cu;
            goto label_55519c;
        }
    }
    ctx->pc = 0x555190u;
label_555190:
    // 0x555190: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x555190u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555194:
    // 0x555194: 0x10000007  b           . + 4 + (0x7 << 2)
label_555198:
    if (ctx->pc == 0x555198u) {
        ctx->pc = 0x555198u;
            // 0x555198: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55519Cu;
        goto label_55519c;
    }
    ctx->pc = 0x555194u;
    {
        const bool branch_taken_0x555194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555194u;
            // 0x555198: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x555194) {
            ctx->pc = 0x5551B4u;
            goto label_5551b4;
        }
    }
    ctx->pc = 0x55519Cu;
label_55519c:
    // 0x55519c: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x55519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_5551a0:
    // 0x5551a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5551a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5551a4:
    // 0x5551a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5551a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5551a8:
    // 0x5551a8: 0x0  nop
    ctx->pc = 0x5551a8u;
    // NOP
label_5551ac:
    // 0x5551ac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5551acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5551b0:
    // 0x5551b0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5551b0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5551b4:
    // 0x5551b4: 0x6e20004  bltzl       $s7, . + 4 + (0x4 << 2)
label_5551b8:
    if (ctx->pc == 0x5551B8u) {
        ctx->pc = 0x5551B8u;
            // 0x5551b8: 0x171842  srl         $v1, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x5551BCu;
        goto label_5551bc;
    }
    ctx->pc = 0x5551B4u;
    {
        const bool branch_taken_0x5551b4 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x5551b4) {
            ctx->pc = 0x5551B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5551B4u;
            // 0x5551b8: 0x171842  srl         $v1, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5551C8u;
            goto label_5551c8;
        }
    }
    ctx->pc = 0x5551BCu;
label_5551bc:
    // 0x5551bc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x5551bcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5551c0:
    // 0x5551c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5551c4:
    if (ctx->pc == 0x5551C4u) {
        ctx->pc = 0x5551C4u;
            // 0x5551c4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5551C8u;
        goto label_5551c8;
    }
    ctx->pc = 0x5551C0u;
    {
        const bool branch_taken_0x5551c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5551C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5551C0u;
            // 0x5551c4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5551c0) {
            ctx->pc = 0x5551E0u;
            goto label_5551e0;
        }
    }
    ctx->pc = 0x5551C8u;
label_5551c8:
    // 0x5551c8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x5551c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_5551cc:
    // 0x5551cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5551ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5551d0:
    // 0x5551d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5551d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5551d4:
    // 0x5551d4: 0x0  nop
    ctx->pc = 0x5551d4u;
    // NOP
label_5551d8:
    // 0x5551d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5551d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5551dc:
    // 0x5551dc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5551dcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5551e0:
    // 0x5551e0: 0x4615bb01  sub.s       $f12, $f23, $f21
    ctx->pc = 0x5551e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_5551e4:
    // 0x5551e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5551e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5551e8:
    // 0x5551e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5551e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5551ec:
    // 0x5551ec: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x5551ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5551f0:
    // 0x5551f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x5551f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5551f4:
    // 0x5551f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5551f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5551f8:
    // 0x5551f8: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x5551f8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_5551fc:
    // 0x5551fc: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x5551fcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_555200:
    // 0x555200: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x555200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_555204:
    // 0x555204: 0xc0bc284  jal         func_2F0A10
label_555208:
    if (ctx->pc == 0x555208u) {
        ctx->pc = 0x555208u;
            // 0x555208: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x55520Cu;
        goto label_55520c;
    }
    ctx->pc = 0x555204u;
    SET_GPR_U32(ctx, 31, 0x55520Cu);
    ctx->pc = 0x555208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555204u;
            // 0x555208: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55520Cu; }
        if (ctx->pc != 0x55520Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55520Cu; }
        if (ctx->pc != 0x55520Cu) { return; }
    }
    ctx->pc = 0x55520Cu;
label_55520c:
    // 0x55520c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_555210:
    // 0x555210: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x555210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_555214:
    // 0x555214: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x555214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_555218:
    // 0x555218: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x555218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55521c:
    // 0x55521c: 0x320f809  jalr        $t9
label_555220:
    if (ctx->pc == 0x555220u) {
        ctx->pc = 0x555224u;
        goto label_555224;
    }
    ctx->pc = 0x55521Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555224u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x555224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555224u; }
            if (ctx->pc != 0x555224u) { return; }
        }
        }
    }
    ctx->pc = 0x555224u;
label_555224:
    // 0x555224: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x555224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_555228:
    // 0x555228: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x555228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_55522c:
    // 0x55522c: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x55522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_555230:
    // 0x555230: 0xc0506ac  jal         func_141AB0
label_555234:
    if (ctx->pc == 0x555234u) {
        ctx->pc = 0x555234u;
            // 0x555234: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x555238u;
        goto label_555238;
    }
    ctx->pc = 0x555230u;
    SET_GPR_U32(ctx, 31, 0x555238u);
    ctx->pc = 0x555234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555230u;
            // 0x555234: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555238u; }
        if (ctx->pc != 0x555238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555238u; }
        if (ctx->pc != 0x555238u) { return; }
    }
    ctx->pc = 0x555238u;
label_555238:
    // 0x555238: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x555238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55523c:
    // 0x55523c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x55523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_555240:
    // 0x555240: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x555240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_555244:
    // 0x555244: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x555244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_555248:
    // 0x555248: 0x320f809  jalr        $t9
label_55524c:
    if (ctx->pc == 0x55524Cu) {
        ctx->pc = 0x55524Cu;
            // 0x55524c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x555250u;
        goto label_555250;
    }
    ctx->pc = 0x555248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555250u);
        ctx->pc = 0x55524Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555248u;
            // 0x55524c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x555250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555250u; }
            if (ctx->pc != 0x555250u) { return; }
        }
        }
    }
    ctx->pc = 0x555250u;
label_555250:
    // 0x555250: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x555250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_555254:
    // 0x555254: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x555254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_555258:
    // 0x555258: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x555258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_55525c:
    // 0x55525c: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x55525cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_555260:
    // 0x555260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x555260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555264:
    // 0x555264: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x555264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_555268:
    // 0x555268: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x555268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55526c:
    // 0x55526c: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x55526cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_555270:
    // 0x555270: 0x46190540  add.s       $f21, $f0, $f25
    ctx->pc = 0x555270u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_555274:
    // 0x555274: 0x0  nop
    ctx->pc = 0x555274u;
    // NOP
label_555278:
    // 0x555278: 0x1010  mfhi        $v0
    ctx->pc = 0x555278u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55527c:
    // 0x55527c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x55527cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_555280:
    // 0x555280: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x555280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_555284:
    // 0x555284: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x555284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_555288:
    // 0x555288: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x555288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_55528c:
    // 0x55528c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x55528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_555290:
    // 0x555290: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x555290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_555294:
    // 0x555294: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x555294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_555298:
    // 0x555298: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x555298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_55529c:
    // 0x55529c: 0x46180500  add.s       $f20, $f0, $f24
    ctx->pc = 0x55529cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_5552a0:
    // 0x5552a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x5552a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5552a4:
    // 0x5552a4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x5552a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_5552a8:
    // 0x5552a8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x5552a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5552ac:
    // 0x5552ac: 0x18c00021  blez        $a2, . + 4 + (0x21 << 2)
label_5552b0:
    if (ctx->pc == 0x5552B0u) {
        ctx->pc = 0x5552B0u;
            // 0x5552b0: 0xe48023  subu        $s0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->pc = 0x5552B4u;
        goto label_5552b4;
    }
    ctx->pc = 0x5552ACu;
    {
        const bool branch_taken_0x5552ac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x5552B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5552ACu;
            // 0x5552b0: 0xe48023  subu        $s0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5552ac) {
            ctx->pc = 0x555334u;
            goto label_555334;
        }
    }
    ctx->pc = 0x5552B4u;
label_5552b4:
    // 0x5552b4: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
label_5552b8:
    if (ctx->pc == 0x5552B8u) {
        ctx->pc = 0x5552B8u;
            // 0x5552b8: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x5552BCu;
        goto label_5552bc;
    }
    ctx->pc = 0x5552B4u;
    {
        const bool branch_taken_0x5552b4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x5552b4) {
            ctx->pc = 0x5552B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5552B4u;
            // 0x5552b8: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5552C8u;
            goto label_5552c8;
        }
    }
    ctx->pc = 0x5552BCu;
label_5552bc:
    // 0x5552bc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5552bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5552c0:
    // 0x5552c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5552c4:
    if (ctx->pc == 0x5552C4u) {
        ctx->pc = 0x5552C4u;
            // 0x5552c4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5552C8u;
        goto label_5552c8;
    }
    ctx->pc = 0x5552C0u;
    {
        const bool branch_taken_0x5552c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5552C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5552C0u;
            // 0x5552c4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5552c0) {
            ctx->pc = 0x5552E0u;
            goto label_5552e0;
        }
    }
    ctx->pc = 0x5552C8u;
label_5552c8:
    // 0x5552c8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5552c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5552cc:
    // 0x5552cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5552ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5552d0:
    // 0x5552d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5552d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5552d4:
    // 0x5552d4: 0x0  nop
    ctx->pc = 0x5552d4u;
    // NOP
label_5552d8:
    // 0x5552d8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5552d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5552dc:
    // 0x5552dc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5552dcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5552e0:
    // 0x5552e0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5552e4:
    if (ctx->pc == 0x5552E4u) {
        ctx->pc = 0x5552E4u;
            // 0x5552e4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x5552E8u;
        goto label_5552e8;
    }
    ctx->pc = 0x5552E0u;
    {
        const bool branch_taken_0x5552e0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5552e0) {
            ctx->pc = 0x5552E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5552E0u;
            // 0x5552e4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5552F4u;
            goto label_5552f4;
        }
    }
    ctx->pc = 0x5552E8u;
label_5552e8:
    // 0x5552e8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5552e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5552ec:
    // 0x5552ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_5552f0:
    if (ctx->pc == 0x5552F0u) {
        ctx->pc = 0x5552F0u;
            // 0x5552f0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5552F4u;
        goto label_5552f4;
    }
    ctx->pc = 0x5552ECu;
    {
        const bool branch_taken_0x5552ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5552F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5552ECu;
            // 0x5552f0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5552ec) {
            ctx->pc = 0x55530Cu;
            goto label_55530c;
        }
    }
    ctx->pc = 0x5552F4u;
label_5552f4:
    // 0x5552f4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5552f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5552f8:
    // 0x5552f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5552f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5552fc:
    // 0x5552fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5552fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555300:
    // 0x555300: 0x0  nop
    ctx->pc = 0x555300u;
    // NOP
label_555304:
    // 0x555304: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x555304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_555308:
    // 0x555308: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x555308u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_55530c:
    // 0x55530c: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x55530cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_555310:
    // 0x555310: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x555310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_555314:
    // 0x555314: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x555314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_555318:
    // 0x555318: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x555318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55531c:
    // 0x55531c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55531cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555320:
    // 0x555320: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x555320u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_555324:
    // 0x555324: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x555324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_555328:
    // 0x555328: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x555328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_55532c:
    // 0x55532c: 0xc0bc284  jal         func_2F0A10
label_555330:
    if (ctx->pc == 0x555330u) {
        ctx->pc = 0x555330u;
            // 0x555330: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x555334u;
        goto label_555334;
    }
    ctx->pc = 0x55532Cu;
    SET_GPR_U32(ctx, 31, 0x555334u);
    ctx->pc = 0x555330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55532Cu;
            // 0x555330: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555334u; }
        if (ctx->pc != 0x555334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555334u; }
        if (ctx->pc != 0x555334u) { return; }
    }
    ctx->pc = 0x555334u;
label_555334:
    // 0x555334: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x555334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_555338:
    // 0x555338: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x555338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_55533c:
    // 0x55533c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x55533cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_555340:
    // 0x555340: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x555340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_555344:
    // 0x555344: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x555344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_555348:
    // 0x555348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x555348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55534c:
    // 0x55534c: 0x0  nop
    ctx->pc = 0x55534cu;
    // NOP
label_555350:
    // 0x555350: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x555350u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_555354:
    // 0x555354: 0x46160d5c  madd.s      $f21, $f1, $f22
    ctx->pc = 0x555354u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
label_555358:
    // 0x555358: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x555358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55535c:
    // 0x55535c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x55535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_555360:
    // 0x555360: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_555364:
    if (ctx->pc == 0x555364u) {
        ctx->pc = 0x555364u;
            // 0x555364: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x555368u;
        goto label_555368;
    }
    ctx->pc = 0x555360u;
    {
        const bool branch_taken_0x555360 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x555364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555360u;
            // 0x555364: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x555360) {
            ctx->pc = 0x555374u;
            goto label_555374;
        }
    }
    ctx->pc = 0x555368u;
label_555368:
    // 0x555368: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x555368u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55536c:
    // 0x55536c: 0x10000008  b           . + 4 + (0x8 << 2)
label_555370:
    if (ctx->pc == 0x555370u) {
        ctx->pc = 0x555370u;
            // 0x555370: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x555374u;
        goto label_555374;
    }
    ctx->pc = 0x55536Cu;
    {
        const bool branch_taken_0x55536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55536Cu;
            // 0x555370: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55536c) {
            ctx->pc = 0x555390u;
            goto label_555390;
        }
    }
    ctx->pc = 0x555374u;
label_555374:
    // 0x555374: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x555374u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_555378:
    // 0x555378: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x555378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_55537c:
    // 0x55537c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55537cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_555380:
    // 0x555380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x555380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555384:
    // 0x555384: 0x0  nop
    ctx->pc = 0x555384u;
    // NOP
label_555388:
    // 0x555388: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x555388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55538c:
    // 0x55538c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x55538cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_555390:
    // 0x555390: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_555394:
    if (ctx->pc == 0x555394u) {
        ctx->pc = 0x555394u;
            // 0x555394: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x555398u;
        goto label_555398;
    }
    ctx->pc = 0x555390u;
    {
        const bool branch_taken_0x555390 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x555390) {
            ctx->pc = 0x555394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555390u;
            // 0x555394: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5553A4u;
            goto label_5553a4;
        }
    }
    ctx->pc = 0x555398u;
label_555398:
    // 0x555398: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x555398u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55539c:
    // 0x55539c: 0x10000007  b           . + 4 + (0x7 << 2)
label_5553a0:
    if (ctx->pc == 0x5553A0u) {
        ctx->pc = 0x5553A0u;
            // 0x5553a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5553A4u;
        goto label_5553a4;
    }
    ctx->pc = 0x55539Cu;
    {
        const bool branch_taken_0x55539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5553A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55539Cu;
            // 0x5553a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55539c) {
            ctx->pc = 0x5553BCu;
            goto label_5553bc;
        }
    }
    ctx->pc = 0x5553A4u;
label_5553a4:
    // 0x5553a4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5553a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5553a8:
    // 0x5553a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5553a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5553ac:
    // 0x5553ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5553acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5553b0:
    // 0x5553b0: 0x0  nop
    ctx->pc = 0x5553b0u;
    // NOP
label_5553b4:
    // 0x5553b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5553b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5553b8:
    // 0x5553b8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5553b8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5553bc:
    // 0x5553bc: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x5553bcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_5553c0:
    // 0x5553c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5553c4:
    // 0x5553c4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x5553c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5553c8:
    // 0x5553c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5553c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5553cc:
    // 0x5553cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5553ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5553d0:
    // 0x5553d0: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x5553d0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_5553d4:
    // 0x5553d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x5553d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_5553d8:
    // 0x5553d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5553d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5553dc:
    // 0x5553dc: 0xc0bc284  jal         func_2F0A10
label_5553e0:
    if (ctx->pc == 0x5553E0u) {
        ctx->pc = 0x5553E0u;
            // 0x5553e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5553E4u;
        goto label_5553e4;
    }
    ctx->pc = 0x5553DCu;
    SET_GPR_U32(ctx, 31, 0x5553E4u);
    ctx->pc = 0x5553E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5553DCu;
            // 0x5553e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5553E4u; }
        if (ctx->pc != 0x5553E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5553E4u; }
        if (ctx->pc != 0x5553E4u) { return; }
    }
    ctx->pc = 0x5553E4u;
label_5553e4:
    // 0x5553e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5553e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5553e8:
    // 0x5553e8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5553e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5553ec:
    // 0x5553ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5553ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5553f0:
    // 0x5553f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5553f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5553f4:
    // 0x5553f4: 0x320f809  jalr        $t9
label_5553f8:
    if (ctx->pc == 0x5553F8u) {
        ctx->pc = 0x5553FCu;
        goto label_5553fc;
    }
    ctx->pc = 0x5553F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5553FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5553FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5553FCu; }
            if (ctx->pc != 0x5553FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5553FCu;
label_5553fc:
    // 0x5553fc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x5553fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_555400:
    // 0x555400: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x555400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_555404:
    // 0x555404: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x555404u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_555408:
    // 0x555408: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x555408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_55540c:
    // 0x55540c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x55540cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_555410:
    // 0x555410: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x555410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_555414:
    // 0x555414: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x555414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_555418:
    // 0x555418: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x555418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55541c:
    // 0x55541c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x55541cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_555420:
    // 0x555420: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x555420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_555424:
    // 0x555424: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x555424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_555428:
    // 0x555428: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x555428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55542c:
    // 0x55542c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55542cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_555430:
    // 0x555430: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x555430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_555434:
    // 0x555434: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x555434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_555438:
    // 0x555438: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x555438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55543c:
    // 0x55543c: 0x3e00008  jr          $ra
label_555440:
    if (ctx->pc == 0x555440u) {
        ctx->pc = 0x555440u;
            // 0x555440: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x555444u;
        goto label_555444;
    }
    ctx->pc = 0x55543Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x555440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55543Cu;
            // 0x555440: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x555444u;
label_555444:
    // 0x555444: 0x0  nop
    ctx->pc = 0x555444u;
    // NOP
label_555448:
    // 0x555448: 0x0  nop
    ctx->pc = 0x555448u;
    // NOP
label_55544c:
    // 0x55544c: 0x0  nop
    ctx->pc = 0x55544cu;
    // NOP
}
