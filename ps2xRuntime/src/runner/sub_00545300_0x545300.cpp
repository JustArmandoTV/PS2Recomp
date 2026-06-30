#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00545300
// Address: 0x545300 - 0x545790
void sub_00545300_0x545300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00545300_0x545300");
#endif

    switch (ctx->pc) {
        case 0x545300u: goto label_545300;
        case 0x545304u: goto label_545304;
        case 0x545308u: goto label_545308;
        case 0x54530cu: goto label_54530c;
        case 0x545310u: goto label_545310;
        case 0x545314u: goto label_545314;
        case 0x545318u: goto label_545318;
        case 0x54531cu: goto label_54531c;
        case 0x545320u: goto label_545320;
        case 0x545324u: goto label_545324;
        case 0x545328u: goto label_545328;
        case 0x54532cu: goto label_54532c;
        case 0x545330u: goto label_545330;
        case 0x545334u: goto label_545334;
        case 0x545338u: goto label_545338;
        case 0x54533cu: goto label_54533c;
        case 0x545340u: goto label_545340;
        case 0x545344u: goto label_545344;
        case 0x545348u: goto label_545348;
        case 0x54534cu: goto label_54534c;
        case 0x545350u: goto label_545350;
        case 0x545354u: goto label_545354;
        case 0x545358u: goto label_545358;
        case 0x54535cu: goto label_54535c;
        case 0x545360u: goto label_545360;
        case 0x545364u: goto label_545364;
        case 0x545368u: goto label_545368;
        case 0x54536cu: goto label_54536c;
        case 0x545370u: goto label_545370;
        case 0x545374u: goto label_545374;
        case 0x545378u: goto label_545378;
        case 0x54537cu: goto label_54537c;
        case 0x545380u: goto label_545380;
        case 0x545384u: goto label_545384;
        case 0x545388u: goto label_545388;
        case 0x54538cu: goto label_54538c;
        case 0x545390u: goto label_545390;
        case 0x545394u: goto label_545394;
        case 0x545398u: goto label_545398;
        case 0x54539cu: goto label_54539c;
        case 0x5453a0u: goto label_5453a0;
        case 0x5453a4u: goto label_5453a4;
        case 0x5453a8u: goto label_5453a8;
        case 0x5453acu: goto label_5453ac;
        case 0x5453b0u: goto label_5453b0;
        case 0x5453b4u: goto label_5453b4;
        case 0x5453b8u: goto label_5453b8;
        case 0x5453bcu: goto label_5453bc;
        case 0x5453c0u: goto label_5453c0;
        case 0x5453c4u: goto label_5453c4;
        case 0x5453c8u: goto label_5453c8;
        case 0x5453ccu: goto label_5453cc;
        case 0x5453d0u: goto label_5453d0;
        case 0x5453d4u: goto label_5453d4;
        case 0x5453d8u: goto label_5453d8;
        case 0x5453dcu: goto label_5453dc;
        case 0x5453e0u: goto label_5453e0;
        case 0x5453e4u: goto label_5453e4;
        case 0x5453e8u: goto label_5453e8;
        case 0x5453ecu: goto label_5453ec;
        case 0x5453f0u: goto label_5453f0;
        case 0x5453f4u: goto label_5453f4;
        case 0x5453f8u: goto label_5453f8;
        case 0x5453fcu: goto label_5453fc;
        case 0x545400u: goto label_545400;
        case 0x545404u: goto label_545404;
        case 0x545408u: goto label_545408;
        case 0x54540cu: goto label_54540c;
        case 0x545410u: goto label_545410;
        case 0x545414u: goto label_545414;
        case 0x545418u: goto label_545418;
        case 0x54541cu: goto label_54541c;
        case 0x545420u: goto label_545420;
        case 0x545424u: goto label_545424;
        case 0x545428u: goto label_545428;
        case 0x54542cu: goto label_54542c;
        case 0x545430u: goto label_545430;
        case 0x545434u: goto label_545434;
        case 0x545438u: goto label_545438;
        case 0x54543cu: goto label_54543c;
        case 0x545440u: goto label_545440;
        case 0x545444u: goto label_545444;
        case 0x545448u: goto label_545448;
        case 0x54544cu: goto label_54544c;
        case 0x545450u: goto label_545450;
        case 0x545454u: goto label_545454;
        case 0x545458u: goto label_545458;
        case 0x54545cu: goto label_54545c;
        case 0x545460u: goto label_545460;
        case 0x545464u: goto label_545464;
        case 0x545468u: goto label_545468;
        case 0x54546cu: goto label_54546c;
        case 0x545470u: goto label_545470;
        case 0x545474u: goto label_545474;
        case 0x545478u: goto label_545478;
        case 0x54547cu: goto label_54547c;
        case 0x545480u: goto label_545480;
        case 0x545484u: goto label_545484;
        case 0x545488u: goto label_545488;
        case 0x54548cu: goto label_54548c;
        case 0x545490u: goto label_545490;
        case 0x545494u: goto label_545494;
        case 0x545498u: goto label_545498;
        case 0x54549cu: goto label_54549c;
        case 0x5454a0u: goto label_5454a0;
        case 0x5454a4u: goto label_5454a4;
        case 0x5454a8u: goto label_5454a8;
        case 0x5454acu: goto label_5454ac;
        case 0x5454b0u: goto label_5454b0;
        case 0x5454b4u: goto label_5454b4;
        case 0x5454b8u: goto label_5454b8;
        case 0x5454bcu: goto label_5454bc;
        case 0x5454c0u: goto label_5454c0;
        case 0x5454c4u: goto label_5454c4;
        case 0x5454c8u: goto label_5454c8;
        case 0x5454ccu: goto label_5454cc;
        case 0x5454d0u: goto label_5454d0;
        case 0x5454d4u: goto label_5454d4;
        case 0x5454d8u: goto label_5454d8;
        case 0x5454dcu: goto label_5454dc;
        case 0x5454e0u: goto label_5454e0;
        case 0x5454e4u: goto label_5454e4;
        case 0x5454e8u: goto label_5454e8;
        case 0x5454ecu: goto label_5454ec;
        case 0x5454f0u: goto label_5454f0;
        case 0x5454f4u: goto label_5454f4;
        case 0x5454f8u: goto label_5454f8;
        case 0x5454fcu: goto label_5454fc;
        case 0x545500u: goto label_545500;
        case 0x545504u: goto label_545504;
        case 0x545508u: goto label_545508;
        case 0x54550cu: goto label_54550c;
        case 0x545510u: goto label_545510;
        case 0x545514u: goto label_545514;
        case 0x545518u: goto label_545518;
        case 0x54551cu: goto label_54551c;
        case 0x545520u: goto label_545520;
        case 0x545524u: goto label_545524;
        case 0x545528u: goto label_545528;
        case 0x54552cu: goto label_54552c;
        case 0x545530u: goto label_545530;
        case 0x545534u: goto label_545534;
        case 0x545538u: goto label_545538;
        case 0x54553cu: goto label_54553c;
        case 0x545540u: goto label_545540;
        case 0x545544u: goto label_545544;
        case 0x545548u: goto label_545548;
        case 0x54554cu: goto label_54554c;
        case 0x545550u: goto label_545550;
        case 0x545554u: goto label_545554;
        case 0x545558u: goto label_545558;
        case 0x54555cu: goto label_54555c;
        case 0x545560u: goto label_545560;
        case 0x545564u: goto label_545564;
        case 0x545568u: goto label_545568;
        case 0x54556cu: goto label_54556c;
        case 0x545570u: goto label_545570;
        case 0x545574u: goto label_545574;
        case 0x545578u: goto label_545578;
        case 0x54557cu: goto label_54557c;
        case 0x545580u: goto label_545580;
        case 0x545584u: goto label_545584;
        case 0x545588u: goto label_545588;
        case 0x54558cu: goto label_54558c;
        case 0x545590u: goto label_545590;
        case 0x545594u: goto label_545594;
        case 0x545598u: goto label_545598;
        case 0x54559cu: goto label_54559c;
        case 0x5455a0u: goto label_5455a0;
        case 0x5455a4u: goto label_5455a4;
        case 0x5455a8u: goto label_5455a8;
        case 0x5455acu: goto label_5455ac;
        case 0x5455b0u: goto label_5455b0;
        case 0x5455b4u: goto label_5455b4;
        case 0x5455b8u: goto label_5455b8;
        case 0x5455bcu: goto label_5455bc;
        case 0x5455c0u: goto label_5455c0;
        case 0x5455c4u: goto label_5455c4;
        case 0x5455c8u: goto label_5455c8;
        case 0x5455ccu: goto label_5455cc;
        case 0x5455d0u: goto label_5455d0;
        case 0x5455d4u: goto label_5455d4;
        case 0x5455d8u: goto label_5455d8;
        case 0x5455dcu: goto label_5455dc;
        case 0x5455e0u: goto label_5455e0;
        case 0x5455e4u: goto label_5455e4;
        case 0x5455e8u: goto label_5455e8;
        case 0x5455ecu: goto label_5455ec;
        case 0x5455f0u: goto label_5455f0;
        case 0x5455f4u: goto label_5455f4;
        case 0x5455f8u: goto label_5455f8;
        case 0x5455fcu: goto label_5455fc;
        case 0x545600u: goto label_545600;
        case 0x545604u: goto label_545604;
        case 0x545608u: goto label_545608;
        case 0x54560cu: goto label_54560c;
        case 0x545610u: goto label_545610;
        case 0x545614u: goto label_545614;
        case 0x545618u: goto label_545618;
        case 0x54561cu: goto label_54561c;
        case 0x545620u: goto label_545620;
        case 0x545624u: goto label_545624;
        case 0x545628u: goto label_545628;
        case 0x54562cu: goto label_54562c;
        case 0x545630u: goto label_545630;
        case 0x545634u: goto label_545634;
        case 0x545638u: goto label_545638;
        case 0x54563cu: goto label_54563c;
        case 0x545640u: goto label_545640;
        case 0x545644u: goto label_545644;
        case 0x545648u: goto label_545648;
        case 0x54564cu: goto label_54564c;
        case 0x545650u: goto label_545650;
        case 0x545654u: goto label_545654;
        case 0x545658u: goto label_545658;
        case 0x54565cu: goto label_54565c;
        case 0x545660u: goto label_545660;
        case 0x545664u: goto label_545664;
        case 0x545668u: goto label_545668;
        case 0x54566cu: goto label_54566c;
        case 0x545670u: goto label_545670;
        case 0x545674u: goto label_545674;
        case 0x545678u: goto label_545678;
        case 0x54567cu: goto label_54567c;
        case 0x545680u: goto label_545680;
        case 0x545684u: goto label_545684;
        case 0x545688u: goto label_545688;
        case 0x54568cu: goto label_54568c;
        case 0x545690u: goto label_545690;
        case 0x545694u: goto label_545694;
        case 0x545698u: goto label_545698;
        case 0x54569cu: goto label_54569c;
        case 0x5456a0u: goto label_5456a0;
        case 0x5456a4u: goto label_5456a4;
        case 0x5456a8u: goto label_5456a8;
        case 0x5456acu: goto label_5456ac;
        case 0x5456b0u: goto label_5456b0;
        case 0x5456b4u: goto label_5456b4;
        case 0x5456b8u: goto label_5456b8;
        case 0x5456bcu: goto label_5456bc;
        case 0x5456c0u: goto label_5456c0;
        case 0x5456c4u: goto label_5456c4;
        case 0x5456c8u: goto label_5456c8;
        case 0x5456ccu: goto label_5456cc;
        case 0x5456d0u: goto label_5456d0;
        case 0x5456d4u: goto label_5456d4;
        case 0x5456d8u: goto label_5456d8;
        case 0x5456dcu: goto label_5456dc;
        case 0x5456e0u: goto label_5456e0;
        case 0x5456e4u: goto label_5456e4;
        case 0x5456e8u: goto label_5456e8;
        case 0x5456ecu: goto label_5456ec;
        case 0x5456f0u: goto label_5456f0;
        case 0x5456f4u: goto label_5456f4;
        case 0x5456f8u: goto label_5456f8;
        case 0x5456fcu: goto label_5456fc;
        case 0x545700u: goto label_545700;
        case 0x545704u: goto label_545704;
        case 0x545708u: goto label_545708;
        case 0x54570cu: goto label_54570c;
        case 0x545710u: goto label_545710;
        case 0x545714u: goto label_545714;
        case 0x545718u: goto label_545718;
        case 0x54571cu: goto label_54571c;
        case 0x545720u: goto label_545720;
        case 0x545724u: goto label_545724;
        case 0x545728u: goto label_545728;
        case 0x54572cu: goto label_54572c;
        case 0x545730u: goto label_545730;
        case 0x545734u: goto label_545734;
        case 0x545738u: goto label_545738;
        case 0x54573cu: goto label_54573c;
        case 0x545740u: goto label_545740;
        case 0x545744u: goto label_545744;
        case 0x545748u: goto label_545748;
        case 0x54574cu: goto label_54574c;
        case 0x545750u: goto label_545750;
        case 0x545754u: goto label_545754;
        case 0x545758u: goto label_545758;
        case 0x54575cu: goto label_54575c;
        case 0x545760u: goto label_545760;
        case 0x545764u: goto label_545764;
        case 0x545768u: goto label_545768;
        case 0x54576cu: goto label_54576c;
        case 0x545770u: goto label_545770;
        case 0x545774u: goto label_545774;
        case 0x545778u: goto label_545778;
        case 0x54577cu: goto label_54577c;
        case 0x545780u: goto label_545780;
        case 0x545784u: goto label_545784;
        case 0x545788u: goto label_545788;
        case 0x54578cu: goto label_54578c;
        default: break;
    }

    ctx->pc = 0x545300u;

