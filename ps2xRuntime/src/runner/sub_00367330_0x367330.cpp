#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00367330
// Address: 0x367330 - 0x367770
void sub_00367330_0x367330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367330_0x367330");
#endif

    switch (ctx->pc) {
        case 0x367330u: goto label_367330;
        case 0x367334u: goto label_367334;
        case 0x367338u: goto label_367338;
        case 0x36733cu: goto label_36733c;
        case 0x367340u: goto label_367340;
        case 0x367344u: goto label_367344;
        case 0x367348u: goto label_367348;
        case 0x36734cu: goto label_36734c;
        case 0x367350u: goto label_367350;
        case 0x367354u: goto label_367354;
        case 0x367358u: goto label_367358;
        case 0x36735cu: goto label_36735c;
        case 0x367360u: goto label_367360;
        case 0x367364u: goto label_367364;
        case 0x367368u: goto label_367368;
        case 0x36736cu: goto label_36736c;
        case 0x367370u: goto label_367370;
        case 0x367374u: goto label_367374;
        case 0x367378u: goto label_367378;
        case 0x36737cu: goto label_36737c;
        case 0x367380u: goto label_367380;
        case 0x367384u: goto label_367384;
        case 0x367388u: goto label_367388;
        case 0x36738cu: goto label_36738c;
        case 0x367390u: goto label_367390;
        case 0x367394u: goto label_367394;
        case 0x367398u: goto label_367398;
        case 0x36739cu: goto label_36739c;
        case 0x3673a0u: goto label_3673a0;
        case 0x3673a4u: goto label_3673a4;
        case 0x3673a8u: goto label_3673a8;
        case 0x3673acu: goto label_3673ac;
        case 0x3673b0u: goto label_3673b0;
        case 0x3673b4u: goto label_3673b4;
        case 0x3673b8u: goto label_3673b8;
        case 0x3673bcu: goto label_3673bc;
        case 0x3673c0u: goto label_3673c0;
        case 0x3673c4u: goto label_3673c4;
        case 0x3673c8u: goto label_3673c8;
        case 0x3673ccu: goto label_3673cc;
        case 0x3673d0u: goto label_3673d0;
        case 0x3673d4u: goto label_3673d4;
        case 0x3673d8u: goto label_3673d8;
        case 0x3673dcu: goto label_3673dc;
        case 0x3673e0u: goto label_3673e0;
        case 0x3673e4u: goto label_3673e4;
        case 0x3673e8u: goto label_3673e8;
        case 0x3673ecu: goto label_3673ec;
        case 0x3673f0u: goto label_3673f0;
        case 0x3673f4u: goto label_3673f4;
        case 0x3673f8u: goto label_3673f8;
        case 0x3673fcu: goto label_3673fc;
        case 0x367400u: goto label_367400;
        case 0x367404u: goto label_367404;
        case 0x367408u: goto label_367408;
        case 0x36740cu: goto label_36740c;
        case 0x367410u: goto label_367410;
        case 0x367414u: goto label_367414;
        case 0x367418u: goto label_367418;
        case 0x36741cu: goto label_36741c;
        case 0x367420u: goto label_367420;
        case 0x367424u: goto label_367424;
        case 0x367428u: goto label_367428;
        case 0x36742cu: goto label_36742c;
        case 0x367430u: goto label_367430;
        case 0x367434u: goto label_367434;
        case 0x367438u: goto label_367438;
        case 0x36743cu: goto label_36743c;
        case 0x367440u: goto label_367440;
        case 0x367444u: goto label_367444;
        case 0x367448u: goto label_367448;
        case 0x36744cu: goto label_36744c;
        case 0x367450u: goto label_367450;
        case 0x367454u: goto label_367454;
        case 0x367458u: goto label_367458;
        case 0x36745cu: goto label_36745c;
        case 0x367460u: goto label_367460;
        case 0x367464u: goto label_367464;
        case 0x367468u: goto label_367468;
        case 0x36746cu: goto label_36746c;
        case 0x367470u: goto label_367470;
        case 0x367474u: goto label_367474;
        case 0x367478u: goto label_367478;
        case 0x36747cu: goto label_36747c;
        case 0x367480u: goto label_367480;
        case 0x367484u: goto label_367484;
        case 0x367488u: goto label_367488;
        case 0x36748cu: goto label_36748c;
        case 0x367490u: goto label_367490;
        case 0x367494u: goto label_367494;
        case 0x367498u: goto label_367498;
        case 0x36749cu: goto label_36749c;
        case 0x3674a0u: goto label_3674a0;
        case 0x3674a4u: goto label_3674a4;
        case 0x3674a8u: goto label_3674a8;
        case 0x3674acu: goto label_3674ac;
        case 0x3674b0u: goto label_3674b0;
        case 0x3674b4u: goto label_3674b4;
        case 0x3674b8u: goto label_3674b8;
        case 0x3674bcu: goto label_3674bc;
        case 0x3674c0u: goto label_3674c0;
        case 0x3674c4u: goto label_3674c4;
        case 0x3674c8u: goto label_3674c8;
        case 0x3674ccu: goto label_3674cc;
        case 0x3674d0u: goto label_3674d0;
        case 0x3674d4u: goto label_3674d4;
        case 0x3674d8u: goto label_3674d8;
        case 0x3674dcu: goto label_3674dc;
        case 0x3674e0u: goto label_3674e0;
        case 0x3674e4u: goto label_3674e4;
        case 0x3674e8u: goto label_3674e8;
        case 0x3674ecu: goto label_3674ec;
        case 0x3674f0u: goto label_3674f0;
        case 0x3674f4u: goto label_3674f4;
        case 0x3674f8u: goto label_3674f8;
        case 0x3674fcu: goto label_3674fc;
        case 0x367500u: goto label_367500;
        case 0x367504u: goto label_367504;
        case 0x367508u: goto label_367508;
        case 0x36750cu: goto label_36750c;
        case 0x367510u: goto label_367510;
        case 0x367514u: goto label_367514;
        case 0x367518u: goto label_367518;
        case 0x36751cu: goto label_36751c;
        case 0x367520u: goto label_367520;
        case 0x367524u: goto label_367524;
        case 0x367528u: goto label_367528;
        case 0x36752cu: goto label_36752c;
        case 0x367530u: goto label_367530;
        case 0x367534u: goto label_367534;
        case 0x367538u: goto label_367538;
        case 0x36753cu: goto label_36753c;
        case 0x367540u: goto label_367540;
        case 0x367544u: goto label_367544;
        case 0x367548u: goto label_367548;
        case 0x36754cu: goto label_36754c;
        case 0x367550u: goto label_367550;
        case 0x367554u: goto label_367554;
        case 0x367558u: goto label_367558;
        case 0x36755cu: goto label_36755c;
        case 0x367560u: goto label_367560;
        case 0x367564u: goto label_367564;
        case 0x367568u: goto label_367568;
        case 0x36756cu: goto label_36756c;
        case 0x367570u: goto label_367570;
        case 0x367574u: goto label_367574;
        case 0x367578u: goto label_367578;
        case 0x36757cu: goto label_36757c;
        case 0x367580u: goto label_367580;
        case 0x367584u: goto label_367584;
        case 0x367588u: goto label_367588;
        case 0x36758cu: goto label_36758c;
        case 0x367590u: goto label_367590;
        case 0x367594u: goto label_367594;
        case 0x367598u: goto label_367598;
        case 0x36759cu: goto label_36759c;
        case 0x3675a0u: goto label_3675a0;
        case 0x3675a4u: goto label_3675a4;
        case 0x3675a8u: goto label_3675a8;
        case 0x3675acu: goto label_3675ac;
        case 0x3675b0u: goto label_3675b0;
        case 0x3675b4u: goto label_3675b4;
        case 0x3675b8u: goto label_3675b8;
        case 0x3675bcu: goto label_3675bc;
        case 0x3675c0u: goto label_3675c0;
        case 0x3675c4u: goto label_3675c4;
        case 0x3675c8u: goto label_3675c8;
        case 0x3675ccu: goto label_3675cc;
        case 0x3675d0u: goto label_3675d0;
        case 0x3675d4u: goto label_3675d4;
        case 0x3675d8u: goto label_3675d8;
        case 0x3675dcu: goto label_3675dc;
        case 0x3675e0u: goto label_3675e0;
        case 0x3675e4u: goto label_3675e4;
        case 0x3675e8u: goto label_3675e8;
        case 0x3675ecu: goto label_3675ec;
        case 0x3675f0u: goto label_3675f0;
        case 0x3675f4u: goto label_3675f4;
        case 0x3675f8u: goto label_3675f8;
        case 0x3675fcu: goto label_3675fc;
        case 0x367600u: goto label_367600;
        case 0x367604u: goto label_367604;
        case 0x367608u: goto label_367608;
        case 0x36760cu: goto label_36760c;
        case 0x367610u: goto label_367610;
        case 0x367614u: goto label_367614;
        case 0x367618u: goto label_367618;
        case 0x36761cu: goto label_36761c;
        case 0x367620u: goto label_367620;
        case 0x367624u: goto label_367624;
        case 0x367628u: goto label_367628;
        case 0x36762cu: goto label_36762c;
        case 0x367630u: goto label_367630;
        case 0x367634u: goto label_367634;
        case 0x367638u: goto label_367638;
        case 0x36763cu: goto label_36763c;
        case 0x367640u: goto label_367640;
        case 0x367644u: goto label_367644;
        case 0x367648u: goto label_367648;
        case 0x36764cu: goto label_36764c;
        case 0x367650u: goto label_367650;
        case 0x367654u: goto label_367654;
        case 0x367658u: goto label_367658;
        case 0x36765cu: goto label_36765c;
        case 0x367660u: goto label_367660;
        case 0x367664u: goto label_367664;
        case 0x367668u: goto label_367668;
        case 0x36766cu: goto label_36766c;
        case 0x367670u: goto label_367670;
        case 0x367674u: goto label_367674;
        case 0x367678u: goto label_367678;
        case 0x36767cu: goto label_36767c;
        case 0x367680u: goto label_367680;
        case 0x367684u: goto label_367684;
        case 0x367688u: goto label_367688;
        case 0x36768cu: goto label_36768c;
        case 0x367690u: goto label_367690;
        case 0x367694u: goto label_367694;
        case 0x367698u: goto label_367698;
        case 0x36769cu: goto label_36769c;
        case 0x3676a0u: goto label_3676a0;
        case 0x3676a4u: goto label_3676a4;
        case 0x3676a8u: goto label_3676a8;
        case 0x3676acu: goto label_3676ac;
        case 0x3676b0u: goto label_3676b0;
        case 0x3676b4u: goto label_3676b4;
        case 0x3676b8u: goto label_3676b8;
        case 0x3676bcu: goto label_3676bc;
        case 0x3676c0u: goto label_3676c0;
        case 0x3676c4u: goto label_3676c4;
        case 0x3676c8u: goto label_3676c8;
        case 0x3676ccu: goto label_3676cc;
        case 0x3676d0u: goto label_3676d0;
        case 0x3676d4u: goto label_3676d4;
        case 0x3676d8u: goto label_3676d8;
        case 0x3676dcu: goto label_3676dc;
        case 0x3676e0u: goto label_3676e0;
        case 0x3676e4u: goto label_3676e4;
        case 0x3676e8u: goto label_3676e8;
        case 0x3676ecu: goto label_3676ec;
        case 0x3676f0u: goto label_3676f0;
        case 0x3676f4u: goto label_3676f4;
        case 0x3676f8u: goto label_3676f8;
        case 0x3676fcu: goto label_3676fc;
        case 0x367700u: goto label_367700;
        case 0x367704u: goto label_367704;
        case 0x367708u: goto label_367708;
        case 0x36770cu: goto label_36770c;
        case 0x367710u: goto label_367710;
        case 0x367714u: goto label_367714;
        case 0x367718u: goto label_367718;
        case 0x36771cu: goto label_36771c;
        case 0x367720u: goto label_367720;
        case 0x367724u: goto label_367724;
        case 0x367728u: goto label_367728;
        case 0x36772cu: goto label_36772c;
        case 0x367730u: goto label_367730;
        case 0x367734u: goto label_367734;
        case 0x367738u: goto label_367738;
        case 0x36773cu: goto label_36773c;
        case 0x367740u: goto label_367740;
        case 0x367744u: goto label_367744;
        case 0x367748u: goto label_367748;
        case 0x36774cu: goto label_36774c;
        case 0x367750u: goto label_367750;
        case 0x367754u: goto label_367754;
        case 0x367758u: goto label_367758;
        case 0x36775cu: goto label_36775c;
        case 0x367760u: goto label_367760;
        case 0x367764u: goto label_367764;
        case 0x367768u: goto label_367768;
        case 0x36776cu: goto label_36776c;
        default: break;
    }

    ctx->pc = 0x367330u;

