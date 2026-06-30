#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249510
// Address: 0x249510 - 0x249ae0
void sub_00249510_0x249510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249510_0x249510");
#endif

    switch (ctx->pc) {
        case 0x249510u: goto label_249510;
        case 0x249514u: goto label_249514;
        case 0x249518u: goto label_249518;
        case 0x24951cu: goto label_24951c;
        case 0x249520u: goto label_249520;
        case 0x249524u: goto label_249524;
        case 0x249528u: goto label_249528;
        case 0x24952cu: goto label_24952c;
        case 0x249530u: goto label_249530;
        case 0x249534u: goto label_249534;
        case 0x249538u: goto label_249538;
        case 0x24953cu: goto label_24953c;
        case 0x249540u: goto label_249540;
        case 0x249544u: goto label_249544;
        case 0x249548u: goto label_249548;
        case 0x24954cu: goto label_24954c;
        case 0x249550u: goto label_249550;
        case 0x249554u: goto label_249554;
        case 0x249558u: goto label_249558;
        case 0x24955cu: goto label_24955c;
        case 0x249560u: goto label_249560;
        case 0x249564u: goto label_249564;
        case 0x249568u: goto label_249568;
        case 0x24956cu: goto label_24956c;
        case 0x249570u: goto label_249570;
        case 0x249574u: goto label_249574;
        case 0x249578u: goto label_249578;
        case 0x24957cu: goto label_24957c;
        case 0x249580u: goto label_249580;
        case 0x249584u: goto label_249584;
        case 0x249588u: goto label_249588;
        case 0x24958cu: goto label_24958c;
        case 0x249590u: goto label_249590;
        case 0x249594u: goto label_249594;
        case 0x249598u: goto label_249598;
        case 0x24959cu: goto label_24959c;
        case 0x2495a0u: goto label_2495a0;
        case 0x2495a4u: goto label_2495a4;
        case 0x2495a8u: goto label_2495a8;
        case 0x2495acu: goto label_2495ac;
        case 0x2495b0u: goto label_2495b0;
        case 0x2495b4u: goto label_2495b4;
        case 0x2495b8u: goto label_2495b8;
        case 0x2495bcu: goto label_2495bc;
        case 0x2495c0u: goto label_2495c0;
        case 0x2495c4u: goto label_2495c4;
        case 0x2495c8u: goto label_2495c8;
        case 0x2495ccu: goto label_2495cc;
        case 0x2495d0u: goto label_2495d0;
        case 0x2495d4u: goto label_2495d4;
        case 0x2495d8u: goto label_2495d8;
        case 0x2495dcu: goto label_2495dc;
        case 0x2495e0u: goto label_2495e0;
        case 0x2495e4u: goto label_2495e4;
        case 0x2495e8u: goto label_2495e8;
        case 0x2495ecu: goto label_2495ec;
        case 0x2495f0u: goto label_2495f0;
        case 0x2495f4u: goto label_2495f4;
        case 0x2495f8u: goto label_2495f8;
        case 0x2495fcu: goto label_2495fc;
        case 0x249600u: goto label_249600;
        case 0x249604u: goto label_249604;
        case 0x249608u: goto label_249608;
        case 0x24960cu: goto label_24960c;
        case 0x249610u: goto label_249610;
        case 0x249614u: goto label_249614;
        case 0x249618u: goto label_249618;
        case 0x24961cu: goto label_24961c;
        case 0x249620u: goto label_249620;
        case 0x249624u: goto label_249624;
        case 0x249628u: goto label_249628;
        case 0x24962cu: goto label_24962c;
        case 0x249630u: goto label_249630;
        case 0x249634u: goto label_249634;
        case 0x249638u: goto label_249638;
        case 0x24963cu: goto label_24963c;
        case 0x249640u: goto label_249640;
        case 0x249644u: goto label_249644;
        case 0x249648u: goto label_249648;
        case 0x24964cu: goto label_24964c;
        case 0x249650u: goto label_249650;
        case 0x249654u: goto label_249654;
        case 0x249658u: goto label_249658;
        case 0x24965cu: goto label_24965c;
        case 0x249660u: goto label_249660;
        case 0x249664u: goto label_249664;
        case 0x249668u: goto label_249668;
        case 0x24966cu: goto label_24966c;
        case 0x249670u: goto label_249670;
        case 0x249674u: goto label_249674;
        case 0x249678u: goto label_249678;
        case 0x24967cu: goto label_24967c;
        case 0x249680u: goto label_249680;
        case 0x249684u: goto label_249684;
        case 0x249688u: goto label_249688;
        case 0x24968cu: goto label_24968c;
        case 0x249690u: goto label_249690;
        case 0x249694u: goto label_249694;
        case 0x249698u: goto label_249698;
        case 0x24969cu: goto label_24969c;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496a4u: goto label_2496a4;
        case 0x2496a8u: goto label_2496a8;
        case 0x2496acu: goto label_2496ac;
        case 0x2496b0u: goto label_2496b0;
        case 0x2496b4u: goto label_2496b4;
        case 0x2496b8u: goto label_2496b8;
        case 0x2496bcu: goto label_2496bc;
        case 0x2496c0u: goto label_2496c0;
        case 0x2496c4u: goto label_2496c4;
        case 0x2496c8u: goto label_2496c8;
        case 0x2496ccu: goto label_2496cc;
        case 0x2496d0u: goto label_2496d0;
        case 0x2496d4u: goto label_2496d4;
        case 0x2496d8u: goto label_2496d8;
        case 0x2496dcu: goto label_2496dc;
        case 0x2496e0u: goto label_2496e0;
        case 0x2496e4u: goto label_2496e4;
        case 0x2496e8u: goto label_2496e8;
        case 0x2496ecu: goto label_2496ec;
        case 0x2496f0u: goto label_2496f0;
        case 0x2496f4u: goto label_2496f4;
        case 0x2496f8u: goto label_2496f8;
        case 0x2496fcu: goto label_2496fc;
        case 0x249700u: goto label_249700;
        case 0x249704u: goto label_249704;
        case 0x249708u: goto label_249708;
        case 0x24970cu: goto label_24970c;
        case 0x249710u: goto label_249710;
        case 0x249714u: goto label_249714;
        case 0x249718u: goto label_249718;
        case 0x24971cu: goto label_24971c;
        case 0x249720u: goto label_249720;
        case 0x249724u: goto label_249724;
        case 0x249728u: goto label_249728;
        case 0x24972cu: goto label_24972c;
        case 0x249730u: goto label_249730;
        case 0x249734u: goto label_249734;
        case 0x249738u: goto label_249738;
        case 0x24973cu: goto label_24973c;
        case 0x249740u: goto label_249740;
        case 0x249744u: goto label_249744;
        case 0x249748u: goto label_249748;
        case 0x24974cu: goto label_24974c;
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        default: break;
    }

    ctx->pc = 0x249510u;

