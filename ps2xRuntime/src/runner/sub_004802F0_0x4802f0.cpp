#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004802F0
// Address: 0x4802f0 - 0x480680
void sub_004802F0_0x4802f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004802F0_0x4802f0");
#endif

    switch (ctx->pc) {
        case 0x4802f0u: goto label_4802f0;
        case 0x4802f4u: goto label_4802f4;
        case 0x4802f8u: goto label_4802f8;
        case 0x4802fcu: goto label_4802fc;
        case 0x480300u: goto label_480300;
        case 0x480304u: goto label_480304;
        case 0x480308u: goto label_480308;
        case 0x48030cu: goto label_48030c;
        case 0x480310u: goto label_480310;
        case 0x480314u: goto label_480314;
        case 0x480318u: goto label_480318;
        case 0x48031cu: goto label_48031c;
        case 0x480320u: goto label_480320;
        case 0x480324u: goto label_480324;
        case 0x480328u: goto label_480328;
        case 0x48032cu: goto label_48032c;
        case 0x480330u: goto label_480330;
        case 0x480334u: goto label_480334;
        case 0x480338u: goto label_480338;
        case 0x48033cu: goto label_48033c;
        case 0x480340u: goto label_480340;
        case 0x480344u: goto label_480344;
        case 0x480348u: goto label_480348;
        case 0x48034cu: goto label_48034c;
        case 0x480350u: goto label_480350;
        case 0x480354u: goto label_480354;
        case 0x480358u: goto label_480358;
        case 0x48035cu: goto label_48035c;
        case 0x480360u: goto label_480360;
        case 0x480364u: goto label_480364;
        case 0x480368u: goto label_480368;
        case 0x48036cu: goto label_48036c;
        case 0x480370u: goto label_480370;
        case 0x480374u: goto label_480374;
        case 0x480378u: goto label_480378;
        case 0x48037cu: goto label_48037c;
        case 0x480380u: goto label_480380;
        case 0x480384u: goto label_480384;
        case 0x480388u: goto label_480388;
        case 0x48038cu: goto label_48038c;
        case 0x480390u: goto label_480390;
        case 0x480394u: goto label_480394;
        case 0x480398u: goto label_480398;
        case 0x48039cu: goto label_48039c;
        case 0x4803a0u: goto label_4803a0;
        case 0x4803a4u: goto label_4803a4;
        case 0x4803a8u: goto label_4803a8;
        case 0x4803acu: goto label_4803ac;
        case 0x4803b0u: goto label_4803b0;
        case 0x4803b4u: goto label_4803b4;
        case 0x4803b8u: goto label_4803b8;
        case 0x4803bcu: goto label_4803bc;
        case 0x4803c0u: goto label_4803c0;
        case 0x4803c4u: goto label_4803c4;
        case 0x4803c8u: goto label_4803c8;
        case 0x4803ccu: goto label_4803cc;
        case 0x4803d0u: goto label_4803d0;
        case 0x4803d4u: goto label_4803d4;
        case 0x4803d8u: goto label_4803d8;
        case 0x4803dcu: goto label_4803dc;
        case 0x4803e0u: goto label_4803e0;
        case 0x4803e4u: goto label_4803e4;
        case 0x4803e8u: goto label_4803e8;
        case 0x4803ecu: goto label_4803ec;
        case 0x4803f0u: goto label_4803f0;
        case 0x4803f4u: goto label_4803f4;
        case 0x4803f8u: goto label_4803f8;
        case 0x4803fcu: goto label_4803fc;
        case 0x480400u: goto label_480400;
        case 0x480404u: goto label_480404;
        case 0x480408u: goto label_480408;
        case 0x48040cu: goto label_48040c;
        case 0x480410u: goto label_480410;
        case 0x480414u: goto label_480414;
        case 0x480418u: goto label_480418;
        case 0x48041cu: goto label_48041c;
        case 0x480420u: goto label_480420;
        case 0x480424u: goto label_480424;
        case 0x480428u: goto label_480428;
        case 0x48042cu: goto label_48042c;
        case 0x480430u: goto label_480430;
        case 0x480434u: goto label_480434;
        case 0x480438u: goto label_480438;
        case 0x48043cu: goto label_48043c;
        case 0x480440u: goto label_480440;
        case 0x480444u: goto label_480444;
        case 0x480448u: goto label_480448;
        case 0x48044cu: goto label_48044c;
        case 0x480450u: goto label_480450;
        case 0x480454u: goto label_480454;
        case 0x480458u: goto label_480458;
        case 0x48045cu: goto label_48045c;
        case 0x480460u: goto label_480460;
        case 0x480464u: goto label_480464;
        case 0x480468u: goto label_480468;
        case 0x48046cu: goto label_48046c;
        case 0x480470u: goto label_480470;
        case 0x480474u: goto label_480474;
        case 0x480478u: goto label_480478;
        case 0x48047cu: goto label_48047c;
        case 0x480480u: goto label_480480;
        case 0x480484u: goto label_480484;
        case 0x480488u: goto label_480488;
        case 0x48048cu: goto label_48048c;
        case 0x480490u: goto label_480490;
        case 0x480494u: goto label_480494;
        case 0x480498u: goto label_480498;
        case 0x48049cu: goto label_48049c;
        case 0x4804a0u: goto label_4804a0;
        case 0x4804a4u: goto label_4804a4;
        case 0x4804a8u: goto label_4804a8;
        case 0x4804acu: goto label_4804ac;
        case 0x4804b0u: goto label_4804b0;
        case 0x4804b4u: goto label_4804b4;
        case 0x4804b8u: goto label_4804b8;
        case 0x4804bcu: goto label_4804bc;
        case 0x4804c0u: goto label_4804c0;
        case 0x4804c4u: goto label_4804c4;
        case 0x4804c8u: goto label_4804c8;
        case 0x4804ccu: goto label_4804cc;
        case 0x4804d0u: goto label_4804d0;
        case 0x4804d4u: goto label_4804d4;
        case 0x4804d8u: goto label_4804d8;
        case 0x4804dcu: goto label_4804dc;
        case 0x4804e0u: goto label_4804e0;
        case 0x4804e4u: goto label_4804e4;
        case 0x4804e8u: goto label_4804e8;
        case 0x4804ecu: goto label_4804ec;
        case 0x4804f0u: goto label_4804f0;
        case 0x4804f4u: goto label_4804f4;
        case 0x4804f8u: goto label_4804f8;
        case 0x4804fcu: goto label_4804fc;
        case 0x480500u: goto label_480500;
        case 0x480504u: goto label_480504;
        case 0x480508u: goto label_480508;
        case 0x48050cu: goto label_48050c;
        case 0x480510u: goto label_480510;
        case 0x480514u: goto label_480514;
        case 0x480518u: goto label_480518;
        case 0x48051cu: goto label_48051c;
        case 0x480520u: goto label_480520;
        case 0x480524u: goto label_480524;
        case 0x480528u: goto label_480528;
        case 0x48052cu: goto label_48052c;
        case 0x480530u: goto label_480530;
        case 0x480534u: goto label_480534;
        case 0x480538u: goto label_480538;
        case 0x48053cu: goto label_48053c;
        case 0x480540u: goto label_480540;
        case 0x480544u: goto label_480544;
        case 0x480548u: goto label_480548;
        case 0x48054cu: goto label_48054c;
        case 0x480550u: goto label_480550;
        case 0x480554u: goto label_480554;
        case 0x480558u: goto label_480558;
        case 0x48055cu: goto label_48055c;
        case 0x480560u: goto label_480560;
        case 0x480564u: goto label_480564;
        case 0x480568u: goto label_480568;
        case 0x48056cu: goto label_48056c;
        case 0x480570u: goto label_480570;
        case 0x480574u: goto label_480574;
        case 0x480578u: goto label_480578;
        case 0x48057cu: goto label_48057c;
        case 0x480580u: goto label_480580;
        case 0x480584u: goto label_480584;
        case 0x480588u: goto label_480588;
        case 0x48058cu: goto label_48058c;
        case 0x480590u: goto label_480590;
        case 0x480594u: goto label_480594;
        case 0x480598u: goto label_480598;
        case 0x48059cu: goto label_48059c;
        case 0x4805a0u: goto label_4805a0;
        case 0x4805a4u: goto label_4805a4;
        case 0x4805a8u: goto label_4805a8;
        case 0x4805acu: goto label_4805ac;
        case 0x4805b0u: goto label_4805b0;
        case 0x4805b4u: goto label_4805b4;
        case 0x4805b8u: goto label_4805b8;
        case 0x4805bcu: goto label_4805bc;
        case 0x4805c0u: goto label_4805c0;
        case 0x4805c4u: goto label_4805c4;
        case 0x4805c8u: goto label_4805c8;
        case 0x4805ccu: goto label_4805cc;
        case 0x4805d0u: goto label_4805d0;
        case 0x4805d4u: goto label_4805d4;
        case 0x4805d8u: goto label_4805d8;
        case 0x4805dcu: goto label_4805dc;
        case 0x4805e0u: goto label_4805e0;
        case 0x4805e4u: goto label_4805e4;
        case 0x4805e8u: goto label_4805e8;
        case 0x4805ecu: goto label_4805ec;
        case 0x4805f0u: goto label_4805f0;
        case 0x4805f4u: goto label_4805f4;
        case 0x4805f8u: goto label_4805f8;
        case 0x4805fcu: goto label_4805fc;
        case 0x480600u: goto label_480600;
        case 0x480604u: goto label_480604;
        case 0x480608u: goto label_480608;
        case 0x48060cu: goto label_48060c;
        case 0x480610u: goto label_480610;
        case 0x480614u: goto label_480614;
        case 0x480618u: goto label_480618;
        case 0x48061cu: goto label_48061c;
        case 0x480620u: goto label_480620;
        case 0x480624u: goto label_480624;
        case 0x480628u: goto label_480628;
        case 0x48062cu: goto label_48062c;
        case 0x480630u: goto label_480630;
        case 0x480634u: goto label_480634;
        case 0x480638u: goto label_480638;
        case 0x48063cu: goto label_48063c;
        case 0x480640u: goto label_480640;
        case 0x480644u: goto label_480644;
        case 0x480648u: goto label_480648;
        case 0x48064cu: goto label_48064c;
        case 0x480650u: goto label_480650;
        case 0x480654u: goto label_480654;
        case 0x480658u: goto label_480658;
        case 0x48065cu: goto label_48065c;
        case 0x480660u: goto label_480660;
        case 0x480664u: goto label_480664;
        case 0x480668u: goto label_480668;
        case 0x48066cu: goto label_48066c;
        case 0x480670u: goto label_480670;
        case 0x480674u: goto label_480674;
        case 0x480678u: goto label_480678;
        case 0x48067cu: goto label_48067c;
        default: break;
    }

    ctx->pc = 0x4802f0u;

