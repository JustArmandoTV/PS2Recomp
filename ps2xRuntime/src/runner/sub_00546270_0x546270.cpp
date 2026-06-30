#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00546270
// Address: 0x546270 - 0x546730
void sub_00546270_0x546270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00546270_0x546270");
#endif

    switch (ctx->pc) {
        case 0x546270u: goto label_546270;
        case 0x546274u: goto label_546274;
        case 0x546278u: goto label_546278;
        case 0x54627cu: goto label_54627c;
        case 0x546280u: goto label_546280;
        case 0x546284u: goto label_546284;
        case 0x546288u: goto label_546288;
        case 0x54628cu: goto label_54628c;
        case 0x546290u: goto label_546290;
        case 0x546294u: goto label_546294;
        case 0x546298u: goto label_546298;
        case 0x54629cu: goto label_54629c;
        case 0x5462a0u: goto label_5462a0;
        case 0x5462a4u: goto label_5462a4;
        case 0x5462a8u: goto label_5462a8;
        case 0x5462acu: goto label_5462ac;
        case 0x5462b0u: goto label_5462b0;
        case 0x5462b4u: goto label_5462b4;
        case 0x5462b8u: goto label_5462b8;
        case 0x5462bcu: goto label_5462bc;
        case 0x5462c0u: goto label_5462c0;
        case 0x5462c4u: goto label_5462c4;
        case 0x5462c8u: goto label_5462c8;
        case 0x5462ccu: goto label_5462cc;
        case 0x5462d0u: goto label_5462d0;
        case 0x5462d4u: goto label_5462d4;
        case 0x5462d8u: goto label_5462d8;
        case 0x5462dcu: goto label_5462dc;
        case 0x5462e0u: goto label_5462e0;
        case 0x5462e4u: goto label_5462e4;
        case 0x5462e8u: goto label_5462e8;
        case 0x5462ecu: goto label_5462ec;
        case 0x5462f0u: goto label_5462f0;
        case 0x5462f4u: goto label_5462f4;
        case 0x5462f8u: goto label_5462f8;
        case 0x5462fcu: goto label_5462fc;
        case 0x546300u: goto label_546300;
        case 0x546304u: goto label_546304;
        case 0x546308u: goto label_546308;
        case 0x54630cu: goto label_54630c;
        case 0x546310u: goto label_546310;
        case 0x546314u: goto label_546314;
        case 0x546318u: goto label_546318;
        case 0x54631cu: goto label_54631c;
        case 0x546320u: goto label_546320;
        case 0x546324u: goto label_546324;
        case 0x546328u: goto label_546328;
        case 0x54632cu: goto label_54632c;
        case 0x546330u: goto label_546330;
        case 0x546334u: goto label_546334;
        case 0x546338u: goto label_546338;
        case 0x54633cu: goto label_54633c;
        case 0x546340u: goto label_546340;
        case 0x546344u: goto label_546344;
        case 0x546348u: goto label_546348;
        case 0x54634cu: goto label_54634c;
        case 0x546350u: goto label_546350;
        case 0x546354u: goto label_546354;
        case 0x546358u: goto label_546358;
        case 0x54635cu: goto label_54635c;
        case 0x546360u: goto label_546360;
        case 0x546364u: goto label_546364;
        case 0x546368u: goto label_546368;
        case 0x54636cu: goto label_54636c;
        case 0x546370u: goto label_546370;
        case 0x546374u: goto label_546374;
        case 0x546378u: goto label_546378;
        case 0x54637cu: goto label_54637c;
        case 0x546380u: goto label_546380;
        case 0x546384u: goto label_546384;
        case 0x546388u: goto label_546388;
        case 0x54638cu: goto label_54638c;
        case 0x546390u: goto label_546390;
        case 0x546394u: goto label_546394;
        case 0x546398u: goto label_546398;
        case 0x54639cu: goto label_54639c;
        case 0x5463a0u: goto label_5463a0;
        case 0x5463a4u: goto label_5463a4;
        case 0x5463a8u: goto label_5463a8;
        case 0x5463acu: goto label_5463ac;
        case 0x5463b0u: goto label_5463b0;
        case 0x5463b4u: goto label_5463b4;
        case 0x5463b8u: goto label_5463b8;
        case 0x5463bcu: goto label_5463bc;
        case 0x5463c0u: goto label_5463c0;
        case 0x5463c4u: goto label_5463c4;
        case 0x5463c8u: goto label_5463c8;
        case 0x5463ccu: goto label_5463cc;
        case 0x5463d0u: goto label_5463d0;
        case 0x5463d4u: goto label_5463d4;
        case 0x5463d8u: goto label_5463d8;
        case 0x5463dcu: goto label_5463dc;
        case 0x5463e0u: goto label_5463e0;
        case 0x5463e4u: goto label_5463e4;
        case 0x5463e8u: goto label_5463e8;
        case 0x5463ecu: goto label_5463ec;
        case 0x5463f0u: goto label_5463f0;
        case 0x5463f4u: goto label_5463f4;
        case 0x5463f8u: goto label_5463f8;
        case 0x5463fcu: goto label_5463fc;
        case 0x546400u: goto label_546400;
        case 0x546404u: goto label_546404;
        case 0x546408u: goto label_546408;
        case 0x54640cu: goto label_54640c;
        case 0x546410u: goto label_546410;
        case 0x546414u: goto label_546414;
        case 0x546418u: goto label_546418;
        case 0x54641cu: goto label_54641c;
        case 0x546420u: goto label_546420;
        case 0x546424u: goto label_546424;
        case 0x546428u: goto label_546428;
        case 0x54642cu: goto label_54642c;
        case 0x546430u: goto label_546430;
        case 0x546434u: goto label_546434;
        case 0x546438u: goto label_546438;
        case 0x54643cu: goto label_54643c;
        case 0x546440u: goto label_546440;
        case 0x546444u: goto label_546444;
        case 0x546448u: goto label_546448;
        case 0x54644cu: goto label_54644c;
        case 0x546450u: goto label_546450;
        case 0x546454u: goto label_546454;
        case 0x546458u: goto label_546458;
        case 0x54645cu: goto label_54645c;
        case 0x546460u: goto label_546460;
        case 0x546464u: goto label_546464;
        case 0x546468u: goto label_546468;
        case 0x54646cu: goto label_54646c;
        case 0x546470u: goto label_546470;
        case 0x546474u: goto label_546474;
        case 0x546478u: goto label_546478;
        case 0x54647cu: goto label_54647c;
        case 0x546480u: goto label_546480;
        case 0x546484u: goto label_546484;
        case 0x546488u: goto label_546488;
        case 0x54648cu: goto label_54648c;
        case 0x546490u: goto label_546490;
        case 0x546494u: goto label_546494;
        case 0x546498u: goto label_546498;
        case 0x54649cu: goto label_54649c;
        case 0x5464a0u: goto label_5464a0;
        case 0x5464a4u: goto label_5464a4;
        case 0x5464a8u: goto label_5464a8;
        case 0x5464acu: goto label_5464ac;
        case 0x5464b0u: goto label_5464b0;
        case 0x5464b4u: goto label_5464b4;
        case 0x5464b8u: goto label_5464b8;
        case 0x5464bcu: goto label_5464bc;
        case 0x5464c0u: goto label_5464c0;
        case 0x5464c4u: goto label_5464c4;
        case 0x5464c8u: goto label_5464c8;
        case 0x5464ccu: goto label_5464cc;
        case 0x5464d0u: goto label_5464d0;
        case 0x5464d4u: goto label_5464d4;
        case 0x5464d8u: goto label_5464d8;
        case 0x5464dcu: goto label_5464dc;
        case 0x5464e0u: goto label_5464e0;
        case 0x5464e4u: goto label_5464e4;
        case 0x5464e8u: goto label_5464e8;
        case 0x5464ecu: goto label_5464ec;
        case 0x5464f0u: goto label_5464f0;
        case 0x5464f4u: goto label_5464f4;
        case 0x5464f8u: goto label_5464f8;
        case 0x5464fcu: goto label_5464fc;
        case 0x546500u: goto label_546500;
        case 0x546504u: goto label_546504;
        case 0x546508u: goto label_546508;
        case 0x54650cu: goto label_54650c;
        case 0x546510u: goto label_546510;
        case 0x546514u: goto label_546514;
        case 0x546518u: goto label_546518;
        case 0x54651cu: goto label_54651c;
        case 0x546520u: goto label_546520;
        case 0x546524u: goto label_546524;
        case 0x546528u: goto label_546528;
        case 0x54652cu: goto label_54652c;
        case 0x546530u: goto label_546530;
        case 0x546534u: goto label_546534;
        case 0x546538u: goto label_546538;
        case 0x54653cu: goto label_54653c;
        case 0x546540u: goto label_546540;
        case 0x546544u: goto label_546544;
        case 0x546548u: goto label_546548;
        case 0x54654cu: goto label_54654c;
        case 0x546550u: goto label_546550;
        case 0x546554u: goto label_546554;
        case 0x546558u: goto label_546558;
        case 0x54655cu: goto label_54655c;
        case 0x546560u: goto label_546560;
        case 0x546564u: goto label_546564;
        case 0x546568u: goto label_546568;
        case 0x54656cu: goto label_54656c;
        case 0x546570u: goto label_546570;
        case 0x546574u: goto label_546574;
        case 0x546578u: goto label_546578;
        case 0x54657cu: goto label_54657c;
        case 0x546580u: goto label_546580;
        case 0x546584u: goto label_546584;
        case 0x546588u: goto label_546588;
        case 0x54658cu: goto label_54658c;
        case 0x546590u: goto label_546590;
        case 0x546594u: goto label_546594;
        case 0x546598u: goto label_546598;
        case 0x54659cu: goto label_54659c;
        case 0x5465a0u: goto label_5465a0;
        case 0x5465a4u: goto label_5465a4;
        case 0x5465a8u: goto label_5465a8;
        case 0x5465acu: goto label_5465ac;
        case 0x5465b0u: goto label_5465b0;
        case 0x5465b4u: goto label_5465b4;
        case 0x5465b8u: goto label_5465b8;
        case 0x5465bcu: goto label_5465bc;
        case 0x5465c0u: goto label_5465c0;
        case 0x5465c4u: goto label_5465c4;
        case 0x5465c8u: goto label_5465c8;
        case 0x5465ccu: goto label_5465cc;
        case 0x5465d0u: goto label_5465d0;
        case 0x5465d4u: goto label_5465d4;
        case 0x5465d8u: goto label_5465d8;
        case 0x5465dcu: goto label_5465dc;
        case 0x5465e0u: goto label_5465e0;
        case 0x5465e4u: goto label_5465e4;
        case 0x5465e8u: goto label_5465e8;
        case 0x5465ecu: goto label_5465ec;
        case 0x5465f0u: goto label_5465f0;
        case 0x5465f4u: goto label_5465f4;
        case 0x5465f8u: goto label_5465f8;
        case 0x5465fcu: goto label_5465fc;
        case 0x546600u: goto label_546600;
        case 0x546604u: goto label_546604;
        case 0x546608u: goto label_546608;
        case 0x54660cu: goto label_54660c;
        case 0x546610u: goto label_546610;
        case 0x546614u: goto label_546614;
        case 0x546618u: goto label_546618;
        case 0x54661cu: goto label_54661c;
        case 0x546620u: goto label_546620;
        case 0x546624u: goto label_546624;
        case 0x546628u: goto label_546628;
        case 0x54662cu: goto label_54662c;
        case 0x546630u: goto label_546630;
        case 0x546634u: goto label_546634;
        case 0x546638u: goto label_546638;
        case 0x54663cu: goto label_54663c;
        case 0x546640u: goto label_546640;
        case 0x546644u: goto label_546644;
        case 0x546648u: goto label_546648;
        case 0x54664cu: goto label_54664c;
        case 0x546650u: goto label_546650;
        case 0x546654u: goto label_546654;
        case 0x546658u: goto label_546658;
        case 0x54665cu: goto label_54665c;
        case 0x546660u: goto label_546660;
        case 0x546664u: goto label_546664;
        case 0x546668u: goto label_546668;
        case 0x54666cu: goto label_54666c;
        case 0x546670u: goto label_546670;
        case 0x546674u: goto label_546674;
        case 0x546678u: goto label_546678;
        case 0x54667cu: goto label_54667c;
        case 0x546680u: goto label_546680;
        case 0x546684u: goto label_546684;
        case 0x546688u: goto label_546688;
        case 0x54668cu: goto label_54668c;
        case 0x546690u: goto label_546690;
        case 0x546694u: goto label_546694;
        case 0x546698u: goto label_546698;
        case 0x54669cu: goto label_54669c;
        case 0x5466a0u: goto label_5466a0;
        case 0x5466a4u: goto label_5466a4;
        case 0x5466a8u: goto label_5466a8;
        case 0x5466acu: goto label_5466ac;
        case 0x5466b0u: goto label_5466b0;
        case 0x5466b4u: goto label_5466b4;
        case 0x5466b8u: goto label_5466b8;
        case 0x5466bcu: goto label_5466bc;
        case 0x5466c0u: goto label_5466c0;
        case 0x5466c4u: goto label_5466c4;
        case 0x5466c8u: goto label_5466c8;
        case 0x5466ccu: goto label_5466cc;
        case 0x5466d0u: goto label_5466d0;
        case 0x5466d4u: goto label_5466d4;
        case 0x5466d8u: goto label_5466d8;
        case 0x5466dcu: goto label_5466dc;
        case 0x5466e0u: goto label_5466e0;
        case 0x5466e4u: goto label_5466e4;
        case 0x5466e8u: goto label_5466e8;
        case 0x5466ecu: goto label_5466ec;
        case 0x5466f0u: goto label_5466f0;
        case 0x5466f4u: goto label_5466f4;
        case 0x5466f8u: goto label_5466f8;
        case 0x5466fcu: goto label_5466fc;
        case 0x546700u: goto label_546700;
        case 0x546704u: goto label_546704;
        case 0x546708u: goto label_546708;
        case 0x54670cu: goto label_54670c;
        case 0x546710u: goto label_546710;
        case 0x546714u: goto label_546714;
        case 0x546718u: goto label_546718;
        case 0x54671cu: goto label_54671c;
        case 0x546720u: goto label_546720;
        case 0x546724u: goto label_546724;
        case 0x546728u: goto label_546728;
        case 0x54672cu: goto label_54672c;
        default: break;
    }

    ctx->pc = 0x546270u;

