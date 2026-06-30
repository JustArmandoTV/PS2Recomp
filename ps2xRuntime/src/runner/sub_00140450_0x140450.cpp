#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140450
// Address: 0x140450 - 0x140a10
void sub_00140450_0x140450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140450_0x140450");
#endif

    switch (ctx->pc) {
        case 0x140450u: goto label_140450;
        case 0x140454u: goto label_140454;
        case 0x140458u: goto label_140458;
        case 0x14045cu: goto label_14045c;
        case 0x140460u: goto label_140460;
        case 0x140464u: goto label_140464;
        case 0x140468u: goto label_140468;
        case 0x14046cu: goto label_14046c;
        case 0x140470u: goto label_140470;
        case 0x140474u: goto label_140474;
        case 0x140478u: goto label_140478;
        case 0x14047cu: goto label_14047c;
        case 0x140480u: goto label_140480;
        case 0x140484u: goto label_140484;
        case 0x140488u: goto label_140488;
        case 0x14048cu: goto label_14048c;
        case 0x140490u: goto label_140490;
        case 0x140494u: goto label_140494;
        case 0x140498u: goto label_140498;
        case 0x14049cu: goto label_14049c;
        case 0x1404a0u: goto label_1404a0;
        case 0x1404a4u: goto label_1404a4;
        case 0x1404a8u: goto label_1404a8;
        case 0x1404acu: goto label_1404ac;
        case 0x1404b0u: goto label_1404b0;
        case 0x1404b4u: goto label_1404b4;
        case 0x1404b8u: goto label_1404b8;
        case 0x1404bcu: goto label_1404bc;
        case 0x1404c0u: goto label_1404c0;
        case 0x1404c4u: goto label_1404c4;
        case 0x1404c8u: goto label_1404c8;
        case 0x1404ccu: goto label_1404cc;
        case 0x1404d0u: goto label_1404d0;
        case 0x1404d4u: goto label_1404d4;
        case 0x1404d8u: goto label_1404d8;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e0u: goto label_1404e0;
        case 0x1404e4u: goto label_1404e4;
        case 0x1404e8u: goto label_1404e8;
        case 0x1404ecu: goto label_1404ec;
        case 0x1404f0u: goto label_1404f0;
        case 0x1404f4u: goto label_1404f4;
        case 0x1404f8u: goto label_1404f8;
        case 0x1404fcu: goto label_1404fc;
        case 0x140500u: goto label_140500;
        case 0x140504u: goto label_140504;
        case 0x140508u: goto label_140508;
        case 0x14050cu: goto label_14050c;
        case 0x140510u: goto label_140510;
        case 0x140514u: goto label_140514;
        case 0x140518u: goto label_140518;
        case 0x14051cu: goto label_14051c;
        case 0x140520u: goto label_140520;
        case 0x140524u: goto label_140524;
        case 0x140528u: goto label_140528;
        case 0x14052cu: goto label_14052c;
        case 0x140530u: goto label_140530;
        case 0x140534u: goto label_140534;
        case 0x140538u: goto label_140538;
        case 0x14053cu: goto label_14053c;
        case 0x140540u: goto label_140540;
        case 0x140544u: goto label_140544;
        case 0x140548u: goto label_140548;
        case 0x14054cu: goto label_14054c;
        case 0x140550u: goto label_140550;
        case 0x140554u: goto label_140554;
        case 0x140558u: goto label_140558;
        case 0x14055cu: goto label_14055c;
        case 0x140560u: goto label_140560;
        case 0x140564u: goto label_140564;
        case 0x140568u: goto label_140568;
        case 0x14056cu: goto label_14056c;
        case 0x140570u: goto label_140570;
        case 0x140574u: goto label_140574;
        case 0x140578u: goto label_140578;
        case 0x14057cu: goto label_14057c;
        case 0x140580u: goto label_140580;
        case 0x140584u: goto label_140584;
        case 0x140588u: goto label_140588;
        case 0x14058cu: goto label_14058c;
        case 0x140590u: goto label_140590;
        case 0x140594u: goto label_140594;
        case 0x140598u: goto label_140598;
        case 0x14059cu: goto label_14059c;
        case 0x1405a0u: goto label_1405a0;
        case 0x1405a4u: goto label_1405a4;
        case 0x1405a8u: goto label_1405a8;
        case 0x1405acu: goto label_1405ac;
        case 0x1405b0u: goto label_1405b0;
        case 0x1405b4u: goto label_1405b4;
        case 0x1405b8u: goto label_1405b8;
        case 0x1405bcu: goto label_1405bc;
        case 0x1405c0u: goto label_1405c0;
        case 0x1405c4u: goto label_1405c4;
        case 0x1405c8u: goto label_1405c8;
        case 0x1405ccu: goto label_1405cc;
        case 0x1405d0u: goto label_1405d0;
        case 0x1405d4u: goto label_1405d4;
        case 0x1405d8u: goto label_1405d8;
        case 0x1405dcu: goto label_1405dc;
        case 0x1405e0u: goto label_1405e0;
        case 0x1405e4u: goto label_1405e4;
        case 0x1405e8u: goto label_1405e8;
        case 0x1405ecu: goto label_1405ec;
        case 0x1405f0u: goto label_1405f0;
        case 0x1405f4u: goto label_1405f4;
        case 0x1405f8u: goto label_1405f8;
        case 0x1405fcu: goto label_1405fc;
        case 0x140600u: goto label_140600;
        case 0x140604u: goto label_140604;
        case 0x140608u: goto label_140608;
        case 0x14060cu: goto label_14060c;
        case 0x140610u: goto label_140610;
        case 0x140614u: goto label_140614;
        case 0x140618u: goto label_140618;
        case 0x14061cu: goto label_14061c;
        case 0x140620u: goto label_140620;
        case 0x140624u: goto label_140624;
        case 0x140628u: goto label_140628;
        case 0x14062cu: goto label_14062c;
        case 0x140630u: goto label_140630;
        case 0x140634u: goto label_140634;
        case 0x140638u: goto label_140638;
        case 0x14063cu: goto label_14063c;
        case 0x140640u: goto label_140640;
        case 0x140644u: goto label_140644;
        case 0x140648u: goto label_140648;
        case 0x14064cu: goto label_14064c;
        case 0x140650u: goto label_140650;
        case 0x140654u: goto label_140654;
        case 0x140658u: goto label_140658;
        case 0x14065cu: goto label_14065c;
        case 0x140660u: goto label_140660;
        case 0x140664u: goto label_140664;
        case 0x140668u: goto label_140668;
        case 0x14066cu: goto label_14066c;
        case 0x140670u: goto label_140670;
        case 0x140674u: goto label_140674;
        case 0x140678u: goto label_140678;
        case 0x14067cu: goto label_14067c;
        case 0x140680u: goto label_140680;
        case 0x140684u: goto label_140684;
        case 0x140688u: goto label_140688;
        case 0x14068cu: goto label_14068c;
        case 0x140690u: goto label_140690;
        case 0x140694u: goto label_140694;
        case 0x140698u: goto label_140698;
        case 0x14069cu: goto label_14069c;
        case 0x1406a0u: goto label_1406a0;
        case 0x1406a4u: goto label_1406a4;
        case 0x1406a8u: goto label_1406a8;
        case 0x1406acu: goto label_1406ac;
        case 0x1406b0u: goto label_1406b0;
        case 0x1406b4u: goto label_1406b4;
        case 0x1406b8u: goto label_1406b8;
        case 0x1406bcu: goto label_1406bc;
        case 0x1406c0u: goto label_1406c0;
        case 0x1406c4u: goto label_1406c4;
        case 0x1406c8u: goto label_1406c8;
        case 0x1406ccu: goto label_1406cc;
        case 0x1406d0u: goto label_1406d0;
        case 0x1406d4u: goto label_1406d4;
        case 0x1406d8u: goto label_1406d8;
        case 0x1406dcu: goto label_1406dc;
        case 0x1406e0u: goto label_1406e0;
        case 0x1406e4u: goto label_1406e4;
        case 0x1406e8u: goto label_1406e8;
        case 0x1406ecu: goto label_1406ec;
        case 0x1406f0u: goto label_1406f0;
        case 0x1406f4u: goto label_1406f4;
        case 0x1406f8u: goto label_1406f8;
        case 0x1406fcu: goto label_1406fc;
        case 0x140700u: goto label_140700;
        case 0x140704u: goto label_140704;
        case 0x140708u: goto label_140708;
        case 0x14070cu: goto label_14070c;
        case 0x140710u: goto label_140710;
        case 0x140714u: goto label_140714;
        case 0x140718u: goto label_140718;
        case 0x14071cu: goto label_14071c;
        case 0x140720u: goto label_140720;
        case 0x140724u: goto label_140724;
        case 0x140728u: goto label_140728;
        case 0x14072cu: goto label_14072c;
        case 0x140730u: goto label_140730;
        case 0x140734u: goto label_140734;
        case 0x140738u: goto label_140738;
        case 0x14073cu: goto label_14073c;
        case 0x140740u: goto label_140740;
        case 0x140744u: goto label_140744;
        case 0x140748u: goto label_140748;
        case 0x14074cu: goto label_14074c;
        case 0x140750u: goto label_140750;
        case 0x140754u: goto label_140754;
        case 0x140758u: goto label_140758;
        case 0x14075cu: goto label_14075c;
        case 0x140760u: goto label_140760;
        case 0x140764u: goto label_140764;
        case 0x140768u: goto label_140768;
        case 0x14076cu: goto label_14076c;
        case 0x140770u: goto label_140770;
        case 0x140774u: goto label_140774;
        case 0x140778u: goto label_140778;
        case 0x14077cu: goto label_14077c;
        case 0x140780u: goto label_140780;
        case 0x140784u: goto label_140784;
        case 0x140788u: goto label_140788;
        case 0x14078cu: goto label_14078c;
        case 0x140790u: goto label_140790;
        case 0x140794u: goto label_140794;
        case 0x140798u: goto label_140798;
        case 0x14079cu: goto label_14079c;
        case 0x1407a0u: goto label_1407a0;
        case 0x1407a4u: goto label_1407a4;
        case 0x1407a8u: goto label_1407a8;
        case 0x1407acu: goto label_1407ac;
        case 0x1407b0u: goto label_1407b0;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407b8u: goto label_1407b8;
        case 0x1407bcu: goto label_1407bc;
        case 0x1407c0u: goto label_1407c0;
        case 0x1407c4u: goto label_1407c4;
        case 0x1407c8u: goto label_1407c8;
        case 0x1407ccu: goto label_1407cc;
        case 0x1407d0u: goto label_1407d0;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407d8u: goto label_1407d8;
        case 0x1407dcu: goto label_1407dc;
        case 0x1407e0u: goto label_1407e0;
        case 0x1407e4u: goto label_1407e4;
        case 0x1407e8u: goto label_1407e8;
        case 0x1407ecu: goto label_1407ec;
        case 0x1407f0u: goto label_1407f0;
        case 0x1407f4u: goto label_1407f4;
        case 0x1407f8u: goto label_1407f8;
        case 0x1407fcu: goto label_1407fc;
        case 0x140800u: goto label_140800;
        case 0x140804u: goto label_140804;
        case 0x140808u: goto label_140808;
        case 0x14080cu: goto label_14080c;
        case 0x140810u: goto label_140810;
        case 0x140814u: goto label_140814;
        case 0x140818u: goto label_140818;
        case 0x14081cu: goto label_14081c;
        case 0x140820u: goto label_140820;
        case 0x140824u: goto label_140824;
        case 0x140828u: goto label_140828;
        case 0x14082cu: goto label_14082c;
        case 0x140830u: goto label_140830;
        case 0x140834u: goto label_140834;
        case 0x140838u: goto label_140838;
        case 0x14083cu: goto label_14083c;
        case 0x140840u: goto label_140840;
        case 0x140844u: goto label_140844;
        case 0x140848u: goto label_140848;
        case 0x14084cu: goto label_14084c;
        case 0x140850u: goto label_140850;
        case 0x140854u: goto label_140854;
        case 0x140858u: goto label_140858;
        case 0x14085cu: goto label_14085c;
        case 0x140860u: goto label_140860;
        case 0x140864u: goto label_140864;
        case 0x140868u: goto label_140868;
        case 0x14086cu: goto label_14086c;
        case 0x140870u: goto label_140870;
        case 0x140874u: goto label_140874;
        case 0x140878u: goto label_140878;
        case 0x14087cu: goto label_14087c;
        case 0x140880u: goto label_140880;
        case 0x140884u: goto label_140884;
        case 0x140888u: goto label_140888;
        case 0x14088cu: goto label_14088c;
        case 0x140890u: goto label_140890;
        case 0x140894u: goto label_140894;
        case 0x140898u: goto label_140898;
        case 0x14089cu: goto label_14089c;
        case 0x1408a0u: goto label_1408a0;
        case 0x1408a4u: goto label_1408a4;
        case 0x1408a8u: goto label_1408a8;
        case 0x1408acu: goto label_1408ac;
        case 0x1408b0u: goto label_1408b0;
        case 0x1408b4u: goto label_1408b4;
        case 0x1408b8u: goto label_1408b8;
        case 0x1408bcu: goto label_1408bc;
        case 0x1408c0u: goto label_1408c0;
        case 0x1408c4u: goto label_1408c4;
        case 0x1408c8u: goto label_1408c8;
        case 0x1408ccu: goto label_1408cc;
        case 0x1408d0u: goto label_1408d0;
        case 0x1408d4u: goto label_1408d4;
        case 0x1408d8u: goto label_1408d8;
        case 0x1408dcu: goto label_1408dc;
        case 0x1408e0u: goto label_1408e0;
        case 0x1408e4u: goto label_1408e4;
        case 0x1408e8u: goto label_1408e8;
        case 0x1408ecu: goto label_1408ec;
        case 0x1408f0u: goto label_1408f0;
        case 0x1408f4u: goto label_1408f4;
        case 0x1408f8u: goto label_1408f8;
        case 0x1408fcu: goto label_1408fc;
        case 0x140900u: goto label_140900;
        case 0x140904u: goto label_140904;
        case 0x140908u: goto label_140908;
        case 0x14090cu: goto label_14090c;
        case 0x140910u: goto label_140910;
        case 0x140914u: goto label_140914;
        case 0x140918u: goto label_140918;
        case 0x14091cu: goto label_14091c;
        case 0x140920u: goto label_140920;
        case 0x140924u: goto label_140924;
        case 0x140928u: goto label_140928;
        case 0x14092cu: goto label_14092c;
        case 0x140930u: goto label_140930;
        case 0x140934u: goto label_140934;
        case 0x140938u: goto label_140938;
        case 0x14093cu: goto label_14093c;
        case 0x140940u: goto label_140940;
        case 0x140944u: goto label_140944;
        case 0x140948u: goto label_140948;
        case 0x14094cu: goto label_14094c;
        case 0x140950u: goto label_140950;
        case 0x140954u: goto label_140954;
        case 0x140958u: goto label_140958;
        case 0x14095cu: goto label_14095c;
        case 0x140960u: goto label_140960;
        case 0x140964u: goto label_140964;
        case 0x140968u: goto label_140968;
        case 0x14096cu: goto label_14096c;
        case 0x140970u: goto label_140970;
        case 0x140974u: goto label_140974;
        case 0x140978u: goto label_140978;
        case 0x14097cu: goto label_14097c;
        case 0x140980u: goto label_140980;
        case 0x140984u: goto label_140984;
        case 0x140988u: goto label_140988;
        case 0x14098cu: goto label_14098c;
        case 0x140990u: goto label_140990;
        case 0x140994u: goto label_140994;
        case 0x140998u: goto label_140998;
        case 0x14099cu: goto label_14099c;
        case 0x1409a0u: goto label_1409a0;
        case 0x1409a4u: goto label_1409a4;
        case 0x1409a8u: goto label_1409a8;
        case 0x1409acu: goto label_1409ac;
        case 0x1409b0u: goto label_1409b0;
        case 0x1409b4u: goto label_1409b4;
        case 0x1409b8u: goto label_1409b8;
        case 0x1409bcu: goto label_1409bc;
        case 0x1409c0u: goto label_1409c0;
        case 0x1409c4u: goto label_1409c4;
        case 0x1409c8u: goto label_1409c8;
        case 0x1409ccu: goto label_1409cc;
        case 0x1409d0u: goto label_1409d0;
        case 0x1409d4u: goto label_1409d4;
        case 0x1409d8u: goto label_1409d8;
        case 0x1409dcu: goto label_1409dc;
        case 0x1409e0u: goto label_1409e0;
        case 0x1409e4u: goto label_1409e4;
        case 0x1409e8u: goto label_1409e8;
        case 0x1409ecu: goto label_1409ec;
        case 0x1409f0u: goto label_1409f0;
        case 0x1409f4u: goto label_1409f4;
        case 0x1409f8u: goto label_1409f8;
        case 0x1409fcu: goto label_1409fc;
        case 0x140a00u: goto label_140a00;
        case 0x140a04u: goto label_140a04;
        case 0x140a08u: goto label_140a08;
        case 0x140a0cu: goto label_140a0c;
        default: break;
    }

    ctx->pc = 0x140450u;

