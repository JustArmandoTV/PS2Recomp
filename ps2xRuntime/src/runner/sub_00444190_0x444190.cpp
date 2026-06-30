#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00444190
// Address: 0x444190 - 0x4446f0
void sub_00444190_0x444190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444190_0x444190");
#endif

    switch (ctx->pc) {
        case 0x444190u: goto label_444190;
        case 0x444194u: goto label_444194;
        case 0x444198u: goto label_444198;
        case 0x44419cu: goto label_44419c;
        case 0x4441a0u: goto label_4441a0;
        case 0x4441a4u: goto label_4441a4;
        case 0x4441a8u: goto label_4441a8;
        case 0x4441acu: goto label_4441ac;
        case 0x4441b0u: goto label_4441b0;
        case 0x4441b4u: goto label_4441b4;
        case 0x4441b8u: goto label_4441b8;
        case 0x4441bcu: goto label_4441bc;
        case 0x4441c0u: goto label_4441c0;
        case 0x4441c4u: goto label_4441c4;
        case 0x4441c8u: goto label_4441c8;
        case 0x4441ccu: goto label_4441cc;
        case 0x4441d0u: goto label_4441d0;
        case 0x4441d4u: goto label_4441d4;
        case 0x4441d8u: goto label_4441d8;
        case 0x4441dcu: goto label_4441dc;
        case 0x4441e0u: goto label_4441e0;
        case 0x4441e4u: goto label_4441e4;
        case 0x4441e8u: goto label_4441e8;
        case 0x4441ecu: goto label_4441ec;
        case 0x4441f0u: goto label_4441f0;
        case 0x4441f4u: goto label_4441f4;
        case 0x4441f8u: goto label_4441f8;
        case 0x4441fcu: goto label_4441fc;
        case 0x444200u: goto label_444200;
        case 0x444204u: goto label_444204;
        case 0x444208u: goto label_444208;
        case 0x44420cu: goto label_44420c;
        case 0x444210u: goto label_444210;
        case 0x444214u: goto label_444214;
        case 0x444218u: goto label_444218;
        case 0x44421cu: goto label_44421c;
        case 0x444220u: goto label_444220;
        case 0x444224u: goto label_444224;
        case 0x444228u: goto label_444228;
        case 0x44422cu: goto label_44422c;
        case 0x444230u: goto label_444230;
        case 0x444234u: goto label_444234;
        case 0x444238u: goto label_444238;
        case 0x44423cu: goto label_44423c;
        case 0x444240u: goto label_444240;
        case 0x444244u: goto label_444244;
        case 0x444248u: goto label_444248;
        case 0x44424cu: goto label_44424c;
        case 0x444250u: goto label_444250;
        case 0x444254u: goto label_444254;
        case 0x444258u: goto label_444258;
        case 0x44425cu: goto label_44425c;
        case 0x444260u: goto label_444260;
        case 0x444264u: goto label_444264;
        case 0x444268u: goto label_444268;
        case 0x44426cu: goto label_44426c;
        case 0x444270u: goto label_444270;
        case 0x444274u: goto label_444274;
        case 0x444278u: goto label_444278;
        case 0x44427cu: goto label_44427c;
        case 0x444280u: goto label_444280;
        case 0x444284u: goto label_444284;
        case 0x444288u: goto label_444288;
        case 0x44428cu: goto label_44428c;
        case 0x444290u: goto label_444290;
        case 0x444294u: goto label_444294;
        case 0x444298u: goto label_444298;
        case 0x44429cu: goto label_44429c;
        case 0x4442a0u: goto label_4442a0;
        case 0x4442a4u: goto label_4442a4;
        case 0x4442a8u: goto label_4442a8;
        case 0x4442acu: goto label_4442ac;
        case 0x4442b0u: goto label_4442b0;
        case 0x4442b4u: goto label_4442b4;
        case 0x4442b8u: goto label_4442b8;
        case 0x4442bcu: goto label_4442bc;
        case 0x4442c0u: goto label_4442c0;
        case 0x4442c4u: goto label_4442c4;
        case 0x4442c8u: goto label_4442c8;
        case 0x4442ccu: goto label_4442cc;
        case 0x4442d0u: goto label_4442d0;
        case 0x4442d4u: goto label_4442d4;
        case 0x4442d8u: goto label_4442d8;
        case 0x4442dcu: goto label_4442dc;
        case 0x4442e0u: goto label_4442e0;
        case 0x4442e4u: goto label_4442e4;
        case 0x4442e8u: goto label_4442e8;
        case 0x4442ecu: goto label_4442ec;
        case 0x4442f0u: goto label_4442f0;
        case 0x4442f4u: goto label_4442f4;
        case 0x4442f8u: goto label_4442f8;
        case 0x4442fcu: goto label_4442fc;
        case 0x444300u: goto label_444300;
        case 0x444304u: goto label_444304;
        case 0x444308u: goto label_444308;
        case 0x44430cu: goto label_44430c;
        case 0x444310u: goto label_444310;
        case 0x444314u: goto label_444314;
        case 0x444318u: goto label_444318;
        case 0x44431cu: goto label_44431c;
        case 0x444320u: goto label_444320;
        case 0x444324u: goto label_444324;
        case 0x444328u: goto label_444328;
        case 0x44432cu: goto label_44432c;
        case 0x444330u: goto label_444330;
        case 0x444334u: goto label_444334;
        case 0x444338u: goto label_444338;
        case 0x44433cu: goto label_44433c;
        case 0x444340u: goto label_444340;
        case 0x444344u: goto label_444344;
        case 0x444348u: goto label_444348;
        case 0x44434cu: goto label_44434c;
        case 0x444350u: goto label_444350;
        case 0x444354u: goto label_444354;
        case 0x444358u: goto label_444358;
        case 0x44435cu: goto label_44435c;
        case 0x444360u: goto label_444360;
        case 0x444364u: goto label_444364;
        case 0x444368u: goto label_444368;
        case 0x44436cu: goto label_44436c;
        case 0x444370u: goto label_444370;
        case 0x444374u: goto label_444374;
        case 0x444378u: goto label_444378;
        case 0x44437cu: goto label_44437c;
        case 0x444380u: goto label_444380;
        case 0x444384u: goto label_444384;
        case 0x444388u: goto label_444388;
        case 0x44438cu: goto label_44438c;
        case 0x444390u: goto label_444390;
        case 0x444394u: goto label_444394;
        case 0x444398u: goto label_444398;
        case 0x44439cu: goto label_44439c;
        case 0x4443a0u: goto label_4443a0;
        case 0x4443a4u: goto label_4443a4;
        case 0x4443a8u: goto label_4443a8;
        case 0x4443acu: goto label_4443ac;
        case 0x4443b0u: goto label_4443b0;
        case 0x4443b4u: goto label_4443b4;
        case 0x4443b8u: goto label_4443b8;
        case 0x4443bcu: goto label_4443bc;
        case 0x4443c0u: goto label_4443c0;
        case 0x4443c4u: goto label_4443c4;
        case 0x4443c8u: goto label_4443c8;
        case 0x4443ccu: goto label_4443cc;
        case 0x4443d0u: goto label_4443d0;
        case 0x4443d4u: goto label_4443d4;
        case 0x4443d8u: goto label_4443d8;
        case 0x4443dcu: goto label_4443dc;
        case 0x4443e0u: goto label_4443e0;
        case 0x4443e4u: goto label_4443e4;
        case 0x4443e8u: goto label_4443e8;
        case 0x4443ecu: goto label_4443ec;
        case 0x4443f0u: goto label_4443f0;
        case 0x4443f4u: goto label_4443f4;
        case 0x4443f8u: goto label_4443f8;
        case 0x4443fcu: goto label_4443fc;
        case 0x444400u: goto label_444400;
        case 0x444404u: goto label_444404;
        case 0x444408u: goto label_444408;
        case 0x44440cu: goto label_44440c;
        case 0x444410u: goto label_444410;
        case 0x444414u: goto label_444414;
        case 0x444418u: goto label_444418;
        case 0x44441cu: goto label_44441c;
        case 0x444420u: goto label_444420;
        case 0x444424u: goto label_444424;
        case 0x444428u: goto label_444428;
        case 0x44442cu: goto label_44442c;
        case 0x444430u: goto label_444430;
        case 0x444434u: goto label_444434;
        case 0x444438u: goto label_444438;
        case 0x44443cu: goto label_44443c;
        case 0x444440u: goto label_444440;
        case 0x444444u: goto label_444444;
        case 0x444448u: goto label_444448;
        case 0x44444cu: goto label_44444c;
        case 0x444450u: goto label_444450;
        case 0x444454u: goto label_444454;
        case 0x444458u: goto label_444458;
        case 0x44445cu: goto label_44445c;
        case 0x444460u: goto label_444460;
        case 0x444464u: goto label_444464;
        case 0x444468u: goto label_444468;
        case 0x44446cu: goto label_44446c;
        case 0x444470u: goto label_444470;
        case 0x444474u: goto label_444474;
        case 0x444478u: goto label_444478;
        case 0x44447cu: goto label_44447c;
        case 0x444480u: goto label_444480;
        case 0x444484u: goto label_444484;
        case 0x444488u: goto label_444488;
        case 0x44448cu: goto label_44448c;
        case 0x444490u: goto label_444490;
        case 0x444494u: goto label_444494;
        case 0x444498u: goto label_444498;
        case 0x44449cu: goto label_44449c;
        case 0x4444a0u: goto label_4444a0;
        case 0x4444a4u: goto label_4444a4;
        case 0x4444a8u: goto label_4444a8;
        case 0x4444acu: goto label_4444ac;
        case 0x4444b0u: goto label_4444b0;
        case 0x4444b4u: goto label_4444b4;
        case 0x4444b8u: goto label_4444b8;
        case 0x4444bcu: goto label_4444bc;
        case 0x4444c0u: goto label_4444c0;
        case 0x4444c4u: goto label_4444c4;
        case 0x4444c8u: goto label_4444c8;
        case 0x4444ccu: goto label_4444cc;
        case 0x4444d0u: goto label_4444d0;
        case 0x4444d4u: goto label_4444d4;
        case 0x4444d8u: goto label_4444d8;
        case 0x4444dcu: goto label_4444dc;
        case 0x4444e0u: goto label_4444e0;
        case 0x4444e4u: goto label_4444e4;
        case 0x4444e8u: goto label_4444e8;
        case 0x4444ecu: goto label_4444ec;
        case 0x4444f0u: goto label_4444f0;
        case 0x4444f4u: goto label_4444f4;
        case 0x4444f8u: goto label_4444f8;
        case 0x4444fcu: goto label_4444fc;
        case 0x444500u: goto label_444500;
        case 0x444504u: goto label_444504;
        case 0x444508u: goto label_444508;
        case 0x44450cu: goto label_44450c;
        case 0x444510u: goto label_444510;
        case 0x444514u: goto label_444514;
        case 0x444518u: goto label_444518;
        case 0x44451cu: goto label_44451c;
        case 0x444520u: goto label_444520;
        case 0x444524u: goto label_444524;
        case 0x444528u: goto label_444528;
        case 0x44452cu: goto label_44452c;
        case 0x444530u: goto label_444530;
        case 0x444534u: goto label_444534;
        case 0x444538u: goto label_444538;
        case 0x44453cu: goto label_44453c;
        case 0x444540u: goto label_444540;
        case 0x444544u: goto label_444544;
        case 0x444548u: goto label_444548;
        case 0x44454cu: goto label_44454c;
        case 0x444550u: goto label_444550;
        case 0x444554u: goto label_444554;
        case 0x444558u: goto label_444558;
        case 0x44455cu: goto label_44455c;
        case 0x444560u: goto label_444560;
        case 0x444564u: goto label_444564;
        case 0x444568u: goto label_444568;
        case 0x44456cu: goto label_44456c;
        case 0x444570u: goto label_444570;
        case 0x444574u: goto label_444574;
        case 0x444578u: goto label_444578;
        case 0x44457cu: goto label_44457c;
        case 0x444580u: goto label_444580;
        case 0x444584u: goto label_444584;
        case 0x444588u: goto label_444588;
        case 0x44458cu: goto label_44458c;
        case 0x444590u: goto label_444590;
        case 0x444594u: goto label_444594;
        case 0x444598u: goto label_444598;
        case 0x44459cu: goto label_44459c;
        case 0x4445a0u: goto label_4445a0;
        case 0x4445a4u: goto label_4445a4;
        case 0x4445a8u: goto label_4445a8;
        case 0x4445acu: goto label_4445ac;
        case 0x4445b0u: goto label_4445b0;
        case 0x4445b4u: goto label_4445b4;
        case 0x4445b8u: goto label_4445b8;
        case 0x4445bcu: goto label_4445bc;
        case 0x4445c0u: goto label_4445c0;
        case 0x4445c4u: goto label_4445c4;
        case 0x4445c8u: goto label_4445c8;
        case 0x4445ccu: goto label_4445cc;
        case 0x4445d0u: goto label_4445d0;
        case 0x4445d4u: goto label_4445d4;
        case 0x4445d8u: goto label_4445d8;
        case 0x4445dcu: goto label_4445dc;
        case 0x4445e0u: goto label_4445e0;
        case 0x4445e4u: goto label_4445e4;
        case 0x4445e8u: goto label_4445e8;
        case 0x4445ecu: goto label_4445ec;
        case 0x4445f0u: goto label_4445f0;
        case 0x4445f4u: goto label_4445f4;
        case 0x4445f8u: goto label_4445f8;
        case 0x4445fcu: goto label_4445fc;
        case 0x444600u: goto label_444600;
        case 0x444604u: goto label_444604;
        case 0x444608u: goto label_444608;
        case 0x44460cu: goto label_44460c;
        case 0x444610u: goto label_444610;
        case 0x444614u: goto label_444614;
        case 0x444618u: goto label_444618;
        case 0x44461cu: goto label_44461c;
        case 0x444620u: goto label_444620;
        case 0x444624u: goto label_444624;
        case 0x444628u: goto label_444628;
        case 0x44462cu: goto label_44462c;
        case 0x444630u: goto label_444630;
        case 0x444634u: goto label_444634;
        case 0x444638u: goto label_444638;
        case 0x44463cu: goto label_44463c;
        case 0x444640u: goto label_444640;
        case 0x444644u: goto label_444644;
        case 0x444648u: goto label_444648;
        case 0x44464cu: goto label_44464c;
        case 0x444650u: goto label_444650;
        case 0x444654u: goto label_444654;
        case 0x444658u: goto label_444658;
        case 0x44465cu: goto label_44465c;
        case 0x444660u: goto label_444660;
        case 0x444664u: goto label_444664;
        case 0x444668u: goto label_444668;
        case 0x44466cu: goto label_44466c;
        case 0x444670u: goto label_444670;
        case 0x444674u: goto label_444674;
        case 0x444678u: goto label_444678;
        case 0x44467cu: goto label_44467c;
        case 0x444680u: goto label_444680;
        case 0x444684u: goto label_444684;
        case 0x444688u: goto label_444688;
        case 0x44468cu: goto label_44468c;
        case 0x444690u: goto label_444690;
        case 0x444694u: goto label_444694;
        case 0x444698u: goto label_444698;
        case 0x44469cu: goto label_44469c;
        case 0x4446a0u: goto label_4446a0;
        case 0x4446a4u: goto label_4446a4;
        case 0x4446a8u: goto label_4446a8;
        case 0x4446acu: goto label_4446ac;
        case 0x4446b0u: goto label_4446b0;
        case 0x4446b4u: goto label_4446b4;
        case 0x4446b8u: goto label_4446b8;
        case 0x4446bcu: goto label_4446bc;
        case 0x4446c0u: goto label_4446c0;
        case 0x4446c4u: goto label_4446c4;
        case 0x4446c8u: goto label_4446c8;
        case 0x4446ccu: goto label_4446cc;
        case 0x4446d0u: goto label_4446d0;
        case 0x4446d4u: goto label_4446d4;
        case 0x4446d8u: goto label_4446d8;
        case 0x4446dcu: goto label_4446dc;
        case 0x4446e0u: goto label_4446e0;
        case 0x4446e4u: goto label_4446e4;
        case 0x4446e8u: goto label_4446e8;
        case 0x4446ecu: goto label_4446ec;
        default: break;
    }

    ctx->pc = 0x444190u;

