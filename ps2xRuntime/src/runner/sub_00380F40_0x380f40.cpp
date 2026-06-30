#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00380F40
// Address: 0x380f40 - 0x381470
void sub_00380F40_0x380f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380F40_0x380f40");
#endif

    switch (ctx->pc) {
        case 0x380f40u: goto label_380f40;
        case 0x380f44u: goto label_380f44;
        case 0x380f48u: goto label_380f48;
        case 0x380f4cu: goto label_380f4c;
        case 0x380f50u: goto label_380f50;
        case 0x380f54u: goto label_380f54;
        case 0x380f58u: goto label_380f58;
        case 0x380f5cu: goto label_380f5c;
        case 0x380f60u: goto label_380f60;
        case 0x380f64u: goto label_380f64;
        case 0x380f68u: goto label_380f68;
        case 0x380f6cu: goto label_380f6c;
        case 0x380f70u: goto label_380f70;
        case 0x380f74u: goto label_380f74;
        case 0x380f78u: goto label_380f78;
        case 0x380f7cu: goto label_380f7c;
        case 0x380f80u: goto label_380f80;
        case 0x380f84u: goto label_380f84;
        case 0x380f88u: goto label_380f88;
        case 0x380f8cu: goto label_380f8c;
        case 0x380f90u: goto label_380f90;
        case 0x380f94u: goto label_380f94;
        case 0x380f98u: goto label_380f98;
        case 0x380f9cu: goto label_380f9c;
        case 0x380fa0u: goto label_380fa0;
        case 0x380fa4u: goto label_380fa4;
        case 0x380fa8u: goto label_380fa8;
        case 0x380facu: goto label_380fac;
        case 0x380fb0u: goto label_380fb0;
        case 0x380fb4u: goto label_380fb4;
        case 0x380fb8u: goto label_380fb8;
        case 0x380fbcu: goto label_380fbc;
        case 0x380fc0u: goto label_380fc0;
        case 0x380fc4u: goto label_380fc4;
        case 0x380fc8u: goto label_380fc8;
        case 0x380fccu: goto label_380fcc;
        case 0x380fd0u: goto label_380fd0;
        case 0x380fd4u: goto label_380fd4;
        case 0x380fd8u: goto label_380fd8;
        case 0x380fdcu: goto label_380fdc;
        case 0x380fe0u: goto label_380fe0;
        case 0x380fe4u: goto label_380fe4;
        case 0x380fe8u: goto label_380fe8;
        case 0x380fecu: goto label_380fec;
        case 0x380ff0u: goto label_380ff0;
        case 0x380ff4u: goto label_380ff4;
        case 0x380ff8u: goto label_380ff8;
        case 0x380ffcu: goto label_380ffc;
        case 0x381000u: goto label_381000;
        case 0x381004u: goto label_381004;
        case 0x381008u: goto label_381008;
        case 0x38100cu: goto label_38100c;
        case 0x381010u: goto label_381010;
        case 0x381014u: goto label_381014;
        case 0x381018u: goto label_381018;
        case 0x38101cu: goto label_38101c;
        case 0x381020u: goto label_381020;
        case 0x381024u: goto label_381024;
        case 0x381028u: goto label_381028;
        case 0x38102cu: goto label_38102c;
        case 0x381030u: goto label_381030;
        case 0x381034u: goto label_381034;
        case 0x381038u: goto label_381038;
        case 0x38103cu: goto label_38103c;
        case 0x381040u: goto label_381040;
        case 0x381044u: goto label_381044;
        case 0x381048u: goto label_381048;
        case 0x38104cu: goto label_38104c;
        case 0x381050u: goto label_381050;
        case 0x381054u: goto label_381054;
        case 0x381058u: goto label_381058;
        case 0x38105cu: goto label_38105c;
        case 0x381060u: goto label_381060;
        case 0x381064u: goto label_381064;
        case 0x381068u: goto label_381068;
        case 0x38106cu: goto label_38106c;
        case 0x381070u: goto label_381070;
        case 0x381074u: goto label_381074;
        case 0x381078u: goto label_381078;
        case 0x38107cu: goto label_38107c;
        case 0x381080u: goto label_381080;
        case 0x381084u: goto label_381084;
        case 0x381088u: goto label_381088;
        case 0x38108cu: goto label_38108c;
        case 0x381090u: goto label_381090;
        case 0x381094u: goto label_381094;
        case 0x381098u: goto label_381098;
        case 0x38109cu: goto label_38109c;
        case 0x3810a0u: goto label_3810a0;
        case 0x3810a4u: goto label_3810a4;
        case 0x3810a8u: goto label_3810a8;
        case 0x3810acu: goto label_3810ac;
        case 0x3810b0u: goto label_3810b0;
        case 0x3810b4u: goto label_3810b4;
        case 0x3810b8u: goto label_3810b8;
        case 0x3810bcu: goto label_3810bc;
        case 0x3810c0u: goto label_3810c0;
        case 0x3810c4u: goto label_3810c4;
        case 0x3810c8u: goto label_3810c8;
        case 0x3810ccu: goto label_3810cc;
        case 0x3810d0u: goto label_3810d0;
        case 0x3810d4u: goto label_3810d4;
        case 0x3810d8u: goto label_3810d8;
        case 0x3810dcu: goto label_3810dc;
        case 0x3810e0u: goto label_3810e0;
        case 0x3810e4u: goto label_3810e4;
        case 0x3810e8u: goto label_3810e8;
        case 0x3810ecu: goto label_3810ec;
        case 0x3810f0u: goto label_3810f0;
        case 0x3810f4u: goto label_3810f4;
        case 0x3810f8u: goto label_3810f8;
        case 0x3810fcu: goto label_3810fc;
        case 0x381100u: goto label_381100;
        case 0x381104u: goto label_381104;
        case 0x381108u: goto label_381108;
        case 0x38110cu: goto label_38110c;
        case 0x381110u: goto label_381110;
        case 0x381114u: goto label_381114;
        case 0x381118u: goto label_381118;
        case 0x38111cu: goto label_38111c;
        case 0x381120u: goto label_381120;
        case 0x381124u: goto label_381124;
        case 0x381128u: goto label_381128;
        case 0x38112cu: goto label_38112c;
        case 0x381130u: goto label_381130;
        case 0x381134u: goto label_381134;
        case 0x381138u: goto label_381138;
        case 0x38113cu: goto label_38113c;
        case 0x381140u: goto label_381140;
        case 0x381144u: goto label_381144;
        case 0x381148u: goto label_381148;
        case 0x38114cu: goto label_38114c;
        case 0x381150u: goto label_381150;
        case 0x381154u: goto label_381154;
        case 0x381158u: goto label_381158;
        case 0x38115cu: goto label_38115c;
        case 0x381160u: goto label_381160;
        case 0x381164u: goto label_381164;
        case 0x381168u: goto label_381168;
        case 0x38116cu: goto label_38116c;
        case 0x381170u: goto label_381170;
        case 0x381174u: goto label_381174;
        case 0x381178u: goto label_381178;
        case 0x38117cu: goto label_38117c;
        case 0x381180u: goto label_381180;
        case 0x381184u: goto label_381184;
        case 0x381188u: goto label_381188;
        case 0x38118cu: goto label_38118c;
        case 0x381190u: goto label_381190;
        case 0x381194u: goto label_381194;
        case 0x381198u: goto label_381198;
        case 0x38119cu: goto label_38119c;
        case 0x3811a0u: goto label_3811a0;
        case 0x3811a4u: goto label_3811a4;
        case 0x3811a8u: goto label_3811a8;
        case 0x3811acu: goto label_3811ac;
        case 0x3811b0u: goto label_3811b0;
        case 0x3811b4u: goto label_3811b4;
        case 0x3811b8u: goto label_3811b8;
        case 0x3811bcu: goto label_3811bc;
        case 0x3811c0u: goto label_3811c0;
        case 0x3811c4u: goto label_3811c4;
        case 0x3811c8u: goto label_3811c8;
        case 0x3811ccu: goto label_3811cc;
        case 0x3811d0u: goto label_3811d0;
        case 0x3811d4u: goto label_3811d4;
        case 0x3811d8u: goto label_3811d8;
        case 0x3811dcu: goto label_3811dc;
        case 0x3811e0u: goto label_3811e0;
        case 0x3811e4u: goto label_3811e4;
        case 0x3811e8u: goto label_3811e8;
        case 0x3811ecu: goto label_3811ec;
        case 0x3811f0u: goto label_3811f0;
        case 0x3811f4u: goto label_3811f4;
        case 0x3811f8u: goto label_3811f8;
        case 0x3811fcu: goto label_3811fc;
        case 0x381200u: goto label_381200;
        case 0x381204u: goto label_381204;
        case 0x381208u: goto label_381208;
        case 0x38120cu: goto label_38120c;
        case 0x381210u: goto label_381210;
        case 0x381214u: goto label_381214;
        case 0x381218u: goto label_381218;
        case 0x38121cu: goto label_38121c;
        case 0x381220u: goto label_381220;
        case 0x381224u: goto label_381224;
        case 0x381228u: goto label_381228;
        case 0x38122cu: goto label_38122c;
        case 0x381230u: goto label_381230;
        case 0x381234u: goto label_381234;
        case 0x381238u: goto label_381238;
        case 0x38123cu: goto label_38123c;
        case 0x381240u: goto label_381240;
        case 0x381244u: goto label_381244;
        case 0x381248u: goto label_381248;
        case 0x38124cu: goto label_38124c;
        case 0x381250u: goto label_381250;
        case 0x381254u: goto label_381254;
        case 0x381258u: goto label_381258;
        case 0x38125cu: goto label_38125c;
        case 0x381260u: goto label_381260;
        case 0x381264u: goto label_381264;
        case 0x381268u: goto label_381268;
        case 0x38126cu: goto label_38126c;
        case 0x381270u: goto label_381270;
        case 0x381274u: goto label_381274;
        case 0x381278u: goto label_381278;
        case 0x38127cu: goto label_38127c;
        case 0x381280u: goto label_381280;
        case 0x381284u: goto label_381284;
        case 0x381288u: goto label_381288;
        case 0x38128cu: goto label_38128c;
        case 0x381290u: goto label_381290;
        case 0x381294u: goto label_381294;
        case 0x381298u: goto label_381298;
        case 0x38129cu: goto label_38129c;
        case 0x3812a0u: goto label_3812a0;
        case 0x3812a4u: goto label_3812a4;
        case 0x3812a8u: goto label_3812a8;
        case 0x3812acu: goto label_3812ac;
        case 0x3812b0u: goto label_3812b0;
        case 0x3812b4u: goto label_3812b4;
        case 0x3812b8u: goto label_3812b8;
        case 0x3812bcu: goto label_3812bc;
        case 0x3812c0u: goto label_3812c0;
        case 0x3812c4u: goto label_3812c4;
        case 0x3812c8u: goto label_3812c8;
        case 0x3812ccu: goto label_3812cc;
        case 0x3812d0u: goto label_3812d0;
        case 0x3812d4u: goto label_3812d4;
        case 0x3812d8u: goto label_3812d8;
        case 0x3812dcu: goto label_3812dc;
        case 0x3812e0u: goto label_3812e0;
        case 0x3812e4u: goto label_3812e4;
        case 0x3812e8u: goto label_3812e8;
        case 0x3812ecu: goto label_3812ec;
        case 0x3812f0u: goto label_3812f0;
        case 0x3812f4u: goto label_3812f4;
        case 0x3812f8u: goto label_3812f8;
        case 0x3812fcu: goto label_3812fc;
        case 0x381300u: goto label_381300;
        case 0x381304u: goto label_381304;
        case 0x381308u: goto label_381308;
        case 0x38130cu: goto label_38130c;
        case 0x381310u: goto label_381310;
        case 0x381314u: goto label_381314;
        case 0x381318u: goto label_381318;
        case 0x38131cu: goto label_38131c;
        case 0x381320u: goto label_381320;
        case 0x381324u: goto label_381324;
        case 0x381328u: goto label_381328;
        case 0x38132cu: goto label_38132c;
        case 0x381330u: goto label_381330;
        case 0x381334u: goto label_381334;
        case 0x381338u: goto label_381338;
        case 0x38133cu: goto label_38133c;
        case 0x381340u: goto label_381340;
        case 0x381344u: goto label_381344;
        case 0x381348u: goto label_381348;
        case 0x38134cu: goto label_38134c;
        case 0x381350u: goto label_381350;
        case 0x381354u: goto label_381354;
        case 0x381358u: goto label_381358;
        case 0x38135cu: goto label_38135c;
        case 0x381360u: goto label_381360;
        case 0x381364u: goto label_381364;
        case 0x381368u: goto label_381368;
        case 0x38136cu: goto label_38136c;
        case 0x381370u: goto label_381370;
        case 0x381374u: goto label_381374;
        case 0x381378u: goto label_381378;
        case 0x38137cu: goto label_38137c;
        case 0x381380u: goto label_381380;
        case 0x381384u: goto label_381384;
        case 0x381388u: goto label_381388;
        case 0x38138cu: goto label_38138c;
        case 0x381390u: goto label_381390;
        case 0x381394u: goto label_381394;
        case 0x381398u: goto label_381398;
        case 0x38139cu: goto label_38139c;
        case 0x3813a0u: goto label_3813a0;
        case 0x3813a4u: goto label_3813a4;
        case 0x3813a8u: goto label_3813a8;
        case 0x3813acu: goto label_3813ac;
        case 0x3813b0u: goto label_3813b0;
        case 0x3813b4u: goto label_3813b4;
        case 0x3813b8u: goto label_3813b8;
        case 0x3813bcu: goto label_3813bc;
        case 0x3813c0u: goto label_3813c0;
        case 0x3813c4u: goto label_3813c4;
        case 0x3813c8u: goto label_3813c8;
        case 0x3813ccu: goto label_3813cc;
        case 0x3813d0u: goto label_3813d0;
        case 0x3813d4u: goto label_3813d4;
        case 0x3813d8u: goto label_3813d8;
        case 0x3813dcu: goto label_3813dc;
        case 0x3813e0u: goto label_3813e0;
        case 0x3813e4u: goto label_3813e4;
        case 0x3813e8u: goto label_3813e8;
        case 0x3813ecu: goto label_3813ec;
        case 0x3813f0u: goto label_3813f0;
        case 0x3813f4u: goto label_3813f4;
        case 0x3813f8u: goto label_3813f8;
        case 0x3813fcu: goto label_3813fc;
        case 0x381400u: goto label_381400;
        case 0x381404u: goto label_381404;
        case 0x381408u: goto label_381408;
        case 0x38140cu: goto label_38140c;
        case 0x381410u: goto label_381410;
        case 0x381414u: goto label_381414;
        case 0x381418u: goto label_381418;
        case 0x38141cu: goto label_38141c;
        case 0x381420u: goto label_381420;
        case 0x381424u: goto label_381424;
        case 0x381428u: goto label_381428;
        case 0x38142cu: goto label_38142c;
        case 0x381430u: goto label_381430;
        case 0x381434u: goto label_381434;
        case 0x381438u: goto label_381438;
        case 0x38143cu: goto label_38143c;
        case 0x381440u: goto label_381440;
        case 0x381444u: goto label_381444;
        case 0x381448u: goto label_381448;
        case 0x38144cu: goto label_38144c;
        case 0x381450u: goto label_381450;
        case 0x381454u: goto label_381454;
        case 0x381458u: goto label_381458;
        case 0x38145cu: goto label_38145c;
        case 0x381460u: goto label_381460;
        case 0x381464u: goto label_381464;
        case 0x381468u: goto label_381468;
        case 0x38146cu: goto label_38146c;
        default: break;
    }

    ctx->pc = 0x380f40u;

