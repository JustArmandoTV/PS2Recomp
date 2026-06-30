#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003722F0
// Address: 0x3722f0 - 0x372680
void sub_003722F0_0x3722f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003722F0_0x3722f0");
#endif

    switch (ctx->pc) {
        case 0x3722f0u: goto label_3722f0;
        case 0x3722f4u: goto label_3722f4;
        case 0x3722f8u: goto label_3722f8;
        case 0x3722fcu: goto label_3722fc;
        case 0x372300u: goto label_372300;
        case 0x372304u: goto label_372304;
        case 0x372308u: goto label_372308;
        case 0x37230cu: goto label_37230c;
        case 0x372310u: goto label_372310;
        case 0x372314u: goto label_372314;
        case 0x372318u: goto label_372318;
        case 0x37231cu: goto label_37231c;
        case 0x372320u: goto label_372320;
        case 0x372324u: goto label_372324;
        case 0x372328u: goto label_372328;
        case 0x37232cu: goto label_37232c;
        case 0x372330u: goto label_372330;
        case 0x372334u: goto label_372334;
        case 0x372338u: goto label_372338;
        case 0x37233cu: goto label_37233c;
        case 0x372340u: goto label_372340;
        case 0x372344u: goto label_372344;
        case 0x372348u: goto label_372348;
        case 0x37234cu: goto label_37234c;
        case 0x372350u: goto label_372350;
        case 0x372354u: goto label_372354;
        case 0x372358u: goto label_372358;
        case 0x37235cu: goto label_37235c;
        case 0x372360u: goto label_372360;
        case 0x372364u: goto label_372364;
        case 0x372368u: goto label_372368;
        case 0x37236cu: goto label_37236c;
        case 0x372370u: goto label_372370;
        case 0x372374u: goto label_372374;
        case 0x372378u: goto label_372378;
        case 0x37237cu: goto label_37237c;
        case 0x372380u: goto label_372380;
        case 0x372384u: goto label_372384;
        case 0x372388u: goto label_372388;
        case 0x37238cu: goto label_37238c;
        case 0x372390u: goto label_372390;
        case 0x372394u: goto label_372394;
        case 0x372398u: goto label_372398;
        case 0x37239cu: goto label_37239c;
        case 0x3723a0u: goto label_3723a0;
        case 0x3723a4u: goto label_3723a4;
        case 0x3723a8u: goto label_3723a8;
        case 0x3723acu: goto label_3723ac;
        case 0x3723b0u: goto label_3723b0;
        case 0x3723b4u: goto label_3723b4;
        case 0x3723b8u: goto label_3723b8;
        case 0x3723bcu: goto label_3723bc;
        case 0x3723c0u: goto label_3723c0;
        case 0x3723c4u: goto label_3723c4;
        case 0x3723c8u: goto label_3723c8;
        case 0x3723ccu: goto label_3723cc;
        case 0x3723d0u: goto label_3723d0;
        case 0x3723d4u: goto label_3723d4;
        case 0x3723d8u: goto label_3723d8;
        case 0x3723dcu: goto label_3723dc;
        case 0x3723e0u: goto label_3723e0;
        case 0x3723e4u: goto label_3723e4;
        case 0x3723e8u: goto label_3723e8;
        case 0x3723ecu: goto label_3723ec;
        case 0x3723f0u: goto label_3723f0;
        case 0x3723f4u: goto label_3723f4;
        case 0x3723f8u: goto label_3723f8;
        case 0x3723fcu: goto label_3723fc;
        case 0x372400u: goto label_372400;
        case 0x372404u: goto label_372404;
        case 0x372408u: goto label_372408;
        case 0x37240cu: goto label_37240c;
        case 0x372410u: goto label_372410;
        case 0x372414u: goto label_372414;
        case 0x372418u: goto label_372418;
        case 0x37241cu: goto label_37241c;
        case 0x372420u: goto label_372420;
        case 0x372424u: goto label_372424;
        case 0x372428u: goto label_372428;
        case 0x37242cu: goto label_37242c;
        case 0x372430u: goto label_372430;
        case 0x372434u: goto label_372434;
        case 0x372438u: goto label_372438;
        case 0x37243cu: goto label_37243c;
        case 0x372440u: goto label_372440;
        case 0x372444u: goto label_372444;
        case 0x372448u: goto label_372448;
        case 0x37244cu: goto label_37244c;
        case 0x372450u: goto label_372450;
        case 0x372454u: goto label_372454;
        case 0x372458u: goto label_372458;
        case 0x37245cu: goto label_37245c;
        case 0x372460u: goto label_372460;
        case 0x372464u: goto label_372464;
        case 0x372468u: goto label_372468;
        case 0x37246cu: goto label_37246c;
        case 0x372470u: goto label_372470;
        case 0x372474u: goto label_372474;
        case 0x372478u: goto label_372478;
        case 0x37247cu: goto label_37247c;
        case 0x372480u: goto label_372480;
        case 0x372484u: goto label_372484;
        case 0x372488u: goto label_372488;
        case 0x37248cu: goto label_37248c;
        case 0x372490u: goto label_372490;
        case 0x372494u: goto label_372494;
        case 0x372498u: goto label_372498;
        case 0x37249cu: goto label_37249c;
        case 0x3724a0u: goto label_3724a0;
        case 0x3724a4u: goto label_3724a4;
        case 0x3724a8u: goto label_3724a8;
        case 0x3724acu: goto label_3724ac;
        case 0x3724b0u: goto label_3724b0;
        case 0x3724b4u: goto label_3724b4;
        case 0x3724b8u: goto label_3724b8;
        case 0x3724bcu: goto label_3724bc;
        case 0x3724c0u: goto label_3724c0;
        case 0x3724c4u: goto label_3724c4;
        case 0x3724c8u: goto label_3724c8;
        case 0x3724ccu: goto label_3724cc;
        case 0x3724d0u: goto label_3724d0;
        case 0x3724d4u: goto label_3724d4;
        case 0x3724d8u: goto label_3724d8;
        case 0x3724dcu: goto label_3724dc;
        case 0x3724e0u: goto label_3724e0;
        case 0x3724e4u: goto label_3724e4;
        case 0x3724e8u: goto label_3724e8;
        case 0x3724ecu: goto label_3724ec;
        case 0x3724f0u: goto label_3724f0;
        case 0x3724f4u: goto label_3724f4;
        case 0x3724f8u: goto label_3724f8;
        case 0x3724fcu: goto label_3724fc;
        case 0x372500u: goto label_372500;
        case 0x372504u: goto label_372504;
        case 0x372508u: goto label_372508;
        case 0x37250cu: goto label_37250c;
        case 0x372510u: goto label_372510;
        case 0x372514u: goto label_372514;
        case 0x372518u: goto label_372518;
        case 0x37251cu: goto label_37251c;
        case 0x372520u: goto label_372520;
        case 0x372524u: goto label_372524;
        case 0x372528u: goto label_372528;
        case 0x37252cu: goto label_37252c;
        case 0x372530u: goto label_372530;
        case 0x372534u: goto label_372534;
        case 0x372538u: goto label_372538;
        case 0x37253cu: goto label_37253c;
        case 0x372540u: goto label_372540;
        case 0x372544u: goto label_372544;
        case 0x372548u: goto label_372548;
        case 0x37254cu: goto label_37254c;
        case 0x372550u: goto label_372550;
        case 0x372554u: goto label_372554;
        case 0x372558u: goto label_372558;
        case 0x37255cu: goto label_37255c;
        case 0x372560u: goto label_372560;
        case 0x372564u: goto label_372564;
        case 0x372568u: goto label_372568;
        case 0x37256cu: goto label_37256c;
        case 0x372570u: goto label_372570;
        case 0x372574u: goto label_372574;
        case 0x372578u: goto label_372578;
        case 0x37257cu: goto label_37257c;
        case 0x372580u: goto label_372580;
        case 0x372584u: goto label_372584;
        case 0x372588u: goto label_372588;
        case 0x37258cu: goto label_37258c;
        case 0x372590u: goto label_372590;
        case 0x372594u: goto label_372594;
        case 0x372598u: goto label_372598;
        case 0x37259cu: goto label_37259c;
        case 0x3725a0u: goto label_3725a0;
        case 0x3725a4u: goto label_3725a4;
        case 0x3725a8u: goto label_3725a8;
        case 0x3725acu: goto label_3725ac;
        case 0x3725b0u: goto label_3725b0;
        case 0x3725b4u: goto label_3725b4;
        case 0x3725b8u: goto label_3725b8;
        case 0x3725bcu: goto label_3725bc;
        case 0x3725c0u: goto label_3725c0;
        case 0x3725c4u: goto label_3725c4;
        case 0x3725c8u: goto label_3725c8;
        case 0x3725ccu: goto label_3725cc;
        case 0x3725d0u: goto label_3725d0;
        case 0x3725d4u: goto label_3725d4;
        case 0x3725d8u: goto label_3725d8;
        case 0x3725dcu: goto label_3725dc;
        case 0x3725e0u: goto label_3725e0;
        case 0x3725e4u: goto label_3725e4;
        case 0x3725e8u: goto label_3725e8;
        case 0x3725ecu: goto label_3725ec;
        case 0x3725f0u: goto label_3725f0;
        case 0x3725f4u: goto label_3725f4;
        case 0x3725f8u: goto label_3725f8;
        case 0x3725fcu: goto label_3725fc;
        case 0x372600u: goto label_372600;
        case 0x372604u: goto label_372604;
        case 0x372608u: goto label_372608;
        case 0x37260cu: goto label_37260c;
        case 0x372610u: goto label_372610;
        case 0x372614u: goto label_372614;
        case 0x372618u: goto label_372618;
        case 0x37261cu: goto label_37261c;
        case 0x372620u: goto label_372620;
        case 0x372624u: goto label_372624;
        case 0x372628u: goto label_372628;
        case 0x37262cu: goto label_37262c;
        case 0x372630u: goto label_372630;
        case 0x372634u: goto label_372634;
        case 0x372638u: goto label_372638;
        case 0x37263cu: goto label_37263c;
        case 0x372640u: goto label_372640;
        case 0x372644u: goto label_372644;
        case 0x372648u: goto label_372648;
        case 0x37264cu: goto label_37264c;
        case 0x372650u: goto label_372650;
        case 0x372654u: goto label_372654;
        case 0x372658u: goto label_372658;
        case 0x37265cu: goto label_37265c;
        case 0x372660u: goto label_372660;
        case 0x372664u: goto label_372664;
        case 0x372668u: goto label_372668;
        case 0x37266cu: goto label_37266c;
        case 0x372670u: goto label_372670;
        case 0x372674u: goto label_372674;
        case 0x372678u: goto label_372678;
        case 0x37267cu: goto label_37267c;
        default: break;
    }

    ctx->pc = 0x3722f0u;

