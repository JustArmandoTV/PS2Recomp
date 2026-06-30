#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295290
// Address: 0x295290 - 0x2957f0
void sub_00295290_0x295290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295290_0x295290");
#endif

    switch (ctx->pc) {
        case 0x295290u: goto label_295290;
        case 0x295294u: goto label_295294;
        case 0x295298u: goto label_295298;
        case 0x29529cu: goto label_29529c;
        case 0x2952a0u: goto label_2952a0;
        case 0x2952a4u: goto label_2952a4;
        case 0x2952a8u: goto label_2952a8;
        case 0x2952acu: goto label_2952ac;
        case 0x2952b0u: goto label_2952b0;
        case 0x2952b4u: goto label_2952b4;
        case 0x2952b8u: goto label_2952b8;
        case 0x2952bcu: goto label_2952bc;
        case 0x2952c0u: goto label_2952c0;
        case 0x2952c4u: goto label_2952c4;
        case 0x2952c8u: goto label_2952c8;
        case 0x2952ccu: goto label_2952cc;
        case 0x2952d0u: goto label_2952d0;
        case 0x2952d4u: goto label_2952d4;
        case 0x2952d8u: goto label_2952d8;
        case 0x2952dcu: goto label_2952dc;
        case 0x2952e0u: goto label_2952e0;
        case 0x2952e4u: goto label_2952e4;
        case 0x2952e8u: goto label_2952e8;
        case 0x2952ecu: goto label_2952ec;
        case 0x2952f0u: goto label_2952f0;
        case 0x2952f4u: goto label_2952f4;
        case 0x2952f8u: goto label_2952f8;
        case 0x2952fcu: goto label_2952fc;
        case 0x295300u: goto label_295300;
        case 0x295304u: goto label_295304;
        case 0x295308u: goto label_295308;
        case 0x29530cu: goto label_29530c;
        case 0x295310u: goto label_295310;
        case 0x295314u: goto label_295314;
        case 0x295318u: goto label_295318;
        case 0x29531cu: goto label_29531c;
        case 0x295320u: goto label_295320;
        case 0x295324u: goto label_295324;
        case 0x295328u: goto label_295328;
        case 0x29532cu: goto label_29532c;
        case 0x295330u: goto label_295330;
        case 0x295334u: goto label_295334;
        case 0x295338u: goto label_295338;
        case 0x29533cu: goto label_29533c;
        case 0x295340u: goto label_295340;
        case 0x295344u: goto label_295344;
        case 0x295348u: goto label_295348;
        case 0x29534cu: goto label_29534c;
        case 0x295350u: goto label_295350;
        case 0x295354u: goto label_295354;
        case 0x295358u: goto label_295358;
        case 0x29535cu: goto label_29535c;
        case 0x295360u: goto label_295360;
        case 0x295364u: goto label_295364;
        case 0x295368u: goto label_295368;
        case 0x29536cu: goto label_29536c;
        case 0x295370u: goto label_295370;
        case 0x295374u: goto label_295374;
        case 0x295378u: goto label_295378;
        case 0x29537cu: goto label_29537c;
        case 0x295380u: goto label_295380;
        case 0x295384u: goto label_295384;
        case 0x295388u: goto label_295388;
        case 0x29538cu: goto label_29538c;
        case 0x295390u: goto label_295390;
        case 0x295394u: goto label_295394;
        case 0x295398u: goto label_295398;
        case 0x29539cu: goto label_29539c;
        case 0x2953a0u: goto label_2953a0;
        case 0x2953a4u: goto label_2953a4;
        case 0x2953a8u: goto label_2953a8;
        case 0x2953acu: goto label_2953ac;
        case 0x2953b0u: goto label_2953b0;
        case 0x2953b4u: goto label_2953b4;
        case 0x2953b8u: goto label_2953b8;
        case 0x2953bcu: goto label_2953bc;
        case 0x2953c0u: goto label_2953c0;
        case 0x2953c4u: goto label_2953c4;
        case 0x2953c8u: goto label_2953c8;
        case 0x2953ccu: goto label_2953cc;
        case 0x2953d0u: goto label_2953d0;
        case 0x2953d4u: goto label_2953d4;
        case 0x2953d8u: goto label_2953d8;
        case 0x2953dcu: goto label_2953dc;
        case 0x2953e0u: goto label_2953e0;
        case 0x2953e4u: goto label_2953e4;
        case 0x2953e8u: goto label_2953e8;
        case 0x2953ecu: goto label_2953ec;
        case 0x2953f0u: goto label_2953f0;
        case 0x2953f4u: goto label_2953f4;
        case 0x2953f8u: goto label_2953f8;
        case 0x2953fcu: goto label_2953fc;
        case 0x295400u: goto label_295400;
        case 0x295404u: goto label_295404;
        case 0x295408u: goto label_295408;
        case 0x29540cu: goto label_29540c;
        case 0x295410u: goto label_295410;
        case 0x295414u: goto label_295414;
        case 0x295418u: goto label_295418;
        case 0x29541cu: goto label_29541c;
        case 0x295420u: goto label_295420;
        case 0x295424u: goto label_295424;
        case 0x295428u: goto label_295428;
        case 0x29542cu: goto label_29542c;
        case 0x295430u: goto label_295430;
        case 0x295434u: goto label_295434;
        case 0x295438u: goto label_295438;
        case 0x29543cu: goto label_29543c;
        case 0x295440u: goto label_295440;
        case 0x295444u: goto label_295444;
        case 0x295448u: goto label_295448;
        case 0x29544cu: goto label_29544c;
        case 0x295450u: goto label_295450;
        case 0x295454u: goto label_295454;
        case 0x295458u: goto label_295458;
        case 0x29545cu: goto label_29545c;
        case 0x295460u: goto label_295460;
        case 0x295464u: goto label_295464;
        case 0x295468u: goto label_295468;
        case 0x29546cu: goto label_29546c;
        case 0x295470u: goto label_295470;
        case 0x295474u: goto label_295474;
        case 0x295478u: goto label_295478;
        case 0x29547cu: goto label_29547c;
        case 0x295480u: goto label_295480;
        case 0x295484u: goto label_295484;
        case 0x295488u: goto label_295488;
        case 0x29548cu: goto label_29548c;
        case 0x295490u: goto label_295490;
        case 0x295494u: goto label_295494;
        case 0x295498u: goto label_295498;
        case 0x29549cu: goto label_29549c;
        case 0x2954a0u: goto label_2954a0;
        case 0x2954a4u: goto label_2954a4;
        case 0x2954a8u: goto label_2954a8;
        case 0x2954acu: goto label_2954ac;
        case 0x2954b0u: goto label_2954b0;
        case 0x2954b4u: goto label_2954b4;
        case 0x2954b8u: goto label_2954b8;
        case 0x2954bcu: goto label_2954bc;
        case 0x2954c0u: goto label_2954c0;
        case 0x2954c4u: goto label_2954c4;
        case 0x2954c8u: goto label_2954c8;
        case 0x2954ccu: goto label_2954cc;
        case 0x2954d0u: goto label_2954d0;
        case 0x2954d4u: goto label_2954d4;
        case 0x2954d8u: goto label_2954d8;
        case 0x2954dcu: goto label_2954dc;
        case 0x2954e0u: goto label_2954e0;
        case 0x2954e4u: goto label_2954e4;
        case 0x2954e8u: goto label_2954e8;
        case 0x2954ecu: goto label_2954ec;
        case 0x2954f0u: goto label_2954f0;
        case 0x2954f4u: goto label_2954f4;
        case 0x2954f8u: goto label_2954f8;
        case 0x2954fcu: goto label_2954fc;
        case 0x295500u: goto label_295500;
        case 0x295504u: goto label_295504;
        case 0x295508u: goto label_295508;
        case 0x29550cu: goto label_29550c;
        case 0x295510u: goto label_295510;
        case 0x295514u: goto label_295514;
        case 0x295518u: goto label_295518;
        case 0x29551cu: goto label_29551c;
        case 0x295520u: goto label_295520;
        case 0x295524u: goto label_295524;
        case 0x295528u: goto label_295528;
        case 0x29552cu: goto label_29552c;
        case 0x295530u: goto label_295530;
        case 0x295534u: goto label_295534;
        case 0x295538u: goto label_295538;
        case 0x29553cu: goto label_29553c;
        case 0x295540u: goto label_295540;
        case 0x295544u: goto label_295544;
        case 0x295548u: goto label_295548;
        case 0x29554cu: goto label_29554c;
        case 0x295550u: goto label_295550;
        case 0x295554u: goto label_295554;
        case 0x295558u: goto label_295558;
        case 0x29555cu: goto label_29555c;
        case 0x295560u: goto label_295560;
        case 0x295564u: goto label_295564;
        case 0x295568u: goto label_295568;
        case 0x29556cu: goto label_29556c;
        case 0x295570u: goto label_295570;
        case 0x295574u: goto label_295574;
        case 0x295578u: goto label_295578;
        case 0x29557cu: goto label_29557c;
        case 0x295580u: goto label_295580;
        case 0x295584u: goto label_295584;
        case 0x295588u: goto label_295588;
        case 0x29558cu: goto label_29558c;
        case 0x295590u: goto label_295590;
        case 0x295594u: goto label_295594;
        case 0x295598u: goto label_295598;
        case 0x29559cu: goto label_29559c;
        case 0x2955a0u: goto label_2955a0;
        case 0x2955a4u: goto label_2955a4;
        case 0x2955a8u: goto label_2955a8;
        case 0x2955acu: goto label_2955ac;
        case 0x2955b0u: goto label_2955b0;
        case 0x2955b4u: goto label_2955b4;
        case 0x2955b8u: goto label_2955b8;
        case 0x2955bcu: goto label_2955bc;
        case 0x2955c0u: goto label_2955c0;
        case 0x2955c4u: goto label_2955c4;
        case 0x2955c8u: goto label_2955c8;
        case 0x2955ccu: goto label_2955cc;
        case 0x2955d0u: goto label_2955d0;
        case 0x2955d4u: goto label_2955d4;
        case 0x2955d8u: goto label_2955d8;
        case 0x2955dcu: goto label_2955dc;
        case 0x2955e0u: goto label_2955e0;
        case 0x2955e4u: goto label_2955e4;
        case 0x2955e8u: goto label_2955e8;
        case 0x2955ecu: goto label_2955ec;
        case 0x2955f0u: goto label_2955f0;
        case 0x2955f4u: goto label_2955f4;
        case 0x2955f8u: goto label_2955f8;
        case 0x2955fcu: goto label_2955fc;
        case 0x295600u: goto label_295600;
        case 0x295604u: goto label_295604;
        case 0x295608u: goto label_295608;
        case 0x29560cu: goto label_29560c;
        case 0x295610u: goto label_295610;
        case 0x295614u: goto label_295614;
        case 0x295618u: goto label_295618;
        case 0x29561cu: goto label_29561c;
        case 0x295620u: goto label_295620;
        case 0x295624u: goto label_295624;
        case 0x295628u: goto label_295628;
        case 0x29562cu: goto label_29562c;
        case 0x295630u: goto label_295630;
        case 0x295634u: goto label_295634;
        case 0x295638u: goto label_295638;
        case 0x29563cu: goto label_29563c;
        case 0x295640u: goto label_295640;
        case 0x295644u: goto label_295644;
        case 0x295648u: goto label_295648;
        case 0x29564cu: goto label_29564c;
        case 0x295650u: goto label_295650;
        case 0x295654u: goto label_295654;
        case 0x295658u: goto label_295658;
        case 0x29565cu: goto label_29565c;
        case 0x295660u: goto label_295660;
        case 0x295664u: goto label_295664;
        case 0x295668u: goto label_295668;
        case 0x29566cu: goto label_29566c;
        case 0x295670u: goto label_295670;
        case 0x295674u: goto label_295674;
        case 0x295678u: goto label_295678;
        case 0x29567cu: goto label_29567c;
        case 0x295680u: goto label_295680;
        case 0x295684u: goto label_295684;
        case 0x295688u: goto label_295688;
        case 0x29568cu: goto label_29568c;
        case 0x295690u: goto label_295690;
        case 0x295694u: goto label_295694;
        case 0x295698u: goto label_295698;
        case 0x29569cu: goto label_29569c;
        case 0x2956a0u: goto label_2956a0;
        case 0x2956a4u: goto label_2956a4;
        case 0x2956a8u: goto label_2956a8;
        case 0x2956acu: goto label_2956ac;
        case 0x2956b0u: goto label_2956b0;
        case 0x2956b4u: goto label_2956b4;
        case 0x2956b8u: goto label_2956b8;
        case 0x2956bcu: goto label_2956bc;
        case 0x2956c0u: goto label_2956c0;
        case 0x2956c4u: goto label_2956c4;
        case 0x2956c8u: goto label_2956c8;
        case 0x2956ccu: goto label_2956cc;
        case 0x2956d0u: goto label_2956d0;
        case 0x2956d4u: goto label_2956d4;
        case 0x2956d8u: goto label_2956d8;
        case 0x2956dcu: goto label_2956dc;
        case 0x2956e0u: goto label_2956e0;
        case 0x2956e4u: goto label_2956e4;
        case 0x2956e8u: goto label_2956e8;
        case 0x2956ecu: goto label_2956ec;
        case 0x2956f0u: goto label_2956f0;
        case 0x2956f4u: goto label_2956f4;
        case 0x2956f8u: goto label_2956f8;
        case 0x2956fcu: goto label_2956fc;
        case 0x295700u: goto label_295700;
        case 0x295704u: goto label_295704;
        case 0x295708u: goto label_295708;
        case 0x29570cu: goto label_29570c;
        case 0x295710u: goto label_295710;
        case 0x295714u: goto label_295714;
        case 0x295718u: goto label_295718;
        case 0x29571cu: goto label_29571c;
        case 0x295720u: goto label_295720;
        case 0x295724u: goto label_295724;
        case 0x295728u: goto label_295728;
        case 0x29572cu: goto label_29572c;
        case 0x295730u: goto label_295730;
        case 0x295734u: goto label_295734;
        case 0x295738u: goto label_295738;
        case 0x29573cu: goto label_29573c;
        case 0x295740u: goto label_295740;
        case 0x295744u: goto label_295744;
        case 0x295748u: goto label_295748;
        case 0x29574cu: goto label_29574c;
        case 0x295750u: goto label_295750;
        case 0x295754u: goto label_295754;
        case 0x295758u: goto label_295758;
        case 0x29575cu: goto label_29575c;
        case 0x295760u: goto label_295760;
        case 0x295764u: goto label_295764;
        case 0x295768u: goto label_295768;
        case 0x29576cu: goto label_29576c;
        case 0x295770u: goto label_295770;
        case 0x295774u: goto label_295774;
        case 0x295778u: goto label_295778;
        case 0x29577cu: goto label_29577c;
        case 0x295780u: goto label_295780;
        case 0x295784u: goto label_295784;
        case 0x295788u: goto label_295788;
        case 0x29578cu: goto label_29578c;
        case 0x295790u: goto label_295790;
        case 0x295794u: goto label_295794;
        case 0x295798u: goto label_295798;
        case 0x29579cu: goto label_29579c;
        case 0x2957a0u: goto label_2957a0;
        case 0x2957a4u: goto label_2957a4;
        case 0x2957a8u: goto label_2957a8;
        case 0x2957acu: goto label_2957ac;
        case 0x2957b0u: goto label_2957b0;
        case 0x2957b4u: goto label_2957b4;
        case 0x2957b8u: goto label_2957b8;
        case 0x2957bcu: goto label_2957bc;
        case 0x2957c0u: goto label_2957c0;
        case 0x2957c4u: goto label_2957c4;
        case 0x2957c8u: goto label_2957c8;
        case 0x2957ccu: goto label_2957cc;
        case 0x2957d0u: goto label_2957d0;
        case 0x2957d4u: goto label_2957d4;
        case 0x2957d8u: goto label_2957d8;
        case 0x2957dcu: goto label_2957dc;
        case 0x2957e0u: goto label_2957e0;
        case 0x2957e4u: goto label_2957e4;
        case 0x2957e8u: goto label_2957e8;
        case 0x2957ecu: goto label_2957ec;
        default: break;
    }

    ctx->pc = 0x295290u;

