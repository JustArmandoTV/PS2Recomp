#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00407040
// Address: 0x407040 - 0x407500
void sub_00407040_0x407040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407040_0x407040");
#endif

    switch (ctx->pc) {
        case 0x407040u: goto label_407040;
        case 0x407044u: goto label_407044;
        case 0x407048u: goto label_407048;
        case 0x40704cu: goto label_40704c;
        case 0x407050u: goto label_407050;
        case 0x407054u: goto label_407054;
        case 0x407058u: goto label_407058;
        case 0x40705cu: goto label_40705c;
        case 0x407060u: goto label_407060;
        case 0x407064u: goto label_407064;
        case 0x407068u: goto label_407068;
        case 0x40706cu: goto label_40706c;
        case 0x407070u: goto label_407070;
        case 0x407074u: goto label_407074;
        case 0x407078u: goto label_407078;
        case 0x40707cu: goto label_40707c;
        case 0x407080u: goto label_407080;
        case 0x407084u: goto label_407084;
        case 0x407088u: goto label_407088;
        case 0x40708cu: goto label_40708c;
        case 0x407090u: goto label_407090;
        case 0x407094u: goto label_407094;
        case 0x407098u: goto label_407098;
        case 0x40709cu: goto label_40709c;
        case 0x4070a0u: goto label_4070a0;
        case 0x4070a4u: goto label_4070a4;
        case 0x4070a8u: goto label_4070a8;
        case 0x4070acu: goto label_4070ac;
        case 0x4070b0u: goto label_4070b0;
        case 0x4070b4u: goto label_4070b4;
        case 0x4070b8u: goto label_4070b8;
        case 0x4070bcu: goto label_4070bc;
        case 0x4070c0u: goto label_4070c0;
        case 0x4070c4u: goto label_4070c4;
        case 0x4070c8u: goto label_4070c8;
        case 0x4070ccu: goto label_4070cc;
        case 0x4070d0u: goto label_4070d0;
        case 0x4070d4u: goto label_4070d4;
        case 0x4070d8u: goto label_4070d8;
        case 0x4070dcu: goto label_4070dc;
        case 0x4070e0u: goto label_4070e0;
        case 0x4070e4u: goto label_4070e4;
        case 0x4070e8u: goto label_4070e8;
        case 0x4070ecu: goto label_4070ec;
        case 0x4070f0u: goto label_4070f0;
        case 0x4070f4u: goto label_4070f4;
        case 0x4070f8u: goto label_4070f8;
        case 0x4070fcu: goto label_4070fc;
        case 0x407100u: goto label_407100;
        case 0x407104u: goto label_407104;
        case 0x407108u: goto label_407108;
        case 0x40710cu: goto label_40710c;
        case 0x407110u: goto label_407110;
        case 0x407114u: goto label_407114;
        case 0x407118u: goto label_407118;
        case 0x40711cu: goto label_40711c;
        case 0x407120u: goto label_407120;
        case 0x407124u: goto label_407124;
        case 0x407128u: goto label_407128;
        case 0x40712cu: goto label_40712c;
        case 0x407130u: goto label_407130;
        case 0x407134u: goto label_407134;
        case 0x407138u: goto label_407138;
        case 0x40713cu: goto label_40713c;
        case 0x407140u: goto label_407140;
        case 0x407144u: goto label_407144;
        case 0x407148u: goto label_407148;
        case 0x40714cu: goto label_40714c;
        case 0x407150u: goto label_407150;
        case 0x407154u: goto label_407154;
        case 0x407158u: goto label_407158;
        case 0x40715cu: goto label_40715c;
        case 0x407160u: goto label_407160;
        case 0x407164u: goto label_407164;
        case 0x407168u: goto label_407168;
        case 0x40716cu: goto label_40716c;
        case 0x407170u: goto label_407170;
        case 0x407174u: goto label_407174;
        case 0x407178u: goto label_407178;
        case 0x40717cu: goto label_40717c;
        case 0x407180u: goto label_407180;
        case 0x407184u: goto label_407184;
        case 0x407188u: goto label_407188;
        case 0x40718cu: goto label_40718c;
        case 0x407190u: goto label_407190;
        case 0x407194u: goto label_407194;
        case 0x407198u: goto label_407198;
        case 0x40719cu: goto label_40719c;
        case 0x4071a0u: goto label_4071a0;
        case 0x4071a4u: goto label_4071a4;
        case 0x4071a8u: goto label_4071a8;
        case 0x4071acu: goto label_4071ac;
        case 0x4071b0u: goto label_4071b0;
        case 0x4071b4u: goto label_4071b4;
        case 0x4071b8u: goto label_4071b8;
        case 0x4071bcu: goto label_4071bc;
        case 0x4071c0u: goto label_4071c0;
        case 0x4071c4u: goto label_4071c4;
        case 0x4071c8u: goto label_4071c8;
        case 0x4071ccu: goto label_4071cc;
        case 0x4071d0u: goto label_4071d0;
        case 0x4071d4u: goto label_4071d4;
        case 0x4071d8u: goto label_4071d8;
        case 0x4071dcu: goto label_4071dc;
        case 0x4071e0u: goto label_4071e0;
        case 0x4071e4u: goto label_4071e4;
        case 0x4071e8u: goto label_4071e8;
        case 0x4071ecu: goto label_4071ec;
        case 0x4071f0u: goto label_4071f0;
        case 0x4071f4u: goto label_4071f4;
        case 0x4071f8u: goto label_4071f8;
        case 0x4071fcu: goto label_4071fc;
        case 0x407200u: goto label_407200;
        case 0x407204u: goto label_407204;
        case 0x407208u: goto label_407208;
        case 0x40720cu: goto label_40720c;
        case 0x407210u: goto label_407210;
        case 0x407214u: goto label_407214;
        case 0x407218u: goto label_407218;
        case 0x40721cu: goto label_40721c;
        case 0x407220u: goto label_407220;
        case 0x407224u: goto label_407224;
        case 0x407228u: goto label_407228;
        case 0x40722cu: goto label_40722c;
        case 0x407230u: goto label_407230;
        case 0x407234u: goto label_407234;
        case 0x407238u: goto label_407238;
        case 0x40723cu: goto label_40723c;
        case 0x407240u: goto label_407240;
        case 0x407244u: goto label_407244;
        case 0x407248u: goto label_407248;
        case 0x40724cu: goto label_40724c;
        case 0x407250u: goto label_407250;
        case 0x407254u: goto label_407254;
        case 0x407258u: goto label_407258;
        case 0x40725cu: goto label_40725c;
        case 0x407260u: goto label_407260;
        case 0x407264u: goto label_407264;
        case 0x407268u: goto label_407268;
        case 0x40726cu: goto label_40726c;
        case 0x407270u: goto label_407270;
        case 0x407274u: goto label_407274;
        case 0x407278u: goto label_407278;
        case 0x40727cu: goto label_40727c;
        case 0x407280u: goto label_407280;
        case 0x407284u: goto label_407284;
        case 0x407288u: goto label_407288;
        case 0x40728cu: goto label_40728c;
        case 0x407290u: goto label_407290;
        case 0x407294u: goto label_407294;
        case 0x407298u: goto label_407298;
        case 0x40729cu: goto label_40729c;
        case 0x4072a0u: goto label_4072a0;
        case 0x4072a4u: goto label_4072a4;
        case 0x4072a8u: goto label_4072a8;
        case 0x4072acu: goto label_4072ac;
        case 0x4072b0u: goto label_4072b0;
        case 0x4072b4u: goto label_4072b4;
        case 0x4072b8u: goto label_4072b8;
        case 0x4072bcu: goto label_4072bc;
        case 0x4072c0u: goto label_4072c0;
        case 0x4072c4u: goto label_4072c4;
        case 0x4072c8u: goto label_4072c8;
        case 0x4072ccu: goto label_4072cc;
        case 0x4072d0u: goto label_4072d0;
        case 0x4072d4u: goto label_4072d4;
        case 0x4072d8u: goto label_4072d8;
        case 0x4072dcu: goto label_4072dc;
        case 0x4072e0u: goto label_4072e0;
        case 0x4072e4u: goto label_4072e4;
        case 0x4072e8u: goto label_4072e8;
        case 0x4072ecu: goto label_4072ec;
        case 0x4072f0u: goto label_4072f0;
        case 0x4072f4u: goto label_4072f4;
        case 0x4072f8u: goto label_4072f8;
        case 0x4072fcu: goto label_4072fc;
        case 0x407300u: goto label_407300;
        case 0x407304u: goto label_407304;
        case 0x407308u: goto label_407308;
        case 0x40730cu: goto label_40730c;
        case 0x407310u: goto label_407310;
        case 0x407314u: goto label_407314;
        case 0x407318u: goto label_407318;
        case 0x40731cu: goto label_40731c;
        case 0x407320u: goto label_407320;
        case 0x407324u: goto label_407324;
        case 0x407328u: goto label_407328;
        case 0x40732cu: goto label_40732c;
        case 0x407330u: goto label_407330;
        case 0x407334u: goto label_407334;
        case 0x407338u: goto label_407338;
        case 0x40733cu: goto label_40733c;
        case 0x407340u: goto label_407340;
        case 0x407344u: goto label_407344;
        case 0x407348u: goto label_407348;
        case 0x40734cu: goto label_40734c;
        case 0x407350u: goto label_407350;
        case 0x407354u: goto label_407354;
        case 0x407358u: goto label_407358;
        case 0x40735cu: goto label_40735c;
        case 0x407360u: goto label_407360;
        case 0x407364u: goto label_407364;
        case 0x407368u: goto label_407368;
        case 0x40736cu: goto label_40736c;
        case 0x407370u: goto label_407370;
        case 0x407374u: goto label_407374;
        case 0x407378u: goto label_407378;
        case 0x40737cu: goto label_40737c;
        case 0x407380u: goto label_407380;
        case 0x407384u: goto label_407384;
        case 0x407388u: goto label_407388;
        case 0x40738cu: goto label_40738c;
        case 0x407390u: goto label_407390;
        case 0x407394u: goto label_407394;
        case 0x407398u: goto label_407398;
        case 0x40739cu: goto label_40739c;
        case 0x4073a0u: goto label_4073a0;
        case 0x4073a4u: goto label_4073a4;
        case 0x4073a8u: goto label_4073a8;
        case 0x4073acu: goto label_4073ac;
        case 0x4073b0u: goto label_4073b0;
        case 0x4073b4u: goto label_4073b4;
        case 0x4073b8u: goto label_4073b8;
        case 0x4073bcu: goto label_4073bc;
        case 0x4073c0u: goto label_4073c0;
        case 0x4073c4u: goto label_4073c4;
        case 0x4073c8u: goto label_4073c8;
        case 0x4073ccu: goto label_4073cc;
        case 0x4073d0u: goto label_4073d0;
        case 0x4073d4u: goto label_4073d4;
        case 0x4073d8u: goto label_4073d8;
        case 0x4073dcu: goto label_4073dc;
        case 0x4073e0u: goto label_4073e0;
        case 0x4073e4u: goto label_4073e4;
        case 0x4073e8u: goto label_4073e8;
        case 0x4073ecu: goto label_4073ec;
        case 0x4073f0u: goto label_4073f0;
        case 0x4073f4u: goto label_4073f4;
        case 0x4073f8u: goto label_4073f8;
        case 0x4073fcu: goto label_4073fc;
        case 0x407400u: goto label_407400;
        case 0x407404u: goto label_407404;
        case 0x407408u: goto label_407408;
        case 0x40740cu: goto label_40740c;
        case 0x407410u: goto label_407410;
        case 0x407414u: goto label_407414;
        case 0x407418u: goto label_407418;
        case 0x40741cu: goto label_40741c;
        case 0x407420u: goto label_407420;
        case 0x407424u: goto label_407424;
        case 0x407428u: goto label_407428;
        case 0x40742cu: goto label_40742c;
        case 0x407430u: goto label_407430;
        case 0x407434u: goto label_407434;
        case 0x407438u: goto label_407438;
        case 0x40743cu: goto label_40743c;
        case 0x407440u: goto label_407440;
        case 0x407444u: goto label_407444;
        case 0x407448u: goto label_407448;
        case 0x40744cu: goto label_40744c;
        case 0x407450u: goto label_407450;
        case 0x407454u: goto label_407454;
        case 0x407458u: goto label_407458;
        case 0x40745cu: goto label_40745c;
        case 0x407460u: goto label_407460;
        case 0x407464u: goto label_407464;
        case 0x407468u: goto label_407468;
        case 0x40746cu: goto label_40746c;
        case 0x407470u: goto label_407470;
        case 0x407474u: goto label_407474;
        case 0x407478u: goto label_407478;
        case 0x40747cu: goto label_40747c;
        case 0x407480u: goto label_407480;
        case 0x407484u: goto label_407484;
        case 0x407488u: goto label_407488;
        case 0x40748cu: goto label_40748c;
        case 0x407490u: goto label_407490;
        case 0x407494u: goto label_407494;
        case 0x407498u: goto label_407498;
        case 0x40749cu: goto label_40749c;
        case 0x4074a0u: goto label_4074a0;
        case 0x4074a4u: goto label_4074a4;
        case 0x4074a8u: goto label_4074a8;
        case 0x4074acu: goto label_4074ac;
        case 0x4074b0u: goto label_4074b0;
        case 0x4074b4u: goto label_4074b4;
        case 0x4074b8u: goto label_4074b8;
        case 0x4074bcu: goto label_4074bc;
        case 0x4074c0u: goto label_4074c0;
        case 0x4074c4u: goto label_4074c4;
        case 0x4074c8u: goto label_4074c8;
        case 0x4074ccu: goto label_4074cc;
        case 0x4074d0u: goto label_4074d0;
        case 0x4074d4u: goto label_4074d4;
        case 0x4074d8u: goto label_4074d8;
        case 0x4074dcu: goto label_4074dc;
        case 0x4074e0u: goto label_4074e0;
        case 0x4074e4u: goto label_4074e4;
        case 0x4074e8u: goto label_4074e8;
        case 0x4074ecu: goto label_4074ec;
        case 0x4074f0u: goto label_4074f0;
        case 0x4074f4u: goto label_4074f4;
        case 0x4074f8u: goto label_4074f8;
        case 0x4074fcu: goto label_4074fc;
        default: break;
    }

    ctx->pc = 0x407040u;

