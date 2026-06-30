#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00383200
// Address: 0x383200 - 0x383730
void sub_00383200_0x383200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383200_0x383200");
#endif

    switch (ctx->pc) {
        case 0x383200u: goto label_383200;
        case 0x383204u: goto label_383204;
        case 0x383208u: goto label_383208;
        case 0x38320cu: goto label_38320c;
        case 0x383210u: goto label_383210;
        case 0x383214u: goto label_383214;
        case 0x383218u: goto label_383218;
        case 0x38321cu: goto label_38321c;
        case 0x383220u: goto label_383220;
        case 0x383224u: goto label_383224;
        case 0x383228u: goto label_383228;
        case 0x38322cu: goto label_38322c;
        case 0x383230u: goto label_383230;
        case 0x383234u: goto label_383234;
        case 0x383238u: goto label_383238;
        case 0x38323cu: goto label_38323c;
        case 0x383240u: goto label_383240;
        case 0x383244u: goto label_383244;
        case 0x383248u: goto label_383248;
        case 0x38324cu: goto label_38324c;
        case 0x383250u: goto label_383250;
        case 0x383254u: goto label_383254;
        case 0x383258u: goto label_383258;
        case 0x38325cu: goto label_38325c;
        case 0x383260u: goto label_383260;
        case 0x383264u: goto label_383264;
        case 0x383268u: goto label_383268;
        case 0x38326cu: goto label_38326c;
        case 0x383270u: goto label_383270;
        case 0x383274u: goto label_383274;
        case 0x383278u: goto label_383278;
        case 0x38327cu: goto label_38327c;
        case 0x383280u: goto label_383280;
        case 0x383284u: goto label_383284;
        case 0x383288u: goto label_383288;
        case 0x38328cu: goto label_38328c;
        case 0x383290u: goto label_383290;
        case 0x383294u: goto label_383294;
        case 0x383298u: goto label_383298;
        case 0x38329cu: goto label_38329c;
        case 0x3832a0u: goto label_3832a0;
        case 0x3832a4u: goto label_3832a4;
        case 0x3832a8u: goto label_3832a8;
        case 0x3832acu: goto label_3832ac;
        case 0x3832b0u: goto label_3832b0;
        case 0x3832b4u: goto label_3832b4;
        case 0x3832b8u: goto label_3832b8;
        case 0x3832bcu: goto label_3832bc;
        case 0x3832c0u: goto label_3832c0;
        case 0x3832c4u: goto label_3832c4;
        case 0x3832c8u: goto label_3832c8;
        case 0x3832ccu: goto label_3832cc;
        case 0x3832d0u: goto label_3832d0;
        case 0x3832d4u: goto label_3832d4;
        case 0x3832d8u: goto label_3832d8;
        case 0x3832dcu: goto label_3832dc;
        case 0x3832e0u: goto label_3832e0;
        case 0x3832e4u: goto label_3832e4;
        case 0x3832e8u: goto label_3832e8;
        case 0x3832ecu: goto label_3832ec;
        case 0x3832f0u: goto label_3832f0;
        case 0x3832f4u: goto label_3832f4;
        case 0x3832f8u: goto label_3832f8;
        case 0x3832fcu: goto label_3832fc;
        case 0x383300u: goto label_383300;
        case 0x383304u: goto label_383304;
        case 0x383308u: goto label_383308;
        case 0x38330cu: goto label_38330c;
        case 0x383310u: goto label_383310;
        case 0x383314u: goto label_383314;
        case 0x383318u: goto label_383318;
        case 0x38331cu: goto label_38331c;
        case 0x383320u: goto label_383320;
        case 0x383324u: goto label_383324;
        case 0x383328u: goto label_383328;
        case 0x38332cu: goto label_38332c;
        case 0x383330u: goto label_383330;
        case 0x383334u: goto label_383334;
        case 0x383338u: goto label_383338;
        case 0x38333cu: goto label_38333c;
        case 0x383340u: goto label_383340;
        case 0x383344u: goto label_383344;
        case 0x383348u: goto label_383348;
        case 0x38334cu: goto label_38334c;
        case 0x383350u: goto label_383350;
        case 0x383354u: goto label_383354;
        case 0x383358u: goto label_383358;
        case 0x38335cu: goto label_38335c;
        case 0x383360u: goto label_383360;
        case 0x383364u: goto label_383364;
        case 0x383368u: goto label_383368;
        case 0x38336cu: goto label_38336c;
        case 0x383370u: goto label_383370;
        case 0x383374u: goto label_383374;
        case 0x383378u: goto label_383378;
        case 0x38337cu: goto label_38337c;
        case 0x383380u: goto label_383380;
        case 0x383384u: goto label_383384;
        case 0x383388u: goto label_383388;
        case 0x38338cu: goto label_38338c;
        case 0x383390u: goto label_383390;
        case 0x383394u: goto label_383394;
        case 0x383398u: goto label_383398;
        case 0x38339cu: goto label_38339c;
        case 0x3833a0u: goto label_3833a0;
        case 0x3833a4u: goto label_3833a4;
        case 0x3833a8u: goto label_3833a8;
        case 0x3833acu: goto label_3833ac;
        case 0x3833b0u: goto label_3833b0;
        case 0x3833b4u: goto label_3833b4;
        case 0x3833b8u: goto label_3833b8;
        case 0x3833bcu: goto label_3833bc;
        case 0x3833c0u: goto label_3833c0;
        case 0x3833c4u: goto label_3833c4;
        case 0x3833c8u: goto label_3833c8;
        case 0x3833ccu: goto label_3833cc;
        case 0x3833d0u: goto label_3833d0;
        case 0x3833d4u: goto label_3833d4;
        case 0x3833d8u: goto label_3833d8;
        case 0x3833dcu: goto label_3833dc;
        case 0x3833e0u: goto label_3833e0;
        case 0x3833e4u: goto label_3833e4;
        case 0x3833e8u: goto label_3833e8;
        case 0x3833ecu: goto label_3833ec;
        case 0x3833f0u: goto label_3833f0;
        case 0x3833f4u: goto label_3833f4;
        case 0x3833f8u: goto label_3833f8;
        case 0x3833fcu: goto label_3833fc;
        case 0x383400u: goto label_383400;
        case 0x383404u: goto label_383404;
        case 0x383408u: goto label_383408;
        case 0x38340cu: goto label_38340c;
        case 0x383410u: goto label_383410;
        case 0x383414u: goto label_383414;
        case 0x383418u: goto label_383418;
        case 0x38341cu: goto label_38341c;
        case 0x383420u: goto label_383420;
        case 0x383424u: goto label_383424;
        case 0x383428u: goto label_383428;
        case 0x38342cu: goto label_38342c;
        case 0x383430u: goto label_383430;
        case 0x383434u: goto label_383434;
        case 0x383438u: goto label_383438;
        case 0x38343cu: goto label_38343c;
        case 0x383440u: goto label_383440;
        case 0x383444u: goto label_383444;
        case 0x383448u: goto label_383448;
        case 0x38344cu: goto label_38344c;
        case 0x383450u: goto label_383450;
        case 0x383454u: goto label_383454;
        case 0x383458u: goto label_383458;
        case 0x38345cu: goto label_38345c;
        case 0x383460u: goto label_383460;
        case 0x383464u: goto label_383464;
        case 0x383468u: goto label_383468;
        case 0x38346cu: goto label_38346c;
        case 0x383470u: goto label_383470;
        case 0x383474u: goto label_383474;
        case 0x383478u: goto label_383478;
        case 0x38347cu: goto label_38347c;
        case 0x383480u: goto label_383480;
        case 0x383484u: goto label_383484;
        case 0x383488u: goto label_383488;
        case 0x38348cu: goto label_38348c;
        case 0x383490u: goto label_383490;
        case 0x383494u: goto label_383494;
        case 0x383498u: goto label_383498;
        case 0x38349cu: goto label_38349c;
        case 0x3834a0u: goto label_3834a0;
        case 0x3834a4u: goto label_3834a4;
        case 0x3834a8u: goto label_3834a8;
        case 0x3834acu: goto label_3834ac;
        case 0x3834b0u: goto label_3834b0;
        case 0x3834b4u: goto label_3834b4;
        case 0x3834b8u: goto label_3834b8;
        case 0x3834bcu: goto label_3834bc;
        case 0x3834c0u: goto label_3834c0;
        case 0x3834c4u: goto label_3834c4;
        case 0x3834c8u: goto label_3834c8;
        case 0x3834ccu: goto label_3834cc;
        case 0x3834d0u: goto label_3834d0;
        case 0x3834d4u: goto label_3834d4;
        case 0x3834d8u: goto label_3834d8;
        case 0x3834dcu: goto label_3834dc;
        case 0x3834e0u: goto label_3834e0;
        case 0x3834e4u: goto label_3834e4;
        case 0x3834e8u: goto label_3834e8;
        case 0x3834ecu: goto label_3834ec;
        case 0x3834f0u: goto label_3834f0;
        case 0x3834f4u: goto label_3834f4;
        case 0x3834f8u: goto label_3834f8;
        case 0x3834fcu: goto label_3834fc;
        case 0x383500u: goto label_383500;
        case 0x383504u: goto label_383504;
        case 0x383508u: goto label_383508;
        case 0x38350cu: goto label_38350c;
        case 0x383510u: goto label_383510;
        case 0x383514u: goto label_383514;
        case 0x383518u: goto label_383518;
        case 0x38351cu: goto label_38351c;
        case 0x383520u: goto label_383520;
        case 0x383524u: goto label_383524;
        case 0x383528u: goto label_383528;
        case 0x38352cu: goto label_38352c;
        case 0x383530u: goto label_383530;
        case 0x383534u: goto label_383534;
        case 0x383538u: goto label_383538;
        case 0x38353cu: goto label_38353c;
        case 0x383540u: goto label_383540;
        case 0x383544u: goto label_383544;
        case 0x383548u: goto label_383548;
        case 0x38354cu: goto label_38354c;
        case 0x383550u: goto label_383550;
        case 0x383554u: goto label_383554;
        case 0x383558u: goto label_383558;
        case 0x38355cu: goto label_38355c;
        case 0x383560u: goto label_383560;
        case 0x383564u: goto label_383564;
        case 0x383568u: goto label_383568;
        case 0x38356cu: goto label_38356c;
        case 0x383570u: goto label_383570;
        case 0x383574u: goto label_383574;
        case 0x383578u: goto label_383578;
        case 0x38357cu: goto label_38357c;
        case 0x383580u: goto label_383580;
        case 0x383584u: goto label_383584;
        case 0x383588u: goto label_383588;
        case 0x38358cu: goto label_38358c;
        case 0x383590u: goto label_383590;
        case 0x383594u: goto label_383594;
        case 0x383598u: goto label_383598;
        case 0x38359cu: goto label_38359c;
        case 0x3835a0u: goto label_3835a0;
        case 0x3835a4u: goto label_3835a4;
        case 0x3835a8u: goto label_3835a8;
        case 0x3835acu: goto label_3835ac;
        case 0x3835b0u: goto label_3835b0;
        case 0x3835b4u: goto label_3835b4;
        case 0x3835b8u: goto label_3835b8;
        case 0x3835bcu: goto label_3835bc;
        case 0x3835c0u: goto label_3835c0;
        case 0x3835c4u: goto label_3835c4;
        case 0x3835c8u: goto label_3835c8;
        case 0x3835ccu: goto label_3835cc;
        case 0x3835d0u: goto label_3835d0;
        case 0x3835d4u: goto label_3835d4;
        case 0x3835d8u: goto label_3835d8;
        case 0x3835dcu: goto label_3835dc;
        case 0x3835e0u: goto label_3835e0;
        case 0x3835e4u: goto label_3835e4;
        case 0x3835e8u: goto label_3835e8;
        case 0x3835ecu: goto label_3835ec;
        case 0x3835f0u: goto label_3835f0;
        case 0x3835f4u: goto label_3835f4;
        case 0x3835f8u: goto label_3835f8;
        case 0x3835fcu: goto label_3835fc;
        case 0x383600u: goto label_383600;
        case 0x383604u: goto label_383604;
        case 0x383608u: goto label_383608;
        case 0x38360cu: goto label_38360c;
        case 0x383610u: goto label_383610;
        case 0x383614u: goto label_383614;
        case 0x383618u: goto label_383618;
        case 0x38361cu: goto label_38361c;
        case 0x383620u: goto label_383620;
        case 0x383624u: goto label_383624;
        case 0x383628u: goto label_383628;
        case 0x38362cu: goto label_38362c;
        case 0x383630u: goto label_383630;
        case 0x383634u: goto label_383634;
        case 0x383638u: goto label_383638;
        case 0x38363cu: goto label_38363c;
        case 0x383640u: goto label_383640;
        case 0x383644u: goto label_383644;
        case 0x383648u: goto label_383648;
        case 0x38364cu: goto label_38364c;
        case 0x383650u: goto label_383650;
        case 0x383654u: goto label_383654;
        case 0x383658u: goto label_383658;
        case 0x38365cu: goto label_38365c;
        case 0x383660u: goto label_383660;
        case 0x383664u: goto label_383664;
        case 0x383668u: goto label_383668;
        case 0x38366cu: goto label_38366c;
        case 0x383670u: goto label_383670;
        case 0x383674u: goto label_383674;
        case 0x383678u: goto label_383678;
        case 0x38367cu: goto label_38367c;
        case 0x383680u: goto label_383680;
        case 0x383684u: goto label_383684;
        case 0x383688u: goto label_383688;
        case 0x38368cu: goto label_38368c;
        case 0x383690u: goto label_383690;
        case 0x383694u: goto label_383694;
        case 0x383698u: goto label_383698;
        case 0x38369cu: goto label_38369c;
        case 0x3836a0u: goto label_3836a0;
        case 0x3836a4u: goto label_3836a4;
        case 0x3836a8u: goto label_3836a8;
        case 0x3836acu: goto label_3836ac;
        case 0x3836b0u: goto label_3836b0;
        case 0x3836b4u: goto label_3836b4;
        case 0x3836b8u: goto label_3836b8;
        case 0x3836bcu: goto label_3836bc;
        case 0x3836c0u: goto label_3836c0;
        case 0x3836c4u: goto label_3836c4;
        case 0x3836c8u: goto label_3836c8;
        case 0x3836ccu: goto label_3836cc;
        case 0x3836d0u: goto label_3836d0;
        case 0x3836d4u: goto label_3836d4;
        case 0x3836d8u: goto label_3836d8;
        case 0x3836dcu: goto label_3836dc;
        case 0x3836e0u: goto label_3836e0;
        case 0x3836e4u: goto label_3836e4;
        case 0x3836e8u: goto label_3836e8;
        case 0x3836ecu: goto label_3836ec;
        case 0x3836f0u: goto label_3836f0;
        case 0x3836f4u: goto label_3836f4;
        case 0x3836f8u: goto label_3836f8;
        case 0x3836fcu: goto label_3836fc;
        case 0x383700u: goto label_383700;
        case 0x383704u: goto label_383704;
        case 0x383708u: goto label_383708;
        case 0x38370cu: goto label_38370c;
        case 0x383710u: goto label_383710;
        case 0x383714u: goto label_383714;
        case 0x383718u: goto label_383718;
        case 0x38371cu: goto label_38371c;
        case 0x383720u: goto label_383720;
        case 0x383724u: goto label_383724;
        case 0x383728u: goto label_383728;
        case 0x38372cu: goto label_38372c;
        default: break;
    }

    ctx->pc = 0x383200u;

