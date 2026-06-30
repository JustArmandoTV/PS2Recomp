#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005406D0
// Address: 0x5406d0 - 0x540a90
void sub_005406D0_0x5406d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005406D0_0x5406d0");
#endif

    switch (ctx->pc) {
        case 0x5406d0u: goto label_5406d0;
        case 0x5406d4u: goto label_5406d4;
        case 0x5406d8u: goto label_5406d8;
        case 0x5406dcu: goto label_5406dc;
        case 0x5406e0u: goto label_5406e0;
        case 0x5406e4u: goto label_5406e4;
        case 0x5406e8u: goto label_5406e8;
        case 0x5406ecu: goto label_5406ec;
        case 0x5406f0u: goto label_5406f0;
        case 0x5406f4u: goto label_5406f4;
        case 0x5406f8u: goto label_5406f8;
        case 0x5406fcu: goto label_5406fc;
        case 0x540700u: goto label_540700;
        case 0x540704u: goto label_540704;
        case 0x540708u: goto label_540708;
        case 0x54070cu: goto label_54070c;
        case 0x540710u: goto label_540710;
        case 0x540714u: goto label_540714;
        case 0x540718u: goto label_540718;
        case 0x54071cu: goto label_54071c;
        case 0x540720u: goto label_540720;
        case 0x540724u: goto label_540724;
        case 0x540728u: goto label_540728;
        case 0x54072cu: goto label_54072c;
        case 0x540730u: goto label_540730;
        case 0x540734u: goto label_540734;
        case 0x540738u: goto label_540738;
        case 0x54073cu: goto label_54073c;
        case 0x540740u: goto label_540740;
        case 0x540744u: goto label_540744;
        case 0x540748u: goto label_540748;
        case 0x54074cu: goto label_54074c;
        case 0x540750u: goto label_540750;
        case 0x540754u: goto label_540754;
        case 0x540758u: goto label_540758;
        case 0x54075cu: goto label_54075c;
        case 0x540760u: goto label_540760;
        case 0x540764u: goto label_540764;
        case 0x540768u: goto label_540768;
        case 0x54076cu: goto label_54076c;
        case 0x540770u: goto label_540770;
        case 0x540774u: goto label_540774;
        case 0x540778u: goto label_540778;
        case 0x54077cu: goto label_54077c;
        case 0x540780u: goto label_540780;
        case 0x540784u: goto label_540784;
        case 0x540788u: goto label_540788;
        case 0x54078cu: goto label_54078c;
        case 0x540790u: goto label_540790;
        case 0x540794u: goto label_540794;
        case 0x540798u: goto label_540798;
        case 0x54079cu: goto label_54079c;
        case 0x5407a0u: goto label_5407a0;
        case 0x5407a4u: goto label_5407a4;
        case 0x5407a8u: goto label_5407a8;
        case 0x5407acu: goto label_5407ac;
        case 0x5407b0u: goto label_5407b0;
        case 0x5407b4u: goto label_5407b4;
        case 0x5407b8u: goto label_5407b8;
        case 0x5407bcu: goto label_5407bc;
        case 0x5407c0u: goto label_5407c0;
        case 0x5407c4u: goto label_5407c4;
        case 0x5407c8u: goto label_5407c8;
        case 0x5407ccu: goto label_5407cc;
        case 0x5407d0u: goto label_5407d0;
        case 0x5407d4u: goto label_5407d4;
        case 0x5407d8u: goto label_5407d8;
        case 0x5407dcu: goto label_5407dc;
        case 0x5407e0u: goto label_5407e0;
        case 0x5407e4u: goto label_5407e4;
        case 0x5407e8u: goto label_5407e8;
        case 0x5407ecu: goto label_5407ec;
        case 0x5407f0u: goto label_5407f0;
        case 0x5407f4u: goto label_5407f4;
        case 0x5407f8u: goto label_5407f8;
        case 0x5407fcu: goto label_5407fc;
        case 0x540800u: goto label_540800;
        case 0x540804u: goto label_540804;
        case 0x540808u: goto label_540808;
        case 0x54080cu: goto label_54080c;
        case 0x540810u: goto label_540810;
        case 0x540814u: goto label_540814;
        case 0x540818u: goto label_540818;
        case 0x54081cu: goto label_54081c;
        case 0x540820u: goto label_540820;
        case 0x540824u: goto label_540824;
        case 0x540828u: goto label_540828;
        case 0x54082cu: goto label_54082c;
        case 0x540830u: goto label_540830;
        case 0x540834u: goto label_540834;
        case 0x540838u: goto label_540838;
        case 0x54083cu: goto label_54083c;
        case 0x540840u: goto label_540840;
        case 0x540844u: goto label_540844;
        case 0x540848u: goto label_540848;
        case 0x54084cu: goto label_54084c;
        case 0x540850u: goto label_540850;
        case 0x540854u: goto label_540854;
        case 0x540858u: goto label_540858;
        case 0x54085cu: goto label_54085c;
        case 0x540860u: goto label_540860;
        case 0x540864u: goto label_540864;
        case 0x540868u: goto label_540868;
        case 0x54086cu: goto label_54086c;
        case 0x540870u: goto label_540870;
        case 0x540874u: goto label_540874;
        case 0x540878u: goto label_540878;
        case 0x54087cu: goto label_54087c;
        case 0x540880u: goto label_540880;
        case 0x540884u: goto label_540884;
        case 0x540888u: goto label_540888;
        case 0x54088cu: goto label_54088c;
        case 0x540890u: goto label_540890;
        case 0x540894u: goto label_540894;
        case 0x540898u: goto label_540898;
        case 0x54089cu: goto label_54089c;
        case 0x5408a0u: goto label_5408a0;
        case 0x5408a4u: goto label_5408a4;
        case 0x5408a8u: goto label_5408a8;
        case 0x5408acu: goto label_5408ac;
        case 0x5408b0u: goto label_5408b0;
        case 0x5408b4u: goto label_5408b4;
        case 0x5408b8u: goto label_5408b8;
        case 0x5408bcu: goto label_5408bc;
        case 0x5408c0u: goto label_5408c0;
        case 0x5408c4u: goto label_5408c4;
        case 0x5408c8u: goto label_5408c8;
        case 0x5408ccu: goto label_5408cc;
        case 0x5408d0u: goto label_5408d0;
        case 0x5408d4u: goto label_5408d4;
        case 0x5408d8u: goto label_5408d8;
        case 0x5408dcu: goto label_5408dc;
        case 0x5408e0u: goto label_5408e0;
        case 0x5408e4u: goto label_5408e4;
        case 0x5408e8u: goto label_5408e8;
        case 0x5408ecu: goto label_5408ec;
        case 0x5408f0u: goto label_5408f0;
        case 0x5408f4u: goto label_5408f4;
        case 0x5408f8u: goto label_5408f8;
        case 0x5408fcu: goto label_5408fc;
        case 0x540900u: goto label_540900;
        case 0x540904u: goto label_540904;
        case 0x540908u: goto label_540908;
        case 0x54090cu: goto label_54090c;
        case 0x540910u: goto label_540910;
        case 0x540914u: goto label_540914;
        case 0x540918u: goto label_540918;
        case 0x54091cu: goto label_54091c;
        case 0x540920u: goto label_540920;
        case 0x540924u: goto label_540924;
        case 0x540928u: goto label_540928;
        case 0x54092cu: goto label_54092c;
        case 0x540930u: goto label_540930;
        case 0x540934u: goto label_540934;
        case 0x540938u: goto label_540938;
        case 0x54093cu: goto label_54093c;
        case 0x540940u: goto label_540940;
        case 0x540944u: goto label_540944;
        case 0x540948u: goto label_540948;
        case 0x54094cu: goto label_54094c;
        case 0x540950u: goto label_540950;
        case 0x540954u: goto label_540954;
        case 0x540958u: goto label_540958;
        case 0x54095cu: goto label_54095c;
        case 0x540960u: goto label_540960;
        case 0x540964u: goto label_540964;
        case 0x540968u: goto label_540968;
        case 0x54096cu: goto label_54096c;
        case 0x540970u: goto label_540970;
        case 0x540974u: goto label_540974;
        case 0x540978u: goto label_540978;
        case 0x54097cu: goto label_54097c;
        case 0x540980u: goto label_540980;
        case 0x540984u: goto label_540984;
        case 0x540988u: goto label_540988;
        case 0x54098cu: goto label_54098c;
        case 0x540990u: goto label_540990;
        case 0x540994u: goto label_540994;
        case 0x540998u: goto label_540998;
        case 0x54099cu: goto label_54099c;
        case 0x5409a0u: goto label_5409a0;
        case 0x5409a4u: goto label_5409a4;
        case 0x5409a8u: goto label_5409a8;
        case 0x5409acu: goto label_5409ac;
        case 0x5409b0u: goto label_5409b0;
        case 0x5409b4u: goto label_5409b4;
        case 0x5409b8u: goto label_5409b8;
        case 0x5409bcu: goto label_5409bc;
        case 0x5409c0u: goto label_5409c0;
        case 0x5409c4u: goto label_5409c4;
        case 0x5409c8u: goto label_5409c8;
        case 0x5409ccu: goto label_5409cc;
        case 0x5409d0u: goto label_5409d0;
        case 0x5409d4u: goto label_5409d4;
        case 0x5409d8u: goto label_5409d8;
        case 0x5409dcu: goto label_5409dc;
        case 0x5409e0u: goto label_5409e0;
        case 0x5409e4u: goto label_5409e4;
        case 0x5409e8u: goto label_5409e8;
        case 0x5409ecu: goto label_5409ec;
        case 0x5409f0u: goto label_5409f0;
        case 0x5409f4u: goto label_5409f4;
        case 0x5409f8u: goto label_5409f8;
        case 0x5409fcu: goto label_5409fc;
        case 0x540a00u: goto label_540a00;
        case 0x540a04u: goto label_540a04;
        case 0x540a08u: goto label_540a08;
        case 0x540a0cu: goto label_540a0c;
        case 0x540a10u: goto label_540a10;
        case 0x540a14u: goto label_540a14;
        case 0x540a18u: goto label_540a18;
        case 0x540a1cu: goto label_540a1c;
        case 0x540a20u: goto label_540a20;
        case 0x540a24u: goto label_540a24;
        case 0x540a28u: goto label_540a28;
        case 0x540a2cu: goto label_540a2c;
        case 0x540a30u: goto label_540a30;
        case 0x540a34u: goto label_540a34;
        case 0x540a38u: goto label_540a38;
        case 0x540a3cu: goto label_540a3c;
        case 0x540a40u: goto label_540a40;
        case 0x540a44u: goto label_540a44;
        case 0x540a48u: goto label_540a48;
        case 0x540a4cu: goto label_540a4c;
        case 0x540a50u: goto label_540a50;
        case 0x540a54u: goto label_540a54;
        case 0x540a58u: goto label_540a58;
        case 0x540a5cu: goto label_540a5c;
        case 0x540a60u: goto label_540a60;
        case 0x540a64u: goto label_540a64;
        case 0x540a68u: goto label_540a68;
        case 0x540a6cu: goto label_540a6c;
        case 0x540a70u: goto label_540a70;
        case 0x540a74u: goto label_540a74;
        case 0x540a78u: goto label_540a78;
        case 0x540a7cu: goto label_540a7c;
        case 0x540a80u: goto label_540a80;
        case 0x540a84u: goto label_540a84;
        case 0x540a88u: goto label_540a88;
        case 0x540a8cu: goto label_540a8c;
        default: break;
    }

    ctx->pc = 0x5406d0u;