label_249510:
    // 0x249510: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_249514:
    // 0x249514: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x249514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_249518:
    // 0x249518: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x249518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_24951c:
    // 0x24951c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_249520:
    // 0x249520: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x249520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_249524:
    // 0x249524: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x249524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_249528:
    // 0x249528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x249528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24952c:
    // 0x24952c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24952cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249530:
    // 0x249530: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x249530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_249534:
    // 0x249534: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x249534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_249538:
    // 0x249538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24953c:
    // 0x24953c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_249540:
    // 0x249540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x249540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_249544:
    // 0x249544: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x249544u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_249548:
    // 0x249548: 0x10800159  beqz        $a0, . + 4 + (0x159 << 2)
label_24954c:
    if (ctx->pc == 0x24954Cu) {
        ctx->pc = 0x24954Cu;
            // 0x24954c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249550u;
        goto label_249550;
    }
    ctx->pc = 0x249548u;
    {
        const bool branch_taken_0x249548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249548u;
            // 0x24954c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249548) {
            ctx->pc = 0x249AB0u;
            goto label_249ab0;
        }
    }
    ctx->pc = 0x249550u;
label_249550:
    // 0x249550: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x249550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_249554:
    // 0x249554: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
label_249558:
    if (ctx->pc == 0x249558u) {
        ctx->pc = 0x249558u;
            // 0x249558: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24955Cu;
        goto label_24955c;
    }
    ctx->pc = 0x249554u;
    {
        const bool branch_taken_0x249554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x249558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249554u;
            // 0x249558: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249554) {
            ctx->pc = 0x249728u;
            goto label_249728;
        }
    }
    ctx->pc = 0x24955Cu;
label_24955c:
    // 0x24955c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_249560:
    if (ctx->pc == 0x249560u) {
        ctx->pc = 0x249564u;
        goto label_249564;
    }
    ctx->pc = 0x24955Cu;
    {
        const bool branch_taken_0x24955c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24955c) {
            ctx->pc = 0x2495A0u;
            goto label_2495a0;
        }
    }
    ctx->pc = 0x249564u;
label_249564:
    // 0x249564: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x249564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_249568:
    // 0x249568: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_24956c:
    if (ctx->pc == 0x24956Cu) {
        ctx->pc = 0x249570u;
        goto label_249570;
    }
    ctx->pc = 0x249568u;
    {
        const bool branch_taken_0x249568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x249568) {
            ctx->pc = 0x249578u;
            goto label_249578;
        }
    }
    ctx->pc = 0x249570u;
label_249570:
    // 0x249570: 0x1000014f  b           . + 4 + (0x14F << 2)
label_249574:
    if (ctx->pc == 0x249574u) {
        ctx->pc = 0x249578u;
        goto label_249578;
    }
    ctx->pc = 0x249570u;
    {
        const bool branch_taken_0x249570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249570) {
            ctx->pc = 0x249AB0u;
            goto label_249ab0;
        }
    }
    ctx->pc = 0x249578u;
label_249578:
    // 0x249578: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_24957c:
    // 0x24957c: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x24957cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_249580:
    // 0x249580: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x249580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_249584:
    // 0x249584: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x249584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_249588:
    // 0x249588: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x249588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24958c:
    // 0x24958c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x24958cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_249590:
    // 0x249590: 0x320f809  jalr        $t9
label_249594:
    if (ctx->pc == 0x249594u) {
        ctx->pc = 0x249594u;
            // 0x249594: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249598u;
        goto label_249598;
    }
    ctx->pc = 0x249590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x249598u);
        ctx->pc = 0x249594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249590u;
            // 0x249594: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249598u; }
            if (ctx->pc != 0x249598u) { return; }
        }
        }
    }
    ctx->pc = 0x249598u;