label_4802f0:
    // 0x4802f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4802f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4802f4:
    // 0x4802f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4802f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4802f8:
    // 0x4802f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4802f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4802fc:
    // 0x4802fc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4802fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_480300:
    // 0x480300: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x480300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_480304:
    // 0x480304: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x480304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_480308:
    // 0x480308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x480308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48030c:
    // 0x48030c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_480310:
    // 0x480310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x480310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480314:
    // 0x480314: 0xc0aeaf4  jal         func_2BABD0
label_480318:
    if (ctx->pc == 0x480318u) {
        ctx->pc = 0x480318u;
            // 0x480318: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x48031Cu;
        goto label_48031c;
    }
    ctx->pc = 0x480314u;
    SET_GPR_U32(ctx, 31, 0x48031Cu);
    ctx->pc = 0x480318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480314u;
            // 0x480318: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48031Cu; }
        if (ctx->pc != 0x48031Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48031Cu; }
        if (ctx->pc != 0x48031Cu) { return; }
    }
    ctx->pc = 0x48031Cu;
label_48031c:
    // 0x48031c: 0xc120228  jal         func_4808A0
label_480320:
    if (ctx->pc == 0x480320u) {
        ctx->pc = 0x480320u;
            // 0x480320: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x480324u;
        goto label_480324;
    }
    ctx->pc = 0x48031Cu;
    SET_GPR_U32(ctx, 31, 0x480324u);
    ctx->pc = 0x480320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48031Cu;
            // 0x480320: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4808A0u;
    if (runtime->hasFunction(0x4808A0u)) {
        auto targetFn = runtime->lookupFunction(0x4808A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480324u; }
        if (ctx->pc != 0x480324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004808A0_0x4808a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480324u; }
        if (ctx->pc != 0x480324u) { return; }
    }
    ctx->pc = 0x480324u;
