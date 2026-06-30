#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00437350
// Address: 0x437350 - 0x437830
void sub_00437350_0x437350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00437350_0x437350");
#endif

    switch (ctx->pc) {
        case 0x437350u: goto label_437350;
        case 0x437354u: goto label_437354;
        case 0x437358u: goto label_437358;
        case 0x43735cu: goto label_43735c;
        case 0x437360u: goto label_437360;
        case 0x437364u: goto label_437364;
        case 0x437368u: goto label_437368;
        case 0x43736cu: goto label_43736c;
        case 0x437370u: goto label_437370;
        case 0x437374u: goto label_437374;
        case 0x437378u: goto label_437378;
        case 0x43737cu: goto label_43737c;
        case 0x437380u: goto label_437380;
        case 0x437384u: goto label_437384;
        case 0x437388u: goto label_437388;
        case 0x43738cu: goto label_43738c;
        case 0x437390u: goto label_437390;
        case 0x437394u: goto label_437394;
        case 0x437398u: goto label_437398;
        case 0x43739cu: goto label_43739c;
        case 0x4373a0u: goto label_4373a0;
        case 0x4373a4u: goto label_4373a4;
        case 0x4373a8u: goto label_4373a8;
        case 0x4373acu: goto label_4373ac;
        case 0x4373b0u: goto label_4373b0;
        case 0x4373b4u: goto label_4373b4;
        case 0x4373b8u: goto label_4373b8;
        case 0x4373bcu: goto label_4373bc;
        case 0x4373c0u: goto label_4373c0;
        case 0x4373c4u: goto label_4373c4;
        case 0x4373c8u: goto label_4373c8;
        case 0x4373ccu: goto label_4373cc;
        case 0x4373d0u: goto label_4373d0;
        case 0x4373d4u: goto label_4373d4;
        case 0x4373d8u: goto label_4373d8;
        case 0x4373dcu: goto label_4373dc;
        case 0x4373e0u: goto label_4373e0;
        case 0x4373e4u: goto label_4373e4;
        case 0x4373e8u: goto label_4373e8;
        case 0x4373ecu: goto label_4373ec;
        case 0x4373f0u: goto label_4373f0;
        case 0x4373f4u: goto label_4373f4;
        case 0x4373f8u: goto label_4373f8;
        case 0x4373fcu: goto label_4373fc;
        case 0x437400u: goto label_437400;
        case 0x437404u: goto label_437404;
        case 0x437408u: goto label_437408;
        case 0x43740cu: goto label_43740c;
        case 0x437410u: goto label_437410;
        case 0x437414u: goto label_437414;
        case 0x437418u: goto label_437418;
        case 0x43741cu: goto label_43741c;
        case 0x437420u: goto label_437420;
        case 0x437424u: goto label_437424;
        case 0x437428u: goto label_437428;
        case 0x43742cu: goto label_43742c;
        case 0x437430u: goto label_437430;
        case 0x437434u: goto label_437434;
        case 0x437438u: goto label_437438;
        case 0x43743cu: goto label_43743c;
        case 0x437440u: goto label_437440;
        case 0x437444u: goto label_437444;
        case 0x437448u: goto label_437448;
        case 0x43744cu: goto label_43744c;
        case 0x437450u: goto label_437450;
        case 0x437454u: goto label_437454;
        case 0x437458u: goto label_437458;
        case 0x43745cu: goto label_43745c;
        case 0x437460u: goto label_437460;
        case 0x437464u: goto label_437464;
        case 0x437468u: goto label_437468;
        case 0x43746cu: goto label_43746c;
        case 0x437470u: goto label_437470;
        case 0x437474u: goto label_437474;
        case 0x437478u: goto label_437478;
        case 0x43747cu: goto label_43747c;
        case 0x437480u: goto label_437480;
        case 0x437484u: goto label_437484;
        case 0x437488u: goto label_437488;
        case 0x43748cu: goto label_43748c;
        case 0x437490u: goto label_437490;
        case 0x437494u: goto label_437494;
        case 0x437498u: goto label_437498;
        case 0x43749cu: goto label_43749c;
        case 0x4374a0u: goto label_4374a0;
        case 0x4374a4u: goto label_4374a4;
        case 0x4374a8u: goto label_4374a8;
        case 0x4374acu: goto label_4374ac;
        case 0x4374b0u: goto label_4374b0;
        case 0x4374b4u: goto label_4374b4;
        case 0x4374b8u: goto label_4374b8;
        case 0x4374bcu: goto label_4374bc;
        case 0x4374c0u: goto label_4374c0;
        case 0x4374c4u: goto label_4374c4;
        case 0x4374c8u: goto label_4374c8;
        case 0x4374ccu: goto label_4374cc;
        case 0x4374d0u: goto label_4374d0;
        case 0x4374d4u: goto label_4374d4;
        case 0x4374d8u: goto label_4374d8;
        case 0x4374dcu: goto label_4374dc;
        case 0x4374e0u: goto label_4374e0;
        case 0x4374e4u: goto label_4374e4;
        case 0x4374e8u: goto label_4374e8;
        case 0x4374ecu: goto label_4374ec;
        case 0x4374f0u: goto label_4374f0;
        case 0x4374f4u: goto label_4374f4;
        case 0x4374f8u: goto label_4374f8;
        case 0x4374fcu: goto label_4374fc;
        case 0x437500u: goto label_437500;
        case 0x437504u: goto label_437504;
        case 0x437508u: goto label_437508;
        case 0x43750cu: goto label_43750c;
        case 0x437510u: goto label_437510;
        case 0x437514u: goto label_437514;
        case 0x437518u: goto label_437518;
        case 0x43751cu: goto label_43751c;
        case 0x437520u: goto label_437520;
        case 0x437524u: goto label_437524;
        case 0x437528u: goto label_437528;
        case 0x43752cu: goto label_43752c;
        case 0x437530u: goto label_437530;
        case 0x437534u: goto label_437534;
        case 0x437538u: goto label_437538;
        case 0x43753cu: goto label_43753c;
        case 0x437540u: goto label_437540;
        case 0x437544u: goto label_437544;
        case 0x437548u: goto label_437548;
        case 0x43754cu: goto label_43754c;
        case 0x437550u: goto label_437550;
        case 0x437554u: goto label_437554;
        case 0x437558u: goto label_437558;
        case 0x43755cu: goto label_43755c;
        case 0x437560u: goto label_437560;
        case 0x437564u: goto label_437564;
        case 0x437568u: goto label_437568;
        case 0x43756cu: goto label_43756c;
        case 0x437570u: goto label_437570;
        case 0x437574u: goto label_437574;
        case 0x437578u: goto label_437578;
        case 0x43757cu: goto label_43757c;
        case 0x437580u: goto label_437580;
        case 0x437584u: goto label_437584;
        case 0x437588u: goto label_437588;
        case 0x43758cu: goto label_43758c;
        case 0x437590u: goto label_437590;
        case 0x437594u: goto label_437594;
        case 0x437598u: goto label_437598;
        case 0x43759cu: goto label_43759c;
        case 0x4375a0u: goto label_4375a0;
        case 0x4375a4u: goto label_4375a4;
        case 0x4375a8u: goto label_4375a8;
        case 0x4375acu: goto label_4375ac;
        case 0x4375b0u: goto label_4375b0;
        case 0x4375b4u: goto label_4375b4;
        case 0x4375b8u: goto label_4375b8;
        case 0x4375bcu: goto label_4375bc;
        case 0x4375c0u: goto label_4375c0;
        case 0x4375c4u: goto label_4375c4;
        case 0x4375c8u: goto label_4375c8;
        case 0x4375ccu: goto label_4375cc;
        case 0x4375d0u: goto label_4375d0;
        case 0x4375d4u: goto label_4375d4;
        case 0x4375d8u: goto label_4375d8;
        case 0x4375dcu: goto label_4375dc;
        case 0x4375e0u: goto label_4375e0;
        case 0x4375e4u: goto label_4375e4;
        case 0x4375e8u: goto label_4375e8;
        case 0x4375ecu: goto label_4375ec;
        case 0x4375f0u: goto label_4375f0;
        case 0x4375f4u: goto label_4375f4;
        case 0x4375f8u: goto label_4375f8;
        case 0x4375fcu: goto label_4375fc;
        case 0x437600u: goto label_437600;
        case 0x437604u: goto label_437604;
        case 0x437608u: goto label_437608;
        case 0x43760cu: goto label_43760c;
        case 0x437610u: goto label_437610;
        case 0x437614u: goto label_437614;
        case 0x437618u: goto label_437618;
        case 0x43761cu: goto label_43761c;
        case 0x437620u: goto label_437620;
        case 0x437624u: goto label_437624;
        case 0x437628u: goto label_437628;
        case 0x43762cu: goto label_43762c;
        case 0x437630u: goto label_437630;
        case 0x437634u: goto label_437634;
        case 0x437638u: goto label_437638;
        case 0x43763cu: goto label_43763c;
        case 0x437640u: goto label_437640;
        case 0x437644u: goto label_437644;
        case 0x437648u: goto label_437648;
        case 0x43764cu: goto label_43764c;
        case 0x437650u: goto label_437650;
        case 0x437654u: goto label_437654;
        case 0x437658u: goto label_437658;
        case 0x43765cu: goto label_43765c;
        case 0x437660u: goto label_437660;
        case 0x437664u: goto label_437664;
        case 0x437668u: goto label_437668;
        case 0x43766cu: goto label_43766c;
        case 0x437670u: goto label_437670;
        case 0x437674u: goto label_437674;
        case 0x437678u: goto label_437678;
        case 0x43767cu: goto label_43767c;
        case 0x437680u: goto label_437680;
        case 0x437684u: goto label_437684;
        case 0x437688u: goto label_437688;
        case 0x43768cu: goto label_43768c;
        case 0x437690u: goto label_437690;
        case 0x437694u: goto label_437694;
        case 0x437698u: goto label_437698;
        case 0x43769cu: goto label_43769c;
        case 0x4376a0u: goto label_4376a0;
        case 0x4376a4u: goto label_4376a4;
        case 0x4376a8u: goto label_4376a8;
        case 0x4376acu: goto label_4376ac;
        case 0x4376b0u: goto label_4376b0;
        case 0x4376b4u: goto label_4376b4;
        case 0x4376b8u: goto label_4376b8;
        case 0x4376bcu: goto label_4376bc;
        case 0x4376c0u: goto label_4376c0;
        case 0x4376c4u: goto label_4376c4;
        case 0x4376c8u: goto label_4376c8;
        case 0x4376ccu: goto label_4376cc;
        case 0x4376d0u: goto label_4376d0;
        case 0x4376d4u: goto label_4376d4;
        case 0x4376d8u: goto label_4376d8;
        case 0x4376dcu: goto label_4376dc;
        case 0x4376e0u: goto label_4376e0;
        case 0x4376e4u: goto label_4376e4;
        case 0x4376e8u: goto label_4376e8;
        case 0x4376ecu: goto label_4376ec;
        case 0x4376f0u: goto label_4376f0;
        case 0x4376f4u: goto label_4376f4;
        case 0x4376f8u: goto label_4376f8;
        case 0x4376fcu: goto label_4376fc;
        case 0x437700u: goto label_437700;
        case 0x437704u: goto label_437704;
        case 0x437708u: goto label_437708;
        case 0x43770cu: goto label_43770c;
        case 0x437710u: goto label_437710;
        case 0x437714u: goto label_437714;
        case 0x437718u: goto label_437718;
        case 0x43771cu: goto label_43771c;
        case 0x437720u: goto label_437720;
        case 0x437724u: goto label_437724;
        case 0x437728u: goto label_437728;
        case 0x43772cu: goto label_43772c;
        case 0x437730u: goto label_437730;
        case 0x437734u: goto label_437734;
        case 0x437738u: goto label_437738;
        case 0x43773cu: goto label_43773c;
        case 0x437740u: goto label_437740;
        case 0x437744u: goto label_437744;
        case 0x437748u: goto label_437748;
        case 0x43774cu: goto label_43774c;
        case 0x437750u: goto label_437750;
        case 0x437754u: goto label_437754;
        case 0x437758u: goto label_437758;
        case 0x43775cu: goto label_43775c;
        case 0x437760u: goto label_437760;
        case 0x437764u: goto label_437764;
        case 0x437768u: goto label_437768;
        case 0x43776cu: goto label_43776c;
        case 0x437770u: goto label_437770;
        case 0x437774u: goto label_437774;
        case 0x437778u: goto label_437778;
        case 0x43777cu: goto label_43777c;
        case 0x437780u: goto label_437780;
        case 0x437784u: goto label_437784;
        case 0x437788u: goto label_437788;
        case 0x43778cu: goto label_43778c;
        case 0x437790u: goto label_437790;
        case 0x437794u: goto label_437794;
        case 0x437798u: goto label_437798;
        case 0x43779cu: goto label_43779c;
        case 0x4377a0u: goto label_4377a0;
        case 0x4377a4u: goto label_4377a4;
        case 0x4377a8u: goto label_4377a8;
        case 0x4377acu: goto label_4377ac;
        case 0x4377b0u: goto label_4377b0;
        case 0x4377b4u: goto label_4377b4;
        case 0x4377b8u: goto label_4377b8;
        case 0x4377bcu: goto label_4377bc;
        case 0x4377c0u: goto label_4377c0;
        case 0x4377c4u: goto label_4377c4;
        case 0x4377c8u: goto label_4377c8;
        case 0x4377ccu: goto label_4377cc;
        case 0x4377d0u: goto label_4377d0;
        case 0x4377d4u: goto label_4377d4;
        case 0x4377d8u: goto label_4377d8;
        case 0x4377dcu: goto label_4377dc;
        case 0x4377e0u: goto label_4377e0;
        case 0x4377e4u: goto label_4377e4;
        case 0x4377e8u: goto label_4377e8;
        case 0x4377ecu: goto label_4377ec;
        case 0x4377f0u: goto label_4377f0;
        case 0x4377f4u: goto label_4377f4;
        case 0x4377f8u: goto label_4377f8;
        case 0x4377fcu: goto label_4377fc;
        case 0x437800u: goto label_437800;
        case 0x437804u: goto label_437804;
        case 0x437808u: goto label_437808;
        case 0x43780cu: goto label_43780c;
        case 0x437810u: goto label_437810;
        case 0x437814u: goto label_437814;
        case 0x437818u: goto label_437818;
        case 0x43781cu: goto label_43781c;
        case 0x437820u: goto label_437820;
        case 0x437824u: goto label_437824;
        case 0x437828u: goto label_437828;
        case 0x43782cu: goto label_43782c;
        default: break;
    }

    ctx->pc = 0x437350u;