label_380f40:
    // 0x380f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_380f44:
    // 0x380f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_380f48:
    // 0x380f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_380f4c:
    // 0x380f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_380f50:
    // 0x380f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x380f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_380f54:
    // 0x380f54: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_380f58:
    if (ctx->pc == 0x380F58u) {
        ctx->pc = 0x380F58u;
            // 0x380f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x380F5Cu;
        goto label_380f5c;
    }
    ctx->pc = 0x380F54u;
    {
        const bool branch_taken_0x380f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380F54u;
            // 0x380f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f54) {
            ctx->pc = 0x381088u;
            goto label_381088;
        }
    }
    ctx->pc = 0x380F5Cu;
label_380f5c:
    // 0x380f5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x380f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_380f60:
    // 0x380f60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x380f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_380f64:
    // 0x380f64: 0x246376e0  addiu       $v1, $v1, 0x76E0
    ctx->pc = 0x380f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30432));
label_380f68:
    // 0x380f68: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x380f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_380f6c:
    // 0x380f6c: 0x24427718  addiu       $v0, $v0, 0x7718
    ctx->pc = 0x380f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30488));
label_380f70:
    // 0x380f70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x380f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_380f74:
    // 0x380f74: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x380f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_380f78:
    // 0x380f78: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x380f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_380f7c:
    // 0x380f7c: 0xc0407c0  jal         func_101F00
