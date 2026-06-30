#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005112D0
// Address: 0x5112d0 - 0x511700
void sub_005112D0_0x5112d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005112D0_0x5112d0");
#endif

    switch (ctx->pc) {
        case 0x5112d0u: goto label_5112d0;
        case 0x5112d4u: goto label_5112d4;
        case 0x5112d8u: goto label_5112d8;
        case 0x5112dcu: goto label_5112dc;
        case 0x5112e0u: goto label_5112e0;
        case 0x5112e4u: goto label_5112e4;
        case 0x5112e8u: goto label_5112e8;
        case 0x5112ecu: goto label_5112ec;
        case 0x5112f0u: goto label_5112f0;
        case 0x5112f4u: goto label_5112f4;
        case 0x5112f8u: goto label_5112f8;
        case 0x5112fcu: goto label_5112fc;
        case 0x511300u: goto label_511300;
        case 0x511304u: goto label_511304;
        case 0x511308u: goto label_511308;
        case 0x51130cu: goto label_51130c;
        case 0x511310u: goto label_511310;
        case 0x511314u: goto label_511314;
        case 0x511318u: goto label_511318;
        case 0x51131cu: goto label_51131c;
        case 0x511320u: goto label_511320;
        case 0x511324u: goto label_511324;
        case 0x511328u: goto label_511328;
        case 0x51132cu: goto label_51132c;
        case 0x511330u: goto label_511330;
        case 0x511334u: goto label_511334;
        case 0x511338u: goto label_511338;
        case 0x51133cu: goto label_51133c;
        case 0x511340u: goto label_511340;
        case 0x511344u: goto label_511344;
        case 0x511348u: goto label_511348;
        case 0x51134cu: goto label_51134c;
        case 0x511350u: goto label_511350;
        case 0x511354u: goto label_511354;
        case 0x511358u: goto label_511358;
        case 0x51135cu: goto label_51135c;
        case 0x511360u: goto label_511360;
        case 0x511364u: goto label_511364;
        case 0x511368u: goto label_511368;
        case 0x51136cu: goto label_51136c;
        case 0x511370u: goto label_511370;
        case 0x511374u: goto label_511374;
        case 0x511378u: goto label_511378;
        case 0x51137cu: goto label_51137c;
        case 0x511380u: goto label_511380;
        case 0x511384u: goto label_511384;
        case 0x511388u: goto label_511388;
        case 0x51138cu: goto label_51138c;
        case 0x511390u: goto label_511390;
        case 0x511394u: goto label_511394;
        case 0x511398u: goto label_511398;
        case 0x51139cu: goto label_51139c;
        case 0x5113a0u: goto label_5113a0;
        case 0x5113a4u: goto label_5113a4;
        case 0x5113a8u: goto label_5113a8;
        case 0x5113acu: goto label_5113ac;
        case 0x5113b0u: goto label_5113b0;
        case 0x5113b4u: goto label_5113b4;
        case 0x5113b8u: goto label_5113b8;
        case 0x5113bcu: goto label_5113bc;
        case 0x5113c0u: goto label_5113c0;
        case 0x5113c4u: goto label_5113c4;
        case 0x5113c8u: goto label_5113c8;
        case 0x5113ccu: goto label_5113cc;
        case 0x5113d0u: goto label_5113d0;
        case 0x5113d4u: goto label_5113d4;
        case 0x5113d8u: goto label_5113d8;
        case 0x5113dcu: goto label_5113dc;
        case 0x5113e0u: goto label_5113e0;
        case 0x5113e4u: goto label_5113e4;
        case 0x5113e8u: goto label_5113e8;
        case 0x5113ecu: goto label_5113ec;
        case 0x5113f0u: goto label_5113f0;
        case 0x5113f4u: goto label_5113f4;
        case 0x5113f8u: goto label_5113f8;
        case 0x5113fcu: goto label_5113fc;
        case 0x511400u: goto label_511400;
        case 0x511404u: goto label_511404;
        case 0x511408u: goto label_511408;
        case 0x51140cu: goto label_51140c;
        case 0x511410u: goto label_511410;
        case 0x511414u: goto label_511414;
        case 0x511418u: goto label_511418;
        case 0x51141cu: goto label_51141c;
        case 0x511420u: goto label_511420;
        case 0x511424u: goto label_511424;
        case 0x511428u: goto label_511428;
        case 0x51142cu: goto label_51142c;
        case 0x511430u: goto label_511430;
        case 0x511434u: goto label_511434;
        case 0x511438u: goto label_511438;
        case 0x51143cu: goto label_51143c;
        case 0x511440u: goto label_511440;
        case 0x511444u: goto label_511444;
        case 0x511448u: goto label_511448;
        case 0x51144cu: goto label_51144c;
        case 0x511450u: goto label_511450;
        case 0x511454u: goto label_511454;
        case 0x511458u: goto label_511458;
        case 0x51145cu: goto label_51145c;
        case 0x511460u: goto label_511460;
        case 0x511464u: goto label_511464;
        case 0x511468u: goto label_511468;
        case 0x51146cu: goto label_51146c;
        case 0x511470u: goto label_511470;
        case 0x511474u: goto label_511474;
        case 0x511478u: goto label_511478;
        case 0x51147cu: goto label_51147c;
        case 0x511480u: goto label_511480;
        case 0x511484u: goto label_511484;
        case 0x511488u: goto label_511488;
        case 0x51148cu: goto label_51148c;
        case 0x511490u: goto label_511490;
        case 0x511494u: goto label_511494;
        case 0x511498u: goto label_511498;
        case 0x51149cu: goto label_51149c;
        case 0x5114a0u: goto label_5114a0;
        case 0x5114a4u: goto label_5114a4;
        case 0x5114a8u: goto label_5114a8;
        case 0x5114acu: goto label_5114ac;
        case 0x5114b0u: goto label_5114b0;
        case 0x5114b4u: goto label_5114b4;
        case 0x5114b8u: goto label_5114b8;
        case 0x5114bcu: goto label_5114bc;
        case 0x5114c0u: goto label_5114c0;
        case 0x5114c4u: goto label_5114c4;
        case 0x5114c8u: goto label_5114c8;
        case 0x5114ccu: goto label_5114cc;
        case 0x5114d0u: goto label_5114d0;
        case 0x5114d4u: goto label_5114d4;
        case 0x5114d8u: goto label_5114d8;
        case 0x5114dcu: goto label_5114dc;
        case 0x5114e0u: goto label_5114e0;
        case 0x5114e4u: goto label_5114e4;
        case 0x5114e8u: goto label_5114e8;
        case 0x5114ecu: goto label_5114ec;
        case 0x5114f0u: goto label_5114f0;
        case 0x5114f4u: goto label_5114f4;
        case 0x5114f8u: goto label_5114f8;
        case 0x5114fcu: goto label_5114fc;
        case 0x511500u: goto label_511500;
        case 0x511504u: goto label_511504;
        case 0x511508u: goto label_511508;
        case 0x51150cu: goto label_51150c;
        case 0x511510u: goto label_511510;
        case 0x511514u: goto label_511514;
        case 0x511518u: goto label_511518;
        case 0x51151cu: goto label_51151c;
        case 0x511520u: goto label_511520;
        case 0x511524u: goto label_511524;
        case 0x511528u: goto label_511528;
        case 0x51152cu: goto label_51152c;
        case 0x511530u: goto label_511530;
        case 0x511534u: goto label_511534;
        case 0x511538u: goto label_511538;
        case 0x51153cu: goto label_51153c;
        case 0x511540u: goto label_511540;
        case 0x511544u: goto label_511544;
        case 0x511548u: goto label_511548;
        case 0x51154cu: goto label_51154c;
        case 0x511550u: goto label_511550;
        case 0x511554u: goto label_511554;
        case 0x511558u: goto label_511558;
        case 0x51155cu: goto label_51155c;
        case 0x511560u: goto label_511560;
        case 0x511564u: goto label_511564;
        case 0x511568u: goto label_511568;
        case 0x51156cu: goto label_51156c;
        case 0x511570u: goto label_511570;
        case 0x511574u: goto label_511574;
        case 0x511578u: goto label_511578;
        case 0x51157cu: goto label_51157c;
        case 0x511580u: goto label_511580;
        case 0x511584u: goto label_511584;
        case 0x511588u: goto label_511588;
        case 0x51158cu: goto label_51158c;
        case 0x511590u: goto label_511590;
        case 0x511594u: goto label_511594;
        case 0x511598u: goto label_511598;
        case 0x51159cu: goto label_51159c;
        case 0x5115a0u: goto label_5115a0;
        case 0x5115a4u: goto label_5115a4;
        case 0x5115a8u: goto label_5115a8;
        case 0x5115acu: goto label_5115ac;
        case 0x5115b0u: goto label_5115b0;
        case 0x5115b4u: goto label_5115b4;
        case 0x5115b8u: goto label_5115b8;
        case 0x5115bcu: goto label_5115bc;
        case 0x5115c0u: goto label_5115c0;
        case 0x5115c4u: goto label_5115c4;
        case 0x5115c8u: goto label_5115c8;
        case 0x5115ccu: goto label_5115cc;
        case 0x5115d0u: goto label_5115d0;
        case 0x5115d4u: goto label_5115d4;
        case 0x5115d8u: goto label_5115d8;
        case 0x5115dcu: goto label_5115dc;
        case 0x5115e0u: goto label_5115e0;
        case 0x5115e4u: goto label_5115e4;
        case 0x5115e8u: goto label_5115e8;
        case 0x5115ecu: goto label_5115ec;
        case 0x5115f0u: goto label_5115f0;
        case 0x5115f4u: goto label_5115f4;
        case 0x5115f8u: goto label_5115f8;
        case 0x5115fcu: goto label_5115fc;
        case 0x511600u: goto label_511600;
        case 0x511604u: goto label_511604;
        case 0x511608u: goto label_511608;
        case 0x51160cu: goto label_51160c;
        case 0x511610u: goto label_511610;
        case 0x511614u: goto label_511614;
        case 0x511618u: goto label_511618;
        case 0x51161cu: goto label_51161c;
        case 0x511620u: goto label_511620;
        case 0x511624u: goto label_511624;
        case 0x511628u: goto label_511628;
        case 0x51162cu: goto label_51162c;
        case 0x511630u: goto label_511630;
        case 0x511634u: goto label_511634;
        case 0x511638u: goto label_511638;
        case 0x51163cu: goto label_51163c;
        case 0x511640u: goto label_511640;
        case 0x511644u: goto label_511644;
        case 0x511648u: goto label_511648;
        case 0x51164cu: goto label_51164c;
        case 0x511650u: goto label_511650;
        case 0x511654u: goto label_511654;
        case 0x511658u: goto label_511658;
        case 0x51165cu: goto label_51165c;
        case 0x511660u: goto label_511660;
        case 0x511664u: goto label_511664;
        case 0x511668u: goto label_511668;
        case 0x51166cu: goto label_51166c;
        case 0x511670u: goto label_511670;
        case 0x511674u: goto label_511674;
        case 0x511678u: goto label_511678;
        case 0x51167cu: goto label_51167c;
        case 0x511680u: goto label_511680;
        case 0x511684u: goto label_511684;
        case 0x511688u: goto label_511688;
        case 0x51168cu: goto label_51168c;
        case 0x511690u: goto label_511690;
        case 0x511694u: goto label_511694;
        case 0x511698u: goto label_511698;
        case 0x51169cu: goto label_51169c;
        case 0x5116a0u: goto label_5116a0;
        case 0x5116a4u: goto label_5116a4;
        case 0x5116a8u: goto label_5116a8;
        case 0x5116acu: goto label_5116ac;
        case 0x5116b0u: goto label_5116b0;
        case 0x5116b4u: goto label_5116b4;
        case 0x5116b8u: goto label_5116b8;
        case 0x5116bcu: goto label_5116bc;
        case 0x5116c0u: goto label_5116c0;
        case 0x5116c4u: goto label_5116c4;
        case 0x5116c8u: goto label_5116c8;
        case 0x5116ccu: goto label_5116cc;
        case 0x5116d0u: goto label_5116d0;
        case 0x5116d4u: goto label_5116d4;
        case 0x5116d8u: goto label_5116d8;
        case 0x5116dcu: goto label_5116dc;
        case 0x5116e0u: goto label_5116e0;
        case 0x5116e4u: goto label_5116e4;
        case 0x5116e8u: goto label_5116e8;
        case 0x5116ecu: goto label_5116ec;
        case 0x5116f0u: goto label_5116f0;
        case 0x5116f4u: goto label_5116f4;
        case 0x5116f8u: goto label_5116f8;
        case 0x5116fcu: goto label_5116fc;
        default: break;
    }

    ctx->pc = 0x5112d0u;