label_249598:
    // 0x249598: 0x10000145  b           . + 4 + (0x145 << 2)
label_24959c:
    if (ctx->pc == 0x24959Cu) {
        ctx->pc = 0x2495A0u;
        goto label_2495a0;
    }
    ctx->pc = 0x249598u;
    {
        const bool branch_taken_0x249598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249598) {
            ctx->pc = 0x249AB0u;
            goto label_249ab0;
        }
    }
    ctx->pc = 0x2495A0u;
label_2495a0:
    // 0x2495a0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2495a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2495a4:
    // 0x2495a4: 0x27a30204  addiu       $v1, $sp, 0x204
    ctx->pc = 0x2495a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_2495a8:
    // 0x2495a8: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x2495a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_2495ac:
    // 0x2495ac: 0x27aa0260  addiu       $t2, $sp, 0x260
    ctx->pc = 0x2495acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2495b0:
    // 0x2495b0: 0x27a90264  addiu       $t1, $sp, 0x264
    ctx->pc = 0x2495b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_2495b4:
    // 0x2495b4: 0x27a80268  addiu       $t0, $sp, 0x268
    ctx->pc = 0x2495b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_2495b8:
    // 0x2495b8: 0x27a7026c  addiu       $a3, $sp, 0x26C
    ctx->pc = 0x2495b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_2495bc:
    // 0x2495bc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2495bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2495c0:
    // 0x2495c0: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x2495c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_2495c4:
    // 0x2495c4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2495c8:
    // 0x2495c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2495c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2495cc:
    // 0x2495cc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2495ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2495d0:
    // 0x2495d0: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x2495d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_2495d4:
    // 0x2495d4: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x2495d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_2495d8:
    // 0x2495d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2495dc:
    // 0x2495dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2495dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2495e0:
    // 0x2495e0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2495e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2495e4:
    // 0x2495e4: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x2495e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2495e8:
    // 0x2495e8: 0xc44e0028  lwc1        $f14, 0x28($v0)
    ctx->pc = 0x2495e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2495ec:
    // 0x2495ec: 0xc4c10050  lwc1        $f1, 0x50($a2)
    ctx->pc = 0x2495ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2495f0:
    // 0x2495f0: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x2495f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2495f4:
    // 0x2495f4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2495f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2495f8:
    // 0x2495f8: 0xc4c70054  lwc1        $f7, 0x54($a2)
    ctx->pc = 0x2495f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2495fc:
    // 0x2495fc: 0xc4c60044  lwc1        $f6, 0x44($a2)
    ctx->pc = 0x2495fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_249600:
    // 0x249600: 0xc4c50058  lwc1        $f5, 0x58($a2)
    ctx->pc = 0x249600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_249604:
    // 0x249604: 0xc4c40048  lwc1        $f4, 0x48($a2)
    ctx->pc = 0x249604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_249608:
    // 0x249608: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x249608u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24960c:
    // 0x24960c: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x24960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249610:
    // 0x249610: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x249610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249614:
    // 0x249614: 0xc4a9004c  lwc1        $f9, 0x4C($a1)
    ctx->pc = 0x249614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_249618:
    // 0x249618: 0xc4a8005c  lwc1        $f8, 0x5C($a1)
    ctx->pc = 0x249618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_24961c:
    // 0x24961c: 0xc4a30044  lwc1        $f3, 0x44($a1)
    ctx->pc = 0x24961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249620:
    // 0x249620: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x249620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249624:
    // 0x249624: 0xc4ab0048  lwc1        $f11, 0x48($a1)
    ctx->pc = 0x249624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_249628:
    // 0x249628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24962c:
    // 0x24962c: 0x46084841  sub.s       $f1, $f9, $f8
    ctx->pc = 0x24962cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_249630:
    // 0x249630: 0x46021b41  sub.s       $f13, $f3, $f2
    ctx->pc = 0x249630u;
    ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_249634:
    // 0x249634: 0x46087202  mul.s       $f8, $f14, $f8
    ctx->pc = 0x249634u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
label_249638:
    // 0x249638: 0xc4aa0058  lwc1        $f10, 0x58($a1)
    ctx->pc = 0x249638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24963c:
    // 0x24963c: 0xc4c3005c  lwc1        $f3, 0x5C($a2)
    ctx->pc = 0x24963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249640:
    // 0x249640: 0xc4c2004c  lwc1        $f2, 0x4C($a2)
    ctx->pc = 0x249640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249644:
    // 0x249644: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x249644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_249648:
    // 0x249648: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x249648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_24964c:
    // 0x24964c: 0x460d4002  mul.s       $f0, $f8, $f13
    ctx->pc = 0x24964cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
label_249650:
    // 0x249650: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x249650u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_249654:
    // 0x249654: 0x460a5a81  sub.s       $f10, $f11, $f10
    ctx->pc = 0x249654u;
    ctx->f[10] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
label_249658:
    // 0x249658: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x249658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_24965c:
    // 0x24965c: 0x460a4002  mul.s       $f0, $f8, $f10
    ctx->pc = 0x24965cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
label_249660:
    // 0x249660: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x249660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_249664:
    // 0x249664: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x249664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_249668:
    // 0x249668: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x249668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_24966c:
    // 0x24966c: 0x460371c2  mul.s       $f7, $f14, $f3
    ctx->pc = 0x24966cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