label_383200:
    // 0x383200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_383204:
    // 0x383204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x383204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_383208:
    // 0x383208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38320c:
    // 0x38320c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_383210:
    // 0x383210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x383210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383214:
    // 0x383214: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_383218:
    if (ctx->pc == 0x383218u) {
        ctx->pc = 0x383218u;
            // 0x383218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38321Cu;
        goto label_38321c;
    }
    ctx->pc = 0x383214u;
    {
        const bool branch_taken_0x383214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x383218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383214u;
            // 0x383218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383214) {
            ctx->pc = 0x383258u;
            goto label_383258;
        }
    }
    ctx->pc = 0x38321Cu;
label_38321c:
    // 0x38321c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_383220:
    if (ctx->pc == 0x383220u) {
        ctx->pc = 0x383220u;
            // 0x383220: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x383224u;
        goto label_383224;
    }
    ctx->pc = 0x38321Cu;
    {
        const bool branch_taken_0x38321c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38321c) {
            ctx->pc = 0x383220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38321Cu;
            // 0x383220: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383244u;
            goto label_383244;
        }
    }
    ctx->pc = 0x383224u;
label_383224:
    // 0x383224: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_383228:
    if (ctx->pc == 0x383228u) {
        ctx->pc = 0x38322Cu;
        goto label_38322c;
    }
    ctx->pc = 0x383224u;
    {
        const bool branch_taken_0x383224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x383224) {
            ctx->pc = 0x383240u;
            goto label_383240;
        }
    }
    ctx->pc = 0x38322Cu;