label_367330:
    // 0x367330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x367330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_367334:
    // 0x367334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x367334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_367338:
    // 0x367338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x367338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36733c:
    // 0x36733c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_367340:
    // 0x367340: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x367340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_367344:
    // 0x367344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_367348:
    // 0x367348: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x367348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_36734c:
    // 0x36734c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x36734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_367350:
    // 0x367350: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_367354:
    if (ctx->pc == 0x367354u) {
        ctx->pc = 0x367354u;
            // 0x367354: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x367358u;
        goto label_367358;
    }
    ctx->pc = 0x367350u;
    {
        const bool branch_taken_0x367350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367350) {
            ctx->pc = 0x367354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367350u;
            // 0x367354: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x36736Cu;
            goto label_36736c;
        }
    }
    ctx->pc = 0x367358u;
label_367358:
    // 0x367358: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x367358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_36735c:
    // 0x36735c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x36735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_367360:
    // 0x367360: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x367360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_367364:
    // 0x367364: 0x10000006  b           . + 4 + (0x6 << 2)
label_367368:
    if (ctx->pc == 0x367368u) {
        ctx->pc = 0x367368u;
            // 0x367368: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x36736Cu;
        goto label_36736c;
    }
    ctx->pc = 0x367364u;
    {
        const bool branch_taken_0x367364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367364u;
            // 0x367368: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367364) {
            ctx->pc = 0x367380u;
            goto label_367380;
        }
    }
    ctx->pc = 0x36736Cu;