label_437350:
    // 0x437350: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x437350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_437354:
    // 0x437354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437358:
    // 0x437358: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x437358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_43735c:
    // 0x43735c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_437360:
    // 0x437360: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x437360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_437364:
    // 0x437364: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x437364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_437368:
    // 0x437368: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x437368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43736c:
    // 0x43736c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x43736cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_437370:
    // 0x437370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x437370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_437374:
    // 0x437374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x437374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_437378:
    // 0x437378: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x437378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_43737c:
    // 0x43737c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_437380:
    // 0x437380: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x437380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_437384:
    // 0x437384: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x437384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_437388:
    // 0x437388: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_43738c:
    if (ctx->pc == 0x43738Cu) {
        ctx->pc = 0x43738Cu;
            // 0x43738c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437390u;
        goto label_437390;
    }
    ctx->pc = 0x437388u;
    {
        const bool branch_taken_0x437388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437388u;
            // 0x43738c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437388) {
            ctx->pc = 0x437398u;
            goto label_437398;
        }
    }
    ctx->pc = 0x437390u;
label_437390:
    // 0x437390: 0x1000009a  b           . + 4 + (0x9A << 2)
label_437394:
    if (ctx->pc == 0x437394u) {
        ctx->pc = 0x437394u;
            // 0x437394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437398u;
        goto label_437398;
    }
    ctx->pc = 0x437390u;
    {
        const bool branch_taken_0x437390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437390u;
            // 0x437394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437390) {
            ctx->pc = 0x4375FCu;
            goto label_4375fc;
        }
    }
    ctx->pc = 0x437398u;