label_380f80:
    if (ctx->pc == 0x380F80u) {
        ctx->pc = 0x380F80u;
            // 0x380f80: 0x24a510a0  addiu       $a1, $a1, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
        ctx->pc = 0x380F84u;
        goto label_380f84;
    }
    ctx->pc = 0x380F7Cu;
    SET_GPR_U32(ctx, 31, 0x380F84u);
    ctx->pc = 0x380F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380F7Cu;
            // 0x380f80: 0x24a510a0  addiu       $a1, $a1, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F84u; }
        if (ctx->pc != 0x380F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F84u; }
        if (ctx->pc != 0x380F84u) { return; }
    }
    ctx->pc = 0x380F84u;
label_380f84:
    // 0x380f84: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x380f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_380f88:
    // 0x380f88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_380f8c:
    if (ctx->pc == 0x380F8Cu) {
        ctx->pc = 0x380F8Cu;
            // 0x380f8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x380F90u;
        goto label_380f90;
    }
    ctx->pc = 0x380F88u;
    {
        const bool branch_taken_0x380f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380f88) {
            ctx->pc = 0x380F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380F88u;
            // 0x380f8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380F9Cu;
            goto label_380f9c;
        }
    }
    ctx->pc = 0x380F90u;
label_380f90:
    // 0x380f90: 0xc07507c  jal         func_1D41F0
label_380f94:
    if (ctx->pc == 0x380F94u) {
        ctx->pc = 0x380F94u;
            // 0x380f94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x380F98u;
        goto label_380f98;
    }
    ctx->pc = 0x380F90u;
    SET_GPR_U32(ctx, 31, 0x380F98u);
    ctx->pc = 0x380F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380F90u;
            // 0x380f94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F98u; }
        if (ctx->pc != 0x380F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380F98u; }
        if (ctx->pc != 0x380F98u) { return; }
    }
    ctx->pc = 0x380F98u;
label_380f98:
    // 0x380f98: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x380f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_380f9c:
    // 0x380f9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_380fa0:
    if (ctx->pc == 0x380FA0u) {
        ctx->pc = 0x380FA0u;
            // 0x380fa0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x380FA4u;
        goto label_380fa4;
    }
    ctx->pc = 0x380F9Cu;
    {
        const bool branch_taken_0x380f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380f9c) {
            ctx->pc = 0x380FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380F9Cu;
            // 0x380fa0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380FCCu;
            goto label_380fcc;
        }
    }
    ctx->pc = 0x380FA4u;
label_380fa4:
    // 0x380fa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_380fa8:
    if (ctx->pc == 0x380FA8u) {
        ctx->pc = 0x380FACu;
        goto label_380fac;
    }
    ctx->pc = 0x380FA4u;
    {
        const bool branch_taken_0x380fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fa4) {
            ctx->pc = 0x380FC8u;
            goto label_380fc8;
        }
    }
    ctx->pc = 0x380FACu;
label_380fac:
    // 0x380fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_380fb0:
    if (ctx->pc == 0x380FB0u) {
        ctx->pc = 0x380FB4u;
        goto label_380fb4;
    }
    ctx->pc = 0x380FACu;
    {
        const bool branch_taken_0x380fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fac) {
            ctx->pc = 0x380FC8u;
            goto label_380fc8;
        }
    }
    ctx->pc = 0x380FB4u;
label_380fb4:
    // 0x380fb4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x380fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_380fb8:
    // 0x380fb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_380fbc:
    if (ctx->pc == 0x380FBCu) {
        ctx->pc = 0x380FC0u;
        goto label_380fc0;
    }
    ctx->pc = 0x380FB8u;
    {
        const bool branch_taken_0x380fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fb8) {
            ctx->pc = 0x380FC8u;
            goto label_380fc8;
        }
    }
    ctx->pc = 0x380FC0u;
label_380fc0:
    // 0x380fc0: 0xc0400a8  jal         func_1002A0
label_380fc4:
    if (ctx->pc == 0x380FC4u) {
        ctx->pc = 0x380FC8u;
        goto label_380fc8;
    }
    ctx->pc = 0x380FC0u;
    SET_GPR_U32(ctx, 31, 0x380FC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380FC8u; }
        if (ctx->pc != 0x380FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380FC8u; }
        if (ctx->pc != 0x380FC8u) { return; }
    }
    ctx->pc = 0x380FC8u;
label_380fc8:
    // 0x380fc8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x380fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_380fcc:
    // 0x380fcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_380fd0:
    if (ctx->pc == 0x380FD0u) {
        ctx->pc = 0x380FD0u;
            // 0x380fd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x380FD4u;
        goto label_380fd4;
    }
    ctx->pc = 0x380FCCu;
    {
        const bool branch_taken_0x380fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fcc) {
            ctx->pc = 0x380FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380FCCu;
            // 0x380fd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380FFCu;
            goto label_380ffc;
        }
    }
    ctx->pc = 0x380FD4u;
label_380fd4:
    // 0x380fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_380fd8:
    if (ctx->pc == 0x380FD8u) {
        ctx->pc = 0x380FDCu;
        goto label_380fdc;
    }
    ctx->pc = 0x380FD4u;
    {
        const bool branch_taken_0x380fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fd4) {
            ctx->pc = 0x380FF8u;
            goto label_380ff8;
        }
    }
    ctx->pc = 0x380FDCu;
label_380fdc:
    // 0x380fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_380fe0:
    if (ctx->pc == 0x380FE0u) {
        ctx->pc = 0x380FE4u;
        goto label_380fe4;
    }
    ctx->pc = 0x380FDCu;
    {
        const bool branch_taken_0x380fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fdc) {
            ctx->pc = 0x380FF8u;
            goto label_380ff8;
        }
    }
    ctx->pc = 0x380FE4u;
label_380fe4:
    // 0x380fe4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x380fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_380fe8:
    // 0x380fe8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_380fec:
    if (ctx->pc == 0x380FECu) {
        ctx->pc = 0x380FF0u;
        goto label_380ff0;
    }
    ctx->pc = 0x380FE8u;
    {
        const bool branch_taken_0x380fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fe8) {
            ctx->pc = 0x380FF8u;
            goto label_380ff8;
        }
    }
    ctx->pc = 0x380FF0u;
label_380ff0:
    // 0x380ff0: 0xc0400a8  jal         func_1002A0
label_380ff4:
    if (ctx->pc == 0x380FF4u) {
        ctx->pc = 0x380FF8u;
        goto label_380ff8;
    }
    ctx->pc = 0x380FF0u;
    SET_GPR_U32(ctx, 31, 0x380FF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380FF8u; }
        if (ctx->pc != 0x380FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380FF8u; }
        if (ctx->pc != 0x380FF8u) { return; }
    }
    ctx->pc = 0x380FF8u;
label_380ff8:
    // 0x380ff8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x380ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_380ffc:
    // 0x380ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_381000:
    if (ctx->pc == 0x381000u) {
        ctx->pc = 0x381004u;
        goto label_381004;
    }
    ctx->pc = 0x380FFCu;
    {
        const bool branch_taken_0x380ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380ffc) {
            ctx->pc = 0x381018u;
            goto label_381018;
        }
    }
    ctx->pc = 0x381004u;
