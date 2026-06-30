#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001344D0
// Address: 0x1344d0 - 0x134a00
void sub_001344D0_0x1344d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001344D0_0x1344d0");
#endif

    switch (ctx->pc) {
        case 0x1344d0u: goto label_1344d0;
        case 0x1344d4u: goto label_1344d4;
        case 0x1344d8u: goto label_1344d8;
        case 0x1344dcu: goto label_1344dc;
        case 0x1344e0u: goto label_1344e0;
        case 0x1344e4u: goto label_1344e4;
        case 0x1344e8u: goto label_1344e8;
        case 0x1344ecu: goto label_1344ec;
        case 0x1344f0u: goto label_1344f0;
        case 0x1344f4u: goto label_1344f4;
        case 0x1344f8u: goto label_1344f8;
        case 0x1344fcu: goto label_1344fc;
        case 0x134500u: goto label_134500;
        case 0x134504u: goto label_134504;
        case 0x134508u: goto label_134508;
        case 0x13450cu: goto label_13450c;
        case 0x134510u: goto label_134510;
        case 0x134514u: goto label_134514;
        case 0x134518u: goto label_134518;
        case 0x13451cu: goto label_13451c;
        case 0x134520u: goto label_134520;
        case 0x134524u: goto label_134524;
        case 0x134528u: goto label_134528;
        case 0x13452cu: goto label_13452c;
        case 0x134530u: goto label_134530;
        case 0x134534u: goto label_134534;
        case 0x134538u: goto label_134538;
        case 0x13453cu: goto label_13453c;
        case 0x134540u: goto label_134540;
        case 0x134544u: goto label_134544;
        case 0x134548u: goto label_134548;
        case 0x13454cu: goto label_13454c;
        case 0x134550u: goto label_134550;
        case 0x134554u: goto label_134554;
        case 0x134558u: goto label_134558;
        case 0x13455cu: goto label_13455c;
        case 0x134560u: goto label_134560;
        case 0x134564u: goto label_134564;
        case 0x134568u: goto label_134568;
        case 0x13456cu: goto label_13456c;
        case 0x134570u: goto label_134570;
        case 0x134574u: goto label_134574;
        case 0x134578u: goto label_134578;
        case 0x13457cu: goto label_13457c;
        case 0x134580u: goto label_134580;
        case 0x134584u: goto label_134584;
        case 0x134588u: goto label_134588;
        case 0x13458cu: goto label_13458c;
        case 0x134590u: goto label_134590;
        case 0x134594u: goto label_134594;
        case 0x134598u: goto label_134598;
        case 0x13459cu: goto label_13459c;
        case 0x1345a0u: goto label_1345a0;
        case 0x1345a4u: goto label_1345a4;
        case 0x1345a8u: goto label_1345a8;
        case 0x1345acu: goto label_1345ac;
        case 0x1345b0u: goto label_1345b0;
        case 0x1345b4u: goto label_1345b4;
        case 0x1345b8u: goto label_1345b8;
        case 0x1345bcu: goto label_1345bc;
        case 0x1345c0u: goto label_1345c0;
        case 0x1345c4u: goto label_1345c4;
        case 0x1345c8u: goto label_1345c8;
        case 0x1345ccu: goto label_1345cc;
        case 0x1345d0u: goto label_1345d0;
        case 0x1345d4u: goto label_1345d4;
        case 0x1345d8u: goto label_1345d8;
        case 0x1345dcu: goto label_1345dc;
        case 0x1345e0u: goto label_1345e0;
        case 0x1345e4u: goto label_1345e4;
        case 0x1345e8u: goto label_1345e8;
        case 0x1345ecu: goto label_1345ec;
        case 0x1345f0u: goto label_1345f0;
        case 0x1345f4u: goto label_1345f4;
        case 0x1345f8u: goto label_1345f8;
        case 0x1345fcu: goto label_1345fc;
        case 0x134600u: goto label_134600;
        case 0x134604u: goto label_134604;
        case 0x134608u: goto label_134608;
        case 0x13460cu: goto label_13460c;
        case 0x134610u: goto label_134610;
        case 0x134614u: goto label_134614;
        case 0x134618u: goto label_134618;
        case 0x13461cu: goto label_13461c;
        case 0x134620u: goto label_134620;
        case 0x134624u: goto label_134624;
        case 0x134628u: goto label_134628;
        case 0x13462cu: goto label_13462c;
        case 0x134630u: goto label_134630;
        case 0x134634u: goto label_134634;
        case 0x134638u: goto label_134638;
        case 0x13463cu: goto label_13463c;
        case 0x134640u: goto label_134640;
        case 0x134644u: goto label_134644;
        case 0x134648u: goto label_134648;
        case 0x13464cu: goto label_13464c;
        case 0x134650u: goto label_134650;
        case 0x134654u: goto label_134654;
        case 0x134658u: goto label_134658;
        case 0x13465cu: goto label_13465c;
        case 0x134660u: goto label_134660;
        case 0x134664u: goto label_134664;
        case 0x134668u: goto label_134668;
        case 0x13466cu: goto label_13466c;
        case 0x134670u: goto label_134670;
        case 0x134674u: goto label_134674;
        case 0x134678u: goto label_134678;
        case 0x13467cu: goto label_13467c;
        case 0x134680u: goto label_134680;
        case 0x134684u: goto label_134684;
        case 0x134688u: goto label_134688;
        case 0x13468cu: goto label_13468c;
        case 0x134690u: goto label_134690;
        case 0x134694u: goto label_134694;
        case 0x134698u: goto label_134698;
        case 0x13469cu: goto label_13469c;
        case 0x1346a0u: goto label_1346a0;
        case 0x1346a4u: goto label_1346a4;
        case 0x1346a8u: goto label_1346a8;
        case 0x1346acu: goto label_1346ac;
        case 0x1346b0u: goto label_1346b0;
        case 0x1346b4u: goto label_1346b4;
        case 0x1346b8u: goto label_1346b8;
        case 0x1346bcu: goto label_1346bc;
        case 0x1346c0u: goto label_1346c0;
        case 0x1346c4u: goto label_1346c4;
        case 0x1346c8u: goto label_1346c8;
        case 0x1346ccu: goto label_1346cc;
        case 0x1346d0u: goto label_1346d0;
        case 0x1346d4u: goto label_1346d4;
        case 0x1346d8u: goto label_1346d8;
        case 0x1346dcu: goto label_1346dc;
        case 0x1346e0u: goto label_1346e0;
        case 0x1346e4u: goto label_1346e4;
        case 0x1346e8u: goto label_1346e8;
        case 0x1346ecu: goto label_1346ec;
        case 0x1346f0u: goto label_1346f0;
        case 0x1346f4u: goto label_1346f4;
        case 0x1346f8u: goto label_1346f8;
        case 0x1346fcu: goto label_1346fc;
        case 0x134700u: goto label_134700;
        case 0x134704u: goto label_134704;
        case 0x134708u: goto label_134708;
        case 0x13470cu: goto label_13470c;
        case 0x134710u: goto label_134710;
        case 0x134714u: goto label_134714;
        case 0x134718u: goto label_134718;
        case 0x13471cu: goto label_13471c;
        case 0x134720u: goto label_134720;
        case 0x134724u: goto label_134724;
        case 0x134728u: goto label_134728;
        case 0x13472cu: goto label_13472c;
        case 0x134730u: goto label_134730;
        case 0x134734u: goto label_134734;
        case 0x134738u: goto label_134738;
        case 0x13473cu: goto label_13473c;
        case 0x134740u: goto label_134740;
        case 0x134744u: goto label_134744;
        case 0x134748u: goto label_134748;
        case 0x13474cu: goto label_13474c;
        case 0x134750u: goto label_134750;
        case 0x134754u: goto label_134754;
        case 0x134758u: goto label_134758;
        case 0x13475cu: goto label_13475c;
        case 0x134760u: goto label_134760;
        case 0x134764u: goto label_134764;
        case 0x134768u: goto label_134768;
        case 0x13476cu: goto label_13476c;
        case 0x134770u: goto label_134770;
        case 0x134774u: goto label_134774;
        case 0x134778u: goto label_134778;
        case 0x13477cu: goto label_13477c;
        case 0x134780u: goto label_134780;
        case 0x134784u: goto label_134784;
        case 0x134788u: goto label_134788;
        case 0x13478cu: goto label_13478c;
        case 0x134790u: goto label_134790;
        case 0x134794u: goto label_134794;
        case 0x134798u: goto label_134798;
        case 0x13479cu: goto label_13479c;
        case 0x1347a0u: goto label_1347a0;
        case 0x1347a4u: goto label_1347a4;
        case 0x1347a8u: goto label_1347a8;
        case 0x1347acu: goto label_1347ac;
        case 0x1347b0u: goto label_1347b0;
        case 0x1347b4u: goto label_1347b4;
        case 0x1347b8u: goto label_1347b8;
        case 0x1347bcu: goto label_1347bc;
        case 0x1347c0u: goto label_1347c0;
        case 0x1347c4u: goto label_1347c4;
        case 0x1347c8u: goto label_1347c8;
        case 0x1347ccu: goto label_1347cc;
        case 0x1347d0u: goto label_1347d0;
        case 0x1347d4u: goto label_1347d4;
        case 0x1347d8u: goto label_1347d8;
        case 0x1347dcu: goto label_1347dc;
        case 0x1347e0u: goto label_1347e0;
        case 0x1347e4u: goto label_1347e4;
        case 0x1347e8u: goto label_1347e8;
        case 0x1347ecu: goto label_1347ec;
        case 0x1347f0u: goto label_1347f0;
        case 0x1347f4u: goto label_1347f4;
        case 0x1347f8u: goto label_1347f8;
        case 0x1347fcu: goto label_1347fc;
        case 0x134800u: goto label_134800;
        case 0x134804u: goto label_134804;
        case 0x134808u: goto label_134808;
        case 0x13480cu: goto label_13480c;
        case 0x134810u: goto label_134810;
        case 0x134814u: goto label_134814;
        case 0x134818u: goto label_134818;
        case 0x13481cu: goto label_13481c;
        case 0x134820u: goto label_134820;
        case 0x134824u: goto label_134824;
        case 0x134828u: goto label_134828;
        case 0x13482cu: goto label_13482c;
        case 0x134830u: goto label_134830;
        case 0x134834u: goto label_134834;
        case 0x134838u: goto label_134838;
        case 0x13483cu: goto label_13483c;
        case 0x134840u: goto label_134840;
        case 0x134844u: goto label_134844;
        case 0x134848u: goto label_134848;
        case 0x13484cu: goto label_13484c;
        case 0x134850u: goto label_134850;
        case 0x134854u: goto label_134854;
        case 0x134858u: goto label_134858;
        case 0x13485cu: goto label_13485c;
        case 0x134860u: goto label_134860;
        case 0x134864u: goto label_134864;
        case 0x134868u: goto label_134868;
        case 0x13486cu: goto label_13486c;
        case 0x134870u: goto label_134870;
        case 0x134874u: goto label_134874;
        case 0x134878u: goto label_134878;
        case 0x13487cu: goto label_13487c;
        case 0x134880u: goto label_134880;
        case 0x134884u: goto label_134884;
        case 0x134888u: goto label_134888;
        case 0x13488cu: goto label_13488c;
        case 0x134890u: goto label_134890;
        case 0x134894u: goto label_134894;
        case 0x134898u: goto label_134898;
        case 0x13489cu: goto label_13489c;
        case 0x1348a0u: goto label_1348a0;
        case 0x1348a4u: goto label_1348a4;
        case 0x1348a8u: goto label_1348a8;
        case 0x1348acu: goto label_1348ac;
        case 0x1348b0u: goto label_1348b0;
        case 0x1348b4u: goto label_1348b4;
        case 0x1348b8u: goto label_1348b8;
        case 0x1348bcu: goto label_1348bc;
        case 0x1348c0u: goto label_1348c0;
        case 0x1348c4u: goto label_1348c4;
        case 0x1348c8u: goto label_1348c8;
        case 0x1348ccu: goto label_1348cc;
        case 0x1348d0u: goto label_1348d0;
        case 0x1348d4u: goto label_1348d4;
        case 0x1348d8u: goto label_1348d8;
        case 0x1348dcu: goto label_1348dc;
        case 0x1348e0u: goto label_1348e0;
        case 0x1348e4u: goto label_1348e4;
        case 0x1348e8u: goto label_1348e8;
        case 0x1348ecu: goto label_1348ec;
        case 0x1348f0u: goto label_1348f0;
        case 0x1348f4u: goto label_1348f4;
        case 0x1348f8u: goto label_1348f8;
        case 0x1348fcu: goto label_1348fc;
        case 0x134900u: goto label_134900;
        case 0x134904u: goto label_134904;
        case 0x134908u: goto label_134908;
        case 0x13490cu: goto label_13490c;
        case 0x134910u: goto label_134910;
        case 0x134914u: goto label_134914;
        case 0x134918u: goto label_134918;
        case 0x13491cu: goto label_13491c;
        case 0x134920u: goto label_134920;
        case 0x134924u: goto label_134924;
        case 0x134928u: goto label_134928;
        case 0x13492cu: goto label_13492c;
        case 0x134930u: goto label_134930;
        case 0x134934u: goto label_134934;
        case 0x134938u: goto label_134938;
        case 0x13493cu: goto label_13493c;
        case 0x134940u: goto label_134940;
        case 0x134944u: goto label_134944;
        case 0x134948u: goto label_134948;
        case 0x13494cu: goto label_13494c;
        case 0x134950u: goto label_134950;
        case 0x134954u: goto label_134954;
        case 0x134958u: goto label_134958;
        case 0x13495cu: goto label_13495c;
        case 0x134960u: goto label_134960;
        case 0x134964u: goto label_134964;
        case 0x134968u: goto label_134968;
        case 0x13496cu: goto label_13496c;
        case 0x134970u: goto label_134970;
        case 0x134974u: goto label_134974;
        case 0x134978u: goto label_134978;
        case 0x13497cu: goto label_13497c;
        case 0x134980u: goto label_134980;
        case 0x134984u: goto label_134984;
        case 0x134988u: goto label_134988;
        case 0x13498cu: goto label_13498c;
        case 0x134990u: goto label_134990;
        case 0x134994u: goto label_134994;
        case 0x134998u: goto label_134998;
        case 0x13499cu: goto label_13499c;
        case 0x1349a0u: goto label_1349a0;
        case 0x1349a4u: goto label_1349a4;
        case 0x1349a8u: goto label_1349a8;
        case 0x1349acu: goto label_1349ac;
        case 0x1349b0u: goto label_1349b0;
        case 0x1349b4u: goto label_1349b4;
        case 0x1349b8u: goto label_1349b8;
        case 0x1349bcu: goto label_1349bc;
        case 0x1349c0u: goto label_1349c0;
        case 0x1349c4u: goto label_1349c4;
        case 0x1349c8u: goto label_1349c8;
        case 0x1349ccu: goto label_1349cc;
        case 0x1349d0u: goto label_1349d0;
        case 0x1349d4u: goto label_1349d4;
        case 0x1349d8u: goto label_1349d8;
        case 0x1349dcu: goto label_1349dc;
        case 0x1349e0u: goto label_1349e0;
        case 0x1349e4u: goto label_1349e4;
        case 0x1349e8u: goto label_1349e8;
        case 0x1349ecu: goto label_1349ec;
        case 0x1349f0u: goto label_1349f0;
        case 0x1349f4u: goto label_1349f4;
        case 0x1349f8u: goto label_1349f8;
        case 0x1349fcu: goto label_1349fc;
        default: break;
    }

    ctx->pc = 0x1344d0u;

