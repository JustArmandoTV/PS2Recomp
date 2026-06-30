#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371210
// Address: 0x371210 - 0x371750
void sub_00371210_0x371210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371210_0x371210");
#endif

    switch (ctx->pc) {
        case 0x371210u: goto label_371210;
        case 0x371214u: goto label_371214;
        case 0x371218u: goto label_371218;
        case 0x37121cu: goto label_37121c;
        case 0x371220u: goto label_371220;
        case 0x371224u: goto label_371224;
        case 0x371228u: goto label_371228;
        case 0x37122cu: goto label_37122c;
        case 0x371230u: goto label_371230;
        case 0x371234u: goto label_371234;
        case 0x371238u: goto label_371238;
        case 0x37123cu: goto label_37123c;
        case 0x371240u: goto label_371240;
        case 0x371244u: goto label_371244;
        case 0x371248u: goto label_371248;
        case 0x37124cu: goto label_37124c;
        case 0x371250u: goto label_371250;
        case 0x371254u: goto label_371254;
        case 0x371258u: goto label_371258;
        case 0x37125cu: goto label_37125c;
        case 0x371260u: goto label_371260;
        case 0x371264u: goto label_371264;
        case 0x371268u: goto label_371268;
        case 0x37126cu: goto label_37126c;
        case 0x371270u: goto label_371270;
        case 0x371274u: goto label_371274;
        case 0x371278u: goto label_371278;
        case 0x37127cu: goto label_37127c;
        case 0x371280u: goto label_371280;
        case 0x371284u: goto label_371284;
        case 0x371288u: goto label_371288;
        case 0x37128cu: goto label_37128c;
        case 0x371290u: goto label_371290;
        case 0x371294u: goto label_371294;
        case 0x371298u: goto label_371298;
        case 0x37129cu: goto label_37129c;
        case 0x3712a0u: goto label_3712a0;
        case 0x3712a4u: goto label_3712a4;
        case 0x3712a8u: goto label_3712a8;
        case 0x3712acu: goto label_3712ac;
        case 0x3712b0u: goto label_3712b0;
        case 0x3712b4u: goto label_3712b4;
        case 0x3712b8u: goto label_3712b8;
        case 0x3712bcu: goto label_3712bc;
        case 0x3712c0u: goto label_3712c0;
        case 0x3712c4u: goto label_3712c4;
        case 0x3712c8u: goto label_3712c8;
        case 0x3712ccu: goto label_3712cc;
        case 0x3712d0u: goto label_3712d0;
        case 0x3712d4u: goto label_3712d4;
        case 0x3712d8u: goto label_3712d8;
        case 0x3712dcu: goto label_3712dc;
        case 0x3712e0u: goto label_3712e0;
        case 0x3712e4u: goto label_3712e4;
        case 0x3712e8u: goto label_3712e8;
        case 0x3712ecu: goto label_3712ec;
        case 0x3712f0u: goto label_3712f0;
        case 0x3712f4u: goto label_3712f4;
        case 0x3712f8u: goto label_3712f8;
        case 0x3712fcu: goto label_3712fc;
        case 0x371300u: goto label_371300;
        case 0x371304u: goto label_371304;
        case 0x371308u: goto label_371308;
        case 0x37130cu: goto label_37130c;
        case 0x371310u: goto label_371310;
        case 0x371314u: goto label_371314;
        case 0x371318u: goto label_371318;
        case 0x37131cu: goto label_37131c;
        case 0x371320u: goto label_371320;
        case 0x371324u: goto label_371324;
        case 0x371328u: goto label_371328;
        case 0x37132cu: goto label_37132c;
        case 0x371330u: goto label_371330;
        case 0x371334u: goto label_371334;
        case 0x371338u: goto label_371338;
        case 0x37133cu: goto label_37133c;
        case 0x371340u: goto label_371340;
        case 0x371344u: goto label_371344;
        case 0x371348u: goto label_371348;
        case 0x37134cu: goto label_37134c;
        case 0x371350u: goto label_371350;
        case 0x371354u: goto label_371354;
        case 0x371358u: goto label_371358;
        case 0x37135cu: goto label_37135c;
        case 0x371360u: goto label_371360;
        case 0x371364u: goto label_371364;
        case 0x371368u: goto label_371368;
        case 0x37136cu: goto label_37136c;
        case 0x371370u: goto label_371370;
        case 0x371374u: goto label_371374;
        case 0x371378u: goto label_371378;
        case 0x37137cu: goto label_37137c;
        case 0x371380u: goto label_371380;
        case 0x371384u: goto label_371384;
        case 0x371388u: goto label_371388;
        case 0x37138cu: goto label_37138c;
        case 0x371390u: goto label_371390;
        case 0x371394u: goto label_371394;
        case 0x371398u: goto label_371398;
        case 0x37139cu: goto label_37139c;
        case 0x3713a0u: goto label_3713a0;
        case 0x3713a4u: goto label_3713a4;
        case 0x3713a8u: goto label_3713a8;
        case 0x3713acu: goto label_3713ac;
        case 0x3713b0u: goto label_3713b0;
        case 0x3713b4u: goto label_3713b4;
        case 0x3713b8u: goto label_3713b8;
        case 0x3713bcu: goto label_3713bc;
        case 0x3713c0u: goto label_3713c0;
        case 0x3713c4u: goto label_3713c4;
        case 0x3713c8u: goto label_3713c8;
        case 0x3713ccu: goto label_3713cc;
        case 0x3713d0u: goto label_3713d0;
        case 0x3713d4u: goto label_3713d4;
        case 0x3713d8u: goto label_3713d8;
        case 0x3713dcu: goto label_3713dc;
        case 0x3713e0u: goto label_3713e0;
        case 0x3713e4u: goto label_3713e4;
        case 0x3713e8u: goto label_3713e8;
        case 0x3713ecu: goto label_3713ec;
        case 0x3713f0u: goto label_3713f0;
        case 0x3713f4u: goto label_3713f4;
        case 0x3713f8u: goto label_3713f8;
        case 0x3713fcu: goto label_3713fc;
        case 0x371400u: goto label_371400;
        case 0x371404u: goto label_371404;
        case 0x371408u: goto label_371408;
        case 0x37140cu: goto label_37140c;
        case 0x371410u: goto label_371410;
        case 0x371414u: goto label_371414;
        case 0x371418u: goto label_371418;
        case 0x37141cu: goto label_37141c;
        case 0x371420u: goto label_371420;
        case 0x371424u: goto label_371424;
        case 0x371428u: goto label_371428;
        case 0x37142cu: goto label_37142c;
        case 0x371430u: goto label_371430;
        case 0x371434u: goto label_371434;
        case 0x371438u: goto label_371438;
        case 0x37143cu: goto label_37143c;
        case 0x371440u: goto label_371440;
        case 0x371444u: goto label_371444;
        case 0x371448u: goto label_371448;
        case 0x37144cu: goto label_37144c;
        case 0x371450u: goto label_371450;
        case 0x371454u: goto label_371454;
        case 0x371458u: goto label_371458;
        case 0x37145cu: goto label_37145c;
        case 0x371460u: goto label_371460;
        case 0x371464u: goto label_371464;
        case 0x371468u: goto label_371468;
        case 0x37146cu: goto label_37146c;
        case 0x371470u: goto label_371470;
        case 0x371474u: goto label_371474;
        case 0x371478u: goto label_371478;
        case 0x37147cu: goto label_37147c;
        case 0x371480u: goto label_371480;
        case 0x371484u: goto label_371484;
        case 0x371488u: goto label_371488;
        case 0x37148cu: goto label_37148c;
        case 0x371490u: goto label_371490;
        case 0x371494u: goto label_371494;
        case 0x371498u: goto label_371498;
        case 0x37149cu: goto label_37149c;
        case 0x3714a0u: goto label_3714a0;
        case 0x3714a4u: goto label_3714a4;
        case 0x3714a8u: goto label_3714a8;
        case 0x3714acu: goto label_3714ac;
        case 0x3714b0u: goto label_3714b0;
        case 0x3714b4u: goto label_3714b4;
        case 0x3714b8u: goto label_3714b8;
        case 0x3714bcu: goto label_3714bc;
        case 0x3714c0u: goto label_3714c0;
        case 0x3714c4u: goto label_3714c4;
        case 0x3714c8u: goto label_3714c8;
        case 0x3714ccu: goto label_3714cc;
        case 0x3714d0u: goto label_3714d0;
        case 0x3714d4u: goto label_3714d4;
        case 0x3714d8u: goto label_3714d8;
        case 0x3714dcu: goto label_3714dc;
        case 0x3714e0u: goto label_3714e0;
        case 0x3714e4u: goto label_3714e4;
        case 0x3714e8u: goto label_3714e8;
        case 0x3714ecu: goto label_3714ec;
        case 0x3714f0u: goto label_3714f0;
        case 0x3714f4u: goto label_3714f4;
        case 0x3714f8u: goto label_3714f8;
        case 0x3714fcu: goto label_3714fc;
        case 0x371500u: goto label_371500;
        case 0x371504u: goto label_371504;
        case 0x371508u: goto label_371508;
        case 0x37150cu: goto label_37150c;
        case 0x371510u: goto label_371510;
        case 0x371514u: goto label_371514;
        case 0x371518u: goto label_371518;
        case 0x37151cu: goto label_37151c;
        case 0x371520u: goto label_371520;
        case 0x371524u: goto label_371524;
        case 0x371528u: goto label_371528;
        case 0x37152cu: goto label_37152c;
        case 0x371530u: goto label_371530;
        case 0x371534u: goto label_371534;
        case 0x371538u: goto label_371538;
        case 0x37153cu: goto label_37153c;
        case 0x371540u: goto label_371540;
        case 0x371544u: goto label_371544;
        case 0x371548u: goto label_371548;
        case 0x37154cu: goto label_37154c;
        case 0x371550u: goto label_371550;
        case 0x371554u: goto label_371554;
        case 0x371558u: goto label_371558;
        case 0x37155cu: goto label_37155c;
        case 0x371560u: goto label_371560;
        case 0x371564u: goto label_371564;
        case 0x371568u: goto label_371568;
        case 0x37156cu: goto label_37156c;
        case 0x371570u: goto label_371570;
        case 0x371574u: goto label_371574;
        case 0x371578u: goto label_371578;
        case 0x37157cu: goto label_37157c;
        case 0x371580u: goto label_371580;
        case 0x371584u: goto label_371584;
        case 0x371588u: goto label_371588;
        case 0x37158cu: goto label_37158c;
        case 0x371590u: goto label_371590;
        case 0x371594u: goto label_371594;
        case 0x371598u: goto label_371598;
        case 0x37159cu: goto label_37159c;
        case 0x3715a0u: goto label_3715a0;
        case 0x3715a4u: goto label_3715a4;
        case 0x3715a8u: goto label_3715a8;
        case 0x3715acu: goto label_3715ac;
        case 0x3715b0u: goto label_3715b0;
        case 0x3715b4u: goto label_3715b4;
        case 0x3715b8u: goto label_3715b8;
        case 0x3715bcu: goto label_3715bc;
        case 0x3715c0u: goto label_3715c0;
        case 0x3715c4u: goto label_3715c4;
        case 0x3715c8u: goto label_3715c8;
        case 0x3715ccu: goto label_3715cc;
        case 0x3715d0u: goto label_3715d0;
        case 0x3715d4u: goto label_3715d4;
        case 0x3715d8u: goto label_3715d8;
        case 0x3715dcu: goto label_3715dc;
        case 0x3715e0u: goto label_3715e0;
        case 0x3715e4u: goto label_3715e4;
        case 0x3715e8u: goto label_3715e8;
        case 0x3715ecu: goto label_3715ec;
        case 0x3715f0u: goto label_3715f0;
        case 0x3715f4u: goto label_3715f4;
        case 0x3715f8u: goto label_3715f8;
        case 0x3715fcu: goto label_3715fc;
        case 0x371600u: goto label_371600;
        case 0x371604u: goto label_371604;
        case 0x371608u: goto label_371608;
        case 0x37160cu: goto label_37160c;
        case 0x371610u: goto label_371610;
        case 0x371614u: goto label_371614;
        case 0x371618u: goto label_371618;
        case 0x37161cu: goto label_37161c;
        case 0x371620u: goto label_371620;
        case 0x371624u: goto label_371624;
        case 0x371628u: goto label_371628;
        case 0x37162cu: goto label_37162c;
        case 0x371630u: goto label_371630;
        case 0x371634u: goto label_371634;
        case 0x371638u: goto label_371638;
        case 0x37163cu: goto label_37163c;
        case 0x371640u: goto label_371640;
        case 0x371644u: goto label_371644;
        case 0x371648u: goto label_371648;
        case 0x37164cu: goto label_37164c;
        case 0x371650u: goto label_371650;
        case 0x371654u: goto label_371654;
        case 0x371658u: goto label_371658;
        case 0x37165cu: goto label_37165c;
        case 0x371660u: goto label_371660;
        case 0x371664u: goto label_371664;
        case 0x371668u: goto label_371668;
        case 0x37166cu: goto label_37166c;
        case 0x371670u: goto label_371670;
        case 0x371674u: goto label_371674;
        case 0x371678u: goto label_371678;
        case 0x37167cu: goto label_37167c;
        case 0x371680u: goto label_371680;
        case 0x371684u: goto label_371684;
        case 0x371688u: goto label_371688;
        case 0x37168cu: goto label_37168c;
        case 0x371690u: goto label_371690;
        case 0x371694u: goto label_371694;
        case 0x371698u: goto label_371698;
        case 0x37169cu: goto label_37169c;
        case 0x3716a0u: goto label_3716a0;
        case 0x3716a4u: goto label_3716a4;
        case 0x3716a8u: goto label_3716a8;
        case 0x3716acu: goto label_3716ac;
        case 0x3716b0u: goto label_3716b0;
        case 0x3716b4u: goto label_3716b4;
        case 0x3716b8u: goto label_3716b8;
        case 0x3716bcu: goto label_3716bc;
        case 0x3716c0u: goto label_3716c0;
        case 0x3716c4u: goto label_3716c4;
        case 0x3716c8u: goto label_3716c8;
        case 0x3716ccu: goto label_3716cc;
        case 0x3716d0u: goto label_3716d0;
        case 0x3716d4u: goto label_3716d4;
        case 0x3716d8u: goto label_3716d8;
        case 0x3716dcu: goto label_3716dc;
        case 0x3716e0u: goto label_3716e0;
        case 0x3716e4u: goto label_3716e4;
        case 0x3716e8u: goto label_3716e8;
        case 0x3716ecu: goto label_3716ec;
        case 0x3716f0u: goto label_3716f0;
        case 0x3716f4u: goto label_3716f4;
        case 0x3716f8u: goto label_3716f8;
        case 0x3716fcu: goto label_3716fc;
        case 0x371700u: goto label_371700;
        case 0x371704u: goto label_371704;
        case 0x371708u: goto label_371708;
        case 0x37170cu: goto label_37170c;
        case 0x371710u: goto label_371710;
        case 0x371714u: goto label_371714;
        case 0x371718u: goto label_371718;
        case 0x37171cu: goto label_37171c;
        case 0x371720u: goto label_371720;
        case 0x371724u: goto label_371724;
        case 0x371728u: goto label_371728;
        case 0x37172cu: goto label_37172c;
        case 0x371730u: goto label_371730;
        case 0x371734u: goto label_371734;
        case 0x371738u: goto label_371738;
        case 0x37173cu: goto label_37173c;
        case 0x371740u: goto label_371740;
        case 0x371744u: goto label_371744;
        case 0x371748u: goto label_371748;
        case 0x37174cu: goto label_37174c;
        default: break;
    }

    ctx->pc = 0x371210u;