label_295290:
    // 0x295290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x295290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_295294:
    // 0x295294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x295294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_295298:
    // 0x295298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x295298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29529c:
    // 0x29529c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2952a0:
    // 0x2952a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2952a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2952a4:
    // 0x2952a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2952a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2952a8:
    // 0x2952a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2952a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2952ac:
    // 0x2952ac: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x2952acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2952b0:
    // 0x2952b0: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x2952b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2952b4:
    // 0x2952b4: 0x620000c  bltz        $s1, . + 4 + (0xC << 2)
label_2952b8:
    if (ctx->pc == 0x2952B8u) {
        ctx->pc = 0x2952B8u;
            // 0x2952b8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2952BCu;
        goto label_2952bc;
    }
    ctx->pc = 0x2952B4u;
    {
        const bool branch_taken_0x2952b4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2952B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952B4u;
            // 0x2952b8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952b4) {
            ctx->pc = 0x2952E8u;
            goto label_2952e8;
        }
    }
    ctx->pc = 0x2952BCu;
label_2952bc:
    // 0x2952bc: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2952bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2952c0:
    // 0x2952c0: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2952c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_2952c4:
    // 0x2952c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2952c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2952c8:
    // 0x2952c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2952c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2952cc:
    // 0x2952cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2952ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2952d0:
    // 0x2952d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2952d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2952d4:
    // 0x2952d4: 0x320f809  jalr        $t9