label_140450:
    // 0x140450: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x140450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_140454:
    // 0x140454: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x140454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_140458:
    // 0x140458: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x140458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_14045c:
    // 0x14045c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_140460:
    // 0x140460: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x140460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_140464:
    // 0x140464: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x140464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_140468:
    // 0x140468: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x140468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14046c:
    // 0x14046c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_140470:
    // 0x140470: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_140474:
    // 0x140474: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x140474u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_140478:
    // 0x140478: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x140478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14047c:
    // 0x14047c: 0x8f828158  lw          $v0, -0x7EA8($gp)
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_140480:
    // 0x140480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_140484:
    if (ctx->pc == 0x140484u) {
        ctx->pc = 0x140484u;
            // 0x140484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140488u;
        goto label_140488;
    }
    ctx->pc = 0x140480u;
    {
        const bool branch_taken_0x140480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140480u;
            // 0x140484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140480) {
            ctx->pc = 0x140490u;
            goto label_140490;
        }
    }
    ctx->pc = 0x140488u;
label_140488:
    // 0x140488: 0x10000154  b           . + 4 + (0x154 << 2)
label_14048c:
    if (ctx->pc == 0x14048Cu) {
        ctx->pc = 0x14048Cu;
            // 0x14048c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x140490u;
        goto label_140490;
    }
    ctx->pc = 0x140488u;
    {
        const bool branch_taken_0x140488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140488u;
            // 0x14048c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140488) {
            ctx->pc = 0x1409DCu;
            goto label_1409dc;
        }
    }
    ctx->pc = 0x140490u;