label_407040:
    // 0x407040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x407040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_407044:
    // 0x407044: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_407048:
    // 0x407048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x407048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_40704c:
    // 0x40704c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_407050:
    // 0x407050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_407054:
    // 0x407054: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x407054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407058:
    // 0x407058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40705c:
    // 0x40705c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40705cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_407060:
    // 0x407060: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x407060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_407064:
    // 0x407064: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
label_407068:
    if (ctx->pc == 0x407068u) {
        ctx->pc = 0x407068u;
            // 0x407068: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40706Cu;
        goto label_40706c;
    }
    ctx->pc = 0x407064u;
    {
        const bool branch_taken_0x407064 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x407068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407064u;
            // 0x407068: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407064) {
            ctx->pc = 0x4070BCu;
            goto label_4070bc;
        }
    }
    ctx->pc = 0x40706Cu;
label_40706c:
    // 0x40706c: 0xc04e738  jal         func_139CE0
label_407070:
    if (ctx->pc == 0x407070u) {
        ctx->pc = 0x407070u;
            // 0x407070: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x407074u;
        goto label_407074;
    }
    ctx->pc = 0x40706Cu;
    SET_GPR_U32(ctx, 31, 0x407074u);
    ctx->pc = 0x407070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40706Cu;
            // 0x407070: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407074u; }
        if (ctx->pc != 0x407074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407074u; }
        if (ctx->pc != 0x407074u) { return; }
    }
    ctx->pc = 0x407074u;