label_1344d0:
    // 0x1344d0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1344d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1344d4:
    // 0x1344d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1344d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1344d8:
    // 0x1344d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1344d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1344dc:
    // 0x1344dc: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1344dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1344e0:
    // 0x1344e0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1344e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1344e4:
    // 0x1344e4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1344e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1344e8:
    // 0x1344e8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1344e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1344ec:
    // 0x1344ec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1344ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1344f0:
    // 0x1344f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1344f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1344f4:
    // 0x1344f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1344f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1344f8:
    // 0x1344f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1344f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1344fc:
    // 0x1344fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1344fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_134500:
    // 0x134500: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x134500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_134504:
    // 0x134504: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x134504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_134508:
    // 0x134508: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x134508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_13450c:
    // 0x13450c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_134510:
    // 0x134510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x134510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_134514:
    // 0x134514: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x134514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_134518:
    // 0x134518: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x134518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_13451c:
    // 0x13451c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x13451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_134520:
    // 0x134520: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x134520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134524:
    // 0x134524: 0xafaa00d8  sw          $t2, 0xD8($sp)
    ctx->pc = 0x134524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 10));
label_134528:
    // 0x134528: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x134528u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_13452c:
    // 0x13452c: 0xafa700dc  sw          $a3, 0xDC($sp)
    ctx->pc = 0x13452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 7));