label_2952d8:
    if (ctx->pc == 0x2952D8u) {
        ctx->pc = 0x2952D8u;
            // 0x2952d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2952DCu;
        goto label_2952dc;
    }
    ctx->pc = 0x2952D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2952DCu);
        ctx->pc = 0x2952D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952D4u;
            // 0x2952d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2952DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2952DCu; }
            if (ctx->pc != 0x2952DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2952DCu;
label_2952dc:
    // 0x2952dc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2952dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2952e0:
    // 0x2952e0: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
label_2952e4:
    if (ctx->pc == 0x2952E4u) {
        ctx->pc = 0x2952E4u;
            // 0x2952e4: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x2952E8u;
        goto label_2952e8;
    }
    ctx->pc = 0x2952E0u;
    {
        const bool branch_taken_0x2952e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2952E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952E0u;
            // 0x2952e4: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952e0) {
            ctx->pc = 0x2952C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2952c0;
        }
    }
    ctx->pc = 0x2952E8u;
label_2952e8:
    // 0x2952e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2952e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2952ec:
    // 0x2952ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2952ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2952f0:
    // 0x2952f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2952f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2952f4:
    // 0x2952f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2952f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2952f8:
    // 0x2952f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2952f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2952fc:
    // 0x2952fc: 0x3e00008  jr          $ra
label_295300:
    if (ctx->pc == 0x295300u) {
        ctx->pc = 0x295300u;
            // 0x295300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x295304u;
        goto label_295304;
    }
    ctx->pc = 0x2952FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952FCu;
            // 0x295300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295304u;