label_3722f0:
    // 0x3722f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3722f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3722f4:
    // 0x3722f4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x3722f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_3722f8:
    // 0x3722f8: 0x24426de0  addiu       $v0, $v0, 0x6DE0
    ctx->pc = 0x3722f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28128));
label_3722fc:
    // 0x3722fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3722fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_372300:
    // 0x372300: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x372300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_372304:
    // 0x372304: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x372304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372308:
    // 0x372308: 0x3e00008  jr          $ra
label_37230c:
    if (ctx->pc == 0x37230Cu) {
        ctx->pc = 0x37230Cu;
            // 0x37230c: 0xac656050  sw          $a1, 0x6050($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24656), GPR_U32(ctx, 5));
        ctx->pc = 0x372310u;
        goto label_372310;
    }
    ctx->pc = 0x372308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372308u;
            // 0x37230c: 0xac656050  sw          $a1, 0x6050($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24656), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372310u;
label_372310:
    // 0x372310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_372314:
    // 0x372314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x372314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_372318:
    // 0x372318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37231c:
    // 0x37231c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_372320:
    // 0x372320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372324:
    // 0x372324: 0x8c840bc0  lw          $a0, 0xBC0($a0)
    ctx->pc = 0x372324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3008)));
label_372328:
    // 0x372328: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37232c:
    if (ctx->pc == 0x37232Cu) {
        ctx->pc = 0x37232Cu;
            // 0x37232c: 0xae000bc0  sw          $zero, 0xBC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3008), GPR_U32(ctx, 0));
        ctx->pc = 0x372330u;
        goto label_372330;
    }
    ctx->pc = 0x372328u;
    {
        const bool branch_taken_0x372328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372328) {
            ctx->pc = 0x37232Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372328u;
            // 0x37232c: 0xae000bc0  sw          $zero, 0xBC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372344u;
            goto label_372344;
        }
    }
    ctx->pc = 0x372330u;