label_134530:
    // 0x134530: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x134530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_134534:
    // 0x134534: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x134534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_134538:
    // 0x134538: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x134538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13453c:
    // 0x13453c: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x13453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_134540:
    // 0x134540: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x134540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_134544:
    // 0x134544: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x134544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_134548:
    // 0x134548: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x134548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13454c:
    // 0x13454c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x13454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_134550:
    // 0x134550: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x134550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134554:
    // 0x134554: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x134554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_134558:
    // 0x134558: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x134558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13455c:
    // 0x13455c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x13455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_134560:
    // 0x134560: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x134560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134564:
    // 0x134564: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_134568:
    if (ctx->pc == 0x134568u) {
        ctx->pc = 0x134568u;
            // 0x134568: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->pc = 0x13456Cu;
        goto label_13456c;
    }
    ctx->pc = 0x134564u;
    {
        const bool branch_taken_0x134564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134564u;
            // 0x134568: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134564) {
            ctx->pc = 0x13457Cu;
            goto label_13457c;
        }
    }
    ctx->pc = 0x13456Cu;
label_13456c:
    // 0x13456c: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x13456cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_134570:
    // 0x134570: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x134570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
label_134574:
    // 0x134574: 0x1000000a  b           . + 4 + (0xA << 2)
label_134578:
    if (ctx->pc == 0x134578u) {
        ctx->pc = 0x134578u;
            // 0x134578: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x13457Cu;
        goto label_13457c;
    }
    ctx->pc = 0x134574u;
    {
        const bool branch_taken_0x134574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134574u;
            // 0x134578: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134574) {
            ctx->pc = 0x1345A0u;
            goto label_1345a0;
        }
    }
    ctx->pc = 0x13457Cu;
label_13457c:
    // 0x13457c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x13457cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_134580:
    // 0x134580: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x134580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_134584:
    // 0x134584: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x134584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_134588:
    // 0x134588: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x134588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13458c:
    // 0x13458c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x13458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_134590:
    // 0x134590: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x134590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_134594:
    // 0x134594: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x134594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_134598:
    // 0x134598: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_13459c:
    // 0x13459c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x13459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_1345a0:
    // 0x1345a0: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1345a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1345a4:
    // 0x1345a4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1345a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1345a8:
    // 0x1345a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1345a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1345ac:
    // 0x1345ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1345acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1345b0:
    // 0x1345b0: 0x38570001  xori        $s7, $v0, 0x1
    ctx->pc = 0x1345b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1345b4:
    // 0x1345b4: 0x38750001  xori        $s5, $v1, 0x1
    ctx->pc = 0x1345b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1345b8:
    // 0x1345b8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1345b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1345bc:
    // 0x1345bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1345bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1345c0:
    // 0x1345c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1345c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1345c4:
    // 0x1345c4: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
label_1345c8:
    if (ctx->pc == 0x1345C8u) {
        ctx->pc = 0x1345C8u;
            // 0x1345c8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x1345CCu;
        goto label_1345cc;
    }
    ctx->pc = 0x1345C4u;
    {
        const bool branch_taken_0x1345c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1345C4u;
            // 0x1345c8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345c4) {
            ctx->pc = 0x1345D0u;
            goto label_1345d0;
        }
    }
    ctx->pc = 0x1345CCu;
label_1345cc:
    // 0x1345cc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1345ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1345d0:
    // 0x1345d0: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x1345d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1345d4:
    // 0x1345d4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1345d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1345d8:
    // 0x1345d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1345d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1345dc:
    // 0x1345dc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1345dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1345e0:
    // 0x1345e0: 0x1020007d  beqz        $at, . + 4 + (0x7D << 2)
label_1345e4:
    if (ctx->pc == 0x1345E4u) {
        ctx->pc = 0x1345E8u;
        goto label_1345e8;
    }
    ctx->pc = 0x1345E0u;
    {
        const bool branch_taken_0x1345e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345e0) {
            ctx->pc = 0x1347D8u;
            goto label_1347d8;
        }
    }
    ctx->pc = 0x1345E8u;
label_1345e8:
    // 0x1345e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1345e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1345ec:
    // 0x1345ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1345ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1345f0:
    // 0x1345f0: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x1345f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1345f4:
    // 0x1345f4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1345f8:
    // 0x1345f8: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x1345f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1345fc:
    // 0x1345fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1345fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_134600:
    // 0x134600: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x134600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_134604:
    // 0x134604: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_134608:
    if (ctx->pc == 0x134608u) {
        ctx->pc = 0x13460Cu;
        goto label_13460c;
    }
    ctx->pc = 0x134604u;
    {
        const bool branch_taken_0x134604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134604) {
            ctx->pc = 0x134614u;
            goto label_134614;
        }
    }
    ctx->pc = 0x13460Cu;
label_13460c:
    // 0x13460c: 0x10000072  b           . + 4 + (0x72 << 2)
label_134610:
    if (ctx->pc == 0x134610u) {
        ctx->pc = 0x134610u;
            // 0x134610: 0xafb200d8  sw          $s2, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
        ctx->pc = 0x134614u;
        goto label_134614;
    }
    ctx->pc = 0x13460Cu;
    {
        const bool branch_taken_0x13460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13460Cu;
            // 0x134610: 0xafb200d8  sw          $s2, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13460c) {
            ctx->pc = 0x1347D8u;
            goto label_1347d8;
        }
    }
    ctx->pc = 0x134614u;
label_134614:
    // 0x134614: 0x1682006a  bne         $s4, $v0, . + 4 + (0x6A << 2)
label_134618:
    if (ctx->pc == 0x134618u) {
        ctx->pc = 0x13461Cu;
        goto label_13461c;
    }
    ctx->pc = 0x134614u;
    {
        const bool branch_taken_0x134614 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x134614) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x13461Cu;
label_13461c:
    // 0x13461c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_134620:
    // 0x134620: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_134624:
    if (ctx->pc == 0x134624u) {
        ctx->pc = 0x134628u;
        goto label_134628;
    }
    ctx->pc = 0x134620u;
    {
        const bool branch_taken_0x134620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134620) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x134628u;