label_444190:
    // 0x444190: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x444190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_444194:
    // 0x444194: 0x8c637528  lw          $v1, 0x7528($v1)
    ctx->pc = 0x444194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29992)));
label_444198:
    // 0x444198: 0xc4800298  lwc1        $f0, 0x298($a0)
    ctx->pc = 0x444198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44419c:
    // 0x44419c: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x44419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4441a0:
    // 0x4441a0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4441a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4441a4:
    // 0x4441a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4441a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4441a8:
    // 0x4441a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4441ac:
    if (ctx->pc == 0x4441ACu) {
        ctx->pc = 0x4441ACu;
            // 0x4441ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4441B0u;
        goto label_4441b0;
    }
    ctx->pc = 0x4441A8u;
    {
        const bool branch_taken_0x4441a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4441ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4441A8u;
            // 0x4441ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441a8) {
            ctx->pc = 0x4441B4u;
            goto label_4441b4;
        }
    }
    ctx->pc = 0x4441B0u;
label_4441b0:
    // 0x4441b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4441b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4441b4:
    // 0x4441b4: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4441b8:
    if (ctx->pc == 0x4441B8u) {
        ctx->pc = 0x4441B8u;
            // 0x4441b8: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4441BCu;
        goto label_4441bc;
    }
    ctx->pc = 0x4441B4u;
    {
        const bool branch_taken_0x4441b4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4441b4) {
            ctx->pc = 0x4441B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4441B4u;
            // 0x4441b8: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4441C8u;
            goto label_4441c8;
        }
    }
    ctx->pc = 0x4441BCu;