label_249670:
    // 0x249670: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x249670u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_249674:
    // 0x249674: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x249674u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_249678:
    // 0x249678: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x249678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24967c:
    // 0x24967c: 0x460c3802  mul.s       $f0, $f7, $f12
    ctx->pc = 0x24967cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
label_249680:
    // 0x249680: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249684:
    // 0x249684: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x249684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_249688:
    // 0x249688: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x249688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24968c:
    // 0x24968c: 0x46063882  mul.s       $f2, $f7, $f6
    ctx->pc = 0x24968cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_249690:
    // 0x249690: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x249690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_249694:
    // 0x249694: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x249694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_249698:
    // 0x249698: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x249698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24969c:
    // 0x24969c: 0x46053842  mul.s       $f1, $f7, $f5
    ctx->pc = 0x24969cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_2496a0:
    // 0x2496a0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2496a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2496a4:
    // 0x2496a4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2496a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2496a8:
    // 0x2496a8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2496a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2496ac:
    // 0x2496ac: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x2496acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_2496b0:
    // 0x2496b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2496b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2496b4:
    // 0x2496b4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2496b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2496b8:
    // 0x2496b8: 0xc4a3009c  lwc1        $f3, 0x9C($a1)
    ctx->pc = 0x2496b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2496bc:
    // 0x2496bc: 0xc4c1009c  lwc1        $f1, 0x9C($a2)
    ctx->pc = 0x2496bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2496c0:
    // 0x2496c0: 0xc4a200a0  lwc1        $f2, 0xA0($a1)
    ctx->pc = 0x2496c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2496c4:
    // 0x2496c4: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x2496c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2496c8:
    // 0x2496c8: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x2496c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_2496cc:
    // 0x2496cc: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2496ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_2496d0:
    // 0x2496d0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2496d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2496d4:
    // 0x2496d4: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x2496d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_2496d8:
    // 0x2496d8: 0xc0a45a0  jal         func_291680
label_2496dc:
    if (ctx->pc == 0x2496DCu) {
        ctx->pc = 0x2496DCu;
            // 0x2496dc: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x2496E0u;
        goto label_2496e0;
    }
    ctx->pc = 0x2496D8u;
    SET_GPR_U32(ctx, 31, 0x2496E0u);
    ctx->pc = 0x2496DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2496D8u;
            // 0x2496dc: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496E0u; }
        if (ctx->pc != 0x2496E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496E0u; }
        if (ctx->pc != 0x2496E0u) { return; }
    }
    ctx->pc = 0x2496E0u;
label_2496e0:
    // 0x2496e0: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x2496e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
label_2496e4:
    // 0x2496e4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2496e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2496e8:
    // 0x2496e8: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x2496e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_2496ec:
    // 0x2496ec: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2496f0:
    // 0x2496f0: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2496f4:
    // 0x2496f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2496f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2496f8:
    // 0x2496f8: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x2496f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2496fc:
    // 0x2496fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2496fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_249700:
    // 0x249700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249704:
    // 0x249704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249708:
    // 0x249708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24970c:
    // 0x24970c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24970cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249710:
    // 0x249710: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x249710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_249714:
    // 0x249714: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x249714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_249718:
    // 0x249718: 0x40f809  jalr        $v0
label_24971c:
    if (ctx->pc == 0x24971Cu) {
        ctx->pc = 0x24971Cu;
            // 0x24971c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249720u;
        goto label_249720;
    }
    ctx->pc = 0x249718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249720u);
        ctx->pc = 0x24971Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249718u;
            // 0x24971c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249720u; }
            if (ctx->pc != 0x249720u) { return; }
        }
        }
    }
    ctx->pc = 0x249720u;
label_249720:
    // 0x249720: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_249724:
    if (ctx->pc == 0x249724u) {
        ctx->pc = 0x249728u;
        goto label_249728;
    }
    ctx->pc = 0x249720u;
    {
        const bool branch_taken_0x249720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249720) {
            ctx->pc = 0x249AB0u;
            goto label_249ab0;
        }
    }
    ctx->pc = 0x249728u;
label_249728:
    // 0x249728: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x249728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_24972c:
    // 0x24972c: 0x27b70194  addiu       $s7, $sp, 0x194
    ctx->pc = 0x24972cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_249730:
    // 0x249730: 0x27b60198  addiu       $s6, $sp, 0x198
    ctx->pc = 0x249730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_249734:
    // 0x249734: 0x27be01f0  addiu       $fp, $sp, 0x1F0
    ctx->pc = 0x249734u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_249738:
    // 0x249738: 0x27a801f4  addiu       $t0, $sp, 0x1F4
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_24973c:
    // 0x24973c: 0x27a701f8  addiu       $a3, $sp, 0x1F8
    ctx->pc = 0x24973cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_249740:
    // 0x249740: 0x27a601fc  addiu       $a2, $sp, 0x1FC
    ctx->pc = 0x249740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_249744:
    // 0x249744: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x249744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_249748:
    // 0x249748: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x249748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_24974c:
    // 0x24974c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x24974cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_249750:
    // 0x249750: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x249750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_249754:
    // 0x249754: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x249754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_249758:
    // 0x249758: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x249758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_24975c:
    // 0x24975c: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x24975cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_249760:
    // 0x249760: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x249760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_249764:
    // 0x249764: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x249764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