label_546270:
    // 0x546270: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x546270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_546274:
    // 0x546274: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x546274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_546278:
    // 0x546278: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x546278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_54627c:
    // 0x54627c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x54627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_546280:
    // 0x546280: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x546280u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_546284:
    // 0x546284: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x546284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_546288:
    // 0x546288: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x546288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_54628c:
    // 0x54628c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x54628cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_546290:
    // 0x546290: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x546290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_546294:
    // 0x546294: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x546294u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_546298:
    // 0x546298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x546298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_54629c:
    // 0x54629c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x54629cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5462a0:
    // 0x5462a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5462a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5462a4:
    // 0x5462a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x5462a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5462a8:
    // 0x5462a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5462a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5462ac:
    // 0x5462ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x5462acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_5462b0:
    // 0x5462b0: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x5462b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_5462b4:
    // 0x5462b4: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
label_5462b8:
    if (ctx->pc == 0x5462B8u) {
        ctx->pc = 0x5462B8u;
            // 0x5462b8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5462BCu;
        goto label_5462bc;
    }
    ctx->pc = 0x5462B4u;
    {
        const bool branch_taken_0x5462b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5462B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5462B4u;
            // 0x5462b8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5462b4) {
            ctx->pc = 0x546474u;
            goto label_546474;
        }
    }
    ctx->pc = 0x5462BCu;