label_38322c:
    // 0x38322c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x38322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_383230:
    // 0x383230: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_383234:
    if (ctx->pc == 0x383234u) {
        ctx->pc = 0x383238u;
        goto label_383238;
    }
    ctx->pc = 0x383230u;
    {
        const bool branch_taken_0x383230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383230) {
            ctx->pc = 0x383240u;
            goto label_383240;
        }
    }
    ctx->pc = 0x383238u;
label_383238:
    // 0x383238: 0xc0400a8  jal         func_1002A0
label_38323c:
    if (ctx->pc == 0x38323Cu) {
        ctx->pc = 0x383240u;
        goto label_383240;
    }
    ctx->pc = 0x383238u;
    SET_GPR_U32(ctx, 31, 0x383240u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383240u; }
        if (ctx->pc != 0x383240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383240u; }
        if (ctx->pc != 0x383240u) { return; }
    }
    ctx->pc = 0x383240u;
label_383240:
    // 0x383240: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x383240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_383244:
    // 0x383244: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x383244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_383248:
    // 0x383248: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_38324c:
    if (ctx->pc == 0x38324Cu) {
        ctx->pc = 0x38324Cu;
            // 0x38324c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383250u;
        goto label_383250;
    }
    ctx->pc = 0x383248u;
    {
        const bool branch_taken_0x383248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x383248) {
            ctx->pc = 0x38324Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383248u;
            // 0x38324c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38325Cu;
            goto label_38325c;
        }
    }
    ctx->pc = 0x383250u;
label_383250:
    // 0x383250: 0xc0400a8  jal         func_1002A0
label_383254:
    if (ctx->pc == 0x383254u) {
        ctx->pc = 0x383254u;
            // 0x383254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383258u;
        goto label_383258;
    }
    ctx->pc = 0x383250u;
    SET_GPR_U32(ctx, 31, 0x383258u);
    ctx->pc = 0x383254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383250u;
            // 0x383254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383258u; }
        if (ctx->pc != 0x383258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383258u; }
        if (ctx->pc != 0x383258u) { return; }
    }
    ctx->pc = 0x383258u;
label_383258:
    // 0x383258: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x383258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38325c:
    // 0x38325c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38325cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_383260:
    // 0x383260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383264:
    // 0x383264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383268:
    // 0x383268: 0x3e00008  jr          $ra
label_38326c:
    if (ctx->pc == 0x38326Cu) {
        ctx->pc = 0x38326Cu;
            // 0x38326c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x383270u;
        goto label_383270;
    }
    ctx->pc = 0x383268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38326Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383268u;
            // 0x38326c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x383270u;
label_383270:
    // 0x383270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_383274:
    // 0x383274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x383274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_383278:
    // 0x383278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38327c:
    // 0x38327c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_383280:
    // 0x383280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x383280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383284:
    // 0x383284: 0x12200045  beqz        $s1, . + 4 + (0x45 << 2)
label_383288:
    if (ctx->pc == 0x383288u) {
        ctx->pc = 0x383288u;
            // 0x383288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38328Cu;
        goto label_38328c;
    }
    ctx->pc = 0x383284u;
    {
        const bool branch_taken_0x383284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x383288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383284u;
            // 0x383288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383284) {
            ctx->pc = 0x38339Cu;
            goto label_38339c;
        }
    }
    ctx->pc = 0x38328Cu;
label_38328c:
    // 0x38328c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38328cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_383290:
    // 0x383290: 0x26240074  addiu       $a0, $s1, 0x74
    ctx->pc = 0x383290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_383294:
    // 0x383294: 0x24427940  addiu       $v0, $v0, 0x7940
    ctx->pc = 0x383294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31040));
label_383298:
    // 0x383298: 0xc0d37dc  jal         func_34DF70
label_38329c:
    if (ctx->pc == 0x38329Cu) {
        ctx->pc = 0x38329Cu;
            // 0x38329c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3832A0u;
        goto label_3832a0;
    }
    ctx->pc = 0x383298u;
    SET_GPR_U32(ctx, 31, 0x3832A0u);
    ctx->pc = 0x38329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383298u;
            // 0x38329c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3832A0u; }
        if (ctx->pc != 0x3832A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3832A0u; }
        if (ctx->pc != 0x3832A0u) { return; }
    }
    ctx->pc = 0x3832A0u;
label_3832a0:
    // 0x3832a0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x3832a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_3832a4:
    // 0x3832a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3832a8:
    if (ctx->pc == 0x3832A8u) {
        ctx->pc = 0x3832A8u;
            // 0x3832a8: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x3832ACu;
        goto label_3832ac;
    }
    ctx->pc = 0x3832A4u;
    {
        const bool branch_taken_0x3832a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3832a4) {
            ctx->pc = 0x3832A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3832A4u;
            // 0x3832a8: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3832C0u;
            goto label_3832c0;
        }
    }
    ctx->pc = 0x3832ACu;
label_3832ac:
    // 0x3832ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3832acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3832b0:
    // 0x3832b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3832b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3832b4:
    // 0x3832b4: 0x320f809  jalr        $t9
