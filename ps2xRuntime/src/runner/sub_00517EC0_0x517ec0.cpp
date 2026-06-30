#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517EC0
// Address: 0x517ec0 - 0x518430
void sub_00517EC0_0x517ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517EC0_0x517ec0");
#endif

    switch (ctx->pc) {
        case 0x517ec0u: goto label_517ec0;
        case 0x517ec4u: goto label_517ec4;
        case 0x517ec8u: goto label_517ec8;
        case 0x517eccu: goto label_517ecc;
        case 0x517ed0u: goto label_517ed0;
        case 0x517ed4u: goto label_517ed4;
        case 0x517ed8u: goto label_517ed8;
        case 0x517edcu: goto label_517edc;
        case 0x517ee0u: goto label_517ee0;
        case 0x517ee4u: goto label_517ee4;
        case 0x517ee8u: goto label_517ee8;
        case 0x517eecu: goto label_517eec;
        case 0x517ef0u: goto label_517ef0;
        case 0x517ef4u: goto label_517ef4;
        case 0x517ef8u: goto label_517ef8;
        case 0x517efcu: goto label_517efc;
        case 0x517f00u: goto label_517f00;
        case 0x517f04u: goto label_517f04;
        case 0x517f08u: goto label_517f08;
        case 0x517f0cu: goto label_517f0c;
        case 0x517f10u: goto label_517f10;
        case 0x517f14u: goto label_517f14;
        case 0x517f18u: goto label_517f18;
        case 0x517f1cu: goto label_517f1c;
        case 0x517f20u: goto label_517f20;
        case 0x517f24u: goto label_517f24;
        case 0x517f28u: goto label_517f28;
        case 0x517f2cu: goto label_517f2c;
        case 0x517f30u: goto label_517f30;
        case 0x517f34u: goto label_517f34;
        case 0x517f38u: goto label_517f38;
        case 0x517f3cu: goto label_517f3c;
        case 0x517f40u: goto label_517f40;
        case 0x517f44u: goto label_517f44;
        case 0x517f48u: goto label_517f48;
        case 0x517f4cu: goto label_517f4c;
        case 0x517f50u: goto label_517f50;
        case 0x517f54u: goto label_517f54;
        case 0x517f58u: goto label_517f58;
        case 0x517f5cu: goto label_517f5c;
        case 0x517f60u: goto label_517f60;
        case 0x517f64u: goto label_517f64;
        case 0x517f68u: goto label_517f68;
        case 0x517f6cu: goto label_517f6c;
        case 0x517f70u: goto label_517f70;
        case 0x517f74u: goto label_517f74;
        case 0x517f78u: goto label_517f78;
        case 0x517f7cu: goto label_517f7c;
        case 0x517f80u: goto label_517f80;
        case 0x517f84u: goto label_517f84;
        case 0x517f88u: goto label_517f88;
        case 0x517f8cu: goto label_517f8c;
        case 0x517f90u: goto label_517f90;
        case 0x517f94u: goto label_517f94;
        case 0x517f98u: goto label_517f98;
        case 0x517f9cu: goto label_517f9c;
        case 0x517fa0u: goto label_517fa0;
        case 0x517fa4u: goto label_517fa4;
        case 0x517fa8u: goto label_517fa8;
        case 0x517facu: goto label_517fac;
        case 0x517fb0u: goto label_517fb0;
        case 0x517fb4u: goto label_517fb4;
        case 0x517fb8u: goto label_517fb8;
        case 0x517fbcu: goto label_517fbc;
        case 0x517fc0u: goto label_517fc0;
        case 0x517fc4u: goto label_517fc4;
        case 0x517fc8u: goto label_517fc8;
        case 0x517fccu: goto label_517fcc;
        case 0x517fd0u: goto label_517fd0;
        case 0x517fd4u: goto label_517fd4;
        case 0x517fd8u: goto label_517fd8;
        case 0x517fdcu: goto label_517fdc;
        case 0x517fe0u: goto label_517fe0;
        case 0x517fe4u: goto label_517fe4;
        case 0x517fe8u: goto label_517fe8;
        case 0x517fecu: goto label_517fec;
        case 0x517ff0u: goto label_517ff0;
        case 0x517ff4u: goto label_517ff4;
        case 0x517ff8u: goto label_517ff8;
        case 0x517ffcu: goto label_517ffc;
        case 0x518000u: goto label_518000;
        case 0x518004u: goto label_518004;
        case 0x518008u: goto label_518008;
        case 0x51800cu: goto label_51800c;
        case 0x518010u: goto label_518010;
        case 0x518014u: goto label_518014;
        case 0x518018u: goto label_518018;
        case 0x51801cu: goto label_51801c;
        case 0x518020u: goto label_518020;
        case 0x518024u: goto label_518024;
        case 0x518028u: goto label_518028;
        case 0x51802cu: goto label_51802c;
        case 0x518030u: goto label_518030;
        case 0x518034u: goto label_518034;
        case 0x518038u: goto label_518038;
        case 0x51803cu: goto label_51803c;
        case 0x518040u: goto label_518040;
        case 0x518044u: goto label_518044;
        case 0x518048u: goto label_518048;
        case 0x51804cu: goto label_51804c;
        case 0x518050u: goto label_518050;
        case 0x518054u: goto label_518054;
        case 0x518058u: goto label_518058;
        case 0x51805cu: goto label_51805c;
        case 0x518060u: goto label_518060;
        case 0x518064u: goto label_518064;
        case 0x518068u: goto label_518068;
        case 0x51806cu: goto label_51806c;
        case 0x518070u: goto label_518070;
        case 0x518074u: goto label_518074;
        case 0x518078u: goto label_518078;
        case 0x51807cu: goto label_51807c;
        case 0x518080u: goto label_518080;
        case 0x518084u: goto label_518084;
        case 0x518088u: goto label_518088;
        case 0x51808cu: goto label_51808c;
        case 0x518090u: goto label_518090;
        case 0x518094u: goto label_518094;
        case 0x518098u: goto label_518098;
        case 0x51809cu: goto label_51809c;
        case 0x5180a0u: goto label_5180a0;
        case 0x5180a4u: goto label_5180a4;
        case 0x5180a8u: goto label_5180a8;
        case 0x5180acu: goto label_5180ac;
        case 0x5180b0u: goto label_5180b0;
        case 0x5180b4u: goto label_5180b4;
        case 0x5180b8u: goto label_5180b8;
        case 0x5180bcu: goto label_5180bc;
        case 0x5180c0u: goto label_5180c0;
        case 0x5180c4u: goto label_5180c4;
        case 0x5180c8u: goto label_5180c8;
        case 0x5180ccu: goto label_5180cc;
        case 0x5180d0u: goto label_5180d0;
        case 0x5180d4u: goto label_5180d4;
        case 0x5180d8u: goto label_5180d8;
        case 0x5180dcu: goto label_5180dc;
        case 0x5180e0u: goto label_5180e0;
        case 0x5180e4u: goto label_5180e4;
        case 0x5180e8u: goto label_5180e8;
        case 0x5180ecu: goto label_5180ec;
        case 0x5180f0u: goto label_5180f0;
        case 0x5180f4u: goto label_5180f4;
        case 0x5180f8u: goto label_5180f8;
        case 0x5180fcu: goto label_5180fc;
        case 0x518100u: goto label_518100;
        case 0x518104u: goto label_518104;
        case 0x518108u: goto label_518108;
        case 0x51810cu: goto label_51810c;
        case 0x518110u: goto label_518110;
        case 0x518114u: goto label_518114;
        case 0x518118u: goto label_518118;
        case 0x51811cu: goto label_51811c;
        case 0x518120u: goto label_518120;
        case 0x518124u: goto label_518124;
        case 0x518128u: goto label_518128;
        case 0x51812cu: goto label_51812c;
        case 0x518130u: goto label_518130;
        case 0x518134u: goto label_518134;
        case 0x518138u: goto label_518138;
        case 0x51813cu: goto label_51813c;
        case 0x518140u: goto label_518140;
        case 0x518144u: goto label_518144;
        case 0x518148u: goto label_518148;
        case 0x51814cu: goto label_51814c;
        case 0x518150u: goto label_518150;
        case 0x518154u: goto label_518154;
        case 0x518158u: goto label_518158;
        case 0x51815cu: goto label_51815c;
        case 0x518160u: goto label_518160;
        case 0x518164u: goto label_518164;
        case 0x518168u: goto label_518168;
        case 0x51816cu: goto label_51816c;
        case 0x518170u: goto label_518170;
        case 0x518174u: goto label_518174;
        case 0x518178u: goto label_518178;
        case 0x51817cu: goto label_51817c;
        case 0x518180u: goto label_518180;
        case 0x518184u: goto label_518184;
        case 0x518188u: goto label_518188;
        case 0x51818cu: goto label_51818c;
        case 0x518190u: goto label_518190;
        case 0x518194u: goto label_518194;
        case 0x518198u: goto label_518198;
        case 0x51819cu: goto label_51819c;
        case 0x5181a0u: goto label_5181a0;
        case 0x5181a4u: goto label_5181a4;
        case 0x5181a8u: goto label_5181a8;
        case 0x5181acu: goto label_5181ac;
        case 0x5181b0u: goto label_5181b0;
        case 0x5181b4u: goto label_5181b4;
        case 0x5181b8u: goto label_5181b8;
        case 0x5181bcu: goto label_5181bc;
        case 0x5181c0u: goto label_5181c0;
        case 0x5181c4u: goto label_5181c4;
        case 0x5181c8u: goto label_5181c8;
        case 0x5181ccu: goto label_5181cc;
        case 0x5181d0u: goto label_5181d0;
        case 0x5181d4u: goto label_5181d4;
        case 0x5181d8u: goto label_5181d8;
        case 0x5181dcu: goto label_5181dc;
        case 0x5181e0u: goto label_5181e0;
        case 0x5181e4u: goto label_5181e4;
        case 0x5181e8u: goto label_5181e8;
        case 0x5181ecu: goto label_5181ec;
        case 0x5181f0u: goto label_5181f0;
        case 0x5181f4u: goto label_5181f4;
        case 0x5181f8u: goto label_5181f8;
        case 0x5181fcu: goto label_5181fc;
        case 0x518200u: goto label_518200;
        case 0x518204u: goto label_518204;
        case 0x518208u: goto label_518208;
        case 0x51820cu: goto label_51820c;
        case 0x518210u: goto label_518210;
        case 0x518214u: goto label_518214;
        case 0x518218u: goto label_518218;
        case 0x51821cu: goto label_51821c;
        case 0x518220u: goto label_518220;
        case 0x518224u: goto label_518224;
        case 0x518228u: goto label_518228;
        case 0x51822cu: goto label_51822c;
        case 0x518230u: goto label_518230;
        case 0x518234u: goto label_518234;
        case 0x518238u: goto label_518238;
        case 0x51823cu: goto label_51823c;
        case 0x518240u: goto label_518240;
        case 0x518244u: goto label_518244;
        case 0x518248u: goto label_518248;
        case 0x51824cu: goto label_51824c;
        case 0x518250u: goto label_518250;
        case 0x518254u: goto label_518254;
        case 0x518258u: goto label_518258;
        case 0x51825cu: goto label_51825c;
        case 0x518260u: goto label_518260;
        case 0x518264u: goto label_518264;
        case 0x518268u: goto label_518268;
        case 0x51826cu: goto label_51826c;
        case 0x518270u: goto label_518270;
        case 0x518274u: goto label_518274;
        case 0x518278u: goto label_518278;
        case 0x51827cu: goto label_51827c;
        case 0x518280u: goto label_518280;
        case 0x518284u: goto label_518284;
        case 0x518288u: goto label_518288;
        case 0x51828cu: goto label_51828c;
        case 0x518290u: goto label_518290;
        case 0x518294u: goto label_518294;
        case 0x518298u: goto label_518298;
        case 0x51829cu: goto label_51829c;
        case 0x5182a0u: goto label_5182a0;
        case 0x5182a4u: goto label_5182a4;
        case 0x5182a8u: goto label_5182a8;
        case 0x5182acu: goto label_5182ac;
        case 0x5182b0u: goto label_5182b0;
        case 0x5182b4u: goto label_5182b4;
        case 0x5182b8u: goto label_5182b8;
        case 0x5182bcu: goto label_5182bc;
        case 0x5182c0u: goto label_5182c0;
        case 0x5182c4u: goto label_5182c4;
        case 0x5182c8u: goto label_5182c8;
        case 0x5182ccu: goto label_5182cc;
        case 0x5182d0u: goto label_5182d0;
        case 0x5182d4u: goto label_5182d4;
        case 0x5182d8u: goto label_5182d8;
        case 0x5182dcu: goto label_5182dc;
        case 0x5182e0u: goto label_5182e0;
        case 0x5182e4u: goto label_5182e4;
        case 0x5182e8u: goto label_5182e8;
        case 0x5182ecu: goto label_5182ec;
        case 0x5182f0u: goto label_5182f0;
        case 0x5182f4u: goto label_5182f4;
        case 0x5182f8u: goto label_5182f8;
        case 0x5182fcu: goto label_5182fc;
        case 0x518300u: goto label_518300;
        case 0x518304u: goto label_518304;
        case 0x518308u: goto label_518308;
        case 0x51830cu: goto label_51830c;
        case 0x518310u: goto label_518310;
        case 0x518314u: goto label_518314;
        case 0x518318u: goto label_518318;
        case 0x51831cu: goto label_51831c;
        case 0x518320u: goto label_518320;
        case 0x518324u: goto label_518324;
        case 0x518328u: goto label_518328;
        case 0x51832cu: goto label_51832c;
        case 0x518330u: goto label_518330;
        case 0x518334u: goto label_518334;
        case 0x518338u: goto label_518338;
        case 0x51833cu: goto label_51833c;
        case 0x518340u: goto label_518340;
        case 0x518344u: goto label_518344;
        case 0x518348u: goto label_518348;
        case 0x51834cu: goto label_51834c;
        case 0x518350u: goto label_518350;
        case 0x518354u: goto label_518354;
        case 0x518358u: goto label_518358;
        case 0x51835cu: goto label_51835c;
        case 0x518360u: goto label_518360;
        case 0x518364u: goto label_518364;
        case 0x518368u: goto label_518368;
        case 0x51836cu: goto label_51836c;
        case 0x518370u: goto label_518370;
        case 0x518374u: goto label_518374;
        case 0x518378u: goto label_518378;
        case 0x51837cu: goto label_51837c;
        case 0x518380u: goto label_518380;
        case 0x518384u: goto label_518384;
        case 0x518388u: goto label_518388;
        case 0x51838cu: goto label_51838c;
        case 0x518390u: goto label_518390;
        case 0x518394u: goto label_518394;
        case 0x518398u: goto label_518398;
        case 0x51839cu: goto label_51839c;
        case 0x5183a0u: goto label_5183a0;
        case 0x5183a4u: goto label_5183a4;
        case 0x5183a8u: goto label_5183a8;
        case 0x5183acu: goto label_5183ac;
        case 0x5183b0u: goto label_5183b0;
        case 0x5183b4u: goto label_5183b4;
        case 0x5183b8u: goto label_5183b8;
        case 0x5183bcu: goto label_5183bc;
        case 0x5183c0u: goto label_5183c0;
        case 0x5183c4u: goto label_5183c4;
        case 0x5183c8u: goto label_5183c8;
        case 0x5183ccu: goto label_5183cc;
        case 0x5183d0u: goto label_5183d0;
        case 0x5183d4u: goto label_5183d4;
        case 0x5183d8u: goto label_5183d8;
        case 0x5183dcu: goto label_5183dc;
        case 0x5183e0u: goto label_5183e0;
        case 0x5183e4u: goto label_5183e4;
        case 0x5183e8u: goto label_5183e8;
        case 0x5183ecu: goto label_5183ec;
        case 0x5183f0u: goto label_5183f0;
        case 0x5183f4u: goto label_5183f4;
        case 0x5183f8u: goto label_5183f8;
        case 0x5183fcu: goto label_5183fc;
        case 0x518400u: goto label_518400;
        case 0x518404u: goto label_518404;
        case 0x518408u: goto label_518408;
        case 0x51840cu: goto label_51840c;
        case 0x518410u: goto label_518410;
        case 0x518414u: goto label_518414;
        case 0x518418u: goto label_518418;
        case 0x51841cu: goto label_51841c;
        case 0x518420u: goto label_518420;
        case 0x518424u: goto label_518424;
        case 0x518428u: goto label_518428;
        case 0x51842cu: goto label_51842c;
        default: break;
    }

    ctx->pc = 0x517ec0u;