label_5462bc:
    // 0x5462bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5462bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5462c0:
    // 0x5462c0: 0xc04f278  jal         func_13C9E0
label_5462c4:
    if (ctx->pc == 0x5462C4u) {
        ctx->pc = 0x5462C4u;
            // 0x5462c4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x5462C8u;
        goto label_5462c8;
    }
    ctx->pc = 0x5462C0u;
    SET_GPR_U32(ctx, 31, 0x5462C8u);
    ctx->pc = 0x5462C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5462C0u;
            // 0x5462c4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5462C8u; }
        if (ctx->pc != 0x5462C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5462C8u; }
        if (ctx->pc != 0x5462C8u) { return; }
    }
    ctx->pc = 0x5462C8u;
label_5462c8:
    // 0x5462c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5462c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5462cc:
    // 0x5462cc: 0xc04ce80  jal         func_133A00
label_5462d0:
    if (ctx->pc == 0x5462D0u) {
        ctx->pc = 0x5462D0u;
            // 0x5462d0: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x5462D4u;
        goto label_5462d4;
    }
    ctx->pc = 0x5462CCu;
    SET_GPR_U32(ctx, 31, 0x5462D4u);
    ctx->pc = 0x5462D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5462CCu;
            // 0x5462d0: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5462D4u; }
        if (ctx->pc != 0x5462D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5462D4u; }
        if (ctx->pc != 0x5462D4u) { return; }
    }
    ctx->pc = 0x5462D4u;
label_5462d4:
    // 0x5462d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5462d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5462d8:
    // 0x5462d8: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x5462d8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_5462dc:
    // 0x5462dc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x5462dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_5462e0:
    // 0x5462e0: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x5462e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5462e4:
    // 0x5462e4: 0xc07698c  jal         func_1DA630
label_5462e8:
    if (ctx->pc == 0x5462E8u) {
        ctx->pc = 0x5462E8u;
            // 0x5462e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5462ECu;
        goto label_5462ec;
    }
    ctx->pc = 0x5462E4u;
    SET_GPR_U32(ctx, 31, 0x5462ECu);
    ctx->pc = 0x5462E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5462E4u;
            // 0x5462e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5462ECu; }
        if (ctx->pc != 0x5462ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5462ECu; }
        if (ctx->pc != 0x5462ECu) { return; }
    }
    ctx->pc = 0x5462ECu;
label_5462ec:
    // 0x5462ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5462ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5462f0:
    // 0x5462f0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_5462f4:
    if (ctx->pc == 0x5462F4u) {
        ctx->pc = 0x5462F8u;
        goto label_5462f8;
    }
    ctx->pc = 0x5462F0u;
    {
        const bool branch_taken_0x5462f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x5462f0) {
            ctx->pc = 0x546300u;
            goto label_546300;
        }
    }
    ctx->pc = 0x5462F8u;
label_5462f8:
    // 0x5462f8: 0x10000033  b           . + 4 + (0x33 << 2)
label_5462fc:
    if (ctx->pc == 0x5462FCu) {
        ctx->pc = 0x5462FCu;
            // 0x5462fc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x546300u;
        goto label_546300;
    }
    ctx->pc = 0x5462F8u;
    {
        const bool branch_taken_0x5462f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5462FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5462F8u;
            // 0x5462fc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5462f8) {
            ctx->pc = 0x5463C8u;
            goto label_5463c8;
        }
    }
    ctx->pc = 0x546300u;
