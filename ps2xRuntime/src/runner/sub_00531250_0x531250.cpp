#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00531250
// Address: 0x531250 - 0x531760
void sub_00531250_0x531250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00531250_0x531250");
#endif

    switch (ctx->pc) {
        case 0x531250u: goto label_531250;
        case 0x531254u: goto label_531254;
        case 0x531258u: goto label_531258;
        case 0x53125cu: goto label_53125c;
        case 0x531260u: goto label_531260;
        case 0x531264u: goto label_531264;
        case 0x531268u: goto label_531268;
        case 0x53126cu: goto label_53126c;
        case 0x531270u: goto label_531270;
        case 0x531274u: goto label_531274;
        case 0x531278u: goto label_531278;
        case 0x53127cu: goto label_53127c;
        case 0x531280u: goto label_531280;
        case 0x531284u: goto label_531284;
        case 0x531288u: goto label_531288;
        case 0x53128cu: goto label_53128c;
        case 0x531290u: goto label_531290;
        case 0x531294u: goto label_531294;
        case 0x531298u: goto label_531298;
        case 0x53129cu: goto label_53129c;
        case 0x5312a0u: goto label_5312a0;
        case 0x5312a4u: goto label_5312a4;
        case 0x5312a8u: goto label_5312a8;
        case 0x5312acu: goto label_5312ac;
        case 0x5312b0u: goto label_5312b0;
        case 0x5312b4u: goto label_5312b4;
        case 0x5312b8u: goto label_5312b8;
        case 0x5312bcu: goto label_5312bc;
        case 0x5312c0u: goto label_5312c0;
        case 0x5312c4u: goto label_5312c4;
        case 0x5312c8u: goto label_5312c8;
        case 0x5312ccu: goto label_5312cc;
        case 0x5312d0u: goto label_5312d0;
        case 0x5312d4u: goto label_5312d4;
        case 0x5312d8u: goto label_5312d8;
        case 0x5312dcu: goto label_5312dc;
        case 0x5312e0u: goto label_5312e0;
        case 0x5312e4u: goto label_5312e4;
        case 0x5312e8u: goto label_5312e8;
        case 0x5312ecu: goto label_5312ec;
        case 0x5312f0u: goto label_5312f0;
        case 0x5312f4u: goto label_5312f4;
        case 0x5312f8u: goto label_5312f8;
        case 0x5312fcu: goto label_5312fc;
        case 0x531300u: goto label_531300;
        case 0x531304u: goto label_531304;
        case 0x531308u: goto label_531308;
        case 0x53130cu: goto label_53130c;
        case 0x531310u: goto label_531310;
        case 0x531314u: goto label_531314;
        case 0x531318u: goto label_531318;
        case 0x53131cu: goto label_53131c;
        case 0x531320u: goto label_531320;
        case 0x531324u: goto label_531324;
        case 0x531328u: goto label_531328;
        case 0x53132cu: goto label_53132c;
        case 0x531330u: goto label_531330;
        case 0x531334u: goto label_531334;
        case 0x531338u: goto label_531338;
        case 0x53133cu: goto label_53133c;
        case 0x531340u: goto label_531340;
        case 0x531344u: goto label_531344;
        case 0x531348u: goto label_531348;
        case 0x53134cu: goto label_53134c;
        case 0x531350u: goto label_531350;
        case 0x531354u: goto label_531354;
        case 0x531358u: goto label_531358;
        case 0x53135cu: goto label_53135c;
        case 0x531360u: goto label_531360;
        case 0x531364u: goto label_531364;
        case 0x531368u: goto label_531368;
        case 0x53136cu: goto label_53136c;
        case 0x531370u: goto label_531370;
        case 0x531374u: goto label_531374;
        case 0x531378u: goto label_531378;
        case 0x53137cu: goto label_53137c;
        case 0x531380u: goto label_531380;
        case 0x531384u: goto label_531384;
        case 0x531388u: goto label_531388;
        case 0x53138cu: goto label_53138c;
        case 0x531390u: goto label_531390;
        case 0x531394u: goto label_531394;
        case 0x531398u: goto label_531398;
        case 0x53139cu: goto label_53139c;
        case 0x5313a0u: goto label_5313a0;
        case 0x5313a4u: goto label_5313a4;
        case 0x5313a8u: goto label_5313a8;
        case 0x5313acu: goto label_5313ac;
        case 0x5313b0u: goto label_5313b0;
        case 0x5313b4u: goto label_5313b4;
        case 0x5313b8u: goto label_5313b8;
        case 0x5313bcu: goto label_5313bc;
        case 0x5313c0u: goto label_5313c0;
        case 0x5313c4u: goto label_5313c4;
        case 0x5313c8u: goto label_5313c8;
        case 0x5313ccu: goto label_5313cc;
        case 0x5313d0u: goto label_5313d0;
        case 0x5313d4u: goto label_5313d4;
        case 0x5313d8u: goto label_5313d8;
        case 0x5313dcu: goto label_5313dc;
        case 0x5313e0u: goto label_5313e0;
        case 0x5313e4u: goto label_5313e4;
        case 0x5313e8u: goto label_5313e8;
        case 0x5313ecu: goto label_5313ec;
        case 0x5313f0u: goto label_5313f0;
        case 0x5313f4u: goto label_5313f4;
        case 0x5313f8u: goto label_5313f8;
        case 0x5313fcu: goto label_5313fc;
        case 0x531400u: goto label_531400;
        case 0x531404u: goto label_531404;
        case 0x531408u: goto label_531408;
        case 0x53140cu: goto label_53140c;
        case 0x531410u: goto label_531410;
        case 0x531414u: goto label_531414;
        case 0x531418u: goto label_531418;
        case 0x53141cu: goto label_53141c;
        case 0x531420u: goto label_531420;
        case 0x531424u: goto label_531424;
        case 0x531428u: goto label_531428;
        case 0x53142cu: goto label_53142c;
        case 0x531430u: goto label_531430;
        case 0x531434u: goto label_531434;
        case 0x531438u: goto label_531438;
        case 0x53143cu: goto label_53143c;
        case 0x531440u: goto label_531440;
        case 0x531444u: goto label_531444;
        case 0x531448u: goto label_531448;
        case 0x53144cu: goto label_53144c;
        case 0x531450u: goto label_531450;
        case 0x531454u: goto label_531454;
        case 0x531458u: goto label_531458;
        case 0x53145cu: goto label_53145c;
        case 0x531460u: goto label_531460;
        case 0x531464u: goto label_531464;
        case 0x531468u: goto label_531468;
        case 0x53146cu: goto label_53146c;
        case 0x531470u: goto label_531470;
        case 0x531474u: goto label_531474;
        case 0x531478u: goto label_531478;
        case 0x53147cu: goto label_53147c;
        case 0x531480u: goto label_531480;
        case 0x531484u: goto label_531484;
        case 0x531488u: goto label_531488;
        case 0x53148cu: goto label_53148c;
        case 0x531490u: goto label_531490;
        case 0x531494u: goto label_531494;
        case 0x531498u: goto label_531498;
        case 0x53149cu: goto label_53149c;
        case 0x5314a0u: goto label_5314a0;
        case 0x5314a4u: goto label_5314a4;
        case 0x5314a8u: goto label_5314a8;
        case 0x5314acu: goto label_5314ac;
        case 0x5314b0u: goto label_5314b0;
        case 0x5314b4u: goto label_5314b4;
        case 0x5314b8u: goto label_5314b8;
        case 0x5314bcu: goto label_5314bc;
        case 0x5314c0u: goto label_5314c0;
        case 0x5314c4u: goto label_5314c4;
        case 0x5314c8u: goto label_5314c8;
        case 0x5314ccu: goto label_5314cc;
        case 0x5314d0u: goto label_5314d0;
        case 0x5314d4u: goto label_5314d4;
        case 0x5314d8u: goto label_5314d8;
        case 0x5314dcu: goto label_5314dc;
        case 0x5314e0u: goto label_5314e0;
        case 0x5314e4u: goto label_5314e4;
        case 0x5314e8u: goto label_5314e8;
        case 0x5314ecu: goto label_5314ec;
        case 0x5314f0u: goto label_5314f0;
        case 0x5314f4u: goto label_5314f4;
        case 0x5314f8u: goto label_5314f8;
        case 0x5314fcu: goto label_5314fc;
        case 0x531500u: goto label_531500;
        case 0x531504u: goto label_531504;
        case 0x531508u: goto label_531508;
        case 0x53150cu: goto label_53150c;
        case 0x531510u: goto label_531510;
        case 0x531514u: goto label_531514;
        case 0x531518u: goto label_531518;
        case 0x53151cu: goto label_53151c;
        case 0x531520u: goto label_531520;
        case 0x531524u: goto label_531524;
        case 0x531528u: goto label_531528;
        case 0x53152cu: goto label_53152c;
        case 0x531530u: goto label_531530;
        case 0x531534u: goto label_531534;
        case 0x531538u: goto label_531538;
        case 0x53153cu: goto label_53153c;
        case 0x531540u: goto label_531540;
        case 0x531544u: goto label_531544;
        case 0x531548u: goto label_531548;
        case 0x53154cu: goto label_53154c;
        case 0x531550u: goto label_531550;
        case 0x531554u: goto label_531554;
        case 0x531558u: goto label_531558;
        case 0x53155cu: goto label_53155c;
        case 0x531560u: goto label_531560;
        case 0x531564u: goto label_531564;
        case 0x531568u: goto label_531568;
        case 0x53156cu: goto label_53156c;
        case 0x531570u: goto label_531570;
        case 0x531574u: goto label_531574;
        case 0x531578u: goto label_531578;
        case 0x53157cu: goto label_53157c;
        case 0x531580u: goto label_531580;
        case 0x531584u: goto label_531584;
        case 0x531588u: goto label_531588;
        case 0x53158cu: goto label_53158c;
        case 0x531590u: goto label_531590;
        case 0x531594u: goto label_531594;
        case 0x531598u: goto label_531598;
        case 0x53159cu: goto label_53159c;
        case 0x5315a0u: goto label_5315a0;
        case 0x5315a4u: goto label_5315a4;
        case 0x5315a8u: goto label_5315a8;
        case 0x5315acu: goto label_5315ac;
        case 0x5315b0u: goto label_5315b0;
        case 0x5315b4u: goto label_5315b4;
        case 0x5315b8u: goto label_5315b8;
        case 0x5315bcu: goto label_5315bc;
        case 0x5315c0u: goto label_5315c0;
        case 0x5315c4u: goto label_5315c4;
        case 0x5315c8u: goto label_5315c8;
        case 0x5315ccu: goto label_5315cc;
        case 0x5315d0u: goto label_5315d0;
        case 0x5315d4u: goto label_5315d4;
        case 0x5315d8u: goto label_5315d8;
        case 0x5315dcu: goto label_5315dc;
        case 0x5315e0u: goto label_5315e0;
        case 0x5315e4u: goto label_5315e4;
        case 0x5315e8u: goto label_5315e8;
        case 0x5315ecu: goto label_5315ec;
        case 0x5315f0u: goto label_5315f0;
        case 0x5315f4u: goto label_5315f4;
        case 0x5315f8u: goto label_5315f8;
        case 0x5315fcu: goto label_5315fc;
        case 0x531600u: goto label_531600;
        case 0x531604u: goto label_531604;
        case 0x531608u: goto label_531608;
        case 0x53160cu: goto label_53160c;
        case 0x531610u: goto label_531610;
        case 0x531614u: goto label_531614;
        case 0x531618u: goto label_531618;
        case 0x53161cu: goto label_53161c;
        case 0x531620u: goto label_531620;
        case 0x531624u: goto label_531624;
        case 0x531628u: goto label_531628;
        case 0x53162cu: goto label_53162c;
        case 0x531630u: goto label_531630;
        case 0x531634u: goto label_531634;
        case 0x531638u: goto label_531638;
        case 0x53163cu: goto label_53163c;
        case 0x531640u: goto label_531640;
        case 0x531644u: goto label_531644;
        case 0x531648u: goto label_531648;
        case 0x53164cu: goto label_53164c;
        case 0x531650u: goto label_531650;
        case 0x531654u: goto label_531654;
        case 0x531658u: goto label_531658;
        case 0x53165cu: goto label_53165c;
        case 0x531660u: goto label_531660;
        case 0x531664u: goto label_531664;
        case 0x531668u: goto label_531668;
        case 0x53166cu: goto label_53166c;
        case 0x531670u: goto label_531670;
        case 0x531674u: goto label_531674;
        case 0x531678u: goto label_531678;
        case 0x53167cu: goto label_53167c;
        case 0x531680u: goto label_531680;
        case 0x531684u: goto label_531684;
        case 0x531688u: goto label_531688;
        case 0x53168cu: goto label_53168c;
        case 0x531690u: goto label_531690;
        case 0x531694u: goto label_531694;
        case 0x531698u: goto label_531698;
        case 0x53169cu: goto label_53169c;
        case 0x5316a0u: goto label_5316a0;
        case 0x5316a4u: goto label_5316a4;
        case 0x5316a8u: goto label_5316a8;
        case 0x5316acu: goto label_5316ac;
        case 0x5316b0u: goto label_5316b0;
        case 0x5316b4u: goto label_5316b4;
        case 0x5316b8u: goto label_5316b8;
        case 0x5316bcu: goto label_5316bc;
        case 0x5316c0u: goto label_5316c0;
        case 0x5316c4u: goto label_5316c4;
        case 0x5316c8u: goto label_5316c8;
        case 0x5316ccu: goto label_5316cc;
        case 0x5316d0u: goto label_5316d0;
        case 0x5316d4u: goto label_5316d4;
        case 0x5316d8u: goto label_5316d8;
        case 0x5316dcu: goto label_5316dc;
        case 0x5316e0u: goto label_5316e0;
        case 0x5316e4u: goto label_5316e4;
        case 0x5316e8u: goto label_5316e8;
        case 0x5316ecu: goto label_5316ec;
        case 0x5316f0u: goto label_5316f0;
        case 0x5316f4u: goto label_5316f4;
        case 0x5316f8u: goto label_5316f8;
        case 0x5316fcu: goto label_5316fc;
        case 0x531700u: goto label_531700;
        case 0x531704u: goto label_531704;
        case 0x531708u: goto label_531708;
        case 0x53170cu: goto label_53170c;
        case 0x531710u: goto label_531710;
        case 0x531714u: goto label_531714;
        case 0x531718u: goto label_531718;
        case 0x53171cu: goto label_53171c;
        case 0x531720u: goto label_531720;
        case 0x531724u: goto label_531724;
        case 0x531728u: goto label_531728;
        case 0x53172cu: goto label_53172c;
        case 0x531730u: goto label_531730;
        case 0x531734u: goto label_531734;
        case 0x531738u: goto label_531738;
        case 0x53173cu: goto label_53173c;
        case 0x531740u: goto label_531740;
        case 0x531744u: goto label_531744;
        case 0x531748u: goto label_531748;
        case 0x53174cu: goto label_53174c;
        case 0x531750u: goto label_531750;
        case 0x531754u: goto label_531754;
        case 0x531758u: goto label_531758;
        case 0x53175cu: goto label_53175c;
        default: break;
    }

    ctx->pc = 0x531250u;