label_5112d0:
    // 0x5112d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x5112d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_5112d4:
    // 0x5112d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5112d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5112d8:
    // 0x5112d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x5112d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_5112dc:
    // 0x5112dc: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x5112dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_5112e0:
    // 0x5112e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x5112e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_5112e4:
    // 0x5112e4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x5112e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_5112e8:
    // 0x5112e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x5112e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_5112ec:
    // 0x5112ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5112ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_5112f0:
    // 0x5112f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5112f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5112f4:
    // 0x5112f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x5112f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5112f8:
    // 0x5112f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5112f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5112fc:
    // 0x5112fc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x5112fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_511300:
    // 0x511300: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x511300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_511304:
    // 0x511304: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x511304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_511308:
    // 0x511308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x511308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51130c:
    // 0x51130c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_511310:
    // 0x511310: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x511310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_511314:
    // 0x511314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x511314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_511318:
    // 0x511318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x511318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51131c:
    // 0x51131c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x51131cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_511320:
    // 0x511320: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x511320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_511324:
    // 0x511324: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x511324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_511328:
    // 0x511328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x511328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51132c:
    // 0x51132c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x51132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_511330:
    // 0x511330: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x511330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_511334:
    // 0x511334: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x511334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_511338:
    // 0x511338: 0xc04a576  jal         func_1295D8