label_134628:
    // 0x134628: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x134628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13462c:
    // 0x13462c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x13462cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134630:
    // 0x134630: 0x45000063  bc1f        . + 4 + (0x63 << 2)
label_134634:
    if (ctx->pc == 0x134634u) {
        ctx->pc = 0x134638u;
        goto label_134638;
    }
    ctx->pc = 0x134630u;
    {
        const bool branch_taken_0x134630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134630) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x134638u;
label_134638:
    // 0x134638: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x134638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13463c:
    // 0x13463c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13463cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134640:
    // 0x134640: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
label_134644:
    if (ctx->pc == 0x134644u) {
        ctx->pc = 0x134648u;
        goto label_134648;
    }
    ctx->pc = 0x134640u;
    {
        const bool branch_taken_0x134640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134640) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x134648u;
label_134648:
    // 0x134648: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13464c:
    // 0x13464c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x13464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_134650:
    // 0x134650: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x134650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_134654:
    // 0x134654: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_134658:
    if (ctx->pc == 0x134658u) {
        ctx->pc = 0x134658u;
            // 0x134658: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x13465Cu;
        goto label_13465c;
    }
    ctx->pc = 0x134654u;
    {
        const bool branch_taken_0x134654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134654u;
            // 0x134658: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134654) {
            ctx->pc = 0x134670u;
            goto label_134670;
        }
    }
    ctx->pc = 0x13465Cu;
label_13465c:
    // 0x13465c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13465cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134660:
    // 0x134660: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_134664:
    if (ctx->pc == 0x134664u) {
        ctx->pc = 0x134668u;
        goto label_134668;
    }
    ctx->pc = 0x134660u;
    {
        const bool branch_taken_0x134660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134660) {
            ctx->pc = 0x134670u;
            goto label_134670;
        }
    }
    ctx->pc = 0x134668u;
label_134668:
    // 0x134668: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x134668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13466c:
    // 0x13466c: 0x0  nop
    ctx->pc = 0x13466cu;
    // NOP
label_134670:
    // 0x134670: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x134670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_134674:
    // 0x134674: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x134674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_134678:
    // 0x134678: 0xc62d0018  lwc1        $f13, 0x18($s1)
    ctx->pc = 0x134678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_13467c:
    // 0x13467c: 0xc04d03c  jal         func_1340F0
label_134680:
    if (ctx->pc == 0x134680u) {
        ctx->pc = 0x134680u;
            // 0x134680: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x134684u;
        goto label_134684;
    }
    ctx->pc = 0x13467Cu;
    SET_GPR_U32(ctx, 31, 0x134684u);
    ctx->pc = 0x134680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13467Cu;
            // 0x134680: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134684u; }
        if (ctx->pc != 0x134684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134684u; }
        if (ctx->pc != 0x134684u) { return; }
    }
    ctx->pc = 0x134684u;
label_134684:
    // 0x134684: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_134688:
    if (ctx->pc == 0x134688u) {
        ctx->pc = 0x13468Cu;
        goto label_13468c;
    }
    ctx->pc = 0x134684u;
    {
        const bool branch_taken_0x134684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134684) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x13468Cu;
label_13468c:
    // 0x13468c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_134690:
    // 0x134690: 0x30627800  andi        $v0, $v1, 0x7800
    ctx->pc = 0x134690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
label_134694:
    // 0x134694: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_134698:
    if (ctx->pc == 0x134698u) {
        ctx->pc = 0x13469Cu;
        goto label_13469c;
    }
    ctx->pc = 0x134694u;
    {
        const bool branch_taken_0x134694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134694) {
            ctx->pc = 0x1346C0u;
            goto label_1346c0;
        }
    }
    ctx->pc = 0x13469Cu;
label_13469c:
    // 0x13469c: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x13469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1346a0:
    // 0x1346a0: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x1346a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1346a4:
    // 0x1346a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1346a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1346a8:
    // 0x1346a8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1346a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1346ac:
    // 0x1346ac: 0xc04d280  jal         func_134A00
label_1346b0:
    if (ctx->pc == 0x1346B0u) {
        ctx->pc = 0x1346B0u;
            // 0x1346b0: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1346B4u;
        goto label_1346b4;
    }
    ctx->pc = 0x1346ACu;
    SET_GPR_U32(ctx, 31, 0x1346B4u);
    ctx->pc = 0x1346B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1346ACu;
            // 0x1346b0: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A00u;
    if (runtime->hasFunction(0x134A00u)) {
        auto targetFn = runtime->lookupFunction(0x134A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346B4u; }
        if (ctx->pc != 0x1346B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134A00_0x134a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346B4u; }
        if (ctx->pc != 0x1346B4u) { return; }
    }
    ctx->pc = 0x1346B4u;
label_1346b4:
    // 0x1346b4: 0x10000042  b           . + 4 + (0x42 << 2)
label_1346b8:
    if (ctx->pc == 0x1346B8u) {
        ctx->pc = 0x1346B8u;
            // 0x1346b8: 0x2e2b825  or          $s7, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
        ctx->pc = 0x1346BCu;
        goto label_1346bc;
    }
    ctx->pc = 0x1346B4u;
    {
        const bool branch_taken_0x1346b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1346B4u;
            // 0x1346b8: 0x2e2b825  or          $s7, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346b4) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x1346BCu;
label_1346bc:
    // 0x1346bc: 0x0  nop
    ctx->pc = 0x1346bcu;
    // NOP
label_1346c0:
    // 0x1346c0: 0x30620700  andi        $v0, $v1, 0x700
    ctx->pc = 0x1346c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1792);
label_1346c4:
    // 0x1346c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1346c8:
    if (ctx->pc == 0x1346C8u) {
        ctx->pc = 0x1346CCu;
        goto label_1346cc;
    }
    ctx->pc = 0x1346C4u;
    {
        const bool branch_taken_0x1346c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1346c4) {
            ctx->pc = 0x1346E8u;
            goto label_1346e8;
        }
    }
    ctx->pc = 0x1346CCu;
label_1346cc:
    // 0x1346cc: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x1346ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1346d0:
    // 0x1346d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1346d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1346d4:
    // 0x1346d4: 0xc04d4d4  jal         func_135350
label_1346d8:
    if (ctx->pc == 0x1346D8u) {
        ctx->pc = 0x1346D8u;
            // 0x1346d8: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1346DCu;
        goto label_1346dc;
    }
    ctx->pc = 0x1346D4u;
    SET_GPR_U32(ctx, 31, 0x1346DCu);
    ctx->pc = 0x1346D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1346D4u;
            // 0x1346d8: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135350u;
    if (runtime->hasFunction(0x135350u)) {
        auto targetFn = runtime->lookupFunction(0x135350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346DCu; }
        if (ctx->pc != 0x1346DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135350_0x135350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346DCu; }
        if (ctx->pc != 0x1346DCu) { return; }
    }
    ctx->pc = 0x1346DCu;
label_1346dc:
    // 0x1346dc: 0x10000038  b           . + 4 + (0x38 << 2)
label_1346e0:
    if (ctx->pc == 0x1346E0u) {
        ctx->pc = 0x1346E0u;
            // 0x1346e0: 0x2a2a825  or          $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
        ctx->pc = 0x1346E4u;
        goto label_1346e4;
    }
    ctx->pc = 0x1346DCu;
    {
        const bool branch_taken_0x1346dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1346DCu;
            // 0x1346e0: 0x2a2a825  or          $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346dc) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x1346E4u;
label_1346e4:
    // 0x1346e4: 0x0  nop
    ctx->pc = 0x1346e4u;
    // NOP
label_1346e8:
    // 0x1346e8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1346e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1346ec:
    // 0x1346ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1346ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1346f0:
    // 0x1346f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1346f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1346f4:
    // 0x1346f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1346f8:
    if (ctx->pc == 0x1346F8u) {
        ctx->pc = 0x1346FCu;
        goto label_1346fc;
    }
    ctx->pc = 0x1346F4u;
    {
        const bool branch_taken_0x1346f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1346f4) {
            ctx->pc = 0x134720u;
            goto label_134720;
        }
    }
    ctx->pc = 0x1346FCu;