label_3832b8:
    if (ctx->pc == 0x3832B8u) {
        ctx->pc = 0x3832B8u;
            // 0x3832b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3832BCu;
        goto label_3832bc;
    }
    ctx->pc = 0x3832B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3832BCu);
        ctx->pc = 0x3832B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3832B4u;
            // 0x3832b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3832BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3832BCu; }
            if (ctx->pc != 0x3832BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3832BCu;
label_3832bc:
    // 0x3832bc: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x3832bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_3832c0:
    // 0x3832c0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3832c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3832c4:
    // 0x3832c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3832c8:
    if (ctx->pc == 0x3832C8u) {
        ctx->pc = 0x3832C8u;
            // 0x3832c8: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x3832CCu;
        goto label_3832cc;
    }
    ctx->pc = 0x3832C4u;
    {
        const bool branch_taken_0x3832c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3832c4) {
            ctx->pc = 0x3832C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3832C4u;
            // 0x3832c8: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3832E0u;
            goto label_3832e0;
        }
    }
    ctx->pc = 0x3832CCu;
label_3832cc:
    // 0x3832cc: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3832ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_3832d0:
    // 0x3832d0: 0xc0407c0  jal         func_101F00
label_3832d4:
    if (ctx->pc == 0x3832D4u) {
        ctx->pc = 0x3832D4u;
            // 0x3832d4: 0x24a533c0  addiu       $a1, $a1, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13248));
        ctx->pc = 0x3832D8u;
        goto label_3832d8;
    }
    ctx->pc = 0x3832D0u;
    SET_GPR_U32(ctx, 31, 0x3832D8u);
    ctx->pc = 0x3832D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3832D0u;
            // 0x3832d4: 0x24a533c0  addiu       $a1, $a1, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3832D8u; }
        if (ctx->pc != 0x3832D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3832D8u; }
        if (ctx->pc != 0x3832D8u) { return; }
    }
    ctx->pc = 0x3832D8u;
label_3832d8:
    // 0x3832d8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3832d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3832dc:
    // 0x3832dc: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x3832dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3832e0:
    // 0x3832e0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3832e4:
    if (ctx->pc == 0x3832E4u) {
        ctx->pc = 0x3832E4u;
            // 0x3832e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3832E8u;
        goto label_3832e8;
    }
    ctx->pc = 0x3832E0u;
    {
        const bool branch_taken_0x3832e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3832e0) {
            ctx->pc = 0x3832E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3832E0u;
            // 0x3832e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3832F8u;
            goto label_3832f8;
        }
    }
    ctx->pc = 0x3832E8u;
label_3832e8:
    // 0x3832e8: 0xc04008c  jal         func_100230
label_3832ec:
    if (ctx->pc == 0x3832ECu) {
        ctx->pc = 0x3832F0u;
        goto label_3832f0;
    }
    ctx->pc = 0x3832E8u;
    SET_GPR_U32(ctx, 31, 0x3832F0u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3832F0u; }
        if (ctx->pc != 0x3832F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3832F0u; }
        if (ctx->pc != 0x3832F0u) { return; }
    }
    ctx->pc = 0x3832F0u;
label_3832f0:
    // 0x3832f0: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x3832f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_3832f4:
    // 0x3832f4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3832f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3832f8:
    // 0x3832f8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3832fc:
    if (ctx->pc == 0x3832FCu) {
        ctx->pc = 0x3832FCu;
            // 0x3832fc: 0x26240074  addiu       $a0, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->pc = 0x383300u;
        goto label_383300;
    }
    ctx->pc = 0x3832F8u;
    {
        const bool branch_taken_0x3832f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3832f8) {
            ctx->pc = 0x3832FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3832F8u;
            // 0x3832fc: 0x26240074  addiu       $a0, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383310u;
            goto label_383310;
        }
    }
    ctx->pc = 0x383300u;
label_383300:
    // 0x383300: 0xc04008c  jal         func_100230
label_383304:
    if (ctx->pc == 0x383304u) {
        ctx->pc = 0x383308u;
        goto label_383308;
    }
    ctx->pc = 0x383300u;
    SET_GPR_U32(ctx, 31, 0x383308u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383308u; }
        if (ctx->pc != 0x383308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383308u; }
        if (ctx->pc != 0x383308u) { return; }
    }
    ctx->pc = 0x383308u;
label_383308:
    // 0x383308: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x383308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_38330c:
    // 0x38330c: 0x26240074  addiu       $a0, $s1, 0x74
    ctx->pc = 0x38330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_383310:
    // 0x383310: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_383314:
    if (ctx->pc == 0x383314u) {
        ctx->pc = 0x383318u;
        goto label_383318;
    }
    ctx->pc = 0x383310u;
    {
        const bool branch_taken_0x383310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383310) {
            ctx->pc = 0x383360u;
            goto label_383360;
        }
    }
    ctx->pc = 0x383318u;
label_383318:
    // 0x383318: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38331c:
    // 0x38331c: 0x24427980  addiu       $v0, $v0, 0x7980
    ctx->pc = 0x38331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
label_383320:
    // 0x383320: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_383324:
    if (ctx->pc == 0x383324u) {
        ctx->pc = 0x383324u;
            // 0x383324: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x383328u;
        goto label_383328;
    }
    ctx->pc = 0x383320u;
    {
        const bool branch_taken_0x383320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x383324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383320u;
            // 0x383324: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383320) {
            ctx->pc = 0x383360u;
            goto label_383360;
        }
    }
    ctx->pc = 0x383328u;
label_383328:
    // 0x383328: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38332c:
    // 0x38332c: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x38332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_383330:
    // 0x383330: 0xc0d37dc  jal         func_34DF70
label_383334:
    if (ctx->pc == 0x383334u) {
        ctx->pc = 0x383334u;
            // 0x383334: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x383338u;
        goto label_383338;
    }
    ctx->pc = 0x383330u;
    SET_GPR_U32(ctx, 31, 0x383338u);
    ctx->pc = 0x383334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383330u;
            // 0x383334: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383338u; }
        if (ctx->pc != 0x383338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383338u; }
        if (ctx->pc != 0x383338u) { return; }
    }
    ctx->pc = 0x383338u;
label_383338:
    // 0x383338: 0x26230074  addiu       $v1, $s1, 0x74
    ctx->pc = 0x383338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_38333c:
    // 0x38333c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_383340:
    if (ctx->pc == 0x383340u) {
        ctx->pc = 0x383344u;
        goto label_383344;
    }
    ctx->pc = 0x38333Cu;
    {
        const bool branch_taken_0x38333c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38333c) {
            ctx->pc = 0x383360u;
            goto label_383360;
        }
    }
    ctx->pc = 0x383344u;
label_383344:
    // 0x383344: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_383348:
    // 0x383348: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x383348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_38334c:
    // 0x38334c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_383350:
    if (ctx->pc == 0x383350u) {
        ctx->pc = 0x383350u;
            // 0x383350: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x383354u;
        goto label_383354;
    }
    ctx->pc = 0x38334Cu;
    {
        const bool branch_taken_0x38334c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x383350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38334Cu;
            // 0x383350: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38334c) {
            ctx->pc = 0x383360u;
            goto label_383360;
        }
    }
    ctx->pc = 0x383354u;
label_383354:
    // 0x383354: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_383358:
    // 0x383358: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x383358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_38335c:
    // 0x38335c: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x38335cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_383360:
    // 0x383360: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_383364:
    if (ctx->pc == 0x383364u) {
        ctx->pc = 0x383364u;
            // 0x383364: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x383368u;
        goto label_383368;
    }
    ctx->pc = 0x383360u;
    {
        const bool branch_taken_0x383360 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x383360) {
            ctx->pc = 0x383364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383360u;
            // 0x383364: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383388u;
            goto label_383388;
        }
    }
    ctx->pc = 0x383368u;