label_437398:
    // 0x437398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x437398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43739c:
    // 0x43739c: 0xc04f278  jal         func_13C9E0
label_4373a0:
    if (ctx->pc == 0x4373A0u) {
        ctx->pc = 0x4373A0u;
            // 0x4373a0: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x4373A4u;
        goto label_4373a4;
    }
    ctx->pc = 0x43739Cu;
    SET_GPR_U32(ctx, 31, 0x4373A4u);
    ctx->pc = 0x4373A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43739Cu;
            // 0x4373a0: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373A4u; }
        if (ctx->pc != 0x4373A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373A4u; }
        if (ctx->pc != 0x4373A4u) { return; }
    }
    ctx->pc = 0x4373A4u;
label_4373a4:
    // 0x4373a4: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x4373a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_4373a8:
    // 0x4373a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4373a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4373ac:
    // 0x4373ac: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_4373b0:
    if (ctx->pc == 0x4373B0u) {
        ctx->pc = 0x4373B0u;
            // 0x4373b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4373B4u;
        goto label_4373b4;
    }
    ctx->pc = 0x4373ACu;
    {
        const bool branch_taken_0x4373ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4373ac) {
            ctx->pc = 0x4373B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4373ACu;
            // 0x4373b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4373C8u;
            goto label_4373c8;
        }
    }
    ctx->pc = 0x4373B4u;
label_4373b4:
    // 0x4373b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4373b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4373b8:
    // 0x4373b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4373b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4373bc:
    // 0x4373bc: 0xc04cdd0  jal         func_133740
label_4373c0:
    if (ctx->pc == 0x4373C0u) {
        ctx->pc = 0x4373C0u;
            // 0x4373c0: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x4373C4u;
        goto label_4373c4;
    }
    ctx->pc = 0x4373BCu;
    SET_GPR_U32(ctx, 31, 0x4373C4u);
    ctx->pc = 0x4373C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4373BCu;
            // 0x4373c0: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373C4u; }
        if (ctx->pc != 0x4373C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373C4u; }
        if (ctx->pc != 0x4373C4u) { return; }
    }
    ctx->pc = 0x4373C4u;
label_4373c4:
    // 0x4373c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4373c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4373c8:
    // 0x4373c8: 0xc04ce80  jal         func_133A00
label_4373cc:
    if (ctx->pc == 0x4373CCu) {
        ctx->pc = 0x4373CCu;
            // 0x4373cc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x4373D0u;
        goto label_4373d0;
    }
    ctx->pc = 0x4373C8u;
    SET_GPR_U32(ctx, 31, 0x4373D0u);
    ctx->pc = 0x4373CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4373C8u;
            // 0x4373cc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373D0u; }
        if (ctx->pc != 0x4373D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373D0u; }
        if (ctx->pc != 0x4373D0u) { return; }
    }
    ctx->pc = 0x4373D0u;
label_4373d0:
    // 0x4373d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4373d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4373d4:
    // 0x4373d4: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x4373d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_4373d8:
    // 0x4373d8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4373d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4373dc:
    // 0x4373dc: 0xc07698c  jal         func_1DA630
label_4373e0:
    if (ctx->pc == 0x4373E0u) {
        ctx->pc = 0x4373E0u;
            // 0x4373e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4373E4u;
        goto label_4373e4;
    }
    ctx->pc = 0x4373DCu;
    SET_GPR_U32(ctx, 31, 0x4373E4u);
    ctx->pc = 0x4373E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4373DCu;
            // 0x4373e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373E4u; }
        if (ctx->pc != 0x4373E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4373E4u; }
        if (ctx->pc != 0x4373E4u) { return; }
    }
    ctx->pc = 0x4373E4u;