label_372330:
    // 0x372330: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x372330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_372334:
    // 0x372334: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x372334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_372338:
    // 0x372338: 0x320f809  jalr        $t9
label_37233c:
    if (ctx->pc == 0x37233Cu) {
        ctx->pc = 0x37233Cu;
            // 0x37233c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x372340u;
        goto label_372340;
    }
    ctx->pc = 0x372338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372340u);
        ctx->pc = 0x37233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372338u;
            // 0x37233c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372340u; }
            if (ctx->pc != 0x372340u) { return; }
        }
        }
    }
    ctx->pc = 0x372340u;
label_372340:
    // 0x372340: 0xae000bc0  sw          $zero, 0xBC0($s0)
    ctx->pc = 0x372340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3008), GPR_U32(ctx, 0));
label_372344:
    // 0x372344: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x372344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_372348:
    // 0x372348: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x372348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37234c:
    // 0x37234c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37234cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_372350:
    // 0x372350: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x372350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_372354:
    // 0x372354: 0x320f809  jalr        $t9
label_372358:
    if (ctx->pc == 0x372358u) {
        ctx->pc = 0x372358u;
            // 0x372358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37235Cu;
        goto label_37235c;
    }
    ctx->pc = 0x372354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37235Cu);
        ctx->pc = 0x372358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372354u;
            // 0x372358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37235Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37235Cu; }
            if (ctx->pc != 0x37235Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37235Cu;
label_37235c:
    // 0x37235c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x37235cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_372360:
    // 0x372360: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_372364:
    if (ctx->pc == 0x372364u) {
        ctx->pc = 0x372364u;
            // 0x372364: 0x263100f0  addiu       $s1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x372368u;
        goto label_372368;
    }
    ctx->pc = 0x372360u;
    {
        const bool branch_taken_0x372360 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x372364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372360u;
            // 0x372364: 0x263100f0  addiu       $s1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372360) {
            ctx->pc = 0x37234Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37234c;
        }
    }
    ctx->pc = 0x372368u;
label_372368:
    // 0x372368: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x372368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37236c:
    // 0x37236c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37236cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372370:
    // 0x372370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372374:
    // 0x372374: 0x3e00008  jr          $ra