label_545300:
    // 0x545300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x545300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_545304:
    // 0x545304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x545304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_545308:
    // 0x545308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_54530c:
    // 0x54530c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_545310:
    // 0x545310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x545310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_545314:
    // 0x545314: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_545318:
    if (ctx->pc == 0x545318u) {
        ctx->pc = 0x545318u;
            // 0x545318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54531Cu;
        goto label_54531c;
    }
    ctx->pc = 0x545314u;
    {
        const bool branch_taken_0x545314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x545318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545314u;
            // 0x545318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545314) {
            ctx->pc = 0x545448u;
            goto label_545448;
        }
    }
    ctx->pc = 0x54531Cu;
label_54531c:
    // 0x54531c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x54531cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545320:
    // 0x545320: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x545320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_545324:
    // 0x545324: 0x246377d0  addiu       $v1, $v1, 0x77D0
    ctx->pc = 0x545324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30672));
label_545328:
    // 0x545328: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x545328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_54532c:
    // 0x54532c: 0x24427808  addiu       $v0, $v0, 0x7808
    ctx->pc = 0x54532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30728));
label_545330:
    // 0x545330: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x545330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_545334:
    // 0x545334: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x545334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_545338:
    // 0x545338: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x545338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_54533c:
    // 0x54533c: 0xc0407c0  jal         func_101F00