label_51133c:
    if (ctx->pc == 0x51133Cu) {
        ctx->pc = 0x51133Cu;
            // 0x51133c: 0x24550090  addiu       $s5, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x511340u;
        goto label_511340;
    }
    ctx->pc = 0x511338u;
    SET_GPR_U32(ctx, 31, 0x511340u);
    ctx->pc = 0x51133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511338u;
            // 0x51133c: 0x24550090  addiu       $s5, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511340u; }
        if (ctx->pc != 0x511340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511340u; }
        if (ctx->pc != 0x511340u) { return; }
    }
    ctx->pc = 0x511340u;
label_511340:
    // 0x511340: 0x26a40034  addiu       $a0, $s5, 0x34
    ctx->pc = 0x511340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
label_511344:
    // 0x511344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x511344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511348:
    // 0x511348: 0xc04a576  jal         func_1295D8
label_51134c:
    if (ctx->pc == 0x51134Cu) {
        ctx->pc = 0x51134Cu;
            // 0x51134c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x511350u;
        goto label_511350;
    }
    ctx->pc = 0x511348u;
    SET_GPR_U32(ctx, 31, 0x511350u);
    ctx->pc = 0x51134Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511348u;
            // 0x51134c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511350u; }
        if (ctx->pc != 0x511350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511350u; }
        if (ctx->pc != 0x511350u) { return; }
    }
    ctx->pc = 0x511350u;
label_511350:
    // 0x511350: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x511350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_511354:
    // 0x511354: 0x18600066  blez        $v1, . + 4 + (0x66 << 2)
label_511358:
    if (ctx->pc == 0x511358u) {
        ctx->pc = 0x51135Cu;
        goto label_51135c;
    }
    ctx->pc = 0x511354u;
    {
        const bool branch_taken_0x511354 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x511354) {
            ctx->pc = 0x5114F0u;
            goto label_5114f0;
        }
    }
    ctx->pc = 0x51135Cu;
label_51135c:
    // 0x51135c: 0x8e840a60  lw          $a0, 0xA60($s4)
    ctx->pc = 0x51135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2656)));
label_511360:
    // 0x511360: 0xc0eecc8  jal         func_3BB320
label_511364:
    if (ctx->pc == 0x511364u) {
        ctx->pc = 0x511364u;
            // 0x511364: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x511368u;
        goto label_511368;
    }
    ctx->pc = 0x511360u;
    SET_GPR_U32(ctx, 31, 0x511368u);
    ctx->pc = 0x511364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511360u;
            // 0x511364: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB320u;
    if (runtime->hasFunction(0x3BB320u)) {
        auto targetFn = runtime->lookupFunction(0x3BB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511368u; }
        if (ctx->pc != 0x511368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB320_0x3bb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511368u; }
        if (ctx->pc != 0x511368u) { return; }
    }
    ctx->pc = 0x511368u;
label_511368:
    // 0x511368: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x511368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_51136c:
    // 0x51136c: 0xc04f278  jal         func_13C9E0
label_511370:
    if (ctx->pc == 0x511370u) {
        ctx->pc = 0x511370u;
            // 0x511370: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x511374u;
        goto label_511374;
    }
    ctx->pc = 0x51136Cu;
    SET_GPR_U32(ctx, 31, 0x511374u);
    ctx->pc = 0x511370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51136Cu;
            // 0x511370: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511374u; }
        if (ctx->pc != 0x511374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511374u; }
        if (ctx->pc != 0x511374u) { return; }
    }
    ctx->pc = 0x511374u;