label_5406d0:
    // 0x5406d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5406d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_5406d4:
    // 0x5406d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5406d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5406d8:
    // 0x5406d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5406d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_5406dc:
    // 0x5406dc: 0x8c673e28  lw          $a3, 0x3E28($v1)
    ctx->pc = 0x5406dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_5406e0:
    // 0x5406e0: 0x8c8300c8  lw          $v1, 0xC8($a0)
    ctx->pc = 0x5406e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_5406e4:
    // 0x5406e4: 0x2c61001a  sltiu       $at, $v1, 0x1A
    ctx->pc = 0x5406e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_5406e8:
    // 0x5406e8: 0x502000e5  beql        $at, $zero, . + 4 + (0xE5 << 2)
label_5406ec:
    if (ctx->pc == 0x5406ECu) {
        ctx->pc = 0x5406ECu;
            // 0x5406ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x5406F0u;
        goto label_5406f0;
    }
    ctx->pc = 0x5406E8u;
    {
        const bool branch_taken_0x5406e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5406e8) {
            ctx->pc = 0x5406ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5406E8u;
            // 0x5406ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540A80u;
            goto label_540a80;
        }
    }
    ctx->pc = 0x5406F0u;
label_5406f0:
    // 0x5406f0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5406f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5406f4:
    // 0x5406f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5406f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5406f8:
    // 0x5406f8: 0x24a5daf0  addiu       $a1, $a1, -0x2510
    ctx->pc = 0x5406f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957808));