label_4441bc:
    // 0x4441bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4441bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4441c0:
    // 0x4441c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4441c4:
    if (ctx->pc == 0x4441C4u) {
        ctx->pc = 0x4441C4u;
            // 0x4441c4: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4441C8u;
        goto label_4441c8;
    }
    ctx->pc = 0x4441C0u;
    {
        const bool branch_taken_0x4441c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4441C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4441C0u;
            // 0x4441c4: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441c0) {
            ctx->pc = 0x4441E0u;
            goto label_4441e0;
        }
    }
    ctx->pc = 0x4441C8u;
label_4441c8:
    // 0x4441c8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x4441c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4441cc:
    // 0x4441cc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4441ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4441d0:
    // 0x4441d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4441d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4441d4:
    // 0x4441d4: 0x0  nop
    ctx->pc = 0x4441d4u;
    // NOP
label_4441d8:
    // 0x4441d8: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x4441d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4441dc:
    // 0x4441dc: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4441dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_4441e0:
    // 0x4441e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4441e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4441e4:
    // 0x4441e4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4441e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4441e8:
    // 0x4441e8: 0xc4810298  lwc1        $f1, 0x298($a0)
    ctx->pc = 0x4441e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4441ec:
    // 0x4441ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4441ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4441f0:
    // 0x4441f0: 0xc4820294  lwc1        $f2, 0x294($a0)
    ctx->pc = 0x4441f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4441f4:
    // 0x4441f4: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x4441f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4441f8:
    // 0x4441f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4441f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4441fc:
    // 0x4441fc: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x4441fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_444200:
    // 0x444200: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x444200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_444204:
    // 0x444204: 0x3e00008  jr          $ra
label_444208:
    if (ctx->pc == 0x444208u) {
        ctx->pc = 0x444208u;
            // 0x444208: 0xe4800298  swc1        $f0, 0x298($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
        ctx->pc = 0x44420Cu;
        goto label_44420c;
    }
    ctx->pc = 0x444204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444204u;
            // 0x444208: 0xe4800298  swc1        $f0, 0x298($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44420Cu;
label_44420c:
    // 0x44420c: 0x0  nop
    ctx->pc = 0x44420cu;
    // NOP