label_511374:
    // 0x511374: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x511374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_511378:
    // 0x511378: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x511378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_51137c:
    // 0x51137c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x51137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_511380:
    // 0x511380: 0xc04cca0  jal         func_133280
label_511384:
    if (ctx->pc == 0x511384u) {
        ctx->pc = 0x511384u;
            // 0x511384: 0x24c6bd30  addiu       $a2, $a2, -0x42D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950192));
        ctx->pc = 0x511388u;
        goto label_511388;
    }
    ctx->pc = 0x511380u;
    SET_GPR_U32(ctx, 31, 0x511388u);
    ctx->pc = 0x511384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511380u;
            // 0x511384: 0x24c6bd30  addiu       $a2, $a2, -0x42D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511388u; }
        if (ctx->pc != 0x511388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511388u; }
        if (ctx->pc != 0x511388u) { return; }
    }
    ctx->pc = 0x511388u;
label_511388:
    // 0x511388: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x511388u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_51138c:
    // 0x51138c: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x51138cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
label_511390:
    // 0x511390: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x511390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511394:
    // 0x511394: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x511394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_511398:
    // 0x511398: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x511398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_51139c:
    // 0x51139c: 0x1253004c  beq         $s2, $s3, . + 4 + (0x4C << 2)
label_5113a0:
    if (ctx->pc == 0x5113A0u) {
        ctx->pc = 0x5113A4u;
        goto label_5113a4;
    }
    ctx->pc = 0x51139Cu;
    {
        const bool branch_taken_0x51139c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x51139c) {
            ctx->pc = 0x5114D0u;
            goto label_5114d0;
        }
    }
    ctx->pc = 0x5113A4u;
label_5113a4:
    // 0x5113a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5113a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5113a8:
    // 0x5113a8: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x5113a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5113ac:
    // 0x5113ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5113acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5113b0:
    // 0x5113b0: 0x2432004  sllv        $a0, $v1, $s2
    ctx->pc = 0x5113b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_5113b4:
    // 0x5113b4: 0x8ca30ccc  lw          $v1, 0xCCC($a1)
    ctx->pc = 0x5113b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3276)));
label_5113b8:
    // 0x5113b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5113b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_5113bc:
    // 0x5113bc: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
label_5113c0:
    if (ctx->pc == 0x5113C0u) {
        ctx->pc = 0x5113C0u;
            // 0x5113c0: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x5113C4u;
        goto label_5113c4;
    }
    ctx->pc = 0x5113BCu;
    {
        const bool branch_taken_0x5113bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5113C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5113BCu;
            // 0x5113c0: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5113bc) {
            ctx->pc = 0x5114D0u;
            goto label_5114d0;
        }
    }
    ctx->pc = 0x5113C4u;
label_5113c4:
    // 0x5113c4: 0x24c502c0  addiu       $a1, $a2, 0x2C0
    ctx->pc = 0x5113c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
label_5113c8:
    // 0x5113c8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5113c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5113cc:
    // 0x5113cc: 0xc04cc90  jal         func_133240
label_5113d0:
    if (ctx->pc == 0x5113D0u) {
        ctx->pc = 0x5113D0u;
            // 0x5113d0: 0x268602c0  addiu       $a2, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->pc = 0x5113D4u;
        goto label_5113d4;
    }
    ctx->pc = 0x5113CCu;
    SET_GPR_U32(ctx, 31, 0x5113D4u);
    ctx->pc = 0x5113D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5113CCu;
            // 0x5113d0: 0x268602c0  addiu       $a2, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5113D4u; }
        if (ctx->pc != 0x5113D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5113D4u; }
        if (ctx->pc != 0x5113D4u) { return; }
    }
    ctx->pc = 0x5113D4u;
label_5113d4:
    // 0x5113d4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x5113d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5113d8:
    // 0x5113d8: 0xc04cc44  jal         func_133110
label_5113dc:
    if (ctx->pc == 0x5113DCu) {
        ctx->pc = 0x5113DCu;
            // 0x5113dc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5113E0u;
        goto label_5113e0;
    }
    ctx->pc = 0x5113D8u;
    SET_GPR_U32(ctx, 31, 0x5113E0u);
    ctx->pc = 0x5113DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5113D8u;
            // 0x5113dc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5113E0u; }
        if (ctx->pc != 0x5113E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5113E0u; }
        if (ctx->pc != 0x5113E0u) { return; }
    }
    ctx->pc = 0x5113E0u;
label_5113e0:
    // 0x5113e0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5113e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5113e4:
    // 0x5113e4: 0xc04cc08  jal         func_133020
label_5113e8:
    if (ctx->pc == 0x5113E8u) {
        ctx->pc = 0x5113E8u;
            // 0x5113e8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x5113ECu;
        goto label_5113ec;
    }
    ctx->pc = 0x5113E4u;
    SET_GPR_U32(ctx, 31, 0x5113ECu);
    ctx->pc = 0x5113E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5113E4u;
            // 0x5113e8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5113ECu; }
        if (ctx->pc != 0x5113ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5113ECu; }
        if (ctx->pc != 0x5113ECu) { return; }
    }
    ctx->pc = 0x5113ECu;
label_5113ec:
    // 0x5113ec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x5113ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_5113f0:
    // 0x5113f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5113f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5113f4:
    // 0x5113f4: 0x0  nop
    ctx->pc = 0x5113f4u;
    // NOP
label_5113f8:
    // 0x5113f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5113f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5113fc:
    // 0x5113fc: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_511400:
    if (ctx->pc == 0x511400u) {
        ctx->pc = 0x511404u;
        goto label_511404;
    }
    ctx->pc = 0x5113FCu;
    {
        const bool branch_taken_0x5113fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5113fc) {
            ctx->pc = 0x5114D0u;
            goto label_5114d0;
        }
    }
    ctx->pc = 0x511404u;
label_511404:
    // 0x511404: 0xc04cc2c  jal         func_1330B0