label_5406fc:
    // 0x5406fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5406fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_540700:
    // 0x540700: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x540700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_540704:
    // 0x540704: 0x600008  jr          $v1
label_540708:
    if (ctx->pc == 0x540708u) {
        ctx->pc = 0x54070Cu;
        goto label_54070c;
    }
    ctx->pc = 0x540704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x54070Cu: goto label_54070c;
            case 0x540724u: goto label_540724;
            case 0x540740u: goto label_540740;
            case 0x54075Cu: goto label_54075c;
            case 0x540798u: goto label_540798;
            case 0x5407B4u: goto label_5407b4;
            case 0x5407D0u: goto label_5407d0;
            case 0x5407ECu: goto label_5407ec;
            case 0x540808u: goto label_540808;
            case 0x540824u: goto label_540824;
            case 0x540840u: goto label_540840;
            case 0x5408B4u: goto label_5408b4;
            case 0x5408D0u: goto label_5408d0;
            case 0x5408ECu: goto label_5408ec;
            case 0x540908u: goto label_540908;
            case 0x540948u: goto label_540948;
            case 0x540988u: goto label_540988;
            case 0x5409A4u: goto label_5409a4;
            case 0x5409C0u: goto label_5409c0;
            case 0x5409DCu: goto label_5409dc;
            case 0x5409F8u: goto label_5409f8;
            case 0x540A14u: goto label_540a14;
            case 0x540A30u: goto label_540a30;
            case 0x540A4Cu: goto label_540a4c;
            case 0x540A68u: goto label_540a68;
            case 0x540A7Cu: goto label_540a7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x54070Cu;
label_54070c:
    // 0x54070c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54070cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_540710:
    // 0x540710: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x540710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_540714:
    // 0x540714: 0x320f809  jalr        $t9
label_540718:
    if (ctx->pc == 0x540718u) {
        ctx->pc = 0x54071Cu;
        goto label_54071c;
    }
    ctx->pc = 0x540714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54071Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54071Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54071Cu; }
            if (ctx->pc != 0x54071Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54071Cu;
label_54071c:
    // 0x54071c: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_540720:
    if (ctx->pc == 0x540720u) {
        ctx->pc = 0x540724u;
        goto label_540724;
    }
    ctx->pc = 0x54071Cu;
    {
        const bool branch_taken_0x54071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54071c) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540724u;
label_540724:
    // 0x540724: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x540724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_540728:
    // 0x540728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54072c:
    // 0x54072c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54072cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540730:
    // 0x540730: 0xc14f45c  jal         func_53D170
label_540734:
    if (ctx->pc == 0x540734u) {
        ctx->pc = 0x540734u;
            // 0x540734: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540738u;
        goto label_540738;
    }
    ctx->pc = 0x540730u;
    SET_GPR_U32(ctx, 31, 0x540738u);
    ctx->pc = 0x540734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540730u;
            // 0x540734: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540738u; }
        if (ctx->pc != 0x540738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540738u; }
        if (ctx->pc != 0x540738u) { return; }
    }
    ctx->pc = 0x540738u;
label_540738:
    // 0x540738: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_54073c:
    if (ctx->pc == 0x54073Cu) {
        ctx->pc = 0x540740u;
        goto label_540740;
    }
    ctx->pc = 0x540738u;
    {
        const bool branch_taken_0x540738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540738) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540740u;
label_540740:
    // 0x540740: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x540740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_540744:
    // 0x540744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540748:
    // 0x540748: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_54074c:
    // 0x54074c: 0xc14f45c  jal         func_53D170
label_540750:
    if (ctx->pc == 0x540750u) {
        ctx->pc = 0x540750u;
            // 0x540750: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540754u;
        goto label_540754;
    }
    ctx->pc = 0x54074Cu;
    SET_GPR_U32(ctx, 31, 0x540754u);
    ctx->pc = 0x540750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54074Cu;
            // 0x540750: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540754u; }
        if (ctx->pc != 0x540754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540754u; }
        if (ctx->pc != 0x540754u) { return; }
    }
    ctx->pc = 0x540754u;
label_540754:
    // 0x540754: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_540758:
    if (ctx->pc == 0x540758u) {
        ctx->pc = 0x54075Cu;
        goto label_54075c;
    }
    ctx->pc = 0x540754u;
    {
        const bool branch_taken_0x540754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540754) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x54075Cu;
label_54075c:
    // 0x54075c: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x54075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_540760:
    // 0x540760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540764:
    // 0x540764: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
label_540768:
    if (ctx->pc == 0x540768u) {
        ctx->pc = 0x540768u;
            // 0x540768: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->pc = 0x54076Cu;
        goto label_54076c;
    }
    ctx->pc = 0x540764u;
    {
        const bool branch_taken_0x540764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x540764) {
            ctx->pc = 0x540768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540764u;
            // 0x540768: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540784u;
            goto label_540784;
        }
    }
    ctx->pc = 0x54076Cu;
label_54076c:
    // 0x54076c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x54076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_540770:
    // 0x540770: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540774:
    // 0x540774: 0xc14f45c  jal         func_53D170
label_540778:
    if (ctx->pc == 0x540778u) {
        ctx->pc = 0x540778u;
            // 0x540778: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x54077Cu;
        goto label_54077c;
    }
    ctx->pc = 0x540774u;
    SET_GPR_U32(ctx, 31, 0x54077Cu);
    ctx->pc = 0x540778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540774u;
            // 0x540778: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54077Cu; }
        if (ctx->pc != 0x54077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54077Cu; }
        if (ctx->pc != 0x54077Cu) { return; }
    }
    ctx->pc = 0x54077Cu;
label_54077c:
    // 0x54077c: 0x100000bf  b           . + 4 + (0xBF << 2)
label_540780:
    if (ctx->pc == 0x540780u) {
        ctx->pc = 0x540784u;
        goto label_540784;
    }
    ctx->pc = 0x54077Cu;
    {
        const bool branch_taken_0x54077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54077c) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540784u;
label_540784:
    // 0x540784: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540788:
    // 0x540788: 0xc14f45c  jal         func_53D170