label_444210:
    // 0x444210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x444210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_444214:
    // 0x444214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_444218:
    // 0x444218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x444218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44421c:
    // 0x44421c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44421cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_444220:
    // 0x444220: 0x8c84029c  lw          $a0, 0x29C($a0)
    ctx->pc = 0x444220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
label_444224:
    // 0x444224: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_444228:
    if (ctx->pc == 0x444228u) {
        ctx->pc = 0x444228u;
            // 0x444228: 0xae00029c  sw          $zero, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
        ctx->pc = 0x44422Cu;
        goto label_44422c;
    }
    ctx->pc = 0x444224u;
    {
        const bool branch_taken_0x444224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x444224) {
            ctx->pc = 0x444228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444224u;
            // 0x444228: 0xae00029c  sw          $zero, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x444240u;
            goto label_444240;
        }
    }
    ctx->pc = 0x44422Cu;
label_44422c:
    // 0x44422c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44422cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_444230:
    // 0x444230: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x444230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_444234:
    // 0x444234: 0x320f809  jalr        $t9
label_444238:
    if (ctx->pc == 0x444238u) {
        ctx->pc = 0x444238u;
            // 0x444238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44423Cu;
        goto label_44423c;
    }
    ctx->pc = 0x444234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44423Cu);
        ctx->pc = 0x444238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444234u;
            // 0x444238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44423Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44423Cu; }
            if (ctx->pc != 0x44423Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44423Cu;
label_44423c:
    // 0x44423c: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x44423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
label_444240:
    // 0x444240: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x444240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_444244:
    // 0x444244: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_444248:
    if (ctx->pc == 0x444248u) {
        ctx->pc = 0x444248u;
            // 0x444248: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x44424Cu;
        goto label_44424c;
    }
    ctx->pc = 0x444244u;
    {
        const bool branch_taken_0x444244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x444244) {
            ctx->pc = 0x444248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444244u;
            // 0x444248: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x444260u;
            goto label_444260;
        }
    }
    ctx->pc = 0x44424Cu;
label_44424c:
    // 0x44424c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x44424cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_444250:
    // 0x444250: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x444250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_444254:
    // 0x444254: 0x320f809  jalr        $t9
label_444258:
    if (ctx->pc == 0x444258u) {
        ctx->pc = 0x444258u;
            // 0x444258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44425Cu;
        goto label_44425c;
    }
    ctx->pc = 0x444254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44425Cu);
        ctx->pc = 0x444258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444254u;
            // 0x444258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44425Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44425Cu; }
            if (ctx->pc != 0x44425Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44425Cu;
label_44425c:
    // 0x44425c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x44425cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_444260:
    // 0x444260: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x444260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_444264:
    // 0x444264: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_444268:
    if (ctx->pc == 0x444268u) {
        ctx->pc = 0x444268u;
            // 0x444268: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44426Cu;
        goto label_44426c;
    }
    ctx->pc = 0x444264u;
    {
        const bool branch_taken_0x444264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x444264) {
            ctx->pc = 0x444268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444264u;
            // 0x444268: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x444280u;
            goto label_444280;
        }
    }
    ctx->pc = 0x44426Cu;
label_44426c:
    // 0x44426c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44426cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_444270:
    // 0x444270: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x444270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_444274:
    // 0x444274: 0x320f809  jalr        $t9
label_444278:
    if (ctx->pc == 0x444278u) {
        ctx->pc = 0x444278u;
            // 0x444278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44427Cu;
        goto label_44427c;
    }
    ctx->pc = 0x444274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44427Cu);
        ctx->pc = 0x444278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444274u;
            // 0x444278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44427Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44427Cu; }
            if (ctx->pc != 0x44427Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44427Cu;
label_44427c:
    // 0x44427c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x44427cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_444280:
    // 0x444280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_444284:
    // 0x444284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x444284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_444288:
    // 0x444288: 0x3e00008  jr          $ra
label_44428c:
    if (ctx->pc == 0x44428Cu) {
        ctx->pc = 0x44428Cu;
            // 0x44428c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x444290u;
        goto label_444290;
    }
    ctx->pc = 0x444288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444288u;
            // 0x44428c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x444290u;
label_444290:
    // 0x444290: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x444290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_444294:
    // 0x444294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x444294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_444298:
    // 0x444298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x444298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44429c:
    // 0x44429c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44429cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4442a0:
    // 0x4442a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4442a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4442a4:
    // 0x4442a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4442a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4442a8:
    // 0x4442a8: 0xc0892d0  jal         func_224B40
label_4442ac:
    if (ctx->pc == 0x4442ACu) {
        ctx->pc = 0x4442ACu;
            // 0x4442ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4442B0u;
        goto label_4442b0;
    }
    ctx->pc = 0x4442A8u;
    SET_GPR_U32(ctx, 31, 0x4442B0u);
    ctx->pc = 0x4442ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4442A8u;
            // 0x4442ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442B0u; }
        if (ctx->pc != 0x4442B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442B0u; }
        if (ctx->pc != 0x4442B0u) { return; }
    }
    ctx->pc = 0x4442B0u;
label_4442b0:
    // 0x4442b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4442b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4442b4:
    // 0x4442b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4442b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4442b8:
    // 0x4442b8: 0x8c427528  lw          $v0, 0x7528($v0)
    ctx->pc = 0x4442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29992)));
label_4442bc:
    // 0x4442bc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4442bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4442c0:
    // 0x4442c0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4442c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4442c4:
    // 0x4442c4: 0xc0b6e68  jal         func_2DB9A0
label_4442c8:
    if (ctx->pc == 0x4442C8u) {
        ctx->pc = 0x4442C8u;
            // 0x4442c8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4442CCu;
        goto label_4442cc;
    }
    ctx->pc = 0x4442C4u;
    SET_GPR_U32(ctx, 31, 0x4442CCu);
    ctx->pc = 0x4442C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4442C4u;
            // 0x4442c8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442CCu; }
        if (ctx->pc != 0x4442CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442CCu; }
        if (ctx->pc != 0x4442CCu) { return; }
    }
    ctx->pc = 0x4442CCu;
label_4442cc:
    // 0x4442cc: 0xc0b6dac  jal         func_2DB6B0
label_4442d0:
    if (ctx->pc == 0x4442D0u) {
        ctx->pc = 0x4442D0u;
            // 0x4442d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4442D4u;
        goto label_4442d4;
    }
    ctx->pc = 0x4442CCu;
    SET_GPR_U32(ctx, 31, 0x4442D4u);
    ctx->pc = 0x4442D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4442CCu;
            // 0x4442d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442D4u; }
        if (ctx->pc != 0x4442D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442D4u; }
        if (ctx->pc != 0x4442D4u) { return; }
    }
    ctx->pc = 0x4442D4u;
label_4442d4:
    // 0x4442d4: 0xc0cac94  jal         func_32B250