label_480324:
    // 0x480324: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x480324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_480328:
    // 0x480328: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x480328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48032c:
    // 0x48032c: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x48032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_480330:
    // 0x480330: 0x2442ef48  addiu       $v0, $v0, -0x10B8
    ctx->pc = 0x480330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963016));
label_480334:
    // 0x480334: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x480334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_480338:
    // 0x480338: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x480338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_48033c:
    // 0x48033c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x48033cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_480340:
    // 0x480340: 0xc120220  jal         func_480880
label_480344:
    if (ctx->pc == 0x480344u) {
        ctx->pc = 0x480344u;
            // 0x480344: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x480348u;
        goto label_480348;
    }
    ctx->pc = 0x480340u;
    SET_GPR_U32(ctx, 31, 0x480348u);
    ctx->pc = 0x480344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480340u;
            // 0x480344: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x480880u;
    if (runtime->hasFunction(0x480880u)) {
        auto targetFn = runtime->lookupFunction(0x480880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480348u; }
        if (ctx->pc != 0x480348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00480880_0x480880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480348u; }
        if (ctx->pc != 0x480348u) { return; }
    }
    ctx->pc = 0x480348u;
label_480348:
    // 0x480348: 0xc120220  jal         func_480880
label_48034c:
    if (ctx->pc == 0x48034Cu) {
        ctx->pc = 0x48034Cu;
            // 0x48034c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x480350u;
        goto label_480350;
    }
    ctx->pc = 0x480348u;
    SET_GPR_U32(ctx, 31, 0x480350u);
    ctx->pc = 0x48034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480348u;
            // 0x48034c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x480880u;
    if (runtime->hasFunction(0x480880u)) {
        auto targetFn = runtime->lookupFunction(0x480880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480350u; }
        if (ctx->pc != 0x480350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00480880_0x480880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480350u; }
        if (ctx->pc != 0x480350u) { return; }
    }
    ctx->pc = 0x480350u;
label_480350:
    // 0x480350: 0xc120218  jal         func_480860
label_480354:
    if (ctx->pc == 0x480354u) {
        ctx->pc = 0x480354u;
            // 0x480354: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x480358u;
        goto label_480358;
    }
    ctx->pc = 0x480350u;
    SET_GPR_U32(ctx, 31, 0x480358u);
    ctx->pc = 0x480354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480350u;
            // 0x480354: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x480860u;
    if (runtime->hasFunction(0x480860u)) {
        auto targetFn = runtime->lookupFunction(0x480860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480358u; }
        if (ctx->pc != 0x480358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00480860_0x480860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480358u; }
        if (ctx->pc != 0x480358u) { return; }
    }
    ctx->pc = 0x480358u;
label_480358:
    // 0x480358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48035c:
    // 0x48035c: 0xc0aeac0  jal         func_2BAB00
label_480360:
    if (ctx->pc == 0x480360u) {
        ctx->pc = 0x480360u;
            // 0x480360: 0xae200098  sw          $zero, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x480364u;
        goto label_480364;
    }
    ctx->pc = 0x48035Cu;
    SET_GPR_U32(ctx, 31, 0x480364u);
    ctx->pc = 0x480360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48035Cu;
            // 0x480360: 0xae200098  sw          $zero, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480364u; }
        if (ctx->pc != 0x480364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480364u; }
        if (ctx->pc != 0x480364u) { return; }
    }
    ctx->pc = 0x480364u;