label_36736c:
    // 0x36736c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_367370:
    if (ctx->pc == 0x367370u) {
        ctx->pc = 0x367370u;
            // 0x367370: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x367374u;
        goto label_367374;
    }
    ctx->pc = 0x36736Cu;
    {
        const bool branch_taken_0x36736c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36736c) {
            ctx->pc = 0x367370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36736Cu;
            // 0x367370: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367384u;
            goto label_367384;
        }
    }
    ctx->pc = 0x367374u;
label_367374:
    // 0x367374: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x367374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_367378:
    // 0x367378: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x367378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_36737c:
    // 0x36737c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x36737cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_367380:
    // 0x367380: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x367380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_367384:
    // 0x367384: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x367384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_367388:
    // 0x367388: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_36738c:
    if (ctx->pc == 0x36738Cu) {
        ctx->pc = 0x36738Cu;
            // 0x36738c: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x367390u;
        goto label_367390;
    }
    ctx->pc = 0x367388u;
    {
        const bool branch_taken_0x367388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367388) {
            ctx->pc = 0x36738Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367388u;
            // 0x36738c: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3673B0u;
            goto label_3673b0;
        }
    }
    ctx->pc = 0x367390u;
label_367390:
    // 0x367390: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x367390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_367394:
    // 0x367394: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x367394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_367398:
    // 0x367398: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x367398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_36739c:
    // 0x36739c: 0x964301de  lhu         $v1, 0x1DE($s2)
    ctx->pc = 0x36739cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 478)));
label_3673a0:
    // 0x3673a0: 0xa64301da  sh          $v1, 0x1DA($s2)
    ctx->pc = 0x3673a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 474), (uint16_t)GPR_U32(ctx, 3));
label_3673a4:
    // 0x3673a4: 0x864301e0  lh          $v1, 0x1E0($s2)
    ctx->pc = 0x3673a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 480)));
label_3673a8:
    // 0x3673a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3673ac:
    if (ctx->pc == 0x3673ACu) {
        ctx->pc = 0x3673ACu;
            // 0x3673ac: 0xa64301dc  sh          $v1, 0x1DC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 476), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3673B0u;
        goto label_3673b0;
    }
    ctx->pc = 0x3673A8u;
    {
        const bool branch_taken_0x3673a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3673ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3673A8u;
            // 0x3673ac: 0xa64301dc  sh          $v1, 0x1DC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 476), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673a8) {
            ctx->pc = 0x3673BCu;
            goto label_3673bc;
        }
    }
    ctx->pc = 0x3673B0u;
label_3673b0:
    // 0x3673b0: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x3673b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_3673b4:
    // 0x3673b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3673b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3673b8:
    // 0x3673b8: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3673b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3673bc:
    // 0x3673bc: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3673bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3673c0:
    // 0x3673c0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x3673c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_3673c4:
    // 0x3673c4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3673c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_3673c8:
    // 0x3673c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3673c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3673cc:
    // 0x3673cc: 0xae440054  sw          $a0, 0x54($s2)
    ctx->pc = 0x3673ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
label_3673d0:
    // 0x3673d0: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3673d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3673d4:
    // 0x3673d4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3673d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_3673d8:
    // 0x3673d8: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_3673dc:
    if (ctx->pc == 0x3673DCu) {
        ctx->pc = 0x3673DCu;
            // 0x3673dc: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x3673E0u;
        goto label_3673e0;
    }
    ctx->pc = 0x3673D8u;
    {
        const bool branch_taken_0x3673d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3673d8) {
            ctx->pc = 0x3673DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3673D8u;
            // 0x3673dc: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3673FCu;
            goto label_3673fc;
        }
    }
    ctx->pc = 0x3673E0u;
label_3673e0:
    // 0x3673e0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3673e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3673e4:
    // 0x3673e4: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x3673e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_3673e8:
    // 0x3673e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3673e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3673ec:
    // 0x3673ec: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3673ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3673f0:
    // 0x3673f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3673f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3673f4:
    // 0x3673f4: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3673f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3673f8:
    // 0x3673f8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3673f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3673fc:
    // 0x3673fc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3673fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_367400:
    // 0x367400: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_367404:
    if (ctx->pc == 0x367404u) {
        ctx->pc = 0x367404u;
            // 0x367404: 0xc64100b8  lwc1        $f1, 0xB8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x367408u;
        goto label_367408;
    }
    ctx->pc = 0x367400u;
    {
        const bool branch_taken_0x367400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367400) {
            ctx->pc = 0x367404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367400u;
            // 0x367404: 0xc64100b8  lwc1        $f1, 0xB8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x367428u;
            goto label_367428;
        }
    }
    ctx->pc = 0x367408u;