label_371210:
    // 0x371210: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x371210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_371214:
    // 0x371214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x371214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_371218:
    // 0x371218: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_37121c:
    if (ctx->pc == 0x37121Cu) {
        ctx->pc = 0x371220u;
        goto label_371220;
    }
    ctx->pc = 0x371218u;
    {
        const bool branch_taken_0x371218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x371218) {
            ctx->pc = 0x371258u;
            goto label_371258;
        }
    }
    ctx->pc = 0x371220u;
label_371220:
    // 0x371220: 0x8c860074  lw          $a2, 0x74($a0)
    ctx->pc = 0x371220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_371224:
    // 0x371224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371228:
    // 0x371228: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x371228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_37122c:
    // 0x37122c: 0x24844e80  addiu       $a0, $a0, 0x4E80
    ctx->pc = 0x37122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20096));
label_371230:
    // 0x371230: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x371230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_371234:
    // 0x371234: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
label_371238:
    if (ctx->pc == 0x371238u) {
        ctx->pc = 0x37123Cu;
        goto label_37123c;
    }
    ctx->pc = 0x371234u;
    {
        const bool branch_taken_0x371234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x371234) {
            ctx->pc = 0x371240u;
            goto label_371240;
        }
    }
    ctx->pc = 0x37123Cu;