label_54078c:
    if (ctx->pc == 0x54078Cu) {
        ctx->pc = 0x54078Cu;
            // 0x54078c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540790u;
        goto label_540790;
    }
    ctx->pc = 0x540788u;
    SET_GPR_U32(ctx, 31, 0x540790u);
    ctx->pc = 0x54078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540788u;
            // 0x54078c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540790u; }
        if (ctx->pc != 0x540790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540790u; }
        if (ctx->pc != 0x540790u) { return; }
    }
    ctx->pc = 0x540790u;
label_540790:
    // 0x540790: 0x100000ba  b           . + 4 + (0xBA << 2)
label_540794:
    if (ctx->pc == 0x540794u) {
        ctx->pc = 0x540798u;
        goto label_540798;
    }
    ctx->pc = 0x540790u;
    {
        const bool branch_taken_0x540790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540790) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540798u;
label_540798:
    // 0x540798: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x540798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_54079c:
    // 0x54079c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x54079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5407a0:
    // 0x5407a0: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5407a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5407a4:
    // 0x5407a4: 0xc14f45c  jal         func_53D170
label_5407a8:
    if (ctx->pc == 0x5407A8u) {
        ctx->pc = 0x5407A8u;
            // 0x5407a8: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5407ACu;
        goto label_5407ac;
    }
    ctx->pc = 0x5407A4u;
    SET_GPR_U32(ctx, 31, 0x5407ACu);
    ctx->pc = 0x5407A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5407A4u;
            // 0x5407a8: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5407ACu; }
        if (ctx->pc != 0x5407ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5407ACu; }
        if (ctx->pc != 0x5407ACu) { return; }
    }
    ctx->pc = 0x5407ACu;
label_5407ac:
    // 0x5407ac: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_5407b0:
    if (ctx->pc == 0x5407B0u) {
        ctx->pc = 0x5407B4u;
        goto label_5407b4;
    }
    ctx->pc = 0x5407ACu;
    {
        const bool branch_taken_0x5407ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5407ac) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5407B4u;
label_5407b4:
    // 0x5407b4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x5407b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_5407b8:
    // 0x5407b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5407b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5407bc:
    // 0x5407bc: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5407bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5407c0:
    // 0x5407c0: 0xc14f45c  jal         func_53D170
label_5407c4:
    if (ctx->pc == 0x5407C4u) {
        ctx->pc = 0x5407C4u;
            // 0x5407c4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5407C8u;
        goto label_5407c8;
    }
    ctx->pc = 0x5407C0u;
    SET_GPR_U32(ctx, 31, 0x5407C8u);
    ctx->pc = 0x5407C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5407C0u;
            // 0x5407c4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5407C8u; }
        if (ctx->pc != 0x5407C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5407C8u; }
        if (ctx->pc != 0x5407C8u) { return; }
    }
    ctx->pc = 0x5407C8u;
label_5407c8:
    // 0x5407c8: 0x100000ac  b           . + 4 + (0xAC << 2)
label_5407cc:
    if (ctx->pc == 0x5407CCu) {
        ctx->pc = 0x5407D0u;
        goto label_5407d0;
    }
    ctx->pc = 0x5407C8u;
    {
        const bool branch_taken_0x5407c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5407c8) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5407D0u;
label_5407d0:
    // 0x5407d0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x5407d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_5407d4:
    // 0x5407d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5407d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5407d8:
    // 0x5407d8: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5407d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5407dc:
    // 0x5407dc: 0xc14f45c  jal         func_53D170
label_5407e0:
    if (ctx->pc == 0x5407E0u) {
        ctx->pc = 0x5407E0u;
            // 0x5407e0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5407E4u;
        goto label_5407e4;
    }
    ctx->pc = 0x5407DCu;
    SET_GPR_U32(ctx, 31, 0x5407E4u);
    ctx->pc = 0x5407E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5407DCu;
            // 0x5407e0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5407E4u; }
        if (ctx->pc != 0x5407E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5407E4u; }
        if (ctx->pc != 0x5407E4u) { return; }
    }
    ctx->pc = 0x5407E4u;
label_5407e4:
    // 0x5407e4: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_5407e8:
    if (ctx->pc == 0x5407E8u) {
        ctx->pc = 0x5407ECu;
        goto label_5407ec;
    }
    ctx->pc = 0x5407E4u;
    {
        const bool branch_taken_0x5407e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5407e4) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5407ECu;
label_5407ec:
    // 0x5407ec: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x5407ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_5407f0:
    // 0x5407f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5407f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5407f4:
    // 0x5407f4: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5407f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5407f8:
    // 0x5407f8: 0xc14f45c  jal         func_53D170
label_5407fc:
    if (ctx->pc == 0x5407FCu) {
        ctx->pc = 0x5407FCu;
            // 0x5407fc: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540800u;
        goto label_540800;
    }
    ctx->pc = 0x5407F8u;
    SET_GPR_U32(ctx, 31, 0x540800u);
    ctx->pc = 0x5407FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5407F8u;
            // 0x5407fc: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540800u; }
        if (ctx->pc != 0x540800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540800u; }
        if (ctx->pc != 0x540800u) { return; }
    }
    ctx->pc = 0x540800u;
label_540800:
    // 0x540800: 0x1000009e  b           . + 4 + (0x9E << 2)
label_540804:
    if (ctx->pc == 0x540804u) {
        ctx->pc = 0x540808u;
        goto label_540808;
    }
    ctx->pc = 0x540800u;
    {
        const bool branch_taken_0x540800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540800) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540808u;
label_540808:
    // 0x540808: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x540808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_54080c:
    // 0x54080c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x54080cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540810:
    // 0x540810: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540814:
    // 0x540814: 0xc14f45c  jal         func_53D170
label_540818:
    if (ctx->pc == 0x540818u) {
        ctx->pc = 0x540818u;
            // 0x540818: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x54081Cu;
        goto label_54081c;
    }
    ctx->pc = 0x540814u;
    SET_GPR_U32(ctx, 31, 0x54081Cu);
    ctx->pc = 0x540818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540814u;
            // 0x540818: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54081Cu; }
        if (ctx->pc != 0x54081Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54081Cu; }
        if (ctx->pc != 0x54081Cu) { return; }
    }
    ctx->pc = 0x54081Cu;
label_54081c:
    // 0x54081c: 0x10000097  b           . + 4 + (0x97 << 2)