label_4373e4:
    // 0x4373e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4373e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4373e8:
    // 0x4373e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4373ec:
    if (ctx->pc == 0x4373ECu) {
        ctx->pc = 0x4373F0u;
        goto label_4373f0;
    }
    ctx->pc = 0x4373E8u;
    {
        const bool branch_taken_0x4373e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4373e8) {
            ctx->pc = 0x4373F8u;
            goto label_4373f8;
        }
    }
    ctx->pc = 0x4373F0u;
label_4373f0:
    // 0x4373f0: 0x10000033  b           . + 4 + (0x33 << 2)
label_4373f4:
    if (ctx->pc == 0x4373F4u) {
        ctx->pc = 0x4373F4u;
            // 0x4373f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4373F8u;
        goto label_4373f8;
    }
    ctx->pc = 0x4373F0u;
    {
        const bool branch_taken_0x4373f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4373F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4373F0u;
            // 0x4373f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4373f0) {
            ctx->pc = 0x4374C0u;
            goto label_4374c0;
        }
    }
    ctx->pc = 0x4373F8u;
label_4373f8:
    // 0x4373f8: 0xc0576f4  jal         func_15DBD0
label_4373fc:
    if (ctx->pc == 0x4373FCu) {
        ctx->pc = 0x437400u;
        goto label_437400;
    }
    ctx->pc = 0x4373F8u;
    SET_GPR_U32(ctx, 31, 0x437400u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437400u; }
        if (ctx->pc != 0x437400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437400u; }
        if (ctx->pc != 0x437400u) { return; }
    }
    ctx->pc = 0x437400u;
label_437400:
    // 0x437400: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x437400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_437404:
    // 0x437404: 0xc076984  jal         func_1DA610
label_437408:
    if (ctx->pc == 0x437408u) {
        ctx->pc = 0x437408u;
            // 0x437408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43740Cu;
        goto label_43740c;
    }
    ctx->pc = 0x437404u;
    SET_GPR_U32(ctx, 31, 0x43740Cu);
    ctx->pc = 0x437408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437404u;
            // 0x437408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43740Cu; }
        if (ctx->pc != 0x43740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43740Cu; }
        if (ctx->pc != 0x43740Cu) { return; }
    }
    ctx->pc = 0x43740Cu;
label_43740c:
    // 0x43740c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43740cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_437410:
    // 0x437410: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x437410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_437414:
    // 0x437414: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x437414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_437418:
    // 0x437418: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x437418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43741c:
    // 0x43741c: 0xc4420140  lwc1        $f2, 0x140($v0)
    ctx->pc = 0x43741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_437420:
    // 0x437420: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x437420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_437424:
    // 0x437424: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x437424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_437428:
    // 0x437428: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x437428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43742c:
    // 0x43742c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x43742cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_437430:
    // 0x437430: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x437430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_437434:
    // 0x437434: 0xc440014c  lwc1        $f0, 0x14C($v0)
    ctx->pc = 0x437434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437438:
    // 0x437438: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x437438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_43743c:
    // 0x43743c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_437440:
    // 0x437440: 0x8c420144  lw          $v0, 0x144($v0)
    ctx->pc = 0x437440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_437444:
    // 0x437444: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x437444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_437448:
    // 0x437448: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x437448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_43744c:
    // 0x43744c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x43744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437450:
    // 0x437450: 0xc04cca0  jal         func_133280
label_437454:
    if (ctx->pc == 0x437454u) {
        ctx->pc = 0x437454u;
            // 0x437454: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x437458u;
        goto label_437458;
    }
    ctx->pc = 0x437450u;
    SET_GPR_U32(ctx, 31, 0x437458u);
    ctx->pc = 0x437454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437450u;
            // 0x437454: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437458u; }
        if (ctx->pc != 0x437458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437458u; }
        if (ctx->pc != 0x437458u) { return; }
    }
    ctx->pc = 0x437458u;
label_437458:
    // 0x437458: 0xc076980  jal         func_1DA600
label_43745c:
    if (ctx->pc == 0x43745Cu) {
        ctx->pc = 0x43745Cu;
            // 0x43745c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437460u;
        goto label_437460;
    }
    ctx->pc = 0x437458u;
    SET_GPR_U32(ctx, 31, 0x437460u);
    ctx->pc = 0x43745Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437458u;
            // 0x43745c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437460u; }
        if (ctx->pc != 0x437460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437460u; }
        if (ctx->pc != 0x437460u) { return; }
    }
    ctx->pc = 0x437460u;
label_437460:
    // 0x437460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x437460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_437464:
    // 0x437464: 0xc04cc34  jal         func_1330D0
label_437468:
    if (ctx->pc == 0x437468u) {
        ctx->pc = 0x437468u;
            // 0x437468: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x43746Cu;
        goto label_43746c;
    }
    ctx->pc = 0x437464u;
    SET_GPR_U32(ctx, 31, 0x43746Cu);
    ctx->pc = 0x437468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437464u;
            // 0x437468: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43746Cu; }
        if (ctx->pc != 0x43746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43746Cu; }
        if (ctx->pc != 0x43746Cu) { return; }
    }
    ctx->pc = 0x43746Cu;
label_43746c:
    // 0x43746c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_437470:
    // 0x437470: 0xc441ceb0  lwc1        $f1, -0x3150($v0)
    ctx->pc = 0x437470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_437474:
    // 0x437474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x437474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_437478:
    // 0x437478: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_43747c:
    if (ctx->pc == 0x43747Cu) {
        ctx->pc = 0x43747Cu;
            // 0x43747c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437480u;
        goto label_437480;
    }
    ctx->pc = 0x437478u;
    {
        const bool branch_taken_0x437478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x437478) {
            ctx->pc = 0x43747Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437478u;
            // 0x43747c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437488u;
            goto label_437488;
        }
    }
    ctx->pc = 0x437480u;
label_437480:
    // 0x437480: 0x1000000f  b           . + 4 + (0xF << 2)
label_437484:
    if (ctx->pc == 0x437484u) {
        ctx->pc = 0x437484u;
            // 0x437484: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x437488u;
        goto label_437488;
    }
    ctx->pc = 0x437480u;
    {
        const bool branch_taken_0x437480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437480u;
            // 0x437484: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437480) {
            ctx->pc = 0x4374C0u;
            goto label_4374c0;
        }
    }
    ctx->pc = 0x437488u;
label_437488:
    // 0x437488: 0xc07697c  jal         func_1DA5F0
label_43748c:
    if (ctx->pc == 0x43748Cu) {
        ctx->pc = 0x437490u;
        goto label_437490;
    }
    ctx->pc = 0x437488u;
    SET_GPR_U32(ctx, 31, 0x437490u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437490u; }
        if (ctx->pc != 0x437490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437490u; }
        if (ctx->pc != 0x437490u) { return; }
    }
    ctx->pc = 0x437490u;