label_381004:
    // 0x381004: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x381004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_381008:
    // 0x381008: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x381008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38100c:
    // 0x38100c: 0x246376d0  addiu       $v1, $v1, 0x76D0
    ctx->pc = 0x38100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30416));
label_381010:
    // 0x381010: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x381010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_381014:
    // 0x381014: 0xac406108  sw          $zero, 0x6108($v0)
    ctx->pc = 0x381014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24840), GPR_U32(ctx, 0));
label_381018:
    // 0x381018: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_38101c:
    if (ctx->pc == 0x38101Cu) {
        ctx->pc = 0x38101Cu;
            // 0x38101c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x381020u;
        goto label_381020;
    }
    ctx->pc = 0x381018u;
    {
        const bool branch_taken_0x381018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x381018) {
            ctx->pc = 0x38101Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381018u;
            // 0x38101c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381074u;
            goto label_381074;
        }
    }
    ctx->pc = 0x381020u;
label_381020:
    // 0x381020: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x381020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_381024:
    // 0x381024: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x381024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_381028:
    // 0x381028: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x381028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38102c:
    // 0x38102c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_381030:
    // 0x381030: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_381034:
    if (ctx->pc == 0x381034u) {
        ctx->pc = 0x381034u;
            // 0x381034: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x381038u;
        goto label_381038;
    }
    ctx->pc = 0x381030u;
    {
        const bool branch_taken_0x381030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381030) {
            ctx->pc = 0x381034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381030u;
            // 0x381034: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38104Cu;
            goto label_38104c;
        }
    }
    ctx->pc = 0x381038u;
label_381038:
    // 0x381038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x381038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38103c:
    // 0x38103c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38103cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_381040:
    // 0x381040: 0x320f809  jalr        $t9
label_381044:
    if (ctx->pc == 0x381044u) {
        ctx->pc = 0x381044u;
            // 0x381044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x381048u;
        goto label_381048;
    }
    ctx->pc = 0x381040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381048u);
        ctx->pc = 0x381044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381040u;
            // 0x381044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381048u; }
            if (ctx->pc != 0x381048u) { return; }
        }
        }
    }
    ctx->pc = 0x381048u;
label_381048:
    // 0x381048: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x381048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_38104c:
    // 0x38104c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_381050:
    if (ctx->pc == 0x381050u) {
        ctx->pc = 0x381050u;
            // 0x381050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381054u;
        goto label_381054;
    }
    ctx->pc = 0x38104Cu;
    {
        const bool branch_taken_0x38104c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38104c) {
            ctx->pc = 0x381050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38104Cu;
            // 0x381050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381068u;
            goto label_381068;
        }
    }
    ctx->pc = 0x381054u;
label_381054:
    // 0x381054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x381054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_381058:
    // 0x381058: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x381058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38105c:
    // 0x38105c: 0x320f809  jalr        $t9
label_381060:
    if (ctx->pc == 0x381060u) {
        ctx->pc = 0x381060u;
            // 0x381060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x381064u;
        goto label_381064;
    }
    ctx->pc = 0x38105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381064u);
        ctx->pc = 0x381060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38105Cu;
            // 0x381060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381064u; }
            if (ctx->pc != 0x381064u) { return; }
        }
        }
    }
    ctx->pc = 0x381064u;
label_381064:
    // 0x381064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381068:
    // 0x381068: 0xc075bf8  jal         func_1D6FE0
label_38106c:
    if (ctx->pc == 0x38106Cu) {
        ctx->pc = 0x38106Cu;
            // 0x38106c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381070u;
        goto label_381070;
    }
    ctx->pc = 0x381068u;
    SET_GPR_U32(ctx, 31, 0x381070u);
    ctx->pc = 0x38106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381068u;
            // 0x38106c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381070u; }
        if (ctx->pc != 0x381070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381070u; }
        if (ctx->pc != 0x381070u) { return; }
    }
    ctx->pc = 0x381070u;
label_381070:
    // 0x381070: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x381070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_381074:
    // 0x381074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x381074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_381078:
    // 0x381078: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_38107c:
    if (ctx->pc == 0x38107Cu) {
        ctx->pc = 0x38107Cu;
            // 0x38107c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381080u;
        goto label_381080;
    }
    ctx->pc = 0x381078u;
    {
        const bool branch_taken_0x381078 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x381078) {
            ctx->pc = 0x38107Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381078u;
            // 0x38107c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38108Cu;
            goto label_38108c;
        }
    }
    ctx->pc = 0x381080u;
label_381080:
    // 0x381080: 0xc0400a8  jal         func_1002A0
label_381084:
    if (ctx->pc == 0x381084u) {
        ctx->pc = 0x381084u;
            // 0x381084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381088u;
        goto label_381088;
    }
    ctx->pc = 0x381080u;
    SET_GPR_U32(ctx, 31, 0x381088u);
    ctx->pc = 0x381084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381080u;
            // 0x381084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381088u; }
        if (ctx->pc != 0x381088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381088u; }
        if (ctx->pc != 0x381088u) { return; }
    }
    ctx->pc = 0x381088u;
label_381088:
    // 0x381088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x381088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38108c:
    // 0x38108c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38108cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_381090:
    // 0x381090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381094:
    // 0x381094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_381098:
    // 0x381098: 0x3e00008  jr          $ra
label_38109c:
    if (ctx->pc == 0x38109Cu) {
        ctx->pc = 0x38109Cu;
            // 0x38109c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3810A0u;
        goto label_3810a0;
    }
    ctx->pc = 0x381098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381098u;
            // 0x38109c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3810A0u;
label_3810a0:
    // 0x3810a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3810a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3810a4:
    // 0x3810a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3810a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3810a8:
    // 0x3810a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3810a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3810ac:
    // 0x3810ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3810acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3810b0:
    // 0x3810b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3810b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3810b4:
    // 0x3810b4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_3810b8:
    if (ctx->pc == 0x3810B8u) {
        ctx->pc = 0x3810B8u;
            // 0x3810b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3810BCu;
        goto label_3810bc;
    }
    ctx->pc = 0x3810B4u;
    {
        const bool branch_taken_0x3810b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3810B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3810B4u;
            // 0x3810b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3810b4) {
            ctx->pc = 0x38117Cu;
            goto label_38117c;
        }
    }
    ctx->pc = 0x3810BCu;
label_3810bc:
    // 0x3810bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3810bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3810c0:
    // 0x3810c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3810c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3810c4:
    // 0x3810c4: 0x24637780  addiu       $v1, $v1, 0x7780
    ctx->pc = 0x3810c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30592));
label_3810c8:
    // 0x3810c8: 0x244277c0  addiu       $v0, $v0, 0x77C0
    ctx->pc = 0x3810c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30656));
label_3810cc:
    // 0x3810cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3810ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3810d0:
    // 0x3810d0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3810d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3810d4:
    // 0x3810d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3810d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3810d8:
    // 0x3810d8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3810d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3810dc:
    // 0x3810dc: 0x320f809  jalr        $t9
label_3810e0:
    if (ctx->pc == 0x3810E0u) {
        ctx->pc = 0x3810E4u;
        goto label_3810e4;
    }
    ctx->pc = 0x3810DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3810E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3810E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3810E4u; }
            if (ctx->pc != 0x3810E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3810E4u;
label_3810e4:
    // 0x3810e4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_3810e8:
    if (ctx->pc == 0x3810E8u) {
        ctx->pc = 0x3810E8u;
            // 0x3810e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3810ECu;
        goto label_3810ec;
    }
    ctx->pc = 0x3810E4u;
    {
        const bool branch_taken_0x3810e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3810e4) {
            ctx->pc = 0x3810E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3810E4u;
            // 0x3810e8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381168u;
            goto label_381168;
        }
    }
    ctx->pc = 0x3810ECu;