label_140490:
    // 0x140490: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_140494:
    // 0x140494: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_140498:
    if (ctx->pc == 0x140498u) {
        ctx->pc = 0x140498u;
            // 0x140498: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->pc = 0x14049Cu;
        goto label_14049c;
    }
    ctx->pc = 0x140494u;
    {
        const bool branch_taken_0x140494 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x140494) {
            ctx->pc = 0x140498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140494u;
            // 0x140498: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1404A4u;
            goto label_1404a4;
        }
    }
    ctx->pc = 0x14049Cu;
label_14049c:
    // 0x14049c: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1404a0:
    if (ctx->pc == 0x1404A0u) {
        ctx->pc = 0x1404A0u;
            // 0x1404a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1404A4u;
        goto label_1404a4;
    }
    ctx->pc = 0x14049Cu;
    {
        const bool branch_taken_0x14049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14049Cu;
            // 0x1404a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14049c) {
            ctx->pc = 0x1409DCu;
            goto label_1409dc;
        }
    }
    ctx->pc = 0x1404A4u;
label_1404a4:
    // 0x1404a4: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x1404a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_1404a8:
    // 0x1404a8: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1404a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_1404ac:
    // 0x1404ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1404b0:
    if (ctx->pc == 0x1404B0u) {
        ctx->pc = 0x1404B0u;
            // 0x1404b0: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
        ctx->pc = 0x1404B4u;
        goto label_1404b4;
    }
    ctx->pc = 0x1404ACu;
    {
        const bool branch_taken_0x1404ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1404B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1404ACu;
            // 0x1404b0: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404ac) {
            ctx->pc = 0x1404B8u;
            goto label_1404b8;
        }
    }
    ctx->pc = 0x1404B4u;
label_1404b4:
    // 0x1404b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1404b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1404b8:
    // 0x1404b8: 0x8f82819c  lw          $v0, -0x7E64($gp)
    ctx->pc = 0x1404b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_1404bc:
    // 0x1404bc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1404bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_1404c0:
    // 0x1404c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1404c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1404c4:
    // 0x1404c4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1404c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1404c8:
    // 0x1404c8: 0x24a55840  addiu       $a1, $a1, 0x5840
    ctx->pc = 0x1404c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
label_1404cc:
    // 0x1404cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1404ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1404d0:
    // 0x1404d0: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x1404d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1404d4:
    // 0x1404d4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1404d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1404d8:
    // 0x1404d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1404dc:
    if (ctx->pc == 0x1404DCu) {
        ctx->pc = 0x1404E0u;
        goto label_1404e0;
    }
    ctx->pc = 0x1404D8u;
    {
        const bool branch_taken_0x1404d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1404d8) {
            ctx->pc = 0x140510u;
            goto label_140510;
        }
    }
    ctx->pc = 0x1404E0u;
label_1404e0:
    // 0x1404e0: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x1404e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1404e4:
    // 0x1404e4: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x1404e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1404e8:
    // 0x1404e8: 0x956b0006  lhu         $t3, 0x6($t3)
    ctx->pc = 0x1404e8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
label_1404ec:
    // 0x1404ec: 0x114b0002  beq         $t2, $t3, . + 4 + (0x2 << 2)
label_1404f0:
    if (ctx->pc == 0x1404F0u) {
        ctx->pc = 0x1404F4u;
        goto label_1404f4;
    }
    ctx->pc = 0x1404ECu;
    {
        const bool branch_taken_0x1404ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 11));
        if (branch_taken_0x1404ec) {
            ctx->pc = 0x1404F8u;
            goto label_1404f8;
        }
    }
    ctx->pc = 0x1404F4u;
label_1404f4:
    // 0x1404f4: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x1404f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1404f8:
    // 0x1404f8: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x1404f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_1404fc:
    // 0x1404fc: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x1404fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_140500:
    // 0x140500: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x140500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_140504:
    // 0x140504: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x140504u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_140508:
    // 0x140508: 0x20a5021  addu        $t2, $s0, $t2
    ctx->pc = 0x140508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