label_545340:
    if (ctx->pc == 0x545340u) {
        ctx->pc = 0x545340u;
            // 0x545340: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
        ctx->pc = 0x545344u;
        goto label_545344;
    }
    ctx->pc = 0x54533Cu;
    SET_GPR_U32(ctx, 31, 0x545344u);
    ctx->pc = 0x545340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54533Cu;
            // 0x545340: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545344u; }
        if (ctx->pc != 0x545344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545344u; }
        if (ctx->pc != 0x545344u) { return; }
    }
    ctx->pc = 0x545344u;
label_545344:
    // 0x545344: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x545344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_545348:
    // 0x545348: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_54534c:
    if (ctx->pc == 0x54534Cu) {
        ctx->pc = 0x54534Cu;
            // 0x54534c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x545350u;
        goto label_545350;
    }
    ctx->pc = 0x545348u;
    {
        const bool branch_taken_0x545348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x545348) {
            ctx->pc = 0x54534Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545348u;
            // 0x54534c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54535Cu;
            goto label_54535c;
        }
    }
    ctx->pc = 0x545350u;
label_545350:
    // 0x545350: 0xc07507c  jal         func_1D41F0
label_545354:
    if (ctx->pc == 0x545354u) {
        ctx->pc = 0x545354u;
            // 0x545354: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x545358u;
        goto label_545358;
    }
    ctx->pc = 0x545350u;
    SET_GPR_U32(ctx, 31, 0x545358u);
    ctx->pc = 0x545354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545350u;
            // 0x545354: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545358u; }
        if (ctx->pc != 0x545358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545358u; }
        if (ctx->pc != 0x545358u) { return; }
    }
    ctx->pc = 0x545358u;
label_545358:
    // 0x545358: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x545358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_54535c:
    // 0x54535c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_545360:
    if (ctx->pc == 0x545360u) {
        ctx->pc = 0x545360u;
            // 0x545360: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x545364u;
        goto label_545364;
    }
    ctx->pc = 0x54535Cu;
    {
        const bool branch_taken_0x54535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54535c) {
            ctx->pc = 0x545360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54535Cu;
            // 0x545360: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54538Cu;
            goto label_54538c;
        }
    }
    ctx->pc = 0x545364u;
label_545364:
    // 0x545364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_545368:
    if (ctx->pc == 0x545368u) {
        ctx->pc = 0x54536Cu;
        goto label_54536c;
    }
    ctx->pc = 0x545364u;
    {
        const bool branch_taken_0x545364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x545364) {
            ctx->pc = 0x545388u;
            goto label_545388;
        }
    }
    ctx->pc = 0x54536Cu;
label_54536c:
    // 0x54536c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_545370:
    if (ctx->pc == 0x545370u) {
        ctx->pc = 0x545374u;
        goto label_545374;
    }
    ctx->pc = 0x54536Cu;
    {
        const bool branch_taken_0x54536c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54536c) {
            ctx->pc = 0x545388u;
            goto label_545388;
        }
    }
    ctx->pc = 0x545374u;
label_545374:
    // 0x545374: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x545374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_545378:
    // 0x545378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_54537c:
    if (ctx->pc == 0x54537Cu) {
        ctx->pc = 0x545380u;
        goto label_545380;
    }
    ctx->pc = 0x545378u;
    {
        const bool branch_taken_0x545378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x545378) {
            ctx->pc = 0x545388u;
            goto label_545388;
        }
    }
    ctx->pc = 0x545380u;
label_545380:
    // 0x545380: 0xc0400a8  jal         func_1002A0