label_1346fc:
    // 0x1346fc: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x1346fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_134700:
    // 0x134700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134704:
    // 0x134704: 0xc04d54c  jal         func_135530
label_134708:
    if (ctx->pc == 0x134708u) {
        ctx->pc = 0x134708u;
            // 0x134708: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x13470Cu;
        goto label_13470c;
    }
    ctx->pc = 0x134704u;
    SET_GPR_U32(ctx, 31, 0x13470Cu);
    ctx->pc = 0x134708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134704u;
            // 0x134708: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135530u;
    if (runtime->hasFunction(0x135530u)) {
        auto targetFn = runtime->lookupFunction(0x135530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13470Cu; }
        if (ctx->pc != 0x13470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135530_0x135530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13470Cu; }
        if (ctx->pc != 0x13470Cu) { return; }
    }
    ctx->pc = 0x13470Cu;
label_13470c:
    // 0x13470c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x13470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_134710:
    // 0x134710: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_134714:
    // 0x134714: 0x1000002a  b           . + 4 + (0x2A << 2)
label_134718:
    if (ctx->pc == 0x134718u) {
        ctx->pc = 0x134718u;
            // 0x134718: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->pc = 0x13471Cu;
        goto label_13471c;
    }
    ctx->pc = 0x134714u;
    {
        const bool branch_taken_0x134714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134714u;
            // 0x134718: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134714) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x13471Cu;
label_13471c:
    // 0x13471c: 0x0  nop
    ctx->pc = 0x13471cu;
    // NOP
label_134720:
    // 0x134720: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x134720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_134724:
    // 0x134724: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x134724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_134728:
    // 0x134728: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_13472c:
    if (ctx->pc == 0x13472Cu) {
        ctx->pc = 0x134730u;
        goto label_134730;
    }
    ctx->pc = 0x134728u;
    {
        const bool branch_taken_0x134728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134728) {
            ctx->pc = 0x134798u;
            goto label_134798;
        }
    }
    ctx->pc = 0x134730u;
label_134730:
    // 0x134730: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x134730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_134734:
    // 0x134734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134738:
    // 0x134738: 0xc04d734  jal         func_135CD0
label_13473c:
    if (ctx->pc == 0x13473Cu) {
        ctx->pc = 0x13473Cu;
            // 0x13473c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x134740u;
        goto label_134740;
    }
    ctx->pc = 0x134738u;
    SET_GPR_U32(ctx, 31, 0x134740u);
    ctx->pc = 0x13473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134738u;
            // 0x13473c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135CD0u;
    if (runtime->hasFunction(0x135CD0u)) {
        auto targetFn = runtime->lookupFunction(0x135CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134740u; }
        if (ctx->pc != 0x134740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135CD0_0x135cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134740u; }
        if (ctx->pc != 0x134740u) { return; }
    }
    ctx->pc = 0x134740u;
label_134740:
    // 0x134740: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_134744:
    if (ctx->pc == 0x134744u) {
        ctx->pc = 0x134748u;
        goto label_134748;
    }
    ctx->pc = 0x134740u;
    {
        const bool branch_taken_0x134740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134740) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x134748u;
label_134748:
    // 0x134748: 0xc78080fc  lwc1        $f0, -0x7F04($gp)
    ctx->pc = 0x134748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13474c:
    // 0x13474c: 0x8f8280f8  lw          $v0, -0x7F08($gp)
    ctx->pc = 0x13474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
label_134750:
    // 0x134750: 0xafb40100  sw          $s4, 0x100($sp)
    ctx->pc = 0x134750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 20));
label_134754:
    // 0x134754: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x134754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_134758:
    // 0x134758: 0xafb20110  sw          $s2, 0x110($sp)
    ctx->pc = 0x134758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 18));
label_13475c:
    // 0x13475c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x13475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_134760:
    // 0x134760: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x134760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_134764:
    // 0x134764: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x134764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_134768:
    // 0x134768: 0x8f8380ec  lw          $v1, -0x7F14($gp)
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934764)));
label_13476c:
    // 0x13476c: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x13476cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_134770:
    // 0x134770: 0x8f828368  lw          $v0, -0x7C98($gp)
    ctx->pc = 0x134770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935400)));
label_134774:
    // 0x134774: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x134774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_134778:
    // 0x134778: 0xafa50114  sw          $a1, 0x114($sp)
    ctx->pc = 0x134778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 5));
label_13477c:
    // 0x13477c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x13477cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_134780:
    // 0x134780: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x134780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
label_134784:
    // 0x134784: 0x40f809  jalr        $v0
label_134788:
    if (ctx->pc == 0x134788u) {
        ctx->pc = 0x134788u;
            // 0x134788: 0xafa3011c  sw          $v1, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
        ctx->pc = 0x13478Cu;
        goto label_13478c;
    }
    ctx->pc = 0x134784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13478Cu);
        ctx->pc = 0x134788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134784u;
            // 0x134788: 0xafa3011c  sw          $v1, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13478Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13478Cu; }
            if (ctx->pc != 0x13478Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13478Cu;
label_13478c:
    // 0x13478c: 0x1000000c  b           . + 4 + (0xC << 2)
label_134790:
    if (ctx->pc == 0x134790u) {
        ctx->pc = 0x134794u;
        goto label_134794;
    }
    ctx->pc = 0x13478Cu;
    {
        const bool branch_taken_0x13478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13478c) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x134794u;
label_134794:
    // 0x134794: 0x0  nop
    ctx->pc = 0x134794u;
    // NOP
label_134798:
    // 0x134798: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x134798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_13479c:
    // 0x13479c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1347a0:
    // 0x1347a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1347a4:
    if (ctx->pc == 0x1347A4u) {
        ctx->pc = 0x1347A8u;
        goto label_1347a8;
    }
    ctx->pc = 0x1347A0u;
    {
        const bool branch_taken_0x1347a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347a0) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x1347A8u;
label_1347a8:
    // 0x1347a8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_1347ac:
    if (ctx->pc == 0x1347ACu) {
        ctx->pc = 0x1347B0u;
        goto label_1347b0;
    }
    ctx->pc = 0x1347A8u;
    {
        const bool branch_taken_0x1347a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347a8) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x1347B0u;
label_1347b0:
    // 0x1347b0: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x1347b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1347b4:
    // 0x1347b4: 0xc055490  jal         func_155240
label_1347b8:
    if (ctx->pc == 0x1347B8u) {
        ctx->pc = 0x1347B8u;
            // 0x1347b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1347BCu;
        goto label_1347bc;
    }
    ctx->pc = 0x1347B4u;
    SET_GPR_U32(ctx, 31, 0x1347BCu);
    ctx->pc = 0x1347B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1347B4u;
            // 0x1347b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155240u;
    if (runtime->hasFunction(0x155240u)) {
        auto targetFn = runtime->lookupFunction(0x155240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347BCu; }
        if (ctx->pc != 0x1347BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155240_0x155240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347BCu; }
        if (ctx->pc != 0x1347BCu) { return; }
    }
    ctx->pc = 0x1347BCu;
label_1347bc:
    // 0x1347bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1347bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1347c0:
    // 0x1347c0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1347c4:
    // 0x1347c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1347c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1347c8:
    // 0x1347c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1347c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1347cc:
    // 0x1347cc: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
label_1347d0:
    if (ctx->pc == 0x1347D0u) {
        ctx->pc = 0x1347D0u;
            // 0x1347d0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->pc = 0x1347D4u;
        goto label_1347d4;
    }
    ctx->pc = 0x1347CCu;
    {
        const bool branch_taken_0x1347cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1347D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1347CCu;
            // 0x1347d0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347cc) {
            ctx->pc = 0x1345F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1345f4;
        }
    }
    ctx->pc = 0x1347D4u;