label_531250:
    // 0x531250: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x531250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_531254:
    // 0x531254: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x531254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_531258:
    // 0x531258: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x531258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_53125c:
    // 0x53125c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x53125cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_531260:
    // 0x531260: 0x8c670840  lw          $a3, 0x840($v1)
    ctx->pc = 0x531260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_531264:
    // 0x531264: 0xc4610844  lwc1        $f1, 0x844($v1)
    ctx->pc = 0x531264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_531268:
    // 0x531268: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x531268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_53126c:
    // 0x53126c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_531270:
    if (ctx->pc == 0x531270u) {
        ctx->pc = 0x531270u;
            // 0x531270: 0x24660838  addiu       $a2, $v1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2104));
        ctx->pc = 0x531274u;
        goto label_531274;
    }
    ctx->pc = 0x53126Cu;
    {
        const bool branch_taken_0x53126c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x531270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53126Cu;
            // 0x531270: 0x24660838  addiu       $a2, $v1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53126c) {
            ctx->pc = 0x531278u;
            goto label_531278;
        }
    }
    ctx->pc = 0x531274u;
label_531274:
    // 0x531274: 0x24e7003c  addiu       $a3, $a3, 0x3C
    ctx->pc = 0x531274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_531278:
    // 0x531278: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x531278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53127c:
    // 0x53127c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x53127cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_531280:
    // 0x531280: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_531284:
    if (ctx->pc == 0x531284u) {
        ctx->pc = 0x531284u;
            // 0x531284: 0xa7082a  slt         $at, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->pc = 0x531288u;
        goto label_531288;
    }
    ctx->pc = 0x531280u;
    {
        const bool branch_taken_0x531280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x531280) {
            ctx->pc = 0x531284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531280u;
            // 0x531284: 0xa7082a  slt         $at, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x53129Cu;
            goto label_53129c;
        }
    }
    ctx->pc = 0x531288u;