label_545384:
    if (ctx->pc == 0x545384u) {
        ctx->pc = 0x545388u;
        goto label_545388;
    }
    ctx->pc = 0x545380u;
    SET_GPR_U32(ctx, 31, 0x545388u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545388u; }
        if (ctx->pc != 0x545388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545388u; }
        if (ctx->pc != 0x545388u) { return; }
    }
    ctx->pc = 0x545388u;
label_545388:
    // 0x545388: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x545388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_54538c:
    // 0x54538c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_545390:
    if (ctx->pc == 0x545390u) {
        ctx->pc = 0x545390u;
            // 0x545390: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x545394u;
        goto label_545394;
    }
    ctx->pc = 0x54538Cu;
    {
        const bool branch_taken_0x54538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54538c) {
            ctx->pc = 0x545390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54538Cu;
            // 0x545390: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5453BCu;
            goto label_5453bc;
        }
    }
    ctx->pc = 0x545394u;
label_545394:
    // 0x545394: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_545398:
    if (ctx->pc == 0x545398u) {
        ctx->pc = 0x54539Cu;
        goto label_54539c;
    }
    ctx->pc = 0x545394u;
    {
        const bool branch_taken_0x545394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x545394) {
            ctx->pc = 0x5453B8u;
            goto label_5453b8;
        }
    }
    ctx->pc = 0x54539Cu;
label_54539c:
    // 0x54539c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5453a0:
    if (ctx->pc == 0x5453A0u) {
        ctx->pc = 0x5453A4u;
        goto label_5453a4;
    }
    ctx->pc = 0x54539Cu;
    {
        const bool branch_taken_0x54539c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54539c) {
            ctx->pc = 0x5453B8u;
            goto label_5453b8;
        }
    }
    ctx->pc = 0x5453A4u;
label_5453a4:
    // 0x5453a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x5453a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_5453a8:
    // 0x5453a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5453ac:
    if (ctx->pc == 0x5453ACu) {
        ctx->pc = 0x5453B0u;
        goto label_5453b0;
    }
    ctx->pc = 0x5453A8u;
    {
        const bool branch_taken_0x5453a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5453a8) {
            ctx->pc = 0x5453B8u;
            goto label_5453b8;
        }
    }
    ctx->pc = 0x5453B0u;
label_5453b0:
    // 0x5453b0: 0xc0400a8  jal         func_1002A0
label_5453b4:
    if (ctx->pc == 0x5453B4u) {
        ctx->pc = 0x5453B8u;
        goto label_5453b8;
    }
    ctx->pc = 0x5453B0u;
    SET_GPR_U32(ctx, 31, 0x5453B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5453B8u; }
        if (ctx->pc != 0x5453B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5453B8u; }
        if (ctx->pc != 0x5453B8u) { return; }
    }
    ctx->pc = 0x5453B8u;
label_5453b8:
    // 0x5453b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x5453b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_5453bc:
    // 0x5453bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5453c0:
    if (ctx->pc == 0x5453C0u) {
        ctx->pc = 0x5453C4u;
        goto label_5453c4;
    }
    ctx->pc = 0x5453BCu;
    {
        const bool branch_taken_0x5453bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5453bc) {
            ctx->pc = 0x5453D8u;
            goto label_5453d8;
        }
    }
    ctx->pc = 0x5453C4u;
label_5453c4:
    // 0x5453c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5453c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5453c8:
    // 0x5453c8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5453c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5453cc:
    // 0x5453cc: 0x246377b8  addiu       $v1, $v1, 0x77B8
    ctx->pc = 0x5453ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30648));
label_5453d0:
    // 0x5453d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x5453d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_5453d4:
    // 0x5453d4: 0xac40b6f0  sw          $zero, -0x4910($v0)
    ctx->pc = 0x5453d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948592), GPR_U32(ctx, 0));
label_5453d8:
    // 0x5453d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_5453dc:
    if (ctx->pc == 0x5453DCu) {
        ctx->pc = 0x5453DCu;
            // 0x5453dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5453E0u;
        goto label_5453e0;
    }
    ctx->pc = 0x5453D8u;
    {
        const bool branch_taken_0x5453d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5453d8) {
            ctx->pc = 0x5453DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5453D8u;
            // 0x5453dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545434u;
            goto label_545434;
        }
    }
    ctx->pc = 0x5453E0u;
label_5453e0:
    // 0x5453e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5453e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5453e4:
    // 0x5453e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x5453e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_5453e8:
    // 0x5453e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5453e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5453ec:
    // 0x5453ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x5453ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_5453f0:
    // 0x5453f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5453f4:
    if (ctx->pc == 0x5453F4u) {
        ctx->pc = 0x5453F4u;
            // 0x5453f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x5453F8u;
        goto label_5453f8;
    }
    ctx->pc = 0x5453F0u;
    {
        const bool branch_taken_0x5453f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5453f0) {
            ctx->pc = 0x5453F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5453F0u;
            // 0x5453f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54540Cu;
            goto label_54540c;
        }
    }
    ctx->pc = 0x5453F8u;
label_5453f8:
    // 0x5453f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5453f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5453fc:
    // 0x5453fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5453fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_545400:
    // 0x545400: 0x320f809  jalr        $t9
label_545404:
    if (ctx->pc == 0x545404u) {
        ctx->pc = 0x545404u;
            // 0x545404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x545408u;
        goto label_545408;
    }
    ctx->pc = 0x545400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x545408u);
        ctx->pc = 0x545404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545400u;
            // 0x545404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x545408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x545408u; }
            if (ctx->pc != 0x545408u) { return; }
        }
        }
    }
    ctx->pc = 0x545408u;
label_545408:
    // 0x545408: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x545408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_54540c:
    // 0x54540c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_545410:
    if (ctx->pc == 0x545410u) {
        ctx->pc = 0x545410u;
            // 0x545410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545414u;
        goto label_545414;
    }
    ctx->pc = 0x54540Cu;
    {
        const bool branch_taken_0x54540c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x54540c) {
            ctx->pc = 0x545410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54540Cu;
            // 0x545410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545428u;
            goto label_545428;
        }
    }
    ctx->pc = 0x545414u;
label_545414:
    // 0x545414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x545414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_545418:
    // 0x545418: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x545418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_54541c:
    // 0x54541c: 0x320f809  jalr        $t9