label_511408:
    if (ctx->pc == 0x511408u) {
        ctx->pc = 0x511408u;
            // 0x511408: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x51140Cu;
        goto label_51140c;
    }
    ctx->pc = 0x511404u;
    SET_GPR_U32(ctx, 31, 0x51140Cu);
    ctx->pc = 0x511408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511404u;
            // 0x511408: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51140Cu; }
        if (ctx->pc != 0x51140Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51140Cu; }
        if (ctx->pc != 0x51140Cu) { return; }
    }
    ctx->pc = 0x51140Cu;
label_51140c:
    // 0x51140c: 0x3c034599  lui         $v1, 0x4599
    ctx->pc = 0x51140cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17817 << 16));
label_511410:
    // 0x511410: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x511410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_511414:
    // 0x511414: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x511414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_511418:
    // 0x511418: 0x0  nop
    ctx->pc = 0x511418u;
    // NOP
label_51141c:
    // 0x51141c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x51141cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_511420:
    // 0x511420: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_511424:
    if (ctx->pc == 0x511424u) {
        ctx->pc = 0x511428u;
        goto label_511428;
    }
    ctx->pc = 0x511420u;
    {
        const bool branch_taken_0x511420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x511420) {
            ctx->pc = 0x5114D0u;
            goto label_5114d0;
        }
    }
    ctx->pc = 0x511428u;
label_511428:
    // 0x511428: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x511428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_51142c:
    // 0x51142c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x51142cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_511430:
    // 0x511430: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x511430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_511434:
    // 0x511434: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x511434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_511438:
    // 0x511438: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x511438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_51143c:
    // 0x51143c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x51143cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_511440:
    // 0x511440: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x511440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_511444:
    // 0x511444: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x511444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_511448:
    // 0x511448: 0xac520038  sw          $s2, 0x38($v0)
    ctx->pc = 0x511448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 18));
label_51144c:
    // 0x51144c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x51144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_511450:
    // 0x511450: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x511450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_511454:
    // 0x511454: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x511454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_511458:
    // 0x511458: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x511458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_51145c:
    // 0x51145c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x51145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_511460:
    // 0x511460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x511460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_511464:
    // 0x511464: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x511464u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_511468:
    // 0x511468: 0xc1443cc  jal         func_510F30
label_51146c:
    if (ctx->pc == 0x51146Cu) {
        ctx->pc = 0x51146Cu;
            // 0x51146c: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x511470u;
        goto label_511470;
    }
    ctx->pc = 0x511468u;
    SET_GPR_U32(ctx, 31, 0x511470u);
    ctx->pc = 0x51146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511468u;
            // 0x51146c: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510F30u;
    if (runtime->hasFunction(0x510F30u)) {
        auto targetFn = runtime->lookupFunction(0x510F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511470u; }
        if (ctx->pc != 0x511470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510F30_0x510f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511470u; }
        if (ctx->pc != 0x511470u) { return; }
    }
    ctx->pc = 0x511470u;
label_511470:
    // 0x511470: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x511470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_511474:
    // 0x511474: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x511474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_511478:
    // 0x511478: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
label_51147c:
    if (ctx->pc == 0x51147Cu) {
        ctx->pc = 0x511480u;
        goto label_511480;
    }
    ctx->pc = 0x511478u;
    {
        const bool branch_taken_0x511478 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x511478) {
            ctx->pc = 0x5114D0u;
            goto label_5114d0;
        }
    }
    ctx->pc = 0x511480u;
label_511480:
    // 0x511480: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x511480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_511484:
    // 0x511484: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x511484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_511488:
    // 0x511488: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x511488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51148c:
    // 0x51148c: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x51148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_511490:
    // 0x511490: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x511490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_511494:
    // 0x511494: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_511498:
    if (ctx->pc == 0x511498u) {
        ctx->pc = 0x51149Cu;
        goto label_51149c;
    }
    ctx->pc = 0x511494u;
    {
        const bool branch_taken_0x511494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x511494) {
            ctx->pc = 0x5114C0u;
            goto label_5114c0;
        }
    }
    ctx->pc = 0x51149Cu;
label_51149c:
    // 0x51149c: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x51149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5114a0:
    // 0x5114a0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x5114a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_5114a4:
    // 0x5114a4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x5114a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5114a8:
    // 0x5114a8: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x5114a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_5114ac:
    // 0x5114ac: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x5114acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_5114b0:
    // 0x5114b0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x5114b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_5114b4:
    // 0x5114b4: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x5114b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_5114b8:
    // 0x5114b8: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x5114b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
label_5114bc:
    // 0x5114bc: 0x0  nop
    ctx->pc = 0x5114bcu;
    // NOP
label_5114c0:
    // 0x5114c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x5114c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_5114c4:
    // 0x5114c4: 0x1cc0fff0  bgtz        $a2, . + 4 + (-0x10 << 2)
label_5114c8:
    if (ctx->pc == 0x5114C8u) {
        ctx->pc = 0x5114C8u;
            // 0x5114c8: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->pc = 0x5114CCu;
        goto label_5114cc;
    }
    ctx->pc = 0x5114C4u;
    {
        const bool branch_taken_0x5114c4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x5114C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5114C4u;
            // 0x5114c8: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5114c4) {
            ctx->pc = 0x511488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511488;
        }
    }
    ctx->pc = 0x5114CCu;
label_5114cc:
    // 0x5114cc: 0x0  nop
    ctx->pc = 0x5114ccu;
    // NOP
label_5114d0:
    // 0x5114d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5114d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5114d4:
    // 0x5114d4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5114d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5114d8:
    // 0x5114d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5114d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5114dc:
    // 0x5114dc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x5114dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_5114e0:
    // 0x5114e0: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x5114e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_5114e4:
    // 0x5114e4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x5114e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5114e8:
    // 0x5114e8: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