label_531288:
    // 0x531288: 0x3c0342c6  lui         $v1, 0x42C6
    ctx->pc = 0x531288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17094 << 16));
label_53128c:
    // 0x53128c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53128cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_531290:
    // 0x531290: 0x0  nop
    ctx->pc = 0x531290u;
    // NOP
label_531294:
    // 0x531294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x531294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_531298:
    // 0x531298: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x531298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_53129c:
    // 0x53129c: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_5312a0:
    if (ctx->pc == 0x5312A0u) {
        ctx->pc = 0x5312A0u;
            // 0x5312a0: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x5312A4u;
        goto label_5312a4;
    }
    ctx->pc = 0x53129Cu;
    {
        const bool branch_taken_0x53129c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53129c) {
            ctx->pc = 0x5312A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53129Cu;
            // 0x5312a0: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5312C0u;
            goto label_5312c0;
        }
    }
    ctx->pc = 0x5312A4u;
label_5312a4:
    // 0x5312a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x5312a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_5312a8:
    // 0x5312a8: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x5312a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_5312ac:
    // 0x5312ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5312acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5312b0:
    // 0x5312b0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x5312b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_5312b4:
    // 0x5312b4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x5312b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_5312b8:
    // 0x5312b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x5312b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_5312bc:
    // 0x5312bc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x5312bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5312c0:
    // 0x5312c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5312c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5312c4:
    // 0x5312c4: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_5312c8:
    if (ctx->pc == 0x5312C8u) {
        ctx->pc = 0x5312C8u;
            // 0x5312c8: 0xc4820004  lwc1        $f2, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x5312CCu;
        goto label_5312cc;
    }
    ctx->pc = 0x5312C4u;
    {
        const bool branch_taken_0x5312c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5312c4) {
            ctx->pc = 0x5312C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5312C4u;
            // 0x5312c8: 0xc4820004  lwc1        $f2, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x531304u;
            goto label_531304;
        }
    }
    ctx->pc = 0x5312CCu;
label_5312cc:
    // 0x5312cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x5312ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_5312d0:
    // 0x5312d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x5312d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_5312d4:
    // 0x5312d4: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x5312d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5312d8:
    // 0x5312d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5312d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5312dc:
    // 0x5312dc: 0x0  nop
    ctx->pc = 0x5312dcu;
    // NOP
label_5312e0:
    // 0x5312e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x5312e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_5312e4:
    // 0x5312e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5312e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5312e8:
    // 0x5312e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_5312ec:
    if (ctx->pc == 0x5312ECu) {
        ctx->pc = 0x5312ECu;
            // 0x5312ec: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->pc = 0x5312F0u;
        goto label_5312f0;
    }
    ctx->pc = 0x5312E8u;
    {
        const bool branch_taken_0x5312e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5312ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5312E8u;
            // 0x5312ec: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5312e8) {
            ctx->pc = 0x5312F8u;
            goto label_5312f8;
        }
    }
    ctx->pc = 0x5312F0u;