label_372378:
    if (ctx->pc == 0x372378u) {
        ctx->pc = 0x372378u;
            // 0x372378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37237Cu;
        goto label_37237c;
    }
    ctx->pc = 0x372374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372374u;
            // 0x372378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37237Cu;
label_37237c:
    // 0x37237c: 0x0  nop
    ctx->pc = 0x37237cu;
    // NOP
label_372380:
    // 0x372380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x372380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_372384:
    // 0x372384: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x372384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_372388:
    // 0x372388: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x372388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37238c:
    // 0x37238c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_372390:
    // 0x372390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_372394:
    // 0x372394: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x372394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372398:
    // 0x372398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37239c:
    // 0x37239c: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x37239cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_3723a0:
    // 0x3723a0: 0x8c636050  lw          $v1, 0x6050($v1)
    ctx->pc = 0x3723a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24656)));
label_3723a4:
    // 0x3723a4: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3723a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3723a8:
    // 0x3723a8: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_3723ac:
    if (ctx->pc == 0x3723ACu) {
        ctx->pc = 0x3723ACu;
            // 0x3723ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3723B0u;
        goto label_3723b0;
    }
    ctx->pc = 0x3723A8u;
    {
        const bool branch_taken_0x3723a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3723A8u;
            // 0x3723ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723a8) {
            ctx->pc = 0x37248Cu;
            goto label_37248c;
        }
    }
    ctx->pc = 0x3723B0u;
label_3723b0:
    // 0x3723b0: 0x8e430bc0  lw          $v1, 0xBC0($s2)
    ctx->pc = 0x3723b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3008)));
label_3723b4:
    // 0x3723b4: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_3723b8:
    if (ctx->pc == 0x3723B8u) {
        ctx->pc = 0x3723B8u;
            // 0x3723b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3723BCu;
        goto label_3723bc;
    }
    ctx->pc = 0x3723B4u;
    {
        const bool branch_taken_0x3723b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3723b4) {
            ctx->pc = 0x3723B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3723B4u;
            // 0x3723b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372490u;
            goto label_372490;
        }
    }
    ctx->pc = 0x3723BCu;
label_3723bc:
    // 0x3723bc: 0xae3200d4  sw          $s2, 0xD4($s1)
    ctx->pc = 0x3723bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 18));
label_3723c0:
    // 0x3723c0: 0xae3000d8  sw          $s0, 0xD8($s1)
    ctx->pc = 0x3723c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
label_3723c4:
    // 0x3723c4: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x3723c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3723c8:
    // 0x3723c8: 0xc0d879c  jal         func_361E70
label_3723cc:
    if (ctx->pc == 0x3723CCu) {
        ctx->pc = 0x3723CCu;
            // 0x3723cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3723D0u;
        goto label_3723d0;
    }
    ctx->pc = 0x3723C8u;
    SET_GPR_U32(ctx, 31, 0x3723D0u);
    ctx->pc = 0x3723CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3723C8u;
            // 0x3723cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3723D0u; }
        if (ctx->pc != 0x3723D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3723D0u; }
        if (ctx->pc != 0x3723D0u) { return; }
    }
    ctx->pc = 0x3723D0u;
label_3723d0:
    // 0x3723d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3723d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3723d4:
    // 0x3723d4: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x3723d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_3723d8:
    // 0x3723d8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3723dc:
    if (ctx->pc == 0x3723DCu) {
        ctx->pc = 0x3723DCu;
            // 0x3723dc: 0x263100f0  addiu       $s1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x3723E0u;
        goto label_3723e0;
    }
    ctx->pc = 0x3723D8u;
    {
        const bool branch_taken_0x3723d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3723DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3723D8u;
            // 0x3723dc: 0x263100f0  addiu       $s1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723d8) {
            ctx->pc = 0x3723BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3723bc;
        }
    }
    ctx->pc = 0x3723E0u;
label_3723e0:
    // 0x3723e0: 0xc040180  jal         func_100600
label_3723e4:
    if (ctx->pc == 0x3723E4u) {
        ctx->pc = 0x3723E4u;
            // 0x3723e4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3723E8u;
        goto label_3723e8;
    }
    ctx->pc = 0x3723E0u;
    SET_GPR_U32(ctx, 31, 0x3723E8u);
    ctx->pc = 0x3723E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3723E0u;
            // 0x3723e4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3723E8u; }
        if (ctx->pc != 0x3723E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3723E8u; }
        if (ctx->pc != 0x3723E8u) { return; }
    }
    ctx->pc = 0x3723E8u;
label_3723e8:
    // 0x3723e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3723e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3723ec:
    // 0x3723ec: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3723f0:
    if (ctx->pc == 0x3723F0u) {
        ctx->pc = 0x3723F0u;
            // 0x3723f0: 0x3c0247af  lui         $v0, 0x47AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18351 << 16));
        ctx->pc = 0x3723F4u;
        goto label_3723f4;
    }
    ctx->pc = 0x3723ECu;
    {
        const bool branch_taken_0x3723ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3723ec) {
            ctx->pc = 0x3723F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3723ECu;
            // 0x3723f0: 0x3c0247af  lui         $v0, 0x47AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18351 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37242Cu;
            goto label_37242c;
        }
    }
    ctx->pc = 0x3723F4u;