label_5114ec:
    if (ctx->pc == 0x5114ECu) {
        ctx->pc = 0x5114ECu;
            // 0x5114ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x5114F0u;
        goto label_5114f0;
    }
    ctx->pc = 0x5114E8u;
    {
        const bool branch_taken_0x5114e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5114ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5114E8u;
            // 0x5114ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5114e8) {
            ctx->pc = 0x51139Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51139c;
        }
    }
    ctx->pc = 0x5114F0u;
label_5114f0:
    // 0x5114f0: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x5114f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_5114f4:
    // 0x5114f4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x5114f4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_5114f8:
    // 0x5114f8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_5114fc:
    if (ctx->pc == 0x5114FCu) {
        ctx->pc = 0x5114FCu;
            // 0x5114fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511500u;
        goto label_511500;
    }
    ctx->pc = 0x5114F8u;
    {
        const bool branch_taken_0x5114f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x5114FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5114F8u;
            // 0x5114fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5114f8) {
            ctx->pc = 0x511510u;
            goto label_511510;
        }
    }
    ctx->pc = 0x511500u;
label_511500:
    // 0x511500: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x511500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_511504:
    // 0x511504: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_511508:
    if (ctx->pc == 0x511508u) {
        ctx->pc = 0x51150Cu;
        goto label_51150c;
    }
    ctx->pc = 0x511504u;
    {
        const bool branch_taken_0x511504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x511504) {
            ctx->pc = 0x511510u;
            goto label_511510;
        }
    }
    ctx->pc = 0x51150Cu;
label_51150c:
    // 0x51150c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_511510:
    // 0x511510: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_511514:
    if (ctx->pc == 0x511514u) {
        ctx->pc = 0x511518u;
        goto label_511518;
    }
    ctx->pc = 0x511510u;
    {
        const bool branch_taken_0x511510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x511510) {
            ctx->pc = 0x51152Cu;
            goto label_51152c;
        }
    }
    ctx->pc = 0x511518u;
label_511518:
    // 0x511518: 0xc075eb4  jal         func_1D7AD0
label_51151c:
    if (ctx->pc == 0x51151Cu) {
        ctx->pc = 0x51151Cu;
            // 0x51151c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511520u;
        goto label_511520;
    }
    ctx->pc = 0x511518u;
    SET_GPR_U32(ctx, 31, 0x511520u);
    ctx->pc = 0x51151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511518u;
            // 0x51151c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511520u; }
        if (ctx->pc != 0x511520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511520u; }
        if (ctx->pc != 0x511520u) { return; }
    }
    ctx->pc = 0x511520u;
label_511520:
    // 0x511520: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_511524:
    if (ctx->pc == 0x511524u) {
        ctx->pc = 0x511528u;
        goto label_511528;
    }
    ctx->pc = 0x511520u;
    {
        const bool branch_taken_0x511520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x511520) {
            ctx->pc = 0x51152Cu;
            goto label_51152c;
        }
    }
    ctx->pc = 0x511528u;
label_511528:
    // 0x511528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x511528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51152c:
    // 0x51152c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_511530:
    if (ctx->pc == 0x511530u) {
        ctx->pc = 0x511534u;
        goto label_511534;
    }
    ctx->pc = 0x51152Cu;
    {
        const bool branch_taken_0x51152c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51152c) {
            ctx->pc = 0x511658u;
            goto label_511658;
        }
    }
    ctx->pc = 0x511534u;
label_511534:
    // 0x511534: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x511534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_511538:
    // 0x511538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x511538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51153c:
    // 0x51153c: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x51153cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_511540:
    // 0x511540: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x511540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_511544:
    // 0x511544: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x511544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_511548:
    // 0x511548: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_51154c:
    if (ctx->pc == 0x51154Cu) {
        ctx->pc = 0x511550u;
        goto label_511550;
    }
    ctx->pc = 0x511548u;
    {
        const bool branch_taken_0x511548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x511548) {
            ctx->pc = 0x511578u;
            goto label_511578;
        }
    }
    ctx->pc = 0x511550u;
label_511550:
    // 0x511550: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x511550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_511554:
    // 0x511554: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_511558:
    if (ctx->pc == 0x511558u) {
        ctx->pc = 0x51155Cu;
        goto label_51155c;
    }
    ctx->pc = 0x511554u;
    {
        const bool branch_taken_0x511554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511554) {
            ctx->pc = 0x511630u;
            goto label_511630;
        }
    }
    ctx->pc = 0x51155Cu;
label_51155c:
    // 0x51155c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51155cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511560:
    // 0x511560: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511564:
    // 0x511564: 0x320f809  jalr        $t9
label_511568:
    if (ctx->pc == 0x511568u) {
        ctx->pc = 0x511568u;
            // 0x511568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51156Cu;
        goto label_51156c;
    }
    ctx->pc = 0x511564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51156Cu);
        ctx->pc = 0x511568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511564u;
            // 0x511568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51156Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51156Cu; }
            if (ctx->pc != 0x51156Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51156Cu;
label_51156c:
    // 0x51156c: 0x10000030  b           . + 4 + (0x30 << 2)
label_511570:
    if (ctx->pc == 0x511570u) {
        ctx->pc = 0x511570u;
            // 0x511570: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x511574u;
        goto label_511574;
    }
    ctx->pc = 0x51156Cu;
    {
        const bool branch_taken_0x51156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51156Cu;
            // 0x511570: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51156c) {
            ctx->pc = 0x511630u;
            goto label_511630;
        }
    }
    ctx->pc = 0x511574u;
label_511574:
    // 0x511574: 0x0  nop
    ctx->pc = 0x511574u;
    // NOP
label_511578:
    // 0x511578: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x511578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_51157c:
    // 0x51157c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_511580:
    if (ctx->pc == 0x511580u) {
        ctx->pc = 0x511584u;
        goto label_511584;
    }
    ctx->pc = 0x51157Cu;
    {
        const bool branch_taken_0x51157c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51157c) {
            ctx->pc = 0x511630u;
            goto label_511630;
        }
    }
    ctx->pc = 0x511584u;
