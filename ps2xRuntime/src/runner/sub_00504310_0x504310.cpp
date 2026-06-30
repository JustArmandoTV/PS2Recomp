#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00504310
// Address: 0x504310 - 0x504690
void sub_00504310_0x504310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504310_0x504310");
#endif

    switch (ctx->pc) {
        case 0x504310u: goto label_504310;
        case 0x504314u: goto label_504314;
        case 0x504318u: goto label_504318;
        case 0x50431cu: goto label_50431c;
        case 0x504320u: goto label_504320;
        case 0x504324u: goto label_504324;
        case 0x504328u: goto label_504328;
        case 0x50432cu: goto label_50432c;
        case 0x504330u: goto label_504330;
        case 0x504334u: goto label_504334;
        case 0x504338u: goto label_504338;
        case 0x50433cu: goto label_50433c;
        case 0x504340u: goto label_504340;
        case 0x504344u: goto label_504344;
        case 0x504348u: goto label_504348;
        case 0x50434cu: goto label_50434c;
        case 0x504350u: goto label_504350;
        case 0x504354u: goto label_504354;
        case 0x504358u: goto label_504358;
        case 0x50435cu: goto label_50435c;
        case 0x504360u: goto label_504360;
        case 0x504364u: goto label_504364;
        case 0x504368u: goto label_504368;
        case 0x50436cu: goto label_50436c;
        case 0x504370u: goto label_504370;
        case 0x504374u: goto label_504374;
        case 0x504378u: goto label_504378;
        case 0x50437cu: goto label_50437c;
        case 0x504380u: goto label_504380;
        case 0x504384u: goto label_504384;
        case 0x504388u: goto label_504388;
        case 0x50438cu: goto label_50438c;
        case 0x504390u: goto label_504390;
        case 0x504394u: goto label_504394;
        case 0x504398u: goto label_504398;
        case 0x50439cu: goto label_50439c;
        case 0x5043a0u: goto label_5043a0;
        case 0x5043a4u: goto label_5043a4;
        case 0x5043a8u: goto label_5043a8;
        case 0x5043acu: goto label_5043ac;
        case 0x5043b0u: goto label_5043b0;
        case 0x5043b4u: goto label_5043b4;
        case 0x5043b8u: goto label_5043b8;
        case 0x5043bcu: goto label_5043bc;
        case 0x5043c0u: goto label_5043c0;
        case 0x5043c4u: goto label_5043c4;
        case 0x5043c8u: goto label_5043c8;
        case 0x5043ccu: goto label_5043cc;
        case 0x5043d0u: goto label_5043d0;
        case 0x5043d4u: goto label_5043d4;
        case 0x5043d8u: goto label_5043d8;
        case 0x5043dcu: goto label_5043dc;
        case 0x5043e0u: goto label_5043e0;
        case 0x5043e4u: goto label_5043e4;
        case 0x5043e8u: goto label_5043e8;
        case 0x5043ecu: goto label_5043ec;
        case 0x5043f0u: goto label_5043f0;
        case 0x5043f4u: goto label_5043f4;
        case 0x5043f8u: goto label_5043f8;
        case 0x5043fcu: goto label_5043fc;
        case 0x504400u: goto label_504400;
        case 0x504404u: goto label_504404;
        case 0x504408u: goto label_504408;
        case 0x50440cu: goto label_50440c;
        case 0x504410u: goto label_504410;
        case 0x504414u: goto label_504414;
        case 0x504418u: goto label_504418;
        case 0x50441cu: goto label_50441c;
        case 0x504420u: goto label_504420;
        case 0x504424u: goto label_504424;
        case 0x504428u: goto label_504428;
        case 0x50442cu: goto label_50442c;
        case 0x504430u: goto label_504430;
        case 0x504434u: goto label_504434;
        case 0x504438u: goto label_504438;
        case 0x50443cu: goto label_50443c;
        case 0x504440u: goto label_504440;
        case 0x504444u: goto label_504444;
        case 0x504448u: goto label_504448;
        case 0x50444cu: goto label_50444c;
        case 0x504450u: goto label_504450;
        case 0x504454u: goto label_504454;
        case 0x504458u: goto label_504458;
        case 0x50445cu: goto label_50445c;
        case 0x504460u: goto label_504460;
        case 0x504464u: goto label_504464;
        case 0x504468u: goto label_504468;
        case 0x50446cu: goto label_50446c;
        case 0x504470u: goto label_504470;
        case 0x504474u: goto label_504474;
        case 0x504478u: goto label_504478;
        case 0x50447cu: goto label_50447c;
        case 0x504480u: goto label_504480;
        case 0x504484u: goto label_504484;
        case 0x504488u: goto label_504488;
        case 0x50448cu: goto label_50448c;
        case 0x504490u: goto label_504490;
        case 0x504494u: goto label_504494;
        case 0x504498u: goto label_504498;
        case 0x50449cu: goto label_50449c;
        case 0x5044a0u: goto label_5044a0;
        case 0x5044a4u: goto label_5044a4;
        case 0x5044a8u: goto label_5044a8;
        case 0x5044acu: goto label_5044ac;
        case 0x5044b0u: goto label_5044b0;
        case 0x5044b4u: goto label_5044b4;
        case 0x5044b8u: goto label_5044b8;
        case 0x5044bcu: goto label_5044bc;
        case 0x5044c0u: goto label_5044c0;
        case 0x5044c4u: goto label_5044c4;
        case 0x5044c8u: goto label_5044c8;
        case 0x5044ccu: goto label_5044cc;
        case 0x5044d0u: goto label_5044d0;
        case 0x5044d4u: goto label_5044d4;
        case 0x5044d8u: goto label_5044d8;
        case 0x5044dcu: goto label_5044dc;
        case 0x5044e0u: goto label_5044e0;
        case 0x5044e4u: goto label_5044e4;
        case 0x5044e8u: goto label_5044e8;
        case 0x5044ecu: goto label_5044ec;
        case 0x5044f0u: goto label_5044f0;
        case 0x5044f4u: goto label_5044f4;
        case 0x5044f8u: goto label_5044f8;
        case 0x5044fcu: goto label_5044fc;
        case 0x504500u: goto label_504500;
        case 0x504504u: goto label_504504;
        case 0x504508u: goto label_504508;
        case 0x50450cu: goto label_50450c;
        case 0x504510u: goto label_504510;
        case 0x504514u: goto label_504514;
        case 0x504518u: goto label_504518;
        case 0x50451cu: goto label_50451c;
        case 0x504520u: goto label_504520;
        case 0x504524u: goto label_504524;
        case 0x504528u: goto label_504528;
        case 0x50452cu: goto label_50452c;
        case 0x504530u: goto label_504530;
        case 0x504534u: goto label_504534;
        case 0x504538u: goto label_504538;
        case 0x50453cu: goto label_50453c;
        case 0x504540u: goto label_504540;
        case 0x504544u: goto label_504544;
        case 0x504548u: goto label_504548;
        case 0x50454cu: goto label_50454c;
        case 0x504550u: goto label_504550;
        case 0x504554u: goto label_504554;
        case 0x504558u: goto label_504558;
        case 0x50455cu: goto label_50455c;
        case 0x504560u: goto label_504560;
        case 0x504564u: goto label_504564;
        case 0x504568u: goto label_504568;
        case 0x50456cu: goto label_50456c;
        case 0x504570u: goto label_504570;
        case 0x504574u: goto label_504574;
        case 0x504578u: goto label_504578;
        case 0x50457cu: goto label_50457c;
        case 0x504580u: goto label_504580;
        case 0x504584u: goto label_504584;
        case 0x504588u: goto label_504588;
        case 0x50458cu: goto label_50458c;
        case 0x504590u: goto label_504590;
        case 0x504594u: goto label_504594;
        case 0x504598u: goto label_504598;
        case 0x50459cu: goto label_50459c;
        case 0x5045a0u: goto label_5045a0;
        case 0x5045a4u: goto label_5045a4;
        case 0x5045a8u: goto label_5045a8;
        case 0x5045acu: goto label_5045ac;
        case 0x5045b0u: goto label_5045b0;
        case 0x5045b4u: goto label_5045b4;
        case 0x5045b8u: goto label_5045b8;
        case 0x5045bcu: goto label_5045bc;
        case 0x5045c0u: goto label_5045c0;
        case 0x5045c4u: goto label_5045c4;
        case 0x5045c8u: goto label_5045c8;
        case 0x5045ccu: goto label_5045cc;
        case 0x5045d0u: goto label_5045d0;
        case 0x5045d4u: goto label_5045d4;
        case 0x5045d8u: goto label_5045d8;
        case 0x5045dcu: goto label_5045dc;
        case 0x5045e0u: goto label_5045e0;
        case 0x5045e4u: goto label_5045e4;
        case 0x5045e8u: goto label_5045e8;
        case 0x5045ecu: goto label_5045ec;
        case 0x5045f0u: goto label_5045f0;
        case 0x5045f4u: goto label_5045f4;
        case 0x5045f8u: goto label_5045f8;
        case 0x5045fcu: goto label_5045fc;
        case 0x504600u: goto label_504600;
        case 0x504604u: goto label_504604;
        case 0x504608u: goto label_504608;
        case 0x50460cu: goto label_50460c;
        case 0x504610u: goto label_504610;
        case 0x504614u: goto label_504614;
        case 0x504618u: goto label_504618;
        case 0x50461cu: goto label_50461c;
        case 0x504620u: goto label_504620;
        case 0x504624u: goto label_504624;
        case 0x504628u: goto label_504628;
        case 0x50462cu: goto label_50462c;
        case 0x504630u: goto label_504630;
        case 0x504634u: goto label_504634;
        case 0x504638u: goto label_504638;
        case 0x50463cu: goto label_50463c;
        case 0x504640u: goto label_504640;
        case 0x504644u: goto label_504644;
        case 0x504648u: goto label_504648;
        case 0x50464cu: goto label_50464c;
        case 0x504650u: goto label_504650;
        case 0x504654u: goto label_504654;
        case 0x504658u: goto label_504658;
        case 0x50465cu: goto label_50465c;
        case 0x504660u: goto label_504660;
        case 0x504664u: goto label_504664;
        case 0x504668u: goto label_504668;
        case 0x50466cu: goto label_50466c;
        case 0x504670u: goto label_504670;
        case 0x504674u: goto label_504674;
        case 0x504678u: goto label_504678;
        case 0x50467cu: goto label_50467c;
        case 0x504680u: goto label_504680;
        case 0x504684u: goto label_504684;
        case 0x504688u: goto label_504688;
        case 0x50468cu: goto label_50468c;
        default: break;
    }

    ctx->pc = 0x504310u;