label_383368:
    // 0x383368: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38336c:
    // 0x38336c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x38336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_383370:
    // 0x383370: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_383374:
    if (ctx->pc == 0x383374u) {
        ctx->pc = 0x383374u;
            // 0x383374: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x383378u;
        goto label_383378;
    }
    ctx->pc = 0x383370u;
    {
        const bool branch_taken_0x383370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x383374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383370u;
            // 0x383374: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383370) {
            ctx->pc = 0x383384u;
            goto label_383384;
        }
    }
    ctx->pc = 0x383378u;
label_383378:
    // 0x383378: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38337c:
    // 0x38337c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x38337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_383380:
    // 0x383380: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x383380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_383384:
    // 0x383384: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x383384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_383388:
    // 0x383388: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x383388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38338c:
    // 0x38338c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_383390:
    if (ctx->pc == 0x383390u) {
        ctx->pc = 0x383390u;
            // 0x383390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383394u;
        goto label_383394;
    }
    ctx->pc = 0x38338Cu;
    {
        const bool branch_taken_0x38338c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38338c) {
            ctx->pc = 0x383390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38338Cu;
            // 0x383390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3833A0u;
            goto label_3833a0;
        }
    }
    ctx->pc = 0x383394u;
label_383394:
    // 0x383394: 0xc0400a8  jal         func_1002A0
label_383398:
    if (ctx->pc == 0x383398u) {
        ctx->pc = 0x383398u;
            // 0x383398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38339Cu;
        goto label_38339c;
    }
    ctx->pc = 0x383394u;
    SET_GPR_U32(ctx, 31, 0x38339Cu);
    ctx->pc = 0x383398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383394u;
            // 0x383398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38339Cu; }
        if (ctx->pc != 0x38339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38339Cu; }
        if (ctx->pc != 0x38339Cu) { return; }
    }
    ctx->pc = 0x38339Cu;
label_38339c:
    // 0x38339c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38339cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3833a0:
    // 0x3833a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3833a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3833a4:
    // 0x3833a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3833a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3833a8:
    // 0x3833a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3833a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3833ac:
    // 0x3833ac: 0x3e00008  jr          $ra
label_3833b0:
    if (ctx->pc == 0x3833B0u) {
        ctx->pc = 0x3833B0u;
            // 0x3833b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3833B4u;
        goto label_3833b4;
    }
    ctx->pc = 0x3833ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3833B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3833ACu;
            // 0x3833b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3833B4u;
label_3833b4:
    // 0x3833b4: 0x0  nop
    ctx->pc = 0x3833b4u;
    // NOP
label_3833b8:
    // 0x3833b8: 0x0  nop
    ctx->pc = 0x3833b8u;
    // NOP
label_3833bc:
    // 0x3833bc: 0x0  nop
    ctx->pc = 0x3833bcu;
    // NOP
label_3833c0:
    // 0x3833c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3833c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3833c4:
    // 0x3833c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3833c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3833c8:
    // 0x3833c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3833c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3833cc:
    // 0x3833cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3833ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3833d0:
    // 0x3833d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3833d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3833d4:
    // 0x3833d4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_3833d8:
    if (ctx->pc == 0x3833D8u) {
        ctx->pc = 0x3833D8u;
            // 0x3833d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3833DCu;
        goto label_3833dc;
    }
    ctx->pc = 0x3833D4u;
    {
        const bool branch_taken_0x3833d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3833D4u;
            // 0x3833d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833d4) {
            ctx->pc = 0x383474u;
            goto label_383474;
        }
    }
    ctx->pc = 0x3833DCu;
label_3833dc:
    // 0x3833dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3833dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3833e0:
    // 0x3833e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3833e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3833e4:
    // 0x3833e4: 0x246378c0  addiu       $v1, $v1, 0x78C0
    ctx->pc = 0x3833e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30912));
label_3833e8:
    // 0x3833e8: 0x244278cc  addiu       $v0, $v0, 0x78CC
    ctx->pc = 0x3833e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30924));
label_3833ec:
    // 0x3833ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3833ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3833f0:
    // 0x3833f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3833f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3833f4:
    // 0x3833f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3833f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3833f8:
    // 0x3833f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3833f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3833fc:
    // 0x3833fc: 0x320f809  jalr        $t9
label_383400:
    if (ctx->pc == 0x383400u) {
        ctx->pc = 0x383404u;
        goto label_383404;
    }
    ctx->pc = 0x3833FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x383404u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x383404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x383404u; }
            if (ctx->pc != 0x383404u) { return; }
        }
        }
    }
    ctx->pc = 0x383404u;
label_383404:
    // 0x383404: 0x26220210  addiu       $v0, $s1, 0x210
    ctx->pc = 0x383404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_383408:
    // 0x383408: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_38340c:
    if (ctx->pc == 0x38340Cu) {
        ctx->pc = 0x38340Cu;
            // 0x38340c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x383410u;
        goto label_383410;
    }
    ctx->pc = 0x383408u;
    {
        const bool branch_taken_0x383408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383408) {
            ctx->pc = 0x38340Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383408u;
            // 0x38340c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383420u;
            goto label_383420;
        }
    }
    ctx->pc = 0x383410u;
label_383410:
    // 0x383410: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_383414:
    // 0x383414: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x383414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_383418:
    // 0x383418: 0xae220210  sw          $v0, 0x210($s1)
    ctx->pc = 0x383418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 2));
label_38341c:
    // 0x38341c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x38341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_383420:
    // 0x383420: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_383424:
    if (ctx->pc == 0x383424u) {
        ctx->pc = 0x383428u;
        goto label_383428;
    }
    ctx->pc = 0x383420u;
    {
        const bool branch_taken_0x383420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383420) {
            ctx->pc = 0x383448u;
            goto label_383448;
        }
    }
    ctx->pc = 0x383428u;
label_383428:
    // 0x383428: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x383428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38342c:
    // 0x38342c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x38342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_383430:
    // 0x383430: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x383430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_383434:
    // 0x383434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_383438:
    if (ctx->pc == 0x383438u) {
        ctx->pc = 0x383438u;
            // 0x383438: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x38343Cu;
        goto label_38343c;
    }
    ctx->pc = 0x383434u;
    {
        const bool branch_taken_0x383434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383434u;
            // 0x383438: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383434) {
            ctx->pc = 0x383448u;
            goto label_383448;
        }
    }
    ctx->pc = 0x38343Cu;
label_38343c:
    // 0x38343c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_383440:
    // 0x383440: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x383440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_383444:
    // 0x383444: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x383444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_383448:
    // 0x383448: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_38344c:
    if (ctx->pc == 0x38344Cu) {
        ctx->pc = 0x38344Cu;
            // 0x38344c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x383450u;
        goto label_383450;
    }
    ctx->pc = 0x383448u;
    {
        const bool branch_taken_0x383448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x383448) {
            ctx->pc = 0x38344Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383448u;
            // 0x38344c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383460u;
            goto label_383460;
        }
    }
    ctx->pc = 0x383450u;
label_383450:
    // 0x383450: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x383450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_383454:
    // 0x383454: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x383454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
label_383458:
    // 0x383458: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x383458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38345c:
    // 0x38345c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x38345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_383460:
    // 0x383460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x383460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_383464:
    // 0x383464: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_383468:
    if (ctx->pc == 0x383468u) {
        ctx->pc = 0x383468u;
            // 0x383468: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38346Cu;
        goto label_38346c;
    }
    ctx->pc = 0x383464u;
    {
        const bool branch_taken_0x383464 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x383464) {
            ctx->pc = 0x383468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383464u;
            // 0x383468: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383478u;
            goto label_383478;
        }
    }
    ctx->pc = 0x38346Cu;