label_437490:
    // 0x437490: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x437490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_437494:
    // 0x437494: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x437494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_437498:
    // 0x437498: 0xc04cd60  jal         func_133580
label_43749c:
    if (ctx->pc == 0x43749Cu) {
        ctx->pc = 0x43749Cu;
            // 0x43749c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4374A0u;
        goto label_4374a0;
    }
    ctx->pc = 0x437498u;
    SET_GPR_U32(ctx, 31, 0x4374A0u);
    ctx->pc = 0x43749Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437498u;
            // 0x43749c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4374A0u; }
        if (ctx->pc != 0x4374A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4374A0u; }
        if (ctx->pc != 0x4374A0u) { return; }
    }
    ctx->pc = 0x4374A0u;
label_4374a0:
    // 0x4374a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4374a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4374a4:
    // 0x4374a4: 0xc04c650  jal         func_131940
label_4374a8:
    if (ctx->pc == 0x4374A8u) {
        ctx->pc = 0x4374A8u;
            // 0x4374a8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4374ACu;
        goto label_4374ac;
    }
    ctx->pc = 0x4374A4u;
    SET_GPR_U32(ctx, 31, 0x4374ACu);
    ctx->pc = 0x4374A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4374A4u;
            // 0x4374a8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4374ACu; }
        if (ctx->pc != 0x4374ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4374ACu; }
        if (ctx->pc != 0x4374ACu) { return; }
    }
    ctx->pc = 0x4374ACu;
label_4374ac:
    // 0x4374ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4374acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4374b0:
    // 0x4374b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4374b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4374b4:
    // 0x4374b4: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4374b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_4374b8:
    // 0x4374b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4374b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4374bc:
    // 0x4374bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4374bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4374c0:
    // 0x4374c0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4374c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4374c4:
    // 0x4374c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4374c8:
    if (ctx->pc == 0x4374C8u) {
        ctx->pc = 0x4374C8u;
            // 0x4374c8: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4374CCu;
        goto label_4374cc;
    }
    ctx->pc = 0x4374C4u;
    {
        const bool branch_taken_0x4374c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4374C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4374C4u;
            // 0x4374c8: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4374c4) {
            ctx->pc = 0x4374D4u;
            goto label_4374d4;
        }
    }
    ctx->pc = 0x4374CCu;
label_4374cc:
    // 0x4374cc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_4374d0:
    if (ctx->pc == 0x4374D0u) {
        ctx->pc = 0x4374D0u;
            // 0x4374d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4374D4u;
        goto label_4374d4;
    }
    ctx->pc = 0x4374CCu;
    {
        const bool branch_taken_0x4374cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4374D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4374CCu;
            // 0x4374d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4374cc) {
            ctx->pc = 0x4375FCu;
            goto label_4375fc;
        }
    }
    ctx->pc = 0x4374D4u;
label_4374d4:
    // 0x4374d4: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x4374d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_4374d8:
    // 0x4374d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4374d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4374dc:
    // 0x4374dc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_4374e0:
    if (ctx->pc == 0x4374E0u) {
        ctx->pc = 0x4374E4u;
        goto label_4374e4;
    }
    ctx->pc = 0x4374DCu;
    {
        const bool branch_taken_0x4374dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4374dc) {
            ctx->pc = 0x437510u;
            goto label_437510;
        }
    }
    ctx->pc = 0x4374E4u;
label_4374e4:
    // 0x4374e4: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x4374e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_4374e8:
    // 0x4374e8: 0x26a40300  addiu       $a0, $s5, 0x300
    ctx->pc = 0x4374e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 768));
label_4374ec:
    // 0x4374ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4374ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4374f0:
    // 0x4374f0: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4374f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4374f4:
    // 0x4374f4: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x4374f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_4374f8:
    // 0x4374f8: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x4374f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_4374fc:
    // 0x4374fc: 0x8ea30344  lw          $v1, 0x344($s5)
    ctx->pc = 0x4374fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 836)));
label_437500:
    // 0x437500: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x437500u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_437504:
    // 0x437504: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x437504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_437508:
    // 0x437508: 0xc04cce8  jal         func_1333A0
label_43750c:
    if (ctx->pc == 0x43750Cu) {
        ctx->pc = 0x43750Cu;
            // 0x43750c: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x437510u;
        goto label_437510;
    }
    ctx->pc = 0x437508u;
    SET_GPR_U32(ctx, 31, 0x437510u);
    ctx->pc = 0x43750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437508u;
            // 0x43750c: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437510u; }
        if (ctx->pc != 0x437510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437510u; }
        if (ctx->pc != 0x437510u) { return; }
    }
    ctx->pc = 0x437510u;
label_437510:
    // 0x437510: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x437510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_437514:
    // 0x437514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_437518:
    // 0x437518: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x437518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_43751c:
    // 0x43751c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x43751cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_437520:
    // 0x437520: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x437520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_437524:
    // 0x437524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x437524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_437528:
    // 0x437528: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x437528u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_43752c:
    // 0x43752c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_437530:
    // 0x437530: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x437530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_437534:
    // 0x437534: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x437534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_437538:
    // 0x437538: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x437538u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_43753c:
    // 0x43753c: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x43753cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_437540:
    // 0x437540: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x437540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_437544:
    // 0x437544: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x437544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_437548:
    // 0x437548: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43754c:
    // 0x43754c: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x43754cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
label_437550:
    // 0x437550: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x437550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_437554:
    // 0x437554: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x437554u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_437558:
    // 0x437558: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x437558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_43755c:
    // 0x43755c: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x43755cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_437560:
    // 0x437560: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x437560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437564:
    // 0x437564: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x437564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_437568:
    // 0x437568: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x437568u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_43756c:
    // 0x43756c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43756cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_437570:
    // 0x437570: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x437570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_437574:
    // 0x437574: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_437578:
    // 0x437578: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x437578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_43757c:
    // 0x43757c: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x43757cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_437580:
    // 0x437580: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x437580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_437584:
    // 0x437584: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x437584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_437588:
    // 0x437588: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x437588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_43758c:
    // 0x43758c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x43758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_437590:
    // 0x437590: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x437590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_437594:
    // 0x437594: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x437594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_437598:
    // 0x437598: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x437598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_43759c:
    // 0x43759c: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x43759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_4375a0:
    // 0x4375a0: 0xc04e4a4  jal         func_139290
label_4375a4:
    if (ctx->pc == 0x4375A4u) {
        ctx->pc = 0x4375A4u;
            // 0x4375a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4375A8u;
        goto label_4375a8;
    }
    ctx->pc = 0x4375A0u;
    SET_GPR_U32(ctx, 31, 0x4375A8u);
    ctx->pc = 0x4375A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4375A0u;
            // 0x4375a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4375A8u; }
        if (ctx->pc != 0x4375A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4375A8u; }
        if (ctx->pc != 0x4375A8u) { return; }
    }
    ctx->pc = 0x4375A8u;