label_517ec0:
    // 0x517ec0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x517ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_517ec4:
    // 0x517ec4: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x517ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_517ec8:
    // 0x517ec8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x517ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_517ecc:
    // 0x517ecc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x517eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_517ed0:
    // 0x517ed0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x517ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_517ed4:
    // 0x517ed4: 0x24e70e84  addiu       $a3, $a3, 0xE84
    ctx->pc = 0x517ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3716));
label_517ed8:
    // 0x517ed8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x517ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_517edc:
    // 0x517edc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x517edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_517ee0:
    // 0x517ee0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x517ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_517ee4:
    // 0x517ee4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x517ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_517ee8:
    // 0x517ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x517ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_517eec:
    // 0x517eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x517eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_517ef0:
    // 0x517ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x517ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_517ef4:
    // 0x517ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_517ef8:
    // 0x517ef8: 0x8c860120  lw          $a2, 0x120($a0)
    ctx->pc = 0x517ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_517efc:
    // 0x517efc: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x517efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_517f00:
    // 0x517f00: 0x8c740e80  lw          $s4, 0xE80($v1)
    ctx->pc = 0x517f00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_517f04:
    // 0x517f04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x517f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_517f08:
    // 0x517f08: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x517f08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_517f0c:
    // 0x517f0c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x517f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_517f10:
    // 0x517f10: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x517f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_517f14:
    // 0x517f14: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x517f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_517f18:
    // 0x517f18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x517f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_517f1c:
    // 0x517f1c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x517f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_517f20:
    // 0x517f20: 0x1083012a  beq         $a0, $v1, . + 4 + (0x12A << 2)