label_4442d8:
    if (ctx->pc == 0x4442D8u) {
        ctx->pc = 0x4442D8u;
            // 0x4442d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4442DCu;
        goto label_4442dc;
    }
    ctx->pc = 0x4442D4u;
    SET_GPR_U32(ctx, 31, 0x4442DCu);
    ctx->pc = 0x4442D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4442D4u;
            // 0x4442d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442DCu; }
        if (ctx->pc != 0x4442DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442DCu; }
        if (ctx->pc != 0x4442DCu) { return; }
    }
    ctx->pc = 0x4442DCu;
label_4442dc:
    // 0x4442dc: 0xc0cac84  jal         func_32B210
label_4442e0:
    if (ctx->pc == 0x4442E0u) {
        ctx->pc = 0x4442E0u;
            // 0x4442e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4442E4u;
        goto label_4442e4;
    }
    ctx->pc = 0x4442DCu;
    SET_GPR_U32(ctx, 31, 0x4442E4u);
    ctx->pc = 0x4442E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4442DCu;
            // 0x4442e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442E4u; }
        if (ctx->pc != 0x4442E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442E4u; }
        if (ctx->pc != 0x4442E4u) { return; }
    }
    ctx->pc = 0x4442E4u;
label_4442e4:
    // 0x4442e4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4442e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4442e8:
    // 0x4442e8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x4442e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4442ec:
    // 0x4442ec: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x4442ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4442f0:
    // 0x4442f0: 0xc0a562c  jal         func_2958B0
label_4442f4:
    if (ctx->pc == 0x4442F4u) {
        ctx->pc = 0x4442F4u;
            // 0x4442f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4442F8u;
        goto label_4442f8;
    }
    ctx->pc = 0x4442F0u;
    SET_GPR_U32(ctx, 31, 0x4442F8u);
    ctx->pc = 0x4442F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4442F0u;
            // 0x4442f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442F8u; }
        if (ctx->pc != 0x4442F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4442F8u; }
        if (ctx->pc != 0x4442F8u) { return; }
    }
    ctx->pc = 0x4442F8u;
label_4442f8:
    // 0x4442f8: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x4442f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_4442fc:
    // 0x4442fc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4442fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_444300:
    // 0x444300: 0xc6470018  lwc1        $f7, 0x18($s2)
    ctx->pc = 0x444300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_444304:
    // 0x444304: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x444304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_444308:
    // 0x444308: 0xc6460014  lwc1        $f6, 0x14($s2)
    ctx->pc = 0x444308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_44430c:
    // 0x44430c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44430cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_444310:
    // 0x444310: 0xc6450010  lwc1        $f5, 0x10($s2)
    ctx->pc = 0x444310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_444314:
    // 0x444314: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x444314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_444318:
    // 0x444318: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x444318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44431c:
    // 0x44431c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_444320:
    // 0x444320: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x444320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444324:
    // 0x444324: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x444324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_444328:
    // 0x444328: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x444328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44432c:
    // 0x44432c: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x44432cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
label_444330:
    // 0x444330: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x444330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_444334:
    // 0x444334: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x444334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_444338:
    // 0x444338: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x444338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_44433c:
    // 0x44433c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x44433cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_444340:
    // 0x444340: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x444340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_444344:
    // 0x444344: 0xa3a70170  sb          $a3, 0x170($sp)
    ctx->pc = 0x444344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 7));
label_444348:
    // 0x444348: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x444348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44434c:
    // 0x44434c: 0xa3a30172  sb          $v1, 0x172($sp)
    ctx->pc = 0x44434cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 3));
label_444350:
    // 0x444350: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x444350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444354:
    // 0x444354: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x444354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_444358:
    // 0x444358: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x444358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44435c:
    // 0x44435c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x44435cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_444360:
    // 0x444360: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x444360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_444364:
    // 0x444364: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x444364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_444368:
    // 0x444368: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x444368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_44436c:
    // 0x44436c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x44436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_444370:
    // 0x444370: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x444370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444374:
    // 0x444374: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x444374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_444378:
    // 0x444378: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x444378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_44437c:
    // 0x44437c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x44437cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_444380:
    // 0x444380: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x444380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_444384:
    // 0x444384: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x444384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_444388:
    // 0x444388: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x444388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44438c:
    // 0x44438c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x44438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_444390:
    // 0x444390: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x444390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_444394:
    // 0x444394: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x444394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_444398:
    // 0x444398: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x444398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_44439c:
    // 0x44439c: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x44439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4443a0:
    // 0x4443a0: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x4443a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4443a4:
    // 0x4443a4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4443a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4443a8:
    // 0x4443a8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4443a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4443ac:
    // 0x4443ac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4443acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4443b0:
    // 0x4443b0: 0xe7a500d0  swc1        $f5, 0xD0($sp)
    ctx->pc = 0x4443b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4443b4:
    // 0x4443b4: 0xe7a600d4  swc1        $f6, 0xD4($sp)
    ctx->pc = 0x4443b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4443b8:
    // 0x4443b8: 0xe7a700d8  swc1        $f7, 0xD8($sp)
    ctx->pc = 0x4443b8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4443bc:
    // 0x4443bc: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x4443bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4443c0:
    // 0x4443c0: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x4443c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4443c4:
    // 0x4443c4: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4443c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4443c8:
    // 0x4443c8: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4443c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4443cc:
    // 0x4443cc: 0xc0a7a88  jal         func_29EA20
label_4443d0:
    if (ctx->pc == 0x4443D0u) {
        ctx->pc = 0x4443D0u;
            // 0x4443d0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4443D4u;
        goto label_4443d4;
    }
    ctx->pc = 0x4443CCu;
    SET_GPR_U32(ctx, 31, 0x4443D4u);
    ctx->pc = 0x4443D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4443CCu;
            // 0x4443d0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4443D4u; }
        if (ctx->pc != 0x4443D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4443D4u; }
        if (ctx->pc != 0x4443D4u) { return; }
    }
    ctx->pc = 0x4443D4u;
label_4443d4:
    // 0x4443d4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4443d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4443d8:
    // 0x4443d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4443d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4443dc:
    // 0x4443dc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4443e0:
    if (ctx->pc == 0x4443E0u) {
        ctx->pc = 0x4443E0u;
            // 0x4443e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4443E4u;
        goto label_4443e4;
    }
    ctx->pc = 0x4443DCu;
    {
        const bool branch_taken_0x4443dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4443E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4443DCu;
            // 0x4443e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4443dc) {
            ctx->pc = 0x44442Cu;
            goto label_44442c;
        }
    }
    ctx->pc = 0x4443E4u;
label_4443e4:
    // 0x4443e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4443e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4443e8:
    // 0x4443e8: 0xc088ef4  jal         func_223BD0