label_3723f4:
    // 0x3723f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3723f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3723f8:
    // 0x3723f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3723f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3723fc:
    // 0x3723fc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3723fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_372400:
    // 0x372400: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x372400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_372404:
    // 0x372404: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x372404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_372408:
    // 0x372408: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x372408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_37240c:
    // 0x37240c: 0xc040138  jal         func_1004E0
label_372410:
    if (ctx->pc == 0x372410u) {
        ctx->pc = 0x372410u;
            // 0x372410: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x372414u;
        goto label_372414;
    }
    ctx->pc = 0x37240Cu;
    SET_GPR_U32(ctx, 31, 0x372414u);
    ctx->pc = 0x372410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37240Cu;
            // 0x372410: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372414u; }
        if (ctx->pc != 0x372414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372414u; }
        if (ctx->pc != 0x372414u) { return; }
    }
    ctx->pc = 0x372414u;
label_372414:
    // 0x372414: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x372414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_372418:
    // 0x372418: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x372418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_37241c:
    // 0x37241c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37241cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372420:
    // 0x372420: 0xc04a576  jal         func_1295D8
label_372424:
    if (ctx->pc == 0x372424u) {
        ctx->pc = 0x372424u;
            // 0x372424: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x372428u;
        goto label_372428;
    }
    ctx->pc = 0x372420u;
    SET_GPR_U32(ctx, 31, 0x372428u);
    ctx->pc = 0x372424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372420u;
            // 0x372424: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372428u; }
        if (ctx->pc != 0x372428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372428u; }
        if (ctx->pc != 0x372428u) { return; }
    }
    ctx->pc = 0x372428u;
label_372428:
    // 0x372428: 0x3c0247af  lui         $v0, 0x47AF
    ctx->pc = 0x372428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18351 << 16));
label_37242c:
    // 0x37242c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_372430:
    // 0x372430: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x372430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_372434:
    // 0x372434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372438:
    // 0x372438: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x372438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_37243c:
    // 0x37243c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37243cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372440:
    // 0x372440: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x372440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_372444:
    // 0x372444: 0xae500bc0  sw          $s0, 0xBC0($s2)
    ctx->pc = 0x372444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3008), GPR_U32(ctx, 16));
label_372448:
    // 0x372448: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x372448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37244c:
    // 0x37244c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x37244cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_372450:
    // 0x372450: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x372450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_372454:
    // 0x372454: 0xc122cd8  jal         func_48B360
label_372458:
    if (ctx->pc == 0x372458u) {
        ctx->pc = 0x372458u;
            // 0x372458: 0x34460cae  ori         $a2, $v0, 0xCAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
        ctx->pc = 0x37245Cu;
        goto label_37245c;
    }
    ctx->pc = 0x372454u;
    SET_GPR_U32(ctx, 31, 0x37245Cu);
    ctx->pc = 0x372458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372454u;
            // 0x372458: 0x34460cae  ori         $a2, $v0, 0xCAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37245Cu; }
        if (ctx->pc != 0x37245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37245Cu; }
        if (ctx->pc != 0x37245Cu) { return; }
    }
    ctx->pc = 0x37245Cu;
label_37245c:
    // 0x37245c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x37245cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_372460:
    // 0x372460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_372464:
    // 0x372464: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x372464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_372468:
    // 0x372468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37246c:
    // 0x37246c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x37246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_372470:
    // 0x372470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372474:
    // 0x372474: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x372474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_372478:
    // 0x372478: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x372478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37247c:
    // 0x37247c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_372480:
    // 0x372480: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x372480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_372484:
    // 0x372484: 0xc122cd8  jal         func_48B360
label_372488:
    if (ctx->pc == 0x372488u) {
        ctx->pc = 0x372488u;
            // 0x372488: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x37248Cu;
        goto label_37248c;
    }
    ctx->pc = 0x372484u;
    SET_GPR_U32(ctx, 31, 0x37248Cu);
    ctx->pc = 0x372488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372484u;
            // 0x372488: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37248Cu; }
        if (ctx->pc != 0x37248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37248Cu; }
        if (ctx->pc != 0x37248Cu) { return; }
    }
    ctx->pc = 0x37248Cu;
label_37248c:
    // 0x37248c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_372490:
    // 0x372490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_372494:
    // 0x372494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372498:
    // 0x372498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37249c:
    // 0x37249c: 0x3e00008  jr          $ra
label_3724a0:
    if (ctx->pc == 0x3724A0u) {
        ctx->pc = 0x3724A0u;
            // 0x3724a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3724A4u;
        goto label_3724a4;
    }
    ctx->pc = 0x37249Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3724A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37249Cu;
            // 0x3724a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3724A4u;