label_295304:
    // 0x295304: 0x0  nop
    ctx->pc = 0x295304u;
    // NOP
label_295308:
    // 0x295308: 0x0  nop
    ctx->pc = 0x295308u;
    // NOP
label_29530c:
    // 0x29530c: 0x0  nop
    ctx->pc = 0x29530cu;
    // NOP
label_295310:
    // 0x295310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_295314:
    // 0x295314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x295314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_295318:
    // 0x295318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29531c:
    // 0x29531c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_295320:
    // 0x295320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295324:
    // 0x295324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x295324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_295328:
    // 0x295328: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_29532c:
    if (ctx->pc == 0x29532Cu) {
        ctx->pc = 0x29532Cu;
            // 0x29532c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295330u;
        goto label_295330;
    }
    ctx->pc = 0x295328u;
    {
        const bool branch_taken_0x295328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295328u;
            // 0x29532c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295328) {
            ctx->pc = 0x295338u;
            goto label_295338;
        }
    }
    ctx->pc = 0x295330u;
label_295330:
    // 0x295330: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x295330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_295334:
    // 0x295334: 0x0  nop
    ctx->pc = 0x295334u;
    // NOP
label_295338:
    // 0x295338: 0xc088b24  jal         func_222C90
label_29533c:
    if (ctx->pc == 0x29533Cu) {
        ctx->pc = 0x29533Cu;
            // 0x29533c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295340u;
        goto label_295340;
    }
    ctx->pc = 0x295338u;
    SET_GPR_U32(ctx, 31, 0x295340u);
    ctx->pc = 0x29533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295338u;
            // 0x29533c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222C90u;
    if (runtime->hasFunction(0x222C90u)) {
        auto targetFn = runtime->lookupFunction(0x222C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295340u; }
        if (ctx->pc != 0x295340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222C90_0x222c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295340u; }
        if (ctx->pc != 0x295340u) { return; }
    }
    ctx->pc = 0x295340u;
label_295340:
    // 0x295340: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x295340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_295344:
    // 0x295344: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x295344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_295348:
    // 0x295348: 0x4600035  bltz        $v1, . + 4 + (0x35 << 2)
label_29534c:
    if (ctx->pc == 0x29534Cu) {
        ctx->pc = 0x29534Cu;
            // 0x29534c: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x295350u;
        goto label_295350;
    }
    ctx->pc = 0x295348u;
    {
        const bool branch_taken_0x295348 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x29534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295348u;
            // 0x29534c: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295348) {
            ctx->pc = 0x295420u;
            goto label_295420;
        }
    }
    ctx->pc = 0x295350u;
label_295350:
    // 0x295350: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x295350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_295354:
    // 0x295354: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x295354u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_295358:
    // 0x295358: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x295358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29535c:
    // 0x29535c: 0x0  nop
    ctx->pc = 0x29535cu;
    // NOP
label_295360:
    // 0x295360: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x295360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_295364:
    // 0x295364: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x295364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_295368:
    // 0x295368: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x295368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_29536c:
    // 0x29536c: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x29536cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_295370:
    // 0x295370: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
label_295374:
    if (ctx->pc == 0x295374u) {
        ctx->pc = 0x295374u;
            // 0x295374: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295378u;
        goto label_295378;
    }
    ctx->pc = 0x295370u;
    {
        const bool branch_taken_0x295370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x295374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295370u;
            // 0x295374: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295370) {
            ctx->pc = 0x295380u;
            goto label_295380;
        }
    }
    ctx->pc = 0x295378u;
label_295378:
    // 0x295378: 0x80a40010  lb          $a0, 0x10($a1)
    ctx->pc = 0x295378u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_29537c:
    // 0x29537c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x29537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_295380:
    // 0x295380: 0x14900023  bne         $a0, $s0, . + 4 + (0x23 << 2)
label_295384:
    if (ctx->pc == 0x295384u) {
        ctx->pc = 0x295388u;
        goto label_295388;
    }
    ctx->pc = 0x295380u;
    {
        const bool branch_taken_0x295380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x295380) {
            ctx->pc = 0x295410u;
            goto label_295410;
        }
    }
    ctx->pc = 0x295388u;
label_295388:
    // 0x295388: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x295388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_29538c:
    // 0x29538c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_295390:
    // 0x295390: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x295390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_295394:
    // 0x295394: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x295394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_295398:
    // 0x295398: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x295398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_29539c:
    // 0x29539c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x29539cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2953a0:
    // 0x2953a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2953a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2953a4:
    // 0x2953a4: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x2953a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2953a8:
    // 0x2953a8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2953a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2953ac:
    // 0x2953ac: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x2953acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2953b0:
    // 0x2953b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2953b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953b4:
    // 0x2953b4: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2953b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2953b8:
    // 0x2953b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2953b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953bc:
    // 0x2953bc: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2953bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_2953c0:
    // 0x2953c0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2953c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953c4:
    // 0x2953c4: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2953c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_2953c8:
    // 0x2953c8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2953c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953cc:
    // 0x2953cc: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x2953ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_2953d0:
    // 0x2953d0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2953d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953d4:
    // 0x2953d4: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x2953d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_2953d8:
    // 0x2953d8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2953d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953dc:
    // 0x2953dc: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x2953dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
label_2953e0:
    // 0x2953e0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2953e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953e4:
    // 0x2953e4: 0xe5200018  swc1        $f0, 0x18($t1)
    ctx->pc = 0x2953e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
label_2953e8:
    // 0x2953e8: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2953e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953ec:
    // 0x2953ec: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x2953ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_2953f0:
    // 0x2953f0: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2953f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2953f4:
    // 0x2953f4: 0xad240020  sw          $a0, 0x20($t1)
    ctx->pc = 0x2953f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 4));
label_2953f8:
    // 0x2953f8: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x2953f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2953fc:
    // 0x2953fc: 0xad240024  sw          $a0, 0x24($t1)
    ctx->pc = 0x2953fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 4));
label_295400:
    // 0x295400: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x295400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_295404:
    // 0x295404: 0xad240028  sw          $a0, 0x28($t1)
    ctx->pc = 0x295404u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 4));
label_295408:
    // 0x295408: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x295408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_29540c:
    // 0x29540c: 0xad24002c  sw          $a0, 0x2C($t1)
    ctx->pc = 0x29540cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 4));
label_295410:
    // 0x295410: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x295410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_295414:
    // 0x295414: 0x461ffd2  bgez        $v1, . + 4 + (-0x2E << 2)