label_5312f0:
    // 0x5312f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x5312f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_5312f4:
    // 0x5312f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x5312f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_5312f8:
    // 0x5312f8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x5312f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5312fc:
    // 0x5312fc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x5312fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_531300:
    // 0x531300: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x531300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_531304:
    // 0x531304: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x531304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_531308:
    // 0x531308: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x531308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53130c:
    // 0x53130c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x53130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_531310:
    // 0x531310: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x531310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_531314:
    // 0x531314: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x531314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_531318:
    // 0x531318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x531318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_53131c:
    // 0x53131c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x53131cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_531320:
    // 0x531320: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_531324:
    if (ctx->pc == 0x531324u) {
        ctx->pc = 0x531328u;
        goto label_531328;
    }
    ctx->pc = 0x531320u;
    {
        const bool branch_taken_0x531320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x531320) {
            ctx->pc = 0x531334u;
            goto label_531334;
        }
    }
    ctx->pc = 0x531328u;
label_531328:
    // 0x531328: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x531328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_53132c:
    // 0x53132c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_531330:
    // 0x531330: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x531330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_531334:
    // 0x531334: 0x3e00008  jr          $ra
label_531338:
    if (ctx->pc == 0x531338u) {
        ctx->pc = 0x53133Cu;
        goto label_53133c;
    }
    ctx->pc = 0x531334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53133Cu;
label_53133c:
    // 0x53133c: 0x0  nop
    ctx->pc = 0x53133cu;
    // NOP
label_531340:
    // 0x531340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x531340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_531344:
    // 0x531344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x531344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_531348:
    // 0x531348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x531348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53134c:
    // 0x53134c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_531350:
    // 0x531350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x531350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_531354:
    // 0x531354: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x531354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_531358:
    // 0x531358: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x531358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
label_53135c:
    // 0x53135c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x53135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_531360:
    // 0x531360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_531364:
    if (ctx->pc == 0x531364u) {
        ctx->pc = 0x531364u;
            // 0x531364: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531368u;
        goto label_531368;
    }
    ctx->pc = 0x531360u;
    {
        const bool branch_taken_0x531360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x531364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531360u;
            // 0x531364: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531360) {
            ctx->pc = 0x531370u;
            goto label_531370;
        }
    }
    ctx->pc = 0x531368u;
label_531368:
    // 0x531368: 0xc14c200  jal         func_530800
label_53136c:
    if (ctx->pc == 0x53136Cu) {
        ctx->pc = 0x531370u;
        goto label_531370;
    }
    ctx->pc = 0x531368u;
    SET_GPR_U32(ctx, 31, 0x531370u);
    ctx->pc = 0x530800u;
    if (runtime->hasFunction(0x530800u)) {
        auto targetFn = runtime->lookupFunction(0x530800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531370u; }
        if (ctx->pc != 0x531370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00530800_0x530800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531370u; }
        if (ctx->pc != 0x531370u) { return; }
    }
    ctx->pc = 0x531370u;
label_531370:
    // 0x531370: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x531370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_531374:
    // 0x531374: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_531378:
    if (ctx->pc == 0x531378u) {
        ctx->pc = 0x531378u;
            // 0x531378: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x53137Cu;
        goto label_53137c;
    }
    ctx->pc = 0x531374u;
    {
        const bool branch_taken_0x531374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x531374) {
            ctx->pc = 0x531378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531374u;
            // 0x531378: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531390u;
            goto label_531390;
        }
    }
    ctx->pc = 0x53137Cu;
label_53137c:
    // 0x53137c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_531380:
    // 0x531380: 0xc04e738  jal         func_139CE0
label_531384:
    if (ctx->pc == 0x531384u) {
        ctx->pc = 0x531384u;
            // 0x531384: 0x8c44f2b4  lw          $a0, -0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963892)));
        ctx->pc = 0x531388u;
        goto label_531388;
    }
    ctx->pc = 0x531380u;
    SET_GPR_U32(ctx, 31, 0x531388u);
    ctx->pc = 0x531384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531380u;
            // 0x531384: 0x8c44f2b4  lw          $a0, -0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531388u; }
        if (ctx->pc != 0x531388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531388u; }
        if (ctx->pc != 0x531388u) { return; }
    }
    ctx->pc = 0x531388u;
label_531388:
    // 0x531388: 0x10000004  b           . + 4 + (0x4 << 2)
label_53138c:
    if (ctx->pc == 0x53138Cu) {
        ctx->pc = 0x53138Cu;
            // 0x53138c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x531390u;
        goto label_531390;
    }
    ctx->pc = 0x531388u;
    {
        const bool branch_taken_0x531388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531388u;
            // 0x53138c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531388) {
            ctx->pc = 0x53139Cu;
            goto label_53139c;
        }
    }
    ctx->pc = 0x531390u;
label_531390:
    // 0x531390: 0xc04e738  jal         func_139CE0
label_531394:
    if (ctx->pc == 0x531394u) {
        ctx->pc = 0x531394u;
            // 0x531394: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x531398u;
        goto label_531398;
    }
    ctx->pc = 0x531390u;
    SET_GPR_U32(ctx, 31, 0x531398u);
    ctx->pc = 0x531394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531390u;
            // 0x531394: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531398u; }
        if (ctx->pc != 0x531398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531398u; }
        if (ctx->pc != 0x531398u) { return; }
    }
    ctx->pc = 0x531398u;
label_531398:
    // 0x531398: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x531398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_53139c:
    // 0x53139c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5313a0:
    // 0x5313a0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x5313a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5313a4:
    // 0x5313a4: 0x8c45e370  lw          $a1, -0x1C90($v0)
    ctx->pc = 0x5313a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_5313a8:
    // 0x5313a8: 0x90670008  lbu         $a3, 0x8($v1)
    ctx->pc = 0x5313a8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_5313ac:
    // 0x5313ac: 0x8c860550  lw          $a2, 0x550($a0)
    ctx->pc = 0x5313acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_5313b0:
    // 0x5313b0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x5313b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_5313b4:
    // 0x5313b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5313b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5313b8:
    // 0x5313b8: 0x38e40001  xori        $a0, $a3, 0x1
    ctx->pc = 0x5313b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