label_540820:
    if (ctx->pc == 0x540820u) {
        ctx->pc = 0x540824u;
        goto label_540824;
    }
    ctx->pc = 0x54081Cu;
    {
        const bool branch_taken_0x54081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54081c) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540824u;
label_540824:
    // 0x540824: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x540824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_540828:
    // 0x540828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54082c:
    // 0x54082c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54082cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540830:
    // 0x540830: 0xc14f45c  jal         func_53D170
label_540834:
    if (ctx->pc == 0x540834u) {
        ctx->pc = 0x540834u;
            // 0x540834: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540838u;
        goto label_540838;
    }
    ctx->pc = 0x540830u;
    SET_GPR_U32(ctx, 31, 0x540838u);
    ctx->pc = 0x540834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540830u;
            // 0x540834: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540838u; }
        if (ctx->pc != 0x540838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540838u; }
        if (ctx->pc != 0x540838u) { return; }
    }
    ctx->pc = 0x540838u;
label_540838:
    // 0x540838: 0x10000090  b           . + 4 + (0x90 << 2)
label_54083c:
    if (ctx->pc == 0x54083Cu) {
        ctx->pc = 0x540840u;
        goto label_540840;
    }
    ctx->pc = 0x540838u;
    {
        const bool branch_taken_0x540838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540838) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540840u;
label_540840:
    // 0x540840: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x540840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_540844:
    // 0x540844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540848:
    // 0x540848: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
label_54084c:
    if (ctx->pc == 0x54084Cu) {
        ctx->pc = 0x54084Cu;
            // 0x54084c: 0x90e20022  lbu         $v0, 0x22($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 34)));
        ctx->pc = 0x540850u;
        goto label_540850;
    }
    ctx->pc = 0x540848u;
    {
        const bool branch_taken_0x540848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x540848) {
            ctx->pc = 0x54084Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540848u;
            // 0x54084c: 0x90e20022  lbu         $v0, 0x22($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540868u;
            goto label_540868;
        }
    }
    ctx->pc = 0x540850u;
label_540850:
    // 0x540850: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x540850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_540854:
    // 0x540854: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540858:
    // 0x540858: 0xc14f45c  jal         func_53D170
label_54085c:
    if (ctx->pc == 0x54085Cu) {
        ctx->pc = 0x54085Cu;
            // 0x54085c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540860u;
        goto label_540860;
    }
    ctx->pc = 0x540858u;
    SET_GPR_U32(ctx, 31, 0x540860u);
    ctx->pc = 0x54085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540858u;
            // 0x54085c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540860u; }
        if (ctx->pc != 0x540860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540860u; }
        if (ctx->pc != 0x540860u) { return; }
    }
    ctx->pc = 0x540860u;
label_540860:
    // 0x540860: 0x10000086  b           . + 4 + (0x86 << 2)
label_540864:
    if (ctx->pc == 0x540864u) {
        ctx->pc = 0x540868u;
        goto label_540868;
    }
    ctx->pc = 0x540860u;
    {
        const bool branch_taken_0x540860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540860) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540868u;
label_540868:
    // 0x540868: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_54086c:
    if (ctx->pc == 0x54086Cu) {
        ctx->pc = 0x54086Cu;
            // 0x54086c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x540870u;
        goto label_540870;
    }
    ctx->pc = 0x540868u;
    {
        const bool branch_taken_0x540868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x540868) {
            ctx->pc = 0x54086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540868u;
            // 0x54086c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54089Cu;
            goto label_54089c;
        }
    }
    ctx->pc = 0x540870u;
label_540870:
    // 0x540870: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x540870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_540874:
    // 0x540874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x540874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_540878:
    // 0x540878: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_54087c:
    if (ctx->pc == 0x54087Cu) {
        ctx->pc = 0x540880u;
        goto label_540880;
    }
    ctx->pc = 0x540878u;
    {
        const bool branch_taken_0x540878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x540878) {
            ctx->pc = 0x540898u;
            goto label_540898;
        }
    }
    ctx->pc = 0x540880u;
label_540880:
    // 0x540880: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x540880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_540884:
    // 0x540884: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540888:
    // 0x540888: 0xc14f45c  jal         func_53D170
label_54088c:
    if (ctx->pc == 0x54088Cu) {
        ctx->pc = 0x54088Cu;
            // 0x54088c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540890u;
        goto label_540890;
    }
    ctx->pc = 0x540888u;
    SET_GPR_U32(ctx, 31, 0x540890u);
    ctx->pc = 0x54088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540888u;
            // 0x54088c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540890u; }
        if (ctx->pc != 0x540890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540890u; }
        if (ctx->pc != 0x540890u) { return; }
    }
    ctx->pc = 0x540890u;
label_540890:
    // 0x540890: 0x1000007a  b           . + 4 + (0x7A << 2)
label_540894:
    if (ctx->pc == 0x540894u) {
        ctx->pc = 0x540898u;
        goto label_540898;
    }
    ctx->pc = 0x540890u;
    {
        const bool branch_taken_0x540890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540890) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540898u;
label_540898:
    // 0x540898: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x540898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_54089c:
    // 0x54089c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x54089cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5408a0:
    // 0x5408a0: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5408a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5408a4:
    // 0x5408a4: 0xc14f45c  jal         func_53D170
label_5408a8:
    if (ctx->pc == 0x5408A8u) {
        ctx->pc = 0x5408A8u;
            // 0x5408a8: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5408ACu;
        goto label_5408ac;
    }
    ctx->pc = 0x5408A4u;
    SET_GPR_U32(ctx, 31, 0x5408ACu);
    ctx->pc = 0x5408A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5408A4u;
            // 0x5408a8: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5408ACu; }
        if (ctx->pc != 0x5408ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5408ACu; }
        if (ctx->pc != 0x5408ACu) { return; }
    }
    ctx->pc = 0x5408ACu;
label_5408ac:
    // 0x5408ac: 0x10000073  b           . + 4 + (0x73 << 2)
label_5408b0:
    if (ctx->pc == 0x5408B0u) {
        ctx->pc = 0x5408B4u;
        goto label_5408b4;
    }
    ctx->pc = 0x5408ACu;
    {
        const bool branch_taken_0x5408ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5408ac) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5408B4u;
label_5408b4:
    // 0x5408b4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x5408b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_5408b8:
    // 0x5408b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5408b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5408bc:
    // 0x5408bc: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5408bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5408c0:
    // 0x5408c0: 0xc14f45c  jal         func_53D170