label_407074:
    // 0x407074: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x407074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_407078:
    // 0x407078: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x407078u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_40707c:
    // 0x40707c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_407080:
    // 0x407080: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x407080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_407084:
    // 0x407084: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x407084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_407088:
    // 0x407088: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x407088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_40708c:
    // 0x40708c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x40708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_407090:
    // 0x407090: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x407090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_407094:
    // 0x407094: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_407098:
    if (ctx->pc == 0x407098u) {
        ctx->pc = 0x407098u;
            // 0x407098: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x40709Cu;
        goto label_40709c;
    }
    ctx->pc = 0x407094u;
    {
        const bool branch_taken_0x407094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407094u;
            // 0x407098: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407094) {
            ctx->pc = 0x4070B0u;
            goto label_4070b0;
        }
    }
    ctx->pc = 0x40709Cu;
label_40709c:
    // 0x40709c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x40709cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4070a0:
    // 0x4070a0: 0xc055754  jal         func_155D50
label_4070a4:
    if (ctx->pc == 0x4070A4u) {
        ctx->pc = 0x4070A4u;
            // 0x4070a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4070A8u;
        goto label_4070a8;
    }
    ctx->pc = 0x4070A0u;
    SET_GPR_U32(ctx, 31, 0x4070A8u);
    ctx->pc = 0x4070A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4070A0u;
            // 0x4070a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4070A8u; }
        if (ctx->pc != 0x4070A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4070A8u; }
        if (ctx->pc != 0x4070A8u) { return; }
    }
    ctx->pc = 0x4070A8u;
label_4070a8:
    // 0x4070a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4070ac:
    if (ctx->pc == 0x4070ACu) {
        ctx->pc = 0x4070ACu;
            // 0x4070ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4070B0u;
        goto label_4070b0;
    }
    ctx->pc = 0x4070A8u;
    {
        const bool branch_taken_0x4070a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4070ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4070A8u;
            // 0x4070ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4070a8) {
            ctx->pc = 0x4070C0u;
            goto label_4070c0;
        }
    }
    ctx->pc = 0x4070B0u;