label_367408:
    // 0x367408: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x367408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_36740c:
    // 0x36740c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x36740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_367410:
    // 0x367410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_367414:
    // 0x367414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367418:
    // 0x367418: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x367418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36741c:
    // 0x36741c: 0xc0d9ba8  jal         func_366EA0
label_367420:
    if (ctx->pc == 0x367420u) {
        ctx->pc = 0x367420u;
            // 0x367420: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x367424u;
        goto label_367424;
    }
    ctx->pc = 0x36741Cu;
    SET_GPR_U32(ctx, 31, 0x367424u);
    ctx->pc = 0x367420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36741Cu;
            // 0x367420: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x366EA0u;
    if (runtime->hasFunction(0x366EA0u)) {
        auto targetFn = runtime->lookupFunction(0x366EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367424u; }
        if (ctx->pc != 0x367424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00366EA0_0x366ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367424u; }
        if (ctx->pc != 0x367424u) { return; }
    }
    ctx->pc = 0x367424u;
label_367424:
    // 0x367424: 0xc64100b8  lwc1        $f1, 0xB8($s2)
    ctx->pc = 0x367424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_367428:
    // 0x367428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x367428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36742c:
    // 0x36742c: 0x0  nop
    ctx->pc = 0x36742cu;
    // NOP
label_367430:
    // 0x367430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x367430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_367434:
    // 0x367434: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_367438:
    if (ctx->pc == 0x367438u) {
        ctx->pc = 0x367438u;
            // 0x367438: 0x864301c6  lh          $v1, 0x1C6($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 454)));
        ctx->pc = 0x36743Cu;
        goto label_36743c;
    }
    ctx->pc = 0x367434u;
    {
        const bool branch_taken_0x367434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367434) {
            ctx->pc = 0x367438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367434u;
            // 0x367438: 0x864301c6  lh          $v1, 0x1C6($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 454)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36744Cu;
            goto label_36744c;
        }
    }
    ctx->pc = 0x36743Cu;
label_36743c:
    // 0x36743c: 0xe64100b4  swc1        $f1, 0xB4($s2)
    ctx->pc = 0x36743cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
label_367440:
    // 0x367440: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x367440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_367444:
    // 0x367444: 0xae4300b8  sw          $v1, 0xB8($s2)
    ctx->pc = 0x367444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 3));
label_367448:
    // 0x367448: 0x864301c6  lh          $v1, 0x1C6($s2)
    ctx->pc = 0x367448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 454)));
label_36744c:
    // 0x36744c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_367450:
    // 0x367450: 0x5066000e  beql        $v1, $a2, . + 4 + (0xE << 2)
label_367454:
    if (ctx->pc == 0x367454u) {
        ctx->pc = 0x367454u;
            // 0x367454: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x367458u;
        goto label_367458;
    }
    ctx->pc = 0x367450u;
    {
        const bool branch_taken_0x367450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x367450) {
            ctx->pc = 0x367454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367450u;
            // 0x367454: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36748Cu;
            goto label_36748c;
        }
    }
    ctx->pc = 0x367458u;
label_367458:
    // 0x367458: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x367458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_36745c:
    // 0x36745c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_367460:
    // 0x367460: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x367460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_367464:
    // 0x367464: 0x864201c6  lh          $v0, 0x1C6($s2)
    ctx->pc = 0x367464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 454)));
label_367468:
    // 0x367468: 0xa64201c0  sh          $v0, 0x1C0($s2)
    ctx->pc = 0x367468u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 448), (uint16_t)GPR_U32(ctx, 2));
label_36746c:
    // 0x36746c: 0xa64601c6  sh          $a2, 0x1C6($s2)
    ctx->pc = 0x36746cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 454), (uint16_t)GPR_U32(ctx, 6));
label_367470:
    // 0x367470: 0x864401c0  lh          $a0, 0x1C0($s2)
    ctx->pc = 0x367470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 448)));
label_367474:
    // 0x367474: 0xc0daa64  jal         func_36A990
label_367478:
    if (ctx->pc == 0x367478u) {
        ctx->pc = 0x367478u;
            // 0x367478: 0x26450194  addiu       $a1, $s2, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 404));
        ctx->pc = 0x36747Cu;
        goto label_36747c;
    }
    ctx->pc = 0x367474u;
    SET_GPR_U32(ctx, 31, 0x36747Cu);
    ctx->pc = 0x367478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367474u;
            // 0x367478: 0x26450194  addiu       $a1, $s2, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 404));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36A990u;
    if (runtime->hasFunction(0x36A990u)) {
        auto targetFn = runtime->lookupFunction(0x36A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36747Cu; }
        if (ctx->pc != 0x36747Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036A990_0x36a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36747Cu; }
        if (ctx->pc != 0x36747Cu) { return; }
    }
    ctx->pc = 0x36747Cu;
label_36747c:
    // 0x36747c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x36747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_367480:
    // 0x367480: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x367480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_367484:
    // 0x367484: 0x10000008  b           . + 4 + (0x8 << 2)
label_367488:
    if (ctx->pc == 0x367488u) {
        ctx->pc = 0x367488u;
            // 0x367488: 0xe64001cc  swc1        $f0, 0x1CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 460), bits); }
        ctx->pc = 0x36748Cu;
        goto label_36748c;
    }
    ctx->pc = 0x367484u;
    {
        const bool branch_taken_0x367484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367484u;
            // 0x367488: 0xe64001cc  swc1        $f0, 0x1CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367484) {
            ctx->pc = 0x3674A8u;
            goto label_3674a8;
        }
    }
    ctx->pc = 0x36748Cu;
label_36748c:
    // 0x36748c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x36748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_367490:
    // 0x367490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x367490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_367494:
    // 0x367494: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x367494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_367498:
    // 0x367498: 0xa64601c0  sh          $a2, 0x1C0($s2)
    ctx->pc = 0x367498u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 448), (uint16_t)GPR_U32(ctx, 6));
label_36749c:
    // 0x36749c: 0xa64601c6  sh          $a2, 0x1C6($s2)
    ctx->pc = 0x36749cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 454), (uint16_t)GPR_U32(ctx, 6));