label_511584:
    // 0x511584: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x511584u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_511588:
    // 0x511588: 0xc040180  jal         func_100600
label_51158c:
    if (ctx->pc == 0x51158Cu) {
        ctx->pc = 0x51158Cu;
            // 0x51158c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x511590u;
        goto label_511590;
    }
    ctx->pc = 0x511588u;
    SET_GPR_U32(ctx, 31, 0x511590u);
    ctx->pc = 0x51158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511588u;
            // 0x51158c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511590u; }
        if (ctx->pc != 0x511590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511590u; }
        if (ctx->pc != 0x511590u) { return; }
    }
    ctx->pc = 0x511590u;
label_511590:
    // 0x511590: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_511594:
    if (ctx->pc == 0x511594u) {
        ctx->pc = 0x511594u;
            // 0x511594: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511598u;
        goto label_511598;
    }
    ctx->pc = 0x511590u;
    {
        const bool branch_taken_0x511590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x511594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511590u;
            // 0x511594: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511590) {
            ctx->pc = 0x511600u;
            goto label_511600;
        }
    }
    ctx->pc = 0x511598u;
label_511598:
    // 0x511598: 0x8ec30d6c  lw          $v1, 0xD6C($s6)
    ctx->pc = 0x511598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3436)));
label_51159c:
    // 0x51159c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x51159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5115a0:
    // 0x5115a0: 0x829711aa  lb          $s7, 0x11AA($s4)
    ctx->pc = 0x5115a0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4522)));
label_5115a4:
    // 0x5115a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5115a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5115a8:
    // 0x5115a8: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x5115a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_5115ac:
    // 0x5115ac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x5115acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5115b0:
    // 0x5115b0: 0x907e0010  lbu         $fp, 0x10($v1)
    ctx->pc = 0x5115b0u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_5115b4:
    // 0x5115b4: 0xc10ca68  jal         func_4329A0
label_5115b8:
    if (ctx->pc == 0x5115B8u) {
        ctx->pc = 0x5115B8u;
            // 0x5115b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5115BCu;
        goto label_5115bc;
    }
    ctx->pc = 0x5115B4u;
    SET_GPR_U32(ctx, 31, 0x5115BCu);
    ctx->pc = 0x5115B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5115B4u;
            // 0x5115b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5115BCu; }
        if (ctx->pc != 0x5115BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5115BCu; }
        if (ctx->pc != 0x5115BCu) { return; }
    }
    ctx->pc = 0x5115BCu;
label_5115bc:
    // 0x5115bc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x5115bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_5115c0:
    // 0x5115c0: 0x171e3c  dsll32      $v1, $s7, 24
    ctx->pc = 0x5115c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 24));
label_5115c4:
    // 0x5115c4: 0x24a5ceb0  addiu       $a1, $a1, -0x3150
    ctx->pc = 0x5115c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
label_5115c8:
    // 0x5115c8: 0x26c402c0  addiu       $a0, $s6, 0x2C0
    ctx->pc = 0x5115c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 704));
label_5115cc:
    // 0x5115cc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x5115ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_5115d0:
    // 0x5115d0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x5115d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_5115d4:
    // 0x5115d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x5115d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_5115d8:
    // 0x5115d8: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x5115d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_5115dc:
    // 0x5115dc: 0x24a55420  addiu       $a1, $a1, 0x5420
    ctx->pc = 0x5115dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21536));
label_5115e0:
    // 0x5115e0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x5115e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_5115e4:
    // 0x5115e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x5115e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_5115e8:
    // 0x5115e8: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x5115e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_5115ec:
    // 0x5115ec: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x5115ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_5115f0:
    // 0x5115f0: 0xae440054  sw          $a0, 0x54($s2)
    ctx->pc = 0x5115f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
label_5115f4:
    // 0x5115f4: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x5115f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
label_5115f8:
    // 0x5115f8: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x5115f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_5115fc:
    // 0x5115fc: 0x0  nop
    ctx->pc = 0x5115fcu;
    // NOP
label_511600:
    // 0x511600: 0xaeb20010  sw          $s2, 0x10($s5)
    ctx->pc = 0x511600u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 18));
label_511604:
    // 0x511604: 0x8e920d60  lw          $s2, 0xD60($s4)
    ctx->pc = 0x511604u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_511608:
    // 0x511608: 0x24051aa9  addiu       $a1, $zero, 0x1AA9
    ctx->pc = 0x511608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6825));
label_51160c:
    // 0x51160c: 0x8e590030  lw          $t9, 0x30($s2)
    ctx->pc = 0x51160cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_511610:
    // 0x511610: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x511610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_511614:
    // 0x511614: 0x320f809  jalr        $t9
label_511618:
    if (ctx->pc == 0x511618u) {
        ctx->pc = 0x511618u;
            // 0x511618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51161Cu;
        goto label_51161c;
    }
    ctx->pc = 0x511614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51161Cu);
        ctx->pc = 0x511618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511614u;
            // 0x511618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51161Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51161Cu; }
            if (ctx->pc != 0x51161Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51161Cu;
label_51161c:
    // 0x51161c: 0x8e590030  lw          $t9, 0x30($s2)
    ctx->pc = 0x51161cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_511620:
    // 0x511620: 0x8e8500ac  lw          $a1, 0xAC($s4)
    ctx->pc = 0x511620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_511624:
    // 0x511624: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x511624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_511628:
    // 0x511628: 0x320f809  jalr        $t9
label_51162c:
    if (ctx->pc == 0x51162Cu) {
        ctx->pc = 0x51162Cu;
            // 0x51162c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511630u;
        goto label_511630;
    }
    ctx->pc = 0x511628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511630u);
        ctx->pc = 0x51162Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511628u;
            // 0x51162c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511630u; }
            if (ctx->pc != 0x511630u) { return; }
        }
        }
    }
    ctx->pc = 0x511630u;