label_546300:
    // 0x546300: 0xc0576f4  jal         func_15DBD0
label_546304:
    if (ctx->pc == 0x546304u) {
        ctx->pc = 0x546308u;
        goto label_546308;
    }
    ctx->pc = 0x546300u;
    SET_GPR_U32(ctx, 31, 0x546308u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546308u; }
        if (ctx->pc != 0x546308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546308u; }
        if (ctx->pc != 0x546308u) { return; }
    }
    ctx->pc = 0x546308u;
label_546308:
    // 0x546308: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x546308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_54630c:
    // 0x54630c: 0xc076984  jal         func_1DA610
label_546310:
    if (ctx->pc == 0x546310u) {
        ctx->pc = 0x546310u;
            // 0x546310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546314u;
        goto label_546314;
    }
    ctx->pc = 0x54630Cu;
    SET_GPR_U32(ctx, 31, 0x546314u);
    ctx->pc = 0x546310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54630Cu;
            // 0x546310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546314u; }
        if (ctx->pc != 0x546314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546314u; }
        if (ctx->pc != 0x546314u) { return; }
    }
    ctx->pc = 0x546314u;
label_546314:
    // 0x546314: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x546314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_546318:
    // 0x546318: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x546318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_54631c:
    // 0x54631c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_546320:
    // 0x546320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x546320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_546324:
    // 0x546324: 0xc442d940  lwc1        $f2, -0x26C0($v0)
    ctx->pc = 0x546324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_546328:
    // 0x546328: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x546328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54632c:
    // 0x54632c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_546330:
    // 0x546330: 0xc441d948  lwc1        $f1, -0x26B8($v0)
    ctx->pc = 0x546330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546334:
    // 0x546334: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x546334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_546338:
    // 0x546338: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x546338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54633c:
    // 0x54633c: 0xc440d94c  lwc1        $f0, -0x26B4($v0)
    ctx->pc = 0x54633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_546340:
    // 0x546340: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x546340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_546344:
    // 0x546344: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x546344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_546348:
    // 0x546348: 0x8c42d944  lw          $v0, -0x26BC($v0)
    ctx->pc = 0x546348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957380)));
label_54634c:
    // 0x54634c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x54634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_546350:
    // 0x546350: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x546350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_546354:
    // 0x546354: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x546354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_546358:
    // 0x546358: 0xc04cca0  jal         func_133280
label_54635c:
    if (ctx->pc == 0x54635Cu) {
        ctx->pc = 0x54635Cu;
            // 0x54635c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x546360u;
        goto label_546360;
    }
    ctx->pc = 0x546358u;
    SET_GPR_U32(ctx, 31, 0x546360u);
    ctx->pc = 0x54635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546358u;
            // 0x54635c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546360u; }
        if (ctx->pc != 0x546360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546360u; }
        if (ctx->pc != 0x546360u) { return; }
    }
    ctx->pc = 0x546360u;
label_546360:
    // 0x546360: 0xc076980  jal         func_1DA600
label_546364:
    if (ctx->pc == 0x546364u) {
        ctx->pc = 0x546364u;
            // 0x546364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546368u;
        goto label_546368;
    }
    ctx->pc = 0x546360u;
    SET_GPR_U32(ctx, 31, 0x546368u);
    ctx->pc = 0x546364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546360u;
            // 0x546364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546368u; }
        if (ctx->pc != 0x546368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546368u; }
        if (ctx->pc != 0x546368u) { return; }
    }
    ctx->pc = 0x546368u;
label_546368:
    // 0x546368: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x546368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_54636c:
    // 0x54636c: 0xc04cc34  jal         func_1330D0
label_546370:
    if (ctx->pc == 0x546370u) {
        ctx->pc = 0x546370u;
            // 0x546370: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546374u;
        goto label_546374;
    }
    ctx->pc = 0x54636Cu;
    SET_GPR_U32(ctx, 31, 0x546374u);
    ctx->pc = 0x546370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54636Cu;
            // 0x546370: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546374u; }
        if (ctx->pc != 0x546374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546374u; }
        if (ctx->pc != 0x546374u) { return; }
    }
    ctx->pc = 0x546374u;
label_546374:
    // 0x546374: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x546374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_546378:
    // 0x546378: 0xc461dcb0  lwc1        $f1, -0x2350($v1)
    ctx->pc = 0x546378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54637c:
    // 0x54637c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x54637cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_546380:
    // 0x546380: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_546384:
    if (ctx->pc == 0x546384u) {
        ctx->pc = 0x546384u;
            // 0x546384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546388u;
        goto label_546388;
    }
    ctx->pc = 0x546380u;
    {
        const bool branch_taken_0x546380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x546380) {
            ctx->pc = 0x546384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546380u;
            // 0x546384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546390u;
            goto label_546390;
        }
    }
    ctx->pc = 0x546388u;
label_546388:
    // 0x546388: 0x1000000f  b           . + 4 + (0xF << 2)
label_54638c:
    if (ctx->pc == 0x54638Cu) {
        ctx->pc = 0x54638Cu;
            // 0x54638c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x546390u;
        goto label_546390;
    }
    ctx->pc = 0x546388u;
    {
        const bool branch_taken_0x546388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546388u;
            // 0x54638c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546388) {
            ctx->pc = 0x5463C8u;
            goto label_5463c8;
        }
    }
    ctx->pc = 0x546390u;
label_546390:
    // 0x546390: 0xc07697c  jal         func_1DA5F0
label_546394:
    if (ctx->pc == 0x546394u) {
        ctx->pc = 0x546398u;
        goto label_546398;
    }
    ctx->pc = 0x546390u;
    SET_GPR_U32(ctx, 31, 0x546398u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546398u; }
        if (ctx->pc != 0x546398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546398u; }
        if (ctx->pc != 0x546398u) { return; }
    }
    ctx->pc = 0x546398u;
label_546398:
    // 0x546398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x546398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54639c:
    // 0x54639c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x54639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_5463a0:
    // 0x5463a0: 0xc04cd60  jal         func_133580