label_1347d4:
    // 0x1347d4: 0x0  nop
    ctx->pc = 0x1347d4u;
    // NOP
label_1347d8:
    // 0x1347d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1347d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1347dc:
    // 0x1347dc: 0x56a2001c  bnel        $s5, $v0, . + 4 + (0x1C << 2)
label_1347e0:
    if (ctx->pc == 0x1347E0u) {
        ctx->pc = 0x1347E0u;
            // 0x1347e0: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x1347E4u;
        goto label_1347e4;
    }
    ctx->pc = 0x1347DCu;
    {
        const bool branch_taken_0x1347dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1347dc) {
            ctx->pc = 0x1347E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1347DCu;
            // 0x1347e0: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134850u;
            goto label_134850;
        }
    }
    ctx->pc = 0x1347E4u;
label_1347e4:
    // 0x1347e4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1347e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1347e8:
    // 0x1347e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1347e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1347ec:
    // 0x1347ec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1347ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1347f0:
    // 0x1347f0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1347f4:
    if (ctx->pc == 0x1347F4u) {
        ctx->pc = 0x1347F4u;
            // 0x1347f4: 0xc7ac0150  lwc1        $f12, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1347F8u;
        goto label_1347f8;
    }
    ctx->pc = 0x1347F0u;
    {
        const bool branch_taken_0x1347f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347f0) {
            ctx->pc = 0x1347F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1347F0u;
            // 0x1347f4: 0xc7ac0150  lwc1        $f12, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13483Cu;
            goto label_13483c;
        }
    }
    ctx->pc = 0x1347F8u;
label_1347f8:
    // 0x1347f8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1347f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1347fc:
    // 0x1347fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1347fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_134800:
    // 0x134800: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x134800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134804:
    // 0x134804: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_134808:
    // 0x134808: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x134808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_13480c:
    // 0x13480c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13480cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134810:
    // 0x134810: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x134810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_134814:
    // 0x134814: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x134814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_134818:
    // 0x134818: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x134818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13481c:
    // 0x13481c: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x13481cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_134820:
    // 0x134820: 0xc04cca0  jal         func_133280
label_134824:
    if (ctx->pc == 0x134824u) {
        ctx->pc = 0x134824u;
            // 0x134824: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->pc = 0x134828u;
        goto label_134828;
    }
    ctx->pc = 0x134820u;
    SET_GPR_U32(ctx, 31, 0x134828u);
    ctx->pc = 0x134824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134820u;
            // 0x134824: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134828u; }
        if (ctx->pc != 0x134828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134828u; }
        if (ctx->pc != 0x134828u) { return; }
    }
    ctx->pc = 0x134828u;
label_134828:
    // 0x134828: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x134828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13482c:
    // 0x13482c: 0xc04ce80  jal         func_133A00
label_134830:
    if (ctx->pc == 0x134830u) {
        ctx->pc = 0x134830u;
            // 0x134830: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x134834u;
        goto label_134834;
    }
    ctx->pc = 0x13482Cu;
    SET_GPR_U32(ctx, 31, 0x134834u);
    ctx->pc = 0x134830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13482Cu;
            // 0x134830: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134834u; }
        if (ctx->pc != 0x134834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134834u; }
        if (ctx->pc != 0x134834u) { return; }
    }
    ctx->pc = 0x134834u;
label_134834:
    // 0x134834: 0x10000005  b           . + 4 + (0x5 << 2)
label_134838:
    if (ctx->pc == 0x134838u) {
        ctx->pc = 0x13483Cu;
        goto label_13483c;
    }
    ctx->pc = 0x134834u;
    {
        const bool branch_taken_0x134834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134834) {
            ctx->pc = 0x13484Cu;
            goto label_13484c;
        }
    }
    ctx->pc = 0x13483Cu;
label_13483c:
    // 0x13483c: 0xc7ad0154  lwc1        $f13, 0x154($sp)
    ctx->pc = 0x13483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_134840:
    // 0x134840: 0xc7ae0158  lwc1        $f14, 0x158($sp)
    ctx->pc = 0x134840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_134844:
    // 0x134844: 0xc04d52c  jal         func_1354B0
label_134848:
    if (ctx->pc == 0x134848u) {
        ctx->pc = 0x134848u;
            // 0x134848: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13484Cu;
        goto label_13484c;
    }
    ctx->pc = 0x134844u;
    SET_GPR_U32(ctx, 31, 0x13484Cu);
    ctx->pc = 0x134848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134844u;
            // 0x134848: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (runtime->hasFunction(0x1354B0u)) {
        auto targetFn = runtime->lookupFunction(0x1354B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13484Cu; }
        if (ctx->pc != 0x13484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001354B0_0x1354b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13484Cu; }
        if (ctx->pc != 0x13484Cu) { return; }
    }
    ctx->pc = 0x13484Cu;
label_13484c:
    // 0x13484c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x13484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_134850:
    // 0x134850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_134854:
    // 0x134854: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x134854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_134858:
    // 0x134858: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x134858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_13485c:
    // 0x13485c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_134860:
    // 0x134860: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_134864:
    if (ctx->pc == 0x134864u) {
        ctx->pc = 0x134864u;
            // 0x134864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x134868u;
        goto label_134868;
    }
    ctx->pc = 0x134860u;
    {
        const bool branch_taken_0x134860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134860) {
            ctx->pc = 0x134864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134860u;
            // 0x134864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1348F0u;
            goto label_1348f0;
        }
    }
    ctx->pc = 0x134868u;
label_134868:
    // 0x134868: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x134868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_13486c:
    // 0x13486c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_134870:
    if (ctx->pc == 0x134870u) {
        ctx->pc = 0x134870u;
            // 0x134870: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x134874u;
        goto label_134874;
    }
    ctx->pc = 0x13486Cu;
    {
        const bool branch_taken_0x13486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13486c) {
            ctx->pc = 0x134870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13486Cu;
            // 0x134870: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134884u;
            goto label_134884;
        }
    }
    ctx->pc = 0x134874u;
label_134874:
    // 0x134874: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x134874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_134878:
    // 0x134878: 0xc04cee8  jal         func_133BA0
label_13487c:
    if (ctx->pc == 0x13487Cu) {
        ctx->pc = 0x13487Cu;
            // 0x13487c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134880u;
        goto label_134880;
    }
    ctx->pc = 0x134878u;
    SET_GPR_U32(ctx, 31, 0x134880u);
    ctx->pc = 0x13487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134878u;
            // 0x13487c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134880u; }
        if (ctx->pc != 0x134880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134880u; }
        if (ctx->pc != 0x134880u) { return; }
    }
    ctx->pc = 0x134880u;
label_134880:
    // 0x134880: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x134880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_134884:
    // 0x134884: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_134888:
    // 0x134888: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x134888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_13488c:
    // 0x13488c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_134890:
    // 0x134890: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_134894:
    if (ctx->pc == 0x134894u) {
        ctx->pc = 0x134894u;
            // 0x134894: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x134898u;
        goto label_134898;
    }
    ctx->pc = 0x134890u;
    {
        const bool branch_taken_0x134890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134890) {
            ctx->pc = 0x134894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134890u;
            // 0x134894: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1348A8u;
            goto label_1348a8;
        }
    }
    ctx->pc = 0x134898u;