label_38346c:
    // 0x38346c: 0xc0400a8  jal         func_1002A0
label_383470:
    if (ctx->pc == 0x383470u) {
        ctx->pc = 0x383470u;
            // 0x383470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383474u;
        goto label_383474;
    }
    ctx->pc = 0x38346Cu;
    SET_GPR_U32(ctx, 31, 0x383474u);
    ctx->pc = 0x383470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38346Cu;
            // 0x383470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383474u; }
        if (ctx->pc != 0x383474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383474u; }
        if (ctx->pc != 0x383474u) { return; }
    }
    ctx->pc = 0x383474u;
label_383474:
    // 0x383474: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x383474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_383478:
    // 0x383478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x383478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38347c:
    // 0x38347c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38347cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383480:
    // 0x383480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383484:
    // 0x383484: 0x3e00008  jr          $ra
label_383488:
    if (ctx->pc == 0x383488u) {
        ctx->pc = 0x383488u;
            // 0x383488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38348Cu;
        goto label_38348c;
    }
    ctx->pc = 0x383484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383484u;
            // 0x383488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38348Cu;
label_38348c:
    // 0x38348c: 0x0  nop
    ctx->pc = 0x38348cu;
    // NOP
label_383490:
    // 0x383490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_383494:
    // 0x383494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x383494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_383498:
    // 0x383498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38349c:
    // 0x38349c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3834a0:
    // 0x3834a0: 0x8c9003a4  lw          $s0, 0x3A4($a0)
    ctx->pc = 0x3834a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
label_3834a4:
    // 0x3834a4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_3834a8:
    if (ctx->pc == 0x3834A8u) {
        ctx->pc = 0x3834A8u;
            // 0x3834a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3834ACu;
        goto label_3834ac;
    }
    ctx->pc = 0x3834A4u;
    {
        const bool branch_taken_0x3834a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3834A4u;
            // 0x3834a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834a4) {
            ctx->pc = 0x3834C8u;
            goto label_3834c8;
        }
    }
    ctx->pc = 0x3834ACu;
label_3834ac:
    // 0x3834ac: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_3834b0:
    if (ctx->pc == 0x3834B0u) {
        ctx->pc = 0x3834B0u;
            // 0x3834b0: 0xae2003a4  sw          $zero, 0x3A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
        ctx->pc = 0x3834B4u;
        goto label_3834b4;
    }
    ctx->pc = 0x3834ACu;
    {
        const bool branch_taken_0x3834ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3834ac) {
            ctx->pc = 0x3834B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3834ACu;
            // 0x3834b0: 0xae2003a4  sw          $zero, 0x3A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3834CCu;
            goto label_3834cc;
        }
    }
    ctx->pc = 0x3834B4u;
label_3834b4:
    // 0x3834b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3834b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3834b8:
    // 0x3834b8: 0xc0b6158  jal         func_2D8560
label_3834bc:
    if (ctx->pc == 0x3834BCu) {
        ctx->pc = 0x3834BCu;
            // 0x3834bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3834C0u;
        goto label_3834c0;
    }
    ctx->pc = 0x3834B8u;
    SET_GPR_U32(ctx, 31, 0x3834C0u);
    ctx->pc = 0x3834BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3834B8u;
            // 0x3834bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8560u;
    if (runtime->hasFunction(0x2D8560u)) {
        auto targetFn = runtime->lookupFunction(0x2D8560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3834C0u; }
        if (ctx->pc != 0x3834C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8560_0x2d8560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3834C0u; }
        if (ctx->pc != 0x3834C0u) { return; }
    }
    ctx->pc = 0x3834C0u;
label_3834c0:
    // 0x3834c0: 0xc0400a8  jal         func_1002A0
label_3834c4:
    if (ctx->pc == 0x3834C4u) {
        ctx->pc = 0x3834C4u;
            // 0x3834c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3834C8u;
        goto label_3834c8;
    }
    ctx->pc = 0x3834C0u;
    SET_GPR_U32(ctx, 31, 0x3834C8u);
    ctx->pc = 0x3834C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3834C0u;
            // 0x3834c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3834C8u; }
        if (ctx->pc != 0x3834C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3834C8u; }
        if (ctx->pc != 0x3834C8u) { return; }
    }
    ctx->pc = 0x3834C8u;
label_3834c8:
    // 0x3834c8: 0xae2003a4  sw          $zero, 0x3A4($s1)
    ctx->pc = 0x3834c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
label_3834cc:
    // 0x3834cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3834ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3834d0:
    // 0x3834d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3834d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3834d4:
    // 0x3834d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3834d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3834d8:
    // 0x3834d8: 0x3e00008  jr          $ra
label_3834dc:
    if (ctx->pc == 0x3834DCu) {
        ctx->pc = 0x3834DCu;
            // 0x3834dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3834E0u;
        goto label_3834e0;
    }
    ctx->pc = 0x3834D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3834DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3834D8u;
            // 0x3834dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3834E0u;
label_3834e0:
    // 0x3834e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3834e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3834e4:
    // 0x3834e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3834e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3834e8:
    // 0x3834e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3834e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3834ec:
    // 0x3834ec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3834ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3834f0:
    // 0x3834f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3834f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3834f4:
    // 0x3834f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3834f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3834f8:
    // 0x3834f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3834f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3834fc:
    // 0x3834fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3834fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_383500:
    // 0x383500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x383500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_383504:
    // 0x383504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x383504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_383508:
    // 0x383508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38350c:
    // 0x38350c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_383510:
    // 0x383510: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x383510u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_383514:
    // 0x383514: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_383518:
    if (ctx->pc == 0x383518u) {
        ctx->pc = 0x383518u;
            // 0x383518: 0xafa400ec  sw          $a0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        ctx->pc = 0x38351Cu;
        goto label_38351c;
    }
    ctx->pc = 0x383514u;
    {
        const bool branch_taken_0x383514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x383518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383514u;
            // 0x383518: 0xafa400ec  sw          $a0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383514) {
            ctx->pc = 0x383564u;
            goto label_383564;
        }
    }
    ctx->pc = 0x38351Cu;
label_38351c:
    // 0x38351c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_383520:
    // 0x383520: 0x50a30076  beql        $a1, $v1, . + 4 + (0x76 << 2)
label_383524:
    if (ctx->pc == 0x383524u) {
        ctx->pc = 0x383524u;
            // 0x383524: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x383528u;
        goto label_383528;
    }
    ctx->pc = 0x383520u;
    {
        const bool branch_taken_0x383520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x383520) {
            ctx->pc = 0x383524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383520u;
            // 0x383524: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3836FCu;
            goto label_3836fc;
        }
    }
    ctx->pc = 0x383528u;
label_383528:
    // 0x383528: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x383528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38352c:
    // 0x38352c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_383530:
    if (ctx->pc == 0x383530u) {
        ctx->pc = 0x383534u;
        goto label_383534;
    }
    ctx->pc = 0x38352Cu;
    {
        const bool branch_taken_0x38352c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38352c) {
            ctx->pc = 0x38353Cu;
            goto label_38353c;
        }
    }
    ctx->pc = 0x383534u;
label_383534:
    // 0x383534: 0x10000070  b           . + 4 + (0x70 << 2)