label_249768:
    // 0x249768: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x249768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_24976c:
    // 0x24976c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x24976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_249770:
    // 0x249770: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x249770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_249774:
    // 0x249774: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x249774u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_249778:
    // 0x249778: 0xc46d0028  lwc1        $f13, 0x28($v1)
    ctx->pc = 0x249778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24977c:
    // 0x24977c: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x24977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249780:
    // 0x249780: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x249780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249784:
    // 0x249784: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x249784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249788:
    // 0x249788: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x249788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24978c:
    // 0x24978c: 0xc6080050  lwc1        $f8, 0x50($s0)
    ctx->pc = 0x24978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_249790:
    // 0x249790: 0xc62a004c  lwc1        $f10, 0x4C($s1)
    ctx->pc = 0x249790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_249794:
    // 0x249794: 0xc629005c  lwc1        $f9, 0x5C($s1)
    ctx->pc = 0x249794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_249798:
    // 0x249798: 0x46001b01  sub.s       $f12, $f3, $f0
    ctx->pc = 0x249798u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_24979c:
    // 0x24979c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x24979cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2497a0:
    // 0x2497a0: 0x460112c1  sub.s       $f11, $f2, $f1
    ctx->pc = 0x2497a0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2497a4:
    // 0x2497a4: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x2497a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2497a8:
    // 0x2497a8: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x2497a8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_2497ac:
    // 0x2497ac: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2497acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2497b0:
    // 0x2497b0: 0xc6070054  lwc1        $f7, 0x54($s0)
    ctx->pc = 0x2497b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2497b4:
    // 0x2497b4: 0xc6060044  lwc1        $f6, 0x44($s0)
    ctx->pc = 0x2497b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2497b8:
    // 0x2497b8: 0xc6050058  lwc1        $f5, 0x58($s0)
    ctx->pc = 0x2497b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2497bc:
    // 0x2497bc: 0xc6040048  lwc1        $f4, 0x48($s0)
    ctx->pc = 0x2497bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2497c0:
    // 0x2497c0: 0xc603005c  lwc1        $f3, 0x5C($s0)
    ctx->pc = 0x2497c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2497c4:
    // 0x2497c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2497c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2497c8:
    // 0x2497c8: 0x46095041  sub.s       $f1, $f10, $f9
    ctx->pc = 0x2497c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_2497cc:
    // 0x2497cc: 0x46096a42  mul.s       $f9, $f13, $f9
    ctx->pc = 0x2497ccu;
    ctx->f[9] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
label_2497d0:
    // 0x2497d0: 0xc602004c  lwc1        $f2, 0x4C($s0)
    ctx->pc = 0x2497d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2497d4:
    // 0x2497d4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2497d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_2497d8:
    // 0x2497d8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2497d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_2497dc:
    // 0x2497dc: 0x460c4802  mul.s       $f0, $f9, $f12
    ctx->pc = 0x2497dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
label_2497e0:
    // 0x2497e0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2497e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2497e4:
    // 0x2497e4: 0x460b4802  mul.s       $f0, $f9, $f11
    ctx->pc = 0x2497e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
label_2497e8:
    // 0x2497e8: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x2497e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_2497ec:
    // 0x2497ec: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2497ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2497f0:
    // 0x2497f0: 0x46014802  mul.s       $f0, $f9, $f1
    ctx->pc = 0x2497f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_2497f4:
    // 0x2497f4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2497f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2497f8:
    // 0x2497f8: 0x460369c2  mul.s       $f7, $f13, $f3
    ctx->pc = 0x2497f8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
label_2497fc:
    // 0x2497fc: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x2497fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_249800:
    // 0x249800: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x249800u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_249804:
    // 0x249804: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x249804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249808:
    // 0x249808: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x249808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
label_24980c:
    // 0x24980c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24980cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249810:
    // 0x249810: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x249810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_249814:
    // 0x249814: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x249814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249818:
    // 0x249818: 0x46063882  mul.s       $f2, $f7, $f6
    ctx->pc = 0x249818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_24981c:
    // 0x24981c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x24981cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_249820:
    // 0x249820: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x249820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_249824:
    // 0x249824: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x249824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249828:
    // 0x249828: 0x46053842  mul.s       $f1, $f7, $f5
    ctx->pc = 0x249828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_24982c:
    // 0x24982c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x24982cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_249830:
    // 0x249830: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x249830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_249834:
    // 0x249834: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x249834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249838:
    // 0x249838: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x249838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_24983c:
    // 0x24983c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24983cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249840:
    // 0x249840: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x249840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_249844:
    // 0x249844: 0xc623009c  lwc1        $f3, 0x9C($s1)
    ctx->pc = 0x249844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249848:
    // 0x249848: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x249848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24984c:
    // 0x24984c: 0xc62200a0  lwc1        $f2, 0xA0($s1)
    ctx->pc = 0x24984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249850:
    // 0x249850: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x249850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249854:
    // 0x249854: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x249854u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_249858:
    // 0x249858: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x249858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_24985c:
    // 0x24985c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24985cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_249860:
    // 0x249860: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x249860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_249864:
    // 0x249864: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x249864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_249868:
    // 0x249868: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x249868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24986c:
    // 0x24986c: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x24986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249870:
    // 0x249870: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x249870u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249874:
    // 0x249874: 0x45010050  bc1t        . + 4 + (0x50 << 2)