label_504310:
    // 0x504310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_504314:
    // 0x504314: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x504314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_504318:
    // 0x504318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50431c:
    // 0x50431c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_504320:
    // 0x504320: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x504320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_504324:
    // 0x504324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x504324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_504328:
    // 0x504328: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x504328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_50432c:
    // 0x50432c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x50432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_504330:
    // 0x504330: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_504334:
    if (ctx->pc == 0x504334u) {
        ctx->pc = 0x504334u;
            // 0x504334: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x504338u;
        goto label_504338;
    }
    ctx->pc = 0x504330u;
    {
        const bool branch_taken_0x504330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x504330) {
            ctx->pc = 0x504334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504330u;
            // 0x504334: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504354u;
            goto label_504354;
        }
    }
    ctx->pc = 0x504338u;
label_504338:
    // 0x504338: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x504338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50433c:
    // 0x50433c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x50433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_504340:
    // 0x504340: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x504340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_504344:
    // 0x504344: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x504344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
label_504348:
    // 0x504348: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_50434c:
    if (ctx->pc == 0x50434Cu) {
        ctx->pc = 0x50434Cu;
            // 0x50434c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x504350u;
        goto label_504350;
    }
    ctx->pc = 0x504348u;
    {
        const bool branch_taken_0x504348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x504348) {
            ctx->pc = 0x50434Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504348u;
            // 0x50434c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50436Cu;
            goto label_50436c;
        }
    }
    ctx->pc = 0x504350u;