label_480364:
    // 0x480364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480368:
    // 0x480368: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_48036c:
    if (ctx->pc == 0x48036Cu) {
        ctx->pc = 0x480370u;
        goto label_480370;
    }
    ctx->pc = 0x480368u;
    {
        const bool branch_taken_0x480368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x480368) {
            ctx->pc = 0x4803F0u;
            goto label_4803f0;
        }
    }
    ctx->pc = 0x480370u;
label_480370:
    // 0x480370: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x480370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_480374:
    // 0x480374: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x480374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_480378:
    // 0x480378: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x480378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48037c:
    // 0x48037c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_480380:
    // 0x480380: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x480380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_480384:
    // 0x480384: 0xc040138  jal         func_1004E0
label_480388:
    if (ctx->pc == 0x480388u) {
        ctx->pc = 0x480388u;
            // 0x480388: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x48038Cu;
        goto label_48038c;
    }
    ctx->pc = 0x480384u;
    SET_GPR_U32(ctx, 31, 0x48038Cu);
    ctx->pc = 0x480388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480384u;
            // 0x480388: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48038Cu; }
        if (ctx->pc != 0x48038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48038Cu; }
        if (ctx->pc != 0x48038Cu) { return; }
    }
    ctx->pc = 0x48038Cu;
label_48038c:
    // 0x48038c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x48038cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_480390:
    // 0x480390: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x480390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_480394:
    // 0x480394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x480394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480398:
    // 0x480398: 0x24a506b0  addiu       $a1, $a1, 0x6B0
    ctx->pc = 0x480398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1712));
label_48039c:
    // 0x48039c: 0x24c6f210  addiu       $a2, $a2, -0xDF0
    ctx->pc = 0x48039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963728));
label_4803a0:
    // 0x4803a0: 0x24070320  addiu       $a3, $zero, 0x320
    ctx->pc = 0x4803a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_4803a4:
    // 0x4803a4: 0xc040840  jal         func_102100
label_4803a8:
    if (ctx->pc == 0x4803A8u) {
        ctx->pc = 0x4803A8u;
            // 0x4803a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4803ACu;
        goto label_4803ac;
    }
    ctx->pc = 0x4803A4u;
    SET_GPR_U32(ctx, 31, 0x4803ACu);
    ctx->pc = 0x4803A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4803A4u;
            // 0x4803a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803ACu; }
        if (ctx->pc != 0x4803ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803ACu; }
        if (ctx->pc != 0x4803ACu) { return; }
    }
    ctx->pc = 0x4803ACu;
label_4803ac:
    // 0x4803ac: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x4803acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_4803b0:
    // 0x4803b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4803b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4803b4:
    // 0x4803b4: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4803b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4803b8:
    // 0x4803b8: 0xc1201a8  jal         func_4806A0
label_4803bc:
    if (ctx->pc == 0x4803BCu) {
        ctx->pc = 0x4803BCu;
            // 0x4803bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4803C0u;
        goto label_4803c0;
    }
    ctx->pc = 0x4803B8u;
    SET_GPR_U32(ctx, 31, 0x4803C0u);
    ctx->pc = 0x4803BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4803B8u;
            // 0x4803bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4806A0u;
    if (runtime->hasFunction(0x4806A0u)) {
        auto targetFn = runtime->lookupFunction(0x4806A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803C0u; }
        if (ctx->pc != 0x4803C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004806A0_0x4806a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803C0u; }
        if (ctx->pc != 0x4803C0u) { return; }
    }
    ctx->pc = 0x4803C0u;
label_4803c0:
    // 0x4803c0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4803c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4803c4:
    // 0x4803c4: 0xc1201a8  jal         func_4806A0
label_4803c8:
    if (ctx->pc == 0x4803C8u) {
        ctx->pc = 0x4803C8u;
            // 0x4803c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4803CCu;
        goto label_4803cc;
    }
    ctx->pc = 0x4803C4u;
    SET_GPR_U32(ctx, 31, 0x4803CCu);
    ctx->pc = 0x4803C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4803C4u;
            // 0x4803c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4806A0u;
    if (runtime->hasFunction(0x4806A0u)) {
        auto targetFn = runtime->lookupFunction(0x4806A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803CCu; }
        if (ctx->pc != 0x4803CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004806A0_0x4806a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803CCu; }
        if (ctx->pc != 0x4803CCu) { return; }
    }
    ctx->pc = 0x4803CCu;
label_4803cc:
    // 0x4803cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4803ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4803d0:
    // 0x4803d0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4803d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4803d4:
    // 0x4803d4: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x4803d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_4803d8:
    // 0x4803d8: 0xc1201a0  jal         func_480680
label_4803dc:
    if (ctx->pc == 0x4803DCu) {
        ctx->pc = 0x4803DCu;
            // 0x4803dc: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x4803E0u;
        goto label_4803e0;
    }
    ctx->pc = 0x4803D8u;
    SET_GPR_U32(ctx, 31, 0x4803E0u);
    ctx->pc = 0x4803DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4803D8u;
            // 0x4803dc: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x480680u;
    if (runtime->hasFunction(0x480680u)) {
        auto targetFn = runtime->lookupFunction(0x480680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803E0u; }
        if (ctx->pc != 0x4803E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00480680_0x480680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4803E0u; }
        if (ctx->pc != 0x4803E0u) { return; }
    }
    ctx->pc = 0x4803E0u;