label_249878:
    if (ctx->pc == 0x249878u) {
        ctx->pc = 0x249878u;
            // 0x249878: 0x26b20030  addiu       $s2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->pc = 0x24987Cu;
        goto label_24987c;
    }
    ctx->pc = 0x249874u;
    {
        const bool branch_taken_0x249874 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x249878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249874u;
            // 0x249878: 0x26b20030  addiu       $s2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249874) {
            ctx->pc = 0x2499B8u;
            goto label_2499b8;
        }
    }
    ctx->pc = 0x24987Cu;
label_24987c:
    // 0x24987c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x24987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_249880:
    // 0x249880: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_249884:
    // 0x249884: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_249888:
    if (ctx->pc == 0x249888u) {
        ctx->pc = 0x24988Cu;
        goto label_24988c;
    }
    ctx->pc = 0x249884u;
    {
        const bool branch_taken_0x249884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249884) {
            ctx->pc = 0x2498C0u;
            goto label_2498c0;
        }
    }
    ctx->pc = 0x24988Cu;
label_24988c:
    // 0x24988c: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x24988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249890:
    // 0x249890: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x249890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_249894:
    // 0x249894: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x249894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_249898:
    // 0x249898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x249898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24989c:
    // 0x24989c: 0x0  nop
    ctx->pc = 0x24989cu;
    // NOP
label_2498a0:
    // 0x2498a0: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x2498a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
label_2498a4:
    // 0x2498a4: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x2498a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_2498a8:
    // 0x2498a8: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x2498a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
label_2498ac:
    // 0x2498ac: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x2498acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_2498b0:
    // 0x2498b0: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x2498b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_2498b4:
    // 0x2498b4: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2498b8:
    if (ctx->pc == 0x2498B8u) {
        ctx->pc = 0x2498B8u;
            // 0x2498b8: 0xaea2002c  sw          $v0, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2498BCu;
        goto label_2498bc;
    }
    ctx->pc = 0x2498B4u;
    {
        const bool branch_taken_0x2498b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2498B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2498B4u;
            // 0x2498b8: 0xaea2002c  sw          $v0, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498b4) {
            ctx->pc = 0x249A60u;
            goto label_249a60;
        }
    }
    ctx->pc = 0x2498BCu;
label_2498bc:
    // 0x2498bc: 0x0  nop
    ctx->pc = 0x2498bcu;
    // NOP
label_2498c0:
    // 0x2498c0: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2498c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_2498c4:
    // 0x2498c4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2498c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2498c8:
    // 0x2498c8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2498c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2498cc:
    // 0x2498cc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2498ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2498d0:
    // 0x2498d0: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2498d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2498d4:
    // 0x2498d4: 0xc0a3a64  jal         func_28E990
label_2498d8:
    if (ctx->pc == 0x2498D8u) {
        ctx->pc = 0x2498D8u;
            // 0x2498d8: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->pc = 0x2498DCu;
        goto label_2498dc;
    }
    ctx->pc = 0x2498D4u;
    SET_GPR_U32(ctx, 31, 0x2498DCu);
    ctx->pc = 0x2498D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2498D4u;
            // 0x2498d8: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2498DCu; }
        if (ctx->pc != 0x2498DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2498DCu; }
        if (ctx->pc != 0x2498DCu) { return; }
    }
    ctx->pc = 0x2498DCu;
label_2498dc:
    // 0x2498dc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2498e0:
    // 0x2498e0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2498e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2498e4:
    // 0x2498e4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2498e8:
    // 0x2498e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2498e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2498ec:
    // 0x2498ec: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2498ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2498f0:
    // 0x2498f0: 0xc0a3a64  jal         func_28E990
label_2498f4:
    if (ctx->pc == 0x2498F4u) {
        ctx->pc = 0x2498F4u;
            // 0x2498f4: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->pc = 0x2498F8u;
        goto label_2498f8;
    }
    ctx->pc = 0x2498F0u;
    SET_GPR_U32(ctx, 31, 0x2498F8u);
    ctx->pc = 0x2498F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2498F0u;
            // 0x2498f4: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2498F8u; }
        if (ctx->pc != 0x2498F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2498F8u; }
        if (ctx->pc != 0x2498F8u) { return; }
    }
    ctx->pc = 0x2498F8u;
label_2498f8:
    // 0x2498f8: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2498f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2498fc:
    // 0x2498fc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2498fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_249900:
    // 0x249900: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x249900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_249904:
    // 0x249904: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x249904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_249908:
    // 0x249908: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x249908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
label_24990c:
    // 0x24990c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249910:
    // 0x249910: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_249914:
    // 0x249914: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x249914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_249918:
    // 0x249918: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x249918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_24991c:
    // 0x24991c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x24991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_249920:
    // 0x249920: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_249924:
    // 0x249924: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x249924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_249928:
    // 0x249928: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x249928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_24992c:
    // 0x24992c: 0xafa600f4  sw          $a2, 0xF4($sp)
    ctx->pc = 0x24992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 6));