label_383538:
    if (ctx->pc == 0x383538u) {
        ctx->pc = 0x38353Cu;
        goto label_38353c;
    }
    ctx->pc = 0x383534u;
    {
        const bool branch_taken_0x383534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383534) {
            ctx->pc = 0x3836F8u;
            goto label_3836f8;
        }
    }
    ctx->pc = 0x38353Cu;
label_38353c:
    // 0x38353c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38353cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_383540:
    // 0x383540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x383540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_383544:
    // 0x383544: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x383544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_383548:
    // 0x383548: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x383548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_38354c:
    // 0x38354c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x38354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_383550:
    // 0x383550: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x383550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_383554:
    // 0x383554: 0x320f809  jalr        $t9
label_383558:
    if (ctx->pc == 0x383558u) {
        ctx->pc = 0x383558u;
            // 0x383558: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x38355Cu;
        goto label_38355c;
    }
    ctx->pc = 0x383554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38355Cu);
        ctx->pc = 0x383558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383554u;
            // 0x383558: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38355Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38355Cu; }
            if (ctx->pc != 0x38355Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38355Cu;
label_38355c:
    // 0x38355c: 0x10000066  b           . + 4 + (0x66 << 2)
label_383560:
    if (ctx->pc == 0x383560u) {
        ctx->pc = 0x383564u;
        goto label_383564;
    }
    ctx->pc = 0x38355Cu;
    {
        const bool branch_taken_0x38355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38355c) {
            ctx->pc = 0x3836F8u;
            goto label_3836f8;
        }
    }
    ctx->pc = 0x383564u;
label_383564:
    // 0x383564: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x383564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383568:
    // 0x383568: 0x8c7e0070  lw          $fp, 0x70($v1)
    ctx->pc = 0x383568u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_38356c:
    // 0x38356c: 0x13c00062  beqz        $fp, . + 4 + (0x62 << 2)
label_383570:
    if (ctx->pc == 0x383570u) {
        ctx->pc = 0x383574u;
        goto label_383574;
    }
    ctx->pc = 0x38356Cu;
    {
        const bool branch_taken_0x38356c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x38356c) {
            ctx->pc = 0x3836F8u;
            goto label_3836f8;
        }
    }
    ctx->pc = 0x383574u;
label_383574:
    // 0x383574: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x383574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_383578:
    // 0x383578: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x383578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_38357c:
    // 0x38357c: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x38357cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_383580:
    // 0x383580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383584:
    // 0x383584: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x383584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_383588:
    // 0x383588: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x383588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38358c:
    // 0x38358c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x38358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_383590:
    // 0x383590: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x383590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_383594:
    // 0x383594: 0x8cb70130  lw          $s7, 0x130($a1)
    ctx->pc = 0x383594u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_383598:
    // 0x383598: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x383598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_38359c:
    // 0x38359c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x38359cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3835a0:
    // 0x3835a0: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x3835a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_3835a4:
    // 0x3835a4: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x3835a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_3835a8:
    // 0x3835a8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3835a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3835ac:
    // 0x3835ac: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3835acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3835b0:
    // 0x3835b0: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x3835b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3835b4:
    // 0x3835b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3835b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3835b8:
    // 0x3835b8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3835b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3835bc:
    // 0x3835bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3835bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3835c0:
    // 0x3835c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3835c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3835c4:
    // 0x3835c4: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x3835c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_3835c8:
    // 0x3835c8: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x3835c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_3835cc:
    // 0x3835cc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3835ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3835d0:
    // 0x3835d0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3835d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3835d4:
    // 0x3835d4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3835d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3835d8:
    // 0x3835d8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3835d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3835dc:
    // 0x3835dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3835dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3835e0:
    // 0x3835e0: 0xc04e4a4  jal         func_139290
label_3835e4:
    if (ctx->pc == 0x3835E4u) {
        ctx->pc = 0x3835E4u;
            // 0x3835e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3835E8u;
        goto label_3835e8;
    }
    ctx->pc = 0x3835E0u;
    SET_GPR_U32(ctx, 31, 0x3835E8u);
    ctx->pc = 0x3835E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3835E0u;
            // 0x3835e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3835E8u; }
        if (ctx->pc != 0x3835E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3835E8u; }
        if (ctx->pc != 0x3835E8u) { return; }
    }
    ctx->pc = 0x3835E8u;
label_3835e8:
    // 0x3835e8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3835e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3835ec:
    // 0x3835ec: 0xc04e738  jal         func_139CE0
label_3835f0:
    if (ctx->pc == 0x3835F0u) {
        ctx->pc = 0x3835F0u;
            // 0x3835f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3835F4u;
        goto label_3835f4;
    }
    ctx->pc = 0x3835ECu;
    SET_GPR_U32(ctx, 31, 0x3835F4u);
    ctx->pc = 0x3835F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3835ECu;
            // 0x3835f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3835F4u; }
        if (ctx->pc != 0x3835F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3835F4u; }
        if (ctx->pc != 0x3835F4u) { return; }
    }
    ctx->pc = 0x3835F4u;
label_3835f4:
    // 0x3835f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3835f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3835f8:
    // 0x3835f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3835f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3835fc:
    // 0x3835fc: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3835fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_383600:
    // 0x383600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x383600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383604:
    // 0x383604: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x383604u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_383608:
    // 0x383608: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x383608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_38360c:
    // 0x38360c: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x38360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_383610:
    // 0x383610: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x383610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_383614:
    // 0x383614: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x383614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_383618:
    // 0x383618: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x383618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_38361c:
    // 0x38361c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x38361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_383620:
    // 0x383620: 0x14640023  bne         $v1, $a0, . + 4 + (0x23 << 2)
label_383624:
    if (ctx->pc == 0x383624u) {
        ctx->pc = 0x383628u;
        goto label_383628;
    }
    ctx->pc = 0x383620u;
    {
        const bool branch_taken_0x383620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x383620) {
            ctx->pc = 0x3836B0u;
            goto label_3836b0;
        }
    }
    ctx->pc = 0x383628u;
label_383628:
    // 0x383628: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x383628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_38362c:
    // 0x38362c: 0x8c70005c  lw          $s0, 0x5C($v1)
    ctx->pc = 0x38362cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_383630:
    // 0x383630: 0x8c720058  lw          $s2, 0x58($v1)
    ctx->pc = 0x383630u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_383634:
    // 0x383634: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_383638:
    if (ctx->pc == 0x383638u) {
        ctx->pc = 0x383638u;
            // 0x383638: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38363Cu;
        goto label_38363c;
    }
    ctx->pc = 0x383634u;
    {
        const bool branch_taken_0x383634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383634u;
            // 0x383638: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383634) {
            ctx->pc = 0x3836B0u;
            goto label_3836b0;
        }
    }
    ctx->pc = 0x38363Cu;
label_38363c:
    // 0x38363c: 0x0  nop
    ctx->pc = 0x38363cu;
    // NOP
label_383640:
    // 0x383640: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x383640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_383644:
    // 0x383644: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x383644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383648:
    // 0x383648: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x383648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38364c:
    // 0x38364c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x38364cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_383650:
    // 0x383650: 0x320f809  jalr        $t9
label_383654:
    if (ctx->pc == 0x383654u) {
        ctx->pc = 0x383658u;
        goto label_383658;
    }
    ctx->pc = 0x383650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x383658u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x383658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x383658u; }
            if (ctx->pc != 0x383658u) { return; }
        }
        }
    }
    ctx->pc = 0x383658u;