label_545420:
    if (ctx->pc == 0x545420u) {
        ctx->pc = 0x545420u;
            // 0x545420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x545424u;
        goto label_545424;
    }
    ctx->pc = 0x54541Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x545424u);
        ctx->pc = 0x545420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54541Cu;
            // 0x545420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x545424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x545424u; }
            if (ctx->pc != 0x545424u) { return; }
        }
        }
    }
    ctx->pc = 0x545424u;
label_545424:
    // 0x545424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x545424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_545428:
    // 0x545428: 0xc075bf8  jal         func_1D6FE0
label_54542c:
    if (ctx->pc == 0x54542Cu) {
        ctx->pc = 0x54542Cu;
            // 0x54542c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545430u;
        goto label_545430;
    }
    ctx->pc = 0x545428u;
    SET_GPR_U32(ctx, 31, 0x545430u);
    ctx->pc = 0x54542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545428u;
            // 0x54542c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545430u; }
        if (ctx->pc != 0x545430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545430u; }
        if (ctx->pc != 0x545430u) { return; }
    }
    ctx->pc = 0x545430u;
label_545430:
    // 0x545430: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x545430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_545434:
    // 0x545434: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x545434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_545438:
    // 0x545438: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_54543c:
    if (ctx->pc == 0x54543Cu) {
        ctx->pc = 0x54543Cu;
            // 0x54543c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545440u;
        goto label_545440;
    }
    ctx->pc = 0x545438u;
    {
        const bool branch_taken_0x545438 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x545438) {
            ctx->pc = 0x54543Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545438u;
            // 0x54543c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54544Cu;
            goto label_54544c;
        }
    }
    ctx->pc = 0x545440u;
label_545440:
    // 0x545440: 0xc0400a8  jal         func_1002A0
label_545444:
    if (ctx->pc == 0x545444u) {
        ctx->pc = 0x545444u;
            // 0x545444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545448u;
        goto label_545448;
    }
    ctx->pc = 0x545440u;
    SET_GPR_U32(ctx, 31, 0x545448u);
    ctx->pc = 0x545444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545440u;
            // 0x545444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545448u; }
        if (ctx->pc != 0x545448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545448u; }
        if (ctx->pc != 0x545448u) { return; }
    }
    ctx->pc = 0x545448u;
label_545448:
    // 0x545448: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x545448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54544c:
    // 0x54544c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x54544cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_545450:
    // 0x545450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x545450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_545454:
    // 0x545454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_545458:
    // 0x545458: 0x3e00008  jr          $ra
label_54545c:
    if (ctx->pc == 0x54545Cu) {
        ctx->pc = 0x54545Cu;
            // 0x54545c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x545460u;
        goto label_545460;
    }
    ctx->pc = 0x545458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54545Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545458u;
            // 0x54545c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545460u;
label_545460:
    // 0x545460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x545460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_545464:
    // 0x545464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x545464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_545468:
    // 0x545468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_54546c:
    // 0x54546c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_545470:
    // 0x545470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x545470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_545474:
    // 0x545474: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_545478:
    if (ctx->pc == 0x545478u) {
        ctx->pc = 0x545478u;
            // 0x545478: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54547Cu;
        goto label_54547c;
    }
    ctx->pc = 0x545474u;
    {
        const bool branch_taken_0x545474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x545478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545474u;
            // 0x545478: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545474) {
            ctx->pc = 0x5454E8u;
            goto label_5454e8;
        }
    }
    ctx->pc = 0x54547Cu;
label_54547c:
    // 0x54547c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x54547cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545480:
    // 0x545480: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x545480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_545484:
    // 0x545484: 0x24637710  addiu       $v1, $v1, 0x7710
    ctx->pc = 0x545484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30480));
label_545488:
    // 0x545488: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x545488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
label_54548c:
    // 0x54548c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x54548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_545490:
    // 0x545490: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x545490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_545494:
    // 0x545494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x545494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_545498:
    // 0x545498: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x545498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54549c:
    // 0x54549c: 0x320f809  jalr        $t9
label_5454a0:
    if (ctx->pc == 0x5454A0u) {
        ctx->pc = 0x5454A4u;
        goto label_5454a4;
    }
    ctx->pc = 0x54549Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5454A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5454A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5454A4u; }
            if (ctx->pc != 0x5454A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5454A4u;
label_5454a4:
    // 0x5454a4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_5454a8:
    if (ctx->pc == 0x5454A8u) {
        ctx->pc = 0x5454A8u;
            // 0x5454a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x5454ACu;
        goto label_5454ac;
    }
    ctx->pc = 0x5454A4u;
    {
        const bool branch_taken_0x5454a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5454a4) {
            ctx->pc = 0x5454A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5454A4u;
            // 0x5454a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5454D4u;
            goto label_5454d4;
        }
    }
    ctx->pc = 0x5454ACu;
label_5454ac:
    // 0x5454ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5454acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5454b0:
    // 0x5454b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5454b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5454b4:
    // 0x5454b4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x5454b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_5454b8:
    // 0x5454b8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x5454b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_5454bc:
    // 0x5454bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5454bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5454c0:
    // 0x5454c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5454c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5454c4:
    // 0x5454c4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x5454c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_5454c8:
    // 0x5454c8: 0xc0aee40  jal         func_2BB900
label_5454cc:
    if (ctx->pc == 0x5454CCu) {
        ctx->pc = 0x5454CCu;
            // 0x5454cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5454D0u;
        goto label_5454d0;
    }
    ctx->pc = 0x5454C8u;
    SET_GPR_U32(ctx, 31, 0x5454D0u);
    ctx->pc = 0x5454CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5454C8u;
            // 0x5454cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5454D0u; }
        if (ctx->pc != 0x5454D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5454D0u; }
        if (ctx->pc != 0x5454D0u) { return; }
    }
    ctx->pc = 0x5454D0u;
label_5454d0:
    // 0x5454d0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5454d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5454d4:
    // 0x5454d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5454d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5454d8:
    // 0x5454d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5454dc:
    if (ctx->pc == 0x5454DCu) {
        ctx->pc = 0x5454DCu;
            // 0x5454dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5454E0u;
        goto label_5454e0;
    }
    ctx->pc = 0x5454D8u;
    {
        const bool branch_taken_0x5454d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5454d8) {
            ctx->pc = 0x5454DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5454D8u;
            // 0x5454dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5454ECu;
            goto label_5454ec;
        }
    }
    ctx->pc = 0x5454E0u;