label_134898:
    // 0x134898: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x134898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13489c:
    // 0x13489c: 0xc04d78c  jal         func_135E30
label_1348a0:
    if (ctx->pc == 0x1348A0u) {
        ctx->pc = 0x1348A0u;
            // 0x1348a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1348A4u;
        goto label_1348a4;
    }
    ctx->pc = 0x13489Cu;
    SET_GPR_U32(ctx, 31, 0x1348A4u);
    ctx->pc = 0x1348A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13489Cu;
            // 0x1348a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348A4u; }
        if (ctx->pc != 0x1348A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348A4u; }
        if (ctx->pc != 0x1348A4u) { return; }
    }
    ctx->pc = 0x1348A4u;
label_1348a4:
    // 0x1348a4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1348a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1348a8:
    // 0x1348a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1348a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1348ac:
    // 0x1348ac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1348acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1348b0:
    // 0x1348b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1348b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1348b4:
    // 0x1348b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1348b8:
    if (ctx->pc == 0x1348B8u) {
        ctx->pc = 0x1348B8u;
            // 0x1348b8: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x1348BCu;
        goto label_1348bc;
    }
    ctx->pc = 0x1348B4u;
    {
        const bool branch_taken_0x1348b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348b4) {
            ctx->pc = 0x1348B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1348B4u;
            // 0x1348b8: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1348CCu;
            goto label_1348cc;
        }
    }
    ctx->pc = 0x1348BCu;
label_1348bc:
    // 0x1348bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1348bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1348c0:
    // 0x1348c0: 0xc04d78c  jal         func_135E30
label_1348c4:
    if (ctx->pc == 0x1348C4u) {
        ctx->pc = 0x1348C4u;
            // 0x1348c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1348C8u;
        goto label_1348c8;
    }
    ctx->pc = 0x1348C0u;
    SET_GPR_U32(ctx, 31, 0x1348C8u);
    ctx->pc = 0x1348C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1348C0u;
            // 0x1348c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348C8u; }
        if (ctx->pc != 0x1348C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348C8u; }
        if (ctx->pc != 0x1348C8u) { return; }
    }
    ctx->pc = 0x1348C8u;
label_1348c8:
    // 0x1348c8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1348c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1348cc:
    // 0x1348cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1348ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1348d0:
    // 0x1348d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1348d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1348d4:
    // 0x1348d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1348d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1348d8:
    // 0x1348d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1348dc:
    if (ctx->pc == 0x1348DCu) {
        ctx->pc = 0x1348E0u;
        goto label_1348e0;
    }
    ctx->pc = 0x1348D8u;
    {
        const bool branch_taken_0x1348d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348d8) {
            ctx->pc = 0x1348ECu;
            goto label_1348ec;
        }
    }
    ctx->pc = 0x1348E0u;
label_1348e0:
    // 0x1348e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1348e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1348e4:
    // 0x1348e4: 0xc04d78c  jal         func_135E30
label_1348e8:
    if (ctx->pc == 0x1348E8u) {
        ctx->pc = 0x1348E8u;
            // 0x1348e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1348ECu;
        goto label_1348ec;
    }
    ctx->pc = 0x1348E4u;
    SET_GPR_U32(ctx, 31, 0x1348ECu);
    ctx->pc = 0x1348E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1348E4u;
            // 0x1348e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348ECu; }
        if (ctx->pc != 0x1348ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348ECu; }
        if (ctx->pc != 0x1348ECu) { return; }
    }
    ctx->pc = 0x1348ECu;
label_1348ec:
    // 0x1348ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1348ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1348f0:
    // 0x1348f0: 0x56e20024  bnel        $s7, $v0, . + 4 + (0x24 << 2)
label_1348f4:
    if (ctx->pc == 0x1348F4u) {
        ctx->pc = 0x1348F4u;
            // 0x1348f4: 0x32e20002  andi        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1348F8u;
        goto label_1348f8;
    }
    ctx->pc = 0x1348F0u;
    {
        const bool branch_taken_0x1348f0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x1348f0) {
            ctx->pc = 0x1348F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1348F0u;
            // 0x1348f4: 0x32e20002  andi        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x134984u;
            goto label_134984;
        }
    }
    ctx->pc = 0x1348F8u;
label_1348f8:
    // 0x1348f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1348f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1348fc:
    // 0x1348fc: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1348fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_134900:
    // 0x134900: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
label_134904:
    if (ctx->pc == 0x134904u) {
        ctx->pc = 0x134904u;
            // 0x134904: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->pc = 0x134908u;
        goto label_134908;
    }
    ctx->pc = 0x134900u;
    {
        const bool branch_taken_0x134900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x134900) {
            ctx->pc = 0x134904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134900u;
            // 0x134904: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134954u;
            goto label_134954;
        }
    }
    ctx->pc = 0x134908u;
label_134908:
    // 0x134908: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x134908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_13490c:
    // 0x13490c: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_134910:
    if (ctx->pc == 0x134910u) {
        ctx->pc = 0x134910u;
            // 0x134910: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->pc = 0x134914u;
        goto label_134914;
    }
    ctx->pc = 0x13490Cu;
    {
        const bool branch_taken_0x13490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13490c) {
            ctx->pc = 0x134910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13490Cu;
            // 0x134910: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13493Cu;
            goto label_13493c;
        }
    }
    ctx->pc = 0x134914u;
label_134914:
    // 0x134914: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_134918:
    if (ctx->pc == 0x134918u) {
        ctx->pc = 0x134918u;
            // 0x134918: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->pc = 0x13491Cu;
        goto label_13491c;
    }
    ctx->pc = 0x134914u;
    {
        const bool branch_taken_0x134914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134914) {
            ctx->pc = 0x134918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134914u;
            // 0x134918: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134924u;
            goto label_134924;
        }
    }
    ctx->pc = 0x13491Cu;
label_13491c:
    // 0x13491c: 0x10000013  b           . + 4 + (0x13 << 2)
label_134920:
    if (ctx->pc == 0x134920u) {
        ctx->pc = 0x134920u;
            // 0x134920: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->pc = 0x134924u;
        goto label_134924;
    }
    ctx->pc = 0x13491Cu;
    {
        const bool branch_taken_0x13491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13491Cu;
            // 0x134920: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13491c) {
            ctx->pc = 0x13496Cu;
            goto label_13496c;
        }
    }
    ctx->pc = 0x134924u;
label_134924:
    // 0x134924: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x134924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_134928:
    // 0x134928: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x134928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_13492c:
    // 0x13492c: 0xc04d384  jal         func_134E10
label_134930:
    if (ctx->pc == 0x134930u) {
        ctx->pc = 0x134930u;
            // 0x134930: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134934u;
        goto label_134934;
    }
    ctx->pc = 0x13492Cu;
    SET_GPR_U32(ctx, 31, 0x134934u);
    ctx->pc = 0x134930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13492Cu;
            // 0x134930: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134934u; }
        if (ctx->pc != 0x134934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134934u; }
        if (ctx->pc != 0x134934u) { return; }
    }
    ctx->pc = 0x134934u;
label_134934:
    // 0x134934: 0x1000001a  b           . + 4 + (0x1A << 2)
label_134938:
    if (ctx->pc == 0x134938u) {
        ctx->pc = 0x134938u;
            // 0x134938: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x13493Cu;
        goto label_13493c;
    }
    ctx->pc = 0x134934u;
    {
        const bool branch_taken_0x134934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134934u;
            // 0x134938: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134934) {
            ctx->pc = 0x1349A0u;
            goto label_1349a0;
        }
    }
    ctx->pc = 0x13493Cu;
label_13493c:
    // 0x13493c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_134940:
    // 0x134940: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x134940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_134944:
    // 0x134944: 0xc04d3f4  jal         func_134FD0