label_14050c:
    // 0x14050c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x14050cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
label_140510:
    // 0x140510: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x140510u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_140514:
    // 0x140514: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x140514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_140518:
    // 0x140518: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_14051c:
    // 0x14051c: 0x2d0a0002  sltiu       $t2, $t0, 0x2
    ctx->pc = 0x14051cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_140520:
    // 0x140520: 0x956c0006  lhu         $t4, 0x6($t3)
    ctx->pc = 0x140520u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
label_140524:
    // 0x140524: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_140528:
    // 0x140528: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x140528u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_14052c:
    // 0x14052c: 0xacac0014  sw          $t4, 0x14($a1)
    ctx->pc = 0x14052cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 12));
label_140530:
    // 0x140530: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x140530u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_140534:
    // 0x140534: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x140534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_140538:
    // 0x140538: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_14053c:
    // 0x14053c: 0x20b5821  addu        $t3, $s0, $t3
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_140540:
    // 0x140540: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x140540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
label_140544:
    // 0x140544: 0x1540ffe4  bnez        $t2, . + 4 + (-0x1C << 2)
label_140548:
    if (ctx->pc == 0x140548u) {
        ctx->pc = 0x140548u;
            // 0x140548: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x14054Cu;
        goto label_14054c;
    }
    ctx->pc = 0x140544u;
    {
        const bool branch_taken_0x140544 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x140548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140544u;
            // 0x140548: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140544) {
            ctx->pc = 0x1404D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1404d8;
        }
    }
    ctx->pc = 0x14054Cu;
label_14054c:
    // 0x14054c: 0x8f82819c  lw          $v0, -0x7E64($gp)
    ctx->pc = 0x14054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_140550:
    // 0x140550: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_140554:
    if (ctx->pc == 0x140554u) {
        ctx->pc = 0x140554u;
            // 0x140554: 0x8fa600bc  lw          $a2, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->pc = 0x140558u;
        goto label_140558;
    }
    ctx->pc = 0x140550u;
    {
        const bool branch_taken_0x140550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140550) {
            ctx->pc = 0x140554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140550u;
            // 0x140554: 0x8fa600bc  lw          $a2, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1405A4u;
            goto label_1405a4;
        }
    }
    ctx->pc = 0x140558u;
label_140558:
    // 0x140558: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_14055c:
    if (ctx->pc == 0x14055Cu) {
        ctx->pc = 0x140560u;
        goto label_140560;
    }
    ctx->pc = 0x140558u;
    {
        const bool branch_taken_0x140558 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x140558) {
            ctx->pc = 0x1405A0u;
            goto label_1405a0;
        }
    }
    ctx->pc = 0x140560u;
label_140560:
    // 0x140560: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x140560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_140564:
    // 0x140564: 0x40f809  jalr        $v0
label_140568:
    if (ctx->pc == 0x140568u) {
        ctx->pc = 0x140568u;
            // 0x140568: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x14056Cu;
        goto label_14056c;
    }
    ctx->pc = 0x140564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14056Cu);
        ctx->pc = 0x140568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140564u;
            // 0x140568: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14056Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14056Cu; }
            if (ctx->pc != 0x14056Cu) { return; }
        }
        }
    }
    ctx->pc = 0x14056Cu;
label_14056c:
    // 0x14056c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_140570:
    if (ctx->pc == 0x140570u) {
        ctx->pc = 0x140570u;
            // 0x140570: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x140574u;
        goto label_140574;
    }
    ctx->pc = 0x14056Cu;
    {
        const bool branch_taken_0x14056c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14056c) {
            ctx->pc = 0x140570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14056Cu;
            // 0x140570: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14057Cu;
            goto label_14057c;
        }
    }
    ctx->pc = 0x140574u;
label_140574:
    // 0x140574: 0x1000011a  b           . + 4 + (0x11A << 2)
label_140578:
    if (ctx->pc == 0x140578u) {
        ctx->pc = 0x140578u;
            // 0x140578: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x14057Cu;
        goto label_14057c;
    }
    ctx->pc = 0x140574u;
    {
        const bool branch_taken_0x140574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140574u;
            // 0x140578: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140574) {
            ctx->pc = 0x1409E0u;
            goto label_1409e0;
        }
    }
    ctx->pc = 0x14057Cu;
label_14057c:
    // 0x14057c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_140580:
    if (ctx->pc == 0x140580u) {
        ctx->pc = 0x140584u;
        goto label_140584;
    }
    ctx->pc = 0x14057Cu;
    {
        const bool branch_taken_0x14057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14057c) {
            ctx->pc = 0x1405A0u;
            goto label_1405a0;
        }
    }
    ctx->pc = 0x140584u;
label_140584:
    // 0x140584: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140588:
    // 0x140588: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x140588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_14058c:
    // 0x14058c: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14058cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_140590:
    // 0x140590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140594:
    // 0x140594: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x140594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_140598:
    // 0x140598: 0xc057540  jal         func_15D500
label_14059c:
    if (ctx->pc == 0x14059Cu) {
        ctx->pc = 0x14059Cu;
            // 0x14059c: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x1405A0u;
        goto label_1405a0;
    }
    ctx->pc = 0x140598u;
    SET_GPR_U32(ctx, 31, 0x1405A0u);
    ctx->pc = 0x14059Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140598u;
            // 0x14059c: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405A0u; }
        if (ctx->pc != 0x1405A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405A0u; }
        if (ctx->pc != 0x1405A0u) { return; }
    }
    ctx->pc = 0x1405A0u;
label_1405a0:
    // 0x1405a0: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x1405a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1405a4:
    // 0x1405a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1405a8:
    // 0x1405a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1405a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1405ac:
    // 0x1405ac: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x1405acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_1405b0:
    // 0x1405b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1405b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1405b4:
    // 0x1405b4: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x1405b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_1405b8:
    // 0x1405b8: 0x9cc70010  lwu         $a3, 0x10($a2)
    ctx->pc = 0x1405b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1405bc:
    // 0x1405bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1405bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1405c0:
    // 0x1405c0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1405c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1405c4:
    // 0x1405c4: 0xaf8381d4  sw          $v1, -0x7E2C($gp)
    ctx->pc = 0x1405c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 3));
label_1405c8:
    // 0x1405c8: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x1405c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1405cc:
    // 0x1405cc: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x1405ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
label_1405d0:
    // 0x1405d0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1405d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_1405d4:
    // 0x1405d4: 0xc057540  jal         func_15D500
label_1405d8:
    if (ctx->pc == 0x1405D8u) {
        ctx->pc = 0x1405D8u;
            // 0x1405d8: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x1405DCu;
        goto label_1405dc;
    }
    ctx->pc = 0x1405D4u;
    SET_GPR_U32(ctx, 31, 0x1405DCu);
    ctx->pc = 0x1405D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405D4u;
            // 0x1405d8: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405DCu; }
        if (ctx->pc != 0x1405DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405DCu; }
        if (ctx->pc != 0x1405DCu) { return; }
    }
    ctx->pc = 0x1405DCu;
label_1405dc:
    // 0x1405dc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1405dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1405e0:
    // 0x1405e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1405e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1405e4:
    // 0x1405e4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1405e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1405e8:
    // 0x1405e8: 0x27b400b8  addiu       $s4, $sp, 0xB8
    ctx->pc = 0x1405e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1405ec:
    // 0x1405ec: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x1405ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1405f0:
    // 0x1405f0: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x1405f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1405f4:
    // 0x1405f4: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x1405f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_1405f8:
    // 0x1405f8: 0xdc440018  ld          $a0, 0x18($v0)
    ctx->pc = 0x1405f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_1405fc:
    // 0x1405fc: 0xffa50090  sd          $a1, 0x90($sp)
    ctx->pc = 0x1405fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 5));