label_37123c:
    // 0x37123c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371240:
    // 0x371240: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x371240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_371244:
    // 0x371244: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x371244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_371248:
    // 0x371248: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x371248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_37124c:
    // 0x37124c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_371250:
    if (ctx->pc == 0x371250u) {
        ctx->pc = 0x371250u;
            // 0x371250: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x371254u;
        goto label_371254;
    }
    ctx->pc = 0x37124Cu;
    {
        const bool branch_taken_0x37124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37124Cu;
            // 0x371250: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37124c) {
            ctx->pc = 0x371230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_371230;
        }
    }
    ctx->pc = 0x371254u;
label_371254:
    // 0x371254: 0x0  nop
    ctx->pc = 0x371254u;
    // NOP
label_371258:
    // 0x371258: 0x3e00008  jr          $ra
label_37125c:
    if (ctx->pc == 0x37125Cu) {
        ctx->pc = 0x371260u;
        goto label_371260;
    }
    ctx->pc = 0x371258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371260u;
label_371260:
    // 0x371260: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x371260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_371264:
    // 0x371264: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x371264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_371268:
    // 0x371268: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x371268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_37126c:
    // 0x37126c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_371270:
    // 0x371270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_371274:
    // 0x371274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_371278:
    // 0x371278: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x371278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37127c:
    // 0x37127c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_371280:
    // 0x371280: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x371280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_371284:
    // 0x371284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_371288:
    // 0x371288: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x371288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_37128c:
    // 0x37128c: 0x10600125  beqz        $v1, . + 4 + (0x125 << 2)
label_371290:
    if (ctx->pc == 0x371290u) {
        ctx->pc = 0x371290u;
            // 0x371290: 0x26710084  addiu       $s1, $s3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
        ctx->pc = 0x371294u;
        goto label_371294;
    }
    ctx->pc = 0x37128Cu;
    {
        const bool branch_taken_0x37128c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x371290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37128Cu;
            // 0x371290: 0x26710084  addiu       $s1, $s3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37128c) {
            ctx->pc = 0x371724u;
            goto label_371724;
        }
    }
    ctx->pc = 0x371294u;
label_371294:
    // 0x371294: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x371294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_371298:
    // 0x371298: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x371298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_37129c:
    // 0x37129c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37129cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3712a0:
    // 0x3712a0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3712a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3712a4:
    // 0x3712a4: 0x320f809  jalr        $t9
label_3712a8:
    if (ctx->pc == 0x3712A8u) {
        ctx->pc = 0x3712ACu;
        goto label_3712ac;
    }
    ctx->pc = 0x3712A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3712ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3712ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3712ACu; }
            if (ctx->pc != 0x3712ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3712ACu;
label_3712ac:
    // 0x3712ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3712acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3712b0:
    // 0x3712b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3712b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3712b4:
    // 0x3712b4: 0xc075128  jal         func_1D44A0
label_3712b8:
    if (ctx->pc == 0x3712B8u) {
        ctx->pc = 0x3712B8u;
            // 0x3712b8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3712BCu;
        goto label_3712bc;
    }
    ctx->pc = 0x3712B4u;
    SET_GPR_U32(ctx, 31, 0x3712BCu);
    ctx->pc = 0x3712B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3712B4u;
            // 0x3712b8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3712BCu; }
        if (ctx->pc != 0x3712BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3712BCu; }
        if (ctx->pc != 0x3712BCu) { return; }
    }
    ctx->pc = 0x3712BCu;