label_4070b0:
    // 0x4070b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4070b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4070b4:
    // 0x4070b4: 0xc055990  jal         func_156640
label_4070b8:
    if (ctx->pc == 0x4070B8u) {
        ctx->pc = 0x4070B8u;
            // 0x4070b8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4070BCu;
        goto label_4070bc;
    }
    ctx->pc = 0x4070B4u;
    SET_GPR_U32(ctx, 31, 0x4070BCu);
    ctx->pc = 0x4070B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4070B4u;
            // 0x4070b8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4070BCu; }
        if (ctx->pc != 0x4070BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4070BCu; }
        if (ctx->pc != 0x4070BCu) { return; }
    }
    ctx->pc = 0x4070BCu;
label_4070bc:
    // 0x4070bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4070bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4070c0:
    // 0x4070c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4070c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4070c4:
    // 0x4070c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4070c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4070c8:
    // 0x4070c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4070c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4070cc:
    // 0x4070cc: 0x3e00008  jr          $ra
label_4070d0:
    if (ctx->pc == 0x4070D0u) {
        ctx->pc = 0x4070D0u;
            // 0x4070d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4070D4u;
        goto label_4070d4;
    }
    ctx->pc = 0x4070CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4070D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4070CCu;
            // 0x4070d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4070D4u;
label_4070d4:
    // 0x4070d4: 0x0  nop
    ctx->pc = 0x4070d4u;
    // NOP
label_4070d8:
    // 0x4070d8: 0x0  nop
    ctx->pc = 0x4070d8u;
    // NOP
label_4070dc:
    // 0x4070dc: 0x0  nop
    ctx->pc = 0x4070dcu;
    // NOP
label_4070e0:
    // 0x4070e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4070e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4070e4:
    // 0x4070e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4070e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4070e8:
    // 0x4070e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4070e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4070ec:
    // 0x4070ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4070ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4070f0:
    // 0x4070f0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4070f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4070f4:
    // 0x4070f4: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_4070f8:
    if (ctx->pc == 0x4070F8u) {
        ctx->pc = 0x4070F8u;
            // 0x4070f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4070FCu;
        goto label_4070fc;
    }
    ctx->pc = 0x4070F4u;
    {
        const bool branch_taken_0x4070f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4070F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4070F4u;
            // 0x4070f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4070f4) {
            ctx->pc = 0x407174u;
            goto label_407174;
        }
    }
    ctx->pc = 0x4070FCu;
label_4070fc:
    // 0x4070fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4070fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_407100:
    // 0x407100: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_407104:
    if (ctx->pc == 0x407104u) {
        ctx->pc = 0x407104u;
            // 0x407104: 0x8e070084  lw          $a3, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x407108u;
        goto label_407108;
    }
    ctx->pc = 0x407100u;
    {
        const bool branch_taken_0x407100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x407100) {
            ctx->pc = 0x407104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407100u;
            // 0x407104: 0x8e070084  lw          $a3, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40711Cu;
            goto label_40711c;
        }
    }
    ctx->pc = 0x407108u;
label_407108:
    // 0x407108: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x407108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40710c:
    // 0x40710c: 0x50a30062  beql        $a1, $v1, . + 4 + (0x62 << 2)
label_407110:
    if (ctx->pc == 0x407110u) {
        ctx->pc = 0x407110u;
            // 0x407110: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x407114u;
        goto label_407114;
    }
    ctx->pc = 0x40710Cu;
    {
        const bool branch_taken_0x40710c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40710c) {
            ctx->pc = 0x407110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40710Cu;
            // 0x407110: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407298u;
            goto label_407298;
        }
    }
    ctx->pc = 0x407114u;
label_407114:
    // 0x407114: 0x1000005f  b           . + 4 + (0x5F << 2)
label_407118:
    if (ctx->pc == 0x407118u) {
        ctx->pc = 0x40711Cu;
        goto label_40711c;
    }
    ctx->pc = 0x407114u;
    {
        const bool branch_taken_0x407114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407114) {
            ctx->pc = 0x407294u;
            goto label_407294;
        }
    }
    ctx->pc = 0x40711Cu;
label_40711c:
    // 0x40711c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x40711cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_407120:
    // 0x407120: 0x8c43fc30  lw          $v1, -0x3D0($v0)
    ctx->pc = 0x407120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966320)));
label_407124:
    // 0x407124: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x407124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_407128:
    // 0x407128: 0x602827  not         $a1, $v1
    ctx->pc = 0x407128u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_40712c:
    // 0x40712c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x40712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_407130:
    // 0x407130: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x407130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_407134:
    // 0x407134: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x407134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_407138:
    // 0x407138: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x407138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_40713c:
    // 0x40713c: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x40713cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
label_407140:
    // 0x407140: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x407140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_407144:
    // 0x407144: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x407144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_407148:
    // 0x407148: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x407148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_40714c:
    // 0x40714c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x40714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_407150:
    // 0x407150: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x407150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_407154:
    // 0x407154: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x407154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_407158:
    // 0x407158: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x407158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_40715c:
    // 0x40715c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x40715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_407160:
    // 0x407160: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x407160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_407164:
    // 0x407164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x407164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_407168:
    // 0x407168: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x407168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_40716c:
    // 0x40716c: 0x320f809  jalr        $t9
label_407170:
    if (ctx->pc == 0x407170u) {
        ctx->pc = 0x407174u;
        goto label_407174;
    }
    ctx->pc = 0x40716Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407174u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x407174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407174u; }
            if (ctx->pc != 0x407174u) { return; }
        }
        }
    }
    ctx->pc = 0x407174u;