label_140600:
    // 0x140600: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x140600u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_140604:
    // 0x140604: 0xffa40080  sd          $a0, 0x80($sp)
    ctx->pc = 0x140604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 4));
label_140608:
    // 0x140608: 0xffa20098  sd          $v0, 0x98($sp)
    ctx->pc = 0x140608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
label_14060c:
    // 0x14060c: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x14060cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_140610:
    // 0x140610: 0xffa20088  sd          $v0, 0x88($sp)
    ctx->pc = 0x140610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 2));
label_140614:
    // 0x140614: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x140614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_140618:
    // 0x140618: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x140618u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_14061c:
    // 0x14061c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14061cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_140620:
    // 0x140620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140624:
    // 0x140624: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x140624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_140628:
    // 0x140628: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_14062c:
    // 0x14062c: 0x8c55004c  lw          $s5, 0x4C($v0)
    ctx->pc = 0x14062cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_140630:
    // 0x140630: 0xc050358  jal         func_140D60
label_140634:
    if (ctx->pc == 0x140634u) {
        ctx->pc = 0x140634u;
            // 0x140634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140638u;
        goto label_140638;
    }
    ctx->pc = 0x140630u;
    SET_GPR_U32(ctx, 31, 0x140638u);
    ctx->pc = 0x140634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140630u;
            // 0x140634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140D60u;
    if (runtime->hasFunction(0x140D60u)) {
        auto targetFn = runtime->lookupFunction(0x140D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140638u; }
        if (ctx->pc != 0x140638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140D60_0x140d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140638u; }
        if (ctx->pc != 0x140638u) { return; }
    }
    ctx->pc = 0x140638u;
label_140638:
    // 0x140638: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x140638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14063c:
    // 0x14063c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140640:
    // 0x140640: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x140640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_140644:
    // 0x140644: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_140648:
    if (ctx->pc == 0x140648u) {
        ctx->pc = 0x14064Cu;
        goto label_14064c;
    }
    ctx->pc = 0x140644u;
    {
        const bool branch_taken_0x140644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140644) {
            ctx->pc = 0x140668u;
            goto label_140668;
        }
    }
    ctx->pc = 0x14064Cu;
label_14064c:
    // 0x14064c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x14064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_140650:
    // 0x140650: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x140650u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_140654:
    // 0x140654: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x140654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_140658:
    // 0x140658: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x140658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_14065c:
    // 0x14065c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14065cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_140660:
    // 0x140660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140664:
    // 0x140664: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x140664u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
label_140668:
    // 0x140668: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x140668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14066c:
    // 0x14066c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140670:
    // 0x140670: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x140670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_140674:
    // 0x140674: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_140678:
    if (ctx->pc == 0x140678u) {
        ctx->pc = 0x14067Cu;
        goto label_14067c;
    }
    ctx->pc = 0x140674u;
    {
        const bool branch_taken_0x140674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140674) {
            ctx->pc = 0x1406D0u;
            goto label_1406d0;
        }
    }
    ctx->pc = 0x14067Cu;
label_14067c:
    // 0x14067c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x14067cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_140680:
    // 0x140680: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x140680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_140684:
    // 0x140684: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_140688:
    if (ctx->pc == 0x140688u) {
        ctx->pc = 0x140688u;
            // 0x140688: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x14068Cu;
        goto label_14068c;
    }
    ctx->pc = 0x140684u;
    {
        const bool branch_taken_0x140684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x140688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140684u;
            // 0x140688: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140684) {
            ctx->pc = 0x1406A8u;
            goto label_1406a8;
        }
    }
    ctx->pc = 0x14068Cu;
label_14068c:
    // 0x14068c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_140690:
    // 0x140690: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_140694:
    if (ctx->pc == 0x140694u) {
        ctx->pc = 0x140698u;
        goto label_140698;
    }
    ctx->pc = 0x140690u;
    {
        const bool branch_taken_0x140690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x140690) {
            ctx->pc = 0x1406A0u;
            goto label_1406a0;
        }
    }
    ctx->pc = 0x140698u;
label_140698:
    // 0x140698: 0x10000005  b           . + 4 + (0x5 << 2)
label_14069c:
    if (ctx->pc == 0x14069Cu) {
        ctx->pc = 0x1406A0u;
        goto label_1406a0;
    }
    ctx->pc = 0x140698u;
    {
        const bool branch_taken_0x140698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140698) {
            ctx->pc = 0x1406B0u;
            goto label_1406b0;
        }
    }
    ctx->pc = 0x1406A0u;
label_1406a0:
    // 0x1406a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1406a4:
    if (ctx->pc == 0x1406A4u) {
        ctx->pc = 0x1406A4u;
            // 0x1406a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1406A8u;
        goto label_1406a8;
    }
    ctx->pc = 0x1406A0u;
    {
        const bool branch_taken_0x1406a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1406A0u;
            // 0x1406a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406a0) {
            ctx->pc = 0x1406B0u;
            goto label_1406b0;
        }
    }
    ctx->pc = 0x1406A8u;
label_1406a8:
    // 0x1406a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1406ac:
    // 0x1406ac: 0x0  nop
    ctx->pc = 0x1406acu;
    // NOP
label_1406b0:
    // 0x1406b0: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x1406b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1406b4:
    // 0x1406b4: 0x92640004  lbu         $a0, 0x4($s3)
    ctx->pc = 0x1406b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_1406b8:
    // 0x1406b8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1406b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1406bc:
    // 0x1406bc: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_1406c0:
    // 0x1406c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1406c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1406c4:
    // 0x1406c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1406c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1406c8:
    // 0x1406c8: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x1406c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
label_1406cc:
    // 0x1406cc: 0x0  nop
    ctx->pc = 0x1406ccu;
    // NOP
label_1406d0:
    // 0x1406d0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x1406d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1406d4:
    // 0x1406d4: 0x416fc  dsll32      $v0, $a0, 27
    ctx->pc = 0x1406d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 27));
label_1406d8:
    // 0x1406d8: 0x2177e  dsrl32      $v0, $v0, 29
    ctx->pc = 0x1406d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 29));
label_1406dc:
    // 0x1406dc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1406e0:
    if (ctx->pc == 0x1406E0u) {
        ctx->pc = 0x1406E4u;
        goto label_1406e4;
    }
    ctx->pc = 0x1406DCu;
    {
        const bool branch_taken_0x1406dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1406dc) {
            ctx->pc = 0x140750u;
            goto label_140750;
        }
    }
    ctx->pc = 0x1406E4u;
label_1406e4:
    // 0x1406e4: 0x32a21000  andi        $v0, $s5, 0x1000
    ctx->pc = 0x1406e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
label_1406e8:
    // 0x1406e8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1406ec:
    if (ctx->pc == 0x1406ECu) {
        ctx->pc = 0x1406F0u;
        goto label_1406f0;
    }
    ctx->pc = 0x1406E8u;
    {
        const bool branch_taken_0x1406e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1406e8) {
            ctx->pc = 0x140750u;
            goto label_140750;
        }
    }
    ctx->pc = 0x1406F0u;
label_1406f0:
    // 0x1406f0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1406f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1406f4:
    // 0x1406f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1406f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1406f8:
    // 0x1406f8: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x1406f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1406fc:
    // 0x1406fc: 0x2404ffe7  addiu       $a0, $zero, -0x19
    ctx->pc = 0x1406fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_140700:
    // 0x140700: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x140700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_140704:
    // 0x140704: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x140704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_140708:
    // 0x140708: 0x94650014  lhu         $a1, 0x14($v1)
    ctx->pc = 0x140708u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_14070c:
    // 0x14070c: 0x30e70040  andi        $a3, $a3, 0x40
    ctx->pc = 0x14070cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_140710:
    // 0x140710: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x140710u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