label_4803e0:
    // 0x4803e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4803e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4803e4:
    // 0x4803e4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4803e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4803e8:
    // 0x4803e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4803ec:
    if (ctx->pc == 0x4803ECu) {
        ctx->pc = 0x4803ECu;
            // 0x4803ec: 0x26730320  addiu       $s3, $s3, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
        ctx->pc = 0x4803F0u;
        goto label_4803f0;
    }
    ctx->pc = 0x4803E8u;
    {
        const bool branch_taken_0x4803e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4803ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4803E8u;
            // 0x4803ec: 0x26730320  addiu       $s3, $s3, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4803e8) {
            ctx->pc = 0x4803D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4803d0;
        }
    }
    ctx->pc = 0x4803F0u;
label_4803f0:
    // 0x4803f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4803f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4803f4:
    // 0x4803f4: 0x2442eeb0  addiu       $v0, $v0, -0x1150
    ctx->pc = 0x4803f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962864));
label_4803f8:
    // 0x4803f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4803f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_4803fc:
    // 0x4803fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4803fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_480400:
    // 0x480400: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x480400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_480404:
    // 0x480404: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x480404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_480408:
    // 0x480408: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x480408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_48040c:
    // 0x48040c: 0x2442eee8  addiu       $v0, $v0, -0x1118
    ctx->pc = 0x48040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962920));
label_480410:
    // 0x480410: 0x24a50630  addiu       $a1, $a1, 0x630
    ctx->pc = 0x480410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
label_480414:
    // 0x480414: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x480414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_480418:
    // 0x480418: 0x24c6f3a0  addiu       $a2, $a2, -0xC60
    ctx->pc = 0x480418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964128));
label_48041c:
    // 0x48041c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x48041cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_480420:
    // 0x480420: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x480420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_480424:
    // 0x480424: 0xc040804  jal         func_102010
label_480428:
    if (ctx->pc == 0x480428u) {
        ctx->pc = 0x480428u;
            // 0x480428: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x48042Cu;
        goto label_48042c;
    }
    ctx->pc = 0x480424u;
    SET_GPR_U32(ctx, 31, 0x48042Cu);
    ctx->pc = 0x480428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480424u;
            // 0x480428: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48042Cu; }
        if (ctx->pc != 0x48042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48042Cu; }
        if (ctx->pc != 0x48042Cu) { return; }
    }
    ctx->pc = 0x48042Cu;
label_48042c:
    // 0x48042c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480430:
    // 0x480430: 0x3c074190  lui         $a3, 0x4190
    ctx->pc = 0x480430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16784 << 16));
label_480434:
    // 0x480434: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x480434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_480438:
    // 0x480438: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x480438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_48043c:
    // 0x48043c: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x48043cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_480440:
    // 0x480440: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480444:
    // 0x480444: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x480444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_480448:
    // 0x480448: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x480448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_48044c:
    // 0x48044c: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x48044cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_480450:
    // 0x480450: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x480450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_480454:
    // 0x480454: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x480454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_480458:
    // 0x480458: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x480458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_48045c:
    // 0x48045c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x48045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_480460:
    // 0x480460: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x480460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_480464:
    // 0x480464: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x480464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
label_480468:
    // 0x480468: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x480468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
label_48046c:
    // 0x48046c: 0xc0a7a88  jal         func_29EA20
label_480470:
    if (ctx->pc == 0x480470u) {
        ctx->pc = 0x480470u;
            // 0x480470: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x480474u;
        goto label_480474;
    }
    ctx->pc = 0x48046Cu;
    SET_GPR_U32(ctx, 31, 0x480474u);
    ctx->pc = 0x480470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48046Cu;
            // 0x480470: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480474u; }
        if (ctx->pc != 0x480474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480474u; }
        if (ctx->pc != 0x480474u) { return; }
    }
    ctx->pc = 0x480474u;
label_480474:
    // 0x480474: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x480474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_480478:
    // 0x480478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x480478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48047c:
    // 0x48047c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_480480:
    if (ctx->pc == 0x480480u) {
        ctx->pc = 0x480480u;
            // 0x480480: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x480484u;
        goto label_480484;
    }
    ctx->pc = 0x48047Cu;
    {
        const bool branch_taken_0x48047c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x480480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48047Cu;
            // 0x480480: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48047c) {
            ctx->pc = 0x480498u;
            goto label_480498;
        }
    }
    ctx->pc = 0x480484u;
label_480484:
    // 0x480484: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x480484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_480488:
    // 0x480488: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x480488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48048c:
    // 0x48048c: 0xc0804bc  jal         func_2012F0
label_480490:
    if (ctx->pc == 0x480490u) {
        ctx->pc = 0x480490u;
            // 0x480490: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x480494u;
        goto label_480494;
    }
    ctx->pc = 0x48048Cu;
    SET_GPR_U32(ctx, 31, 0x480494u);
    ctx->pc = 0x480490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48048Cu;
            // 0x480490: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480494u; }
        if (ctx->pc != 0x480494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480494u; }
        if (ctx->pc != 0x480494u) { return; }
    }
    ctx->pc = 0x480494u;
label_480494:
    // 0x480494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x480494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480498:
    // 0x480498: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x480498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
label_48049c:
    // 0x48049c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48049cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4804a0:
    // 0x4804a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4804a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4804a4:
    // 0x4804a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4804a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4804a8:
    // 0x4804a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4804a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4804ac:
    // 0x4804ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4804acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4804b0:
    // 0x4804b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4804b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4804b4:
    // 0x4804b4: 0x3e00008  jr          $ra