label_504350:
    // 0x504350: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x504350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_504354:
    // 0x504354: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x504354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_504358:
    // 0x504358: 0x320f809  jalr        $t9
label_50435c:
    if (ctx->pc == 0x50435Cu) {
        ctx->pc = 0x50435Cu;
            // 0x50435c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504360u;
        goto label_504360;
    }
    ctx->pc = 0x504358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504360u);
        ctx->pc = 0x50435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504358u;
            // 0x50435c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x504360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504360u; }
            if (ctx->pc != 0x504360u) { return; }
        }
        }
    }
    ctx->pc = 0x504360u;
label_504360:
    // 0x504360: 0xc145ec4  jal         func_517B10
label_504364:
    if (ctx->pc == 0x504364u) {
        ctx->pc = 0x504364u;
            // 0x504364: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x504368u;
        goto label_504368;
    }
    ctx->pc = 0x504360u;
    SET_GPR_U32(ctx, 31, 0x504368u);
    ctx->pc = 0x504364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504360u;
            // 0x504364: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517B10u;
    if (runtime->hasFunction(0x517B10u)) {
        auto targetFn = runtime->lookupFunction(0x517B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504368u; }
        if (ctx->pc != 0x504368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517B10_0x517b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504368u; }
        if (ctx->pc != 0x504368u) { return; }
    }
    ctx->pc = 0x504368u;