label_517f24:
    if (ctx->pc == 0x517F24u) {
        ctx->pc = 0x517F24u;
            // 0x517f24: 0x8cd20000  lw          $s2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x517F28u;
        goto label_517f28;
    }
    ctx->pc = 0x517F20u;
    {
        const bool branch_taken_0x517f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x517F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517F20u;
            // 0x517f24: 0x8cd20000  lw          $s2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517f20) {
            ctx->pc = 0x5183CCu;
            goto label_5183cc;
        }
    }
    ctx->pc = 0x517F28u;
label_517f28:
    // 0x517f28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x517f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_517f2c:
    // 0x517f2c: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_517f30:
    if (ctx->pc == 0x517F30u) {
        ctx->pc = 0x517F30u;
            // 0x517f30: 0x8ea30134  lw          $v1, 0x134($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
        ctx->pc = 0x517F34u;
        goto label_517f34;
    }
    ctx->pc = 0x517F2Cu;
    {
        const bool branch_taken_0x517f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x517f2c) {
            ctx->pc = 0x517F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517F2Cu;
            // 0x517f30: 0x8ea30134  lw          $v1, 0x134($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x517F48u;
            goto label_517f48;
        }
    }
    ctx->pc = 0x517F34u;
label_517f34:
    // 0x517f34: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_517f38:
    if (ctx->pc == 0x517F38u) {
        ctx->pc = 0x517F38u;
            // 0x517f38: 0xaea30050  sw          $v1, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x517F3Cu;
        goto label_517f3c;
    }
    ctx->pc = 0x517F34u;
    {
        const bool branch_taken_0x517f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x517f34) {
            ctx->pc = 0x517F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517F34u;
            // 0x517f38: 0xaea30050  sw          $v1, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x517F44u;
            goto label_517f44;
        }
    }
    ctx->pc = 0x517F3Cu;
label_517f3c:
    // 0x517f3c: 0x1000012f  b           . + 4 + (0x12F << 2)
label_517f40:
    if (ctx->pc == 0x517F40u) {
        ctx->pc = 0x517F40u;
            // 0x517f40: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x517F44u;
        goto label_517f44;
    }
    ctx->pc = 0x517F3Cu;
    {
        const bool branch_taken_0x517f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517F3Cu;
            // 0x517f40: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517f3c) {
            ctx->pc = 0x5183FCu;
            goto label_5183fc;
        }
    }
    ctx->pc = 0x517F44u;
label_517f44:
    // 0x517f44: 0x8ea30134  lw          $v1, 0x134($s5)
    ctx->pc = 0x517f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_517f48:
    // 0x517f48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x517f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_517f4c:
    // 0x517f4c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x517f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_517f50:
    // 0x517f50: 0x8c630cec  lw          $v1, 0xCEC($v1)
    ctx->pc = 0x517f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3308)));
label_517f54:
    // 0x517f54: 0x50600119  beql        $v1, $zero, . + 4 + (0x119 << 2)
label_517f58:
    if (ctx->pc == 0x517F58u) {
        ctx->pc = 0x517F58u;
            // 0x517f58: 0xaea00138  sw          $zero, 0x138($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 0));
        ctx->pc = 0x517F5Cu;
        goto label_517f5c;
    }
    ctx->pc = 0x517F54u;
    {
        const bool branch_taken_0x517f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x517f54) {
            ctx->pc = 0x517F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517F54u;
            // 0x517f58: 0xaea00138  sw          $zero, 0x138($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5183BCu;
            goto label_5183bc;
        }
    }
    ctx->pc = 0x517F5Cu;
label_517f5c:
    // 0x517f5c: 0x8e220d6c  lw          $v0, 0xD6C($s1)
    ctx->pc = 0x517f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_517f60:
    // 0x517f60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x517f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517f64:
    // 0x517f64: 0x8e430d78  lw          $v1, 0xD78($s2)
    ctx->pc = 0x517f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_517f68:
    // 0x517f68: 0x8e570d70  lw          $s7, 0xD70($s2)
    ctx->pc = 0x517f68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_517f6c:
    // 0x517f6c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x517f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_517f70:
    // 0x517f70: 0x8c730020  lw          $s3, 0x20($v1)
    ctx->pc = 0x517f70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_517f74:
    // 0x517f74: 0x8e220d78  lw          $v0, 0xD78($s1)
    ctx->pc = 0x517f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_517f78:
    // 0x517f78: 0x8c560020  lw          $s6, 0x20($v0)
    ctx->pc = 0x517f78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_517f7c:
    // 0x517f7c: 0xc04cc04  jal         func_133010
label_517f80:
    if (ctx->pc == 0x517F80u) {
        ctx->pc = 0x517F80u;
            // 0x517f80: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x517F84u;
        goto label_517f84;
    }
    ctx->pc = 0x517F7Cu;
    SET_GPR_U32(ctx, 31, 0x517F84u);
    ctx->pc = 0x517F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517F7Cu;
            // 0x517f80: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517F84u; }
        if (ctx->pc != 0x517F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517F84u; }
        if (ctx->pc != 0x517F84u) { return; }
    }
    ctx->pc = 0x517F84u;
label_517f84:
    // 0x517f84: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x517f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_517f88:
    // 0x517f88: 0xc04cc04  jal         func_133010
label_517f8c:
    if (ctx->pc == 0x517F8Cu) {
        ctx->pc = 0x517F8Cu;
            // 0x517f8c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x517F90u;
        goto label_517f90;
    }
    ctx->pc = 0x517F88u;
    SET_GPR_U32(ctx, 31, 0x517F90u);
    ctx->pc = 0x517F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517F88u;
            // 0x517f8c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517F90u; }
        if (ctx->pc != 0x517F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517F90u; }
        if (ctx->pc != 0x517F90u) { return; }
    }
    ctx->pc = 0x517F90u;
label_517f90:
    // 0x517f90: 0xc62002c4  lwc1        $f0, 0x2C4($s1)
    ctx->pc = 0x517f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517f94:
    // 0x517f94: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x517f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_517f98:
    // 0x517f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x517f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_517f9c:
    // 0x517f9c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x517f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_517fa0:
    // 0x517fa0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x517fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517fa4:
    // 0x517fa4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x517fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_517fa8:
    // 0x517fa8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x517fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517fac:
    // 0x517fac: 0xc04cc70  jal         func_1331C0
label_517fb0:
    if (ctx->pc == 0x517FB0u) {
        ctx->pc = 0x517FB0u;
            // 0x517fb0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x517FB4u;
        goto label_517fb4;
    }
    ctx->pc = 0x517FACu;
    SET_GPR_U32(ctx, 31, 0x517FB4u);
    ctx->pc = 0x517FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517FACu;
            // 0x517fb0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FB4u; }
        if (ctx->pc != 0x517FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FB4u; }
        if (ctx->pc != 0x517FB4u) { return; }
    }
    ctx->pc = 0x517FB4u;
label_517fb4:
    // 0x517fb4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x517fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_517fb8:
    // 0x517fb8: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x517fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_517fbc:
    // 0x517fbc: 0xc04cbe0  jal         func_132F80
label_517fc0:
    if (ctx->pc == 0x517FC0u) {
        ctx->pc = 0x517FC0u;
            // 0x517fc0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x517FC4u;
        goto label_517fc4;
    }
    ctx->pc = 0x517FBCu;
    SET_GPR_U32(ctx, 31, 0x517FC4u);
    ctx->pc = 0x517FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517FBCu;
            // 0x517fc0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FC4u; }
        if (ctx->pc != 0x517FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FC4u; }
        if (ctx->pc != 0x517FC4u) { return; }
    }
    ctx->pc = 0x517FC4u;
label_517fc4:
    // 0x517fc4: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x517fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_517fc8:
    // 0x517fc8: 0xc04f278  jal         func_13C9E0