label_407174:
    // 0x407174: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x407174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_407178:
    // 0x407178: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x407178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_40717c:
    // 0x40717c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x40717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_407180:
    // 0x407180: 0xc602009c  lwc1        $f2, 0x9C($s0)
    ctx->pc = 0x407180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_407184:
    // 0x407184: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x407184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_407188:
    // 0x407188: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x407188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_40718c:
    // 0x40718c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x40718cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_407190:
    // 0x407190: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x407190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_407194:
    // 0x407194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x407194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407198:
    // 0x407198: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x407198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40719c:
    // 0x40719c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4071a0:
    // 0x4071a0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4071a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4071a4:
    // 0x4071a4: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x4071a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_4071a8:
    // 0x4071a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4071a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4071ac:
    // 0x4071ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4071b0:
    if (ctx->pc == 0x4071B0u) {
        ctx->pc = 0x4071B0u;
            // 0x4071b0: 0xe601009c  swc1        $f1, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->pc = 0x4071B4u;
        goto label_4071b4;
    }
    ctx->pc = 0x4071ACu;
    {
        const bool branch_taken_0x4071ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4071B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4071ACu;
            // 0x4071b0: 0xe601009c  swc1        $f1, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4071ac) {
            ctx->pc = 0x4071B8u;
            goto label_4071b8;
        }
    }
    ctx->pc = 0x4071B4u;
label_4071b4:
    // 0x4071b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4071b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4071b8:
    // 0x4071b8: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4071bc:
    if (ctx->pc == 0x4071BCu) {
        ctx->pc = 0x4071BCu;
            // 0x4071bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4071C0u;
        goto label_4071c0;
    }
    ctx->pc = 0x4071B8u;
    {
        const bool branch_taken_0x4071b8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4071b8) {
            ctx->pc = 0x4071BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4071B8u;
            // 0x4071bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4071CCu;
            goto label_4071cc;
        }
    }
    ctx->pc = 0x4071C0u;
label_4071c0:
    // 0x4071c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4071c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4071c4:
    // 0x4071c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4071c8:
    if (ctx->pc == 0x4071C8u) {
        ctx->pc = 0x4071C8u;
            // 0x4071c8: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4071CCu;
        goto label_4071cc;
    }
    ctx->pc = 0x4071C4u;
    {
        const bool branch_taken_0x4071c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4071C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4071C4u;
            // 0x4071c8: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4071c4) {
            ctx->pc = 0x4071E4u;
            goto label_4071e4;
        }
    }
    ctx->pc = 0x4071CCu;
label_4071cc:
    // 0x4071cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4071ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4071d0:
    // 0x4071d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4071d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4071d4:
    // 0x4071d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4071d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4071d8:
    // 0x4071d8: 0x0  nop
    ctx->pc = 0x4071d8u;
    // NOP
label_4071dc:
    // 0x4071dc: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x4071dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4071e0:
    // 0x4071e0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4071e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_4071e4:
    // 0x4071e4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4071e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4071e8:
    // 0x4071e8: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x4071e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_4071ec:
    // 0x4071ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4071ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4071f0:
    // 0x4071f0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4071f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4071f4:
    // 0x4071f4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x4071f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4071f8:
    // 0x4071f8: 0x0  nop
    ctx->pc = 0x4071f8u;
    // NOP
label_4071fc:
    // 0x4071fc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4071fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_407200:
    // 0x407200: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x407200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_407204:
    // 0x407204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x407204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407208:
    // 0x407208: 0x0  nop
    ctx->pc = 0x407208u;
    // NOP
label_40720c:
    // 0x40720c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40720cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_407210:
    // 0x407210: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_407214:
    if (ctx->pc == 0x407214u) {
        ctx->pc = 0x407214u;
            // 0x407214: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = 0x407218u;
        goto label_407218;
    }
    ctx->pc = 0x407210u;
    {
        const bool branch_taken_0x407210 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x407214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407210u;
            // 0x407214: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x407210) {
            ctx->pc = 0x407228u;
            goto label_407228;
        }
    }
    ctx->pc = 0x407218u;
label_407218:
    // 0x407218: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x407218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_40721c:
    // 0x40721c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x40721cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_407220:
    // 0x407220: 0x10000007  b           . + 4 + (0x7 << 2)
label_407224:
    if (ctx->pc == 0x407224u) {
        ctx->pc = 0x407228u;
        goto label_407228;
    }
    ctx->pc = 0x407220u;
    {
        const bool branch_taken_0x407220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407220) {
            ctx->pc = 0x407240u;
            goto label_407240;
        }
    }
    ctx->pc = 0x407228u;
label_407228:
    // 0x407228: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x407228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_40722c:
    // 0x40722c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x40722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_407230:
    // 0x407230: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x407230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_407234:
    // 0x407234: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x407234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_407238:
    // 0x407238: 0x0  nop
    ctx->pc = 0x407238u;
    // NOP
label_40723c:
    // 0x40723c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x40723cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_407240:
    // 0x407240: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_407244:
    if (ctx->pc == 0x407244u) {
        ctx->pc = 0x407244u;
            // 0x407244: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x407248u;
        goto label_407248;
    }
    ctx->pc = 0x407240u;
    {
        const bool branch_taken_0x407240 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x407240) {
            ctx->pc = 0x407244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407240u;
            // 0x407244: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407254u;
            goto label_407254;
        }
    }
    ctx->pc = 0x407248u;
label_407248:
    // 0x407248: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x407248u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40724c:
    // 0x40724c: 0x10000007  b           . + 4 + (0x7 << 2)
label_407250:
    if (ctx->pc == 0x407250u) {
        ctx->pc = 0x407250u;
            // 0x407250: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x407254u;
        goto label_407254;
    }
    ctx->pc = 0x40724Cu;
    {
        const bool branch_taken_0x40724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40724Cu;
            // 0x407250: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40724c) {
            ctx->pc = 0x40726Cu;
            goto label_40726c;
        }
    }
    ctx->pc = 0x407254u;
label_407254:
    // 0x407254: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x407254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_407258:
    // 0x407258: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x407258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_40725c:
    // 0x40725c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40725cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407260:
    // 0x407260: 0x0  nop
    ctx->pc = 0x407260u;
    // NOP
label_407264:
    // 0x407264: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x407264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_407268:
    // 0x407268: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x407268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40726c:
    // 0x40726c: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x40726cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
label_407270:
    // 0x407270: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x407270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_407274:
    // 0x407274: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x407274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407278:
    // 0x407278: 0x0  nop
    ctx->pc = 0x407278u;
    // NOP