label_3712bc:
    // 0x3712bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3712bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3712c0:
    // 0x3712c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3712c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3712c4:
    // 0x3712c4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3712c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3712c8:
    // 0x3712c8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3712c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3712cc:
    // 0x3712cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3712ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3712d0:
    // 0x3712d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3712d4:
    if (ctx->pc == 0x3712D4u) {
        ctx->pc = 0x3712D4u;
            // 0x3712d4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3712D8u;
        goto label_3712d8;
    }
    ctx->pc = 0x3712D0u;
    {
        const bool branch_taken_0x3712d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3712d0) {
            ctx->pc = 0x3712D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3712D0u;
            // 0x3712d4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3712E4u;
            goto label_3712e4;
        }
    }
    ctx->pc = 0x3712D8u;
label_3712d8:
    // 0x3712d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3712d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3712dc:
    // 0x3712dc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3712dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3712e0:
    // 0x3712e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3712e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3712e4:
    // 0x3712e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3712e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3712e8:
    // 0x3712e8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3712e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3712ec:
    // 0x3712ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3712ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3712f0:
    // 0x3712f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3712f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3712f4:
    // 0x3712f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3712f8:
    if (ctx->pc == 0x3712F8u) {
        ctx->pc = 0x3712F8u;
            // 0x3712f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3712FCu;
        goto label_3712fc;
    }
    ctx->pc = 0x3712F4u;
    {
        const bool branch_taken_0x3712f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3712f4) {
            ctx->pc = 0x3712F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3712F4u;
            // 0x3712f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371308u;
            goto label_371308;
        }
    }
    ctx->pc = 0x3712FCu;
label_3712fc:
    // 0x3712fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371300:
    // 0x371300: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x371300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_371304:
    // 0x371304: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x371304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_371308:
    // 0x371308: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37130c:
    // 0x37130c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x37130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_371310:
    // 0x371310: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x371310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_371314:
    // 0x371314: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x371314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_371318:
    // 0x371318: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37131c:
    if (ctx->pc == 0x37131Cu) {
        ctx->pc = 0x37131Cu;
            // 0x37131c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x371320u;
        goto label_371320;
    }
    ctx->pc = 0x371318u;
    {
        const bool branch_taken_0x371318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x371318) {
            ctx->pc = 0x37131Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371318u;
            // 0x37131c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37132Cu;
            goto label_37132c;
        }
    }
    ctx->pc = 0x371320u;
label_371320:
    // 0x371320: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371324:
    // 0x371324: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x371324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_371328:
    // 0x371328: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x371328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37132c:
    // 0x37132c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371330:
    // 0x371330: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x371330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_371334:
    // 0x371334: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x371334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_371338:
    // 0x371338: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x371338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37133c:
    // 0x37133c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37133cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_371340:
    // 0x371340: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_371344:
    if (ctx->pc == 0x371344u) {
        ctx->pc = 0x371344u;
            // 0x371344: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x371348u;
        goto label_371348;
    }
    ctx->pc = 0x371340u;
    {
        const bool branch_taken_0x371340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x371340) {
            ctx->pc = 0x371344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371340u;
            // 0x371344: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371354u;
            goto label_371354;
        }
    }
    ctx->pc = 0x371348u;
label_371348:
    // 0x371348: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37134c:
    // 0x37134c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x37134cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_371350:
    // 0x371350: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x371350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_371354:
    // 0x371354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371358:
    // 0x371358: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x371358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_37135c:
    // 0x37135c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x37135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_371360:
    // 0x371360: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x371360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_371364:
    // 0x371364: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x371364u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_371368:
    // 0x371368: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37136c:
    if (ctx->pc == 0x37136Cu) {
        ctx->pc = 0x371370u;
        goto label_371370;
    }
    ctx->pc = 0x371368u;
    {
        const bool branch_taken_0x371368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x371368) {
            ctx->pc = 0x371378u;
            goto label_371378;
        }
    }
    ctx->pc = 0x371370u;
label_371370:
    // 0x371370: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371374:
    // 0x371374: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x371374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_371378:
    // 0x371378: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37137c:
    // 0x37137c: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x37137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
label_371380:
    // 0x371380: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x371380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_371384:
    // 0x371384: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_371388:
    if (ctx->pc == 0x371388u) {
        ctx->pc = 0x37138Cu;
        goto label_37138c;
    }
    ctx->pc = 0x371384u;
    {
        const bool branch_taken_0x371384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x371384) {
            ctx->pc = 0x371394u;
            goto label_371394;
        }
    }
    ctx->pc = 0x37138Cu;
label_37138c:
    // 0x37138c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371390:
    // 0x371390: 0xac50e3c8  sw          $s0, -0x1C38($v0)
    ctx->pc = 0x371390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 16));
label_371394:
    // 0x371394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371398:
    // 0x371398: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x371398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
label_37139c:
    // 0x37139c: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x37139cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3713a0:
    // 0x3713a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3713a4:
    if (ctx->pc == 0x3713A4u) {
        ctx->pc = 0x3713A8u;
        goto label_3713a8;
    }
    ctx->pc = 0x3713A0u;
    {
        const bool branch_taken_0x3713a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3713a0) {
            ctx->pc = 0x3713B0u;
            goto label_3713b0;
        }
    }
    ctx->pc = 0x3713A8u;
label_3713a8:
    // 0x3713a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3713a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3713ac:
    // 0x3713ac: 0xac50e3d0  sw          $s0, -0x1C30($v0)
    ctx->pc = 0x3713acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 16));
label_3713b0:
    // 0x3713b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3713b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3713b4:
    // 0x3713b4: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x3713b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3713b8:
    // 0x3713b8: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x3713b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_3713bc:
    // 0x3713bc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3713bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3713c0:
    // 0x3713c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3713c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3713c4:
    // 0x3713c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3713c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3713c8:
    // 0x3713c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3713c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3713cc:
    // 0x3713cc: 0xc0d18e8  jal         func_3463A0
label_3713d0:
    if (ctx->pc == 0x3713D0u) {
        ctx->pc = 0x3713D0u;
            // 0x3713d0: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x3713D4u;
        goto label_3713d4;
    }
    ctx->pc = 0x3713CCu;
    SET_GPR_U32(ctx, 31, 0x3713D4u);
    ctx->pc = 0x3713D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3713CCu;
            // 0x3713d0: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3463A0u;
    if (runtime->hasFunction(0x3463A0u)) {
        auto targetFn = runtime->lookupFunction(0x3463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3713D4u; }
        if (ctx->pc != 0x3713D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003463A0_0x3463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3713D4u; }
        if (ctx->pc != 0x3713D4u) { return; }
    }
    ctx->pc = 0x3713D4u;