label_5454e0:
    // 0x5454e0: 0xc0400a8  jal         func_1002A0
label_5454e4:
    if (ctx->pc == 0x5454E4u) {
        ctx->pc = 0x5454E4u;
            // 0x5454e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5454E8u;
        goto label_5454e8;
    }
    ctx->pc = 0x5454E0u;
    SET_GPR_U32(ctx, 31, 0x5454E8u);
    ctx->pc = 0x5454E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5454E0u;
            // 0x5454e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5454E8u; }
        if (ctx->pc != 0x5454E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5454E8u; }
        if (ctx->pc != 0x5454E8u) { return; }
    }
    ctx->pc = 0x5454E8u;
label_5454e8:
    // 0x5454e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5454e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5454ec:
    // 0x5454ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5454ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5454f0:
    // 0x5454f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5454f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5454f4:
    // 0x5454f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5454f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5454f8:
    // 0x5454f8: 0x3e00008  jr          $ra
label_5454fc:
    if (ctx->pc == 0x5454FCu) {
        ctx->pc = 0x5454FCu;
            // 0x5454fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x545500u;
        goto label_545500;
    }
    ctx->pc = 0x5454F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5454FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5454F8u;
            // 0x5454fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545500u;
label_545500:
    // 0x545500: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x545500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_545504:
    // 0x545504: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x545504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_545508:
    // 0x545508: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x545508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_54550c:
    // 0x54550c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x54550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_545510:
    // 0x545510: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x545510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_545514:
    // 0x545514: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x545514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_545518:
    // 0x545518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x545518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_54551c:
    // 0x54551c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x54551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_545520:
    // 0x545520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x545520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_545524:
    // 0x545524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_545528:
    // 0x545528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x545528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_54552c:
    // 0x54552c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x54552cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_545530:
    // 0x545530: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x545530u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_545534:
    // 0x545534: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x545534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_545538:
    // 0x545538: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_54553c:
    if (ctx->pc == 0x54553Cu) {
        ctx->pc = 0x54553Cu;
            // 0x54553c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545540u;
        goto label_545540;
    }
    ctx->pc = 0x545538u;
    {
        const bool branch_taken_0x545538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x54553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545538u;
            // 0x54553c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545538) {
            ctx->pc = 0x54557Cu;
            goto label_54557c;
        }
    }
    ctx->pc = 0x545540u;
label_545540:
    // 0x545540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x545540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_545544:
    // 0x545544: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
label_545548:
    if (ctx->pc == 0x545548u) {
        ctx->pc = 0x54554Cu;
        goto label_54554c;
    }
    ctx->pc = 0x545544u;
    {
        const bool branch_taken_0x545544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x545544) {
            ctx->pc = 0x545618u;
            goto label_545618;
        }
    }
    ctx->pc = 0x54554Cu;
label_54554c:
    // 0x54554c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_545550:
    // 0x545550: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_545554:
    if (ctx->pc == 0x545554u) {
        ctx->pc = 0x545554u;
            // 0x545554: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x545558u;
        goto label_545558;
    }
    ctx->pc = 0x545550u;
    {
        const bool branch_taken_0x545550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x545550) {
            ctx->pc = 0x545554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545550u;
            // 0x545554: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545560u;
            goto label_545560;
        }
    }
    ctx->pc = 0x545558u;
label_545558:
    // 0x545558: 0x1000002f  b           . + 4 + (0x2F << 2)
label_54555c:
    if (ctx->pc == 0x54555Cu) {
        ctx->pc = 0x545560u;
        goto label_545560;
    }
    ctx->pc = 0x545558u;
    {
        const bool branch_taken_0x545558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x545558) {
            ctx->pc = 0x545618u;
            goto label_545618;
        }
    }
    ctx->pc = 0x545560u;
label_545560:
    // 0x545560: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x545560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_545564:
    // 0x545564: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x545564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_545568:
    // 0x545568: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x545568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_54556c:
    // 0x54556c: 0x320f809  jalr        $t9
label_545570:
    if (ctx->pc == 0x545570u) {
        ctx->pc = 0x545570u;
            // 0x545570: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x545574u;
        goto label_545574;
    }
    ctx->pc = 0x54556Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x545574u);
        ctx->pc = 0x545570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54556Cu;
            // 0x545570: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x545574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x545574u; }
            if (ctx->pc != 0x545574u) { return; }
        }
        }
    }
    ctx->pc = 0x545574u;
label_545574:
    // 0x545574: 0x10000028  b           . + 4 + (0x28 << 2)
label_545578:
    if (ctx->pc == 0x545578u) {
        ctx->pc = 0x54557Cu;
        goto label_54557c;
    }
    ctx->pc = 0x545574u;
    {
        const bool branch_taken_0x545574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x545574) {
            ctx->pc = 0x545618u;
            goto label_545618;
        }
    }
    ctx->pc = 0x54557Cu;
label_54557c:
    // 0x54557c: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x54557cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_545580:
    // 0x545580: 0x12800025  beqz        $s4, . + 4 + (0x25 << 2)
label_545584:
    if (ctx->pc == 0x545584u) {
        ctx->pc = 0x545588u;
        goto label_545588;
    }
    ctx->pc = 0x545580u;
    {
        const bool branch_taken_0x545580 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x545580) {
            ctx->pc = 0x545618u;
            goto label_545618;
        }
    }
    ctx->pc = 0x545588u;
label_545588:
    // 0x545588: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x545588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_54558c:
    // 0x54558c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x54558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_545590:
    // 0x545590: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x545590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_545594:
    // 0x545594: 0x26770084  addiu       $s7, $s3, 0x84
    ctx->pc = 0x545594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_545598:
    // 0x545598: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x545598u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_54559c:
    // 0x54559c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x54559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5455a0:
    // 0x5455a0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x5455a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_5455a4:
    // 0x5455a4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5455a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5455a8:
    // 0x5455a8: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x5455a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_5455ac:
    // 0x5455ac: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x5455acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_5455b0:
    // 0x5455b0: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x5455b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_5455b4:
    // 0x5455b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x5455b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_5455b8:
    // 0x5455b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x5455b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5455bc:
    // 0x5455bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5455bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5455c0:
    // 0x5455c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5455c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5455c4:
    // 0x5455c4: 0xc04e738  jal         func_139CE0