label_5408c4:
    if (ctx->pc == 0x5408C4u) {
        ctx->pc = 0x5408C4u;
            // 0x5408c4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5408C8u;
        goto label_5408c8;
    }
    ctx->pc = 0x5408C0u;
    SET_GPR_U32(ctx, 31, 0x5408C8u);
    ctx->pc = 0x5408C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5408C0u;
            // 0x5408c4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5408C8u; }
        if (ctx->pc != 0x5408C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5408C8u; }
        if (ctx->pc != 0x5408C8u) { return; }
    }
    ctx->pc = 0x5408C8u;
label_5408c8:
    // 0x5408c8: 0x1000006c  b           . + 4 + (0x6C << 2)
label_5408cc:
    if (ctx->pc == 0x5408CCu) {
        ctx->pc = 0x5408D0u;
        goto label_5408d0;
    }
    ctx->pc = 0x5408C8u;
    {
        const bool branch_taken_0x5408c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5408c8) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5408D0u;
label_5408d0:
    // 0x5408d0: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x5408d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_5408d4:
    // 0x5408d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5408d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5408d8:
    // 0x5408d8: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5408d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5408dc:
    // 0x5408dc: 0xc14f45c  jal         func_53D170
label_5408e0:
    if (ctx->pc == 0x5408E0u) {
        ctx->pc = 0x5408E0u;
            // 0x5408e0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5408E4u;
        goto label_5408e4;
    }
    ctx->pc = 0x5408DCu;
    SET_GPR_U32(ctx, 31, 0x5408E4u);
    ctx->pc = 0x5408E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5408DCu;
            // 0x5408e0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5408E4u; }
        if (ctx->pc != 0x5408E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5408E4u; }
        if (ctx->pc != 0x5408E4u) { return; }
    }
    ctx->pc = 0x5408E4u;
label_5408e4:
    // 0x5408e4: 0x10000065  b           . + 4 + (0x65 << 2)
label_5408e8:
    if (ctx->pc == 0x5408E8u) {
        ctx->pc = 0x5408ECu;
        goto label_5408ec;
    }
    ctx->pc = 0x5408E4u;
    {
        const bool branch_taken_0x5408e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5408e4) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5408ECu;
label_5408ec:
    // 0x5408ec: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x5408ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_5408f0:
    // 0x5408f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5408f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5408f4:
    // 0x5408f4: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5408f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5408f8:
    // 0x5408f8: 0xc14f45c  jal         func_53D170
label_5408fc:
    if (ctx->pc == 0x5408FCu) {
        ctx->pc = 0x5408FCu;
            // 0x5408fc: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540900u;
        goto label_540900;
    }
    ctx->pc = 0x5408F8u;
    SET_GPR_U32(ctx, 31, 0x540900u);
    ctx->pc = 0x5408FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5408F8u;
            // 0x5408fc: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540900u; }
        if (ctx->pc != 0x540900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540900u; }
        if (ctx->pc != 0x540900u) { return; }
    }
    ctx->pc = 0x540900u;
label_540900:
    // 0x540900: 0x1000005e  b           . + 4 + (0x5E << 2)
label_540904:
    if (ctx->pc == 0x540904u) {
        ctx->pc = 0x540908u;
        goto label_540908;
    }
    ctx->pc = 0x540900u;
    {
        const bool branch_taken_0x540900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540900) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540908u;
label_540908:
    // 0x540908: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x540908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_54090c:
    // 0x54090c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_540910:
    if (ctx->pc == 0x540910u) {
        ctx->pc = 0x540910u;
            // 0x540910: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->pc = 0x540914u;
        goto label_540914;
    }
    ctx->pc = 0x54090Cu;
    {
        const bool branch_taken_0x54090c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54090c) {
            ctx->pc = 0x540910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54090Cu;
            // 0x540910: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540930u;
            goto label_540930;
        }
    }
    ctx->pc = 0x540914u;
label_540914:
    // 0x540914: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x540914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_540918:
    // 0x540918: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54091c:
    // 0x54091c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54091cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540920:
    // 0x540920: 0xc14f45c  jal         func_53D170
label_540924:
    if (ctx->pc == 0x540924u) {
        ctx->pc = 0x540924u;
            // 0x540924: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540928u;
        goto label_540928;
    }
    ctx->pc = 0x540920u;
    SET_GPR_U32(ctx, 31, 0x540928u);
    ctx->pc = 0x540924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540920u;
            // 0x540924: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540928u; }
        if (ctx->pc != 0x540928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540928u; }
        if (ctx->pc != 0x540928u) { return; }
    }
    ctx->pc = 0x540928u;
label_540928:
    // 0x540928: 0x10000054  b           . + 4 + (0x54 << 2)
label_54092c:
    if (ctx->pc == 0x54092Cu) {
        ctx->pc = 0x540930u;
        goto label_540930;
    }
    ctx->pc = 0x540928u;
    {
        const bool branch_taken_0x540928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540928) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540930u;
label_540930:
    // 0x540930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540934:
    // 0x540934: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540938:
    // 0x540938: 0xc14f45c  jal         func_53D170
label_54093c:
    if (ctx->pc == 0x54093Cu) {
        ctx->pc = 0x54093Cu;
            // 0x54093c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540940u;
        goto label_540940;
    }
    ctx->pc = 0x540938u;
    SET_GPR_U32(ctx, 31, 0x540940u);
    ctx->pc = 0x54093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540938u;
            // 0x54093c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540940u; }
        if (ctx->pc != 0x540940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540940u; }
        if (ctx->pc != 0x540940u) { return; }
    }
    ctx->pc = 0x540940u;
label_540940:
    // 0x540940: 0x1000004e  b           . + 4 + (0x4E << 2)
label_540944:
    if (ctx->pc == 0x540944u) {
        ctx->pc = 0x540948u;
        goto label_540948;
    }
    ctx->pc = 0x540940u;
    {
        const bool branch_taken_0x540940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540940) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540948u;
label_540948:
    // 0x540948: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x540948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_54094c:
    // 0x54094c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_540950:
    if (ctx->pc == 0x540950u) {
        ctx->pc = 0x540950u;
            // 0x540950: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->pc = 0x540954u;
        goto label_540954;
    }
    ctx->pc = 0x54094Cu;
    {
        const bool branch_taken_0x54094c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54094c) {
            ctx->pc = 0x540950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54094Cu;
            // 0x540950: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540970u;
            goto label_540970;
        }
    }
    ctx->pc = 0x540954u;