label_5313bc:
    // 0x5313bc: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x5313bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5313c0:
    // 0x5313c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x5313c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5313c4:
    // 0x5313c4: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x5313c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_5313c8:
    // 0x5313c8: 0x2034025  or          $t0, $s0, $v1
    ctx->pc = 0x5313c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_5313cc:
    // 0x5313cc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x5313ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_5313d0:
    // 0x5313d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_5313d4:
    if (ctx->pc == 0x5313D4u) {
        ctx->pc = 0x5313D4u;
            // 0x5313d4: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->pc = 0x5313D8u;
        goto label_5313d8;
    }
    ctx->pc = 0x5313D0u;
    {
        const bool branch_taken_0x5313d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5313D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5313D0u;
            // 0x5313d4: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5313d0) {
            ctx->pc = 0x5313E8u;
            goto label_5313e8;
        }
    }
    ctx->pc = 0x5313D8u;
label_5313d8:
    // 0x5313d8: 0xc0538d8  jal         func_14E360
label_5313dc:
    if (ctx->pc == 0x5313DCu) {
        ctx->pc = 0x5313DCu;
            // 0x5313dc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x5313E0u;
        goto label_5313e0;
    }
    ctx->pc = 0x5313D8u;
    SET_GPR_U32(ctx, 31, 0x5313E0u);
    ctx->pc = 0x5313DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5313D8u;
            // 0x5313dc: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5313E0u; }
        if (ctx->pc != 0x5313E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5313E0u; }
        if (ctx->pc != 0x5313E0u) { return; }
    }
    ctx->pc = 0x5313E0u;
label_5313e0:
    // 0x5313e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_5313e4:
    if (ctx->pc == 0x5313E4u) {
        ctx->pc = 0x5313E4u;
            // 0x5313e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5313E8u;
        goto label_5313e8;
    }
    ctx->pc = 0x5313E0u;
    {
        const bool branch_taken_0x5313e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5313E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5313E0u;
            // 0x5313e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5313e0) {
            ctx->pc = 0x5313F4u;
            goto label_5313f4;
        }
    }
    ctx->pc = 0x5313E8u;
label_5313e8:
    // 0x5313e8: 0xc050044  jal         func_140110
label_5313ec:
    if (ctx->pc == 0x5313ECu) {
        ctx->pc = 0x5313ECu;
            // 0x5313ec: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x5313F0u;
        goto label_5313f0;
    }
    ctx->pc = 0x5313E8u;
    SET_GPR_U32(ctx, 31, 0x5313F0u);
    ctx->pc = 0x5313ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5313E8u;
            // 0x5313ec: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5313F0u; }
        if (ctx->pc != 0x5313F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5313F0u; }
        if (ctx->pc != 0x5313F0u) { return; }
    }
    ctx->pc = 0x5313F0u;
label_5313f0:
    // 0x5313f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5313f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5313f4:
    // 0x5313f4: 0xc0756ac  jal         func_1D5AB0
label_5313f8:
    if (ctx->pc == 0x5313F8u) {
        ctx->pc = 0x5313FCu;
        goto label_5313fc;
    }
    ctx->pc = 0x5313F4u;
    SET_GPR_U32(ctx, 31, 0x5313FCu);
    ctx->pc = 0x1D5AB0u;
    if (runtime->hasFunction(0x1D5AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5313FCu; }
        if (ctx->pc != 0x5313FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5AB0_0x1d5ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5313FCu; }
        if (ctx->pc != 0x5313FCu) { return; }
    }
    ctx->pc = 0x5313FCu;
label_5313fc:
    // 0x5313fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5313fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_531400:
    // 0x531400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x531400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_531404:
    // 0x531404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x531404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_531408:
    // 0x531408: 0x3e00008  jr          $ra
label_53140c:
    if (ctx->pc == 0x53140Cu) {
        ctx->pc = 0x53140Cu;
            // 0x53140c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x531410u;
        goto label_531410;
    }
    ctx->pc = 0x531408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531408u;
            // 0x53140c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531410u;
label_531410:
    // 0x531410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x531410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_531414:
    // 0x531414: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x531414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_531418:
    // 0x531418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x531418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53141c:
    // 0x53141c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53141cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_531420:
    // 0x531420: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x531420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_531424:
    // 0x531424: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x531424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_531428:
    // 0x531428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x531428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_53142c:
    // 0x53142c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x53142cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_531430:
    // 0x531430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x531430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_531434:
    // 0x531434: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x531434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_531438:
    // 0x531438: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x531438u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_53143c:
    // 0x53143c: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x53143cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_531440:
    // 0x531440: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x531440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_531444:
    // 0x531444: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x531444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_531448:
    // 0x531448: 0xc6240dec  lwc1        $f4, 0xDEC($s1)
    ctx->pc = 0x531448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_53144c:
    // 0x53144c: 0x8e270550  lw          $a3, 0x550($s1)
    ctx->pc = 0x53144cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_531450:
    // 0x531450: 0xc4c50018  lwc1        $f5, 0x18($a2)
    ctx->pc = 0x531450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_531454:
    // 0x531454: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x531454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_531458:
    // 0x531458: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x531458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_53145c:
    // 0x53145c: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x53145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_531460:
    // 0x531460: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x531460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_531464:
    // 0x531464: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x531464u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_531468:
    // 0x531468: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x531468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_53146c:
    // 0x53146c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x53146cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_531470:
    // 0x531470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x531470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_531474:
    // 0x531474: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x531474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_531478:
    // 0x531478: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x531478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_53147c:
    // 0x53147c: 0xc6240dbc  lwc1        $f4, 0xDBC($s1)
    ctx->pc = 0x53147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_531480:
    // 0x531480: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x531480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_531484:
    // 0x531484: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x531484u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_531488:
    // 0x531488: 0x4605211c  madd.s      $f4, $f4, $f5
    ctx->pc = 0x531488u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_53148c:
    // 0x53148c: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x53148cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_531490:
    // 0x531490: 0xe48400a0  swc1        $f4, 0xA0($a0)
    ctx->pc = 0x531490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_531494:
    // 0x531494: 0xc6210dec  lwc1        $f1, 0xDEC($s1)
    ctx->pc = 0x531494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_531498:
    // 0x531498: 0x46040302  mul.s       $f12, $f0, $f4
    ctx->pc = 0x531498u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_53149c:
    // 0x53149c: 0xc0477a8  jal         func_11DEA0
label_5314a0:
    if (ctx->pc == 0x5314A0u) {
        ctx->pc = 0x5314A0u;
            // 0x5314a0: 0x4601151d  msub.s      $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x5314A4u;
        goto label_5314a4;
    }
    ctx->pc = 0x53149Cu;
    SET_GPR_U32(ctx, 31, 0x5314A4u);
    ctx->pc = 0x5314A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53149Cu;
            // 0x5314a0: 0x4601151d  msub.s      $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5314A4u; }
        if (ctx->pc != 0x5314A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5314A4u; }
        if (ctx->pc != 0x5314A4u) { return; }
    }
    ctx->pc = 0x5314A4u;