label_5463a4:
    if (ctx->pc == 0x5463A4u) {
        ctx->pc = 0x5463A4u;
            // 0x5463a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5463A8u;
        goto label_5463a8;
    }
    ctx->pc = 0x5463A0u;
    SET_GPR_U32(ctx, 31, 0x5463A8u);
    ctx->pc = 0x5463A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5463A0u;
            // 0x5463a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463A8u; }
        if (ctx->pc != 0x5463A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463A8u; }
        if (ctx->pc != 0x5463A8u) { return; }
    }
    ctx->pc = 0x5463A8u;
label_5463a8:
    // 0x5463a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x5463a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_5463ac:
    // 0x5463ac: 0xc04c650  jal         func_131940
label_5463b0:
    if (ctx->pc == 0x5463B0u) {
        ctx->pc = 0x5463B0u;
            // 0x5463b0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x5463B4u;
        goto label_5463b4;
    }
    ctx->pc = 0x5463ACu;
    SET_GPR_U32(ctx, 31, 0x5463B4u);
    ctx->pc = 0x5463B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5463ACu;
            // 0x5463b0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463B4u; }
        if (ctx->pc != 0x5463B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463B4u; }
        if (ctx->pc != 0x5463B4u) { return; }
    }
    ctx->pc = 0x5463B4u;
label_5463b4:
    // 0x5463b4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5463b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5463b8:
    // 0x5463b8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x5463b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5463bc:
    // 0x5463bc: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x5463bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_5463c0:
    // 0x5463c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5463c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5463c4:
    // 0x5463c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5463c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5463c8:
    // 0x5463c8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x5463c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_5463cc:
    // 0x5463cc: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_5463d0:
    if (ctx->pc == 0x5463D0u) {
        ctx->pc = 0x5463D0u;
            // 0x5463d0: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x5463D4u;
        goto label_5463d4;
    }
    ctx->pc = 0x5463CCu;
    {
        const bool branch_taken_0x5463cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5463D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5463CCu;
            // 0x5463d0: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5463cc) {
            ctx->pc = 0x546474u;
            goto label_546474;
        }
    }
    ctx->pc = 0x5463D4u;
label_5463d4:
    // 0x5463d4: 0xc68c0030  lwc1        $f12, 0x30($s4)
    ctx->pc = 0x5463d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5463d8:
    // 0x5463d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5463d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5463dc:
    // 0x5463dc: 0xc68d0034  lwc1        $f13, 0x34($s4)
    ctx->pc = 0x5463dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_5463e0:
    // 0x5463e0: 0xc68e0038  lwc1        $f14, 0x38($s4)
    ctx->pc = 0x5463e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_5463e4:
    // 0x5463e4: 0xc04ce50  jal         func_133940
label_5463e8:
    if (ctx->pc == 0x5463E8u) {
        ctx->pc = 0x5463E8u;
            // 0x5463e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5463ECu;
        goto label_5463ec;
    }
    ctx->pc = 0x5463E4u;
    SET_GPR_U32(ctx, 31, 0x5463ECu);
    ctx->pc = 0x5463E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5463E4u;
            // 0x5463e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463ECu; }
        if (ctx->pc != 0x5463ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463ECu; }
        if (ctx->pc != 0x5463ECu) { return; }
    }
    ctx->pc = 0x5463ECu;
label_5463ec:
    // 0x5463ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x5463ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_5463f0:
    // 0x5463f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5463f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5463f4:
    // 0x5463f4: 0xc04cd60  jal         func_133580
label_5463f8:
    if (ctx->pc == 0x5463F8u) {
        ctx->pc = 0x5463F8u;
            // 0x5463f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5463FCu;
        goto label_5463fc;
    }
    ctx->pc = 0x5463F4u;
    SET_GPR_U32(ctx, 31, 0x5463FCu);
    ctx->pc = 0x5463F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5463F4u;
            // 0x5463f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463FCu; }
        if (ctx->pc != 0x5463FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5463FCu; }
        if (ctx->pc != 0x5463FCu) { return; }
    }
    ctx->pc = 0x5463FCu;
label_5463fc:
    // 0x5463fc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x5463fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_546400:
    // 0x546400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x546400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_546404:
    // 0x546404: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x546404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_546408:
    // 0x546408: 0xc04e4a4  jal         func_139290
label_54640c:
    if (ctx->pc == 0x54640Cu) {
        ctx->pc = 0x54640Cu;
            // 0x54640c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546410u;
        goto label_546410;
    }
    ctx->pc = 0x546408u;
    SET_GPR_U32(ctx, 31, 0x546410u);
    ctx->pc = 0x54640Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546408u;
            // 0x54640c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546410u; }
        if (ctx->pc != 0x546410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546410u; }
        if (ctx->pc != 0x546410u) { return; }
    }
    ctx->pc = 0x546410u;
label_546410:
    // 0x546410: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x546410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_546414:
    // 0x546414: 0x8c42b6f0  lw          $v0, -0x4910($v0)
    ctx->pc = 0x546414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948592)));
label_546418:
    // 0x546418: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x546418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_54641c:
    // 0x54641c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x54641cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_546420:
    // 0x546420: 0xc44c00a8  lwc1        $f12, 0xA8($v0)
    ctx->pc = 0x546420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_546424:
    // 0x546424: 0xc054bbc  jal         func_152EF0
label_546428:
    if (ctx->pc == 0x546428u) {
        ctx->pc = 0x546428u;
            // 0x546428: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x54642Cu;
        goto label_54642c;
    }
    ctx->pc = 0x546424u;
    SET_GPR_U32(ctx, 31, 0x54642Cu);
    ctx->pc = 0x546428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546424u;
            // 0x546428: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54642Cu; }
        if (ctx->pc != 0x54642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54642Cu; }
        if (ctx->pc != 0x54642Cu) { return; }
    }
    ctx->pc = 0x54642Cu;
label_54642c:
    // 0x54642c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x54642cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_546430:
    // 0x546430: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x546430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_546434:
    // 0x546434: 0x320f809  jalr        $t9