label_504368:
    // 0x504368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50436c:
    // 0x50436c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50436cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504370:
    // 0x504370: 0x3e00008  jr          $ra
label_504374:
    if (ctx->pc == 0x504374u) {
        ctx->pc = 0x504374u;
            // 0x504374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x504378u;
        goto label_504378;
    }
    ctx->pc = 0x504370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504370u;
            // 0x504374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504378u;
label_504378:
    // 0x504378: 0x0  nop
    ctx->pc = 0x504378u;
    // NOP
label_50437c:
    // 0x50437c: 0x0  nop
    ctx->pc = 0x50437cu;
    // NOP
label_504380:
    // 0x504380: 0x3e00008  jr          $ra
label_504384:
    if (ctx->pc == 0x504384u) {
        ctx->pc = 0x504388u;
        goto label_504388;
    }
    ctx->pc = 0x504380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504388u;
label_504388:
    // 0x504388: 0x0  nop
    ctx->pc = 0x504388u;
    // NOP
label_50438c:
    // 0x50438c: 0x0  nop
    ctx->pc = 0x50438cu;
    // NOP
label_504390:
    // 0x504390: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x504390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_504394:
    // 0x504394: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x504394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_504398:
    // 0x504398: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x504398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_50439c:
    // 0x50439c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x50439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_5043a0:
    // 0x5043a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x5043a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_5043a4:
    // 0x5043a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5043a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_5043a8:
    // 0x5043a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5043a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5043ac:
    // 0x5043ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5043acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5043b0:
    // 0x5043b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5043b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5043b4:
    // 0x5043b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5043b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5043b8:
    // 0x5043b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5043b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5043bc:
    // 0x5043bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5043bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5043c0:
    // 0x5043c0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5043c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5043c4:
    // 0x5043c4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_5043c8:
    if (ctx->pc == 0x5043C8u) {
        ctx->pc = 0x5043C8u;
            // 0x5043c8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5043CCu;
        goto label_5043cc;
    }
    ctx->pc = 0x5043C4u;
    {
        const bool branch_taken_0x5043c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5043C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5043C4u;
            // 0x5043c8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5043c4) {
            ctx->pc = 0x504414u;
            goto label_504414;
        }
    }
    ctx->pc = 0x5043CCu;
label_5043cc:
    // 0x5043cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5043ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5043d0:
    // 0x5043d0: 0x50a30048  beql        $a1, $v1, . + 4 + (0x48 << 2)
label_5043d4:
    if (ctx->pc == 0x5043D4u) {
        ctx->pc = 0x5043D4u;
            // 0x5043d4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x5043D8u;
        goto label_5043d8;
    }
    ctx->pc = 0x5043D0u;
    {
        const bool branch_taken_0x5043d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5043d0) {
            ctx->pc = 0x5043D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5043D0u;
            // 0x5043d4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5044F4u;
            goto label_5044f4;
        }
    }
    ctx->pc = 0x5043D8u;
label_5043d8:
    // 0x5043d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5043d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5043dc:
    // 0x5043dc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_5043e0:
    if (ctx->pc == 0x5043E0u) {
        ctx->pc = 0x5043E4u;
        goto label_5043e4;
    }
    ctx->pc = 0x5043DCu;
    {
        const bool branch_taken_0x5043dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5043dc) {
            ctx->pc = 0x5043ECu;
            goto label_5043ec;
        }
    }
    ctx->pc = 0x5043E4u;
label_5043e4:
    // 0x5043e4: 0x10000042  b           . + 4 + (0x42 << 2)
label_5043e8:
    if (ctx->pc == 0x5043E8u) {
        ctx->pc = 0x5043ECu;
        goto label_5043ec;
    }
    ctx->pc = 0x5043E4u;
    {
        const bool branch_taken_0x5043e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5043e4) {
            ctx->pc = 0x5044F0u;
            goto label_5044f0;
        }
    }
    ctx->pc = 0x5043ECu;
label_5043ec:
    // 0x5043ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5043ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5043f0:
    // 0x5043f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5043f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5043f4:
    // 0x5043f4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5043f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5043f8:
    // 0x5043f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5043f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5043fc:
    // 0x5043fc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x5043fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_504400:
    // 0x504400: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x504400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_504404:
    // 0x504404: 0x320f809  jalr        $t9