label_3810ec:
    // 0x3810ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3810ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3810f0:
    // 0x3810f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3810f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3810f4:
    // 0x3810f4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3810f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_3810f8:
    // 0x3810f8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3810f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_3810fc:
    // 0x3810fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3810fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_381100:
    // 0x381100: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x381100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_381104:
    // 0x381104: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x381104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_381108:
    // 0x381108: 0xc0aecc4  jal         func_2BB310
label_38110c:
    if (ctx->pc == 0x38110Cu) {
        ctx->pc = 0x38110Cu;
            // 0x38110c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x381110u;
        goto label_381110;
    }
    ctx->pc = 0x381108u;
    SET_GPR_U32(ctx, 31, 0x381110u);
    ctx->pc = 0x38110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381108u;
            // 0x38110c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381110u; }
        if (ctx->pc != 0x381110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381110u; }
        if (ctx->pc != 0x381110u) { return; }
    }
    ctx->pc = 0x381110u;
label_381110:
    // 0x381110: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x381110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_381114:
    // 0x381114: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x381114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_381118:
    // 0x381118: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38111c:
    if (ctx->pc == 0x38111Cu) {
        ctx->pc = 0x38111Cu;
            // 0x38111c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x381120u;
        goto label_381120;
    }
    ctx->pc = 0x381118u;
    {
        const bool branch_taken_0x381118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381118) {
            ctx->pc = 0x38111Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381118u;
            // 0x38111c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381134u;
            goto label_381134;
        }
    }
    ctx->pc = 0x381120u;
label_381120:
    // 0x381120: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x381120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_381124:
    // 0x381124: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x381124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_381128:
    // 0x381128: 0x320f809  jalr        $t9
label_38112c:
    if (ctx->pc == 0x38112Cu) {
        ctx->pc = 0x38112Cu;
            // 0x38112c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x381130u;
        goto label_381130;
    }
    ctx->pc = 0x381128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381130u);
        ctx->pc = 0x38112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381128u;
            // 0x38112c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381130u; }
            if (ctx->pc != 0x381130u) { return; }
        }
        }
    }
    ctx->pc = 0x381130u;
label_381130:
    // 0x381130: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x381130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_381134:
    // 0x381134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x381134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_381138:
    // 0x381138: 0xc0aec9c  jal         func_2BB270
label_38113c:
    if (ctx->pc == 0x38113Cu) {
        ctx->pc = 0x38113Cu;
            // 0x38113c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x381140u;
        goto label_381140;
    }
    ctx->pc = 0x381138u;
    SET_GPR_U32(ctx, 31, 0x381140u);
    ctx->pc = 0x38113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381138u;
            // 0x38113c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381140u; }
        if (ctx->pc != 0x381140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381140u; }
        if (ctx->pc != 0x381140u) { return; }
    }
    ctx->pc = 0x381140u;
label_381140:
    // 0x381140: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x381140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_381144:
    // 0x381144: 0xc0aec88  jal         func_2BB220
label_381148:
    if (ctx->pc == 0x381148u) {
        ctx->pc = 0x381148u;
            // 0x381148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38114Cu;
        goto label_38114c;
    }
    ctx->pc = 0x381144u;
    SET_GPR_U32(ctx, 31, 0x38114Cu);
    ctx->pc = 0x381148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381144u;
            // 0x381148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38114Cu; }
        if (ctx->pc != 0x38114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38114Cu; }
        if (ctx->pc != 0x38114Cu) { return; }
    }
    ctx->pc = 0x38114Cu;
label_38114c:
    // 0x38114c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x38114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_381150:
    // 0x381150: 0xc0aec0c  jal         func_2BB030
label_381154:
    if (ctx->pc == 0x381154u) {
        ctx->pc = 0x381154u;
            // 0x381154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381158u;
        goto label_381158;
    }
    ctx->pc = 0x381150u;
    SET_GPR_U32(ctx, 31, 0x381158u);
    ctx->pc = 0x381154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381150u;
            // 0x381154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381158u; }
        if (ctx->pc != 0x381158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381158u; }
        if (ctx->pc != 0x381158u) { return; }
    }
    ctx->pc = 0x381158u;
label_381158:
    // 0x381158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38115c:
    // 0x38115c: 0xc0aeaa8  jal         func_2BAAA0
label_381160:
    if (ctx->pc == 0x381160u) {
        ctx->pc = 0x381160u;
            // 0x381160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381164u;
        goto label_381164;
    }
    ctx->pc = 0x38115Cu;
    SET_GPR_U32(ctx, 31, 0x381164u);
    ctx->pc = 0x381160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38115Cu;
            // 0x381160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381164u; }
        if (ctx->pc != 0x381164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381164u; }
        if (ctx->pc != 0x381164u) { return; }
    }
    ctx->pc = 0x381164u;
label_381164:
    // 0x381164: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x381164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_381168:
    // 0x381168: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x381168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38116c:
    // 0x38116c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_381170:
    if (ctx->pc == 0x381170u) {
        ctx->pc = 0x381170u;
            // 0x381170: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381174u;
        goto label_381174;
    }
    ctx->pc = 0x38116Cu;
    {
        const bool branch_taken_0x38116c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38116c) {
            ctx->pc = 0x381170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38116Cu;
            // 0x381170: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381180u;
            goto label_381180;
        }
    }
    ctx->pc = 0x381174u;
label_381174:
    // 0x381174: 0xc0400a8  jal         func_1002A0
label_381178:
    if (ctx->pc == 0x381178u) {
        ctx->pc = 0x381178u;
            // 0x381178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38117Cu;
        goto label_38117c;
    }
    ctx->pc = 0x381174u;
    SET_GPR_U32(ctx, 31, 0x38117Cu);
    ctx->pc = 0x381178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381174u;
            // 0x381178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38117Cu; }
        if (ctx->pc != 0x38117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38117Cu; }
        if (ctx->pc != 0x38117Cu) { return; }
    }
    ctx->pc = 0x38117Cu;
label_38117c:
    // 0x38117c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38117cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381180:
    // 0x381180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x381180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_381184:
    // 0x381184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381188:
    // 0x381188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38118c:
    // 0x38118c: 0x3e00008  jr          $ra
label_381190:
    if (ctx->pc == 0x381190u) {
        ctx->pc = 0x381190u;
            // 0x381190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x381194u;
        goto label_381194;
    }
    ctx->pc = 0x38118Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38118Cu;
            // 0x381190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381194u;
label_381194:
    // 0x381194: 0x0  nop
    ctx->pc = 0x381194u;
    // NOP
label_381198:
    // 0x381198: 0x0  nop
    ctx->pc = 0x381198u;
    // NOP
label_38119c:
    // 0x38119c: 0x0  nop
    ctx->pc = 0x38119cu;
    // NOP
label_3811a0:
    // 0x3811a0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3811a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3811a4:
    // 0x3811a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3811a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3811a8:
    // 0x3811a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3811a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3811ac:
    // 0x3811ac: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3811acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3811b0:
    // 0x3811b0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3811b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3811b4:
    // 0x3811b4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3811b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3811b8:
    // 0x3811b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3811b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3811bc:
    // 0x3811bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3811bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3811c0:
    // 0x3811c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3811c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3811c4:
    // 0x3811c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3811c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3811c8:
    // 0x3811c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3811c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3811cc:
    // 0x3811cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3811ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3811d0:
    // 0x3811d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3811d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3811d4:
    // 0x3811d4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3811d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3811d8:
    // 0x3811d8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3811dc:
    if (ctx->pc == 0x3811DCu) {
        ctx->pc = 0x3811DCu;
            // 0x3811dc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3811E0u;
        goto label_3811e0;
    }
    ctx->pc = 0x3811D8u;
    {
        const bool branch_taken_0x3811d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3811DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3811D8u;
            // 0x3811dc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811d8) {
            ctx->pc = 0x381228u;
            goto label_381228;
        }
    }
    ctx->pc = 0x3811E0u;
label_3811e0:
    // 0x3811e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3811e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3811e4:
    // 0x3811e4: 0x50a30093  beql        $a1, $v1, . + 4 + (0x93 << 2)