label_546438:
    if (ctx->pc == 0x546438u) {
        ctx->pc = 0x546438u;
            // 0x546438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54643Cu;
        goto label_54643c;
    }
    ctx->pc = 0x546434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54643Cu);
        ctx->pc = 0x546438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546434u;
            // 0x546438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54643Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54643Cu; }
            if (ctx->pc != 0x54643Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54643Cu;
label_54643c:
    // 0x54643c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x54643cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_546440:
    // 0x546440: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x546440u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_546444:
    // 0x546444: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x546444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_546448:
    // 0x546448: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x546448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54644c:
    // 0x54644c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x54644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_546450:
    // 0x546450: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x546450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_546454:
    // 0x546454: 0xc04cfcc  jal         func_133F30
label_546458:
    if (ctx->pc == 0x546458u) {
        ctx->pc = 0x546458u;
            // 0x546458: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x54645Cu;
        goto label_54645c;
    }
    ctx->pc = 0x546454u;
    SET_GPR_U32(ctx, 31, 0x54645Cu);
    ctx->pc = 0x546458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546454u;
            // 0x546458: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54645Cu; }
        if (ctx->pc != 0x54645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54645Cu; }
        if (ctx->pc != 0x54645Cu) { return; }
    }
    ctx->pc = 0x54645Cu;
label_54645c:
    // 0x54645c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x54645cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_546460:
    // 0x546460: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x546460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_546464:
    // 0x546464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x546464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_546468:
    // 0x546468: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x546468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_54646c:
    // 0x54646c: 0xc054c2c  jal         func_1530B0
label_546470:
    if (ctx->pc == 0x546470u) {
        ctx->pc = 0x546470u;
            // 0x546470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546474u;
        goto label_546474;
    }
    ctx->pc = 0x54646Cu;
    SET_GPR_U32(ctx, 31, 0x546474u);
    ctx->pc = 0x546470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54646Cu;
            // 0x546470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546474u; }
        if (ctx->pc != 0x546474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546474u; }
        if (ctx->pc != 0x546474u) { return; }
    }
    ctx->pc = 0x546474u;
label_546474:
    // 0x546474: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x546474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_546478:
    // 0x546478: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x546478u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54647c:
    // 0x54647c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x54647cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_546480:
    // 0x546480: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x546480u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_546484:
    // 0x546484: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x546484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_546488:
    // 0x546488: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x546488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54648c:
    // 0x54648c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x54648cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_546490:
    // 0x546490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x546490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_546494:
    // 0x546494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x546494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_546498:
    // 0x546498: 0x3e00008  jr          $ra
label_54649c:
    if (ctx->pc == 0x54649Cu) {
        ctx->pc = 0x54649Cu;
            // 0x54649c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x5464A0u;
        goto label_5464a0;
    }
    ctx->pc = 0x546498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546498u;
            // 0x54649c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5464A0u;
label_5464a0:
    // 0x5464a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5464a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_5464a4:
    // 0x5464a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5464a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_5464a8:
    // 0x5464a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5464a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5464ac:
    // 0x5464ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5464acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5464b0:
    // 0x5464b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5464b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5464b4:
    // 0x5464b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5464b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5464b8:
    // 0x5464b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5464b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5464bc:
    // 0x5464bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5464bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5464c0:
    // 0x5464c0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x5464c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5464c4:
    // 0x5464c4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_5464c8:
    if (ctx->pc == 0x5464C8u) {
        ctx->pc = 0x5464C8u;
            // 0x5464c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5464CCu;
        goto label_5464cc;
    }
    ctx->pc = 0x5464C4u;
    {
        const bool branch_taken_0x5464c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5464C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5464C4u;
            // 0x5464c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5464c4) {
            ctx->pc = 0x546508u;
            goto label_546508;
        }
    }
    ctx->pc = 0x5464CCu;
label_5464cc:
    // 0x5464cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5464ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5464d0:
    // 0x5464d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5464d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5464d4:
    // 0x5464d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5464d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5464d8:
    // 0x5464d8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x5464d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_5464dc:
    // 0x5464dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x5464dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_5464e0:
    // 0x5464e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5464e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5464e4:
    // 0x5464e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5464e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5464e8:
    // 0x5464e8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5464e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5464ec:
    // 0x5464ec: 0x320f809  jalr        $t9
label_5464f0:
    if (ctx->pc == 0x5464F0u) {
        ctx->pc = 0x5464F4u;
        goto label_5464f4;
    }
    ctx->pc = 0x5464ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5464F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5464F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5464F4u; }
            if (ctx->pc != 0x5464F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5464F4u;
label_5464f4:
    // 0x5464f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x5464f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_5464f8:
    // 0x5464f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5464f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5464fc:
    // 0x5464fc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x5464fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_546500:
    // 0x546500: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_546504:
    if (ctx->pc == 0x546504u) {
        ctx->pc = 0x546504u;
            // 0x546504: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x546508u;
        goto label_546508;
    }
    ctx->pc = 0x546500u;
    {
        const bool branch_taken_0x546500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x546504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546500u;
            // 0x546504: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546500) {
            ctx->pc = 0x5464D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5464d8;
        }
    }
    ctx->pc = 0x546508u;
label_546508:
    // 0x546508: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x546508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54650c:
    // 0x54650c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x54650cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_546510:
    // 0x546510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x546510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_546514:
    // 0x546514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x546514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_546518:
    // 0x546518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x546518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54651c:
    // 0x54651c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x54651cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_546520:
    // 0x546520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x546520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_546524:
    // 0x546524: 0x3e00008  jr          $ra
label_546528:
    if (ctx->pc == 0x546528u) {
        ctx->pc = 0x546528u;
            // 0x546528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x54652Cu;
        goto label_54652c;
    }
    ctx->pc = 0x546524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546524u;
            // 0x546528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54652Cu;
label_54652c:
    // 0x54652c: 0x0  nop
    ctx->pc = 0x54652cu;
    // NOP
label_546530:
    // 0x546530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x546530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_546534:
    // 0x546534: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x546534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546538:
    // 0x546538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x546538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_54653c:
    // 0x54653c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x54653cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_546540:
    // 0x546540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x546540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_546544:
    // 0x546544: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x546544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_546548:
    // 0x546548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x546548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54654c:
    // 0x54654c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x54654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_546550:
    // 0x546550: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x546550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_546554:
    // 0x546554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x546554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_546558:
    // 0x546558: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x546558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_54655c:
    // 0x54655c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x54655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_546560:
    // 0x546560: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x546560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_546564:
    // 0x546564: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x546564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_546568:
    // 0x546568: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x546568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_54656c:
    // 0x54656c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x54656cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_546570:
    // 0x546570: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x546570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_546574:
    // 0x546574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x546574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_546578:
    // 0x546578: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x546578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_54657c:
    // 0x54657c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x54657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_546580:
    // 0x546580: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x546580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_546584:
    // 0x546584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x546584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_546588:
    // 0x546588: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x546588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54658c:
    // 0x54658c: 0xc0a997c  jal         func_2A65F0