label_5314a4:
    // 0x5314a4: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x5314a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_5314a8:
    // 0x5314a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5314a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5314ac:
    // 0x5314ac: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x5314acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_5314b0:
    // 0x5314b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5314b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5314b4:
    // 0x5314b4: 0x0  nop
    ctx->pc = 0x5314b4u;
    // NOP
label_5314b8:
    // 0x5314b8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x5314b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_5314bc:
    // 0x5314bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x5314bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5314c0:
    // 0x5314c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5314c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5314c4:
    // 0x5314c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5314c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_5314c8:
    // 0x5314c8: 0xc6200dc0  lwc1        $f0, 0xDC0($s1)
    ctx->pc = 0x5314c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5314cc:
    // 0x5314cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x5314ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_5314d0:
    // 0x5314d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x5314d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5314d4:
    // 0x5314d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5314d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5314d8:
    // 0x5314d8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x5314d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_5314dc:
    // 0x5314dc: 0xc04cab0  jal         func_132AC0
label_5314e0:
    if (ctx->pc == 0x5314E0u) {
        ctx->pc = 0x5314E0u;
            // 0x5314e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5314E4u;
        goto label_5314e4;
    }
    ctx->pc = 0x5314DCu;
    SET_GPR_U32(ctx, 31, 0x5314E4u);
    ctx->pc = 0x5314E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5314DCu;
            // 0x5314e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5314E4u; }
        if (ctx->pc != 0x5314E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5314E4u; }
        if (ctx->pc != 0x5314E4u) { return; }
    }
    ctx->pc = 0x5314E4u;
label_5314e4:
    // 0x5314e4: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x5314e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_5314e8:
    // 0x5314e8: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x5314e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_5314ec:
    // 0x5314ec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5314ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5314f0:
    // 0x5314f0: 0x320f809  jalr        $t9
label_5314f4:
    if (ctx->pc == 0x5314F4u) {
        ctx->pc = 0x5314F4u;
            // 0x5314f4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x5314F8u;
        goto label_5314f8;
    }
    ctx->pc = 0x5314F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5314F8u);
        ctx->pc = 0x5314F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5314F0u;
            // 0x5314f4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5314F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5314F8u; }
            if (ctx->pc != 0x5314F8u) { return; }
        }
        }
    }
    ctx->pc = 0x5314F8u;
label_5314f8:
    // 0x5314f8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x5314f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_5314fc:
    // 0x5314fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x5314fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_531500:
    // 0x531500: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x531500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_531504:
    // 0x531504: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x531504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_531508:
    // 0x531508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x531508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53150c:
    // 0x53150c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x53150cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_531510:
    // 0x531510: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x531510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_531514:
    // 0x531514: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x531514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_531518:
    // 0x531518: 0xc04c72c  jal         func_131CB0
label_53151c:
    if (ctx->pc == 0x53151Cu) {
        ctx->pc = 0x53151Cu;
            // 0x53151c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531520u;
        goto label_531520;
    }
    ctx->pc = 0x531518u;
    SET_GPR_U32(ctx, 31, 0x531520u);
    ctx->pc = 0x53151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531518u;
            // 0x53151c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531520u; }
        if (ctx->pc != 0x531520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531520u; }
        if (ctx->pc != 0x531520u) { return; }
    }
    ctx->pc = 0x531520u;
label_531520:
    // 0x531520: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x531520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_531524:
    // 0x531524: 0x8ca30da0  lw          $v1, 0xDA0($a1)
    ctx->pc = 0x531524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_531528:
    // 0x531528: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x531528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_53152c:
    // 0x53152c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_531530:
    if (ctx->pc == 0x531530u) {
        ctx->pc = 0x531530u;
            // 0x531530: 0x8ca30d70  lw          $v1, 0xD70($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
        ctx->pc = 0x531534u;
        goto label_531534;
    }
    ctx->pc = 0x53152Cu;
    {
        const bool branch_taken_0x53152c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53152c) {
            ctx->pc = 0x531530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53152Cu;
            // 0x531530: 0x8ca30d70  lw          $v1, 0xD70($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531544u;
            goto label_531544;
        }
    }
    ctx->pc = 0x531534u;
label_531534:
    // 0x531534: 0xc14c23c  jal         func_5308F0
label_531538:
    if (ctx->pc == 0x531538u) {
        ctx->pc = 0x531538u;
            // 0x531538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53153Cu;
        goto label_53153c;
    }
    ctx->pc = 0x531534u;
    SET_GPR_U32(ctx, 31, 0x53153Cu);
    ctx->pc = 0x531538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531534u;
            // 0x531538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5308F0u;
    if (runtime->hasFunction(0x5308F0u)) {
        auto targetFn = runtime->lookupFunction(0x5308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53153Cu; }
        if (ctx->pc != 0x53153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005308F0_0x5308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53153Cu; }
        if (ctx->pc != 0x53153Cu) { return; }
    }
    ctx->pc = 0x53153Cu;
label_53153c:
    // 0x53153c: 0x10000048  b           . + 4 + (0x48 << 2)
label_531540:
    if (ctx->pc == 0x531540u) {
        ctx->pc = 0x531540u;
            // 0x531540: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x531544u;
        goto label_531544;
    }
    ctx->pc = 0x53153Cu;
    {
        const bool branch_taken_0x53153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53153Cu;
            // 0x531540: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53153c) {
            ctx->pc = 0x531660u;
            goto label_531660;
        }
    }
    ctx->pc = 0x531544u;
label_531544:
    // 0x531544: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x531544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_531548:
    // 0x531548: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_53154c:
    if (ctx->pc == 0x53154Cu) {
        ctx->pc = 0x53154Cu;
            // 0x53154c: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x531550u;
        goto label_531550;
    }
    ctx->pc = 0x531548u;
    {
        const bool branch_taken_0x531548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x531548) {
            ctx->pc = 0x53154Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531548u;
            // 0x53154c: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5315F4u;
            goto label_5315f4;
        }
    }
    ctx->pc = 0x531550u;
label_531550:
    // 0x531550: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x531550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_531554:
    // 0x531554: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x531554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_531558:
    // 0x531558: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_53155c:
    if (ctx->pc == 0x53155Cu) {
        ctx->pc = 0x531560u;
        goto label_531560;
    }
    ctx->pc = 0x531558u;
    {
        const bool branch_taken_0x531558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x531558) {
            ctx->pc = 0x5315F0u;
            goto label_5315f0;
        }
    }
    ctx->pc = 0x531560u;
label_531560:
    // 0x531560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x531560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_531564:
    // 0x531564: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x531564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_531568:
    // 0x531568: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x531568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53156c:
    // 0x53156c: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x53156cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
label_531570:
    // 0x531570: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x531570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_531574:
    // 0x531574: 0xac4511d4  sw          $a1, 0x11D4($v0)
    ctx->pc = 0x531574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4564), GPR_U32(ctx, 5));