label_3811e8:
    if (ctx->pc == 0x3811E8u) {
        ctx->pc = 0x3811E8u;
            // 0x3811e8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3811ECu;
        goto label_3811ec;
    }
    ctx->pc = 0x3811E4u;
    {
        const bool branch_taken_0x3811e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3811e4) {
            ctx->pc = 0x3811E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3811E4u;
            // 0x3811e8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381434u;
            goto label_381434;
        }
    }
    ctx->pc = 0x3811ECu;
label_3811ec:
    // 0x3811ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3811ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3811f0:
    // 0x3811f0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3811f4:
    if (ctx->pc == 0x3811F4u) {
        ctx->pc = 0x3811F8u;
        goto label_3811f8;
    }
    ctx->pc = 0x3811F0u;
    {
        const bool branch_taken_0x3811f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3811f0) {
            ctx->pc = 0x381200u;
            goto label_381200;
        }
    }
    ctx->pc = 0x3811F8u;
label_3811f8:
    // 0x3811f8: 0x1000008d  b           . + 4 + (0x8D << 2)
label_3811fc:
    if (ctx->pc == 0x3811FCu) {
        ctx->pc = 0x381200u;
        goto label_381200;
    }
    ctx->pc = 0x3811F8u;
    {
        const bool branch_taken_0x3811f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3811f8) {
            ctx->pc = 0x381430u;
            goto label_381430;
        }
    }
    ctx->pc = 0x381200u;
label_381200:
    // 0x381200: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x381200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_381204:
    // 0x381204: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x381204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_381208:
    // 0x381208: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x381208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_38120c:
    // 0x38120c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x38120cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_381210:
    // 0x381210: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x381210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_381214:
    // 0x381214: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x381214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_381218:
    // 0x381218: 0x320f809  jalr        $t9
label_38121c:
    if (ctx->pc == 0x38121Cu) {
        ctx->pc = 0x38121Cu;
            // 0x38121c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x381220u;
        goto label_381220;
    }
    ctx->pc = 0x381218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381220u);
        ctx->pc = 0x38121Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381218u;
            // 0x38121c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381220u; }
            if (ctx->pc != 0x381220u) { return; }
        }
        }
    }
    ctx->pc = 0x381220u;
label_381220:
    // 0x381220: 0x10000083  b           . + 4 + (0x83 << 2)
label_381224:
    if (ctx->pc == 0x381224u) {
        ctx->pc = 0x381228u;
        goto label_381228;
    }
    ctx->pc = 0x381220u;
    {
        const bool branch_taken_0x381220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x381220) {
            ctx->pc = 0x381430u;
            goto label_381430;
        }
    }
    ctx->pc = 0x381228u;
label_381228:
    // 0x381228: 0x8ede0070  lw          $fp, 0x70($s6)
    ctx->pc = 0x381228u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_38122c:
    // 0x38122c: 0x13c00080  beqz        $fp, . + 4 + (0x80 << 2)
label_381230:
    if (ctx->pc == 0x381230u) {
        ctx->pc = 0x381234u;
        goto label_381234;
    }
    ctx->pc = 0x38122Cu;
    {
        const bool branch_taken_0x38122c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x38122c) {
            ctx->pc = 0x381430u;
            goto label_381430;
        }
    }
    ctx->pc = 0x381234u;
label_381234:
    // 0x381234: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x381234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_381238:
    // 0x381238: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x381238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38123c:
    // 0x38123c: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x38123cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_381240:
    // 0x381240: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x381240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_381244:
    // 0x381244: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x381244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_381248:
    // 0x381248: 0x26d30084  addiu       $s3, $s6, 0x84
    ctx->pc = 0x381248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_38124c:
    // 0x38124c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38124cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381250:
    // 0x381250: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x381250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381254:
    // 0x381254: 0x8cb70130  lw          $s7, 0x130($a1)
    ctx->pc = 0x381254u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_381258:
    // 0x381258: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x381258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38125c:
    // 0x38125c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x38125cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_381260:
    // 0x381260: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x381260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381264:
    // 0x381264: 0x2e59004  sllv        $s2, $a1, $s7
    ctx->pc = 0x381264u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 23) & 0x1F));
label_381268:
    // 0x381268: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x381268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_38126c:
    // 0x38126c: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x38126cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_381270:
    // 0x381270: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x381270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_381274:
    // 0x381274: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x381274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_381278:
    // 0x381278: 0xc4545a98  lwc1        $f20, 0x5A98($v0)
    ctx->pc = 0x381278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38127c:
    // 0x38127c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x38127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_381280:
    // 0x381280: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x381280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_381284:
    // 0x381284: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x381284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_381288:
    // 0x381288: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x381288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_38128c:
    // 0x38128c: 0x27a3016c  addiu       $v1, $sp, 0x16C
    ctx->pc = 0x38128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_381290:
    // 0x381290: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x381290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_381294:
    // 0x381294: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x381294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_381298:
    // 0x381298: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x381298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_38129c:
    // 0x38129c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x38129cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3812a0:
    // 0x3812a0: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x3812a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_3812a4:
    // 0x3812a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3812a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3812a8:
    // 0x3812a8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x3812a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3812ac:
    // 0x3812ac: 0x26a400d8  addiu       $a0, $s5, 0xD8
    ctx->pc = 0x3812acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
label_3812b0:
    // 0x3812b0: 0xc0e054c  jal         func_381530
label_3812b4:
    if (ctx->pc == 0x3812B4u) {
        ctx->pc = 0x3812B4u;
            // 0x3812b4: 0xafb20160  sw          $s2, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 18));
        ctx->pc = 0x3812B8u;
        goto label_3812b8;
    }
    ctx->pc = 0x3812B0u;
    SET_GPR_U32(ctx, 31, 0x3812B8u);
    ctx->pc = 0x3812B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3812B0u;
            // 0x3812b4: 0xafb20160  sw          $s2, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381530u;
    if (runtime->hasFunction(0x381530u)) {
        auto targetFn = runtime->lookupFunction(0x381530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812B8u; }
        if (ctx->pc != 0x3812B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381530_0x381530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812B8u; }
        if (ctx->pc != 0x3812B8u) { return; }
    }
    ctx->pc = 0x3812B8u;
label_3812b8:
    // 0x3812b8: 0xc0dd4bc  jal         func_3752F0
label_3812bc:
    if (ctx->pc == 0x3812BCu) {
        ctx->pc = 0x3812BCu;
            // 0x3812bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3812C0u;
        goto label_3812c0;
    }
    ctx->pc = 0x3812B8u;
    SET_GPR_U32(ctx, 31, 0x3812C0u);
    ctx->pc = 0x3812BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3812B8u;
            // 0x3812bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812C0u; }
        if (ctx->pc != 0x3812C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812C0u; }
        if (ctx->pc != 0x3812C0u) { return; }
    }
    ctx->pc = 0x3812C0u;
label_3812c0:
    // 0x3812c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3812c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3812c4:
    // 0x3812c4: 0x1043003c  beq         $v0, $v1, . + 4 + (0x3C << 2)
label_3812c8:
    if (ctx->pc == 0x3812C8u) {
        ctx->pc = 0x3812CCu;
        goto label_3812cc;
    }
    ctx->pc = 0x3812C4u;
    {
        const bool branch_taken_0x3812c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3812c4) {
            ctx->pc = 0x3813B8u;
            goto label_3813b8;
        }
    }
    ctx->pc = 0x3812CCu;
label_3812cc:
    // 0x3812cc: 0xc0d1c14  jal         func_347050
label_3812d0:
    if (ctx->pc == 0x3812D0u) {
        ctx->pc = 0x3812D0u;
            // 0x3812d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3812D4u;
        goto label_3812d4;
    }
    ctx->pc = 0x3812CCu;
    SET_GPR_U32(ctx, 31, 0x3812D4u);
    ctx->pc = 0x3812D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3812CCu;
            // 0x3812d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812D4u; }
        if (ctx->pc != 0x3812D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812D4u; }
        if (ctx->pc != 0x3812D4u) { return; }
    }
    ctx->pc = 0x3812D4u;
label_3812d4:
    // 0x3812d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3812d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3812d8:
    // 0x3812d8: 0xc04f278  jal         func_13C9E0