label_504408:
    if (ctx->pc == 0x504408u) {
        ctx->pc = 0x504408u;
            // 0x504408: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x50440Cu;
        goto label_50440c;
    }
    ctx->pc = 0x504404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50440Cu);
        ctx->pc = 0x504408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504404u;
            // 0x504408: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50440Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50440Cu; }
            if (ctx->pc != 0x50440Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50440Cu;
label_50440c:
    // 0x50440c: 0x10000038  b           . + 4 + (0x38 << 2)
label_504410:
    if (ctx->pc == 0x504410u) {
        ctx->pc = 0x504414u;
        goto label_504414;
    }
    ctx->pc = 0x50440Cu;
    {
        const bool branch_taken_0x50440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50440c) {
            ctx->pc = 0x5044F0u;
            goto label_5044f0;
        }
    }
    ctx->pc = 0x504414u;
label_504414:
    // 0x504414: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x504414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_504418:
    // 0x504418: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_50441c:
    if (ctx->pc == 0x50441Cu) {
        ctx->pc = 0x504420u;
        goto label_504420;
    }
    ctx->pc = 0x504418u;
    {
        const bool branch_taken_0x504418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x504418) {
            ctx->pc = 0x5044F0u;
            goto label_5044f0;
        }
    }
    ctx->pc = 0x504420u;
label_504420:
    // 0x504420: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x504420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_504424:
    // 0x504424: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x504424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_504428:
    // 0x504428: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x504428u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_50442c:
    // 0x50442c: 0x26b40084  addiu       $s4, $s5, 0x84
    ctx->pc = 0x50442cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_504430:
    // 0x504430: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x504430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_504434:
    // 0x504434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x504434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_504438:
    // 0x504438: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x504438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50443c:
    // 0x50443c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x50443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_504440:
    // 0x504440: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x504440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_504444:
    // 0x504444: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x504444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_504448:
    // 0x504448: 0x8cb10130  lw          $s1, 0x130($a1)
    ctx->pc = 0x504448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_50444c:
    // 0x50444c: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x50444cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_504450:
    // 0x504450: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x504450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_504454:
    // 0x504454: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x504454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_504458:
    // 0x504458: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x504458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_50445c:
    // 0x50445c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_504460:
    // 0x504460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x504460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_504464:
    // 0x504464: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x504464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_504468:
    // 0x504468: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x504468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_50446c:
    // 0x50446c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x50446cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_504470:
    // 0x504470: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x504470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_504474:
    // 0x504474: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x504474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_504478:
    // 0x504478: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x504478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50447c:
    // 0x50447c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x50447cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_504480:
    // 0x504480: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x504480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_504484:
    // 0x504484: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x504484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_504488:
    // 0x504488: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x504488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50448c:
    // 0x50448c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x50448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_504490:
    // 0x504490: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x504490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_504494:
    // 0x504494: 0xc1413d8  jal         func_504F60
label_504498:
    if (ctx->pc == 0x504498u) {
        ctx->pc = 0x504498u;
            // 0x504498: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50449Cu;
        goto label_50449c;
    }
    ctx->pc = 0x504494u;
    SET_GPR_U32(ctx, 31, 0x50449Cu);
    ctx->pc = 0x504498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504494u;
            // 0x504498: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504F60u;
    if (runtime->hasFunction(0x504F60u)) {
        auto targetFn = runtime->lookupFunction(0x504F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50449Cu; }
        if (ctx->pc != 0x50449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504F60_0x504f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50449Cu; }
        if (ctx->pc != 0x50449Cu) { return; }
    }
    ctx->pc = 0x50449Cu;
label_50449c:
    // 0x50449c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x50449cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5044a0:
    // 0x5044a0: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x5044a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5044a4:
    // 0x5044a4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_5044a8:
    if (ctx->pc == 0x5044A8u) {
        ctx->pc = 0x5044A8u;
            // 0x5044a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5044ACu;
        goto label_5044ac;
    }
    ctx->pc = 0x5044A4u;
    {
        const bool branch_taken_0x5044a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5044A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5044A4u;
            // 0x5044a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5044a4) {
            ctx->pc = 0x504474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_504474;
        }
    }
    ctx->pc = 0x5044ACu;