label_3724a4:
    // 0x3724a4: 0x0  nop
    ctx->pc = 0x3724a4u;
    // NOP
label_3724a8:
    // 0x3724a8: 0x0  nop
    ctx->pc = 0x3724a8u;
    // NOP
label_3724ac:
    // 0x3724ac: 0x0  nop
    ctx->pc = 0x3724acu;
    // NOP
label_3724b0:
    // 0x3724b0: 0x3e00008  jr          $ra
label_3724b4:
    if (ctx->pc == 0x3724B4u) {
        ctx->pc = 0x3724B8u;
        goto label_3724b8;
    }
    ctx->pc = 0x3724B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3724B8u;
label_3724b8:
    // 0x3724b8: 0x0  nop
    ctx->pc = 0x3724b8u;
    // NOP
label_3724bc:
    // 0x3724bc: 0x0  nop
    ctx->pc = 0x3724bcu;
    // NOP
label_3724c0:
    // 0x3724c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3724c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3724c4:
    // 0x3724c4: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x3724c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_3724c8:
    // 0x3724c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3724c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3724cc:
    // 0x3724cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3724ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3724d0:
    // 0x3724d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3724d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3724d4:
    // 0x3724d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3724d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3724d8:
    // 0x3724d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3724d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3724dc:
    // 0x3724dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3724dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3724e0:
    // 0x3724e0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3724e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3724e4:
    // 0x3724e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3724e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3724e8:
    // 0x3724e8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_3724ec:
    if (ctx->pc == 0x3724ECu) {
        ctx->pc = 0x3724ECu;
            // 0x3724ec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3724F0u;
        goto label_3724f0;
    }
    ctx->pc = 0x3724E8u;
    {
        const bool branch_taken_0x3724e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3724ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3724E8u;
            // 0x3724ec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3724e8) {
            ctx->pc = 0x372580u;
            goto label_372580;
        }
    }
    ctx->pc = 0x3724F0u;
label_3724f0:
    // 0x3724f0: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x3724f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
label_3724f4:
    // 0x3724f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3724f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3724f8:
    // 0x3724f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3724f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3724fc:
    // 0x3724fc: 0x0  nop
    ctx->pc = 0x3724fcu;
    // NOP
label_372500:
    // 0x372500: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x372500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_372504:
    // 0x372504: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_372508:
    if (ctx->pc == 0x372508u) {
        ctx->pc = 0x372508u;
            // 0x372508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37250Cu;
        goto label_37250c;
    }
    ctx->pc = 0x372504u;
    {
        const bool branch_taken_0x372504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372504) {
            ctx->pc = 0x372508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372504u;
            // 0x372508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372550u;
            goto label_372550;
        }
    }
    ctx->pc = 0x37250Cu;
label_37250c:
    // 0x37250c: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x37250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_372510:
    // 0x372510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x372510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_372514:
    // 0x372514: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_372518:
    if (ctx->pc == 0x372518u) {
        ctx->pc = 0x37251Cu;
        goto label_37251c;
    }
    ctx->pc = 0x372514u;
    {
        const bool branch_taken_0x372514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372514) {
            ctx->pc = 0x37254Cu;
            goto label_37254c;
        }
    }
    ctx->pc = 0x37251Cu;
label_37251c:
    // 0x37251c: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x37251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_372520:
    // 0x372520: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x372520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_372524:
    // 0x372524: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x372524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_372528:
    // 0x372528: 0x320f809  jalr        $t9
label_37252c:
    if (ctx->pc == 0x37252Cu) {
        ctx->pc = 0x37252Cu;
            // 0x37252c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x372530u;
        goto label_372530;
    }
    ctx->pc = 0x372528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372530u);
        ctx->pc = 0x37252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372528u;
            // 0x37252c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372530u; }
            if (ctx->pc != 0x372530u) { return; }
        }
        }
    }
    ctx->pc = 0x372530u;
label_372530:
    // 0x372530: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x372530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_372534:
    // 0x372534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_372538:
    // 0x372538: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x372538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_37253c:
    // 0x37253c: 0x320f809  jalr        $t9
label_372540:
    if (ctx->pc == 0x372540u) {
        ctx->pc = 0x372540u;
            // 0x372540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x372544u;
        goto label_372544;
    }
    ctx->pc = 0x37253Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372544u);
        ctx->pc = 0x372540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37253Cu;
            // 0x372540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372544u; }
            if (ctx->pc != 0x372544u) { return; }
        }
        }
    }
    ctx->pc = 0x372544u;
label_372544:
    // 0x372544: 0x1000000f  b           . + 4 + (0xF << 2)
label_372548:
    if (ctx->pc == 0x372548u) {
        ctx->pc = 0x372548u;
            // 0x372548: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x37254Cu;
        goto label_37254c;
    }
    ctx->pc = 0x372544u;
    {
        const bool branch_taken_0x372544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372544u;
            // 0x372548: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372544) {
            ctx->pc = 0x372584u;
            goto label_372584;
        }
    }
    ctx->pc = 0x37254Cu;