label_3674a0:
    // 0x3674a0: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x3674a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_3674a4:
    // 0x3674a4: 0xae4001cc  sw          $zero, 0x1CC($s2)
    ctx->pc = 0x3674a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 0));
label_3674a8:
    // 0x3674a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3674a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3674ac:
    // 0x3674ac: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3674acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3674b0:
    // 0x3674b0: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x3674b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3674b4:
    // 0x3674b4: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_3674b8:
    if (ctx->pc == 0x3674B8u) {
        ctx->pc = 0x3674BCu;
        goto label_3674bc;
    }
    ctx->pc = 0x3674B4u;
    {
        const bool branch_taken_0x3674b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3674b4) {
            ctx->pc = 0x3675C0u;
            goto label_3675c0;
        }
    }
    ctx->pc = 0x3674BCu;
label_3674bc:
    // 0x3674bc: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3674bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3674c0:
    // 0x3674c0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3674c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3674c4:
    // 0x3674c4: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x3674c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_3674c8:
    // 0x3674c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3674c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3674cc:
    // 0x3674cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3674d0:
    if (ctx->pc == 0x3674D0u) {
        ctx->pc = 0x3674D4u;
        goto label_3674d4;
    }
    ctx->pc = 0x3674CCu;
    {
        const bool branch_taken_0x3674cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3674cc) {
            ctx->pc = 0x367500u;
            goto label_367500;
        }
    }
    ctx->pc = 0x3674D4u;
label_3674d4:
    // 0x3674d4: 0x602027  not         $a0, $v1
    ctx->pc = 0x3674d4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3674d8:
    // 0x3674d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3674d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3674dc:
    // 0x3674dc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3674e0:
    // 0x3674e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3674e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3674e4:
    // 0x3674e4: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3674e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3674e8:
    // 0x3674e8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3674e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3674ec:
    // 0x3674ec: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x3674ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3674f0:
    // 0x3674f0: 0xc057b7c  jal         func_15EDF0
label_3674f4:
    if (ctx->pc == 0x3674F4u) {
        ctx->pc = 0x3674F4u;
            // 0x3674f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3674F8u;
        goto label_3674f8;
    }
    ctx->pc = 0x3674F0u;
    SET_GPR_U32(ctx, 31, 0x3674F8u);
    ctx->pc = 0x3674F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3674F0u;
            // 0x3674f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3674F8u; }
        if (ctx->pc != 0x3674F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3674F8u; }
        if (ctx->pc != 0x3674F8u) { return; }
    }
    ctx->pc = 0x3674F8u;
label_3674f8:
    // 0x3674f8: 0x10000031  b           . + 4 + (0x31 << 2)
label_3674fc:
    if (ctx->pc == 0x3674FCu) {
        ctx->pc = 0x3674FCu;
            // 0x3674fc: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->pc = 0x367500u;
        goto label_367500;
    }
    ctx->pc = 0x3674F8u;
    {
        const bool branch_taken_0x3674f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3674FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3674F8u;
            // 0x3674fc: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3674f8) {
            ctx->pc = 0x3675C0u;
            goto label_3675c0;
        }
    }
    ctx->pc = 0x367500u;
label_367500:
    // 0x367500: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x367500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_367504:
    // 0x367504: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x367504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_367508:
    // 0x367508: 0x320f809  jalr        $t9
label_36750c:
    if (ctx->pc == 0x36750Cu) {
        ctx->pc = 0x367510u;
        goto label_367510;
    }
    ctx->pc = 0x367508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x367510u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x367510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x367510u; }
            if (ctx->pc != 0x367510u) { return; }
        }
        }
    }
    ctx->pc = 0x367510u;
label_367510:
    // 0x367510: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x367510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_367514:
    // 0x367514: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x367514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_367518:
    // 0x367518: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_36751c:
    if (ctx->pc == 0x36751Cu) {
        ctx->pc = 0x367520u;
        goto label_367520;
    }
    ctx->pc = 0x367518u;
    {
        const bool branch_taken_0x367518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367518) {
            ctx->pc = 0x367558u;
            goto label_367558;
        }
    }
    ctx->pc = 0x367520u;
label_367520:
    // 0x367520: 0x8e460104  lw          $a2, 0x104($s2)
    ctx->pc = 0x367520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_367524:
    // 0x367524: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x367524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_367528:
    // 0x367528: 0x8e480194  lw          $t0, 0x194($s2)
    ctx->pc = 0x367528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_36752c:
    // 0x36752c: 0x264401cc  addiu       $a0, $s2, 0x1CC
    ctx->pc = 0x36752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
label_367530:
    // 0x367530: 0x8e070108  lw          $a3, 0x108($s0)
    ctx->pc = 0x367530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_367534:
    // 0x367534: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x367534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_367538:
    // 0x367538: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x367538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36753c:
    // 0x36753c: 0xace60080  sw          $a2, 0x80($a3)
    ctx->pc = 0x36753cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 6));
label_367540:
    // 0x367540: 0xace80084  sw          $t0, 0x84($a3)
    ctx->pc = 0x367540u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 8));
label_367544:
    // 0x367544: 0xace50088  sw          $a1, 0x88($a3)
    ctx->pc = 0x367544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 5));
label_367548:
    // 0x367548: 0xace4008c  sw          $a0, 0x8C($a3)
    ctx->pc = 0x367548u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 4));
label_36754c:
    // 0x36754c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_367550:
    if (ctx->pc == 0x367550u) {
        ctx->pc = 0x367550u;
            // 0x367550: 0xace30090  sw          $v1, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
        ctx->pc = 0x367554u;
        goto label_367554;
    }
    ctx->pc = 0x36754Cu;
    {
        const bool branch_taken_0x36754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36754Cu;
            // 0x367550: 0xace30090  sw          $v1, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36754c) {
            ctx->pc = 0x3675C0u;
            goto label_3675c0;
        }
    }
    ctx->pc = 0x367554u;
label_367554:
    // 0x367554: 0x0  nop
    ctx->pc = 0x367554u;
    // NOP
label_367558:
    // 0x367558: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_36755c:
    if (ctx->pc == 0x36755Cu) {
        ctx->pc = 0x367560u;
        goto label_367560;
    }
    ctx->pc = 0x367558u;
    {
        const bool branch_taken_0x367558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367558) {
            ctx->pc = 0x367598u;
            goto label_367598;
        }
    }
    ctx->pc = 0x367560u;