label_3812dc:
    if (ctx->pc == 0x3812DCu) {
        ctx->pc = 0x3812DCu;
            // 0x3812dc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3812E0u;
        goto label_3812e0;
    }
    ctx->pc = 0x3812D8u;
    SET_GPR_U32(ctx, 31, 0x3812E0u);
    ctx->pc = 0x3812DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3812D8u;
            // 0x3812dc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812E0u; }
        if (ctx->pc != 0x3812E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812E0u; }
        if (ctx->pc != 0x3812E0u) { return; }
    }
    ctx->pc = 0x3812E0u;
label_3812e0:
    // 0x3812e0: 0xc0d1c10  jal         func_347040
label_3812e4:
    if (ctx->pc == 0x3812E4u) {
        ctx->pc = 0x3812E4u;
            // 0x3812e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3812E8u;
        goto label_3812e8;
    }
    ctx->pc = 0x3812E0u;
    SET_GPR_U32(ctx, 31, 0x3812E8u);
    ctx->pc = 0x3812E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3812E0u;
            // 0x3812e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812E8u; }
        if (ctx->pc != 0x3812E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812E8u; }
        if (ctx->pc != 0x3812E8u) { return; }
    }
    ctx->pc = 0x3812E8u;
label_3812e8:
    // 0x3812e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3812e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3812ec:
    // 0x3812ec: 0xc04ce80  jal         func_133A00
label_3812f0:
    if (ctx->pc == 0x3812F0u) {
        ctx->pc = 0x3812F0u;
            // 0x3812f0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3812F4u;
        goto label_3812f4;
    }
    ctx->pc = 0x3812ECu;
    SET_GPR_U32(ctx, 31, 0x3812F4u);
    ctx->pc = 0x3812F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3812ECu;
            // 0x3812f0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812F4u; }
        if (ctx->pc != 0x3812F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812F4u; }
        if (ctx->pc != 0x3812F4u) { return; }
    }
    ctx->pc = 0x3812F4u;
label_3812f4:
    // 0x3812f4: 0xc0d4108  jal         func_350420
label_3812f8:
    if (ctx->pc == 0x3812F8u) {
        ctx->pc = 0x3812FCu;
        goto label_3812fc;
    }
    ctx->pc = 0x3812F4u;
    SET_GPR_U32(ctx, 31, 0x3812FCu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812FCu; }
        if (ctx->pc != 0x3812FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3812FCu; }
        if (ctx->pc != 0x3812FCu) { return; }
    }
    ctx->pc = 0x3812FCu;
label_3812fc:
    // 0x3812fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3812fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381300:
    // 0x381300: 0xc0d4104  jal         func_350410
label_381304:
    if (ctx->pc == 0x381304u) {
        ctx->pc = 0x381304u;
            // 0x381304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381308u;
        goto label_381308;
    }
    ctx->pc = 0x381300u;
    SET_GPR_U32(ctx, 31, 0x381308u);
    ctx->pc = 0x381304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381300u;
            // 0x381304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381308u; }
        if (ctx->pc != 0x381308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381308u; }
        if (ctx->pc != 0x381308u) { return; }
    }
    ctx->pc = 0x381308u;
label_381308:
    // 0x381308: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x381308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38130c:
    // 0x38130c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381310:
    // 0x381310: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x381310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_381314:
    // 0x381314: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x381314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_381318:
    // 0x381318: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x381318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38131c:
    // 0x38131c: 0x27a90164  addiu       $t1, $sp, 0x164
    ctx->pc = 0x38131cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_381320:
    // 0x381320: 0xc0d40ac  jal         func_3502B0
label_381324:
    if (ctx->pc == 0x381324u) {
        ctx->pc = 0x381324u;
            // 0x381324: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x381328u;
        goto label_381328;
    }
    ctx->pc = 0x381320u;
    SET_GPR_U32(ctx, 31, 0x381328u);
    ctx->pc = 0x381324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381320u;
            // 0x381324: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381328u; }
        if (ctx->pc != 0x381328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381328u; }
        if (ctx->pc != 0x381328u) { return; }
    }
    ctx->pc = 0x381328u;
label_381328:
    // 0x381328: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x381328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_38132c:
    // 0x38132c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_381330:
    if (ctx->pc == 0x381330u) {
        ctx->pc = 0x381330u;
            // 0x381330: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x381334u;
        goto label_381334;
    }
    ctx->pc = 0x38132Cu;
    {
        const bool branch_taken_0x38132c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x381330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38132Cu;
            // 0x381330: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38132c) {
            ctx->pc = 0x3813B8u;
            goto label_3813b8;
        }
    }
    ctx->pc = 0x381334u;
label_381334:
    // 0x381334: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x381334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_381338:
    // 0x381338: 0xc6a000e0  lwc1        $f0, 0xE0($s5)
    ctx->pc = 0x381338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38133c:
    // 0x38133c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38133cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381340:
    // 0x381340: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_381344:
    if (ctx->pc == 0x381344u) {
        ctx->pc = 0x381348u;
        goto label_381348;
    }
    ctx->pc = 0x381340u;
    {
        const bool branch_taken_0x381340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x381340) {
            ctx->pc = 0x381350u;
            goto label_381350;
        }
    }
    ctx->pc = 0x381348u;
label_381348:
    // 0x381348: 0xe6a100e0  swc1        $f1, 0xE0($s5)
    ctx->pc = 0x381348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 224), bits); }
label_38134c:
    // 0x38134c: 0x0  nop
    ctx->pc = 0x38134cu;
    // NOP
label_381350:
    // 0x381350: 0x26a400d8  addiu       $a0, $s5, 0xD8
    ctx->pc = 0x381350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
label_381354:
    // 0x381354: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x381354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_381358:
    // 0x381358: 0xc0e0544  jal         func_381510
label_38135c:
    if (ctx->pc == 0x38135Cu) {
        ctx->pc = 0x38135Cu;
            // 0x38135c: 0xafb2015c  sw          $s2, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 18));
        ctx->pc = 0x381360u;
        goto label_381360;
    }
    ctx->pc = 0x381358u;
    SET_GPR_U32(ctx, 31, 0x381360u);
    ctx->pc = 0x38135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381358u;
            // 0x38135c: 0xafb2015c  sw          $s2, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381510u;
    if (runtime->hasFunction(0x381510u)) {
        auto targetFn = runtime->lookupFunction(0x381510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381360u; }
        if (ctx->pc != 0x381360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381510_0x381510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381360u; }
        if (ctx->pc != 0x381360u) { return; }
    }
    ctx->pc = 0x381360u;
label_381360:
    // 0x381360: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x381360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_381364:
    // 0x381364: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x381364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_381368:
    // 0x381368: 0x27a60168  addiu       $a2, $sp, 0x168
    ctx->pc = 0x381368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_38136c:
    // 0x38136c: 0xc0e051c  jal         func_381470
label_381370:
    if (ctx->pc == 0x381370u) {
        ctx->pc = 0x381370u;
            // 0x381370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381374u;
        goto label_381374;
    }
    ctx->pc = 0x38136Cu;
    SET_GPR_U32(ctx, 31, 0x381374u);
    ctx->pc = 0x381370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38136Cu;
            // 0x381370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381470u;
    if (runtime->hasFunction(0x381470u)) {
        auto targetFn = runtime->lookupFunction(0x381470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381374u; }
        if (ctx->pc != 0x381374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381470_0x381470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381374u; }
        if (ctx->pc != 0x381374u) { return; }
    }
    ctx->pc = 0x381374u;
label_381374:
    // 0x381374: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x381374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_381378:
    // 0x381378: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x381378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_38137c:
    // 0x38137c: 0xc04e4a4  jal         func_139290
label_381380:
    if (ctx->pc == 0x381380u) {
        ctx->pc = 0x381380u;
            // 0x381380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381384u;
        goto label_381384;
    }
    ctx->pc = 0x38137Cu;
    SET_GPR_U32(ctx, 31, 0x381384u);
    ctx->pc = 0x381380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38137Cu;
            // 0x381380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381384u; }
        if (ctx->pc != 0x381384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381384u; }
        if (ctx->pc != 0x381384u) { return; }
    }
    ctx->pc = 0x381384u;