label_295418:
    if (ctx->pc == 0x295418u) {
        ctx->pc = 0x295418u;
            // 0x295418: 0x2508ffd0  addiu       $t0, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->pc = 0x29541Cu;
        goto label_29541c;
    }
    ctx->pc = 0x295414u;
    {
        const bool branch_taken_0x295414 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x295418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295414u;
            // 0x295418: 0x2508ffd0  addiu       $t0, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295414) {
            ctx->pc = 0x295360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295360;
        }
    }
    ctx->pc = 0x29541Cu;
label_29541c:
    // 0x29541c: 0x0  nop
    ctx->pc = 0x29541cu;
    // NOP
label_295420:
    // 0x295420: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x295420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_295424:
    // 0x295424: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x295424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_295428:
    // 0x295428: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_29542c:
    if (ctx->pc == 0x29542Cu) {
        ctx->pc = 0x29542Cu;
            // 0x29542c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295430u;
        goto label_295430;
    }
    ctx->pc = 0x295428u;
    {
        const bool branch_taken_0x295428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29542Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295428u;
            // 0x29542c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295428) {
            ctx->pc = 0x295468u;
            goto label_295468;
        }
    }
    ctx->pc = 0x295430u;
label_295430:
    // 0x295430: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x295430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_295434:
    // 0x295434: 0x0  nop
    ctx->pc = 0x295434u;
    // NOP
label_295438:
    // 0x295438: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x295438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29543c:
    // 0x29543c: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
label_295440:
    if (ctx->pc == 0x295440u) {
        ctx->pc = 0x295444u;
        goto label_295444;
    }
    ctx->pc = 0x29543Cu;
    {
        const bool branch_taken_0x29543c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x29543c) {
            ctx->pc = 0x295450u;
            goto label_295450;
        }
    }
    ctx->pc = 0x295444u;
label_295444:
    // 0x295444: 0x1000000a  b           . + 4 + (0xA << 2)
label_295448:
    if (ctx->pc == 0x295448u) {
        ctx->pc = 0x29544Cu;
        goto label_29544c;
    }
    ctx->pc = 0x295444u;
    {
        const bool branch_taken_0x295444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295444) {
            ctx->pc = 0x295470u;
            goto label_295470;
        }
    }
    ctx->pc = 0x29544Cu;
label_29544c:
    // 0x29544c: 0x0  nop
    ctx->pc = 0x29544cu;
    // NOP
label_295450:
    // 0x295450: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x295450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_295454:
    // 0x295454: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x295454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_295458:
    // 0x295458: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x295458u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29545c:
    // 0x29545c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_295460:
    if (ctx->pc == 0x295460u) {
        ctx->pc = 0x295460u;
            // 0x295460: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x295464u;
        goto label_295464;
    }
    ctx->pc = 0x29545Cu;
    {
        const bool branch_taken_0x29545c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29545Cu;
            // 0x295460: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29545c) {
            ctx->pc = 0x295438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295438;
        }
    }
    ctx->pc = 0x295464u;
label_295464:
    // 0x295464: 0x0  nop
    ctx->pc = 0x295464u;
    // NOP
label_295468:
    // 0x295468: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x295468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29546c:
    // 0x29546c: 0x0  nop
    ctx->pc = 0x29546cu;
    // NOP
label_295470:
    // 0x295470: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x295470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_295474:
    // 0x295474: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x295474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_295478:
    // 0x295478: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x295478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_29547c:
    // 0x29547c: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x29547cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_295480:
    // 0x295480: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x295480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_295484:
    // 0x295484: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x295484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_295488:
    // 0x295488: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x295488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29548c:
    // 0x29548c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x29548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_295490:
    // 0x295490: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x295490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_295494:
    // 0x295494: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x295494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_295498:
    // 0x295498: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x295498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_29549c:
    // 0x29549c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2954a0:
    // 0x2954a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2954a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2954a4:
    // 0x2954a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2954a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2954a8:
    // 0x2954a8: 0x3e00008  jr          $ra
label_2954ac:
    if (ctx->pc == 0x2954ACu) {
        ctx->pc = 0x2954ACu;
            // 0x2954ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2954B0u;
        goto label_2954b0;
    }
    ctx->pc = 0x2954A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2954ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2954A8u;
            // 0x2954ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2954B0u;
label_2954b0:
    // 0x2954b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2954b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2954b4:
    // 0x2954b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2954b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2954b8:
    // 0x2954b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2954b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2954bc:
    // 0x2954bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2954bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2954c0:
    // 0x2954c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2954c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2954c4:
    // 0x2954c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2954c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2954c8:
    // 0x2954c8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2954cc:
    if (ctx->pc == 0x2954CCu) {
        ctx->pc = 0x2954CCu;
            // 0x2954cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2954D0u;
        goto label_2954d0;
    }
    ctx->pc = 0x2954C8u;
    {
        const bool branch_taken_0x2954c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2954CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2954C8u;
            // 0x2954cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954c8) {
            ctx->pc = 0x2954D8u;
            goto label_2954d8;
        }
    }
    ctx->pc = 0x2954D0u;
label_2954d0:
    // 0x2954d0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2954d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2954d4:
    // 0x2954d4: 0x0  nop
    ctx->pc = 0x2954d4u;
    // NOP
label_2954d8:
    // 0x2954d8: 0xc08acf8  jal         func_22B3E0
label_2954dc:
    if (ctx->pc == 0x2954DCu) {
        ctx->pc = 0x2954DCu;
            // 0x2954dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2954E0u;
        goto label_2954e0;
    }
    ctx->pc = 0x2954D8u;
    SET_GPR_U32(ctx, 31, 0x2954E0u);
    ctx->pc = 0x2954DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954D8u;
            // 0x2954dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B3E0u;
    if (runtime->hasFunction(0x22B3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954E0u; }
        if (ctx->pc != 0x2954E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B3E0_0x22b3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954E0u; }
        if (ctx->pc != 0x2954E0u) { return; }
    }
    ctx->pc = 0x2954E0u;
label_2954e0:
    // 0x2954e0: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2954e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2954e4:
    // 0x2954e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2954e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2954e8:
    // 0x2954e8: 0x4600035  bltz        $v1, . + 4 + (0x35 << 2)