label_531578:
    // 0x531578: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x531578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_53157c:
    // 0x53157c: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x53157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
label_531580:
    // 0x531580: 0xc0bdf9c  jal         func_2F7E70
label_531584:
    if (ctx->pc == 0x531584u) {
        ctx->pc = 0x531584u;
            // 0x531584: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x531588u;
        goto label_531588;
    }
    ctx->pc = 0x531580u;
    SET_GPR_U32(ctx, 31, 0x531588u);
    ctx->pc = 0x531584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531580u;
            // 0x531584: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531588u; }
        if (ctx->pc != 0x531588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531588u; }
        if (ctx->pc != 0x531588u) { return; }
    }
    ctx->pc = 0x531588u;
label_531588:
    // 0x531588: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x531588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_53158c:
    // 0x53158c: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_531590:
    if (ctx->pc == 0x531590u) {
        ctx->pc = 0x531590u;
            // 0x531590: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x531594u;
        goto label_531594;
    }
    ctx->pc = 0x53158Cu;
    {
        const bool branch_taken_0x53158c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53158c) {
            ctx->pc = 0x531590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53158Cu;
            // 0x531590: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5315C4u;
            goto label_5315c4;
        }
    }
    ctx->pc = 0x531594u;
label_531594:
    // 0x531594: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x531594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_531598:
    // 0x531598: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x531598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53159c:
    // 0x53159c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x53159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_5315a0:
    // 0x5315a0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x5315a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_5315a4:
    // 0x5315a4: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x5315a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_5315a8:
    // 0x5315a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x5315a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5315ac:
    // 0x5315ac: 0x8e4400ac  lw          $a0, 0xAC($s2)
    ctx->pc = 0x5315acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_5315b0:
    // 0x5315b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5315b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5315b4:
    // 0x5315b4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_5315b8:
    // 0x5315b8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x5315b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_5315bc:
    // 0x5315bc: 0x10000027  b           . + 4 + (0x27 << 2)
label_5315c0:
    if (ctx->pc == 0x5315C0u) {
        ctx->pc = 0x5315C0u;
            // 0x5315c0: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->pc = 0x5315C4u;
        goto label_5315c4;
    }
    ctx->pc = 0x5315BCu;
    {
        const bool branch_taken_0x5315bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5315C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5315BCu;
            // 0x5315c0: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5315bc) {
            ctx->pc = 0x53165Cu;
            goto label_53165c;
        }
    }
    ctx->pc = 0x5315C4u;
label_5315c4:
    // 0x5315c4: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x5315c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_5315c8:
    // 0x5315c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5315c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5315cc:
    // 0x5315cc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5315ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_5315d0:
    // 0x5315d0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x5315d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_5315d4:
    // 0x5315d4: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x5315d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
label_5315d8:
    // 0x5315d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x5315d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5315dc:
    // 0x5315dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5315dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5315e0:
    // 0x5315e0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5315e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_5315e4:
    // 0x5315e4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x5315e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_5315e8:
    // 0x5315e8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_5315ec:
    if (ctx->pc == 0x5315ECu) {
        ctx->pc = 0x5315ECu;
            // 0x5315ec: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x5315F0u;
        goto label_5315f0;
    }
    ctx->pc = 0x5315E8u;
    {
        const bool branch_taken_0x5315e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5315ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5315E8u;
            // 0x5315ec: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5315e8) {
            ctx->pc = 0x53165Cu;
            goto label_53165c;
        }
    }
    ctx->pc = 0x5315F0u;
label_5315f0:
    // 0x5315f0: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x5315f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_5315f4:
    // 0x5315f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5315f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5315f8:
    // 0x5315f8: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_5315fc:
    if (ctx->pc == 0x5315FCu) {
        ctx->pc = 0x531600u;
        goto label_531600;
    }
    ctx->pc = 0x5315F8u;
    {
        const bool branch_taken_0x5315f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5315f8) {
            ctx->pc = 0x53165Cu;
            goto label_53165c;
        }
    }
    ctx->pc = 0x531600u;
label_531600:
    // 0x531600: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x531600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_531604:
    // 0x531604: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x531604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_531608:
    // 0x531608: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_53160c:
    if (ctx->pc == 0x53160Cu) {
        ctx->pc = 0x531610u;
        goto label_531610;
    }
    ctx->pc = 0x531608u;
    {
        const bool branch_taken_0x531608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x531608) {
            ctx->pc = 0x53165Cu;
            goto label_53165c;
        }
    }
    ctx->pc = 0x531610u;
label_531610:
    // 0x531610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x531610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_531614:
    // 0x531614: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x531614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_531618:
    // 0x531618: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x531618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_53161c:
    // 0x53161c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_531620:
    // 0x531620: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x531620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_531624:
    // 0x531624: 0xc057b7c  jal         func_15EDF0
label_531628:
    if (ctx->pc == 0x531628u) {
        ctx->pc = 0x531628u;
            // 0x531628: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x53162Cu;
        goto label_53162c;
    }
    ctx->pc = 0x531624u;
    SET_GPR_U32(ctx, 31, 0x53162Cu);
    ctx->pc = 0x531628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531624u;
            // 0x531628: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53162Cu; }
        if (ctx->pc != 0x53162Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53162Cu; }
        if (ctx->pc != 0x53162Cu) { return; }
    }
    ctx->pc = 0x53162Cu;
label_53162c:
    // 0x53162c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x53162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_531630:
    // 0x531630: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x531630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_531634:
    // 0x531634: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x531634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_531638:
    // 0x531638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x531638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53163c:
    // 0x53163c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x53163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_531640:
    // 0x531640: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x531640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
label_531644:
    // 0x531644: 0xc0bdf9c  jal         func_2F7E70
label_531648:
    if (ctx->pc == 0x531648u) {
        ctx->pc = 0x531648u;
            // 0x531648: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x53164Cu;
        goto label_53164c;
    }
    ctx->pc = 0x531644u;
    SET_GPR_U32(ctx, 31, 0x53164Cu);
    ctx->pc = 0x531648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531644u;
            // 0x531648: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53164Cu; }
        if (ctx->pc != 0x53164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53164Cu; }
        if (ctx->pc != 0x53164Cu) { return; }
    }
    ctx->pc = 0x53164Cu;
label_53164c:
    // 0x53164c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x53164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_531650:
    // 0x531650: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x531650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_531654:
    // 0x531654: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x531654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_531658:
    // 0x531658: 0xac6411d4  sw          $a0, 0x11D4($v1)
    ctx->pc = 0x531658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 4));