label_40727c:
    // 0x40727c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40727cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_407280:
    // 0x407280: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x407280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
label_407284:
    // 0x407284: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x407284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407288:
    // 0x407288: 0x0  nop
    ctx->pc = 0x407288u;
    // NOP
label_40728c:
    // 0x40728c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40728cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_407290:
    // 0x407290: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x407290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_407294:
    // 0x407294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_407298:
    // 0x407298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40729c:
    // 0x40729c: 0x3e00008  jr          $ra
label_4072a0:
    if (ctx->pc == 0x4072A0u) {
        ctx->pc = 0x4072A0u;
            // 0x4072a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4072A4u;
        goto label_4072a4;
    }
    ctx->pc = 0x40729Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4072A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40729Cu;
            // 0x4072a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4072A4u;
label_4072a4:
    // 0x4072a4: 0x0  nop
    ctx->pc = 0x4072a4u;
    // NOP
label_4072a8:
    // 0x4072a8: 0x0  nop
    ctx->pc = 0x4072a8u;
    // NOP
label_4072ac:
    // 0x4072ac: 0x0  nop
    ctx->pc = 0x4072acu;
    // NOP
label_4072b0:
    // 0x4072b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4072b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4072b4:
    // 0x4072b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4072b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4072b8:
    // 0x4072b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4072b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4072bc:
    // 0x4072bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4072bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4072c0:
    // 0x4072c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4072c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4072c4:
    // 0x4072c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4072c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4072c8:
    // 0x4072c8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4072c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4072cc:
    // 0x4072cc: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_4072d0:
    if (ctx->pc == 0x4072D0u) {
        ctx->pc = 0x4072D0u;
            // 0x4072d0: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x4072D4u;
        goto label_4072d4;
    }
    ctx->pc = 0x4072CCu;
    {
        const bool branch_taken_0x4072cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4072D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4072CCu;
            // 0x4072d0: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4072cc) {
            ctx->pc = 0x40741Cu;
            goto label_40741c;
        }
    }
    ctx->pc = 0x4072D4u;
label_4072d4:
    // 0x4072d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4072d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4072d8:
    // 0x4072d8: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x4072d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_4072dc:
    // 0x4072dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4072dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4072e0:
    // 0x4072e0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4072e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4072e4:
    // 0x4072e4: 0x320f809  jalr        $t9
label_4072e8:
    if (ctx->pc == 0x4072E8u) {
        ctx->pc = 0x4072ECu;
        goto label_4072ec;
    }
    ctx->pc = 0x4072E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4072ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4072ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4072ECu; }
            if (ctx->pc != 0x4072ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4072ECu;
label_4072ec:
    // 0x4072ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4072ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4072f0:
    // 0x4072f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4072f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4072f4:
    // 0x4072f4: 0xc075128  jal         func_1D44A0
label_4072f8:
    if (ctx->pc == 0x4072F8u) {
        ctx->pc = 0x4072F8u;
            // 0x4072f8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4072FCu;
        goto label_4072fc;
    }
    ctx->pc = 0x4072F4u;
    SET_GPR_U32(ctx, 31, 0x4072FCu);
    ctx->pc = 0x4072F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4072F4u;
            // 0x4072f8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4072FCu; }
        if (ctx->pc != 0x4072FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4072FCu; }
        if (ctx->pc != 0x4072FCu) { return; }
    }
    ctx->pc = 0x4072FCu;
label_4072fc:
    // 0x4072fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407300:
    // 0x407300: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_407304:
    // 0x407304: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x407304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_407308:
    // 0x407308: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x407308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_40730c:
    // 0x40730c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x40730cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_407310:
    // 0x407310: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_407314:
    if (ctx->pc == 0x407314u) {
        ctx->pc = 0x407314u;
            // 0x407314: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x407318u;
        goto label_407318;
    }
    ctx->pc = 0x407310u;
    {
        const bool branch_taken_0x407310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x407310) {
            ctx->pc = 0x407314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407310u;
            // 0x407314: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407324u;
            goto label_407324;
        }
    }
    ctx->pc = 0x407318u;
label_407318:
    // 0x407318: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40731c:
    // 0x40731c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x40731cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_407320:
    // 0x407320: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x407320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407324:
    // 0x407324: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_407328:
    // 0x407328: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x407328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_40732c:
    // 0x40732c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x40732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_407330:
    // 0x407330: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x407330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_407334:
    // 0x407334: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_407338:
    if (ctx->pc == 0x407338u) {
        ctx->pc = 0x407338u;
            // 0x407338: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x40733Cu;
        goto label_40733c;
    }
    ctx->pc = 0x407334u;
    {
        const bool branch_taken_0x407334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x407334) {
            ctx->pc = 0x407338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407334u;
            // 0x407338: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407348u;
            goto label_407348;
        }
    }
    ctx->pc = 0x40733Cu;
label_40733c:
    // 0x40733c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40733cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_407340:
    // 0x407340: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x407340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_407344:
    // 0x407344: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x407344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407348:
    // 0x407348: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40734c:
    // 0x40734c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x40734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_407350:
    // 0x407350: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x407350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_407354:
    // 0x407354: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x407354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_407358:
    // 0x407358: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_40735c:
    if (ctx->pc == 0x40735Cu) {
        ctx->pc = 0x40735Cu;
            // 0x40735c: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x407360u;
        goto label_407360;
    }
    ctx->pc = 0x407358u;
    {
        const bool branch_taken_0x407358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x407358) {
            ctx->pc = 0x40735Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407358u;
            // 0x40735c: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40736Cu;
            goto label_40736c;
        }
    }
    ctx->pc = 0x407360u;
label_407360:
    // 0x407360: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_407364:
    // 0x407364: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x407364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_407368:
    // 0x407368: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x407368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_40736c:
    // 0x40736c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x40736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_407370:
    // 0x407370: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_407374:
    if (ctx->pc == 0x407374u) {
        ctx->pc = 0x407374u;
            // 0x407374: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x407378u;
        goto label_407378;
    }
    ctx->pc = 0x407370u;
    {
        const bool branch_taken_0x407370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x407370) {
            ctx->pc = 0x407374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407370u;
            // 0x407374: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407398u;
            goto label_407398;
        }
    }
    ctx->pc = 0x407378u;