label_4804b8:
    if (ctx->pc == 0x4804B8u) {
        ctx->pc = 0x4804B8u;
            // 0x4804b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4804BCu;
        goto label_4804bc;
    }
    ctx->pc = 0x4804B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4804B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4804B4u;
            // 0x4804b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4804BCu;
label_4804bc:
    // 0x4804bc: 0x0  nop
    ctx->pc = 0x4804bcu;
    // NOP
label_4804c0:
    // 0x4804c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4804c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4804c4:
    // 0x4804c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4804c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4804c8:
    // 0x4804c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4804c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4804cc:
    // 0x4804cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4804ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4804d0:
    // 0x4804d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4804d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4804d4:
    // 0x4804d4: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_4804d8:
    if (ctx->pc == 0x4804D8u) {
        ctx->pc = 0x4804D8u;
            // 0x4804d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4804DCu;
        goto label_4804dc;
    }
    ctx->pc = 0x4804D4u;
    {
        const bool branch_taken_0x4804d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4804D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4804D4u;
            // 0x4804d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4804d4) {
            ctx->pc = 0x480610u;
            goto label_480610;
        }
    }
    ctx->pc = 0x4804DCu;
label_4804dc:
    // 0x4804dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4804dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4804e0:
    // 0x4804e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4804e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4804e4:
    // 0x4804e4: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x4804e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_4804e8:
    // 0x4804e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4804e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_4804ec:
    // 0x4804ec: 0x2442ef48  addiu       $v0, $v0, -0x10B8
    ctx->pc = 0x4804ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963016));
label_4804f0:
    // 0x4804f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4804f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4804f4:
    // 0x4804f4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4804f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4804f8:
    // 0x4804f8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4804f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4804fc:
    // 0x4804fc: 0xc0407c0  jal         func_101F00
label_480500:
    if (ctx->pc == 0x480500u) {
        ctx->pc = 0x480500u;
            // 0x480500: 0x24a5f210  addiu       $a1, $a1, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
        ctx->pc = 0x480504u;
        goto label_480504;
    }
    ctx->pc = 0x4804FCu;
    SET_GPR_U32(ctx, 31, 0x480504u);
    ctx->pc = 0x480500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4804FCu;
            // 0x480500: 0x24a5f210  addiu       $a1, $a1, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480504u; }
        if (ctx->pc != 0x480504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480504u; }
        if (ctx->pc != 0x480504u) { return; }
    }
    ctx->pc = 0x480504u;
label_480504:
    // 0x480504: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x480504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_480508:
    // 0x480508: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_48050c:
    if (ctx->pc == 0x48050Cu) {
        ctx->pc = 0x48050Cu;
            // 0x48050c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x480510u;
        goto label_480510;
    }
    ctx->pc = 0x480508u;
    {
        const bool branch_taken_0x480508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480508) {
            ctx->pc = 0x48050Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480508u;
            // 0x48050c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480524u;
            goto label_480524;
        }
    }
    ctx->pc = 0x480510u;
label_480510:
    // 0x480510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_480514:
    if (ctx->pc == 0x480514u) {
        ctx->pc = 0x480518u;
        goto label_480518;
    }
    ctx->pc = 0x480510u;
    {
        const bool branch_taken_0x480510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480510) {
            ctx->pc = 0x480520u;
            goto label_480520;
        }
    }
    ctx->pc = 0x480518u;
label_480518:
    // 0x480518: 0xc07507c  jal         func_1D41F0
label_48051c:
    if (ctx->pc == 0x48051Cu) {
        ctx->pc = 0x48051Cu;
            // 0x48051c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x480520u;
        goto label_480520;
    }
    ctx->pc = 0x480518u;
    SET_GPR_U32(ctx, 31, 0x480520u);
    ctx->pc = 0x48051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480518u;
            // 0x48051c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480520u; }
        if (ctx->pc != 0x480520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480520u; }
        if (ctx->pc != 0x480520u) { return; }
    }
    ctx->pc = 0x480520u;
label_480520:
    // 0x480520: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x480520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_480524:
    // 0x480524: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_480528:
    if (ctx->pc == 0x480528u) {
        ctx->pc = 0x480528u;
            // 0x480528: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x48052Cu;
        goto label_48052c;
    }
    ctx->pc = 0x480524u;
    {
        const bool branch_taken_0x480524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480524) {
            ctx->pc = 0x480528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480524u;
            // 0x480528: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480554u;
            goto label_480554;
        }
    }
    ctx->pc = 0x48052Cu;
label_48052c:
    // 0x48052c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_480530:
    if (ctx->pc == 0x480530u) {
        ctx->pc = 0x480534u;
        goto label_480534;
    }
    ctx->pc = 0x48052Cu;
    {
        const bool branch_taken_0x48052c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48052c) {
            ctx->pc = 0x480550u;
            goto label_480550;
        }
    }
    ctx->pc = 0x480534u;
label_480534:
    // 0x480534: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_480538:
    if (ctx->pc == 0x480538u) {
        ctx->pc = 0x48053Cu;
        goto label_48053c;
    }
    ctx->pc = 0x480534u;
    {
        const bool branch_taken_0x480534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480534) {
            ctx->pc = 0x480550u;
            goto label_480550;
        }
    }
    ctx->pc = 0x48053Cu;
label_48053c:
    // 0x48053c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x48053cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_480540:
    // 0x480540: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_480544:
    if (ctx->pc == 0x480544u) {
        ctx->pc = 0x480548u;
        goto label_480548;
    }
    ctx->pc = 0x480540u;
    {
        const bool branch_taken_0x480540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x480540) {
            ctx->pc = 0x480550u;
            goto label_480550;
        }
    }
    ctx->pc = 0x480548u;