label_53165c:
    // 0x53165c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53165cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_531660:
    // 0x531660: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x531660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_531664:
    // 0x531664: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x531664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_531668:
    // 0x531668: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x531668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53166c:
    // 0x53166c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x53166cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_531670:
    // 0x531670: 0x3e00008  jr          $ra
label_531674:
    if (ctx->pc == 0x531674u) {
        ctx->pc = 0x531674u;
            // 0x531674: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x531678u;
        goto label_531678;
    }
    ctx->pc = 0x531670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x531674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531670u;
            // 0x531674: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531678u;
label_531678:
    // 0x531678: 0x0  nop
    ctx->pc = 0x531678u;
    // NOP
label_53167c:
    // 0x53167c: 0x0  nop
    ctx->pc = 0x53167cu;
    // NOP
label_531680:
    // 0x531680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x531680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_531684:
    // 0x531684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x531684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_531688:
    // 0x531688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x531688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53168c:
    // 0x53168c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53168cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_531690:
    // 0x531690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x531690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_531694:
    // 0x531694: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x531694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_531698:
    // 0x531698: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x531698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_53169c:
    // 0x53169c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53169cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5316a0:
    // 0x5316a0: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x5316a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
label_5316a4:
    // 0x5316a4: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x5316a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
label_5316a8:
    // 0x5316a8: 0xa080006c  sb          $zero, 0x6C($a0)
    ctx->pc = 0x5316a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 0));
label_5316ac:
    // 0x5316ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x5316acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_5316b0:
    // 0x5316b0: 0xac4011d4  sw          $zero, 0x11D4($v0)
    ctx->pc = 0x5316b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4564), GPR_U32(ctx, 0));
label_5316b4:
    // 0x5316b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x5316b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_5316b8:
    // 0x5316b8: 0xac4011d8  sw          $zero, 0x11D8($v0)
    ctx->pc = 0x5316b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4568), GPR_U32(ctx, 0));
label_5316bc:
    // 0x5316bc: 0xc04a576  jal         func_1295D8
label_5316c0:
    if (ctx->pc == 0x5316C0u) {
        ctx->pc = 0x5316C0u;
            // 0x5316c0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x5316C4u;
        goto label_5316c4;
    }
    ctx->pc = 0x5316BCu;
    SET_GPR_U32(ctx, 31, 0x5316C4u);
    ctx->pc = 0x5316C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5316BCu;
            // 0x5316c0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5316C4u; }
        if (ctx->pc != 0x5316C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5316C4u; }
        if (ctx->pc != 0x5316C4u) { return; }
    }
    ctx->pc = 0x5316C4u;
label_5316c4:
    // 0x5316c4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x5316c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_5316c8:
    // 0x5316c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5316c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5316cc:
    // 0x5316cc: 0xc04a576  jal         func_1295D8
label_5316d0:
    if (ctx->pc == 0x5316D0u) {
        ctx->pc = 0x5316D0u;
            // 0x5316d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5316D4u;
        goto label_5316d4;
    }
    ctx->pc = 0x5316CCu;
    SET_GPR_U32(ctx, 31, 0x5316D4u);
    ctx->pc = 0x5316D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5316CCu;
            // 0x5316d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5316D4u; }
        if (ctx->pc != 0x5316D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5316D4u; }
        if (ctx->pc != 0x5316D4u) { return; }
    }
    ctx->pc = 0x5316D4u;
label_5316d4:
    // 0x5316d4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x5316d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_5316d8:
    // 0x5316d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5316d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5316dc:
    // 0x5316dc: 0xc04a576  jal         func_1295D8
label_5316e0:
    if (ctx->pc == 0x5316E0u) {
        ctx->pc = 0x5316E0u;
            // 0x5316e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5316E4u;
        goto label_5316e4;
    }
    ctx->pc = 0x5316DCu;
    SET_GPR_U32(ctx, 31, 0x5316E4u);
    ctx->pc = 0x5316E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5316DCu;
            // 0x5316e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5316E4u; }
        if (ctx->pc != 0x5316E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5316E4u; }
        if (ctx->pc != 0x5316E4u) { return; }
    }
    ctx->pc = 0x5316E4u;
label_5316e4:
    // 0x5316e4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x5316e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_5316e8:
    // 0x5316e8: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_5316ec:
    if (ctx->pc == 0x5316ECu) {
        ctx->pc = 0x5316ECu;
            // 0x5316ec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x5316F0u;
        goto label_5316f0;
    }
    ctx->pc = 0x5316E8u;
    {
        const bool branch_taken_0x5316e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5316e8) {
            ctx->pc = 0x5316ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5316E8u;
            // 0x5316ec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531720u;
            goto label_531720;
        }
    }
    ctx->pc = 0x5316F0u;
label_5316f0:
    // 0x5316f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5316f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5316f4:
    // 0x5316f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5316f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5316f8:
    // 0x5316f8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5316f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_5316fc:
    // 0x5316fc: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x5316fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_531700:
    // 0x531700: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x531700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_531704:
    // 0x531704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x531704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_531708:
    // 0x531708: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x531708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_53170c:
    // 0x53170c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x53170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_531710:
    // 0x531710: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x531710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_531714:
    // 0x531714: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x531714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_531718:
    // 0x531718: 0x1000000b  b           . + 4 + (0xB << 2)
label_53171c:
    if (ctx->pc == 0x53171Cu) {
        ctx->pc = 0x53171Cu;
            // 0x53171c: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->pc = 0x531720u;
        goto label_531720;
    }
    ctx->pc = 0x531718u;
    {
        const bool branch_taken_0x531718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531718u;
            // 0x53171c: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531718) {
            ctx->pc = 0x531748u;
            goto label_531748;
        }
    }
    ctx->pc = 0x531720u;
label_531720:
    // 0x531720: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x531720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_531724:
    // 0x531724: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x531724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_531728:
    // 0x531728: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x531728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_53172c:
    // 0x53172c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x53172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_531730:
    // 0x531730: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x531730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
label_531734:
    // 0x531734: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x531734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_531738:
    // 0x531738: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x531738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53173c:
    // 0x53173c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x53173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_531740:
    // 0x531740: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x531740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_531744:
    // 0x531744: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x531744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_531748:
    // 0x531748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x531748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53174c:
    // 0x53174c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53174cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_531750:
    // 0x531750: 0x3e00008  jr          $ra
label_531754:
    if (ctx->pc == 0x531754u) {
        ctx->pc = 0x531754u;
            // 0x531754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x531758u;
        goto label_531758;
    }
    ctx->pc = 0x531750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x531754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531750u;
            // 0x531754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531758u;
label_531758:
    // 0x531758: 0x0  nop
    ctx->pc = 0x531758u;
    // NOP
label_53175c:
    // 0x53175c: 0x0  nop
    ctx->pc = 0x53175cu;
    // NOP
}