label_140714:
    // 0x140714: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x140714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_140718:
    // 0x140718: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x140718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_14071c:
    // 0x14071c: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x14071cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_140720:
    // 0x140720: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x140720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_140724:
    // 0x140724: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x140724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_140728:
    // 0x140728: 0xa2460000  sb          $a2, 0x0($s2)
    ctx->pc = 0x140728u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 6));
label_14072c:
    // 0x14072c: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x14072cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_140730:
    // 0x140730: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x140730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_140734:
    // 0x140734: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x140734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_140738:
    // 0x140738: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x140738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_14073c:
    // 0x14073c: 0xa2440002  sb          $a0, 0x2($s2)
    ctx->pc = 0x14073cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 4));
label_140740:
    // 0x140740: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x140740u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_140744:
    // 0x140744: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x140744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_140748:
    // 0x140748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14074c:
    // 0x14074c: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x14074cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_140750:
    // 0x140750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140754:
    // 0x140754: 0x1622002a  bne         $s1, $v0, . + 4 + (0x2A << 2)
label_140758:
    if (ctx->pc == 0x140758u) {
        ctx->pc = 0x14075Cu;
        goto label_14075c;
    }
    ctx->pc = 0x140754u;
    {
        const bool branch_taken_0x140754 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x140754) {
            ctx->pc = 0x140800u;
            goto label_140800;
        }
    }
    ctx->pc = 0x14075Cu;
label_14075c:
    // 0x14075c: 0x32a22000  andi        $v0, $s5, 0x2000
    ctx->pc = 0x14075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8192);
label_140760:
    // 0x140760: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_140764:
    if (ctx->pc == 0x140764u) {
        ctx->pc = 0x140768u;
        goto label_140768;
    }
    ctx->pc = 0x140760u;
    {
        const bool branch_taken_0x140760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140760) {
            ctx->pc = 0x140800u;
            goto label_140800;
        }
    }
    ctx->pc = 0x140768u;
label_140768:
    // 0x140768: 0x92620006  lbu         $v0, 0x6($s3)
    ctx->pc = 0x140768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_14076c:
    // 0x14076c: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x14076cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
label_140770:
    // 0x140770: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x140770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_140774:
    // 0x140774: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_140778:
    if (ctx->pc == 0x140778u) {
        ctx->pc = 0x14077Cu;
        goto label_14077c;
    }
    ctx->pc = 0x140774u;
    {
        const bool branch_taken_0x140774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140774) {
            ctx->pc = 0x1407B0u;
            goto label_1407b0;
        }
    }
    ctx->pc = 0x14077Cu;
label_14077c:
    // 0x14077c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x14077cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_140780:
    // 0x140780: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x140780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
label_140784:
    // 0x140784: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x140784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
label_140788:
    // 0x140788: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x140788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_14078c:
    // 0x14078c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_140790:
    if (ctx->pc == 0x140790u) {
        ctx->pc = 0x140794u;
        goto label_140794;
    }
    ctx->pc = 0x14078Cu;
    {
        const bool branch_taken_0x14078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14078c) {
            ctx->pc = 0x140800u;
            goto label_140800;
        }
    }
    ctx->pc = 0x140794u;
label_140794:
    // 0x140794: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x140794u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_140798:
    // 0x140798: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x140798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_14079c:
    // 0x14079c: 0x6403000f  daddiu      $v1, $zero, 0xF
    ctx->pc = 0x14079cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
label_1407a0:
    // 0x1407a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1407a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1407a4:
    // 0x1407a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1407a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1407a8:
    // 0x1407a8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1407ac:
    if (ctx->pc == 0x1407ACu) {
        ctx->pc = 0x1407ACu;
            // 0x1407ac: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1407B0u;
        goto label_1407b0;
    }
    ctx->pc = 0x1407A8u;
    {
        const bool branch_taken_0x1407a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1407A8u;
            // 0x1407ac: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407a8) {
            ctx->pc = 0x140800u;
            goto label_140800;
        }
    }
    ctx->pc = 0x1407B0u;
label_1407b0:
    // 0x1407b0: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1407b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_1407b4:
    // 0x1407b4: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1407b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
label_1407b8:
    // 0x1407b8: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1407b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
label_1407bc:
    // 0x1407bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1407bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1407c0:
    // 0x1407c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1407c4:
    if (ctx->pc == 0x1407C4u) {
        ctx->pc = 0x1407C8u;
        goto label_1407c8;
    }
    ctx->pc = 0x1407C0u;
    {
        const bool branch_taken_0x1407c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1407c0) {
            ctx->pc = 0x1407E8u;
            goto label_1407e8;
        }
    }
    ctx->pc = 0x1407C8u;
label_1407c8:
    // 0x1407c8: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x1407c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_1407cc:
    // 0x1407cc: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1407ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_1407d0:
    // 0x1407d0: 0x64030010  daddiu      $v1, $zero, 0x10
    ctx->pc = 0x1407d0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_1407d4:
    // 0x1407d4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1407d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1407d8:
    // 0x1407d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1407d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1407dc:
    // 0x1407dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1407e0:
    if (ctx->pc == 0x1407E0u) {
        ctx->pc = 0x1407E0u;
            // 0x1407e0: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1407E4u;
        goto label_1407e4;
    }
    ctx->pc = 0x1407DCu;
    {
        const bool branch_taken_0x1407dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1407DCu;
            // 0x1407e0: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407dc) {
            ctx->pc = 0x140800u;
            goto label_140800;
        }
    }
    ctx->pc = 0x1407E4u;
label_1407e4:
    // 0x1407e4: 0x0  nop
    ctx->pc = 0x1407e4u;
    // NOP
label_1407e8:
    // 0x1407e8: 0x92640007  lbu         $a0, 0x7($s3)
    ctx->pc = 0x1407e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_1407ec:
    // 0x1407ec: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1407ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_1407f0:
    // 0x1407f0: 0x6403001f  daddiu      $v1, $zero, 0x1F
    ctx->pc = 0x1407f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)31);
label_1407f4:
    // 0x1407f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1407f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1407f8:
    // 0x1407f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1407f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1407fc:
    // 0x1407fc: 0xa2620007  sb          $v0, 0x7($s3)
    ctx->pc = 0x1407fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
label_140800:
    // 0x140800: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140804:
    // 0x140804: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_140808:
    // 0x140808: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x140808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_14080c:
    // 0x14080c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14080cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_140810:
    // 0x140810: 0xde470000  ld          $a3, 0x0($s2)
    ctx->pc = 0x140810u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_140814:
    // 0x140814: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_140818:
    // 0x140818: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x140818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_14081c:
    // 0x14081c: 0xc057540  jal         func_15D500
label_140820:
    if (ctx->pc == 0x140820u) {
        ctx->pc = 0x140820u;
            // 0x140820: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x140824u;
        goto label_140824;
    }
    ctx->pc = 0x14081Cu;
    SET_GPR_U32(ctx, 31, 0x140824u);
    ctx->pc = 0x140820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14081Cu;
            // 0x140820: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140824u; }
        if (ctx->pc != 0x140824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140824u; }
        if (ctx->pc != 0x140824u) { return; }
    }
    ctx->pc = 0x140824u;