label_517fcc:
    if (ctx->pc == 0x517FCCu) {
        ctx->pc = 0x517FCCu;
            // 0x517fcc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x517FD0u;
        goto label_517fd0;
    }
    ctx->pc = 0x517FC8u;
    SET_GPR_U32(ctx, 31, 0x517FD0u);
    ctx->pc = 0x517FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517FC8u;
            // 0x517fcc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FD0u; }
        if (ctx->pc != 0x517FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FD0u; }
        if (ctx->pc != 0x517FD0u) { return; }
    }
    ctx->pc = 0x517FD0u;
label_517fd0:
    // 0x517fd0: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x517fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_517fd4:
    // 0x517fd4: 0xc04ce80  jal         func_133A00
label_517fd8:
    if (ctx->pc == 0x517FD8u) {
        ctx->pc = 0x517FD8u;
            // 0x517fd8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x517FDCu;
        goto label_517fdc;
    }
    ctx->pc = 0x517FD4u;
    SET_GPR_U32(ctx, 31, 0x517FDCu);
    ctx->pc = 0x517FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517FD4u;
            // 0x517fd8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FDCu; }
        if (ctx->pc != 0x517FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FDCu; }
        if (ctx->pc != 0x517FDCu) { return; }
    }
    ctx->pc = 0x517FDCu;
label_517fdc:
    // 0x517fdc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x517fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_517fe0:
    // 0x517fe0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x517fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_517fe4:
    // 0x517fe4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x517fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_517fe8:
    // 0x517fe8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x517fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_517fec:
    // 0x517fec: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x517fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_517ff0:
    // 0x517ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x517ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_517ff4:
    // 0x517ff4: 0xc04cc70  jal         func_1331C0
label_517ff8:
    if (ctx->pc == 0x517FF8u) {
        ctx->pc = 0x517FF8u;
            // 0x517ff8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x517FFCu;
        goto label_517ffc;
    }
    ctx->pc = 0x517FF4u;
    SET_GPR_U32(ctx, 31, 0x517FFCu);
    ctx->pc = 0x517FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517FF4u;
            // 0x517ff8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FFCu; }
        if (ctx->pc != 0x517FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517FFCu; }
        if (ctx->pc != 0x517FFCu) { return; }
    }
    ctx->pc = 0x517FFCu;
label_517ffc:
    // 0x517ffc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x517ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_518000:
    // 0x518000: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x518000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_518004:
    // 0x518004: 0xc04cc90  jal         func_133240
label_518008:
    if (ctx->pc == 0x518008u) {
        ctx->pc = 0x518008u;
            // 0x518008: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51800Cu;
        goto label_51800c;
    }
    ctx->pc = 0x518004u;
    SET_GPR_U32(ctx, 31, 0x51800Cu);
    ctx->pc = 0x518008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518004u;
            // 0x518008: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51800Cu; }
        if (ctx->pc != 0x51800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51800Cu; }
        if (ctx->pc != 0x51800Cu) { return; }
    }
    ctx->pc = 0x51800Cu;
label_51800c:
    // 0x51800c: 0x26a400a0  addiu       $a0, $s5, 0xA0
    ctx->pc = 0x51800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_518010:
    // 0x518010: 0xc04f278  jal         func_13C9E0
label_518014:
    if (ctx->pc == 0x518014u) {
        ctx->pc = 0x518014u;
            // 0x518014: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x518018u;
        goto label_518018;
    }
    ctx->pc = 0x518010u;
    SET_GPR_U32(ctx, 31, 0x518018u);
    ctx->pc = 0x518014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518010u;
            // 0x518014: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518018u; }
        if (ctx->pc != 0x518018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518018u; }
        if (ctx->pc != 0x518018u) { return; }
    }
    ctx->pc = 0x518018u;
label_518018:
    // 0x518018: 0x26a400a0  addiu       $a0, $s5, 0xA0
    ctx->pc = 0x518018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_51801c:
    // 0x51801c: 0xc04ce80  jal         func_133A00
label_518020:
    if (ctx->pc == 0x518020u) {
        ctx->pc = 0x518020u;
            // 0x518020: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x518024u;
        goto label_518024;
    }
    ctx->pc = 0x51801Cu;
    SET_GPR_U32(ctx, 31, 0x518024u);
    ctx->pc = 0x518020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51801Cu;
            // 0x518020: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518024u; }
        if (ctx->pc != 0x518024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518024u; }
        if (ctx->pc != 0x518024u) { return; }
    }
    ctx->pc = 0x518024u;
label_518024:
    // 0x518024: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x518024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_518028:
    // 0x518028: 0xc04cc04  jal         func_133010
label_51802c:
    if (ctx->pc == 0x51802Cu) {
        ctx->pc = 0x51802Cu;
            // 0x51802c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x518030u;
        goto label_518030;
    }
    ctx->pc = 0x518028u;
    SET_GPR_U32(ctx, 31, 0x518030u);
    ctx->pc = 0x51802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518028u;
            // 0x51802c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518030u; }
        if (ctx->pc != 0x518030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518030u; }
        if (ctx->pc != 0x518030u) { return; }
    }
    ctx->pc = 0x518030u;
label_518030:
    // 0x518030: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x518030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518034:
    // 0x518034: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x518034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_518038:
    // 0x518038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x518038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_51803c:
    // 0x51803c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x51803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_518040:
    // 0x518040: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x518040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_518044:
    // 0x518044: 0xc04cc70  jal         func_1331C0
label_518048:
    if (ctx->pc == 0x518048u) {
        ctx->pc = 0x518048u;
            // 0x518048: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x51804Cu;
        goto label_51804c;
    }
    ctx->pc = 0x518044u;
    SET_GPR_U32(ctx, 31, 0x51804Cu);
    ctx->pc = 0x518048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518044u;
            // 0x518048: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51804Cu; }
        if (ctx->pc != 0x51804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51804Cu; }
        if (ctx->pc != 0x51804Cu) { return; }
    }
    ctx->pc = 0x51804Cu;
label_51804c:
    // 0x51804c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x51804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_518050:
    // 0x518050: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x518050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_518054:
    // 0x518054: 0xc04cbe0  jal         func_132F80
label_518058:
    if (ctx->pc == 0x518058u) {
        ctx->pc = 0x518058u;
            // 0x518058: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51805Cu;
        goto label_51805c;
    }
    ctx->pc = 0x518054u;
    SET_GPR_U32(ctx, 31, 0x51805Cu);
    ctx->pc = 0x518058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518054u;
            // 0x518058: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51805Cu; }
        if (ctx->pc != 0x51805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51805Cu; }
        if (ctx->pc != 0x51805Cu) { return; }
    }
    ctx->pc = 0x51805Cu;
label_51805c:
    // 0x51805c: 0x26a400e0  addiu       $a0, $s5, 0xE0
    ctx->pc = 0x51805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_518060:
    // 0x518060: 0xc04f278  jal         func_13C9E0
label_518064:
    if (ctx->pc == 0x518064u) {
        ctx->pc = 0x518064u;
            // 0x518064: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x518068u;
        goto label_518068;
    }
    ctx->pc = 0x518060u;
    SET_GPR_U32(ctx, 31, 0x518068u);
    ctx->pc = 0x518064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518060u;
            // 0x518064: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518068u; }
        if (ctx->pc != 0x518068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518068u; }
        if (ctx->pc != 0x518068u) { return; }
    }
    ctx->pc = 0x518068u;
label_518068:
    // 0x518068: 0x26a400e0  addiu       $a0, $s5, 0xE0
    ctx->pc = 0x518068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
label_51806c:
    // 0x51806c: 0xc04ce80  jal         func_133A00
label_518070:
    if (ctx->pc == 0x518070u) {
        ctx->pc = 0x518070u;
            // 0x518070: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x518074u;
        goto label_518074;
    }
    ctx->pc = 0x51806Cu;
    SET_GPR_U32(ctx, 31, 0x518074u);
    ctx->pc = 0x518070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51806Cu;
            // 0x518070: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518074u; }
        if (ctx->pc != 0x518074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518074u; }
        if (ctx->pc != 0x518074u) { return; }
    }
    ctx->pc = 0x518074u;
label_518074:
    // 0x518074: 0x8e830968  lw          $v1, 0x968($s4)
    ctx->pc = 0x518074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2408)));
label_518078:
    // 0x518078: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x518078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_51807c:
    // 0x51807c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_518080:
    if (ctx->pc == 0x518080u) {
        ctx->pc = 0x518080u;
            // 0x518080: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x518084u;
        goto label_518084;
    }
    ctx->pc = 0x51807Cu;
    {
        const bool branch_taken_0x51807c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x51807c) {
            ctx->pc = 0x518080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51807Cu;
            // 0x518080: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518098u;
            goto label_518098;
        }
    }
    ctx->pc = 0x518084u;