label_381384:
    // 0x381384: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x381384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_381388:
    // 0x381388: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x381388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_38138c:
    // 0x38138c: 0xc04cd60  jal         func_133580
label_381390:
    if (ctx->pc == 0x381390u) {
        ctx->pc = 0x381390u;
            // 0x381390: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x381394u;
        goto label_381394;
    }
    ctx->pc = 0x38138Cu;
    SET_GPR_U32(ctx, 31, 0x381394u);
    ctx->pc = 0x381390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38138Cu;
            // 0x381390: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381394u; }
        if (ctx->pc != 0x381394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381394u; }
        if (ctx->pc != 0x381394u) { return; }
    }
    ctx->pc = 0x381394u;
label_381394:
    // 0x381394: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x381394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_381398:
    // 0x381398: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x381398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_38139c:
    // 0x38139c: 0x320f809  jalr        $t9
label_3813a0:
    if (ctx->pc == 0x3813A0u) {
        ctx->pc = 0x3813A0u;
            // 0x3813a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3813A4u;
        goto label_3813a4;
    }
    ctx->pc = 0x38139Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3813A4u);
        ctx->pc = 0x3813A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38139Cu;
            // 0x3813a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3813A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3813A4u; }
            if (ctx->pc != 0x3813A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3813A4u;
label_3813a4:
    // 0x3813a4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x3813a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_3813a8:
    // 0x3813a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3813a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3813ac:
    // 0x3813ac: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x3813acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3813b0:
    // 0x3813b0: 0xc054fd4  jal         func_153F50
label_3813b4:
    if (ctx->pc == 0x3813B4u) {
        ctx->pc = 0x3813B4u;
            // 0x3813b4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3813B8u;
        goto label_3813b8;
    }
    ctx->pc = 0x3813B0u;
    SET_GPR_U32(ctx, 31, 0x3813B8u);
    ctx->pc = 0x3813B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3813B0u;
            // 0x3813b4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3813B8u; }
        if (ctx->pc != 0x3813B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3813B8u; }
        if (ctx->pc != 0x3813B8u) { return; }
    }
    ctx->pc = 0x3813B8u;
label_3813b8:
    // 0x3813b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3813b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3813bc:
    // 0x3813bc: 0x21e182b  sltu        $v1, $s0, $fp
    ctx->pc = 0x3813bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3813c0:
    // 0x3813c0: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_3813c4:
    if (ctx->pc == 0x3813C4u) {
        ctx->pc = 0x3813C4u;
            // 0x3813c4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x3813C8u;
        goto label_3813c8;
    }
    ctx->pc = 0x3813C0u;
    {
        const bool branch_taken_0x3813c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3813C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3813C0u;
            // 0x3813c4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813c0) {
            ctx->pc = 0x38128Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38128c;
        }
    }
    ctx->pc = 0x3813C8u;
label_3813c8:
    // 0x3813c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3813c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3813cc:
    // 0x3813cc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3813ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3813d0:
    // 0x3813d0: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
label_3813d4:
    if (ctx->pc == 0x3813D4u) {
        ctx->pc = 0x3813D4u;
            // 0x3813d4: 0x8ed00090  lw          $s0, 0x90($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
        ctx->pc = 0x3813D8u;
        goto label_3813d8;
    }
    ctx->pc = 0x3813D0u;
    {
        const bool branch_taken_0x3813d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3813D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3813D0u;
            // 0x3813d4: 0x8ed00090  lw          $s0, 0x90($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813d0) {
            ctx->pc = 0x381430u;
            goto label_381430;
        }
    }
    ctx->pc = 0x3813D8u;
label_3813d8:
    // 0x3813d8: 0xc04e738  jal         func_139CE0
label_3813dc:
    if (ctx->pc == 0x3813DCu) {
        ctx->pc = 0x3813DCu;
            // 0x3813dc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3813E0u;
        goto label_3813e0;
    }
    ctx->pc = 0x3813D8u;
    SET_GPR_U32(ctx, 31, 0x3813E0u);
    ctx->pc = 0x3813DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3813D8u;
            // 0x3813dc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3813E0u; }
        if (ctx->pc != 0x3813E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3813E0u; }
        if (ctx->pc != 0x3813E0u) { return; }
    }
    ctx->pc = 0x3813E0u;
label_3813e0:
    // 0x3813e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3813e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3813e4:
    // 0x3813e4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x3813e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_3813e8:
    // 0x3813e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3813e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3813ec:
    // 0x3813ec: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3813ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3813f0:
    // 0x3813f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3813f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3813f4:
    // 0x3813f4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x3813f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_3813f8:
    // 0x3813f8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3813f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3813fc:
    // 0x3813fc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3813fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_381400:
    // 0x381400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_381404:
    if (ctx->pc == 0x381404u) {
        ctx->pc = 0x381404u;
            // 0x381404: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x381408u;
        goto label_381408;
    }
    ctx->pc = 0x381400u;
    {
        const bool branch_taken_0x381400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381400u;
            // 0x381404: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381400) {
            ctx->pc = 0x381420u;
            goto label_381420;
        }
    }
    ctx->pc = 0x381408u;
label_381408:
    // 0x381408: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x381408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38140c:
    // 0x38140c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x38140cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_381410:
    // 0x381410: 0xc055ea8  jal         func_157AA0
label_381414:
    if (ctx->pc == 0x381414u) {
        ctx->pc = 0x381414u;
            // 0x381414: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381418u;
        goto label_381418;
    }
    ctx->pc = 0x381410u;
    SET_GPR_U32(ctx, 31, 0x381418u);
    ctx->pc = 0x381414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381410u;
            // 0x381414: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381418u; }
        if (ctx->pc != 0x381418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381418u; }
        if (ctx->pc != 0x381418u) { return; }
    }
    ctx->pc = 0x381418u;
label_381418:
    // 0x381418: 0x10000005  b           . + 4 + (0x5 << 2)
label_38141c:
    if (ctx->pc == 0x38141Cu) {
        ctx->pc = 0x381420u;
        goto label_381420;
    }
    ctx->pc = 0x381418u;
    {
        const bool branch_taken_0x381418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x381418) {
            ctx->pc = 0x381430u;
            goto label_381430;
        }
    }
    ctx->pc = 0x381420u;
label_381420:
    // 0x381420: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x381420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381424:
    // 0x381424: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x381424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_381428:
    // 0x381428: 0xc055d28  jal         func_1574A0
label_38142c:
    if (ctx->pc == 0x38142Cu) {
        ctx->pc = 0x38142Cu;
            // 0x38142c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381430u;
        goto label_381430;
    }
    ctx->pc = 0x381428u;
    SET_GPR_U32(ctx, 31, 0x381430u);
    ctx->pc = 0x38142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381428u;
            // 0x38142c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381430u; }
        if (ctx->pc != 0x381430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381430u; }
        if (ctx->pc != 0x381430u) { return; }
    }
    ctx->pc = 0x381430u;
label_381430:
    // 0x381430: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x381430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_381434:
    // 0x381434: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x381434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_381438:
    // 0x381438: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x381438u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38143c:
    // 0x38143c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x38143cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_381440:
    // 0x381440: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x381440u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_381444:
    // 0x381444: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x381444u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_381448:
    // 0x381448: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x381448u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38144c:
    // 0x38144c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38144cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_381450:
    // 0x381450: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x381450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_381454:
    // 0x381454: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x381454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_381458:
    // 0x381458: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38145c:
    // 0x38145c: 0x3e00008  jr          $ra
label_381460:
    if (ctx->pc == 0x381460u) {
        ctx->pc = 0x381460u;
            // 0x381460: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x381464u;
        goto label_381464;
    }
    ctx->pc = 0x38145Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38145Cu;
            // 0x381460: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381464u;
label_381464:
    // 0x381464: 0x0  nop
    ctx->pc = 0x381464u;
    // NOP
label_381468:
    // 0x381468: 0x0  nop
    ctx->pc = 0x381468u;
    // NOP
label_38146c:
    // 0x38146c: 0x0  nop
    ctx->pc = 0x38146cu;
    // NOP
}