label_4443ec:
    if (ctx->pc == 0x4443ECu) {
        ctx->pc = 0x4443ECu;
            // 0x4443ec: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4443F0u;
        goto label_4443f0;
    }
    ctx->pc = 0x4443E8u;
    SET_GPR_U32(ctx, 31, 0x4443F0u);
    ctx->pc = 0x4443ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4443E8u;
            // 0x4443ec: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4443F0u; }
        if (ctx->pc != 0x4443F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4443F0u; }
        if (ctx->pc != 0x4443F0u) { return; }
    }
    ctx->pc = 0x4443F0u;
label_4443f0:
    // 0x4443f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4443f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4443f4:
    // 0x4443f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4443f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4443f8:
    // 0x4443f8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4443f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4443fc:
    // 0x4443fc: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4443fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_444400:
    // 0x444400: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x444400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_444404:
    // 0x444404: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x444404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_444408:
    // 0x444408: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x444408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44440c:
    // 0x44440c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_444410:
    // 0x444410: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x444410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_444414:
    // 0x444414: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x444414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_444418:
    // 0x444418: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x444418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_44441c:
    // 0x44441c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_444420:
    // 0x444420: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x444420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_444424:
    // 0x444424: 0xc088b38  jal         func_222CE0
label_444428:
    if (ctx->pc == 0x444428u) {
        ctx->pc = 0x444428u;
            // 0x444428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44442Cu;
        goto label_44442c;
    }
    ctx->pc = 0x444424u;
    SET_GPR_U32(ctx, 31, 0x44442Cu);
    ctx->pc = 0x444428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444424u;
            // 0x444428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44442Cu; }
        if (ctx->pc != 0x44442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44442Cu; }
        if (ctx->pc != 0x44442Cu) { return; }
    }
    ctx->pc = 0x44442Cu;
label_44442c:
    // 0x44442c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444430:
    // 0x444430: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x444430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_444434:
    // 0x444434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x444434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_444438:
    // 0x444438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x444438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44443c:
    // 0x44443c: 0xc08914c  jal         func_224530
label_444440:
    if (ctx->pc == 0x444440u) {
        ctx->pc = 0x444440u;
            // 0x444440: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x444444u;
        goto label_444444;
    }
    ctx->pc = 0x44443Cu;
    SET_GPR_U32(ctx, 31, 0x444444u);
    ctx->pc = 0x444440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44443Cu;
            // 0x444440: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444444u; }
        if (ctx->pc != 0x444444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444444u; }
        if (ctx->pc != 0x444444u) { return; }
    }
    ctx->pc = 0x444444u;
label_444444:
    // 0x444444: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x444444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_444448:
    // 0x444448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44444c:
    // 0x44444c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x44444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444450:
    // 0x444450: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x444450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_444454:
    // 0x444454: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x444454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_444458:
    // 0x444458: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x444458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_44445c:
    // 0x44445c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x44445cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_444460:
    // 0x444460: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x444460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_444464:
    // 0x444464: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x444464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_444468:
    // 0x444468: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x444468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_44446c:
    // 0x44446c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x44446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_444470:
    // 0x444470: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x444470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_444474:
    // 0x444474: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x444474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_444478:
    // 0x444478: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x444478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44447c:
    // 0x44447c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x44447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_444480:
    // 0x444480: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x444480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_444484:
    // 0x444484: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x444484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_444488:
    // 0x444488: 0xc0892b0  jal         func_224AC0
label_44448c:
    if (ctx->pc == 0x44448Cu) {
        ctx->pc = 0x44448Cu;
            // 0x44448c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x444490u;
        goto label_444490;
    }
    ctx->pc = 0x444488u;
    SET_GPR_U32(ctx, 31, 0x444490u);
    ctx->pc = 0x44448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444488u;
            // 0x44448c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444490u; }
        if (ctx->pc != 0x444490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444490u; }
        if (ctx->pc != 0x444490u) { return; }
    }
    ctx->pc = 0x444490u;
label_444490:
    // 0x444490: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x444490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_444494:
    // 0x444494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444498:
    // 0x444498: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x444498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_44449c:
    // 0x44449c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x44449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4444a0:
    // 0x4444a0: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x4444a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_4444a4:
    // 0x4444a4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4444a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4444a8:
    // 0x4444a8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4444a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4444ac:
    // 0x4444ac: 0xc0891d8  jal         func_224760
label_4444b0:
    if (ctx->pc == 0x4444B0u) {
        ctx->pc = 0x4444B0u;
            // 0x4444b0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4444B4u;
        goto label_4444b4;
    }
    ctx->pc = 0x4444ACu;
    SET_GPR_U32(ctx, 31, 0x4444B4u);
    ctx->pc = 0x4444B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4444ACu;
            // 0x4444b0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4444B4u; }
        if (ctx->pc != 0x4444B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4444B4u; }
        if (ctx->pc != 0x4444B4u) { return; }
    }
    ctx->pc = 0x4444B4u;
label_4444b4:
    // 0x4444b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4444b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4444b8:
    // 0x4444b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4444b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4444bc:
    // 0x4444bc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4444bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4444c0:
    // 0x4444c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4444c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4444c4:
    // 0x4444c4: 0xc08c164  jal         func_230590
label_4444c8:
    if (ctx->pc == 0x4444C8u) {
        ctx->pc = 0x4444C8u;
            // 0x4444c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4444CCu;
        goto label_4444cc;
    }
    ctx->pc = 0x4444C4u;
    SET_GPR_U32(ctx, 31, 0x4444CCu);
    ctx->pc = 0x4444C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4444C4u;
            // 0x4444c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4444CCu; }
        if (ctx->pc != 0x4444CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4444CCu; }
        if (ctx->pc != 0x4444CCu) { return; }
    }
    ctx->pc = 0x4444CCu;
label_4444cc:
    // 0x4444cc: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x4444ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_4444d0:
    // 0x4444d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4444d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4444d4:
    // 0x4444d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4444d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4444d8:
    // 0x4444d8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4444d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4444dc:
    // 0x4444dc: 0xc0a7a88  jal         func_29EA20
label_4444e0:
    if (ctx->pc == 0x4444E0u) {
        ctx->pc = 0x4444E0u;
            // 0x4444e0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4444E4u;
        goto label_4444e4;
    }
    ctx->pc = 0x4444DCu;
    SET_GPR_U32(ctx, 31, 0x4444E4u);
    ctx->pc = 0x4444E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4444DCu;
            // 0x4444e0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4444E4u; }
        if (ctx->pc != 0x4444E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4444E4u; }
        if (ctx->pc != 0x4444E4u) { return; }
    }
    ctx->pc = 0x4444E4u;