label_480548:
    // 0x480548: 0xc0400a8  jal         func_1002A0
label_48054c:
    if (ctx->pc == 0x48054Cu) {
        ctx->pc = 0x480550u;
        goto label_480550;
    }
    ctx->pc = 0x480548u;
    SET_GPR_U32(ctx, 31, 0x480550u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480550u; }
        if (ctx->pc != 0x480550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480550u; }
        if (ctx->pc != 0x480550u) { return; }
    }
    ctx->pc = 0x480550u;
label_480550:
    // 0x480550: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x480550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_480554:
    // 0x480554: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_480558:
    if (ctx->pc == 0x480558u) {
        ctx->pc = 0x480558u;
            // 0x480558: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x48055Cu;
        goto label_48055c;
    }
    ctx->pc = 0x480554u;
    {
        const bool branch_taken_0x480554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480554) {
            ctx->pc = 0x480558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480554u;
            // 0x480558: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480584u;
            goto label_480584;
        }
    }
    ctx->pc = 0x48055Cu;
label_48055c:
    // 0x48055c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_480560:
    if (ctx->pc == 0x480560u) {
        ctx->pc = 0x480564u;
        goto label_480564;
    }
    ctx->pc = 0x48055Cu;
    {
        const bool branch_taken_0x48055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48055c) {
            ctx->pc = 0x480580u;
            goto label_480580;
        }
    }
    ctx->pc = 0x480564u;
label_480564:
    // 0x480564: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_480568:
    if (ctx->pc == 0x480568u) {
        ctx->pc = 0x48056Cu;
        goto label_48056c;
    }
    ctx->pc = 0x480564u;
    {
        const bool branch_taken_0x480564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480564) {
            ctx->pc = 0x480580u;
            goto label_480580;
        }
    }
    ctx->pc = 0x48056Cu;
label_48056c:
    // 0x48056c: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x48056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_480570:
    // 0x480570: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_480574:
    if (ctx->pc == 0x480574u) {
        ctx->pc = 0x480578u;
        goto label_480578;
    }
    ctx->pc = 0x480570u;
    {
        const bool branch_taken_0x480570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x480570) {
            ctx->pc = 0x480580u;
            goto label_480580;
        }
    }
    ctx->pc = 0x480578u;
label_480578:
    // 0x480578: 0xc0400a8  jal         func_1002A0
label_48057c:
    if (ctx->pc == 0x48057Cu) {
        ctx->pc = 0x480580u;
        goto label_480580;
    }
    ctx->pc = 0x480578u;
    SET_GPR_U32(ctx, 31, 0x480580u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480580u; }
        if (ctx->pc != 0x480580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480580u; }
        if (ctx->pc != 0x480580u) { return; }
    }
    ctx->pc = 0x480580u;
label_480580:
    // 0x480580: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x480580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_480584:
    // 0x480584: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_480588:
    if (ctx->pc == 0x480588u) {
        ctx->pc = 0x48058Cu;
        goto label_48058c;
    }
    ctx->pc = 0x480584u;
    {
        const bool branch_taken_0x480584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480584) {
            ctx->pc = 0x4805A0u;
            goto label_4805a0;
        }
    }
    ctx->pc = 0x48058Cu;
label_48058c:
    // 0x48058c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48058cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_480590:
    // 0x480590: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x480590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_480594:
    // 0x480594: 0x2463eef8  addiu       $v1, $v1, -0x1108
    ctx->pc = 0x480594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962936));
label_480598:
    // 0x480598: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x480598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_48059c:
    // 0x48059c: 0xac407780  sw          $zero, 0x7780($v0)
    ctx->pc = 0x48059cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30592), GPR_U32(ctx, 0));
label_4805a0:
    // 0x4805a0: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4805a4:
    if (ctx->pc == 0x4805A4u) {
        ctx->pc = 0x4805A4u;
            // 0x4805a4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4805A8u;
        goto label_4805a8;
    }
    ctx->pc = 0x4805A0u;
    {
        const bool branch_taken_0x4805a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4805a0) {
            ctx->pc = 0x4805A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4805A0u;
            // 0x4805a4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4805FCu;
            goto label_4805fc;
        }
    }
    ctx->pc = 0x4805A8u;
label_4805a8:
    // 0x4805a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4805a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4805ac:
    // 0x4805ac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4805acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4805b0:
    // 0x4805b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4805b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4805b4:
    // 0x4805b4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4805b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4805b8:
    // 0x4805b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4805bc:
    if (ctx->pc == 0x4805BCu) {
        ctx->pc = 0x4805BCu;
            // 0x4805bc: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4805C0u;
        goto label_4805c0;
    }
    ctx->pc = 0x4805B8u;
    {
        const bool branch_taken_0x4805b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4805b8) {
            ctx->pc = 0x4805BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4805B8u;
            // 0x4805bc: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4805D4u;
            goto label_4805d4;
        }
    }
    ctx->pc = 0x4805C0u;
label_4805c0:
    // 0x4805c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4805c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4805c4:
    // 0x4805c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4805c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4805c8:
    // 0x4805c8: 0x320f809  jalr        $t9