label_546590:
    if (ctx->pc == 0x546590u) {
        ctx->pc = 0x546590u;
            // 0x546590: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x546594u;
        goto label_546594;
    }
    ctx->pc = 0x54658Cu;
    SET_GPR_U32(ctx, 31, 0x546594u);
    ctx->pc = 0x546590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54658Cu;
            // 0x546590: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546594u; }
        if (ctx->pc != 0x546594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546594u; }
        if (ctx->pc != 0x546594u) { return; }
    }
    ctx->pc = 0x546594u;
label_546594:
    // 0x546594: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x546594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_546598:
    // 0x546598: 0xc0d879c  jal         func_361E70
label_54659c:
    if (ctx->pc == 0x54659Cu) {
        ctx->pc = 0x54659Cu;
            // 0x54659c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5465A0u;
        goto label_5465a0;
    }
    ctx->pc = 0x546598u;
    SET_GPR_U32(ctx, 31, 0x5465A0u);
    ctx->pc = 0x54659Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546598u;
            // 0x54659c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5465A0u; }
        if (ctx->pc != 0x5465A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5465A0u; }
        if (ctx->pc != 0x5465A0u) { return; }
    }
    ctx->pc = 0x5465A0u;
label_5465a0:
    // 0x5465a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5465a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5465a4:
    // 0x5465a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5465a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5465a8:
    // 0x5465a8: 0x3e00008  jr          $ra
label_5465ac:
    if (ctx->pc == 0x5465ACu) {
        ctx->pc = 0x5465ACu;
            // 0x5465ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5465B0u;
        goto label_5465b0;
    }
    ctx->pc = 0x5465A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5465ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5465A8u;
            // 0x5465ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5465B0u;
label_5465b0:
    // 0x5465b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5465b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5465b4:
    // 0x5465b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5465b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5465b8:
    // 0x5465b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5465b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5465bc:
    // 0x5465bc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x5465bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_5465c0:
    // 0x5465c0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_5465c4:
    if (ctx->pc == 0x5465C4u) {
        ctx->pc = 0x5465C4u;
            // 0x5465c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5465C8u;
        goto label_5465c8;
    }
    ctx->pc = 0x5465C0u;
    {
        const bool branch_taken_0x5465c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5465C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5465C0u;
            // 0x5465c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5465c0) {
            ctx->pc = 0x5466E0u;
            goto label_5466e0;
        }
    }
    ctx->pc = 0x5465C8u;
label_5465c8:
    // 0x5465c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x5465c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_5465cc:
    // 0x5465cc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x5465ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_5465d0:
    // 0x5465d0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x5465d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_5465d4:
    // 0x5465d4: 0xc075128  jal         func_1D44A0
label_5465d8:
    if (ctx->pc == 0x5465D8u) {
        ctx->pc = 0x5465D8u;
            // 0x5465d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x5465DCu;
        goto label_5465dc;
    }
    ctx->pc = 0x5465D4u;
    SET_GPR_U32(ctx, 31, 0x5465DCu);
    ctx->pc = 0x5465D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5465D4u;
            // 0x5465d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5465DCu; }
        if (ctx->pc != 0x5465DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5465DCu; }
        if (ctx->pc != 0x5465DCu) { return; }
    }
    ctx->pc = 0x5465DCu;
label_5465dc:
    // 0x5465dc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x5465dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_5465e0:
    // 0x5465e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5465e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5465e4:
    // 0x5465e4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x5465e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_5465e8:
    // 0x5465e8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x5465e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_5465ec:
    // 0x5465ec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5465ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5465f0:
    // 0x5465f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5465f4:
    if (ctx->pc == 0x5465F4u) {
        ctx->pc = 0x5465F4u;
            // 0x5465f4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x5465F8u;
        goto label_5465f8;
    }
    ctx->pc = 0x5465F0u;
    {
        const bool branch_taken_0x5465f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5465F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5465F0u;
            // 0x5465f4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5465f0) {
            ctx->pc = 0x546600u;
            goto label_546600;
        }
    }
    ctx->pc = 0x5465F8u;
label_5465f8:
    // 0x5465f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5465f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5465fc:
    // 0x5465fc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x5465fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_546600:
    // 0x546600: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x546600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_546604:
    // 0x546604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x546604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_546608:
    // 0x546608: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x546608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_54660c:
    // 0x54660c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x54660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_546610:
    // 0x546610: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x546610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_546614:
    // 0x546614: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_546618:
    if (ctx->pc == 0x546618u) {
        ctx->pc = 0x546618u;
            // 0x546618: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x54661Cu;
        goto label_54661c;
    }
    ctx->pc = 0x546614u;
    {
        const bool branch_taken_0x546614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x546614) {
            ctx->pc = 0x546618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546614u;
            // 0x546618: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546628u;
            goto label_546628;
        }
    }
    ctx->pc = 0x54661Cu;
label_54661c:
    // 0x54661c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x54661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_546620:
    // 0x546620: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x546620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_546624:
    // 0x546624: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x546624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_546628:
    // 0x546628: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x546628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_54662c:
    // 0x54662c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x54662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_546630:
    // 0x546630: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x546630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_546634:
    // 0x546634: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x546634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_546638:
    // 0x546638: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_54663c:
    if (ctx->pc == 0x54663Cu) {
        ctx->pc = 0x54663Cu;
            // 0x54663c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x546640u;
        goto label_546640;
    }
    ctx->pc = 0x546638u;
    {
        const bool branch_taken_0x546638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x546638) {
            ctx->pc = 0x54663Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546638u;
            // 0x54663c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54664Cu;
            goto label_54664c;
        }
    }
    ctx->pc = 0x546640u;
label_546640:
    // 0x546640: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x546640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_546644:
    // 0x546644: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x546644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_546648:
    // 0x546648: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x546648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54664c:
    // 0x54664c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x54664cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_546650:
    // 0x546650: 0x320f809  jalr        $t9
label_546654:
    if (ctx->pc == 0x546654u) {
        ctx->pc = 0x546654u;
            // 0x546654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546658u;
        goto label_546658;
    }
    ctx->pc = 0x546650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x546658u);
        ctx->pc = 0x546654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546650u;
            // 0x546654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x546658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x546658u; }
            if (ctx->pc != 0x546658u) { return; }
        }
        }
    }
    ctx->pc = 0x546658u;