label_407378:
    // 0x407378: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x407378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_40737c:
    // 0x40737c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x40737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_407380:
    // 0x407380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407384:
    // 0x407384: 0xc0751b8  jal         func_1D46E0
label_407388:
    if (ctx->pc == 0x407388u) {
        ctx->pc = 0x407388u;
            // 0x407388: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x40738Cu;
        goto label_40738c;
    }
    ctx->pc = 0x407384u;
    SET_GPR_U32(ctx, 31, 0x40738Cu);
    ctx->pc = 0x407388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407384u;
            // 0x407388: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40738Cu; }
        if (ctx->pc != 0x40738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40738Cu; }
        if (ctx->pc != 0x40738Cu) { return; }
    }
    ctx->pc = 0x40738Cu;
label_40738c:
    // 0x40738c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x40738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407390:
    // 0x407390: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x407390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_407394:
    // 0x407394: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x407394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407398:
    // 0x407398: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40739c:
    // 0x40739c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x40739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4073a0:
    // 0x4073a0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4073a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4073a4:
    // 0x4073a4: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4073a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4073a8:
    // 0x4073a8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4073a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4073ac:
    // 0x4073ac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4073b0:
    if (ctx->pc == 0x4073B0u) {
        ctx->pc = 0x4073B0u;
            // 0x4073b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4073B4u;
        goto label_4073b4;
    }
    ctx->pc = 0x4073ACu;
    {
        const bool branch_taken_0x4073ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4073ac) {
            ctx->pc = 0x4073B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4073ACu;
            // 0x4073b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4073C0u;
            goto label_4073c0;
        }
    }
    ctx->pc = 0x4073B4u;
label_4073b4:
    // 0x4073b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4073b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4073b8:
    // 0x4073b8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4073b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4073bc:
    // 0x4073bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4073bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4073c0:
    // 0x4073c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4073c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4073c4:
    // 0x4073c4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4073c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4073c8:
    // 0x4073c8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4073c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4073cc:
    // 0x4073cc: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4073ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4073d0:
    // 0x4073d0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4073d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4073d4:
    // 0x4073d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4073d8:
    if (ctx->pc == 0x4073D8u) {
        ctx->pc = 0x4073DCu;
        goto label_4073dc;
    }
    ctx->pc = 0x4073D4u;
    {
        const bool branch_taken_0x4073d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4073d4) {
            ctx->pc = 0x4073E4u;
            goto label_4073e4;
        }
    }
    ctx->pc = 0x4073DCu;
label_4073dc:
    // 0x4073dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4073dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4073e0:
    // 0x4073e0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4073e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4073e4:
    // 0x4073e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4073e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4073e8:
    // 0x4073e8: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4073e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4073ec:
    // 0x4073ec: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x4073ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4073f0:
    // 0x4073f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4073f4:
    if (ctx->pc == 0x4073F4u) {
        ctx->pc = 0x4073F8u;
        goto label_4073f8;
    }
    ctx->pc = 0x4073F0u;
    {
        const bool branch_taken_0x4073f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4073f0) {
            ctx->pc = 0x407400u;
            goto label_407400;
        }
    }
    ctx->pc = 0x4073F8u;
label_4073f8:
    // 0x4073f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4073f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4073fc:
    // 0x4073fc: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x4073fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_407400:
    // 0x407400: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_407404:
    // 0x407404: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x407404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_407408:
    // 0x407408: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x407408u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_40740c:
    // 0x40740c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_407410:
    if (ctx->pc == 0x407410u) {
        ctx->pc = 0x407410u;
            // 0x407410: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x407414u;
        goto label_407414;
    }
    ctx->pc = 0x40740Cu;
    {
        const bool branch_taken_0x40740c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40740c) {
            ctx->pc = 0x407410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40740Cu;
            // 0x407410: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407420u;
            goto label_407420;
        }
    }
    ctx->pc = 0x407414u;
label_407414:
    // 0x407414: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_407418:
    // 0x407418: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x407418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_40741c:
    // 0x40741c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40741cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_407420:
    // 0x407420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x407420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_407424:
    // 0x407424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x407424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407428:
    // 0x407428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40742c:
    // 0x40742c: 0x3e00008  jr          $ra
label_407430:
    if (ctx->pc == 0x407430u) {
        ctx->pc = 0x407430u;
            // 0x407430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x407434u;
        goto label_407434;
    }
    ctx->pc = 0x40742Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40742Cu;
            // 0x407430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407434u;
label_407434:
    // 0x407434: 0x0  nop
    ctx->pc = 0x407434u;
    // NOP
label_407438:
    // 0x407438: 0x0  nop
    ctx->pc = 0x407438u;
    // NOP
label_40743c:
    // 0x40743c: 0x0  nop
    ctx->pc = 0x40743cu;
    // NOP
label_407440:
    // 0x407440: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x407440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_407444:
    // 0x407444: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_407448:
    if (ctx->pc == 0x407448u) {
        ctx->pc = 0x40744Cu;
        goto label_40744c;
    }
    ctx->pc = 0x407444u;
    {
        const bool branch_taken_0x407444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x407444) {
            ctx->pc = 0x407470u;
            goto label_407470;
        }
    }
    ctx->pc = 0x40744Cu;
label_40744c:
    // 0x40744c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40744cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407450:
    // 0x407450: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x407450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_407454:
    // 0x407454: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x407454u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_407458:
    // 0x407458: 0x0  nop
    ctx->pc = 0x407458u;
    // NOP
label_40745c:
    // 0x40745c: 0x0  nop
    ctx->pc = 0x40745cu;
    // NOP
label_407460:
    // 0x407460: 0x0  nop
    ctx->pc = 0x407460u;
    // NOP