label_2954ec:
    if (ctx->pc == 0x2954ECu) {
        ctx->pc = 0x2954ECu;
            // 0x2954ec: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2954F0u;
        goto label_2954f0;
    }
    ctx->pc = 0x2954E8u;
    {
        const bool branch_taken_0x2954e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2954ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2954E8u;
            // 0x2954ec: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954e8) {
            ctx->pc = 0x2955C0u;
            goto label_2955c0;
        }
    }
    ctx->pc = 0x2954F0u;
label_2954f0:
    // 0x2954f0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2954f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2954f4:
    // 0x2954f4: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x2954f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2954f8:
    // 0x2954f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2954f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2954fc:
    // 0x2954fc: 0x0  nop
    ctx->pc = 0x2954fcu;
    // NOP
label_295500:
    // 0x295500: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x295500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_295504:
    // 0x295504: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x295504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_295508:
    // 0x295508: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x295508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_29550c:
    // 0x29550c: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x29550cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_295510:
    // 0x295510: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
label_295514:
    if (ctx->pc == 0x295514u) {
        ctx->pc = 0x295514u;
            // 0x295514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295518u;
        goto label_295518;
    }
    ctx->pc = 0x295510u;
    {
        const bool branch_taken_0x295510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x295514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295510u;
            // 0x295514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295510) {
            ctx->pc = 0x295520u;
            goto label_295520;
        }
    }
    ctx->pc = 0x295518u;
label_295518:
    // 0x295518: 0x80a40010  lb          $a0, 0x10($a1)
    ctx->pc = 0x295518u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_29551c:
    // 0x29551c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x29551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_295520:
    // 0x295520: 0x14900023  bne         $a0, $s0, . + 4 + (0x23 << 2)
label_295524:
    if (ctx->pc == 0x295524u) {
        ctx->pc = 0x295528u;
        goto label_295528;
    }
    ctx->pc = 0x295520u;
    {
        const bool branch_taken_0x295520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x295520) {
            ctx->pc = 0x2955B0u;
            goto label_2955b0;
        }
    }
    ctx->pc = 0x295528u;
label_295528:
    // 0x295528: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x295528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_29552c:
    // 0x29552c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29552cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_295530:
    // 0x295530: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x295530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_295534:
    // 0x295534: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x295534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_295538:
    // 0x295538: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x295538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_29553c:
    // 0x29553c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x29553cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_295540:
    // 0x295540: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x295540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_295544:
    // 0x295544: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x295544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_295548:
    // 0x295548: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x295548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_29554c:
    // 0x29554c: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x29554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_295550:
    // 0x295550: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x295550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295554:
    // 0x295554: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x295554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_295558:
    // 0x295558: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x295558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29555c:
    // 0x29555c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x29555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_295560:
    // 0x295560: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x295560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295564:
    // 0x295564: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x295564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_295568:
    // 0x295568: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x295568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29556c:
    // 0x29556c: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x29556cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_295570:
    // 0x295570: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x295570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295574:
    // 0x295574: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x295574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_295578:
    // 0x295578: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x295578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29557c:
    // 0x29557c: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x29557cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
label_295580:
    // 0x295580: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x295580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295584:
    // 0x295584: 0xe5200018  swc1        $f0, 0x18($t1)
    ctx->pc = 0x295584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
label_295588:
    // 0x295588: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x295588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29558c:
    // 0x29558c: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x29558cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_295590:
    // 0x295590: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x295590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_295594:
    // 0x295594: 0xad240020  sw          $a0, 0x20($t1)
    ctx->pc = 0x295594u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 4));
label_295598:
    // 0x295598: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x295598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_29559c:
    // 0x29559c: 0xad240024  sw          $a0, 0x24($t1)
    ctx->pc = 0x29559cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 4));
label_2955a0:
    // 0x2955a0: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2955a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_2955a4:
    // 0x2955a4: 0xad240028  sw          $a0, 0x28($t1)
    ctx->pc = 0x2955a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 4));
label_2955a8:
    // 0x2955a8: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x2955a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2955ac:
    // 0x2955ac: 0xad24002c  sw          $a0, 0x2C($t1)
    ctx->pc = 0x2955acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 4));
label_2955b0:
    // 0x2955b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2955b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2955b4:
    // 0x2955b4: 0x461ffd2  bgez        $v1, . + 4 + (-0x2E << 2)
label_2955b8:
    if (ctx->pc == 0x2955B8u) {
        ctx->pc = 0x2955B8u;
            // 0x2955b8: 0x2508ffd0  addiu       $t0, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->pc = 0x2955BCu;
        goto label_2955bc;
    }
    ctx->pc = 0x2955B4u;
    {
        const bool branch_taken_0x2955b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2955B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2955B4u;
            // 0x2955b8: 0x2508ffd0  addiu       $t0, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955b4) {
            ctx->pc = 0x295500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295500;
        }
    }
    ctx->pc = 0x2955BCu;
label_2955bc:
    // 0x2955bc: 0x0  nop
    ctx->pc = 0x2955bcu;
    // NOP
label_2955c0:
    // 0x2955c0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x2955c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2955c4:
    // 0x2955c4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2955c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2955c8:
    // 0x2955c8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_2955cc:
    if (ctx->pc == 0x2955CCu) {
        ctx->pc = 0x2955CCu;
            // 0x2955cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2955D0u;
        goto label_2955d0;
    }
    ctx->pc = 0x2955C8u;
    {
        const bool branch_taken_0x2955c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2955C8u;
            // 0x2955cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955c8) {
            ctx->pc = 0x295608u;
            goto label_295608;
        }
    }
    ctx->pc = 0x2955D0u;
label_2955d0:
    // 0x2955d0: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x2955d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_2955d4:
    // 0x2955d4: 0x0  nop
    ctx->pc = 0x2955d4u;
    // NOP
label_2955d8:
    // 0x2955d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2955d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2955dc:
    // 0x2955dc: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
label_2955e0:
    if (ctx->pc == 0x2955E0u) {
        ctx->pc = 0x2955E4u;
        goto label_2955e4;
    }
    ctx->pc = 0x2955DCu;
    {
        const bool branch_taken_0x2955dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2955dc) {
            ctx->pc = 0x2955F0u;
            goto label_2955f0;
        }
    }
    ctx->pc = 0x2955E4u;
label_2955e4:
    // 0x2955e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2955e8:
    if (ctx->pc == 0x2955E8u) {
        ctx->pc = 0x2955ECu;
        goto label_2955ec;
    }
    ctx->pc = 0x2955E4u;
    {
        const bool branch_taken_0x2955e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955e4) {
            ctx->pc = 0x295610u;
            goto label_295610;
        }
    }
    ctx->pc = 0x2955ECu;