label_4375a8:
    // 0x4375a8: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x4375a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_4375ac:
    // 0x4375ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4375acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4375b0:
    // 0x4375b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4375b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4375b4:
    // 0x4375b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4375b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4375b8:
    // 0x4375b8: 0x408026  xor         $s0, $v0, $zero
    ctx->pc = 0x4375b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4375bc:
    // 0x4375bc: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x4375bcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4375c0:
    // 0x4375c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4375c4:
    // 0x4375c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4375c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4375c8:
    // 0x4375c8: 0xc04cd60  jal         func_133580
label_4375cc:
    if (ctx->pc == 0x4375CCu) {
        ctx->pc = 0x4375CCu;
            // 0x4375cc: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x4375D0u;
        goto label_4375d0;
    }
    ctx->pc = 0x4375C8u;
    SET_GPR_U32(ctx, 31, 0x4375D0u);
    ctx->pc = 0x4375CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4375C8u;
            // 0x4375cc: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4375D0u; }
        if (ctx->pc != 0x4375D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4375D0u; }
        if (ctx->pc != 0x4375D0u) { return; }
    }
    ctx->pc = 0x4375D0u;
label_4375d0:
    // 0x4375d0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4375d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4375d4:
    // 0x4375d4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4375d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4375d8:
    // 0x4375d8: 0x320f809  jalr        $t9
label_4375dc:
    if (ctx->pc == 0x4375DCu) {
        ctx->pc = 0x4375DCu;
            // 0x4375dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4375E0u;
        goto label_4375e0;
    }
    ctx->pc = 0x4375D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4375E0u);
        ctx->pc = 0x4375DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4375D8u;
            // 0x4375dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4375E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4375E0u; }
            if (ctx->pc != 0x4375E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4375E0u;
label_4375e0:
    // 0x4375e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4375e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4375e4:
    // 0x4375e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4375e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4375e8:
    // 0x4375e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4375e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4375ec:
    // 0x4375ec: 0xc054fd4  jal         func_153F50
label_4375f0:
    if (ctx->pc == 0x4375F0u) {
        ctx->pc = 0x4375F0u;
            // 0x4375f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4375F4u;
        goto label_4375f4;
    }
    ctx->pc = 0x4375ECu;
    SET_GPR_U32(ctx, 31, 0x4375F4u);
    ctx->pc = 0x4375F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4375ECu;
            // 0x4375f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4375F4u; }
        if (ctx->pc != 0x4375F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4375F4u; }
        if (ctx->pc != 0x4375F4u) { return; }
    }
    ctx->pc = 0x4375F4u;
label_4375f4:
    // 0x4375f4: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x4375f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4375f8:
    // 0x4375f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4375f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4375fc:
    // 0x4375fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4375fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_437600:
    // 0x437600: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x437600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_437604:
    // 0x437604: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x437604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_437608:
    // 0x437608: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x437608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43760c:
    // 0x43760c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43760cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_437610:
    // 0x437610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x437610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_437614:
    // 0x437614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x437614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_437618:
    // 0x437618: 0x3e00008  jr          $ra
label_43761c:
    if (ctx->pc == 0x43761Cu) {
        ctx->pc = 0x43761Cu;
            // 0x43761c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x437620u;
        goto label_437620;
    }
    ctx->pc = 0x437618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437618u;
            // 0x43761c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x437620u;
label_437620:
    // 0x437620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x437620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_437624:
    // 0x437624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x437624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_437628:
    // 0x437628: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x437628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43762c:
    // 0x43762c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_437630:
    // 0x437630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x437630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_437634:
    // 0x437634: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x437634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_437638:
    // 0x437638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x437638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43763c:
    // 0x43763c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_437640:
    // 0x437640: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x437640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_437644:
    // 0x437644: 0x10a30071  beq         $a1, $v1, . + 4 + (0x71 << 2)
label_437648:
    if (ctx->pc == 0x437648u) {
        ctx->pc = 0x437648u;
            // 0x437648: 0x267000e0  addiu       $s0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->pc = 0x43764Cu;
        goto label_43764c;
    }
    ctx->pc = 0x437644u;
    {
        const bool branch_taken_0x437644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x437648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437644u;
            // 0x437648: 0x267000e0  addiu       $s0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437644) {
            ctx->pc = 0x43780Cu;
            goto label_43780c;
        }
    }
    ctx->pc = 0x43764Cu;
label_43764c:
    // 0x43764c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437650:
    // 0x437650: 0x50a40043  beql        $a1, $a0, . + 4 + (0x43 << 2)
label_437654:
    if (ctx->pc == 0x437654u) {
        ctx->pc = 0x437654u;
            // 0x437654: 0x8e710050  lw          $s1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x437658u;
        goto label_437658;
    }
    ctx->pc = 0x437650u;
    {
        const bool branch_taken_0x437650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x437650) {
            ctx->pc = 0x437654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437650u;
            // 0x437654: 0x8e710050  lw          $s1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437760u;
            goto label_437760;
        }
    }
    ctx->pc = 0x437658u;
label_437658:
    // 0x437658: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_43765c:
    if (ctx->pc == 0x43765Cu) {
        ctx->pc = 0x437660u;
        goto label_437660;
    }
    ctx->pc = 0x437658u;
    {
        const bool branch_taken_0x437658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x437658) {
            ctx->pc = 0x437668u;
            goto label_437668;
        }
    }
    ctx->pc = 0x437660u;
label_437660:
    // 0x437660: 0x1000006b  b           . + 4 + (0x6B << 2)
label_437664:
    if (ctx->pc == 0x437664u) {
        ctx->pc = 0x437664u;
            // 0x437664: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x437668u;
        goto label_437668;
    }
    ctx->pc = 0x437660u;
    {
        const bool branch_taken_0x437660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437660u;
            // 0x437664: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437660) {
            ctx->pc = 0x437810u;
            goto label_437810;
        }
    }
    ctx->pc = 0x437668u;
label_437668:
    // 0x437668: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x437668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_43766c:
    // 0x43766c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x43766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_437670:
    // 0x437670: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x437670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437674:
    // 0x437674: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x437674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_437678:
    // 0x437678: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x437678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_43767c:
    // 0x43767c: 0xe601012c  swc1        $f1, 0x12C($s0)
    ctx->pc = 0x43767cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_437680:
    // 0x437680: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x437680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437684:
    // 0x437684: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x437684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_437688:
    // 0x437688: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_43768c:
    if (ctx->pc == 0x43768Cu) {
        ctx->pc = 0x43768Cu;
            // 0x43768c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->pc = 0x437690u;
        goto label_437690;
    }
    ctx->pc = 0x437688u;
    {
        const bool branch_taken_0x437688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x437688) {
            ctx->pc = 0x43768Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437688u;
            // 0x43768c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43769Cu;
            goto label_43769c;
        }
    }
    ctx->pc = 0x437690u;