label_546658:
    // 0x546658: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x546658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_54665c:
    // 0x54665c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54665cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_546660:
    // 0x546660: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x546660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_546664:
    // 0x546664: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x546664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_546668:
    // 0x546668: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x546668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_54666c:
    // 0x54666c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x54666cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_546670:
    // 0x546670: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_546674:
    if (ctx->pc == 0x546674u) {
        ctx->pc = 0x546674u;
            // 0x546674: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x546678u;
        goto label_546678;
    }
    ctx->pc = 0x546670u;
    {
        const bool branch_taken_0x546670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x546670) {
            ctx->pc = 0x546674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546670u;
            // 0x546674: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546684u;
            goto label_546684;
        }
    }
    ctx->pc = 0x546678u;
label_546678:
    // 0x546678: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x546678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_54667c:
    // 0x54667c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x54667cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_546680:
    // 0x546680: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x546680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_546684:
    // 0x546684: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x546684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_546688:
    // 0x546688: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x546688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_54668c:
    // 0x54668c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x54668cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_546690:
    // 0x546690: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x546690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_546694:
    // 0x546694: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x546694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_546698:
    // 0x546698: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_54669c:
    if (ctx->pc == 0x54669Cu) {
        ctx->pc = 0x5466A0u;
        goto label_5466a0;
    }
    ctx->pc = 0x546698u;
    {
        const bool branch_taken_0x546698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x546698) {
            ctx->pc = 0x5466A8u;
            goto label_5466a8;
        }
    }
    ctx->pc = 0x5466A0u;
label_5466a0:
    // 0x5466a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5466a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5466a4:
    // 0x5466a4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x5466a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_5466a8:
    // 0x5466a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5466a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5466ac:
    // 0x5466ac: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x5466acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_5466b0:
    // 0x5466b0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x5466b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5466b4:
    // 0x5466b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5466b8:
    if (ctx->pc == 0x5466B8u) {
        ctx->pc = 0x5466BCu;
        goto label_5466bc;
    }
    ctx->pc = 0x5466B4u;
    {
        const bool branch_taken_0x5466b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5466b4) {
            ctx->pc = 0x5466C4u;
            goto label_5466c4;
        }
    }
    ctx->pc = 0x5466BCu;
label_5466bc:
    // 0x5466bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5466bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5466c0:
    // 0x5466c0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x5466c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_5466c4:
    // 0x5466c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5466c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5466c8:
    // 0x5466c8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x5466c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_5466cc:
    // 0x5466cc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x5466ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5466d0:
    // 0x5466d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5466d4:
    if (ctx->pc == 0x5466D4u) {
        ctx->pc = 0x5466D4u;
            // 0x5466d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5466D8u;
        goto label_5466d8;
    }
    ctx->pc = 0x5466D0u;
    {
        const bool branch_taken_0x5466d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5466d0) {
            ctx->pc = 0x5466D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5466D0u;
            // 0x5466d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5466E4u;
            goto label_5466e4;
        }
    }
    ctx->pc = 0x5466D8u;
label_5466d8:
    // 0x5466d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5466d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5466dc:
    // 0x5466dc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x5466dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_5466e0:
    // 0x5466e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5466e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5466e4:
    // 0x5466e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5466e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5466e8:
    // 0x5466e8: 0x3e00008  jr          $ra
label_5466ec:
    if (ctx->pc == 0x5466ECu) {
        ctx->pc = 0x5466ECu;
            // 0x5466ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5466F0u;
        goto label_5466f0;
    }
    ctx->pc = 0x5466E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5466ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5466E8u;
            // 0x5466ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5466F0u;
label_5466f0:
    // 0x5466f0: 0x8151600  j           func_545800
label_5466f4:
    if (ctx->pc == 0x5466F4u) {
        ctx->pc = 0x5466F4u;
            // 0x5466f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5466F8u;
        goto label_5466f8;
    }
    ctx->pc = 0x5466F0u;
    ctx->pc = 0x5466F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5466F0u;
            // 0x5466f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x545800u;
    {
        auto targetFn = runtime->lookupFunction(0x545800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5466F8u;
label_5466f8:
    // 0x5466f8: 0x0  nop
    ctx->pc = 0x5466f8u;
    // NOP
label_5466fc:
    // 0x5466fc: 0x0  nop
    ctx->pc = 0x5466fcu;
    // NOP
label_546700:
    // 0x546700: 0x81514c0  j           func_545300
label_546704:
    if (ctx->pc == 0x546704u) {
        ctx->pc = 0x546704u;
            // 0x546704: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x546708u;
        goto label_546708;
    }
    ctx->pc = 0x546700u;
    ctx->pc = 0x546704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546700u;
            // 0x546704: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x545300u;
    if (runtime->hasFunction(0x545300u)) {
        auto targetFn = runtime->lookupFunction(0x545300u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00545300_0x545300(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x546708u;
label_546708:
    // 0x546708: 0x0  nop
    ctx->pc = 0x546708u;
    // NOP
label_54670c:
    // 0x54670c: 0x0  nop
    ctx->pc = 0x54670cu;
    // NOP
label_546710:
    // 0x546710: 0x8151518  j           func_545460
label_546714:
    if (ctx->pc == 0x546714u) {
        ctx->pc = 0x546714u;
            // 0x546714: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x546718u;
        goto label_546718;
    }
    ctx->pc = 0x546710u;
    ctx->pc = 0x546714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546710u;
            // 0x546714: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x545460u;
    {
        auto targetFn = runtime->lookupFunction(0x545460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x546718u;
label_546718:
    // 0x546718: 0x0  nop
    ctx->pc = 0x546718u;
    // NOP
label_54671c:
    // 0x54671c: 0x0  nop
    ctx->pc = 0x54671cu;
    // NOP
label_546720:
    // 0x546720: 0x815149c  j           func_545270
label_546724:
    if (ctx->pc == 0x546724u) {
        ctx->pc = 0x546724u;
            // 0x546724: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x546728u;
        goto label_546728;
    }
    ctx->pc = 0x546720u;
    ctx->pc = 0x546724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546720u;
            // 0x546724: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x545270u;
    {
        auto targetFn = runtime->lookupFunction(0x545270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x546728u;
label_546728:
    // 0x546728: 0x0  nop
    ctx->pc = 0x546728u;
    // NOP
label_54672c:
    // 0x54672c: 0x0  nop
    ctx->pc = 0x54672cu;
    // NOP
}