label_140824:
    // 0x140824: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140828:
    // 0x140828: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x140828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_14082c:
    // 0x14082c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14082cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_140830:
    // 0x140830: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x140830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_140834:
    // 0x140834: 0xde670000  ld          $a3, 0x0($s3)
    ctx->pc = 0x140834u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_140838:
    // 0x140838: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x140838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_14083c:
    // 0x14083c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_140840:
    // 0x140840: 0xc057540  jal         func_15D500
label_140844:
    if (ctx->pc == 0x140844u) {
        ctx->pc = 0x140844u;
            // 0x140844: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x140848u;
        goto label_140848;
    }
    ctx->pc = 0x140840u;
    SET_GPR_U32(ctx, 31, 0x140848u);
    ctx->pc = 0x140844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140840u;
            // 0x140844: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140848u; }
        if (ctx->pc != 0x140848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140848u; }
        if (ctx->pc != 0x140848u) { return; }
    }
    ctx->pc = 0x140848u;
label_140848:
    // 0x140848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14084c:
    // 0x14084c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14084cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_140850:
    // 0x140850: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x140850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_140854:
    // 0x140854: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_140858:
    // 0x140858: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
label_14085c:
    if (ctx->pc == 0x14085Cu) {
        ctx->pc = 0x14085Cu;
            // 0x14085c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x140860u;
        goto label_140860;
    }
    ctx->pc = 0x140858u;
    {
        const bool branch_taken_0x140858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140858u;
            // 0x14085c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140858) {
            ctx->pc = 0x140614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_140614;
        }
    }
    ctx->pc = 0x140860u;
label_140860:
    // 0x140860: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x140860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_140864:
    // 0x140864: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x140864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_140868:
    // 0x140868: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x140868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14086c:
    // 0x14086c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_140870:
    // 0x140870: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_140874:
    if (ctx->pc == 0x140874u) {
        ctx->pc = 0x140874u;
            // 0x140874: 0xc4940008  lwc1        $f20, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x140878u;
        goto label_140878;
    }
    ctx->pc = 0x140870u;
    {
        const bool branch_taken_0x140870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140870) {
            ctx->pc = 0x140874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140870u;
            // 0x140874: 0xc4940008  lwc1        $f20, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x140884u;
            goto label_140884;
        }
    }
    ctx->pc = 0x140878u;
label_140878:
    // 0x140878: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x140878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14087c:
    // 0x14087c: 0x10000002  b           . + 4 + (0x2 << 2)
label_140880:
    if (ctx->pc == 0x140880u) {
        ctx->pc = 0x140880u;
            // 0x140880: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x140884u;
        goto label_140884;
    }
    ctx->pc = 0x14087Cu;
    {
        const bool branch_taken_0x14087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14087Cu;
            // 0x140880: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14087c) {
            ctx->pc = 0x140888u;
            goto label_140888;
        }
    }
    ctx->pc = 0x140884u;
label_140884:
    // 0x140884: 0xc495000c  lwc1        $f21, 0xC($a0)
    ctx->pc = 0x140884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_140888:
    // 0x140888: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14088c:
    // 0x14088c: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x14088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_140890:
    // 0x140890: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x140890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_140894:
    // 0x140894: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_140898:
    if (ctx->pc == 0x140898u) {
        ctx->pc = 0x140898u;
            // 0x140898: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->pc = 0x14089Cu;
        goto label_14089c;
    }
    ctx->pc = 0x140894u;
    {
        const bool branch_taken_0x140894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140894u;
            // 0x140898: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140894) {
            ctx->pc = 0x140918u;
            goto label_140918;
        }
    }
    ctx->pc = 0x14089Cu;
label_14089c:
    // 0x14089c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14089cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1408a0:
    // 0x1408a0: 0xc4405864  lwc1        $f0, 0x5864($v0)
    ctx->pc = 0x1408a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1408a4:
    // 0x1408a4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1408a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1408a8:
    // 0x1408a8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_1408ac:
    if (ctx->pc == 0x1408ACu) {
        ctx->pc = 0x1408ACu;
            // 0x1408ac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1408B0u;
        goto label_1408b0;
    }
    ctx->pc = 0x1408A8u;
    {
        const bool branch_taken_0x1408a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1408a8) {
            ctx->pc = 0x1408ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1408A8u;
            // 0x1408ac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1408C8u;
            goto label_1408c8;
        }
    }
    ctx->pc = 0x1408B0u;
label_1408b0:
    // 0x1408b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1408b4:
    // 0x1408b4: 0xc4405868  lwc1        $f0, 0x5868($v0)
    ctx->pc = 0x1408b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1408b8:
    // 0x1408b8: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1408b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1408bc:
    // 0x1408bc: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_1408c0:
    if (ctx->pc == 0x1408C0u) {
        ctx->pc = 0x1408C0u;
            // 0x1408c0: 0x8fa300b8  lw          $v1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->pc = 0x1408C4u;
        goto label_1408c4;
    }
    ctx->pc = 0x1408BCu;
    {
        const bool branch_taken_0x1408bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1408bc) {
            ctx->pc = 0x1408C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1408BCu;
            // 0x1408c0: 0x8fa300b8  lw          $v1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1408F8u;
            goto label_1408f8;
        }
    }
    ctx->pc = 0x1408C4u;
label_1408c4:
    // 0x1408c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1408c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1408c8:
    // 0x1408c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1408c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1408cc:
    // 0x1408cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1408ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1408d0:
    // 0x1408d0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1408d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1408d4:
    // 0x1408d4: 0xc057470  jal         func_15D1C0
label_1408d8:
    if (ctx->pc == 0x1408D8u) {
        ctx->pc = 0x1408D8u;
            // 0x1408d8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x1408DCu;
        goto label_1408dc;
    }
    ctx->pc = 0x1408D4u;
    SET_GPR_U32(ctx, 31, 0x1408DCu);
    ctx->pc = 0x1408D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408D4u;
            // 0x1408d8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1C0u;
    if (runtime->hasFunction(0x15D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408DCu; }
        if (ctx->pc != 0x1408DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1C0_0x15d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408DCu; }
        if (ctx->pc != 0x1408DCu) { return; }
    }
    ctx->pc = 0x1408DCu;
label_1408dc:
    // 0x1408dc: 0xc057480  jal         func_15D200
label_1408e0:
    if (ctx->pc == 0x1408E0u) {
        ctx->pc = 0x1408E4u;
        goto label_1408e4;
    }
    ctx->pc = 0x1408DCu;
    SET_GPR_U32(ctx, 31, 0x1408E4u);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408E4u; }
        if (ctx->pc != 0x1408E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408E4u; }
        if (ctx->pc != 0x1408E4u) { return; }
    }
    ctx->pc = 0x1408E4u;
label_1408e4:
    // 0x1408e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1408e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1408e8:
    // 0x1408e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1408e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1408ec:
    // 0x1408ec: 0xe4745864  swc1        $f20, 0x5864($v1)
    ctx->pc = 0x1408ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 22628), bits); }
label_1408f0:
    // 0x1408f0: 0xe4555868  swc1        $f21, 0x5868($v0)
    ctx->pc = 0x1408f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22632), bits); }
label_1408f4:
    // 0x1408f4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1408f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1408f8:
    // 0x1408f8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1408f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1408fc:
    // 0x1408fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1408fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_140900:
    // 0x140900: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_140904:
    // 0x140904: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_140908:
    if (ctx->pc == 0x140908u) {
        ctx->pc = 0x140908u;
            // 0x140908: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->pc = 0x14090Cu;
        goto label_14090c;
    }
    ctx->pc = 0x140904u;
    {
        const bool branch_taken_0x140904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140904) {
            ctx->pc = 0x140908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140904u;
            // 0x140908: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140940u;
            goto label_140940;
        }
    }
    ctx->pc = 0x14090Cu;