label_3713d4:
    // 0x3713d4: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3713d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3713d8:
    // 0x3713d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3713d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3713dc:
    // 0x3713dc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3713dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_3713e0:
    // 0x3713e0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x3713e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_3713e4:
    // 0x3713e4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3713e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3713e8:
    // 0x3713e8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3713ec:
    if (ctx->pc == 0x3713ECu) {
        ctx->pc = 0x3713ECu;
            // 0x3713ec: 0x26150010  addiu       $s5, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3713F0u;
        goto label_3713f0;
    }
    ctx->pc = 0x3713E8u;
    {
        const bool branch_taken_0x3713e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3713ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3713E8u;
            // 0x3713ec: 0x26150010  addiu       $s5, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3713e8) {
            ctx->pc = 0x37140Cu;
            goto label_37140c;
        }
    }
    ctx->pc = 0x3713F0u;
label_3713f0:
    // 0x3713f0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x3713f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3713f4:
    // 0x3713f4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3713f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3713f8:
    // 0x3713f8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_3713fc:
    if (ctx->pc == 0x3713FCu) {
        ctx->pc = 0x3713FCu;
            // 0x3713fc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371400u;
        goto label_371400;
    }
    ctx->pc = 0x3713F8u;
    {
        const bool branch_taken_0x3713f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3713f8) {
            ctx->pc = 0x3713FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3713F8u;
            // 0x3713fc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371400u;
            goto label_371400;
        }
    }
    ctx->pc = 0x371400u;
label_371400:
    // 0x371400: 0x26640128  addiu       $a0, $s3, 0x128
    ctx->pc = 0x371400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
label_371404:
    // 0x371404: 0xc0a725c  jal         func_29C970
label_371408:
    if (ctx->pc == 0x371408u) {
        ctx->pc = 0x371408u;
            // 0x371408: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x37140Cu;
        goto label_37140c;
    }
    ctx->pc = 0x371404u;
    SET_GPR_U32(ctx, 31, 0x37140Cu);
    ctx->pc = 0x371408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371404u;
            // 0x371408: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37140Cu; }
        if (ctx->pc != 0x37140Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37140Cu; }
        if (ctx->pc != 0x37140Cu) { return; }
    }
    ctx->pc = 0x37140Cu;
label_37140c:
    // 0x37140c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x37140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_371410:
    // 0x371410: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x371410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_371414:
    // 0x371414: 0xc040138  jal         func_1004E0
label_371418:
    if (ctx->pc == 0x371418u) {
        ctx->pc = 0x371418u;
            // 0x371418: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x37141Cu;
        goto label_37141c;
    }
    ctx->pc = 0x371414u;
    SET_GPR_U32(ctx, 31, 0x37141Cu);
    ctx->pc = 0x371418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371414u;
            // 0x371418: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37141Cu; }
        if (ctx->pc != 0x37141Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37141Cu; }
        if (ctx->pc != 0x37141Cu) { return; }
    }
    ctx->pc = 0x37141Cu;
label_37141c:
    // 0x37141c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37141cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371420:
    // 0x371420: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x371420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371424:
    // 0x371424: 0xae720114  sw          $s2, 0x114($s3)
    ctx->pc = 0x371424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 18));
label_371428:
    // 0x371428: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x371428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_37142c:
    // 0x37142c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x37142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_371430:
    // 0x371430: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x371430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_371434:
    // 0x371434: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x371434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_371438:
    // 0x371438: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x371438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_37143c:
    // 0x37143c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x37143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_371440:
    // 0x371440: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x371440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_371444:
    // 0x371444: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x371444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_371448:
    // 0x371448: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x371448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_37144c:
    // 0x37144c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x37144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_371450:
    // 0x371450: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x371450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_371454:
    // 0x371454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x371454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371458:
    // 0x371458: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x371458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_37145c:
    // 0x37145c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x37145cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_371460:
    // 0x371460: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x371460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_371464:
    // 0x371464: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x371464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_371468:
    // 0x371468: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x371468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_37146c:
    // 0x37146c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x37146cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_371470:
    // 0x371470: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x371470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_371474:
    // 0x371474: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x371474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_371478:
    // 0x371478: 0xc0a3138  jal         func_28C4E0
label_37147c:
    if (ctx->pc == 0x37147Cu) {
        ctx->pc = 0x37147Cu;
            // 0x37147c: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x371480u;
        goto label_371480;
    }
    ctx->pc = 0x371478u;
    SET_GPR_U32(ctx, 31, 0x371480u);
    ctx->pc = 0x37147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371478u;
            // 0x37147c: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C4E0u;
    if (runtime->hasFunction(0x28C4E0u)) {
        auto targetFn = runtime->lookupFunction(0x28C4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371480u; }
        if (ctx->pc != 0x371480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C4E0_0x28c4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371480u; }
        if (ctx->pc != 0x371480u) { return; }
    }
    ctx->pc = 0x371480u;
label_371480:
    // 0x371480: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x371480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_371484:
    // 0x371484: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x371484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_371488:
    // 0x371488: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x371488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_37148c:
    // 0x37148c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x37148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_371490:
    // 0x371490: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371494:
    // 0x371494: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x371494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_371498:
    // 0x371498: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x371498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_37149c:
    // 0x37149c: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x37149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_3714a0:
    // 0x3714a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x3714a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_3714a4:
    // 0x3714a4: 0xc0a7a88  jal         func_29EA20
label_3714a8:
    if (ctx->pc == 0x3714A8u) {
        ctx->pc = 0x3714A8u;
            // 0x3714a8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x3714ACu;
        goto label_3714ac;
    }
    ctx->pc = 0x3714A4u;
    SET_GPR_U32(ctx, 31, 0x3714ACu);
    ctx->pc = 0x3714A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3714A4u;
            // 0x3714a8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3714ACu; }
        if (ctx->pc != 0x3714ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3714ACu; }
        if (ctx->pc != 0x3714ACu) { return; }
    }
    ctx->pc = 0x3714ACu;
label_3714ac:
    // 0x3714ac: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3714acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3714b0:
    // 0x3714b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3714b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3714b4:
    // 0x3714b4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3714b8:
    if (ctx->pc == 0x3714B8u) {
        ctx->pc = 0x3714B8u;
            // 0x3714b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3714BCu;
        goto label_3714bc;
    }
    ctx->pc = 0x3714B4u;
    {
        const bool branch_taken_0x3714b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3714B4u;
            // 0x3714b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3714b4) {
            ctx->pc = 0x3714D8u;
            goto label_3714d8;
        }
    }
    ctx->pc = 0x3714BCu;
label_3714bc:
    // 0x3714bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3714bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3714c0:
    // 0x3714c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3714c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3714c4:
    // 0x3714c4: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3714c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3714c8:
    // 0x3714c8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3714c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3714cc:
    // 0x3714cc: 0xc081458  jal         func_205160