label_134948:
    if (ctx->pc == 0x134948u) {
        ctx->pc = 0x134948u;
            // 0x134948: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13494Cu;
        goto label_13494c;
    }
    ctx->pc = 0x134944u;
    SET_GPR_U32(ctx, 31, 0x13494Cu);
    ctx->pc = 0x134948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134944u;
            // 0x134948: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FD0u;
    if (runtime->hasFunction(0x134FD0u)) {
        auto targetFn = runtime->lookupFunction(0x134FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13494Cu; }
        if (ctx->pc != 0x13494Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FD0_0x134fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13494Cu; }
        if (ctx->pc != 0x13494Cu) { return; }
    }
    ctx->pc = 0x13494Cu;
label_13494c:
    // 0x13494c: 0x10000013  b           . + 4 + (0x13 << 2)
label_134950:
    if (ctx->pc == 0x134950u) {
        ctx->pc = 0x134954u;
        goto label_134954;
    }
    ctx->pc = 0x13494Cu;
    {
        const bool branch_taken_0x13494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13494c) {
            ctx->pc = 0x13499Cu;
            goto label_13499c;
        }
    }
    ctx->pc = 0x134954u;
label_134954:
    // 0x134954: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x134954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_134958:
    // 0x134958: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x134958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_13495c:
    // 0x13495c: 0xc04d464  jal         func_135190
label_134960:
    if (ctx->pc == 0x134960u) {
        ctx->pc = 0x134960u;
            // 0x134960: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134964u;
        goto label_134964;
    }
    ctx->pc = 0x13495Cu;
    SET_GPR_U32(ctx, 31, 0x134964u);
    ctx->pc = 0x134960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13495Cu;
            // 0x134960: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135190u;
    if (runtime->hasFunction(0x135190u)) {
        auto targetFn = runtime->lookupFunction(0x135190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134964u; }
        if (ctx->pc != 0x134964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135190_0x135190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134964u; }
        if (ctx->pc != 0x134964u) { return; }
    }
    ctx->pc = 0x134964u;
label_134964:
    // 0x134964: 0x1000000d  b           . + 4 + (0xD << 2)
label_134968:
    if (ctx->pc == 0x134968u) {
        ctx->pc = 0x13496Cu;
        goto label_13496c;
    }
    ctx->pc = 0x134964u;
    {
        const bool branch_taken_0x134964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134964) {
            ctx->pc = 0x13499Cu;
            goto label_13499c;
        }
    }
    ctx->pc = 0x13496Cu;
label_13496c:
    // 0x13496c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x13496cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_134970:
    // 0x134970: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x134970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_134974:
    // 0x134974: 0xc04d384  jal         func_134E10
label_134978:
    if (ctx->pc == 0x134978u) {
        ctx->pc = 0x134978u;
            // 0x134978: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13497Cu;
        goto label_13497c;
    }
    ctx->pc = 0x134974u;
    SET_GPR_U32(ctx, 31, 0x13497Cu);
    ctx->pc = 0x134978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134974u;
            // 0x134978: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13497Cu; }
        if (ctx->pc != 0x13497Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13497Cu; }
        if (ctx->pc != 0x13497Cu) { return; }
    }
    ctx->pc = 0x13497Cu;
label_13497c:
    // 0x13497c: 0x10000007  b           . + 4 + (0x7 << 2)
label_134980:
    if (ctx->pc == 0x134980u) {
        ctx->pc = 0x134984u;
        goto label_134984;
    }
    ctx->pc = 0x13497Cu;
    {
        const bool branch_taken_0x13497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13497c) {
            ctx->pc = 0x13499Cu;
            goto label_13499c;
        }
    }
    ctx->pc = 0x134984u;
label_134984:
    // 0x134984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_134988:
    if (ctx->pc == 0x134988u) {
        ctx->pc = 0x13498Cu;
        goto label_13498c;
    }
    ctx->pc = 0x134984u;
    {
        const bool branch_taken_0x134984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134984) {
            ctx->pc = 0x13499Cu;
            goto label_13499c;
        }
    }
    ctx->pc = 0x13498Cu;
label_13498c:
    // 0x13498c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_134990:
    // 0x134990: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x134990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_134994:
    // 0x134994: 0xc04cd80  jal         func_133600
label_134998:
    if (ctx->pc == 0x134998u) {
        ctx->pc = 0x134998u;
            // 0x134998: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x13499Cu;
        goto label_13499c;
    }
    ctx->pc = 0x134994u;
    SET_GPR_U32(ctx, 31, 0x13499Cu);
    ctx->pc = 0x134998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134994u;
            // 0x134998: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13499Cu; }
        if (ctx->pc != 0x13499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13499Cu; }
        if (ctx->pc != 0x13499Cu) { return; }
    }
    ctx->pc = 0x13499Cu;
label_13499c:
    // 0x13499c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1349a0:
    // 0x1349a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1349a4:
    // 0x1349a4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_1349a8:
    if (ctx->pc == 0x1349A8u) {
        ctx->pc = 0x1349A8u;
            // 0x1349a8: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->pc = 0x1349ACu;
        goto label_1349ac;
    }
    ctx->pc = 0x1349A4u;
    {
        const bool branch_taken_0x1349a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1349a4) {
            ctx->pc = 0x1349A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1349A4u;
            // 0x1349a8: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1349C4u;
            goto label_1349c4;
        }
    }
    ctx->pc = 0x1349ACu;
label_1349ac:
    // 0x1349ac: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x1349acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1349b0:
    // 0x1349b0: 0xc7ad0134  lwc1        $f13, 0x134($sp)
    ctx->pc = 0x1349b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1349b4:
    // 0x1349b4: 0xc7ae0138  lwc1        $f14, 0x138($sp)
    ctx->pc = 0x1349b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1349b8:
    // 0x1349b8: 0xc04d5a4  jal         func_135690
label_1349bc:
    if (ctx->pc == 0x1349BCu) {
        ctx->pc = 0x1349BCu;
            // 0x1349bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1349C0u;
        goto label_1349c0;
    }
    ctx->pc = 0x1349B8u;
    SET_GPR_U32(ctx, 31, 0x1349C0u);
    ctx->pc = 0x1349BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1349B8u;
            // 0x1349bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135690u;
    if (runtime->hasFunction(0x135690u)) {
        auto targetFn = runtime->lookupFunction(0x135690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1349C0u; }
        if (ctx->pc != 0x1349C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135690_0x135690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1349C0u; }
        if (ctx->pc != 0x1349C0u) { return; }
    }
    ctx->pc = 0x1349C0u;
label_1349c0:
    // 0x1349c0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1349c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1349c4:
    // 0x1349c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1349c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1349c8:
    // 0x1349c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1349c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1349cc:
    // 0x1349cc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1349ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1349d0:
    // 0x1349d0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1349d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1349d4:
    // 0x1349d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1349d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1349d8:
    // 0x1349d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1349d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1349dc:
    // 0x1349dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1349dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1349e0:
    // 0x1349e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1349e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1349e4:
    // 0x1349e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1349e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1349e8:
    // 0x1349e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1349e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1349ec:
    // 0x1349ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1349ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1349f0:
    // 0x1349f0: 0x3e00008  jr          $ra
label_1349f4:
    if (ctx->pc == 0x1349F4u) {
        ctx->pc = 0x1349F4u;
            // 0x1349f4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x1349F8u;
        goto label_1349f8;
    }
    ctx->pc = 0x1349F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1349F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349F0u;
            // 0x1349f4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1349F8u;
label_1349f8:
    // 0x1349f8: 0x0  nop
    ctx->pc = 0x1349f8u;
    // NOP
label_1349fc:
    // 0x1349fc: 0x0  nop
    ctx->pc = 0x1349fcu;
    // NOP
}