label_511630:
    // 0x511630: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x511630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_511634:
    // 0x511634: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x511634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_511638:
    // 0x511638: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x511638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_51163c:
    // 0x51163c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x51163cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_511640:
    // 0x511640: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x511640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_511644:
    // 0x511644: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x511644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_511648:
    // 0x511648: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x511648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_51164c:
    // 0x51164c: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
label_511650:
    if (ctx->pc == 0x511650u) {
        ctx->pc = 0x511650u;
            // 0x511650: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x511654u;
        goto label_511654;
    }
    ctx->pc = 0x51164Cu;
    {
        const bool branch_taken_0x51164c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x511650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51164Cu;
            // 0x511650: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51164c) {
            ctx->pc = 0x511544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511544;
        }
    }
    ctx->pc = 0x511654u;
label_511654:
    // 0x511654: 0x0  nop
    ctx->pc = 0x511654u;
    // NOP
label_511658:
    // 0x511658: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x511658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_51165c:
    // 0x51165c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x51165cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_511660:
    // 0x511660: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x511660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_511664:
    // 0x511664: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x511664u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_511668:
    // 0x511668: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x511668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_51166c:
    // 0x51166c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51166cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_511670:
    // 0x511670: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x511670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_511674:
    // 0x511674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x511674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_511678:
    // 0x511678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x511678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51167c:
    // 0x51167c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51167cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_511680:
    // 0x511680: 0x3e00008  jr          $ra
label_511684:
    if (ctx->pc == 0x511684u) {
        ctx->pc = 0x511684u;
            // 0x511684: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x511688u;
        goto label_511688;
    }
    ctx->pc = 0x511680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511680u;
            // 0x511684: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x511688u;
label_511688:
    // 0x511688: 0x0  nop
    ctx->pc = 0x511688u;
    // NOP
label_51168c:
    // 0x51168c: 0x0  nop
    ctx->pc = 0x51168cu;
    // NOP
label_511690:
    // 0x511690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x511690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_511694:
    // 0x511694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x511694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_511698:
    // 0x511698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x511698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51169c:
    // 0x51169c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5116a0:
    // 0x5116a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5116a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5116a4:
    // 0x5116a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_5116a8:
    if (ctx->pc == 0x5116A8u) {
        ctx->pc = 0x5116A8u;
            // 0x5116a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5116ACu;
        goto label_5116ac;
    }
    ctx->pc = 0x5116A4u;
    {
        const bool branch_taken_0x5116a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5116A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5116A4u;
            // 0x5116a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5116a4) {
            ctx->pc = 0x5116E8u;
            goto label_5116e8;
        }
    }
    ctx->pc = 0x5116ACu;
label_5116ac:
    // 0x5116ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5116acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5116b0:
    // 0x5116b0: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x5116b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
label_5116b4:
    // 0x5116b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_5116b8:
    if (ctx->pc == 0x5116B8u) {
        ctx->pc = 0x5116B8u;
            // 0x5116b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5116BCu;
        goto label_5116bc;
    }
    ctx->pc = 0x5116B4u;
    {
        const bool branch_taken_0x5116b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5116B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5116B4u;
            // 0x5116b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5116b4) {
            ctx->pc = 0x5116D0u;
            goto label_5116d0;
        }
    }
    ctx->pc = 0x5116BCu;
label_5116bc:
    // 0x5116bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5116bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5116c0:
    // 0x5116c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5116c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5116c4:
    // 0x5116c4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x5116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_5116c8:
    // 0x5116c8: 0xc057a68  jal         func_15E9A0
label_5116cc:
    if (ctx->pc == 0x5116CCu) {
        ctx->pc = 0x5116CCu;
            // 0x5116cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5116D0u;
        goto label_5116d0;
    }
    ctx->pc = 0x5116C8u;
    SET_GPR_U32(ctx, 31, 0x5116D0u);
    ctx->pc = 0x5116CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5116C8u;
            // 0x5116cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5116D0u; }
        if (ctx->pc != 0x5116D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5116D0u; }
        if (ctx->pc != 0x5116D0u) { return; }
    }
    ctx->pc = 0x5116D0u;
label_5116d0:
    // 0x5116d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5116d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5116d4:
    // 0x5116d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5116d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5116d8:
    // 0x5116d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5116dc:
    if (ctx->pc == 0x5116DCu) {
        ctx->pc = 0x5116DCu;
            // 0x5116dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5116E0u;
        goto label_5116e0;
    }
    ctx->pc = 0x5116D8u;
    {
        const bool branch_taken_0x5116d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5116d8) {
            ctx->pc = 0x5116DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5116D8u;
            // 0x5116dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5116ECu;
            goto label_5116ec;
        }
    }
    ctx->pc = 0x5116E0u;
label_5116e0:
    // 0x5116e0: 0xc0400a8  jal         func_1002A0
label_5116e4:
    if (ctx->pc == 0x5116E4u) {
        ctx->pc = 0x5116E4u;
            // 0x5116e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5116E8u;
        goto label_5116e8;
    }
    ctx->pc = 0x5116E0u;
    SET_GPR_U32(ctx, 31, 0x5116E8u);
    ctx->pc = 0x5116E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5116E0u;
            // 0x5116e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5116E8u; }
        if (ctx->pc != 0x5116E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5116E8u; }
        if (ctx->pc != 0x5116E8u) { return; }
    }
    ctx->pc = 0x5116E8u;
label_5116e8:
    // 0x5116e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5116e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5116ec:
    // 0x5116ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5116ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5116f0:
    // 0x5116f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5116f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5116f4:
    // 0x5116f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5116f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5116f8:
    // 0x5116f8: 0x3e00008  jr          $ra
label_5116fc:
    if (ctx->pc == 0x5116FCu) {
        ctx->pc = 0x5116FCu;
            // 0x5116fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x511700u;
        goto label_fallthrough_0x5116f8;
    }
    ctx->pc = 0x5116F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5116FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5116F8u;
            // 0x5116fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5116f8:
    ctx->pc = 0x511700u;
}