label_3714d0:
    if (ctx->pc == 0x3714D0u) {
        ctx->pc = 0x3714D0u;
            // 0x3714d0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3714D4u;
        goto label_3714d4;
    }
    ctx->pc = 0x3714CCu;
    SET_GPR_U32(ctx, 31, 0x3714D4u);
    ctx->pc = 0x3714D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3714CCu;
            // 0x3714d0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205160u;
    if (runtime->hasFunction(0x205160u)) {
        auto targetFn = runtime->lookupFunction(0x205160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3714D4u; }
        if (ctx->pc != 0x3714D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205160_0x205160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3714D4u; }
        if (ctx->pc != 0x3714D4u) { return; }
    }
    ctx->pc = 0x3714D4u;
label_3714d4:
    // 0x3714d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3714d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3714d8:
    // 0x3714d8: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3714d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3714dc:
    // 0x3714dc: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x3714dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_3714e0:
    // 0x3714e0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3714e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_3714e4:
    // 0x3714e4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x3714e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_3714e8:
    // 0x3714e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3714ec:
    if (ctx->pc == 0x3714ECu) {
        ctx->pc = 0x3714F0u;
        goto label_3714f0;
    }
    ctx->pc = 0x3714E8u;
    {
        const bool branch_taken_0x3714e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3714e8) {
            ctx->pc = 0x371500u;
            goto label_371500;
        }
    }
    ctx->pc = 0x3714F0u;
label_3714f0:
    // 0x3714f0: 0x26640128  addiu       $a0, $s3, 0x128
    ctx->pc = 0x3714f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
label_3714f4:
    // 0x3714f4: 0xc0a728c  jal         func_29CA30
label_3714f8:
    if (ctx->pc == 0x3714F8u) {
        ctx->pc = 0x3714F8u;
            // 0x3714f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3714FCu;
        goto label_3714fc;
    }
    ctx->pc = 0x3714F4u;
    SET_GPR_U32(ctx, 31, 0x3714FCu);
    ctx->pc = 0x3714F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3714F4u;
            // 0x3714f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3714FCu; }
        if (ctx->pc != 0x3714FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3714FCu; }
        if (ctx->pc != 0x3714FCu) { return; }
    }
    ctx->pc = 0x3714FCu;
label_3714fc:
    // 0x3714fc: 0x0  nop
    ctx->pc = 0x3714fcu;
    // NOP
label_371500:
    // 0x371500: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x371500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_371504:
    // 0x371504: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x371504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_371508:
    // 0x371508: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x371508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37150c:
    // 0x37150c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x37150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_371510:
    // 0x371510: 0xae62012c  sw          $v0, 0x12C($s3)
    ctx->pc = 0x371510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 2));
label_371514:
    // 0x371514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x371514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_371518:
    // 0x371518: 0x8e620128  lw          $v0, 0x128($s3)
    ctx->pc = 0x371518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_37151c:
    // 0x37151c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_371520:
    // 0x371520: 0xc097344  jal         func_25CD10
label_371524:
    if (ctx->pc == 0x371524u) {
        ctx->pc = 0x371524u;
            // 0x371524: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x371528u;
        goto label_371528;
    }
    ctx->pc = 0x371520u;
    SET_GPR_U32(ctx, 31, 0x371528u);
    ctx->pc = 0x371524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371520u;
            // 0x371524: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD10u;
    if (runtime->hasFunction(0x25CD10u)) {
        auto targetFn = runtime->lookupFunction(0x25CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371528u; }
        if (ctx->pc != 0x371528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD10_0x25cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371528u; }
        if (ctx->pc != 0x371528u) { return; }
    }
    ctx->pc = 0x371528u;
label_371528:
    // 0x371528: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x371528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_37152c:
    // 0x37152c: 0xc0789e8  jal         func_1E27A0
label_371530:
    if (ctx->pc == 0x371530u) {
        ctx->pc = 0x371530u;
            // 0x371530: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x371534u;
        goto label_371534;
    }
    ctx->pc = 0x37152Cu;
    SET_GPR_U32(ctx, 31, 0x371534u);
    ctx->pc = 0x371530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37152Cu;
            // 0x371530: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E27A0u;
    if (runtime->hasFunction(0x1E27A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371534u; }
        if (ctx->pc != 0x371534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E27A0_0x1e27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371534u; }
        if (ctx->pc != 0x371534u) { return; }
    }
    ctx->pc = 0x371534u;
label_371534:
    // 0x371534: 0xc078a18  jal         func_1E2860
label_371538:
    if (ctx->pc == 0x371538u) {
        ctx->pc = 0x371538u;
            // 0x371538: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x37153Cu;
        goto label_37153c;
    }
    ctx->pc = 0x371534u;
    SET_GPR_U32(ctx, 31, 0x37153Cu);
    ctx->pc = 0x371538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371534u;
            // 0x371538: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2860u;
    if (runtime->hasFunction(0x1E2860u)) {
        auto targetFn = runtime->lookupFunction(0x1E2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37153Cu; }
        if (ctx->pc != 0x37153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2860_0x1e2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37153Cu; }
        if (ctx->pc != 0x37153Cu) { return; }
    }
    ctx->pc = 0x37153Cu;
label_37153c:
    // 0x37153c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_371540:
    // 0x371540: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x371540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_371544:
    // 0x371544: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x371544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_371548:
    // 0x371548: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_37154c:
    if (ctx->pc == 0x37154Cu) {
        ctx->pc = 0x37154Cu;
            // 0x37154c: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x371550u;
        goto label_371550;
    }
    ctx->pc = 0x371548u;
    {
        const bool branch_taken_0x371548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371548u;
            // 0x37154c: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371548) {
            ctx->pc = 0x371428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_371428;
        }
    }
    ctx->pc = 0x371550u;
label_371550:
    // 0x371550: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x371550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_371554:
    // 0x371554: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x371554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_371558:
    // 0x371558: 0x24c61a80  addiu       $a2, $a2, 0x1A80
    ctx->pc = 0x371558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6784));
label_37155c:
    // 0x37155c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_371560:
    // 0x371560: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x371560u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_371564:
    // 0x371564: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x371564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_371568:
    // 0x371568: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x371568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_37156c:
    // 0x37156c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x37156cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_371570:
    // 0x371570: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x371570u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_371574:
    // 0x371574: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x371574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_371578:
    // 0x371578: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_37157c:
    if (ctx->pc == 0x37157Cu) {
        ctx->pc = 0x37157Cu;
            // 0x37157c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x371580u;
        goto label_371580;
    }
    ctx->pc = 0x371578u;
    {
        const bool branch_taken_0x371578 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x37157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371578u;
            // 0x37157c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371578) {
            ctx->pc = 0x371560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_371560;
        }
    }
    ctx->pc = 0x371580u;