label_5044ac:
    // 0x5044ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5044acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5044b0:
    // 0x5044b0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x5044b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5044b4:
    // 0x5044b4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_5044b8:
    if (ctx->pc == 0x5044B8u) {
        ctx->pc = 0x5044BCu;
        goto label_5044bc;
    }
    ctx->pc = 0x5044B4u;
    {
        const bool branch_taken_0x5044b4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x5044b4) {
            ctx->pc = 0x5044F0u;
            goto label_5044f0;
        }
    }
    ctx->pc = 0x5044BCu;
label_5044bc:
    // 0x5044bc: 0xc04e738  jal         func_139CE0
label_5044c0:
    if (ctx->pc == 0x5044C0u) {
        ctx->pc = 0x5044C0u;
            // 0x5044c0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x5044C4u;
        goto label_5044c4;
    }
    ctx->pc = 0x5044BCu;
    SET_GPR_U32(ctx, 31, 0x5044C4u);
    ctx->pc = 0x5044C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5044BCu;
            // 0x5044c0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5044C4u; }
        if (ctx->pc != 0x5044C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5044C4u; }
        if (ctx->pc != 0x5044C4u) { return; }
    }
    ctx->pc = 0x5044C4u;
label_5044c4:
    // 0x5044c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5044c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5044c8:
    // 0x5044c8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x5044c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_5044cc:
    // 0x5044cc: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x5044ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_5044d0:
    // 0x5044d0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x5044d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_5044d4:
    // 0x5044d4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x5044d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_5044d8:
    // 0x5044d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5044d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5044dc:
    // 0x5044dc: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x5044dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_5044e0:
    // 0x5044e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5044e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5044e4:
    // 0x5044e4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x5044e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_5044e8:
    // 0x5044e8: 0xc055ea8  jal         func_157AA0
label_5044ec:
    if (ctx->pc == 0x5044ECu) {
        ctx->pc = 0x5044ECu;
            // 0x5044ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5044F0u;
        goto label_5044f0;
    }
    ctx->pc = 0x5044E8u;
    SET_GPR_U32(ctx, 31, 0x5044F0u);
    ctx->pc = 0x5044ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5044E8u;
            // 0x5044ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5044F0u; }
        if (ctx->pc != 0x5044F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5044F0u; }
        if (ctx->pc != 0x5044F0u) { return; }
    }
    ctx->pc = 0x5044F0u;
label_5044f0:
    // 0x5044f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x5044f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_5044f4:
    // 0x5044f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x5044f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5044f8:
    // 0x5044f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5044f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5044fc:
    // 0x5044fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5044fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_504500:
    // 0x504500: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x504500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_504504:
    // 0x504504: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x504504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_504508:
    // 0x504508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x504508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50450c:
    // 0x50450c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50450cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_504510:
    // 0x504510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_504514:
    // 0x504514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504518:
    // 0x504518: 0x3e00008  jr          $ra
label_50451c:
    if (ctx->pc == 0x50451Cu) {
        ctx->pc = 0x50451Cu;
            // 0x50451c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x504520u;
        goto label_504520;
    }
    ctx->pc = 0x504518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50451Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504518u;
            // 0x50451c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504520u;
label_504520:
    // 0x504520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x504520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_504524:
    // 0x504524: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x504524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_504528:
    // 0x504528: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x504528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_50452c:
    // 0x50452c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_504530:
    // 0x504530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x504530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_504534:
    // 0x504534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x504534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_504538:
    // 0x504538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50453c:
    // 0x50453c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x50453cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_504540:
    // 0x504540: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_504544:
    if (ctx->pc == 0x504544u) {
        ctx->pc = 0x504544u;
            // 0x504544: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504548u;
        goto label_504548;
    }
    ctx->pc = 0x504540u;
    {
        const bool branch_taken_0x504540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x504544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504540u;
            // 0x504544: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504540) {
            ctx->pc = 0x504574u;
            goto label_504574;
        }
    }
    ctx->pc = 0x504548u;
label_504548:
    // 0x504548: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x504548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50454c:
    // 0x50454c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_504550:
    if (ctx->pc == 0x504550u) {
        ctx->pc = 0x504550u;
            // 0x504550: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x504554u;
        goto label_504554;
    }
    ctx->pc = 0x50454Cu;
    {
        const bool branch_taken_0x50454c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50454c) {
            ctx->pc = 0x504550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50454Cu;
            // 0x504550: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504568u;
            goto label_504568;
        }
    }
    ctx->pc = 0x504554u;
label_504554:
    // 0x504554: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x504554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_504558:
    // 0x504558: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