label_37254c:
    // 0x37254c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_372550:
    // 0x372550: 0xc0e34b0  jal         func_38D2C0
label_372554:
    if (ctx->pc == 0x372554u) {
        ctx->pc = 0x372558u;
        goto label_372558;
    }
    ctx->pc = 0x372550u;
    SET_GPR_U32(ctx, 31, 0x372558u);
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372558u; }
        if (ctx->pc != 0x372558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372558u; }
        if (ctx->pc != 0x372558u) { return; }
    }
    ctx->pc = 0x372558u;
label_372558:
    // 0x372558: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x372558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_37255c:
    // 0x37255c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372560:
    // 0x372560: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_372564:
    if (ctx->pc == 0x372564u) {
        ctx->pc = 0x372568u;
        goto label_372568;
    }
    ctx->pc = 0x372560u;
    {
        const bool branch_taken_0x372560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x372560) {
            ctx->pc = 0x372580u;
            goto label_372580;
        }
    }
    ctx->pc = 0x372568u;
label_372568:
    // 0x372568: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x372568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_37256c:
    // 0x37256c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x37256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_372570:
    // 0x372570: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x372570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_372574:
    // 0x372574: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x372574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_372578:
    // 0x372578: 0x320f809  jalr        $t9
label_37257c:
    if (ctx->pc == 0x37257Cu) {
        ctx->pc = 0x37257Cu;
            // 0x37257c: 0x34450ca9  ori         $a1, $v0, 0xCA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3241);
        ctx->pc = 0x372580u;
        goto label_372580;
    }
    ctx->pc = 0x372578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x372580u);
        ctx->pc = 0x37257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372578u;
            // 0x37257c: 0x34450ca9  ori         $a1, $v0, 0xCA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3241);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x372580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x372580u; }
            if (ctx->pc != 0x372580u) { return; }
        }
        }
    }
    ctx->pc = 0x372580u;
label_372580:
    // 0x372580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x372580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_372584:
    // 0x372584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372588:
    // 0x372588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37258c:
    // 0x37258c: 0x3e00008  jr          $ra
label_372590:
    if (ctx->pc == 0x372590u) {
        ctx->pc = 0x372590u;
            // 0x372590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x372594u;
        goto label_372594;
    }
    ctx->pc = 0x37258Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37258Cu;
            // 0x372590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x372594u;
label_372594:
    // 0x372594: 0x0  nop
    ctx->pc = 0x372594u;
    // NOP
label_372598:
    // 0x372598: 0x0  nop
    ctx->pc = 0x372598u;
    // NOP
label_37259c:
    // 0x37259c: 0x0  nop
    ctx->pc = 0x37259cu;
    // NOP
label_3725a0:
    // 0x3725a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3725a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3725a4:
    // 0x3725a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3725a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3725a8:
    // 0x3725a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3725a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3725ac:
    // 0x3725ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3725acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3725b0:
    // 0x3725b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3725b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3725b4:
    // 0x3725b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3725b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3725b8:
    // 0x3725b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3725b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3725bc:
    // 0x3725bc: 0xac8200d0  sw          $v0, 0xD0($a0)
    ctx->pc = 0x3725bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 2));
label_3725c0:
    // 0x3725c0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3725c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3725c4:
    // 0x3725c4: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x3725c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3725c8:
    // 0x3725c8: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x3725c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_3725cc:
    // 0x3725cc: 0xc0dc9bc  jal         func_3726F0
label_3725d0:
    if (ctx->pc == 0x3725D0u) {
        ctx->pc = 0x3725D0u;
            // 0x3725d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3725D4u;
        goto label_3725d4;
    }
    ctx->pc = 0x3725CCu;
    SET_GPR_U32(ctx, 31, 0x3725D4u);
    ctx->pc = 0x3725D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3725CCu;
            // 0x3725d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725D4u; }
        if (ctx->pc != 0x3725D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725D4u; }
        if (ctx->pc != 0x3725D4u) { return; }
    }
    ctx->pc = 0x3725D4u;
label_3725d4:
    // 0x3725d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3725d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3725d8:
    // 0x3725d8: 0xc0dc9a0  jal         func_372680
label_3725dc:
    if (ctx->pc == 0x3725DCu) {
        ctx->pc = 0x3725DCu;
            // 0x3725dc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3725E0u;
        goto label_3725e0;
    }
    ctx->pc = 0x3725D8u;
    SET_GPR_U32(ctx, 31, 0x3725E0u);
    ctx->pc = 0x3725DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3725D8u;
            // 0x3725dc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725E0u; }
        if (ctx->pc != 0x3725E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725E0u; }
        if (ctx->pc != 0x3725E0u) { return; }
    }
    ctx->pc = 0x3725E0u;
label_3725e0:
    // 0x3725e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3725e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3725e4:
    // 0x3725e4: 0xc04f278  jal         func_13C9E0