label_371580:
    // 0x371580: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x371580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_371584:
    // 0x371584: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x371584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_371588:
    // 0x371588: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x371588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_37158c:
    // 0x37158c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x37158cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_371590:
    // 0x371590: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x371590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_371594:
    // 0x371594: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x371594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_371598:
    // 0x371598: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_37159c:
    if (ctx->pc == 0x37159Cu) {
        ctx->pc = 0x37159Cu;
            // 0x37159c: 0xafa300b8  sw          $v1, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
        ctx->pc = 0x3715A0u;
        goto label_3715a0;
    }
    ctx->pc = 0x371598u;
    {
        const bool branch_taken_0x371598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371598u;
            // 0x37159c: 0xafa300b8  sw          $v1, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371598) {
            ctx->pc = 0x3715BCu;
            goto label_3715bc;
        }
    }
    ctx->pc = 0x3715A0u;
label_3715a0:
    // 0x3715a0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x3715a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3715a4:
    // 0x3715a4: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x3715a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_3715a8:
    // 0x3715a8: 0x54200001  bnel        $at, $zero, . + 4 + (0x1 << 2)
label_3715ac:
    if (ctx->pc == 0x3715ACu) {
        ctx->pc = 0x3715ACu;
            // 0x3715ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3715B0u;
        goto label_3715b0;
    }
    ctx->pc = 0x3715A8u;
    {
        const bool branch_taken_0x3715a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3715a8) {
            ctx->pc = 0x3715ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3715A8u;
            // 0x3715ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3715B0u;
            goto label_3715b0;
        }
    }
    ctx->pc = 0x3715B0u;
label_3715b0:
    // 0x3715b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3715b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3715b4:
    // 0x3715b4: 0xc0a725c  jal         func_29C970
label_3715b8:
    if (ctx->pc == 0x3715B8u) {
        ctx->pc = 0x3715B8u;
            // 0x3715b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3715BCu;
        goto label_3715bc;
    }
    ctx->pc = 0x3715B4u;
    SET_GPR_U32(ctx, 31, 0x3715BCu);
    ctx->pc = 0x3715B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3715B4u;
            // 0x3715b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3715BCu; }
        if (ctx->pc != 0x3715BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3715BCu; }
        if (ctx->pc != 0x3715BCu) { return; }
    }
    ctx->pc = 0x3715BCu;
label_3715bc:
    // 0x3715bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3715bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3715c0:
    // 0x3715c0: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x3715c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3715c4:
    // 0x3715c4: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x3715c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3715c8:
    // 0x3715c8: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
label_3715cc:
    if (ctx->pc == 0x3715CCu) {
        ctx->pc = 0x3715CCu;
            // 0x3715cc: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x3715D0u;
        goto label_3715d0;
    }
    ctx->pc = 0x3715C8u;
    {
        const bool branch_taken_0x3715c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3715CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3715C8u;
            // 0x3715cc: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3715c8) {
            ctx->pc = 0x371628u;
            goto label_371628;
        }
    }
    ctx->pc = 0x3715D0u;
label_3715d0:
    // 0x3715d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3715d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3715d4:
    // 0x3715d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3715d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3715d8:
    // 0x3715d8: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x3715d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3715dc:
    // 0x3715dc: 0x8e640128  lw          $a0, 0x128($s3)
    ctx->pc = 0x3715dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_3715e0:
    // 0x3715e0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3715e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_3715e4:
    // 0x3715e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3715e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3715e8:
    // 0x3715e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x3715e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_3715ec:
    // 0x3715ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3715f0:
    if (ctx->pc == 0x3715F0u) {
        ctx->pc = 0x3715F0u;
            // 0x3715f0: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x3715F4u;
        goto label_3715f4;
    }
    ctx->pc = 0x3715ECu;
    {
        const bool branch_taken_0x3715ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3715F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3715ECu;
            // 0x3715f0: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3715ec) {
            ctx->pc = 0x371600u;
            goto label_371600;
        }
    }
    ctx->pc = 0x3715F4u;
label_3715f4:
    // 0x3715f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3715f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3715f8:
    // 0x3715f8: 0xc0a728c  jal         func_29CA30
label_3715fc:
    if (ctx->pc == 0x3715FCu) {
        ctx->pc = 0x3715FCu;
            // 0x3715fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x371600u;
        goto label_371600;
    }
    ctx->pc = 0x3715F8u;
    SET_GPR_U32(ctx, 31, 0x371600u);
    ctx->pc = 0x3715FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3715F8u;
            // 0x3715fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371600u; }
        if (ctx->pc != 0x371600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371600u; }
        if (ctx->pc != 0x371600u) { return; }
    }
    ctx->pc = 0x371600u;
label_371600:
    // 0x371600: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x371600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_371604:
    // 0x371604: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x371604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_371608:
    // 0x371608: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x371608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_37160c:
    // 0x37160c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x37160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_371610:
    // 0x371610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x371610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_371614:
    // 0x371614: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x371614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_371618:
    // 0x371618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37161c:
    // 0x37161c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_371620:
    if (ctx->pc == 0x371620u) {
        ctx->pc = 0x371620u;
            // 0x371620: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x371624u;
        goto label_371624;
    }
    ctx->pc = 0x37161Cu;
    {
        const bool branch_taken_0x37161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37161Cu;
            // 0x371620: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37161c) {
            ctx->pc = 0x3716C8u;
            goto label_3716c8;
        }
    }
    ctx->pc = 0x371624u;
label_371624:
    // 0x371624: 0x0  nop
    ctx->pc = 0x371624u;
    // NOP
label_371628:
    // 0x371628: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x371628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_37162c:
    // 0x37162c: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x37162cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_371630:
    // 0x371630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x371630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371634:
    // 0x371634: 0x8e640128  lw          $a0, 0x128($s3)
    ctx->pc = 0x371634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_371638:
    // 0x371638: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x371638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_37163c:
    // 0x37163c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x37163cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_371640:
    // 0x371640: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x371640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_371644:
    // 0x371644: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_371648:
    if (ctx->pc == 0x371648u) {
        ctx->pc = 0x371648u;
            // 0x371648: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x37164Cu;
        goto label_37164c;
    }
    ctx->pc = 0x371644u;
    {
        const bool branch_taken_0x371644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x371648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371644u;
            // 0x371648: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371644) {
            ctx->pc = 0x371658u;
            goto label_371658;
        }
    }
    ctx->pc = 0x37164Cu;
label_37164c:
    // 0x37164c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x37164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_371650:
    // 0x371650: 0xc0a728c  jal         func_29CA30
label_371654:
    if (ctx->pc == 0x371654u) {
        ctx->pc = 0x371654u;
            // 0x371654: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x371658u;
        goto label_371658;
    }
    ctx->pc = 0x371650u;
    SET_GPR_U32(ctx, 31, 0x371658u);
    ctx->pc = 0x371654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371650u;
            // 0x371654: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371658u; }
        if (ctx->pc != 0x371658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371658u; }
        if (ctx->pc != 0x371658u) { return; }
    }
    ctx->pc = 0x371658u;
label_371658:
    // 0x371658: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x371658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_37165c:
    // 0x37165c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x37165cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_371660:
    // 0x371660: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x371660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_371664:
    // 0x371664: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x371664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_371668:
    // 0x371668: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x371668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_37166c:
    // 0x37166c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x37166cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_371670:
    // 0x371670: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x371670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