label_249930:
    // 0x249930: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x249930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_249934:
    // 0x249934: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x249934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_249938:
    // 0x249938: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x249938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24993c:
    // 0x24993c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x24993cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_249940:
    // 0x249940: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_249944:
    if (ctx->pc == 0x249944u) {
        ctx->pc = 0x249944u;
            // 0x249944: 0xafa60104  sw          $a2, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
        ctx->pc = 0x249948u;
        goto label_249948;
    }
    ctx->pc = 0x249940u;
    {
        const bool branch_taken_0x249940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249940u;
            // 0x249944: 0xafa60104  sw          $a2, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249940) {
            ctx->pc = 0x249958u;
            goto label_249958;
        }
    }
    ctx->pc = 0x249948u;
label_249948:
    // 0x249948: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x249948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_24994c:
    // 0x24994c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x24994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_249950:
    // 0x249950: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x249950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_249954:
    // 0x249954: 0x0  nop
    ctx->pc = 0x249954u;
    // NOP
label_249958:
    // 0x249958: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_24995c:
    if (ctx->pc == 0x24995Cu) {
        ctx->pc = 0x249960u;
        goto label_249960;
    }
    ctx->pc = 0x249958u;
    {
        const bool branch_taken_0x249958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249958) {
            ctx->pc = 0x249970u;
            goto label_249970;
        }
    }
    ctx->pc = 0x249960u;
label_249960:
    // 0x249960: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x249960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_249964:
    // 0x249964: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_249968:
    // 0x249968: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x249968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_24996c:
    // 0x24996c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x24996cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_249970:
    // 0x249970: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x249970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_249974:
    // 0x249974: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x249974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_249978:
    // 0x249978: 0xc0a45a0  jal         func_291680
label_24997c:
    if (ctx->pc == 0x24997Cu) {
        ctx->pc = 0x24997Cu;
            // 0x24997c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x249980u;
        goto label_249980;
    }
    ctx->pc = 0x249978u;
    SET_GPR_U32(ctx, 31, 0x249980u);
    ctx->pc = 0x24997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249978u;
            // 0x24997c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249980u; }
        if (ctx->pc != 0x249980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249980u; }
        if (ctx->pc != 0x249980u) { return; }
    }
    ctx->pc = 0x249980u;
label_249980:
    // 0x249980: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x249980u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_249984:
    // 0x249984: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249988:
    // 0x249988: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x249988u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24998c:
    // 0x24998c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24998cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_249990:
    // 0x249990: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x249990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249994:
    // 0x249994: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x249994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_249998:
    // 0x249998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24999c:
    // 0x24999c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24999cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2499a0:
    // 0x2499a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2499a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2499a4:
    // 0x2499a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2499a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2499a8:
    // 0x2499a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2499a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2499ac:
    // 0x2499ac: 0x8c4216d4  lw          $v0, 0x16D4($v0)
    ctx->pc = 0x2499acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
label_2499b0:
    // 0x2499b0: 0x40f809  jalr        $v0
label_2499b4:
    if (ctx->pc == 0x2499B4u) {
        ctx->pc = 0x2499B4u;
            // 0x2499b4: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2499B8u;
        goto label_2499b8;
    }
    ctx->pc = 0x2499B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2499B8u);
        ctx->pc = 0x2499B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2499B0u;
            // 0x2499b4: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2499B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2499B8u; }
            if (ctx->pc != 0x2499B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2499B8u;
label_2499b8:
    // 0x2499b8: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x2499b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2499bc:
    // 0x2499bc: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x2499bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
label_2499c0:
    // 0x2499c0: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2499c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2499c4:
    // 0x2499c4: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x2499c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2499c8:
    // 0x2499c8: 0xc7a601f4  lwc1        $f6, 0x1F4($sp)
    ctx->pc = 0x2499c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2499cc:
    // 0x2499cc: 0xc6a50024  lwc1        $f5, 0x24($s5)
    ctx->pc = 0x2499ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2499d0:
    // 0x2499d0: 0xc7a401f8  lwc1        $f4, 0x1F8($sp)
    ctx->pc = 0x2499d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2499d4:
    // 0x2499d4: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x2499d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2499d8:
    // 0x2499d8: 0xc7a201fc  lwc1        $f2, 0x1FC($sp)
    ctx->pc = 0x2499d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2499dc:
    // 0x2499dc: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x2499dcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2499e0:
    // 0x2499e0: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x2499e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2499e4:
    // 0x2499e4: 0x46053818  adda.s      $f7, $f5
    ctx->pc = 0x2499e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
label_2499e8:
    // 0x2499e8: 0x460320dc  madd.s      $f3, $f4, $f3
    ctx->pc = 0x2499e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_2499ec:
    // 0x2499ec: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x2499ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2499f0:
    // 0x2499f0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2499f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2499f4:
    // 0x2499f4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2499f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2499f8:
    // 0x2499f8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2499f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2499fc:
    // 0x2499fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2499fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249a00:
    // 0x249a00: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_249a04:
    if (ctx->pc == 0x249A04u) {
        ctx->pc = 0x249A04u;
            // 0x249a04: 0x26a3002c  addiu       $v1, $s5, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
        ctx->pc = 0x249A08u;
        goto label_249a08;
    }
    ctx->pc = 0x249A00u;
    {
        const bool branch_taken_0x249a00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x249A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249A00u;
            // 0x249a04: 0x26a3002c  addiu       $v1, $s5, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a00) {
            ctx->pc = 0x249A60u;
            goto label_249a60;
        }
    }
    ctx->pc = 0x249A08u;