label_50455c:
    if (ctx->pc == 0x50455Cu) {
        ctx->pc = 0x504560u;
        goto label_504560;
    }
    ctx->pc = 0x504558u;
    {
        const bool branch_taken_0x504558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x504558) {
            ctx->pc = 0x5045E8u;
            goto label_5045e8;
        }
    }
    ctx->pc = 0x504560u;
label_504560:
    // 0x504560: 0x10000021  b           . + 4 + (0x21 << 2)
label_504564:
    if (ctx->pc == 0x504564u) {
        ctx->pc = 0x504568u;
        goto label_504568;
    }
    ctx->pc = 0x504560u;
    {
        const bool branch_taken_0x504560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x504560) {
            ctx->pc = 0x5045E8u;
            goto label_5045e8;
        }
    }
    ctx->pc = 0x504568u;
label_504568:
    // 0x504568: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x504568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_50456c:
    // 0x50456c: 0x320f809  jalr        $t9
label_504570:
    if (ctx->pc == 0x504570u) {
        ctx->pc = 0x504574u;
        goto label_504574;
    }
    ctx->pc = 0x50456Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504574u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x504574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504574u; }
            if (ctx->pc != 0x504574u) { return; }
        }
        }
    }
    ctx->pc = 0x504574u;
label_504574:
    // 0x504574: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x504574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_504578:
    // 0x504578: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_50457c:
    if (ctx->pc == 0x50457Cu) {
        ctx->pc = 0x504580u;
        goto label_504580;
    }
    ctx->pc = 0x504578u;
    {
        const bool branch_taken_0x504578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x504578) {
            ctx->pc = 0x5045E8u;
            goto label_5045e8;
        }
    }
    ctx->pc = 0x504580u;
label_504580:
    // 0x504580: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x504580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_504584:
    // 0x504584: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x504584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_504588:
    // 0x504588: 0x8c430cb4  lw          $v1, 0xCB4($v0)
    ctx->pc = 0x504588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_50458c:
    // 0x50458c: 0x8c420cb8  lw          $v0, 0xCB8($v0)
    ctx->pc = 0x50458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3256)));
label_504590:
    // 0x504590: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_504594:
    if (ctx->pc == 0x504594u) {
        ctx->pc = 0x504594u;
            // 0x504594: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504598u;
        goto label_504598;
    }
    ctx->pc = 0x504590u;
    {
        const bool branch_taken_0x504590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x504590) {
            ctx->pc = 0x504594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504590u;
            // 0x504594: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504598u;
            goto label_504598;
        }
    }
    ctx->pc = 0x504598u;
label_504598:
    // 0x504598: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x504598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50459c:
    // 0x50459c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_5045a0:
    if (ctx->pc == 0x5045A0u) {
        ctx->pc = 0x5045A0u;
            // 0x5045a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5045A4u;
        goto label_5045a4;
    }
    ctx->pc = 0x50459Cu;
    {
        const bool branch_taken_0x50459c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50459c) {
            ctx->pc = 0x5045A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50459Cu;
            // 0x5045a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5045B8u;
            goto label_5045b8;
        }
    }
    ctx->pc = 0x5045A4u;
label_5045a4:
    // 0x5045a4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5045a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5045a8:
    // 0x5045a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x5045a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_5045ac:
    // 0x5045ac: 0x320f809  jalr        $t9
label_5045b0:
    if (ctx->pc == 0x5045B0u) {
        ctx->pc = 0x5045B0u;
            // 0x5045b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5045B4u;
        goto label_5045b4;
    }
    ctx->pc = 0x5045ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5045B4u);
        ctx->pc = 0x5045B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5045ACu;
            // 0x5045b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5045B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5045B4u; }
            if (ctx->pc != 0x5045B4u) { return; }
        }
        }
    }
    ctx->pc = 0x5045B4u;
label_5045b4:
    // 0x5045b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5045b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5045b8:
    // 0x5045b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5045b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5045bc:
    // 0x5045bc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x5045bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_5045c0:
    // 0x5045c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5045c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5045c4:
    // 0x5045c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5045c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5045c8:
    // 0x5045c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5045c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5045cc:
    // 0x5045cc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x5045ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_5045d0:
    // 0x5045d0: 0x320f809  jalr        $t9