label_518084:
    // 0x518084: 0x8e430d78  lw          $v1, 0xD78($s2)
    ctx->pc = 0x518084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_518088:
    // 0x518088: 0x8e220d78  lw          $v0, 0xD78($s1)
    ctx->pc = 0x518088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_51808c:
    // 0x51808c: 0x8c730048  lw          $s3, 0x48($v1)
    ctx->pc = 0x51808cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_518090:
    // 0x518090: 0x8c560048  lw          $s6, 0x48($v0)
    ctx->pc = 0x518090u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_518094:
    // 0x518094: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x518094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_518098:
    // 0x518098: 0xc04cc04  jal         func_133010
label_51809c:
    if (ctx->pc == 0x51809Cu) {
        ctx->pc = 0x51809Cu;
            // 0x51809c: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x5180A0u;
        goto label_5180a0;
    }
    ctx->pc = 0x518098u;
    SET_GPR_U32(ctx, 31, 0x5180A0u);
    ctx->pc = 0x51809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518098u;
            // 0x51809c: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180A0u; }
        if (ctx->pc != 0x5180A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180A0u; }
        if (ctx->pc != 0x5180A0u) { return; }
    }
    ctx->pc = 0x5180A0u;
label_5180a0:
    // 0x5180a0: 0xc62002c4  lwc1        $f0, 0x2C4($s1)
    ctx->pc = 0x5180a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5180a4:
    // 0x5180a4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5180a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5180a8:
    // 0x5180a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x5180a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5180ac:
    // 0x5180ac: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x5180acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_5180b0:
    // 0x5180b0: 0xc04cc90  jal         func_133240
label_5180b4:
    if (ctx->pc == 0x5180B4u) {
        ctx->pc = 0x5180B4u;
            // 0x5180b4: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x5180B8u;
        goto label_5180b8;
    }
    ctx->pc = 0x5180B0u;
    SET_GPR_U32(ctx, 31, 0x5180B8u);
    ctx->pc = 0x5180B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5180B0u;
            // 0x5180b4: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180B8u; }
        if (ctx->pc != 0x5180B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180B8u; }
        if (ctx->pc != 0x5180B8u) { return; }
    }
    ctx->pc = 0x5180B8u;
label_5180b8:
    // 0x5180b8: 0x8ea20134  lw          $v0, 0x134($s5)
    ctx->pc = 0x5180b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_5180bc:
    // 0x5180bc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5180bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5180c0:
    // 0x5180c0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x5180c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_5180c4:
    // 0x5180c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x5180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_5180c8:
    // 0x5180c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x5180c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_5180cc:
    // 0x5180cc: 0xc04cc90  jal         func_133240
label_5180d0:
    if (ctx->pc == 0x5180D0u) {
        ctx->pc = 0x5180D0u;
            // 0x5180d0: 0x24450d00  addiu       $a1, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->pc = 0x5180D4u;
        goto label_5180d4;
    }
    ctx->pc = 0x5180CCu;
    SET_GPR_U32(ctx, 31, 0x5180D4u);
    ctx->pc = 0x5180D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5180CCu;
            // 0x5180d0: 0x24450d00  addiu       $a1, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180D4u; }
        if (ctx->pc != 0x5180D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180D4u; }
        if (ctx->pc != 0x5180D4u) { return; }
    }
    ctx->pc = 0x5180D4u;
label_5180d4:
    // 0x5180d4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5180d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5180d8:
    // 0x5180d8: 0xc04cc44  jal         func_133110
label_5180dc:
    if (ctx->pc == 0x5180DCu) {
        ctx->pc = 0x5180DCu;
            // 0x5180dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5180E0u;
        goto label_5180e0;
    }
    ctx->pc = 0x5180D8u;
    SET_GPR_U32(ctx, 31, 0x5180E0u);
    ctx->pc = 0x5180DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5180D8u;
            // 0x5180dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180E0u; }
        if (ctx->pc != 0x5180E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180E0u; }
        if (ctx->pc != 0x5180E0u) { return; }
    }
    ctx->pc = 0x5180E0u;
label_5180e0:
    // 0x5180e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5180e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5180e4:
    // 0x5180e4: 0xc04cc44  jal         func_133110
label_5180e8:
    if (ctx->pc == 0x5180E8u) {
        ctx->pc = 0x5180E8u;
            // 0x5180e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5180ECu;
        goto label_5180ec;
    }
    ctx->pc = 0x5180E4u;
    SET_GPR_U32(ctx, 31, 0x5180ECu);
    ctx->pc = 0x5180E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5180E4u;
            // 0x5180e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180ECu; }
        if (ctx->pc != 0x5180ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5180ECu; }
        if (ctx->pc != 0x5180ECu) { return; }
    }
    ctx->pc = 0x5180ECu;
label_5180ec:
    // 0x5180ec: 0xc62c02c0  lwc1        $f12, 0x2C0($s1)
    ctx->pc = 0x5180ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5180f0:
    // 0x5180f0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x5180f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_5180f4:
    // 0x5180f4: 0xc62d02c4  lwc1        $f13, 0x2C4($s1)
    ctx->pc = 0x5180f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_5180f8:
    // 0x5180f8: 0xc62e02c8  lwc1        $f14, 0x2C8($s1)
    ctx->pc = 0x5180f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_5180fc:
    // 0x5180fc: 0xc04ce64  jal         func_133990
label_518100:
    if (ctx->pc == 0x518100u) {
        ctx->pc = 0x518100u;
            // 0x518100: 0x26250890  addiu       $a1, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->pc = 0x518104u;
        goto label_518104;
    }
    ctx->pc = 0x5180FCu;
    SET_GPR_U32(ctx, 31, 0x518104u);
    ctx->pc = 0x518100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5180FCu;
            // 0x518100: 0x26250890  addiu       $a1, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518104u; }
        if (ctx->pc != 0x518104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518104u; }
        if (ctx->pc != 0x518104u) { return; }
    }
    ctx->pc = 0x518104u;
label_518104:
    // 0x518104: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x518104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_518108:
    // 0x518108: 0xc04ccf4  jal         func_1333D0
label_51810c:
    if (ctx->pc == 0x51810Cu) {
        ctx->pc = 0x51810Cu;
            // 0x51810c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518110u;
        goto label_518110;
    }
    ctx->pc = 0x518108u;
    SET_GPR_U32(ctx, 31, 0x518110u);
    ctx->pc = 0x51810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518108u;
            // 0x51810c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518110u; }
        if (ctx->pc != 0x518110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518110u; }
        if (ctx->pc != 0x518110u) { return; }
    }
    ctx->pc = 0x518110u;
label_518110:
    // 0x518110: 0xc64c02c0  lwc1        $f12, 0x2C0($s2)
    ctx->pc = 0x518110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_518114:
    // 0x518114: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x518114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_518118:
    // 0x518118: 0xc64d02c4  lwc1        $f13, 0x2C4($s2)
    ctx->pc = 0x518118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_51811c:
    // 0x51811c: 0xc64e02c8  lwc1        $f14, 0x2C8($s2)
    ctx->pc = 0x51811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_518120:
    // 0x518120: 0xc04ce64  jal         func_133990
label_518124:
    if (ctx->pc == 0x518124u) {
        ctx->pc = 0x518124u;
            // 0x518124: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518128u;
        goto label_518128;
    }
    ctx->pc = 0x518120u;
    SET_GPR_U32(ctx, 31, 0x518128u);
    ctx->pc = 0x518124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518120u;
            // 0x518124: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518128u; }
        if (ctx->pc != 0x518128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518128u; }
        if (ctx->pc != 0x518128u) { return; }
    }
    ctx->pc = 0x518128u;
label_518128:
    // 0x518128: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x518128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_51812c:
    // 0x51812c: 0xc04cce4  jal         func_133390
label_518130:
    if (ctx->pc == 0x518130u) {
        ctx->pc = 0x518130u;
            // 0x518130: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x518134u;
        goto label_518134;
    }
    ctx->pc = 0x51812Cu;
    SET_GPR_U32(ctx, 31, 0x518134u);
    ctx->pc = 0x518130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51812Cu;
            // 0x518130: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518134u; }
        if (ctx->pc != 0x518134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518134u; }
        if (ctx->pc != 0x518134u) { return; }
    }
    ctx->pc = 0x518134u;
label_518134:
    // 0x518134: 0x5276000b  beql        $s3, $s6, . + 4 + (0xB << 2)
label_518138:
    if (ctx->pc == 0x518138u) {
        ctx->pc = 0x518138u;
            // 0x518138: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x51813Cu;
        goto label_51813c;
    }
    ctx->pc = 0x518134u;
    {
        const bool branch_taken_0x518134 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x518134) {
            ctx->pc = 0x518138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518134u;
            // 0x518138: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518164u;
            goto label_518164;
        }
    }
    ctx->pc = 0x51813Cu;