label_367560:
    // 0x367560: 0x8e460104  lw          $a2, 0x104($s2)
    ctx->pc = 0x367560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_367564:
    // 0x367564: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x367564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_367568:
    // 0x367568: 0x8e070108  lw          $a3, 0x108($s0)
    ctx->pc = 0x367568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_36756c:
    // 0x36756c: 0x264401cc  addiu       $a0, $s2, 0x1CC
    ctx->pc = 0x36756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
label_367570:
    // 0x367570: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x367570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_367574:
    // 0x367574: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x367574u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_367578:
    // 0x367578: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x367578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36757c:
    // 0x36757c: 0xace60080  sw          $a2, 0x80($a3)
    ctx->pc = 0x36757cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 6));
label_367580:
    // 0x367580: 0xace80084  sw          $t0, 0x84($a3)
    ctx->pc = 0x367580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 8));
label_367584:
    // 0x367584: 0xace50088  sw          $a1, 0x88($a3)
    ctx->pc = 0x367584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 5));
label_367588:
    // 0x367588: 0xace4008c  sw          $a0, 0x8C($a3)
    ctx->pc = 0x367588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 4));
label_36758c:
    // 0x36758c: 0x1000000c  b           . + 4 + (0xC << 2)
label_367590:
    if (ctx->pc == 0x367590u) {
        ctx->pc = 0x367590u;
            // 0x367590: 0xace30090  sw          $v1, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
        ctx->pc = 0x367594u;
        goto label_367594;
    }
    ctx->pc = 0x36758Cu;
    {
        const bool branch_taken_0x36758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36758Cu;
            // 0x367590: 0xace30090  sw          $v1, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36758c) {
            ctx->pc = 0x3675C0u;
            goto label_3675c0;
        }
    }
    ctx->pc = 0x367594u;
label_367594:
    // 0x367594: 0x0  nop
    ctx->pc = 0x367594u;
    // NOP
label_367598:
    // 0x367598: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x367598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_36759c:
    // 0x36759c: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x36759cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3675a0:
    // 0x3675a0: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x3675a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_3675a4:
    // 0x3675a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3675a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3675a8:
    // 0x3675a8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3675a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3675ac:
    // 0x3675ac: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3675acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3675b0:
    // 0x3675b0: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x3675b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
label_3675b4:
    // 0x3675b4: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3675b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3675b8:
    // 0x3675b8: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x3675b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
label_3675bc:
    // 0x3675bc: 0xacc30090  sw          $v1, 0x90($a2)
    ctx->pc = 0x3675bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
label_3675c0:
    // 0x3675c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3675c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3675c4:
    // 0x3675c4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x3675c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3675c8:
    // 0x3675c8: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
label_3675cc:
    if (ctx->pc == 0x3675CCu) {
        ctx->pc = 0x3675CCu;
            // 0x3675cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3675D0u;
        goto label_3675d0;
    }
    ctx->pc = 0x3675C8u;
    {
        const bool branch_taken_0x3675c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3675CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3675C8u;
            // 0x3675cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3675c8) {
            ctx->pc = 0x3674B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3674b0;
        }
    }
    ctx->pc = 0x3675D0u;
label_3675d0:
    // 0x3675d0: 0x864301c8  lh          $v1, 0x1C8($s2)
    ctx->pc = 0x3675d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 456)));
label_3675d4:
    // 0x3675d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3675d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3675d8:
    // 0x3675d8: 0x50650018  beql        $v1, $a1, . + 4 + (0x18 << 2)
label_3675dc:
    if (ctx->pc == 0x3675DCu) {
        ctx->pc = 0x3675DCu;
            // 0x3675dc: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x3675E0u;
        goto label_3675e0;
    }
    ctx->pc = 0x3675D8u;
    {
        const bool branch_taken_0x3675d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3675d8) {
            ctx->pc = 0x3675DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3675D8u;
            // 0x3675dc: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36763Cu;
            goto label_36763c;
        }
    }
    ctx->pc = 0x3675E0u;
label_3675e0:
    // 0x3675e0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3675e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3675e4:
    // 0x3675e4: 0x26460198  addiu       $a2, $s2, 0x198
    ctx->pc = 0x3675e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
label_3675e8:
    // 0x3675e8: 0x264701a0  addiu       $a3, $s2, 0x1A0
    ctx->pc = 0x3675e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_3675ec:
    // 0x3675ec: 0x264801a4  addiu       $t0, $s2, 0x1A4
    ctx->pc = 0x3675ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 420));
label_3675f0:
    // 0x3675f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3675f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3675f4:
    // 0x3675f4: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3675f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3675f8:
    // 0x3675f8: 0x864201c8  lh          $v0, 0x1C8($s2)
    ctx->pc = 0x3675f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 456)));
label_3675fc:
    // 0x3675fc: 0xa64201c2  sh          $v0, 0x1C2($s2)
    ctx->pc = 0x3675fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 450), (uint16_t)GPR_U32(ctx, 2));
label_367600:
    // 0x367600: 0xa64501c8  sh          $a1, 0x1C8($s2)
    ctx->pc = 0x367600u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 456), (uint16_t)GPR_U32(ctx, 5));
label_367604:
    // 0x367604: 0xae4001a0  sw          $zero, 0x1A0($s2)
    ctx->pc = 0x367604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
label_367608:
    // 0x367608: 0xae4001a4  sw          $zero, 0x1A4($s2)
    ctx->pc = 0x367608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 0));
label_36760c:
    // 0x36760c: 0x864401c2  lh          $a0, 0x1C2($s2)
    ctx->pc = 0x36760cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 450)));
label_367610:
    // 0x367610: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x367610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_367614:
    // 0x367614: 0xc0daa34  jal         func_36A8D0
label_367618:
    if (ctx->pc == 0x367618u) {
        ctx->pc = 0x367618u;
            // 0x367618: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x36761Cu;
        goto label_36761c;
    }
    ctx->pc = 0x367614u;
    SET_GPR_U32(ctx, 31, 0x36761Cu);
    ctx->pc = 0x367618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367614u;
            // 0x367618: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36A8D0u;
    if (runtime->hasFunction(0x36A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x36A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36761Cu; }
        if (ctx->pc != 0x36761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036A8D0_0x36a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36761Cu; }
        if (ctx->pc != 0x36761Cu) { return; }
    }
    ctx->pc = 0x36761Cu;