label_5455c8:
    if (ctx->pc == 0x5455C8u) {
        ctx->pc = 0x5455C8u;
            // 0x5455c8: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x5455CCu;
        goto label_5455cc;
    }
    ctx->pc = 0x5455C4u;
    SET_GPR_U32(ctx, 31, 0x5455CCu);
    ctx->pc = 0x5455C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5455C4u;
            // 0x5455c8: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5455CCu; }
        if (ctx->pc != 0x5455CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5455CCu; }
        if (ctx->pc != 0x5455CCu) { return; }
    }
    ctx->pc = 0x5455CCu;
label_5455cc:
    // 0x5455cc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x5455ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5455d0:
    // 0x5455d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x5455d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5455d4:
    // 0x5455d4: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x5455d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_5455d8:
    // 0x5455d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5455d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5455dc:
    // 0x5455dc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x5455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5455e0:
    // 0x5455e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x5455e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_5455e4:
    // 0x5455e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x5455e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5455e8:
    // 0x5455e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x5455e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5455ec:
    // 0x5455ec: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x5455ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_5455f0:
    // 0x5455f0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x5455f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5455f4:
    // 0x5455f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x5455f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5455f8:
    // 0x5455f8: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x5455f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_5455fc:
    // 0x5455fc: 0xc15189c  jal         func_546270
label_545600:
    if (ctx->pc == 0x545600u) {
        ctx->pc = 0x545600u;
            // 0x545600: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x545604u;
        goto label_545604;
    }
    ctx->pc = 0x5455FCu;
    SET_GPR_U32(ctx, 31, 0x545604u);
    ctx->pc = 0x545600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5455FCu;
            // 0x545600: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x546270u;
    if (runtime->hasFunction(0x546270u)) {
        auto targetFn = runtime->lookupFunction(0x546270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545604u; }
        if (ctx->pc != 0x545604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00546270_0x546270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545604u; }
        if (ctx->pc != 0x545604u) { return; }
    }
    ctx->pc = 0x545604u;
label_545604:
    // 0x545604: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x545604u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_545608:
    // 0x545608: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x545608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_54560c:
    // 0x54560c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_545610:
    if (ctx->pc == 0x545610u) {
        ctx->pc = 0x545610u;
            // 0x545610: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x545614u;
        goto label_545614;
    }
    ctx->pc = 0x54560Cu;
    {
        const bool branch_taken_0x54560c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x545610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54560Cu;
            // 0x545610: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54560c) {
            ctx->pc = 0x5455D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5455d4;
        }
    }
    ctx->pc = 0x545614u;
label_545614:
    // 0x545614: 0x0  nop
    ctx->pc = 0x545614u;
    // NOP
label_545618:
    // 0x545618: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x545618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_54561c:
    // 0x54561c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x54561cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_545620:
    // 0x545620: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x545620u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_545624:
    // 0x545624: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x545624u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_545628:
    // 0x545628: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x545628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54562c:
    // 0x54562c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x54562cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_545630:
    // 0x545630: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x545630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_545634:
    // 0x545634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x545634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_545638:
    // 0x545638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_54563c:
    // 0x54563c: 0x3e00008  jr          $ra
label_545640:
    if (ctx->pc == 0x545640u) {
        ctx->pc = 0x545640u;
            // 0x545640: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x545644u;
        goto label_545644;
    }
    ctx->pc = 0x54563Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54563Cu;
            // 0x545640: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545644u;
label_545644:
    // 0x545644: 0x0  nop
    ctx->pc = 0x545644u;
    // NOP
label_545648:
    // 0x545648: 0x0  nop
    ctx->pc = 0x545648u;
    // NOP
label_54564c:
    // 0x54564c: 0x0  nop
    ctx->pc = 0x54564cu;
    // NOP
label_545650:
    // 0x545650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x545650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_545654:
    // 0x545654: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x545654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_545658:
    // 0x545658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x545658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_54565c:
    // 0x54565c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x54565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_545660:
    // 0x545660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x545660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_545664:
    // 0x545664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_545668:
    // 0x545668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x545668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_54566c:
    // 0x54566c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x54566cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_545670:
    // 0x545670: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_545674:
    if (ctx->pc == 0x545674u) {
        ctx->pc = 0x545674u;
            // 0x545674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545678u;
        goto label_545678;
    }
    ctx->pc = 0x545670u;
    {
        const bool branch_taken_0x545670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x545674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545670u;
            // 0x545674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545670) {
            ctx->pc = 0x5456A4u;
            goto label_5456a4;
        }
    }
    ctx->pc = 0x545678u;
label_545678:
    // 0x545678: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x545678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54567c:
    // 0x54567c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_545680:
    if (ctx->pc == 0x545680u) {
        ctx->pc = 0x545680u;
            // 0x545680: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x545684u;
        goto label_545684;
    }
    ctx->pc = 0x54567Cu;
    {
        const bool branch_taken_0x54567c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x54567c) {
            ctx->pc = 0x545680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54567Cu;
            // 0x545680: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545698u;
            goto label_545698;
        }
    }
    ctx->pc = 0x545684u;
label_545684:
    // 0x545684: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x545684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_545688:
    // 0x545688: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_54568c:
    if (ctx->pc == 0x54568Cu) {
        ctx->pc = 0x545690u;
        goto label_545690;
    }
    ctx->pc = 0x545688u;
    {
        const bool branch_taken_0x545688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x545688) {
            ctx->pc = 0x5456F0u;
            goto label_5456f0;
        }
    }
    ctx->pc = 0x545690u;
label_545690:
    // 0x545690: 0x10000017  b           . + 4 + (0x17 << 2)
label_545694:
    if (ctx->pc == 0x545694u) {
        ctx->pc = 0x545698u;
        goto label_545698;
    }
    ctx->pc = 0x545690u;
    {
        const bool branch_taken_0x545690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x545690) {
            ctx->pc = 0x5456F0u;
            goto label_5456f0;
        }
    }
    ctx->pc = 0x545698u;