label_14090c:
    // 0x14090c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140910:
    // 0x140910: 0x1000000a  b           . + 4 + (0xA << 2)
label_140914:
    if (ctx->pc == 0x140914u) {
        ctx->pc = 0x140914u;
            // 0x140914: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->pc = 0x140918u;
        goto label_140918;
    }
    ctx->pc = 0x140910u;
    {
        const bool branch_taken_0x140910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140910u;
            // 0x140914: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140910) {
            ctx->pc = 0x14093Cu;
            goto label_14093c;
        }
    }
    ctx->pc = 0x140918u;
label_140918:
    // 0x140918: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x140918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14091c:
    // 0x14091c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_140920:
    // 0x140920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140924:
    // 0x140924: 0x0  nop
    ctx->pc = 0x140924u;
    // NOP
label_140928:
    // 0x140928: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x140928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_14092c:
    // 0x14092c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_140930:
    // 0x140930: 0xe4604910  swc1        $f0, 0x4910($v1)
    ctx->pc = 0x140930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18704), bits); }
label_140934:
    // 0x140934: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x140934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_140938:
    // 0x140938: 0xe4404914  swc1        $f0, 0x4914($v0)
    ctx->pc = 0x140938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18708), bits); }
label_14093c:
    // 0x14093c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x14093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_140940:
    // 0x140940: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x140940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_140944:
    // 0x140944: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x140944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_140948:
    // 0x140948: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14094c:
    // 0x14094c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_140950:
    if (ctx->pc == 0x140950u) {
        ctx->pc = 0x140950u;
            // 0x140950: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x140954u;
        goto label_140954;
    }
    ctx->pc = 0x14094Cu;
    {
        const bool branch_taken_0x14094c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14094c) {
            ctx->pc = 0x140950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14094Cu;
            // 0x140950: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x140960u;
            goto label_140960;
        }
    }
    ctx->pc = 0x140954u;
label_140954:
    // 0x140954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140958:
    // 0x140958: 0x10000002  b           . + 4 + (0x2 << 2)
label_14095c:
    if (ctx->pc == 0x14095Cu) {
        ctx->pc = 0x14095Cu;
            // 0x14095c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x140960u;
        goto label_140960;
    }
    ctx->pc = 0x140958u;
    {
        const bool branch_taken_0x140958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140958u;
            // 0x14095c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140958) {
            ctx->pc = 0x140964u;
            goto label_140964;
        }
    }
    ctx->pc = 0x140960u;
label_140960:
    // 0x140960: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x140960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_140964:
    // 0x140964: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140968:
    // 0x140968: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x140968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14096c:
    // 0x14096c: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_140970:
    // 0x140970: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x140970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_140974:
    // 0x140974: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_140978:
    if (ctx->pc == 0x140978u) {
        ctx->pc = 0x14097Cu;
        goto label_14097c;
    }
    ctx->pc = 0x140974u;
    {
        const bool branch_taken_0x140974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x140974) {
            ctx->pc = 0x140990u;
            goto label_140990;
        }
    }
    ctx->pc = 0x14097Cu;
label_14097c:
    // 0x14097c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140980:
    // 0x140980: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_140984:
    if (ctx->pc == 0x140984u) {
        ctx->pc = 0x140988u;
        goto label_140988;
    }
    ctx->pc = 0x140980u;
    {
        const bool branch_taken_0x140980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x140980) {
            ctx->pc = 0x140990u;
            goto label_140990;
        }
    }
    ctx->pc = 0x140988u;
label_140988:
    // 0x140988: 0x1000000b  b           . + 4 + (0xB << 2)
label_14098c:
    if (ctx->pc == 0x14098Cu) {
        ctx->pc = 0x14098Cu;
            // 0x14098c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x140990u;
        goto label_140990;
    }
    ctx->pc = 0x140988u;
    {
        const bool branch_taken_0x140988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14098Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140988u;
            // 0x14098c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140988) {
            ctx->pc = 0x1409B8u;
            goto label_1409b8;
        }
    }
    ctx->pc = 0x140990u;
label_140990:
    // 0x140990: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x140990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_140994:
    // 0x140994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_140998:
    // 0x140998: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x140998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_14099c:
    // 0x14099c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1409a0:
    // 0x1409a0: 0xe4604950  swc1        $f0, 0x4950($v1)
    ctx->pc = 0x1409a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18768), bits); }
label_1409a4:
    // 0x1409a4: 0x24844920  addiu       $a0, $a0, 0x4920
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18720));
label_1409a8:
    // 0x1409a8: 0xc04e560  jal         func_139580
label_1409ac:
    if (ctx->pc == 0x1409ACu) {
        ctx->pc = 0x1409ACu;
            // 0x1409ac: 0xe4424954  swc1        $f2, 0x4954($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18772), bits); }
        ctx->pc = 0x1409B0u;
        goto label_1409b0;
    }
    ctx->pc = 0x1409A8u;
    SET_GPR_U32(ctx, 31, 0x1409B0u);
    ctx->pc = 0x1409ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1409A8u;
            // 0x1409ac: 0xe4424954  swc1        $f2, 0x4954($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18772), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139580u;
    if (runtime->hasFunction(0x139580u)) {
        auto targetFn = runtime->lookupFunction(0x139580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409B0u; }
        if (ctx->pc != 0x1409B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139580_0x139580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409B0u; }
        if (ctx->pc != 0x1409B0u) { return; }
    }
    ctx->pc = 0x1409B0u;
label_1409b0:
    // 0x1409b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1409b4:
    if (ctx->pc == 0x1409B4u) {
        ctx->pc = 0x1409B4u;
            // 0x1409b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1409B8u;
        goto label_1409b8;
    }
    ctx->pc = 0x1409B0u;
    {
        const bool branch_taken_0x1409b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1409B0u;
            // 0x1409b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409b0) {
            ctx->pc = 0x1409DCu;
            goto label_1409dc;
        }
    }
    ctx->pc = 0x1409B8u;
label_1409b8:
    // 0x1409b8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1409b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1409bc:
    // 0x1409bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1409bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1409c0:
    // 0x1409c0: 0x0  nop
    ctx->pc = 0x1409c0u;
    // NOP
label_1409c4:
    // 0x1409c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1409c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1409c8:
    // 0x1409c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1409c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1409cc:
    // 0x1409cc: 0xe4604910  swc1        $f0, 0x4910($v1)
    ctx->pc = 0x1409ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18704), bits); }
label_1409d0:
    // 0x1409d0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1409d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1409d4:
    // 0x1409d4: 0xe4404914  swc1        $f0, 0x4914($v0)
    ctx->pc = 0x1409d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18708), bits); }
label_1409d8:
    // 0x1409d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1409d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1409dc:
    // 0x1409dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1409dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1409e0:
    // 0x1409e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1409e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1409e4:
    // 0x1409e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1409e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1409e8:
    // 0x1409e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1409e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1409ec:
    // 0x1409ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1409ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1409f0:
    // 0x1409f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1409f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1409f4:
    // 0x1409f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1409f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1409f8:
    // 0x1409f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1409f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1409fc:
    // 0x1409fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1409fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140a00:
    // 0x140a00: 0x3e00008  jr          $ra
label_140a04:
    if (ctx->pc == 0x140A04u) {
        ctx->pc = 0x140A04u;
            // 0x140a04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x140A08u;
        goto label_140a08;
    }
    ctx->pc = 0x140A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A00u;
            // 0x140a04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140A08u;
label_140a08:
    // 0x140a08: 0x0  nop
    ctx->pc = 0x140a08u;
    // NOP
label_140a0c:
    // 0x140a0c: 0x0  nop
    ctx->pc = 0x140a0cu;
    // NOP
}