label_36761c:
    // 0x36761c: 0x8e4301a0  lw          $v1, 0x1A0($s2)
    ctx->pc = 0x36761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_367620:
    // 0x367620: 0xae4301a8  sw          $v1, 0x1A8($s2)
    ctx->pc = 0x367620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 3));
label_367624:
    // 0x367624: 0x8e4301a4  lw          $v1, 0x1A4($s2)
    ctx->pc = 0x367624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_367628:
    // 0x367628: 0xae4301ac  sw          $v1, 0x1AC($s2)
    ctx->pc = 0x367628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 3));
label_36762c:
    // 0x36762c: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x36762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_367630:
    // 0x367630: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x367630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_367634:
    // 0x367634: 0x1000000f  b           . + 4 + (0xF << 2)
label_367638:
    if (ctx->pc == 0x367638u) {
        ctx->pc = 0x367638u;
            // 0x367638: 0xe64001d0  swc1        $f0, 0x1D0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 464), bits); }
        ctx->pc = 0x36763Cu;
        goto label_36763c;
    }
    ctx->pc = 0x367634u;
    {
        const bool branch_taken_0x367634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367634u;
            // 0x367638: 0xe64001d0  swc1        $f0, 0x1D0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367634) {
            ctx->pc = 0x367674u;
            goto label_367674;
        }
    }
    ctx->pc = 0x36763Cu;
label_36763c:
    // 0x36763c: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x36763cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_367640:
    // 0x367640: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_367644:
    if (ctx->pc == 0x367644u) {
        ctx->pc = 0x367644u;
            // 0x367644: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x367648u;
        goto label_367648;
    }
    ctx->pc = 0x367640u;
    {
        const bool branch_taken_0x367640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x367644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367640u;
            // 0x367644: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367640) {
            ctx->pc = 0x367660u;
            goto label_367660;
        }
    }
    ctx->pc = 0x367648u;
label_367648:
    // 0x367648: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x367648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_36764c:
    // 0x36764c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x36764cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_367650:
    // 0x367650: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x367650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_367654:
    // 0x367654: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x367654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_367658:
    // 0x367658: 0xa64501c2  sh          $a1, 0x1C2($s2)
    ctx->pc = 0x367658u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 450), (uint16_t)GPR_U32(ctx, 5));
label_36765c:
    // 0x36765c: 0xae4001d0  sw          $zero, 0x1D0($s2)
    ctx->pc = 0x36765cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 0));
label_367660:
    // 0x367660: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x367660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
label_367664:
    // 0x367664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x367664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_367668:
    // 0x367668: 0xae4001a0  sw          $zero, 0x1A0($s2)
    ctx->pc = 0x367668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
label_36766c:
    // 0x36766c: 0xae4001a4  sw          $zero, 0x1A4($s2)
    ctx->pc = 0x36766cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 0));
label_367670:
    // 0x367670: 0xa64301c8  sh          $v1, 0x1C8($s2)
    ctx->pc = 0x367670u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 456), (uint16_t)GPR_U32(ctx, 3));
label_367674:
    // 0x367674: 0x864301ca  lh          $v1, 0x1CA($s2)
    ctx->pc = 0x367674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 458)));
label_367678:
    // 0x367678: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x367678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36767c:
    // 0x36767c: 0x50650027  beql        $v1, $a1, . + 4 + (0x27 << 2)
label_367680:
    if (ctx->pc == 0x367680u) {
        ctx->pc = 0x367680u;
            // 0x367680: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x367684u;
        goto label_367684;
    }
    ctx->pc = 0x36767Cu;
    {
        const bool branch_taken_0x36767c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x36767c) {
            ctx->pc = 0x367680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36767Cu;
            // 0x367680: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36771Cu;
            goto label_36771c;
        }
    }
    ctx->pc = 0x367684u;
label_367684:
    // 0x367684: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x367684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_367688:
    // 0x367688: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x367688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_36768c:
    // 0x36768c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_367690:
    // 0x367690: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x367690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_367694:
    // 0x367694: 0x864201ca  lh          $v0, 0x1CA($s2)
    ctx->pc = 0x367694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 458)));
label_367698:
    // 0x367698: 0xa64201c4  sh          $v0, 0x1C4($s2)
    ctx->pc = 0x367698u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 452), (uint16_t)GPR_U32(ctx, 2));
label_36769c:
    // 0x36769c: 0xa64501ca  sh          $a1, 0x1CA($s2)
    ctx->pc = 0x36769cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 458), (uint16_t)GPR_U32(ctx, 5));
label_3676a0:
    // 0x3676a0: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x3676a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
label_3676a4:
    // 0x3676a4: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x3676a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
label_3676a8:
    // 0x3676a8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3676a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3676ac:
    // 0x3676ac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3676acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_3676b0:
    // 0x3676b0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3676b4:
    if (ctx->pc == 0x3676B4u) {
        ctx->pc = 0x3676B4u;
            // 0x3676b4: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->pc = 0x3676B8u;
        goto label_3676b8;
    }
    ctx->pc = 0x3676B0u;
    {
        const bool branch_taken_0x3676b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3676b0) {
            ctx->pc = 0x3676B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3676B0u;
            // 0x3676b4: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3676DCu;
            goto label_3676dc;
        }
    }
    ctx->pc = 0x3676B8u;
label_3676b8:
    // 0x3676b8: 0x864401c4  lh          $a0, 0x1C4($s2)
    ctx->pc = 0x3676b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 452)));
label_3676bc:
    // 0x3676bc: 0x2646019c  addiu       $a2, $s2, 0x19C
    ctx->pc = 0x3676bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
label_3676c0:
    // 0x3676c0: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x3676c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_3676c4:
    // 0x3676c4: 0x264801b0  addiu       $t0, $s2, 0x1B0
    ctx->pc = 0x3676c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_3676c8:
    // 0x3676c8: 0x8e4701a0  lw          $a3, 0x1A0($s2)
    ctx->pc = 0x3676c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_3676cc:
    // 0x3676cc: 0xc0daa00  jal         func_36A800