label_4444e4:
    // 0x4444e4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4444e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4444e8:
    // 0x4444e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4444e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4444ec:
    // 0x4444ec: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4444f0:
    if (ctx->pc == 0x4444F0u) {
        ctx->pc = 0x4444F0u;
            // 0x4444f0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4444F4u;
        goto label_4444f4;
    }
    ctx->pc = 0x4444ECu;
    {
        const bool branch_taken_0x4444ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4444F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4444ECu;
            // 0x4444f0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4444ec) {
            ctx->pc = 0x444510u;
            goto label_444510;
        }
    }
    ctx->pc = 0x4444F4u;
label_4444f4:
    // 0x4444f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4444f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4444f8:
    // 0x4444f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4444f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4444fc:
    // 0x4444fc: 0xc0869d0  jal         func_21A740
label_444500:
    if (ctx->pc == 0x444500u) {
        ctx->pc = 0x444500u;
            // 0x444500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444504u;
        goto label_444504;
    }
    ctx->pc = 0x4444FCu;
    SET_GPR_U32(ctx, 31, 0x444504u);
    ctx->pc = 0x444500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4444FCu;
            // 0x444500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444504u; }
        if (ctx->pc != 0x444504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444504u; }
        if (ctx->pc != 0x444504u) { return; }
    }
    ctx->pc = 0x444504u;
label_444504:
    // 0x444504: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x444504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_444508:
    // 0x444508: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x444508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_44450c:
    // 0x44450c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44450cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_444510:
    // 0x444510: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x444510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_444514:
    // 0x444514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x444514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_444518:
    // 0x444518: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x444518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44451c:
    // 0x44451c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_444520:
    // 0x444520: 0xc08c650  jal         func_231940
label_444524:
    if (ctx->pc == 0x444524u) {
        ctx->pc = 0x444524u;
            // 0x444524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444528u;
        goto label_444528;
    }
    ctx->pc = 0x444520u;
    SET_GPR_U32(ctx, 31, 0x444528u);
    ctx->pc = 0x444524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444520u;
            // 0x444524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444528u; }
        if (ctx->pc != 0x444528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444528u; }
        if (ctx->pc != 0x444528u) { return; }
    }
    ctx->pc = 0x444528u;
label_444528:
    // 0x444528: 0xc040180  jal         func_100600
label_44452c:
    if (ctx->pc == 0x44452Cu) {
        ctx->pc = 0x44452Cu;
            // 0x44452c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x444530u;
        goto label_444530;
    }
    ctx->pc = 0x444528u;
    SET_GPR_U32(ctx, 31, 0x444530u);
    ctx->pc = 0x44452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444528u;
            // 0x44452c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444530u; }
        if (ctx->pc != 0x444530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444530u; }
        if (ctx->pc != 0x444530u) { return; }
    }
    ctx->pc = 0x444530u;
label_444530:
    // 0x444530: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_444534:
    if (ctx->pc == 0x444534u) {
        ctx->pc = 0x444534u;
            // 0x444534: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x444538u;
        goto label_444538;
    }
    ctx->pc = 0x444530u;
    {
        const bool branch_taken_0x444530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x444530) {
            ctx->pc = 0x444534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444530u;
            // 0x444534: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x444580u;
            goto label_444580;
        }
    }
    ctx->pc = 0x444538u;
label_444538:
    // 0x444538: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x444538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_44453c:
    // 0x44453c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x44453cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_444540:
    // 0x444540: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x444540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_444544:
    // 0x444544: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x444544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_444548:
    // 0x444548: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x444548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_44454c:
    // 0x44454c: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x44454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_444550:
    // 0x444550: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x444550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_444554:
    // 0x444554: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x444554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_444558:
    // 0x444558: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x444558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_44455c:
    // 0x44455c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x44455cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_444560:
    // 0x444560: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x444560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_444564:
    // 0x444564: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x444564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_444568:
    // 0x444568: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x444568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_44456c:
    // 0x44456c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x44456cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_444570:
    // 0x444570: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x444570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_444574:
    // 0x444574: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x444574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_444578:
    // 0x444578: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x444578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_44457c:
    // 0x44457c: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x44457cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_444580:
    // 0x444580: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x444580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_444584:
    // 0x444584: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x444584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_444588:
    // 0x444588: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x444588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44458c:
    // 0x44458c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x44458cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_444590:
    // 0x444590: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x444590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_444594:
    // 0x444594: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x444594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_444598:
    // 0x444598: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x444598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44459c:
    // 0x44459c: 0xc040180  jal         func_100600
label_4445a0:
    if (ctx->pc == 0x4445A0u) {
        ctx->pc = 0x4445A0u;
            // 0x4445a0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4445A4u;
        goto label_4445a4;
    }
    ctx->pc = 0x44459Cu;
    SET_GPR_U32(ctx, 31, 0x4445A4u);
    ctx->pc = 0x4445A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44459Cu;
            // 0x4445a0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4445A4u; }
        if (ctx->pc != 0x4445A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4445A4u; }
        if (ctx->pc != 0x4445A4u) { return; }
    }
    ctx->pc = 0x4445A4u;
label_4445a4:
    // 0x4445a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4445a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4445a8:
    // 0x4445a8: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4445ac:
    if (ctx->pc == 0x4445ACu) {
        ctx->pc = 0x4445ACu;
            // 0x4445ac: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4445B0u;
        goto label_4445b0;
    }
    ctx->pc = 0x4445A8u;
    {
        const bool branch_taken_0x4445a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4445a8) {
            ctx->pc = 0x4445ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4445A8u;
            // 0x4445ac: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4445E8u;
            goto label_4445e8;
        }
    }
    ctx->pc = 0x4445B0u;
label_4445b0:
    // 0x4445b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4445b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4445b4:
    // 0x4445b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4445b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4445b8:
    // 0x4445b8: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4445b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4445bc:
    // 0x4445bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x4445bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4445c0:
    // 0x4445c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4445c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4445c4:
    // 0x4445c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4445c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4445c8:
    // 0x4445c8: 0xc040138  jal         func_1004E0
label_4445cc:
    if (ctx->pc == 0x4445CCu) {
        ctx->pc = 0x4445CCu;
            // 0x4445cc: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4445D0u;
        goto label_4445d0;
    }
    ctx->pc = 0x4445C8u;
    SET_GPR_U32(ctx, 31, 0x4445D0u);
    ctx->pc = 0x4445CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4445C8u;
            // 0x4445cc: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4445D0u; }
        if (ctx->pc != 0x4445D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4445D0u; }
        if (ctx->pc != 0x4445D0u) { return; }
    }
    ctx->pc = 0x4445D0u;
label_4445d0:
    // 0x4445d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4445d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4445d4:
    // 0x4445d4: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4445d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4445d8:
    // 0x4445d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4445d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4445dc:
    // 0x4445dc: 0xc04a576  jal         func_1295D8