label_437690:
    // 0x437690: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x437690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_437694:
    // 0x437694: 0xae040130  sw          $a0, 0x130($s0)
    ctx->pc = 0x437694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 4));
label_437698:
    // 0x437698: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x437698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_43769c:
    // 0x43769c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4376a0:
    // 0x4376a0: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
label_4376a4:
    if (ctx->pc == 0x4376A4u) {
        ctx->pc = 0x4376A4u;
            // 0x4376a4: 0x8e030130  lw          $v1, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x4376A8u;
        goto label_4376a8;
    }
    ctx->pc = 0x4376A0u;
    {
        const bool branch_taken_0x4376a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4376a0) {
            ctx->pc = 0x4376A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4376A0u;
            // 0x4376a4: 0x8e030130  lw          $v1, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4376CCu;
            goto label_4376cc;
        }
    }
    ctx->pc = 0x4376A8u;
label_4376a8:
    // 0x4376a8: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x4376a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
label_4376ac:
    // 0x4376ac: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4376acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4376b0:
    // 0x4376b0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4376b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4376b4:
    // 0x4376b4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4376b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4376b8:
    // 0x4376b8: 0x8e640344  lw          $a0, 0x344($s3)
    ctx->pc = 0x4376b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 836)));
label_4376bc:
    // 0x4376bc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4376bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4376c0:
    // 0x4376c0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4376c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4376c4:
    // 0x4376c4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4376c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4376c8:
    // 0x4376c8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x4376c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_4376cc:
    // 0x4376cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4376ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4376d0:
    // 0x4376d0: 0x1464004e  bne         $v1, $a0, . + 4 + (0x4E << 2)
label_4376d4:
    if (ctx->pc == 0x4376D4u) {
        ctx->pc = 0x4376D8u;
        goto label_4376d8;
    }
    ctx->pc = 0x4376D0u;
    {
        const bool branch_taken_0x4376d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4376d0) {
            ctx->pc = 0x43780Cu;
            goto label_43780c;
        }
    }
    ctx->pc = 0x4376D8u;
label_4376d8:
    // 0x4376d8: 0xae6400d0  sw          $a0, 0xD0($s3)
    ctx->pc = 0x4376d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 4));
label_4376dc:
    // 0x4376dc: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x4376dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_4376e0:
    // 0x4376e0: 0x1464004a  bne         $v1, $a0, . + 4 + (0x4A << 2)
label_4376e4:
    if (ctx->pc == 0x4376E4u) {
        ctx->pc = 0x4376E8u;
        goto label_4376e8;
    }
    ctx->pc = 0x4376E0u;
    {
        const bool branch_taken_0x4376e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4376e0) {
            ctx->pc = 0x43780Cu;
            goto label_43780c;
        }
    }
    ctx->pc = 0x4376E8u;
label_4376e8:
    // 0x4376e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4376e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4376ec:
    // 0x4376ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4376ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4376f0:
    // 0x4376f0: 0x8c630e28  lw          $v1, 0xE28($v1)
    ctx->pc = 0x4376f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3624)));
label_4376f4:
    // 0x4376f4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x4376f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4376f8:
    // 0x4376f8: 0x8c700084  lw          $s0, 0x84($v1)
    ctx->pc = 0x4376f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4376fc:
    // 0x4376fc: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x4376fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_437700:
    // 0x437700: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_437704:
    if (ctx->pc == 0x437704u) {
        ctx->pc = 0x437708u;
        goto label_437708;
    }
    ctx->pc = 0x437700u;
    {
        const bool branch_taken_0x437700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x437700) {
            ctx->pc = 0x437748u;
            goto label_437748;
        }
    }
    ctx->pc = 0x437708u;
label_437708:
    // 0x437708: 0xac900080  sw          $s0, 0x80($a0)
    ctx->pc = 0x437708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 16));
label_43770c:
    // 0x43770c: 0x26630300  addiu       $v1, $s3, 0x300
    ctx->pc = 0x43770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_437710:
    // 0x437710: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x437710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_437714:
    // 0x437714: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x437714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_437718:
    // 0x437718: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x437718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_43771c:
    // 0x43771c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x43771cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_437720:
    // 0x437720: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x437720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_437724:
    // 0x437724: 0x8e230340  lw          $v1, 0x340($s1)
    ctx->pc = 0x437724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_437728:
    // 0x437728: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x437728u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_43772c:
    // 0x43772c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x43772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_437730:
    // 0x437730: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x437730u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_437734:
    // 0x437734: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x437734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_437738:
    // 0x437738: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x437738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43773c:
    // 0x43773c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x43773cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_437740:
    // 0x437740: 0x320f809  jalr        $t9
label_437744:
    if (ctx->pc == 0x437744u) {
        ctx->pc = 0x437748u;
        goto label_437748;
    }
    ctx->pc = 0x437740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x437748u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x437748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x437748u; }
            if (ctx->pc != 0x437748u) { return; }
        }
        }
    }
    ctx->pc = 0x437748u;
label_437748:
    // 0x437748: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x437748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43774c:
    // 0x43774c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x43774cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_437750:
    // 0x437750: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_437754:
    if (ctx->pc == 0x437754u) {
        ctx->pc = 0x437754u;
            // 0x437754: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x437758u;
        goto label_437758;
    }
    ctx->pc = 0x437750u;
    {
        const bool branch_taken_0x437750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x437754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437750u;
            // 0x437754: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437750) {
            ctx->pc = 0x4376FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4376fc;
        }
    }
    ctx->pc = 0x437758u;
label_437758:
    // 0x437758: 0x1000002c  b           . + 4 + (0x2C << 2)
label_43775c:
    if (ctx->pc == 0x43775Cu) {
        ctx->pc = 0x437760u;
        goto label_437760;
    }
    ctx->pc = 0x437758u;
    {
        const bool branch_taken_0x437758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x437758) {
            ctx->pc = 0x43780Cu;
            goto label_43780c;
        }
    }
    ctx->pc = 0x437760u;
label_437760:
    // 0x437760: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x437760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_437764:
    // 0x437764: 0xc0dc9bc  jal         func_3726F0
label_437768:
    if (ctx->pc == 0x437768u) {
        ctx->pc = 0x437768u;
            // 0x437768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43776Cu;
        goto label_43776c;
    }
    ctx->pc = 0x437764u;
    SET_GPR_U32(ctx, 31, 0x43776Cu);
    ctx->pc = 0x437768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437764u;
            // 0x437768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43776Cu; }
        if (ctx->pc != 0x43776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43776Cu; }
        if (ctx->pc != 0x43776Cu) { return; }
    }
    ctx->pc = 0x43776Cu;