label_3676d0:
    if (ctx->pc == 0x3676D0u) {
        ctx->pc = 0x3676D0u;
            // 0x3676d0: 0x264901b4  addiu       $t1, $s2, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
        ctx->pc = 0x3676D4u;
        goto label_3676d4;
    }
    ctx->pc = 0x3676CCu;
    SET_GPR_U32(ctx, 31, 0x3676D4u);
    ctx->pc = 0x3676D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3676CCu;
            // 0x3676d0: 0x264901b4  addiu       $t1, $s2, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36A800u;
    if (runtime->hasFunction(0x36A800u)) {
        auto targetFn = runtime->lookupFunction(0x36A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3676D4u; }
        if (ctx->pc != 0x3676D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036A800_0x36a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3676D4u; }
        if (ctx->pc != 0x3676D4u) { return; }
    }
    ctx->pc = 0x3676D4u;
label_3676d4:
    // 0x3676d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3676d8:
    if (ctx->pc == 0x3676D8u) {
        ctx->pc = 0x3676D8u;
            // 0x3676d8: 0x8e4301b0  lw          $v1, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->pc = 0x3676DCu;
        goto label_3676dc;
    }
    ctx->pc = 0x3676D4u;
    {
        const bool branch_taken_0x3676d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3676D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3676D4u;
            // 0x3676d8: 0x8e4301b0  lw          $v1, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3676d4) {
            ctx->pc = 0x3676F8u;
            goto label_3676f8;
        }
    }
    ctx->pc = 0x3676DCu;
label_3676dc:
    // 0x3676dc: 0x2646019c  addiu       $a2, $s2, 0x19C
    ctx->pc = 0x3676dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
label_3676e0:
    // 0x3676e0: 0x864401c4  lh          $a0, 0x1C4($s2)
    ctx->pc = 0x3676e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 452)));
label_3676e4:
    // 0x3676e4: 0x264801b0  addiu       $t0, $s2, 0x1B0
    ctx->pc = 0x3676e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_3676e8:
    // 0x3676e8: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x3676e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3676ec:
    // 0x3676ec: 0xc0daa00  jal         func_36A800
label_3676f0:
    if (ctx->pc == 0x3676F0u) {
        ctx->pc = 0x3676F0u;
            // 0x3676f0: 0x264901b4  addiu       $t1, $s2, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
        ctx->pc = 0x3676F4u;
        goto label_3676f4;
    }
    ctx->pc = 0x3676ECu;
    SET_GPR_U32(ctx, 31, 0x3676F4u);
    ctx->pc = 0x3676F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3676ECu;
            // 0x3676f0: 0x264901b4  addiu       $t1, $s2, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36A800u;
    if (runtime->hasFunction(0x36A800u)) {
        auto targetFn = runtime->lookupFunction(0x36A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3676F4u; }
        if (ctx->pc != 0x3676F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036A800_0x36a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3676F4u; }
        if (ctx->pc != 0x3676F4u) { return; }
    }
    ctx->pc = 0x3676F4u;
label_3676f4:
    // 0x3676f4: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x3676f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_3676f8:
    // 0x3676f8: 0xae4301b8  sw          $v1, 0x1B8($s2)
    ctx->pc = 0x3676f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 3));
label_3676fc:
    // 0x3676fc: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x3676fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_367700:
    // 0x367700: 0xae4301bc  sw          $v1, 0x1BC($s2)
    ctx->pc = 0x367700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 3));
label_367704:
    // 0x367704: 0x8e43019c  lw          $v1, 0x19C($s2)
    ctx->pc = 0x367704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
label_367708:
    // 0x367708: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x367708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36770c:
    // 0x36770c: 0xe64001d4  swc1        $f0, 0x1D4($s2)
    ctx->pc = 0x36770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
label_367710:
    // 0x367710: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x367710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_367714:
    // 0x367714: 0x10000010  b           . + 4 + (0x10 << 2)
label_367718:
    if (ctx->pc == 0x367718u) {
        ctx->pc = 0x367718u;
            // 0x367718: 0xae4301bc  sw          $v1, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 3));
        ctx->pc = 0x36771Cu;
        goto label_36771c;
    }
    ctx->pc = 0x367714u;
    {
        const bool branch_taken_0x367714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367714u;
            // 0x367718: 0xae4301bc  sw          $v1, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367714) {
            ctx->pc = 0x367758u;
            goto label_367758;
        }
    }
    ctx->pc = 0x36771Cu;
label_36771c:
    // 0x36771c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x36771cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_367720:
    // 0x367720: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x367720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_367724:
    // 0x367724: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_367728:
    if (ctx->pc == 0x367728u) {
        ctx->pc = 0x367728u;
            // 0x367728: 0xae40019c  sw          $zero, 0x19C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
        ctx->pc = 0x36772Cu;
        goto label_36772c;
    }
    ctx->pc = 0x367724u;
    {
        const bool branch_taken_0x367724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367724) {
            ctx->pc = 0x367728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367724u;
            // 0x367728: 0xae40019c  sw          $zero, 0x19C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367748u;
            goto label_367748;
        }
    }
    ctx->pc = 0x36772Cu;
label_36772c:
    // 0x36772c: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x36772cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_367730:
    // 0x367730: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x367730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_367734:
    // 0x367734: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x367734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_367738:
    // 0x367738: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x367738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_36773c:
    // 0x36773c: 0xa64501c4  sh          $a1, 0x1C4($s2)
    ctx->pc = 0x36773cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 452), (uint16_t)GPR_U32(ctx, 5));
label_367740:
    // 0x367740: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x367740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
label_367744:
    // 0x367744: 0xae40019c  sw          $zero, 0x19C($s2)
    ctx->pc = 0x367744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
label_367748:
    // 0x367748: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x367748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36774c:
    // 0x36774c: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x36774cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
label_367750:
    // 0x367750: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x367750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
label_367754:
    // 0x367754: 0xa64301ca  sh          $v1, 0x1CA($s2)
    ctx->pc = 0x367754u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 458), (uint16_t)GPR_U32(ctx, 3));
label_367758:
    // 0x367758: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x367758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36775c:
    // 0x36775c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36775cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_367760:
    // 0x367760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_367764:
    // 0x367764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367768:
    // 0x367768: 0x3e00008  jr          $ra
label_36776c:
    if (ctx->pc == 0x36776Cu) {
        ctx->pc = 0x36776Cu;
            // 0x36776c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x367770u;
        goto label_fallthrough_0x367768;
    }
    ctx->pc = 0x367768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367768u;
            // 0x36776c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x367768:
    ctx->pc = 0x367770u;
}