label_249a08:
    // 0x249a08: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x249a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_249a0c:
    // 0x249a0c: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x249a0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_249a10:
    // 0x249a10: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_249a14:
    if (ctx->pc == 0x249A14u) {
        ctx->pc = 0x249A18u;
        goto label_249a18;
    }
    ctx->pc = 0x249A10u;
    {
        const bool branch_taken_0x249a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a10) {
            ctx->pc = 0x249AB0u;
            goto label_249ab0;
        }
    }
    ctx->pc = 0x249A18u;
label_249a18:
    // 0x249a18: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x249a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_249a1c:
    // 0x249a1c: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x249a1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_249a20:
    // 0x249a20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x249a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249a24:
    // 0x249a24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x249a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249a28:
    // 0x249a28: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_249a2c:
    // 0x249a2c: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x249a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_249a30:
    // 0x249a30: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_249a34:
    // 0x249a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249a38:
    // 0x249a38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249a3c:
    // 0x249a3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249a40:
    // 0x249a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249a44:
    // 0x249a44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x249a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_249a48:
    // 0x249a48: 0x8c4216b8  lw          $v0, 0x16B8($v0)
    ctx->pc = 0x249a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5816)));
label_249a4c:
    // 0x249a4c: 0x40f809  jalr        $v0
label_249a50:
    if (ctx->pc == 0x249A50u) {
        ctx->pc = 0x249A50u;
            // 0x249a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249A54u;
        goto label_249a54;
    }
    ctx->pc = 0x249A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249A54u);
        ctx->pc = 0x249A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249A4Cu;
            // 0x249a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249A54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249A54u; }
            if (ctx->pc != 0x249A54u) { return; }
        }
        }
    }
    ctx->pc = 0x249A54u;
label_249a54:
    // 0x249a54: 0x10000016  b           . + 4 + (0x16 << 2)
label_249a58:
    if (ctx->pc == 0x249A58u) {
        ctx->pc = 0x249A5Cu;
        goto label_249a5c;
    }
    ctx->pc = 0x249A54u;
    {
        const bool branch_taken_0x249a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a54) {
            ctx->pc = 0x249AB0u;
            goto label_249ab0;
        }
    }
    ctx->pc = 0x249A5Cu;
label_249a5c:
    // 0x249a5c: 0x0  nop
    ctx->pc = 0x249a5cu;
    // NOP
label_249a60:
    // 0x249a60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x249a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_249a64:
    // 0x249a64: 0xe7a101e0  swc1        $f1, 0x1E0($sp)
    ctx->pc = 0x249a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_249a68:
    // 0x249a68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x249a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249a6c:
    // 0x249a6c: 0xc0a45a0  jal         func_291680
label_249a70:
    if (ctx->pc == 0x249A70u) {
        ctx->pc = 0x249A70u;
            // 0x249a70: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x249A74u;
        goto label_249a74;
    }
    ctx->pc = 0x249A6Cu;
    SET_GPR_U32(ctx, 31, 0x249A74u);
    ctx->pc = 0x249A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249A6Cu;
            // 0x249a70: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A74u; }
        if (ctx->pc != 0x249A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A74u; }
        if (ctx->pc != 0x249A74u) { return; }
    }
    ctx->pc = 0x249A74u;
label_249a74:
    // 0x249a74: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x249a74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_249a78:
    // 0x249a78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x249a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249a7c:
    // 0x249a7c: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x249a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_249a80:
    // 0x249a80: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x249a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_249a84:
    // 0x249a84: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x249a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_249a88:
    // 0x249a88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x249a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_249a8c:
    // 0x249a8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x249a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_249a90:
    // 0x249a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249a94:
    // 0x249a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249a98:
    // 0x249a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249a9c:
    // 0x249a9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249aa0:
    // 0x249aa0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x249aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_249aa4:
    // 0x249aa4: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x249aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_249aa8:
    // 0x249aa8: 0x40f809  jalr        $v0
label_249aac:
    if (ctx->pc == 0x249AACu) {
        ctx->pc = 0x249AACu;
            // 0x249aac: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x249AB0u;
        goto label_249ab0;
    }
    ctx->pc = 0x249AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249AB0u);
        ctx->pc = 0x249AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249AA8u;
            // 0x249aac: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249AB0u; }
            if (ctx->pc != 0x249AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x249AB0u;
label_249ab0:
    // 0x249ab0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x249ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_249ab4:
    // 0x249ab4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x249ab4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_249ab8:
    // 0x249ab8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x249ab8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_249abc:
    // 0x249abc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x249abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_249ac0:
    // 0x249ac0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x249ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_249ac4:
    // 0x249ac4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x249ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_249ac8:
    // 0x249ac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x249ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_249acc:
    // 0x249acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x249accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_249ad0:
    // 0x249ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x249ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_249ad4:
    // 0x249ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x249ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_249ad8:
    // 0x249ad8: 0x3e00008  jr          $ra
label_249adc:
    if (ctx->pc == 0x249ADCu) {
        ctx->pc = 0x249ADCu;
            // 0x249adc: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x249AE0u;
        goto label_fallthrough_0x249ad8;
    }
    ctx->pc = 0x249AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249AD8u;
            // 0x249adc: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x249ad8:
    ctx->pc = 0x249AE0u;
}