label_2955ec:
    // 0x2955ec: 0x0  nop
    ctx->pc = 0x2955ecu;
    // NOP
label_2955f0:
    // 0x2955f0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x2955f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2955f4:
    // 0x2955f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2955f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2955f8:
    // 0x2955f8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2955f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2955fc:
    // 0x2955fc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_295600:
    if (ctx->pc == 0x295600u) {
        ctx->pc = 0x295600u;
            // 0x295600: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x295604u;
        goto label_295604;
    }
    ctx->pc = 0x2955FCu;
    {
        const bool branch_taken_0x2955fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2955FCu;
            // 0x295600: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955fc) {
            ctx->pc = 0x2955D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2955d8;
        }
    }
    ctx->pc = 0x295604u;
label_295604:
    // 0x295604: 0x0  nop
    ctx->pc = 0x295604u;
    // NOP
label_295608:
    // 0x295608: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x295608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29560c:
    // 0x29560c: 0x0  nop
    ctx->pc = 0x29560cu;
    // NOP
label_295610:
    // 0x295610: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x295610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_295614:
    // 0x295614: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x295614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_295618:
    // 0x295618: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x295618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_29561c:
    // 0x29561c: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x29561cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
label_295620:
    // 0x295620: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x295620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_295624:
    // 0x295624: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x295624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_295628:
    // 0x295628: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x295628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29562c:
    // 0x29562c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x29562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_295630:
    // 0x295630: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x295630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_295634:
    // 0x295634: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x295634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_295638:
    // 0x295638: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x295638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_29563c:
    // 0x29563c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29563cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_295640:
    // 0x295640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295644:
    // 0x295644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x295644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_295648:
    // 0x295648: 0x3e00008  jr          $ra
label_29564c:
    if (ctx->pc == 0x29564Cu) {
        ctx->pc = 0x29564Cu;
            // 0x29564c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x295650u;
        goto label_295650;
    }
    ctx->pc = 0x295648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295648u;
            // 0x29564c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295650u;
label_295650:
    // 0x295650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_295654:
    // 0x295654: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_295658:
    // 0x295658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x295658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29565c:
    // 0x29565c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_295660:
    // 0x295660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_295664:
    // 0x295664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295668:
    // 0x295668: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x295668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_29566c:
    // 0x29566c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_295670:
    // 0x295670: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_295674:
    if (ctx->pc == 0x295674u) {
        ctx->pc = 0x295674u;
            // 0x295674: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295678u;
        goto label_295678;
    }
    ctx->pc = 0x295670u;
    {
        const bool branch_taken_0x295670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295670u;
            // 0x295674: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295670) {
            ctx->pc = 0x2956C0u;
            goto label_2956c0;
        }
    }
    ctx->pc = 0x295678u;
label_295678:
    // 0x295678: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x295678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29567c:
    // 0x29567c: 0x418bc  dsll32      $v1, $a0, 2
    ctx->pc = 0x29567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 2));
label_295680:
    // 0x295680: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x295680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_295684:
    // 0x295684: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x295684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_295688:
    // 0x295688: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x295688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_29568c:
    // 0x29568c: 0x8e280078  lw          $t0, 0x78($s1)
    ctx->pc = 0x29568cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_295690:
    // 0x295690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x295690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_295694:
    // 0x295694: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x295694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_295698:
    // 0x295698: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x295698u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_29569c:
    // 0x29569c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2956a0:
    // 0x2956a0: 0x24a5d7b0  addiu       $a1, $a1, -0x2850
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956976));
label_2956a4:
    // 0x2956a4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2956a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2956a8:
    // 0x2956a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2956a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2956ac:
    // 0x2956ac: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2956acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2956b0:
    // 0x2956b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2956b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2956b4:
    // 0x2956b4: 0x320f809  jalr        $t9
label_2956b8:
    if (ctx->pc == 0x2956B8u) {
        ctx->pc = 0x2956B8u;
            // 0x2956b8: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2956BCu;
        goto label_2956bc;
    }
    ctx->pc = 0x2956B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2956BCu);
        ctx->pc = 0x2956B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2956B4u;
            // 0x2956b8: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2956BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2956BCu; }
            if (ctx->pc != 0x2956BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2956BCu;
label_2956bc:
    // 0x2956bc: 0x0  nop
    ctx->pc = 0x2956bcu;
    // NOP
label_2956c0:
    // 0x2956c0: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x2956c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2956c4:
    // 0x2956c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2956c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2956c8:
    // 0x2956c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2956c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2956cc:
    // 0x2956cc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_2956d0:
    if (ctx->pc == 0x2956D0u) {
        ctx->pc = 0x2956D4u;
        goto label_2956d4;
    }
    ctx->pc = 0x2956CCu;
    {
        const bool branch_taken_0x2956cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2956cc) {
            ctx->pc = 0x295708u;
            goto label_295708;
        }
    }
    ctx->pc = 0x2956D4u;
label_2956d4:
    // 0x2956d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2956d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2956d8:
    // 0x2956d8: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x2956d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_2956dc:
    // 0x2956dc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x2956dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2956e0:
    // 0x2956e0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2956e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2956e4:
    // 0x2956e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2956e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2956e8:
    // 0x2956e8: 0x8e27008c  lw          $a3, 0x8C($s1)
    ctx->pc = 0x2956e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_2956ec:
    // 0x2956ec: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2956ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2956f0:
    // 0x2956f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2956f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2956f4:
    // 0x2956f4: 0x24a5d7c0  addiu       $a1, $a1, -0x2840
    ctx->pc = 0x2956f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956992));
label_2956f8:
    // 0x2956f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2956f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2956fc:
    // 0x2956fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2956fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_295700:
    // 0x295700: 0x320f809  jalr        $t9
label_295704:
    if (ctx->pc == 0x295704u) {
        ctx->pc = 0x295704u;
            // 0x295704: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x295708u;
        goto label_295708;
    }
    ctx->pc = 0x295700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x295708u);
        ctx->pc = 0x295704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295700u;
            // 0x295704: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295708u; }
            if (ctx->pc != 0x295708u) { return; }
        }
        }
    }
    ctx->pc = 0x295708u;
label_295708:
    // 0x295708: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x295708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_29570c:
    // 0x29570c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29570cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_295710:
    // 0x295710: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_295714:
    // 0x295714: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_295718:
    if (ctx->pc == 0x295718u) {
        ctx->pc = 0x29571Cu;
        goto label_29571c;
    }
    ctx->pc = 0x295714u;
    {
        const bool branch_taken_0x295714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295714) {
            ctx->pc = 0x295750u;
            goto label_295750;
        }
    }
    ctx->pc = 0x29571Cu;