label_3725e8:
    if (ctx->pc == 0x3725E8u) {
        ctx->pc = 0x3725E8u;
            // 0x3725e8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3725ECu;
        goto label_3725ec;
    }
    ctx->pc = 0x3725E4u;
    SET_GPR_U32(ctx, 31, 0x3725ECu);
    ctx->pc = 0x3725E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3725E4u;
            // 0x3725e8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725ECu; }
        if (ctx->pc != 0x3725ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725ECu; }
        if (ctx->pc != 0x3725ECu) { return; }
    }
    ctx->pc = 0x3725ECu;
label_3725ec:
    // 0x3725ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3725ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3725f0:
    // 0x3725f0: 0xc04ce80  jal         func_133A00
label_3725f4:
    if (ctx->pc == 0x3725F4u) {
        ctx->pc = 0x3725F4u;
            // 0x3725f4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3725F8u;
        goto label_3725f8;
    }
    ctx->pc = 0x3725F0u;
    SET_GPR_U32(ctx, 31, 0x3725F8u);
    ctx->pc = 0x3725F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3725F0u;
            // 0x3725f4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725F8u; }
        if (ctx->pc != 0x3725F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725F8u; }
        if (ctx->pc != 0x3725F8u) { return; }
    }
    ctx->pc = 0x3725F8u;
label_3725f8:
    // 0x3725f8: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x3725f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_3725fc:
    // 0x3725fc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3725fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_372600:
    // 0x372600: 0x24424e90  addiu       $v0, $v0, 0x4E90
    ctx->pc = 0x372600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20112));
label_372604:
    // 0x372604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_372608:
    // 0x372608: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x372608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37260c:
    // 0x37260c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37260cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_372610:
    // 0x372610: 0xc04cca0  jal         func_133280
label_372614:
    if (ctx->pc == 0x372614u) {
        ctx->pc = 0x372614u;
            // 0x372614: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x372618u;
        goto label_372618;
    }
    ctx->pc = 0x372610u;
    SET_GPR_U32(ctx, 31, 0x372618u);
    ctx->pc = 0x372614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372610u;
            // 0x372614: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372618u; }
        if (ctx->pc != 0x372618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372618u; }
        if (ctx->pc != 0x372618u) { return; }
    }
    ctx->pc = 0x372618u;
label_372618:
    // 0x372618: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x372618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37261c:
    // 0x37261c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x37261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_372620:
    // 0x372620: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x372620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372624:
    // 0x372624: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x372624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_372628:
    // 0x372628: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x372628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37262c:
    // 0x37262c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x37262cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_372630:
    // 0x372630: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x372630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_372634:
    // 0x372634: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x372634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_372638:
    // 0x372638: 0xc089290  jal         func_224A40
label_37263c:
    if (ctx->pc == 0x37263Cu) {
        ctx->pc = 0x37263Cu;
            // 0x37263c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->pc = 0x372640u;
        goto label_372640;
    }
    ctx->pc = 0x372638u;
    SET_GPR_U32(ctx, 31, 0x372640u);
    ctx->pc = 0x37263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372638u;
            // 0x37263c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372640u; }
        if (ctx->pc != 0x372640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372640u; }
        if (ctx->pc != 0x372640u) { return; }
    }
    ctx->pc = 0x372640u;
label_372640:
    // 0x372640: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x372640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_372644:
    // 0x372644: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x372644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_372648:
    // 0x372648: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x372648u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_37264c:
    // 0x37264c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x37264cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_372650:
    // 0x372650: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_372654:
    if (ctx->pc == 0x372654u) {
        ctx->pc = 0x372654u;
            // 0x372654: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x372658u;
        goto label_372658;
    }
    ctx->pc = 0x372650u;
    {
        const bool branch_taken_0x372650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x372650) {
            ctx->pc = 0x372654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x372650u;
            // 0x372654: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x372668u;
            goto label_372668;
        }
    }
    ctx->pc = 0x372658u;
label_372658:
    // 0x372658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37265c:
    // 0x37265c: 0xc0ba938  jal         func_2EA4E0
label_372660:
    if (ctx->pc == 0x372660u) {
        ctx->pc = 0x372660u;
            // 0x372660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x372664u;
        goto label_372664;
    }
    ctx->pc = 0x37265Cu;
    SET_GPR_U32(ctx, 31, 0x372664u);
    ctx->pc = 0x372660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37265Cu;
            // 0x372660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372664u; }
        if (ctx->pc != 0x372664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372664u; }
        if (ctx->pc != 0x372664u) { return; }
    }
    ctx->pc = 0x372664u;
label_372664:
    // 0x372664: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x372664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_372668:
    // 0x372668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37266c:
    // 0x37266c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37266cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_372670:
    // 0x372670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372674:
    // 0x372674: 0x3e00008  jr          $ra
label_372678:
    if (ctx->pc == 0x372678u) {
        ctx->pc = 0x372678u;
            // 0x372678: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x37267Cu;
        goto label_37267c;
    }
    ctx->pc = 0x372674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x372674u;
            // 0x372678: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37267Cu;
label_37267c:
    // 0x37267c: 0x0  nop
    ctx->pc = 0x37267cu;
    // NOP
}