label_371674:
    // 0x371674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_371678:
    // 0x371678: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x371678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_37167c:
    // 0x37167c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x37167cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_371680:
    // 0x371680: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x371680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_371684:
    // 0x371684: 0x8e640128  lw          $a0, 0x128($s3)
    ctx->pc = 0x371684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_371688:
    // 0x371688: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x371688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_37168c:
    // 0x37168c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x37168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_371690:
    // 0x371690: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x371690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_371694:
    // 0x371694: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_371698:
    if (ctx->pc == 0x371698u) {
        ctx->pc = 0x371698u;
            // 0x371698: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x37169Cu;
        goto label_37169c;
    }
    ctx->pc = 0x371694u;
    {
        const bool branch_taken_0x371694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x371698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371694u;
            // 0x371698: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371694) {
            ctx->pc = 0x3716A8u;
            goto label_3716a8;
        }
    }
    ctx->pc = 0x37169Cu;
label_37169c:
    // 0x37169c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x37169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3716a0:
    // 0x3716a0: 0xc0a728c  jal         func_29CA30
label_3716a4:
    if (ctx->pc == 0x3716A4u) {
        ctx->pc = 0x3716A4u;
            // 0x3716a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3716A8u;
        goto label_3716a8;
    }
    ctx->pc = 0x3716A0u;
    SET_GPR_U32(ctx, 31, 0x3716A8u);
    ctx->pc = 0x3716A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3716A0u;
            // 0x3716a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716A8u; }
        if (ctx->pc != 0x3716A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716A8u; }
        if (ctx->pc != 0x3716A8u) { return; }
    }
    ctx->pc = 0x3716A8u;
label_3716a8:
    // 0x3716a8: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x3716a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3716ac:
    // 0x3716ac: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3716acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3716b0:
    // 0x3716b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3716b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3716b4:
    // 0x3716b4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3716b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3716b8:
    // 0x3716b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3716b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3716bc:
    // 0x3716bc: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x3716bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_3716c0:
    // 0x3716c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3716c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3716c4:
    // 0x3716c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3716c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3716c8:
    // 0x3716c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3716c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3716cc:
    // 0x3716cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3716ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3716d0:
    // 0x3716d0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x3716d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3716d4:
    // 0x3716d4: 0xc0a7a88  jal         func_29EA20
label_3716d8:
    if (ctx->pc == 0x3716D8u) {
        ctx->pc = 0x3716D8u;
            // 0x3716d8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3716DCu;
        goto label_3716dc;
    }
    ctx->pc = 0x3716D4u;
    SET_GPR_U32(ctx, 31, 0x3716DCu);
    ctx->pc = 0x3716D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3716D4u;
            // 0x3716d8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716DCu; }
        if (ctx->pc != 0x3716DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716DCu; }
        if (ctx->pc != 0x3716DCu) { return; }
    }
    ctx->pc = 0x3716DCu;
label_3716dc:
    // 0x3716dc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3716dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3716e0:
    // 0x3716e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3716e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3716e4:
    // 0x3716e4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3716e8:
    if (ctx->pc == 0x3716E8u) {
        ctx->pc = 0x3716E8u;
            // 0x3716e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3716ECu;
        goto label_3716ec;
    }
    ctx->pc = 0x3716E4u;
    {
        const bool branch_taken_0x3716e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3716E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3716E4u;
            // 0x3716e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3716e4) {
            ctx->pc = 0x371700u;
            goto label_371700;
        }
    }
    ctx->pc = 0x3716ECu;
label_3716ec:
    // 0x3716ec: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x3716ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3716f0:
    // 0x3716f0: 0xc081004  jal         func_204010
label_3716f4:
    if (ctx->pc == 0x3716F4u) {
        ctx->pc = 0x3716F4u;
            // 0x3716f4: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3716F8u;
        goto label_3716f8;
    }
    ctx->pc = 0x3716F0u;
    SET_GPR_U32(ctx, 31, 0x3716F8u);
    ctx->pc = 0x3716F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3716F0u;
            // 0x3716f4: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204010u;
    if (runtime->hasFunction(0x204010u)) {
        auto targetFn = runtime->lookupFunction(0x204010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716F8u; }
        if (ctx->pc != 0x3716F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204010_0x204010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716F8u; }
        if (ctx->pc != 0x3716F8u) { return; }
    }
    ctx->pc = 0x3716F8u;
label_3716f8:
    // 0x3716f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3716f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3716fc:
    // 0x3716fc: 0x0  nop
    ctx->pc = 0x3716fcu;
    // NOP
label_371700:
    // 0x371700: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x371700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_371704:
    // 0x371704: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x371704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_371708:
    // 0x371708: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x371708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_37170c:
    // 0x37170c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37170cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_371710:
    // 0x371710: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x371710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_371714:
    // 0x371714: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_371718:
    if (ctx->pc == 0x371718u) {
        ctx->pc = 0x371718u;
            // 0x371718: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x37171Cu;
        goto label_37171c;
    }
    ctx->pc = 0x371714u;
    {
        const bool branch_taken_0x371714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371714u;
            // 0x371718: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371714) {
            ctx->pc = 0x3715C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3715c4;
        }
    }
    ctx->pc = 0x37171Cu;
label_37171c:
    // 0x37171c: 0xc0dc5d4  jal         func_371750
label_371720:
    if (ctx->pc == 0x371720u) {
        ctx->pc = 0x371720u;
            // 0x371720: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x371724u;
        goto label_371724;
    }
    ctx->pc = 0x37171Cu;
    SET_GPR_U32(ctx, 31, 0x371724u);
    ctx->pc = 0x371720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37171Cu;
            // 0x371720: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371750u;
    if (runtime->hasFunction(0x371750u)) {
        auto targetFn = runtime->lookupFunction(0x371750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371724u; }
        if (ctx->pc != 0x371724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371750_0x371750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371724u; }
        if (ctx->pc != 0x371724u) { return; }
    }
    ctx->pc = 0x371724u;
label_371724:
    // 0x371724: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x371724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_371728:
    // 0x371728: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x371728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37172c:
    // 0x37172c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37172cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_371730:
    // 0x371730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_371734:
    // 0x371734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_371738:
    // 0x371738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37173c:
    // 0x37173c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37173cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371740:
    // 0x371740: 0x3e00008  jr          $ra
label_371744:
    if (ctx->pc == 0x371744u) {
        ctx->pc = 0x371744u;
            // 0x371744: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x371748u;
        goto label_371748;
    }
    ctx->pc = 0x371740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371740u;
            // 0x371744: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371748u;
label_371748:
    // 0x371748: 0x0  nop
    ctx->pc = 0x371748u;
    // NOP
label_37174c:
    // 0x37174c: 0x0  nop
    ctx->pc = 0x37174cu;
    // NOP
}