label_545698:
    // 0x545698: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x545698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54569c:
    // 0x54569c: 0x320f809  jalr        $t9
label_5456a0:
    if (ctx->pc == 0x5456A0u) {
        ctx->pc = 0x5456A4u;
        goto label_5456a4;
    }
    ctx->pc = 0x54569Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5456A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5456A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5456A4u; }
            if (ctx->pc != 0x5456A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5456A4u;
label_5456a4:
    // 0x5456a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5456a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5456a8:
    // 0x5456a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5456a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5456ac:
    // 0x5456ac: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x5456acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5456b0:
    // 0x5456b0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5456b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5456b4:
    // 0x5456b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5456b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5456b8:
    // 0x5456b8: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x5456b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_5456bc:
    // 0x5456bc: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x5456bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_5456c0:
    // 0x5456c0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_5456c4:
    if (ctx->pc == 0x5456C4u) {
        ctx->pc = 0x5456C8u;
        goto label_5456c8;
    }
    ctx->pc = 0x5456C0u;
    {
        const bool branch_taken_0x5456c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5456c0) {
            ctx->pc = 0x5456F0u;
            goto label_5456f0;
        }
    }
    ctx->pc = 0x5456C8u;
label_5456c8:
    // 0x5456c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5456c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5456cc:
    // 0x5456cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5456ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5456d0:
    // 0x5456d0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x5456d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_5456d4:
    // 0x5456d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5456d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5456d8:
    // 0x5456d8: 0xc0e3658  jal         func_38D960
label_5456dc:
    if (ctx->pc == 0x5456DCu) {
        ctx->pc = 0x5456DCu;
            // 0x5456dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x5456E0u;
        goto label_5456e0;
    }
    ctx->pc = 0x5456D8u;
    SET_GPR_U32(ctx, 31, 0x5456E0u);
    ctx->pc = 0x5456DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5456D8u;
            // 0x5456dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5456E0u; }
        if (ctx->pc != 0x5456E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5456E0u; }
        if (ctx->pc != 0x5456E0u) { return; }
    }
    ctx->pc = 0x5456E0u;
label_5456e0:
    // 0x5456e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5456e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5456e4:
    // 0x5456e4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x5456e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_5456e8:
    // 0x5456e8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_5456ec:
    if (ctx->pc == 0x5456ECu) {
        ctx->pc = 0x5456ECu;
            // 0x5456ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5456F0u;
        goto label_5456f0;
    }
    ctx->pc = 0x5456E8u;
    {
        const bool branch_taken_0x5456e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5456ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5456E8u;
            // 0x5456ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5456e8) {
            ctx->pc = 0x5456D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5456d0;
        }
    }
    ctx->pc = 0x5456F0u;
label_5456f0:
    // 0x5456f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5456f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5456f4:
    // 0x5456f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5456f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5456f8:
    // 0x5456f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5456f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5456fc:
    // 0x5456fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5456fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_545700:
    // 0x545700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_545704:
    // 0x545704: 0x3e00008  jr          $ra
label_545708:
    if (ctx->pc == 0x545708u) {
        ctx->pc = 0x545708u;
            // 0x545708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x54570Cu;
        goto label_54570c;
    }
    ctx->pc = 0x545704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545704u;
            // 0x545708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54570Cu;
label_54570c:
    // 0x54570c: 0x0  nop
    ctx->pc = 0x54570cu;
    // NOP
label_545710:
    // 0x545710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x545710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_545714:
    // 0x545714: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x545714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_545718:
    // 0x545718: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x545718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_54571c:
    // 0x54571c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x54571cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_545720:
    // 0x545720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_545724:
    // 0x545724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x545724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_545728:
    // 0x545728: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x545728u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_54572c:
    // 0x54572c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_545730:
    if (ctx->pc == 0x545730u) {
        ctx->pc = 0x545730u;
            // 0x545730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545734u;
        goto label_545734;
    }
    ctx->pc = 0x54572Cu;
    {
        const bool branch_taken_0x54572c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x545730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54572Cu;
            // 0x545730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54572c) {
            ctx->pc = 0x545768u;
            goto label_545768;
        }
    }
    ctx->pc = 0x545734u;
label_545734:
    // 0x545734: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x545734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_545738:
    // 0x545738: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x545738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54573c:
    // 0x54573c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x54573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_545740:
    // 0x545740: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x545740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_545744:
    // 0x545744: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x545744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_545748:
    // 0x545748: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x545748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54574c:
    // 0x54574c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x54574cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_545750:
    // 0x545750: 0x320f809  jalr        $t9
label_545754:
    if (ctx->pc == 0x545754u) {
        ctx->pc = 0x545758u;
        goto label_545758;
    }
    ctx->pc = 0x545750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x545758u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x545758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x545758u; }
            if (ctx->pc != 0x545758u) { return; }
        }
        }
    }
    ctx->pc = 0x545758u;
label_545758:
    // 0x545758: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x545758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_54575c:
    // 0x54575c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x54575cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_545760:
    // 0x545760: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_545764:
    if (ctx->pc == 0x545764u) {
        ctx->pc = 0x545764u;
            // 0x545764: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x545768u;
        goto label_545768;
    }
    ctx->pc = 0x545760u;
    {
        const bool branch_taken_0x545760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x545764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545760u;
            // 0x545764: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545760) {
            ctx->pc = 0x54573Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54573c;
        }
    }
    ctx->pc = 0x545768u;
label_545768:
    // 0x545768: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x545768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_54576c:
    // 0x54576c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x54576cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_545770:
    // 0x545770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x545770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_545774:
    // 0x545774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x545774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_545778:
    // 0x545778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_54577c:
    // 0x54577c: 0x3e00008  jr          $ra
label_545780:
    if (ctx->pc == 0x545780u) {
        ctx->pc = 0x545780u;
            // 0x545780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x545784u;
        goto label_545784;
    }
    ctx->pc = 0x54577Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54577Cu;
            // 0x545780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545784u;
label_545784:
    // 0x545784: 0x0  nop
    ctx->pc = 0x545784u;
    // NOP
label_545788:
    // 0x545788: 0x0  nop
    ctx->pc = 0x545788u;
    // NOP
label_54578c:
    // 0x54578c: 0x0  nop
    ctx->pc = 0x54578cu;
    // NOP
}