label_29571c:
    // 0x29571c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29571cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_295720:
    // 0x295720: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x295720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_295724:
    // 0x295724: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x295724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_295728:
    // 0x295728: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x295728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_29572c:
    // 0x29572c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x29572cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_295730:
    // 0x295730: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x295730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_295734:
    // 0x295734: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x295734u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_295738:
    // 0x295738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29573c:
    // 0x29573c: 0x24a5d7b0  addiu       $a1, $a1, -0x2850
    ctx->pc = 0x29573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956976));
label_295740:
    // 0x295740: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x295740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_295744:
    // 0x295744: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x295744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_295748:
    // 0x295748: 0x320f809  jalr        $t9
label_29574c:
    if (ctx->pc == 0x29574Cu) {
        ctx->pc = 0x29574Cu;
            // 0x29574c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x295750u;
        goto label_295750;
    }
    ctx->pc = 0x295748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x295750u);
        ctx->pc = 0x29574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295748u;
            // 0x29574c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295750u; }
            if (ctx->pc != 0x295750u) { return; }
        }
        }
    }
    ctx->pc = 0x295750u;
label_295750:
    // 0x295750: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x295750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_295754:
    // 0x295754: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_295758:
    // 0x295758: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_29575c:
    // 0x29575c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_295760:
    if (ctx->pc == 0x295760u) {
        ctx->pc = 0x295764u;
        goto label_295764;
    }
    ctx->pc = 0x29575Cu;
    {
        const bool branch_taken_0x29575c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29575c) {
            ctx->pc = 0x295798u;
            goto label_295798;
        }
    }
    ctx->pc = 0x295764u;
label_295764:
    // 0x295764: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x295764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_295768:
    // 0x295768: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x295768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_29576c:
    // 0x29576c: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x29576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_295770:
    // 0x295770: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x295770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_295774:
    // 0x295774: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x295774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_295778:
    // 0x295778: 0x8e270080  lw          $a3, 0x80($s1)
    ctx->pc = 0x295778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_29577c:
    // 0x29577c: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x29577cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_295780:
    // 0x295780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295784:
    // 0x295784: 0x24a5d7d0  addiu       $a1, $a1, -0x2830
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957008));
label_295788:
    // 0x295788: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x295788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29578c:
    // 0x29578c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29578cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_295790:
    // 0x295790: 0x320f809  jalr        $t9
label_295794:
    if (ctx->pc == 0x295794u) {
        ctx->pc = 0x295794u;
            // 0x295794: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x295798u;
        goto label_295798;
    }
    ctx->pc = 0x295790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x295798u);
        ctx->pc = 0x295794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295790u;
            // 0x295794: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295798u; }
            if (ctx->pc != 0x295798u) { return; }
        }
        }
    }
    ctx->pc = 0x295798u;
label_295798:
    // 0x295798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x295798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29579c:
    // 0x29579c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29579cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2957a0:
    // 0x2957a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2957a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2957a4:
    // 0x2957a4: 0x3e00008  jr          $ra
label_2957a8:
    if (ctx->pc == 0x2957A8u) {
        ctx->pc = 0x2957A8u;
            // 0x2957a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2957ACu;
        goto label_2957ac;
    }
    ctx->pc = 0x2957A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2957A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957A4u;
            // 0x2957a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2957ACu;
label_2957ac:
    // 0x2957ac: 0x0  nop
    ctx->pc = 0x2957acu;
    // NOP
label_2957b0:
    // 0x2957b0: 0x80a54c4  j           func_295310
label_2957b4:
    if (ctx->pc == 0x2957B4u) {
        ctx->pc = 0x2957B4u;
            // 0x2957b4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x2957B8u;
        goto label_2957b8;
    }
    ctx->pc = 0x2957B0u;
    ctx->pc = 0x2957B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2957B0u;
            // 0x2957b4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295310u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_295310;
    ctx->pc = 0x2957B8u;
label_2957b8:
    // 0x2957b8: 0x0  nop
    ctx->pc = 0x2957b8u;
    // NOP
label_2957bc:
    // 0x2957bc: 0x0  nop
    ctx->pc = 0x2957bcu;
    // NOP
label_2957c0:
    // 0x2957c0: 0x80a47f0  j           func_291FC0
label_2957c4:
    if (ctx->pc == 0x2957C4u) {
        ctx->pc = 0x2957C4u;
            // 0x2957c4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x2957C8u;
        goto label_2957c8;
    }
    ctx->pc = 0x2957C0u;
    ctx->pc = 0x2957C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2957C0u;
            // 0x2957c4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x291FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2957C8u;
label_2957c8:
    // 0x2957c8: 0x0  nop
    ctx->pc = 0x2957c8u;
    // NOP
label_2957cc:
    // 0x2957cc: 0x0  nop
    ctx->pc = 0x2957ccu;
    // NOP
label_2957d0:
    // 0x2957d0: 0x80a552c  j           func_2954B0
label_2957d4:
    if (ctx->pc == 0x2957D4u) {
        ctx->pc = 0x2957D4u;
            // 0x2957d4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x2957D8u;
        goto label_2957d8;
    }
    ctx->pc = 0x2957D0u;
    ctx->pc = 0x2957D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2957D0u;
            // 0x2957d4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2954B0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2954b0;
    ctx->pc = 0x2957D8u;
label_2957d8:
    // 0x2957d8: 0x0  nop
    ctx->pc = 0x2957d8u;
    // NOP
label_2957dc:
    // 0x2957dc: 0x0  nop
    ctx->pc = 0x2957dcu;
    // NOP
label_2957e0:
    // 0x2957e0: 0x80a47f0  j           func_291FC0
label_2957e4:
    if (ctx->pc == 0x2957E4u) {
        ctx->pc = 0x2957E4u;
            // 0x2957e4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x2957E8u;
        goto label_2957e8;
    }
    ctx->pc = 0x2957E0u;
    ctx->pc = 0x2957E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2957E0u;
            // 0x2957e4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x291FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2957E8u;
label_2957e8:
    // 0x2957e8: 0x0  nop
    ctx->pc = 0x2957e8u;
    // NOP
label_2957ec:
    // 0x2957ec: 0x0  nop
    ctx->pc = 0x2957ecu;
    // NOP
}