label_383658:
    // 0x383658: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x383658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38365c:
    // 0x38365c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38365cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_383660:
    // 0x383660: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x383660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_383664:
    // 0x383664: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x383664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_383668:
    // 0x383668: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x383668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_38366c:
    // 0x38366c: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x38366cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_383670:
    // 0x383670: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x383670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383674:
    // 0x383674: 0xc0e0df0  jal         func_3837C0
label_383678:
    if (ctx->pc == 0x383678u) {
        ctx->pc = 0x383678u;
            // 0x383678: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38367Cu;
        goto label_38367c;
    }
    ctx->pc = 0x383674u;
    SET_GPR_U32(ctx, 31, 0x38367Cu);
    ctx->pc = 0x383678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383674u;
            // 0x383678: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3837C0u;
    if (runtime->hasFunction(0x3837C0u)) {
        auto targetFn = runtime->lookupFunction(0x3837C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38367Cu; }
        if (ctx->pc != 0x38367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003837C0_0x3837c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38367Cu; }
        if (ctx->pc != 0x38367Cu) { return; }
    }
    ctx->pc = 0x38367Cu;
label_38367c:
    // 0x38367c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_383680:
    if (ctx->pc == 0x383680u) {
        ctx->pc = 0x383684u;
        goto label_383684;
    }
    ctx->pc = 0x38367Cu;
    {
        const bool branch_taken_0x38367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38367c) {
            ctx->pc = 0x3836A0u;
            goto label_3836a0;
        }
    }
    ctx->pc = 0x383684u;
label_383684:
    // 0x383684: 0xc0e0dec  jal         func_3837B0
label_383688:
    if (ctx->pc == 0x383688u) {
        ctx->pc = 0x38368Cu;
        goto label_38368c;
    }
    ctx->pc = 0x383684u;
    SET_GPR_U32(ctx, 31, 0x38368Cu);
    ctx->pc = 0x3837B0u;
    if (runtime->hasFunction(0x3837B0u)) {
        auto targetFn = runtime->lookupFunction(0x3837B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38368Cu; }
        if (ctx->pc != 0x38368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003837B0_0x3837b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38368Cu; }
        if (ctx->pc != 0x38368Cu) { return; }
    }
    ctx->pc = 0x38368Cu;
label_38368c:
    // 0x38368c: 0xc0e0de8  jal         func_3837A0
label_383690:
    if (ctx->pc == 0x383690u) {
        ctx->pc = 0x383690u;
            // 0x383690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383694u;
        goto label_383694;
    }
    ctx->pc = 0x38368Cu;
    SET_GPR_U32(ctx, 31, 0x383694u);
    ctx->pc = 0x383690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38368Cu;
            // 0x383690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3837A0u;
    if (runtime->hasFunction(0x3837A0u)) {
        auto targetFn = runtime->lookupFunction(0x3837A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383694u; }
        if (ctx->pc != 0x383694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003837A0_0x3837a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383694u; }
        if (ctx->pc != 0x383694u) { return; }
    }
    ctx->pc = 0x383694u;
label_383694:
    // 0x383694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383698:
    // 0x383698: 0xc0e0dcc  jal         func_383730
label_38369c:
    if (ctx->pc == 0x38369Cu) {
        ctx->pc = 0x38369Cu;
            // 0x38369c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3836A0u;
        goto label_3836a0;
    }
    ctx->pc = 0x383698u;
    SET_GPR_U32(ctx, 31, 0x3836A0u);
    ctx->pc = 0x38369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383698u;
            // 0x38369c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383730u;
    if (runtime->hasFunction(0x383730u)) {
        auto targetFn = runtime->lookupFunction(0x383730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3836A0u; }
        if (ctx->pc != 0x3836A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383730_0x383730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3836A0u; }
        if (ctx->pc != 0x3836A0u) { return; }
    }
    ctx->pc = 0x3836A0u;
label_3836a0:
    // 0x3836a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3836a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3836a4:
    // 0x3836a4: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x3836a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3836a8:
    // 0x3836a8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_3836ac:
    if (ctx->pc == 0x3836ACu) {
        ctx->pc = 0x3836ACu;
            // 0x3836ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3836B0u;
        goto label_3836b0;
    }
    ctx->pc = 0x3836A8u;
    {
        const bool branch_taken_0x3836a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3836ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3836A8u;
            // 0x3836ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836a8) {
            ctx->pc = 0x383640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_383640;
        }
    }
    ctx->pc = 0x3836B0u;
label_3836b0:
    // 0x3836b0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3836b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3836b4:
    // 0x3836b4: 0x2be182b  sltu        $v1, $s5, $fp
    ctx->pc = 0x3836b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3836b8:
    // 0x3836b8: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
label_3836bc:
    if (ctx->pc == 0x3836BCu) {
        ctx->pc = 0x3836BCu;
            // 0x3836bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3836C0u;
        goto label_3836c0;
    }
    ctx->pc = 0x3836B8u;
    {
        const bool branch_taken_0x3836b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3836BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3836B8u;
            // 0x3836bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836b8) {
            ctx->pc = 0x3835FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3835fc;
        }
    }
    ctx->pc = 0x3836C0u;
label_3836c0:
    // 0x3836c0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3836c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3836c4:
    // 0x3836c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3836c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3836c8:
    // 0x3836c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3836c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3836cc:
    // 0x3836cc: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3836ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3836d0:
    // 0x3836d0: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_3836d4:
    if (ctx->pc == 0x3836D4u) {
        ctx->pc = 0x3836D8u;
        goto label_3836d8;
    }
    ctx->pc = 0x3836D0u;
    {
        const bool branch_taken_0x3836d0 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x3836d0) {
            ctx->pc = 0x3836F8u;
            goto label_3836f8;
        }
    }
    ctx->pc = 0x3836D8u;
label_3836d8:
    // 0x3836d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3836d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3836dc:
    // 0x3836dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3836dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3836e0:
    // 0x3836e0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3836e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3836e4:
    // 0x3836e4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3836e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3836e8:
    // 0x3836e8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3836e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3836ec:
    // 0x3836ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3836ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3836f0:
    // 0x3836f0: 0xc055d28  jal         func_1574A0
label_3836f4:
    if (ctx->pc == 0x3836F4u) {
        ctx->pc = 0x3836F4u;
            // 0x3836f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3836F8u;
        goto label_3836f8;
    }
    ctx->pc = 0x3836F0u;
    SET_GPR_U32(ctx, 31, 0x3836F8u);
    ctx->pc = 0x3836F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3836F0u;
            // 0x3836f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3836F8u; }
        if (ctx->pc != 0x3836F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3836F8u; }
        if (ctx->pc != 0x3836F8u) { return; }
    }
    ctx->pc = 0x3836F8u;
label_3836f8:
    // 0x3836f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3836f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3836fc:
    // 0x3836fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3836fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_383700:
    // 0x383700: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x383700u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_383704:
    // 0x383704: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x383704u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_383708:
    // 0x383708: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x383708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38370c:
    // 0x38370c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38370cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383710:
    // 0x383710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_383714:
    // 0x383714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x383714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_383718:
    // 0x383718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38371c:
    // 0x38371c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38371cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383720:
    // 0x383720: 0x3e00008  jr          $ra
label_383724:
    if (ctx->pc == 0x383724u) {
        ctx->pc = 0x383724u;
            // 0x383724: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x383728u;
        goto label_383728;
    }
    ctx->pc = 0x383720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383720u;
            // 0x383724: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x383728u;
label_383728:
    // 0x383728: 0x0  nop
    ctx->pc = 0x383728u;
    // NOP
label_38372c:
    // 0x38372c: 0x0  nop
    ctx->pc = 0x38372cu;
    // NOP
}