label_540954:
    // 0x540954: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x540954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_540958:
    // 0x540958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54095c:
    // 0x54095c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54095cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540960:
    // 0x540960: 0xc14f45c  jal         func_53D170
label_540964:
    if (ctx->pc == 0x540964u) {
        ctx->pc = 0x540964u;
            // 0x540964: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540968u;
        goto label_540968;
    }
    ctx->pc = 0x540960u;
    SET_GPR_U32(ctx, 31, 0x540968u);
    ctx->pc = 0x540964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540960u;
            // 0x540964: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540968u; }
        if (ctx->pc != 0x540968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540968u; }
        if (ctx->pc != 0x540968u) { return; }
    }
    ctx->pc = 0x540968u;
label_540968:
    // 0x540968: 0x10000044  b           . + 4 + (0x44 << 2)
label_54096c:
    if (ctx->pc == 0x54096Cu) {
        ctx->pc = 0x540970u;
        goto label_540970;
    }
    ctx->pc = 0x540968u;
    {
        const bool branch_taken_0x540968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540968) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540970u;
label_540970:
    // 0x540970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540974:
    // 0x540974: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540978:
    // 0x540978: 0xc14f45c  jal         func_53D170
label_54097c:
    if (ctx->pc == 0x54097Cu) {
        ctx->pc = 0x54097Cu;
            // 0x54097c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540980u;
        goto label_540980;
    }
    ctx->pc = 0x540978u;
    SET_GPR_U32(ctx, 31, 0x540980u);
    ctx->pc = 0x54097Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540978u;
            // 0x54097c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540980u; }
        if (ctx->pc != 0x540980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540980u; }
        if (ctx->pc != 0x540980u) { return; }
    }
    ctx->pc = 0x540980u;
label_540980:
    // 0x540980: 0x1000003e  b           . + 4 + (0x3E << 2)
label_540984:
    if (ctx->pc == 0x540984u) {
        ctx->pc = 0x540988u;
        goto label_540988;
    }
    ctx->pc = 0x540980u;
    {
        const bool branch_taken_0x540980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540980) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540988u;
label_540988:
    // 0x540988: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x540988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_54098c:
    // 0x54098c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x54098cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540990:
    // 0x540990: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540994:
    // 0x540994: 0xc14f45c  jal         func_53D170
label_540998:
    if (ctx->pc == 0x540998u) {
        ctx->pc = 0x540998u;
            // 0x540998: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x54099Cu;
        goto label_54099c;
    }
    ctx->pc = 0x540994u;
    SET_GPR_U32(ctx, 31, 0x54099Cu);
    ctx->pc = 0x540998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540994u;
            // 0x540998: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54099Cu; }
        if (ctx->pc != 0x54099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54099Cu; }
        if (ctx->pc != 0x54099Cu) { return; }
    }
    ctx->pc = 0x54099Cu;
label_54099c:
    // 0x54099c: 0x10000037  b           . + 4 + (0x37 << 2)
label_5409a0:
    if (ctx->pc == 0x5409A0u) {
        ctx->pc = 0x5409A4u;
        goto label_5409a4;
    }
    ctx->pc = 0x54099Cu;
    {
        const bool branch_taken_0x54099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54099c) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5409A4u;
label_5409a4:
    // 0x5409a4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x5409a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_5409a8:
    // 0x5409a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5409a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5409ac:
    // 0x5409ac: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5409acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5409b0:
    // 0x5409b0: 0xc14f45c  jal         func_53D170
label_5409b4:
    if (ctx->pc == 0x5409B4u) {
        ctx->pc = 0x5409B4u;
            // 0x5409b4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5409B8u;
        goto label_5409b8;
    }
    ctx->pc = 0x5409B0u;
    SET_GPR_U32(ctx, 31, 0x5409B8u);
    ctx->pc = 0x5409B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5409B0u;
            // 0x5409b4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5409B8u; }
        if (ctx->pc != 0x5409B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5409B8u; }
        if (ctx->pc != 0x5409B8u) { return; }
    }
    ctx->pc = 0x5409B8u;
label_5409b8:
    // 0x5409b8: 0x10000030  b           . + 4 + (0x30 << 2)
label_5409bc:
    if (ctx->pc == 0x5409BCu) {
        ctx->pc = 0x5409C0u;
        goto label_5409c0;
    }
    ctx->pc = 0x5409B8u;
    {
        const bool branch_taken_0x5409b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5409b8) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5409C0u;
label_5409c0:
    // 0x5409c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x5409c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_5409c4:
    // 0x5409c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5409c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5409c8:
    // 0x5409c8: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5409c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5409cc:
    // 0x5409cc: 0xc14f45c  jal         func_53D170
label_5409d0:
    if (ctx->pc == 0x5409D0u) {
        ctx->pc = 0x5409D0u;
            // 0x5409d0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5409D4u;
        goto label_5409d4;
    }
    ctx->pc = 0x5409CCu;
    SET_GPR_U32(ctx, 31, 0x5409D4u);
    ctx->pc = 0x5409D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5409CCu;
            // 0x5409d0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5409D4u; }
        if (ctx->pc != 0x5409D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5409D4u; }
        if (ctx->pc != 0x5409D4u) { return; }
    }
    ctx->pc = 0x5409D4u;
label_5409d4:
    // 0x5409d4: 0x10000029  b           . + 4 + (0x29 << 2)
label_5409d8:
    if (ctx->pc == 0x5409D8u) {
        ctx->pc = 0x5409DCu;
        goto label_5409dc;
    }
    ctx->pc = 0x5409D4u;
    {
        const bool branch_taken_0x5409d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5409d4) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5409DCu;
label_5409dc:
    // 0x5409dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x5409dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_5409e0:
    // 0x5409e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5409e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5409e4:
    // 0x5409e4: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5409e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5409e8:
    // 0x5409e8: 0xc14f45c  jal         func_53D170
label_5409ec:
    if (ctx->pc == 0x5409ECu) {
        ctx->pc = 0x5409ECu;
            // 0x5409ec: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5409F0u;
        goto label_5409f0;
    }
    ctx->pc = 0x5409E8u;
    SET_GPR_U32(ctx, 31, 0x5409F0u);
    ctx->pc = 0x5409ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5409E8u;
            // 0x5409ec: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5409F0u; }
        if (ctx->pc != 0x5409F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5409F0u; }
        if (ctx->pc != 0x5409F0u) { return; }
    }
    ctx->pc = 0x5409F0u;