label_407464:
    // 0x407464: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_407468:
    if (ctx->pc == 0x407468u) {
        ctx->pc = 0x40746Cu;
        goto label_40746c;
    }
    ctx->pc = 0x407464u;
    {
        const bool branch_taken_0x407464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x407464) {
            ctx->pc = 0x407450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407450;
        }
    }
    ctx->pc = 0x40746Cu;
label_40746c:
    // 0x40746c: 0x0  nop
    ctx->pc = 0x40746cu;
    // NOP
label_407470:
    // 0x407470: 0x3e00008  jr          $ra
label_407474:
    if (ctx->pc == 0x407474u) {
        ctx->pc = 0x407478u;
        goto label_407478;
    }
    ctx->pc = 0x407470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407478u;
label_407478:
    // 0x407478: 0x0  nop
    ctx->pc = 0x407478u;
    // NOP
label_40747c:
    // 0x40747c: 0x0  nop
    ctx->pc = 0x40747cu;
    // NOP
label_407480:
    // 0x407480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x407480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_407484:
    // 0x407484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x407484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_407488:
    // 0x407488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40748c:
    // 0x40748c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407490:
    // 0x407490: 0x90900040  lbu         $s0, 0x40($a0)
    ctx->pc = 0x407490u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
label_407494:
    // 0x407494: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x407494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_407498:
    // 0x407498: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x407498u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_40749c:
    // 0x40749c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_4074a0:
    if (ctx->pc == 0x4074A0u) {
        ctx->pc = 0x4074A0u;
            // 0x4074a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4074A4u;
        goto label_4074a4;
    }
    ctx->pc = 0x40749Cu;
    {
        const bool branch_taken_0x40749c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4074A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40749Cu;
            // 0x4074a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40749c) {
            ctx->pc = 0x4074ACu;
            goto label_4074ac;
        }
    }
    ctx->pc = 0x4074A4u;
label_4074a4:
    // 0x4074a4: 0xc0d875c  jal         func_361D70
label_4074a8:
    if (ctx->pc == 0x4074A8u) {
        ctx->pc = 0x4074A8u;
            // 0x4074a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4074ACu;
        goto label_4074ac;
    }
    ctx->pc = 0x4074A4u;
    SET_GPR_U32(ctx, 31, 0x4074ACu);
    ctx->pc = 0x4074A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4074A4u;
            // 0x4074a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D70u;
    if (runtime->hasFunction(0x361D70u)) {
        auto targetFn = runtime->lookupFunction(0x361D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4074ACu; }
        if (ctx->pc != 0x4074ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D70_0x361d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4074ACu; }
        if (ctx->pc != 0x4074ACu) { return; }
    }
    ctx->pc = 0x4074ACu;
label_4074ac:
    // 0x4074ac: 0xa2300070  sb          $s0, 0x70($s1)
    ctx->pc = 0x4074acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 16));
label_4074b0:
    // 0x4074b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4074b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4074b4:
    // 0x4074b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4074b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4074b8:
    // 0x4074b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4074b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4074bc:
    // 0x4074bc: 0x3e00008  jr          $ra
label_4074c0:
    if (ctx->pc == 0x4074C0u) {
        ctx->pc = 0x4074C0u;
            // 0x4074c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4074C4u;
        goto label_4074c4;
    }
    ctx->pc = 0x4074BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4074C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4074BCu;
            // 0x4074c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4074C4u;
label_4074c4:
    // 0x4074c4: 0x0  nop
    ctx->pc = 0x4074c4u;
    // NOP
label_4074c8:
    // 0x4074c8: 0x0  nop
    ctx->pc = 0x4074c8u;
    // NOP
label_4074cc:
    // 0x4074cc: 0x0  nop
    ctx->pc = 0x4074ccu;
    // NOP
label_4074d0:
    // 0x4074d0: 0x3e00008  jr          $ra
label_4074d4:
    if (ctx->pc == 0x4074D4u) {
        ctx->pc = 0x4074D4u;
            // 0x4074d4: 0x24023aac  addiu       $v0, $zero, 0x3AAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15020));
        ctx->pc = 0x4074D8u;
        goto label_4074d8;
    }
    ctx->pc = 0x4074D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4074D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4074D0u;
            // 0x4074d4: 0x24023aac  addiu       $v0, $zero, 0x3AAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4074D8u;
label_4074d8:
    // 0x4074d8: 0x0  nop
    ctx->pc = 0x4074d8u;
    // NOP
label_4074dc:
    // 0x4074dc: 0x0  nop
    ctx->pc = 0x4074dcu;
    // NOP
label_4074e0:
    // 0x4074e0: 0x8101ad4  j           func_406B50
label_4074e4:
    if (ctx->pc == 0x4074E4u) {
        ctx->pc = 0x4074E4u;
            // 0x4074e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4074E8u;
        goto label_4074e8;
    }
    ctx->pc = 0x4074E0u;
    ctx->pc = 0x4074E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4074E0u;
            // 0x4074e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x406B50u;
    {
        auto targetFn = runtime->lookupFunction(0x406B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4074E8u;
label_4074e8:
    // 0x4074e8: 0x0  nop
    ctx->pc = 0x4074e8u;
    // NOP
label_4074ec:
    // 0x4074ec: 0x0  nop
    ctx->pc = 0x4074ecu;
    // NOP
label_4074f0:
    // 0x4074f0: 0x3e00008  jr          $ra
label_4074f4:
    if (ctx->pc == 0x4074F4u) {
        ctx->pc = 0x4074F4u;
            // 0x4074f4: 0x24023aa2  addiu       $v0, $zero, 0x3AA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15010));
        ctx->pc = 0x4074F8u;
        goto label_4074f8;
    }
    ctx->pc = 0x4074F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4074F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4074F0u;
            // 0x4074f4: 0x24023aa2  addiu       $v0, $zero, 0x3AA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4074F8u;
label_4074f8:
    // 0x4074f8: 0x0  nop
    ctx->pc = 0x4074f8u;
    // NOP
label_4074fc:
    // 0x4074fc: 0x0  nop
    ctx->pc = 0x4074fcu;
    // NOP
}