label_4805cc:
    if (ctx->pc == 0x4805CCu) {
        ctx->pc = 0x4805CCu;
            // 0x4805cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4805D0u;
        goto label_4805d0;
    }
    ctx->pc = 0x4805C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4805D0u);
        ctx->pc = 0x4805CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4805C8u;
            // 0x4805cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4805D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4805D0u; }
            if (ctx->pc != 0x4805D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4805D0u;
label_4805d0:
    // 0x4805d0: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4805d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4805d4:
    // 0x4805d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4805d8:
    if (ctx->pc == 0x4805D8u) {
        ctx->pc = 0x4805D8u;
            // 0x4805d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4805DCu;
        goto label_4805dc;
    }
    ctx->pc = 0x4805D4u;
    {
        const bool branch_taken_0x4805d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4805d4) {
            ctx->pc = 0x4805D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4805D4u;
            // 0x4805d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4805F0u;
            goto label_4805f0;
        }
    }
    ctx->pc = 0x4805DCu;
label_4805dc:
    // 0x4805dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4805dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4805e0:
    // 0x4805e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4805e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4805e4:
    // 0x4805e4: 0x320f809  jalr        $t9
label_4805e8:
    if (ctx->pc == 0x4805E8u) {
        ctx->pc = 0x4805E8u;
            // 0x4805e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4805ECu;
        goto label_4805ec;
    }
    ctx->pc = 0x4805E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4805ECu);
        ctx->pc = 0x4805E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4805E4u;
            // 0x4805e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4805ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4805ECu; }
            if (ctx->pc != 0x4805ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4805ECu;
label_4805ec:
    // 0x4805ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4805ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4805f0:
    // 0x4805f0: 0xc075bf8  jal         func_1D6FE0
label_4805f4:
    if (ctx->pc == 0x4805F4u) {
        ctx->pc = 0x4805F4u;
            // 0x4805f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4805F8u;
        goto label_4805f8;
    }
    ctx->pc = 0x4805F0u;
    SET_GPR_U32(ctx, 31, 0x4805F8u);
    ctx->pc = 0x4805F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4805F0u;
            // 0x4805f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4805F8u; }
        if (ctx->pc != 0x4805F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4805F8u; }
        if (ctx->pc != 0x4805F8u) { return; }
    }
    ctx->pc = 0x4805F8u;
label_4805f8:
    // 0x4805f8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4805f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4805fc:
    // 0x4805fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4805fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_480600:
    // 0x480600: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_480604:
    if (ctx->pc == 0x480604u) {
        ctx->pc = 0x480604u;
            // 0x480604: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480608u;
        goto label_480608;
    }
    ctx->pc = 0x480600u;
    {
        const bool branch_taken_0x480600 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x480600) {
            ctx->pc = 0x480604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480600u;
            // 0x480604: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480614u;
            goto label_480614;
        }
    }
    ctx->pc = 0x480608u;
label_480608:
    // 0x480608: 0xc0400a8  jal         func_1002A0
label_48060c:
    if (ctx->pc == 0x48060Cu) {
        ctx->pc = 0x48060Cu;
            // 0x48060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480610u;
        goto label_480610;
    }
    ctx->pc = 0x480608u;
    SET_GPR_U32(ctx, 31, 0x480610u);
    ctx->pc = 0x48060Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480608u;
            // 0x48060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480610u; }
        if (ctx->pc != 0x480610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480610u; }
        if (ctx->pc != 0x480610u) { return; }
    }
    ctx->pc = 0x480610u;
label_480610:
    // 0x480610: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x480610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480614:
    // 0x480614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x480614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_480618:
    // 0x480618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48061c:
    // 0x48061c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48061cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480620:
    // 0x480620: 0x3e00008  jr          $ra
label_480624:
    if (ctx->pc == 0x480624u) {
        ctx->pc = 0x480624u;
            // 0x480624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x480628u;
        goto label_480628;
    }
    ctx->pc = 0x480620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480620u;
            // 0x480624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480628u;
label_480628:
    // 0x480628: 0x0  nop
    ctx->pc = 0x480628u;
    // NOP
label_48062c:
    // 0x48062c: 0x0  nop
    ctx->pc = 0x48062cu;
    // NOP
label_480630:
    // 0x480630: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x480630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_480634:
    // 0x480634: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x480634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_480638:
    // 0x480638: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x480638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_48063c:
    // 0x48063c: 0x2463f040  addiu       $v1, $v1, -0xFC0
    ctx->pc = 0x48063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963264));
label_480640:
    // 0x480640: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x480640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_480644:
    // 0x480644: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x480644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_480648:
    // 0x480648: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x480648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_48064c:
    // 0x48064c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x48064cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_480650:
    // 0x480650: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x480650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_480654:
    // 0x480654: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x480654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_480658:
    // 0x480658: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x480658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_48065c:
    // 0x48065c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x48065cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_480660:
    // 0x480660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x480660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480664:
    // 0x480664: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x480664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_480668:
    // 0x480668: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x480668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_48066c:
    // 0x48066c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x48066cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_480670:
    // 0x480670: 0x3e00008  jr          $ra
label_480674:
    if (ctx->pc == 0x480674u) {
        ctx->pc = 0x480674u;
            // 0x480674: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x480678u;
        goto label_480678;
    }
    ctx->pc = 0x480670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480670u;
            // 0x480674: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480678u;
label_480678:
    // 0x480678: 0x0  nop
    ctx->pc = 0x480678u;
    // NOP
label_48067c:
    // 0x48067c: 0x0  nop
    ctx->pc = 0x48067cu;
    // NOP
}