label_5409f0:
    // 0x5409f0: 0x10000022  b           . + 4 + (0x22 << 2)
label_5409f4:
    if (ctx->pc == 0x5409F4u) {
        ctx->pc = 0x5409F8u;
        goto label_5409f8;
    }
    ctx->pc = 0x5409F0u;
    {
        const bool branch_taken_0x5409f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5409f0) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x5409F8u;
label_5409f8:
    // 0x5409f8: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x5409f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_5409fc:
    // 0x5409fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5409fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540a00:
    // 0x540a00: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540a04:
    // 0x540a04: 0xc14f45c  jal         func_53D170
label_540a08:
    if (ctx->pc == 0x540A08u) {
        ctx->pc = 0x540A08u;
            // 0x540a08: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540A0Cu;
        goto label_540a0c;
    }
    ctx->pc = 0x540A04u;
    SET_GPR_U32(ctx, 31, 0x540A0Cu);
    ctx->pc = 0x540A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540A04u;
            // 0x540a08: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A0Cu; }
        if (ctx->pc != 0x540A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A0Cu; }
        if (ctx->pc != 0x540A0Cu) { return; }
    }
    ctx->pc = 0x540A0Cu;
label_540a0c:
    // 0x540a0c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_540a10:
    if (ctx->pc == 0x540A10u) {
        ctx->pc = 0x540A14u;
        goto label_540a14;
    }
    ctx->pc = 0x540A0Cu;
    {
        const bool branch_taken_0x540a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540a0c) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540A14u;
label_540a14:
    // 0x540a14: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x540a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_540a18:
    // 0x540a18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540a1c:
    // 0x540a1c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540a20:
    // 0x540a20: 0xc14f45c  jal         func_53D170
label_540a24:
    if (ctx->pc == 0x540A24u) {
        ctx->pc = 0x540A24u;
            // 0x540a24: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540A28u;
        goto label_540a28;
    }
    ctx->pc = 0x540A20u;
    SET_GPR_U32(ctx, 31, 0x540A28u);
    ctx->pc = 0x540A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540A20u;
            // 0x540a24: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A28u; }
        if (ctx->pc != 0x540A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A28u; }
        if (ctx->pc != 0x540A28u) { return; }
    }
    ctx->pc = 0x540A28u;
label_540a28:
    // 0x540a28: 0x10000014  b           . + 4 + (0x14 << 2)
label_540a2c:
    if (ctx->pc == 0x540A2Cu) {
        ctx->pc = 0x540A30u;
        goto label_540a30;
    }
    ctx->pc = 0x540A28u;
    {
        const bool branch_taken_0x540a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540a28) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540A30u;
label_540a30:
    // 0x540a30: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x540a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_540a34:
    // 0x540a34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540a38:
    // 0x540a38: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540a3c:
    // 0x540a3c: 0xc14f45c  jal         func_53D170
label_540a40:
    if (ctx->pc == 0x540A40u) {
        ctx->pc = 0x540A40u;
            // 0x540a40: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540A44u;
        goto label_540a44;
    }
    ctx->pc = 0x540A3Cu;
    SET_GPR_U32(ctx, 31, 0x540A44u);
    ctx->pc = 0x540A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540A3Cu;
            // 0x540a40: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A44u; }
        if (ctx->pc != 0x540A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A44u; }
        if (ctx->pc != 0x540A44u) { return; }
    }
    ctx->pc = 0x540A44u;
label_540a44:
    // 0x540a44: 0x1000000d  b           . + 4 + (0xD << 2)
label_540a48:
    if (ctx->pc == 0x540A48u) {
        ctx->pc = 0x540A4Cu;
        goto label_540a4c;
    }
    ctx->pc = 0x540A44u;
    {
        const bool branch_taken_0x540a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540a44) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540A4Cu;
label_540a4c:
    // 0x540a4c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x540a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_540a50:
    // 0x540a50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540a54:
    // 0x540a54: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540a58:
    // 0x540a58: 0xc14f45c  jal         func_53D170
label_540a5c:
    if (ctx->pc == 0x540A5Cu) {
        ctx->pc = 0x540A5Cu;
            // 0x540a5c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540A60u;
        goto label_540a60;
    }
    ctx->pc = 0x540A58u;
    SET_GPR_U32(ctx, 31, 0x540A60u);
    ctx->pc = 0x540A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540A58u;
            // 0x540a5c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A60u; }
        if (ctx->pc != 0x540A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A60u; }
        if (ctx->pc != 0x540A60u) { return; }
    }
    ctx->pc = 0x540A60u;
label_540a60:
    // 0x540a60: 0x10000006  b           . + 4 + (0x6 << 2)
label_540a64:
    if (ctx->pc == 0x540A64u) {
        ctx->pc = 0x540A68u;
        goto label_540a68;
    }
    ctx->pc = 0x540A60u;
    {
        const bool branch_taken_0x540a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540a60) {
            ctx->pc = 0x540A7Cu;
            goto label_540a7c;
        }
    }
    ctx->pc = 0x540A68u;
label_540a68:
    // 0x540a68: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x540a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_540a6c:
    // 0x540a6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540a70:
    // 0x540a70: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540a74:
    // 0x540a74: 0xc14f45c  jal         func_53D170
label_540a78:
    if (ctx->pc == 0x540A78u) {
        ctx->pc = 0x540A78u;
            // 0x540a78: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540A7Cu;
        goto label_540a7c;
    }
    ctx->pc = 0x540A74u;
    SET_GPR_U32(ctx, 31, 0x540A7Cu);
    ctx->pc = 0x540A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540A74u;
            // 0x540a78: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A7Cu; }
        if (ctx->pc != 0x540A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540A7Cu; }
        if (ctx->pc != 0x540A7Cu) { return; }
    }
    ctx->pc = 0x540A7Cu;
label_540a7c:
    // 0x540a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x540a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_540a80:
    // 0x540a80: 0x3e00008  jr          $ra
label_540a84:
    if (ctx->pc == 0x540A84u) {
        ctx->pc = 0x540A84u;
            // 0x540a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x540A88u;
        goto label_540a88;
    }
    ctx->pc = 0x540A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x540A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540A80u;
            // 0x540a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x540A88u;
label_540a88:
    // 0x540a88: 0x0  nop
    ctx->pc = 0x540a88u;
    // NOP
label_540a8c:
    // 0x540a8c: 0x0  nop
    ctx->pc = 0x540a8cu;
    // NOP
}