label_43776c:
    // 0x43776c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_437770:
    // 0x437770: 0xc0dc9a0  jal         func_372680
label_437774:
    if (ctx->pc == 0x437774u) {
        ctx->pc = 0x437774u;
            // 0x437774: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x437778u;
        goto label_437778;
    }
    ctx->pc = 0x437770u;
    SET_GPR_U32(ctx, 31, 0x437778u);
    ctx->pc = 0x437774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437770u;
            // 0x437774: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437778u; }
        if (ctx->pc != 0x437778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437778u; }
        if (ctx->pc != 0x437778u) { return; }
    }
    ctx->pc = 0x437778u;
label_437778:
    // 0x437778: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x437778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43777c:
    // 0x43777c: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x43777cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
label_437780:
    // 0x437780: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x437780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_437784:
    // 0x437784: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x437784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437788:
    // 0x437788: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x437788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43778c:
    // 0x43778c: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x43778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_437790:
    // 0x437790: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x437790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437794:
    // 0x437794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x437794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_437798:
    // 0x437798: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x437798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_43779c:
    // 0x43779c: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x43779cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_4377a0:
    // 0x4377a0: 0xc0d88a4  jal         func_362290
label_4377a4:
    if (ctx->pc == 0x4377A4u) {
        ctx->pc = 0x4377A4u;
            // 0x4377a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4377A8u;
        goto label_4377a8;
    }
    ctx->pc = 0x4377A0u;
    SET_GPR_U32(ctx, 31, 0x4377A8u);
    ctx->pc = 0x4377A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4377A0u;
            // 0x4377a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4377A8u; }
        if (ctx->pc != 0x4377A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4377A8u; }
        if (ctx->pc != 0x4377A8u) { return; }
    }
    ctx->pc = 0x4377A8u;
label_4377a8:
    // 0x4377a8: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x4377a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_4377ac:
    // 0x4377ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4377acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4377b0:
    // 0x4377b0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_4377b4:
    if (ctx->pc == 0x4377B4u) {
        ctx->pc = 0x4377B4u;
            // 0x4377b4: 0x8e6602d4  lw          $a2, 0x2D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->pc = 0x4377B8u;
        goto label_4377b8;
    }
    ctx->pc = 0x4377B0u;
    {
        const bool branch_taken_0x4377b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4377b0) {
            ctx->pc = 0x4377B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4377B0u;
            // 0x4377b4: 0x8e6602d4  lw          $a2, 0x2D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4377DCu;
            goto label_4377dc;
        }
    }
    ctx->pc = 0x4377B8u;
label_4377b8:
    // 0x4377b8: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x4377b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
label_4377bc:
    // 0x4377bc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4377bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4377c0:
    // 0x4377c0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4377c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_4377c4:
    // 0x4377c4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x4377c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_4377c8:
    // 0x4377c8: 0x8e630344  lw          $v1, 0x344($s3)
    ctx->pc = 0x4377c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 836)));
label_4377cc:
    // 0x4377cc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4377ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4377d0:
    // 0x4377d0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4377d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_4377d4:
    // 0x4377d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4377d8:
    if (ctx->pc == 0x4377D8u) {
        ctx->pc = 0x4377D8u;
            // 0x4377d8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4377DCu;
        goto label_4377dc;
    }
    ctx->pc = 0x4377D4u;
    {
        const bool branch_taken_0x4377d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4377D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4377D4u;
            // 0x4377d8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4377d4) {
            ctx->pc = 0x4377E8u;
            goto label_4377e8;
        }
    }
    ctx->pc = 0x4377DCu;
label_4377dc:
    // 0x4377dc: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x4377dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_4377e0:
    // 0x4377e0: 0xc1430ec  jal         func_50C3B0
label_4377e4:
    if (ctx->pc == 0x4377E4u) {
        ctx->pc = 0x4377E4u;
            // 0x4377e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4377E8u;
        goto label_4377e8;
    }
    ctx->pc = 0x4377E0u;
    SET_GPR_U32(ctx, 31, 0x4377E8u);
    ctx->pc = 0x4377E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4377E0u;
            // 0x4377e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50C3B0u;
    if (runtime->hasFunction(0x50C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x50C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4377E8u; }
        if (ctx->pc != 0x4377E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050C3B0_0x50c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4377E8u; }
        if (ctx->pc != 0x4377E8u) { return; }
    }
    ctx->pc = 0x4377E8u;
label_4377e8:
    // 0x4377e8: 0x96030110  lhu         $v1, 0x110($s0)
    ctx->pc = 0x4377e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_4377ec:
    // 0x4377ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4377ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4377f0:
    // 0x4377f0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_4377f4:
    if (ctx->pc == 0x4377F4u) {
        ctx->pc = 0x4377F4u;
            // 0x4377f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4377F8u;
        goto label_4377f8;
    }
    ctx->pc = 0x4377F0u;
    {
        const bool branch_taken_0x4377f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4377f0) {
            ctx->pc = 0x4377F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4377F0u;
            // 0x4377f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437804u;
            goto label_437804;
        }
    }
    ctx->pc = 0x4377F8u;
label_4377f8:
    // 0x4377f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4377f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4377fc:
    // 0x4377fc: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x4377fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
label_437800:
    // 0x437800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x437800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_437804:
    // 0x437804: 0xc10de18  jal         func_437860
label_437808:
    if (ctx->pc == 0x437808u) {
        ctx->pc = 0x43780Cu;
        goto label_43780c;
    }
    ctx->pc = 0x437804u;
    SET_GPR_U32(ctx, 31, 0x43780Cu);
    ctx->pc = 0x437860u;
    if (runtime->hasFunction(0x437860u)) {
        auto targetFn = runtime->lookupFunction(0x437860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43780Cu; }
        if (ctx->pc != 0x43780Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00437860_0x437860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43780Cu; }
        if (ctx->pc != 0x43780Cu) { return; }
    }
    ctx->pc = 0x43780Cu;
label_43780c:
    // 0x43780c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43780cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_437810:
    // 0x437810: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x437810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_437814:
    // 0x437814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x437814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_437818:
    // 0x437818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x437818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43781c:
    // 0x43781c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43781cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_437820:
    // 0x437820: 0x3e00008  jr          $ra
label_437824:
    if (ctx->pc == 0x437824u) {
        ctx->pc = 0x437824u;
            // 0x437824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x437828u;
        goto label_437828;
    }
    ctx->pc = 0x437820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x437824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437820u;
            // 0x437824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x437828u;
label_437828:
    // 0x437828: 0x0  nop
    ctx->pc = 0x437828u;
    // NOP
label_43782c:
    // 0x43782c: 0x0  nop
    ctx->pc = 0x43782cu;
    // NOP
}