label_5045d4:
    if (ctx->pc == 0x5045D4u) {
        ctx->pc = 0x5045D8u;
        goto label_5045d8;
    }
    ctx->pc = 0x5045D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5045D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5045D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5045D8u; }
            if (ctx->pc != 0x5045D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5045D8u;
label_5045d8:
    // 0x5045d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5045d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5045dc:
    // 0x5045dc: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x5045dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5045e0:
    // 0x5045e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_5045e4:
    if (ctx->pc == 0x5045E4u) {
        ctx->pc = 0x5045E4u;
            // 0x5045e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5045E8u;
        goto label_5045e8;
    }
    ctx->pc = 0x5045E0u;
    {
        const bool branch_taken_0x5045e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5045E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5045E0u;
            // 0x5045e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5045e0) {
            ctx->pc = 0x5045BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5045bc;
        }
    }
    ctx->pc = 0x5045E8u;
label_5045e8:
    // 0x5045e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5045e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5045ec:
    // 0x5045ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5045ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5045f0:
    // 0x5045f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5045f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5045f4:
    // 0x5045f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5045f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5045f8:
    // 0x5045f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5045f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5045fc:
    // 0x5045fc: 0x3e00008  jr          $ra
label_504600:
    if (ctx->pc == 0x504600u) {
        ctx->pc = 0x504600u;
            // 0x504600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x504604u;
        goto label_504604;
    }
    ctx->pc = 0x5045FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5045FCu;
            // 0x504600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504604u;
label_504604:
    // 0x504604: 0x0  nop
    ctx->pc = 0x504604u;
    // NOP
label_504608:
    // 0x504608: 0x0  nop
    ctx->pc = 0x504608u;
    // NOP
label_50460c:
    // 0x50460c: 0x0  nop
    ctx->pc = 0x50460cu;
    // NOP
label_504610:
    // 0x504610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x504610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_504614:
    // 0x504614: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x504614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_504618:
    // 0x504618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x504618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50461c:
    // 0x50461c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_504620:
    // 0x504620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x504620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_504624:
    // 0x504624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_504628:
    // 0x504628: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x504628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_50462c:
    // 0x50462c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_504630:
    if (ctx->pc == 0x504630u) {
        ctx->pc = 0x504630u;
            // 0x504630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504634u;
        goto label_504634;
    }
    ctx->pc = 0x50462Cu;
    {
        const bool branch_taken_0x50462c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x504630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50462Cu;
            // 0x504630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50462c) {
            ctx->pc = 0x504668u;
            goto label_504668;
        }
    }
    ctx->pc = 0x504634u;
label_504634:
    // 0x504634: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x504634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_504638:
    // 0x504638: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x504638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50463c:
    // 0x50463c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x50463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_504640:
    // 0x504640: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x504640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_504644:
    // 0x504644: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x504644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_504648:
    // 0x504648: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x504648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50464c:
    // 0x50464c: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x50464cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_504650:
    // 0x504650: 0x320f809  jalr        $t9
label_504654:
    if (ctx->pc == 0x504654u) {
        ctx->pc = 0x504658u;
        goto label_504658;
    }
    ctx->pc = 0x504650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504658u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x504658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504658u; }
            if (ctx->pc != 0x504658u) { return; }
        }
        }
    }
    ctx->pc = 0x504658u;
label_504658:
    // 0x504658: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x504658u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50465c:
    // 0x50465c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x50465cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_504660:
    // 0x504660: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_504664:
    if (ctx->pc == 0x504664u) {
        ctx->pc = 0x504664u;
            // 0x504664: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x504668u;
        goto label_504668;
    }
    ctx->pc = 0x504660u;
    {
        const bool branch_taken_0x504660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x504664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504660u;
            // 0x504664: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504660) {
            ctx->pc = 0x50463Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50463c;
        }
    }
    ctx->pc = 0x504668u;
label_504668:
    // 0x504668: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x504668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50466c:
    // 0x50466c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50466cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_504670:
    // 0x504670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x504670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_504674:
    // 0x504674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_504678:
    // 0x504678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50467c:
    // 0x50467c: 0x3e00008  jr          $ra
label_504680:
    if (ctx->pc == 0x504680u) {
        ctx->pc = 0x504680u;
            // 0x504680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x504684u;
        goto label_504684;
    }
    ctx->pc = 0x50467Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50467Cu;
            // 0x504680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504684u;
label_504684:
    // 0x504684: 0x0  nop
    ctx->pc = 0x504684u;
    // NOP
label_504688:
    // 0x504688: 0x0  nop
    ctx->pc = 0x504688u;
    // NOP
label_50468c:
    // 0x50468c: 0x0  nop
    ctx->pc = 0x50468cu;
    // NOP
}