label_51813c:
    // 0x51813c: 0x8ea50120  lw          $a1, 0x120($s5)
    ctx->pc = 0x51813cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
label_518140:
    // 0x518140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x518140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_518144:
    // 0x518144: 0x8ea60124  lw          $a2, 0x124($s5)
    ctx->pc = 0x518144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
label_518148:
    // 0x518148: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x518148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51814c:
    // 0x51814c: 0x8ea80134  lw          $t0, 0x134($s5)
    ctx->pc = 0x51814cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_518150:
    // 0x518150: 0xc12eccc  jal         func_4BB330
label_518154:
    if (ctx->pc == 0x518154u) {
        ctx->pc = 0x518154u;
            // 0x518154: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x518158u;
        goto label_518158;
    }
    ctx->pc = 0x518150u;
    SET_GPR_U32(ctx, 31, 0x518158u);
    ctx->pc = 0x518154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518150u;
            // 0x518154: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BB330u;
    if (runtime->hasFunction(0x4BB330u)) {
        auto targetFn = runtime->lookupFunction(0x4BB330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518158u; }
        if (ctx->pc != 0x518158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BB330_0x4bb330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518158u; }
        if (ctx->pc != 0x518158u) { return; }
    }
    ctx->pc = 0x518158u;
label_518158:
    // 0x518158: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x518158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51815c:
    // 0x51815c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_518160:
    if (ctx->pc == 0x518160u) {
        ctx->pc = 0x518160u;
            // 0x518160: 0xaea30050  sw          $v1, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x518164u;
        goto label_518164;
    }
    ctx->pc = 0x51815Cu;
    {
        const bool branch_taken_0x51815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51815Cu;
            // 0x518160: 0xaea30050  sw          $v1, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51815c) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x518164u;
label_518164:
    // 0x518164: 0xc04cc08  jal         func_133020
label_518168:
    if (ctx->pc == 0x518168u) {
        ctx->pc = 0x518168u;
            // 0x518168: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x51816Cu;
        goto label_51816c;
    }
    ctx->pc = 0x518164u;
    SET_GPR_U32(ctx, 31, 0x51816Cu);
    ctx->pc = 0x518168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518164u;
            // 0x518168: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51816Cu; }
        if (ctx->pc != 0x51816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51816Cu; }
        if (ctx->pc != 0x51816Cu) { return; }
    }
    ctx->pc = 0x51816Cu;
label_51816c:
    // 0x51816c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x51816cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_518170:
    // 0x518170: 0x0  nop
    ctx->pc = 0x518170u;
    // NOP
label_518174:
    // 0x518174: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x518174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518178:
    // 0x518178: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_51817c:
    if (ctx->pc == 0x51817Cu) {
        ctx->pc = 0x51817Cu;
            // 0x51817c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x518180u;
        goto label_518180;
    }
    ctx->pc = 0x518178u;
    {
        const bool branch_taken_0x518178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x518178) {
            ctx->pc = 0x51817Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518178u;
            // 0x51817c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5181A4u;
            goto label_5181a4;
        }
    }
    ctx->pc = 0x518180u;
label_518180:
    // 0x518180: 0x8ea50120  lw          $a1, 0x120($s5)
    ctx->pc = 0x518180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
label_518184:
    // 0x518184: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x518184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_518188:
    // 0x518188: 0x8ea60124  lw          $a2, 0x124($s5)
    ctx->pc = 0x518188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
label_51818c:
    // 0x51818c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x51818cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_518190:
    // 0x518190: 0x8ea80134  lw          $t0, 0x134($s5)
    ctx->pc = 0x518190u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_518194:
    // 0x518194: 0xc12eccc  jal         func_4BB330
label_518198:
    if (ctx->pc == 0x518198u) {
        ctx->pc = 0x518198u;
            // 0x518198: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51819Cu;
        goto label_51819c;
    }
    ctx->pc = 0x518194u;
    SET_GPR_U32(ctx, 31, 0x51819Cu);
    ctx->pc = 0x518198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518194u;
            // 0x518198: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BB330u;
    if (runtime->hasFunction(0x4BB330u)) {
        auto targetFn = runtime->lookupFunction(0x4BB330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51819Cu; }
        if (ctx->pc != 0x51819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BB330_0x4bb330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51819Cu; }
        if (ctx->pc != 0x51819Cu) { return; }
    }
    ctx->pc = 0x51819Cu;
label_51819c:
    // 0x51819c: 0x10000096  b           . + 4 + (0x96 << 2)
label_5181a0:
    if (ctx->pc == 0x5181A0u) {
        ctx->pc = 0x5181A4u;
        goto label_5181a4;
    }
    ctx->pc = 0x51819Cu;
    {
        const bool branch_taken_0x51819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51819c) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x5181A4u;
label_5181a4:
    // 0x5181a4: 0xc04cc1c  jal         func_133070
label_5181a8:
    if (ctx->pc == 0x5181A8u) {
        ctx->pc = 0x5181A8u;
            // 0x5181a8: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x5181ACu;
        goto label_5181ac;
    }
    ctx->pc = 0x5181A4u;
    SET_GPR_U32(ctx, 31, 0x5181ACu);
    ctx->pc = 0x5181A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5181A4u;
            // 0x5181a8: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5181ACu; }
        if (ctx->pc != 0x5181ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5181ACu; }
        if (ctx->pc != 0x5181ACu) { return; }
    }
    ctx->pc = 0x5181ACu;
label_5181ac:
    // 0x5181ac: 0xc6a20138  lwc1        $f2, 0x138($s5)
    ctx->pc = 0x5181acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5181b0:
    // 0x5181b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5181b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5181b4:
    // 0x5181b4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5181b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5181b8:
    // 0x5181b8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x5181b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_5181bc:
    // 0x5181bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x5181bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5181c0:
    // 0x5181c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x5181c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5181c4:
    // 0x5181c4: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x5181c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5181c8:
    // 0x5181c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5181c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5181cc:
    // 0x5181cc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x5181ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_5181d0:
    // 0x5181d0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5181d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_5181d4:
    // 0x5181d4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x5181d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5181d8:
    // 0x5181d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_5181dc:
    if (ctx->pc == 0x5181DCu) {
        ctx->pc = 0x5181DCu;
            // 0x5181dc: 0xaea30138  sw          $v1, 0x138($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 3));
        ctx->pc = 0x5181E0u;
        goto label_5181e0;
    }
    ctx->pc = 0x5181D8u;
    {
        const bool branch_taken_0x5181d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5181DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5181D8u;
            // 0x5181dc: 0xaea30138  sw          $v1, 0x138($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5181d8) {
            ctx->pc = 0x51820Cu;
            goto label_51820c;
        }
    }
    ctx->pc = 0x5181E0u;
label_5181e0:
    // 0x5181e0: 0xc6a00138  lwc1        $f0, 0x138($s5)
    ctx->pc = 0x5181e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5181e4:
    // 0x5181e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5181e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5181e8:
    // 0x5181e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5181e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5181ec:
    // 0x5181ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_5181f0:
    if (ctx->pc == 0x5181F0u) {
        ctx->pc = 0x5181F0u;
            // 0x5181f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5181F4u;
        goto label_5181f4;
    }
    ctx->pc = 0x5181ECu;
    {
        const bool branch_taken_0x5181ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5181F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5181ECu;
            // 0x5181f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5181ec) {
            ctx->pc = 0x5181F8u;
            goto label_5181f8;
        }
    }
    ctx->pc = 0x5181F4u;
label_5181f4:
    // 0x5181f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5181f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5181f8:
    // 0x5181f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x5181f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5181fc:
    // 0x5181fc: 0x8ea30138  lw          $v1, 0x138($s5)
    ctx->pc = 0x5181fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
label_518200:
    // 0x518200: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x518200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_518204:
    // 0x518204: 0x10000017  b           . + 4 + (0x17 << 2)
label_518208:
    if (ctx->pc == 0x518208u) {
        ctx->pc = 0x518208u;
            // 0x518208: 0xaea30138  sw          $v1, 0x138($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 3));
        ctx->pc = 0x51820Cu;
        goto label_51820c;
    }
    ctx->pc = 0x518204u;
    {
        const bool branch_taken_0x518204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518204u;
            // 0x518208: 0xaea30138  sw          $v1, 0x138($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518204) {
            ctx->pc = 0x518264u;
            goto label_518264;
        }
    }
    ctx->pc = 0x51820Cu;
label_51820c:
    // 0x51820c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x51820cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_518210:
    // 0x518210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x518210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_518214:
    // 0x518214: 0x0  nop
    ctx->pc = 0x518214u;
    // NOP