label_4445e0:
    if (ctx->pc == 0x4445E0u) {
        ctx->pc = 0x4445E0u;
            // 0x4445e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4445E4u;
        goto label_4445e4;
    }
    ctx->pc = 0x4445DCu;
    SET_GPR_U32(ctx, 31, 0x4445E4u);
    ctx->pc = 0x4445E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4445DCu;
            // 0x4445e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4445E4u; }
        if (ctx->pc != 0x4445E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4445E4u; }
        if (ctx->pc != 0x4445E4u) { return; }
    }
    ctx->pc = 0x4445E4u;
label_4445e4:
    // 0x4445e4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4445e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4445e8:
    // 0x4445e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4445e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4445ec:
    // 0x4445ec: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x4445ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4445f0:
    // 0x4445f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4445f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4445f4:
    // 0x4445f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4445f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4445f8:
    // 0x4445f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4445f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4445fc:
    // 0x4445fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4445fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_444600:
    // 0x444600: 0xae51029c  sw          $s1, 0x29C($s2)
    ctx->pc = 0x444600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 17));
label_444604:
    // 0x444604: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x444604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_444608:
    // 0x444608: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x444608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44460c:
    // 0x44460c: 0xc122cd8  jal         func_48B360
label_444610:
    if (ctx->pc == 0x444610u) {
        ctx->pc = 0x444610u;
            // 0x444610: 0x34460aae  ori         $a2, $v0, 0xAAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2734);
        ctx->pc = 0x444614u;
        goto label_444614;
    }
    ctx->pc = 0x44460Cu;
    SET_GPR_U32(ctx, 31, 0x444614u);
    ctx->pc = 0x444610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44460Cu;
            // 0x444610: 0x34460aae  ori         $a2, $v0, 0xAAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2734);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444614u; }
        if (ctx->pc != 0x444614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444614u; }
        if (ctx->pc != 0x444614u) { return; }
    }
    ctx->pc = 0x444614u;
label_444614:
    // 0x444614: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x444614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_444618:
    // 0x444618: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x444618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
label_44461c:
    // 0x44461c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x44461cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_444620:
    // 0x444620: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x444620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_444624:
    // 0x444624: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x444624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_444628:
    // 0x444628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x444628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44462c:
    // 0x44462c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x44462cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_444630:
    // 0x444630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x444630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_444634:
    // 0x444634: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x444634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_444638:
    // 0x444638: 0xc122cd8  jal         func_48B360
label_44463c:
    if (ctx->pc == 0x44463Cu) {
        ctx->pc = 0x44463Cu;
            // 0x44463c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444640u;
        goto label_444640;
    }
    ctx->pc = 0x444638u;
    SET_GPR_U32(ctx, 31, 0x444640u);
    ctx->pc = 0x44463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444638u;
            // 0x44463c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444640u; }
        if (ctx->pc != 0x444640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444640u; }
        if (ctx->pc != 0x444640u) { return; }
    }
    ctx->pc = 0x444640u;
label_444640:
    // 0x444640: 0x92050c6a  lbu         $a1, 0xC6A($s0)
    ctx->pc = 0x444640u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_444644:
    // 0x444644: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x444644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_444648:
    // 0x444648: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x444648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_44464c:
    // 0x44464c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44464cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_444650:
    // 0x444650: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x444650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_444654:
    // 0x444654: 0x24c6d450  addiu       $a2, $a2, -0x2BB0
    ctx->pc = 0x444654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956112));
label_444658:
    // 0x444658: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x444658u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_44465c:
    // 0x44465c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_444660:
    // 0x444660: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x444660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_444664:
    // 0x444664: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x444664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_444668:
    // 0x444668: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x444668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44466c:
    // 0x44466c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x44466cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_444670:
    // 0x444670: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x444670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_444674:
    // 0x444674: 0xc122cd8  jal         func_48B360
label_444678:
    if (ctx->pc == 0x444678u) {
        ctx->pc = 0x444678u;
            // 0x444678: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44467Cu;
        goto label_44467c;
    }
    ctx->pc = 0x444674u;
    SET_GPR_U32(ctx, 31, 0x44467Cu);
    ctx->pc = 0x444678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444674u;
            // 0x444678: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44467Cu; }
        if (ctx->pc != 0x44467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44467Cu; }
        if (ctx->pc != 0x44467Cu) { return; }
    }
    ctx->pc = 0x44467Cu;
label_44467c:
    // 0x44467c: 0x92050c6a  lbu         $a1, 0xC6A($s0)
    ctx->pc = 0x44467cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_444680:
    // 0x444680: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x444680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_444684:
    // 0x444684: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x444684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_444688:
    // 0x444688: 0x24c6d458  addiu       $a2, $a2, -0x2BA8
    ctx->pc = 0x444688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956120));
label_44468c:
    // 0x44468c: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x44468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_444690:
    // 0x444690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x444690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_444694:
    // 0x444694: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x444694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_444698:
    // 0x444698: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x444698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_44469c:
    // 0x44469c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x44469cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4446a0:
    // 0x4446a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4446a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4446a4:
    // 0x4446a4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4446a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4446a8:
    // 0x4446a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4446a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4446ac:
    // 0x4446ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4446acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4446b0:
    // 0x4446b0: 0xc122cd8  jal         func_48B360
label_4446b4:
    if (ctx->pc == 0x4446B4u) {
        ctx->pc = 0x4446B4u;
            // 0x4446b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4446B8u;
        goto label_4446b8;
    }
    ctx->pc = 0x4446B0u;
    SET_GPR_U32(ctx, 31, 0x4446B8u);
    ctx->pc = 0x4446B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4446B0u;
            // 0x4446b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4446B8u; }
        if (ctx->pc != 0x4446B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4446B8u; }
        if (ctx->pc != 0x4446B8u) { return; }
    }
    ctx->pc = 0x4446B8u;
label_4446b8:
    // 0x4446b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4446b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4446bc:
    // 0x4446bc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4446bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4446c0:
    // 0x4446c0: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x4446c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
label_4446c4:
    // 0x4446c4: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x4446c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
label_4446c8:
    // 0x4446c8: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x4446c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_4446cc:
    // 0x4446cc: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x4446ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_4446d0:
    // 0x4446d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4446d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4446d4:
    // 0x4446d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4446d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4446d8:
    // 0x4446d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4446d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4446dc:
    // 0x4446dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4446dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4446e0:
    // 0x4446e0: 0x3e00008  jr          $ra
label_4446e4:
    if (ctx->pc == 0x4446E4u) {
        ctx->pc = 0x4446E4u;
            // 0x4446e4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4446E8u;
        goto label_4446e8;
    }
    ctx->pc = 0x4446E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4446E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4446E0u;
            // 0x4446e4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4446E8u;
label_4446e8:
    // 0x4446e8: 0x0  nop
    ctx->pc = 0x4446e8u;
    // NOP
label_4446ec:
    // 0x4446ec: 0x0  nop
    ctx->pc = 0x4446ecu;
    // NOP
}