label_518218:
    // 0x518218: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x518218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51821c:
    // 0x51821c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_518220:
    if (ctx->pc == 0x518220u) {
        ctx->pc = 0x518220u;
            // 0x518220: 0x8ea30138  lw          $v1, 0x138($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
        ctx->pc = 0x518224u;
        goto label_518224;
    }
    ctx->pc = 0x51821Cu;
    {
        const bool branch_taken_0x51821c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51821c) {
            ctx->pc = 0x518220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51821Cu;
            // 0x518220: 0x8ea30138  lw          $v1, 0x138($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518268u;
            goto label_518268;
        }
    }
    ctx->pc = 0x518224u;
label_518224:
    // 0x518224: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x518224u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_518228:
    // 0x518228: 0x3c03bec7  lui         $v1, 0xBEC7
    ctx->pc = 0x518228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48839 << 16));
label_51822c:
    // 0x51822c: 0x34651c72  ori         $a1, $v1, 0x1C72
    ctx->pc = 0x51822cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7282);
label_518230:
    // 0x518230: 0x8ea40138  lw          $a0, 0x138($s5)
    ctx->pc = 0x518230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
label_518234:
    // 0x518234: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x518234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_518238:
    // 0x518238: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x518238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_51823c:
    // 0x51823c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51823cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_518240:
    // 0x518240: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x518240u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_518244:
    // 0x518244: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x518244u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_518248:
    // 0x518248: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x518248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_51824c:
    // 0x51824c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51824cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_518250:
    // 0x518250: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x518250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_518254:
    // 0x518254: 0x0  nop
    ctx->pc = 0x518254u;
    // NOP
label_518258:
    // 0x518258: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x518258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_51825c:
    // 0x51825c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x51825cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_518260:
    // 0x518260: 0xaea30138  sw          $v1, 0x138($s5)
    ctx->pc = 0x518260u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 3));
label_518264:
    // 0x518264: 0x8ea30138  lw          $v1, 0x138($s5)
    ctx->pc = 0x518264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
label_518268:
    // 0x518268: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
label_51826c:
    if (ctx->pc == 0x51826Cu) {
        ctx->pc = 0x51826Cu;
            // 0x51826c: 0x92a30140  lbu         $v1, 0x140($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 320)));
        ctx->pc = 0x518270u;
        goto label_518270;
    }
    ctx->pc = 0x518268u;
    {
        const bool branch_taken_0x518268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x518268) {
            ctx->pc = 0x51826Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518268u;
            // 0x51826c: 0x92a30140  lbu         $v1, 0x140($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5182ECu;
            goto label_5182ec;
        }
    }
    ctx->pc = 0x518270u;
label_518270:
    // 0x518270: 0x8ea40134  lw          $a0, 0x134($s5)
    ctx->pc = 0x518270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_518274:
    // 0x518274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x518274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_518278:
    // 0x518278: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
label_51827c:
    if (ctx->pc == 0x51827Cu) {
        ctx->pc = 0x51827Cu;
            // 0x51827c: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x518280u;
        goto label_518280;
    }
    ctx->pc = 0x518278u;
    {
        const bool branch_taken_0x518278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x518278) {
            ctx->pc = 0x51827Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518278u;
            // 0x51827c: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5182C0u;
            goto label_5182c0;
        }
    }
    ctx->pc = 0x518280u;
label_518280:
    // 0x518280: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_518284:
    if (ctx->pc == 0x518284u) {
        ctx->pc = 0x518284u;
            // 0x518284: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x518288u;
        goto label_518288;
    }
    ctx->pc = 0x518280u;
    {
        const bool branch_taken_0x518280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x518280) {
            ctx->pc = 0x518284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518280u;
            // 0x518284: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518290u;
            goto label_518290;
        }
    }
    ctx->pc = 0x518288u;
label_518288:
    // 0x518288: 0x10000017  b           . + 4 + (0x17 << 2)
label_51828c:
    if (ctx->pc == 0x51828Cu) {
        ctx->pc = 0x518290u;
        goto label_518290;
    }
    ctx->pc = 0x518288u;
    {
        const bool branch_taken_0x518288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x518288) {
            ctx->pc = 0x5182E8u;
            goto label_5182e8;
        }
    }
    ctx->pc = 0x518290u;
label_518290:
    // 0x518290: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x518290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_518294:
    // 0x518294: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x518294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_518298:
    // 0x518298: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x518298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_51829c:
    // 0x51829c: 0x320f809  jalr        $t9
label_5182a0:
    if (ctx->pc == 0x5182A0u) {
        ctx->pc = 0x5182A0u;
            // 0x5182a0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x5182A4u;
        goto label_5182a4;
    }
    ctx->pc = 0x51829Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5182A4u);
        ctx->pc = 0x5182A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51829Cu;
            // 0x5182a0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5182A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5182A4u; }
            if (ctx->pc != 0x5182A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5182A4u;
label_5182a4:
    // 0x5182a4: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x5182a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_5182a8:
    // 0x5182a8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x5182a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_5182ac:
    // 0x5182ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5182acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5182b0:
    // 0x5182b0: 0x320f809  jalr        $t9
label_5182b4:
    if (ctx->pc == 0x5182B4u) {
        ctx->pc = 0x5182B4u;
            // 0x5182b4: 0x8e4500a0  lw          $a1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x5182B8u;
        goto label_5182b8;
    }
    ctx->pc = 0x5182B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5182B8u);
        ctx->pc = 0x5182B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5182B0u;
            // 0x5182b4: 0x8e4500a0  lw          $a1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5182B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5182B8u; }
            if (ctx->pc != 0x5182B8u) { return; }
        }
        }
    }
    ctx->pc = 0x5182B8u;
label_5182b8:
    // 0x5182b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_5182bc:
    if (ctx->pc == 0x5182BCu) {
        ctx->pc = 0x5182C0u;
        goto label_5182c0;
    }
    ctx->pc = 0x5182B8u;
    {
        const bool branch_taken_0x5182b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5182b8) {
            ctx->pc = 0x5182E8u;
            goto label_5182e8;
        }
    }
    ctx->pc = 0x5182C0u;
label_5182c0:
    // 0x5182c0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x5182c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_5182c4:
    // 0x5182c4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x5182c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_5182c8:
    // 0x5182c8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x5182c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_5182cc:
    // 0x5182cc: 0x320f809  jalr        $t9
label_5182d0:
    if (ctx->pc == 0x5182D0u) {
        ctx->pc = 0x5182D0u;
            // 0x5182d0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x5182D4u;
        goto label_5182d4;
    }
    ctx->pc = 0x5182CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5182D4u);
        ctx->pc = 0x5182D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5182CCu;
            // 0x5182d0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5182D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5182D4u; }
            if (ctx->pc != 0x5182D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5182D4u;
label_5182d4:
    // 0x5182d4: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x5182d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_5182d8:
    // 0x5182d8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x5182d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_5182dc:
    // 0x5182dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5182dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5182e0:
    // 0x5182e0: 0x320f809  jalr        $t9
label_5182e4:
    if (ctx->pc == 0x5182E4u) {
        ctx->pc = 0x5182E4u;
            // 0x5182e4: 0x8e4500a0  lw          $a1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x5182E8u;
        goto label_5182e8;
    }
    ctx->pc = 0x5182E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5182E8u);
        ctx->pc = 0x5182E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5182E0u;
            // 0x5182e4: 0x8e4500a0  lw          $a1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5182E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5182E8u; }
            if (ctx->pc != 0x5182E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5182E8u;
label_5182e8:
    // 0x5182e8: 0x92a30140  lbu         $v1, 0x140($s5)
    ctx->pc = 0x5182e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 320)));
label_5182ec:
    // 0x5182ec: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_5182f0:
    if (ctx->pc == 0x5182F0u) {
        ctx->pc = 0x5182F4u;
        goto label_5182f4;
    }
    ctx->pc = 0x5182ECu;
    {
        const bool branch_taken_0x5182ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5182ec) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x5182F4u;
label_5182f4:
    // 0x5182f4: 0x8ee300cc  lw          $v1, 0xCC($s7)
    ctx->pc = 0x5182f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 204)));
label_5182f8:
    // 0x5182f8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_5182fc:
    if (ctx->pc == 0x5182FCu) {
        ctx->pc = 0x518300u;
        goto label_518300;
    }
    ctx->pc = 0x5182F8u;
    {
        const bool branch_taken_0x5182f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5182f8) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x518300u;
label_518300:
    // 0x518300: 0xc6a0013c  lwc1        $f0, 0x13C($s5)
    ctx->pc = 0x518300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518304:
    // 0x518304: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x518304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_518308:
    // 0x518308: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x518308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_51830c:
    // 0x51830c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x51830cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_518310:
    // 0x518310: 0x8c63c018  lw          $v1, -0x3FE8($v1)
    ctx->pc = 0x518310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950936)));
label_518314:
    // 0x518314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x518314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_518318:
    // 0x518318: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x518318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51831c:
    // 0x51831c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x51831cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_518320:
    // 0x518320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x518320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_518324:
    // 0x518324: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x518324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_518328:
    // 0x518328: 0x0  nop
    ctx->pc = 0x518328u;
    // NOP
label_51832c:
    // 0x51832c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x51832cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_518330:
    // 0x518330: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
label_518334:
    if (ctx->pc == 0x518334u) {
        ctx->pc = 0x518334u;
            // 0x518334: 0xaea4013c  sw          $a0, 0x13C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 316), GPR_U32(ctx, 4));
        ctx->pc = 0x518338u;
        goto label_518338;
    }
    ctx->pc = 0x518330u;
    {
        const bool branch_taken_0x518330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x518334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518330u;
            // 0x518334: 0xaea4013c  sw          $a0, 0x13C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518330) {
            ctx->pc = 0x5183B4u;
            goto label_5183b4;
        }
    }
    ctx->pc = 0x518338u;
label_518338:
    // 0x518338: 0x92a30128  lbu         $v1, 0x128($s5)
    ctx->pc = 0x518338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 296)));
label_51833c:
    // 0x51833c: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_518340:
    if (ctx->pc == 0x518340u) {
        ctx->pc = 0x518340u;
            // 0x518340: 0x3c033dbd  lui         $v1, 0x3DBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15805 << 16));
        ctx->pc = 0x518344u;
        goto label_518344;
    }
    ctx->pc = 0x51833Cu;
    {
        const bool branch_taken_0x51833c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51833c) {
            ctx->pc = 0x518340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51833Cu;
            // 0x518340: 0x3c033dbd  lui         $v1, 0x3DBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15805 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51837Cu;
            goto label_51837c;
        }
    }
    ctx->pc = 0x518344u;
label_518344:
    // 0x518344: 0x3c033dbd  lui         $v1, 0x3DBD
    ctx->pc = 0x518344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15805 << 16));
label_518348:
    // 0x518348: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x518348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_51834c:
    // 0x51834c: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x51834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_518350:
    // 0x518350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x518350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_518354:
    // 0x518354: 0x0  nop
    ctx->pc = 0x518354u;
    // NOP
label_518358:
    // 0x518358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x518358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51835c:
    // 0x51835c: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
label_518360:
    if (ctx->pc == 0x518360u) {
        ctx->pc = 0x518360u;
            // 0x518360: 0xa2a00140  sb          $zero, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x518364u;
        goto label_518364;
    }
    ctx->pc = 0x51835Cu;
    {
        const bool branch_taken_0x51835c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x51835c) {
            ctx->pc = 0x518360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51835Cu;
            // 0x518360: 0xa2a00140  sb          $zero, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x518364u;
label_518364:
    // 0x518364: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x518364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_518368:
    // 0x518368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x518368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51836c:
    // 0x51836c: 0x0  nop
    ctx->pc = 0x51836cu;
    // NOP
label_518370:
    // 0x518370: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x518370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_518374:
    // 0x518374: 0x10000020  b           . + 4 + (0x20 << 2)
label_518378:
    if (ctx->pc == 0x518378u) {
        ctx->pc = 0x518378u;
            // 0x518378: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x51837Cu;
        goto label_51837c;
    }
    ctx->pc = 0x518374u;
    {
        const bool branch_taken_0x518374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518374u;
            // 0x518378: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x518374) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x51837Cu;
label_51837c:
    // 0x51837c: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x51837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_518380:
    // 0x518380: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x518380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_518384:
    // 0x518384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x518384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_518388:
    // 0x518388: 0x0  nop
    ctx->pc = 0x518388u;
    // NOP
label_51838c:
    // 0x51838c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x51838cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518390:
    // 0x518390: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
label_518394:
    if (ctx->pc == 0x518394u) {
        ctx->pc = 0x518394u;
            // 0x518394: 0xa2a00140  sb          $zero, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x518398u;
        goto label_518398;
    }
    ctx->pc = 0x518390u;
    {
        const bool branch_taken_0x518390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x518390) {
            ctx->pc = 0x518394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518390u;
            // 0x518394: 0xa2a00140  sb          $zero, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x518398u;
label_518398:
    // 0x518398: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x518398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
label_51839c:
    // 0x51839c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x51839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_5183a0:
    // 0x5183a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5183a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5183a4:
    // 0x5183a4: 0x0  nop
    ctx->pc = 0x5183a4u;
    // NOP
label_5183a8:
    // 0x5183a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5183a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5183ac:
    // 0x5183ac: 0x10000012  b           . + 4 + (0x12 << 2)
label_5183b0:
    if (ctx->pc == 0x5183B0u) {
        ctx->pc = 0x5183B0u;
            // 0x5183b0: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x5183B4u;
        goto label_5183b4;
    }
    ctx->pc = 0x5183ACu;
    {
        const bool branch_taken_0x5183ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5183B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5183ACu;
            // 0x5183b0: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5183ac) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x5183B4u;
label_5183b4:
    // 0x5183b4: 0x10000010  b           . + 4 + (0x10 << 2)
label_5183b8:
    if (ctx->pc == 0x5183B8u) {
        ctx->pc = 0x5183B8u;
            // 0x5183b8: 0xa2a00140  sb          $zero, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5183BCu;
        goto label_5183bc;
    }
    ctx->pc = 0x5183B4u;
    {
        const bool branch_taken_0x5183b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5183B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5183B4u;
            // 0x5183b8: 0xa2a00140  sb          $zero, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5183b4) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x5183BCu;
label_5183bc:
    // 0x5183bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5183bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5183c0:
    // 0x5183c0: 0xaea0013c  sw          $zero, 0x13C($s5)
    ctx->pc = 0x5183c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 316), GPR_U32(ctx, 0));
label_5183c4:
    // 0x5183c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_5183c8:
    if (ctx->pc == 0x5183C8u) {
        ctx->pc = 0x5183C8u;
            // 0x5183c8: 0xa2a30140  sb          $v1, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5183CCu;
        goto label_5183cc;
    }
    ctx->pc = 0x5183C4u;
    {
        const bool branch_taken_0x5183c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5183C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5183C4u;
            // 0x5183c8: 0xa2a30140  sb          $v1, 0x140($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 320), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5183c4) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x5183CCu;
label_5183cc:
    // 0x5183cc: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x5183ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_5183d0:
    // 0x5183d0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x5183d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_5183d4:
    // 0x5183d4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_5183d8:
    if (ctx->pc == 0x5183D8u) {
        ctx->pc = 0x5183DCu;
        goto label_5183dc;
    }
    ctx->pc = 0x5183D4u;
    {
        const bool branch_taken_0x5183d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5183d4) {
            ctx->pc = 0x5183F8u;
            goto label_5183f8;
        }
    }
    ctx->pc = 0x5183DCu;
label_5183dc:
    // 0x5183dc: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x5183dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_5183e0:
    // 0x5183e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5183e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5183e4:
    // 0x5183e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5183e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5183e8:
    // 0x5183e8: 0xc0bdf9c  jal         func_2F7E70
label_5183ec:
    if (ctx->pc == 0x5183ECu) {
        ctx->pc = 0x5183ECu;
            // 0x5183ec: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x5183F0u;
        goto label_5183f0;
    }
    ctx->pc = 0x5183E8u;
    SET_GPR_U32(ctx, 31, 0x5183F0u);
    ctx->pc = 0x5183ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5183E8u;
            // 0x5183ec: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5183F0u; }
        if (ctx->pc != 0x5183F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5183F0u; }
        if (ctx->pc != 0x5183F0u) { return; }
    }
    ctx->pc = 0x5183F0u;
label_5183f0:
    // 0x5183f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5183f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5183f4:
    // 0x5183f4: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x5183f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
label_5183f8:
    // 0x5183f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x5183f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_5183fc:
    // 0x5183fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5183fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_518400:
    // 0x518400: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x518400u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_518404:
    // 0x518404: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x518404u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_518408:
    // 0x518408: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x518408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51840c:
    // 0x51840c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51840cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_518410:
    // 0x518410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x518410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_518414:
    // 0x518414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x518414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_518418:
    // 0x518418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51841c:
    // 0x51841c: 0x3e00008  jr          $ra
label_518420:
    if (ctx->pc == 0x518420u) {
        ctx->pc = 0x518420u;
            // 0x518420: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x518424u;
        goto label_518424;
    }
    ctx->pc = 0x51841Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51841Cu;
            // 0x518420: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518424u;
label_518424:
    // 0x518424: 0x0  nop
    ctx->pc = 0x518424u;
    // NOP
label_518428:
    // 0x518428: 0x0  nop
    ctx->pc = 0x518428u;
    // NOP
label_51842c:
    // 0x51842c: 0x0  nop
    ctx->pc = 0x51842cu;
    // NOP
}
