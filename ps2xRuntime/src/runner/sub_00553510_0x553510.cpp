#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00553510
// Address: 0x553510 - 0x553900
void sub_00553510_0x553510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00553510_0x553510");
#endif

    switch (ctx->pc) {
        case 0x553510u: goto label_553510;
        case 0x553514u: goto label_553514;
        case 0x553518u: goto label_553518;
        case 0x55351cu: goto label_55351c;
        case 0x553520u: goto label_553520;
        case 0x553524u: goto label_553524;
        case 0x553528u: goto label_553528;
        case 0x55352cu: goto label_55352c;
        case 0x553530u: goto label_553530;
        case 0x553534u: goto label_553534;
        case 0x553538u: goto label_553538;
        case 0x55353cu: goto label_55353c;
        case 0x553540u: goto label_553540;
        case 0x553544u: goto label_553544;
        case 0x553548u: goto label_553548;
        case 0x55354cu: goto label_55354c;
        case 0x553550u: goto label_553550;
        case 0x553554u: goto label_553554;
        case 0x553558u: goto label_553558;
        case 0x55355cu: goto label_55355c;
        case 0x553560u: goto label_553560;
        case 0x553564u: goto label_553564;
        case 0x553568u: goto label_553568;
        case 0x55356cu: goto label_55356c;
        case 0x553570u: goto label_553570;
        case 0x553574u: goto label_553574;
        case 0x553578u: goto label_553578;
        case 0x55357cu: goto label_55357c;
        case 0x553580u: goto label_553580;
        case 0x553584u: goto label_553584;
        case 0x553588u: goto label_553588;
        case 0x55358cu: goto label_55358c;
        case 0x553590u: goto label_553590;
        case 0x553594u: goto label_553594;
        case 0x553598u: goto label_553598;
        case 0x55359cu: goto label_55359c;
        case 0x5535a0u: goto label_5535a0;
        case 0x5535a4u: goto label_5535a4;
        case 0x5535a8u: goto label_5535a8;
        case 0x5535acu: goto label_5535ac;
        case 0x5535b0u: goto label_5535b0;
        case 0x5535b4u: goto label_5535b4;
        case 0x5535b8u: goto label_5535b8;
        case 0x5535bcu: goto label_5535bc;
        case 0x5535c0u: goto label_5535c0;
        case 0x5535c4u: goto label_5535c4;
        case 0x5535c8u: goto label_5535c8;
        case 0x5535ccu: goto label_5535cc;
        case 0x5535d0u: goto label_5535d0;
        case 0x5535d4u: goto label_5535d4;
        case 0x5535d8u: goto label_5535d8;
        case 0x5535dcu: goto label_5535dc;
        case 0x5535e0u: goto label_5535e0;
        case 0x5535e4u: goto label_5535e4;
        case 0x5535e8u: goto label_5535e8;
        case 0x5535ecu: goto label_5535ec;
        case 0x5535f0u: goto label_5535f0;
        case 0x5535f4u: goto label_5535f4;
        case 0x5535f8u: goto label_5535f8;
        case 0x5535fcu: goto label_5535fc;
        case 0x553600u: goto label_553600;
        case 0x553604u: goto label_553604;
        case 0x553608u: goto label_553608;
        case 0x55360cu: goto label_55360c;
        case 0x553610u: goto label_553610;
        case 0x553614u: goto label_553614;
        case 0x553618u: goto label_553618;
        case 0x55361cu: goto label_55361c;
        case 0x553620u: goto label_553620;
        case 0x553624u: goto label_553624;
        case 0x553628u: goto label_553628;
        case 0x55362cu: goto label_55362c;
        case 0x553630u: goto label_553630;
        case 0x553634u: goto label_553634;
        case 0x553638u: goto label_553638;
        case 0x55363cu: goto label_55363c;
        case 0x553640u: goto label_553640;
        case 0x553644u: goto label_553644;
        case 0x553648u: goto label_553648;
        case 0x55364cu: goto label_55364c;
        case 0x553650u: goto label_553650;
        case 0x553654u: goto label_553654;
        case 0x553658u: goto label_553658;
        case 0x55365cu: goto label_55365c;
        case 0x553660u: goto label_553660;
        case 0x553664u: goto label_553664;
        case 0x553668u: goto label_553668;
        case 0x55366cu: goto label_55366c;
        case 0x553670u: goto label_553670;
        case 0x553674u: goto label_553674;
        case 0x553678u: goto label_553678;
        case 0x55367cu: goto label_55367c;
        case 0x553680u: goto label_553680;
        case 0x553684u: goto label_553684;
        case 0x553688u: goto label_553688;
        case 0x55368cu: goto label_55368c;
        case 0x553690u: goto label_553690;
        case 0x553694u: goto label_553694;
        case 0x553698u: goto label_553698;
        case 0x55369cu: goto label_55369c;
        case 0x5536a0u: goto label_5536a0;
        case 0x5536a4u: goto label_5536a4;
        case 0x5536a8u: goto label_5536a8;
        case 0x5536acu: goto label_5536ac;
        case 0x5536b0u: goto label_5536b0;
        case 0x5536b4u: goto label_5536b4;
        case 0x5536b8u: goto label_5536b8;
        case 0x5536bcu: goto label_5536bc;
        case 0x5536c0u: goto label_5536c0;
        case 0x5536c4u: goto label_5536c4;
        case 0x5536c8u: goto label_5536c8;
        case 0x5536ccu: goto label_5536cc;
        case 0x5536d0u: goto label_5536d0;
        case 0x5536d4u: goto label_5536d4;
        case 0x5536d8u: goto label_5536d8;
        case 0x5536dcu: goto label_5536dc;
        case 0x5536e0u: goto label_5536e0;
        case 0x5536e4u: goto label_5536e4;
        case 0x5536e8u: goto label_5536e8;
        case 0x5536ecu: goto label_5536ec;
        case 0x5536f0u: goto label_5536f0;
        case 0x5536f4u: goto label_5536f4;
        case 0x5536f8u: goto label_5536f8;
        case 0x5536fcu: goto label_5536fc;
        case 0x553700u: goto label_553700;
        case 0x553704u: goto label_553704;
        case 0x553708u: goto label_553708;
        case 0x55370cu: goto label_55370c;
        case 0x553710u: goto label_553710;
        case 0x553714u: goto label_553714;
        case 0x553718u: goto label_553718;
        case 0x55371cu: goto label_55371c;
        case 0x553720u: goto label_553720;
        case 0x553724u: goto label_553724;
        case 0x553728u: goto label_553728;
        case 0x55372cu: goto label_55372c;
        case 0x553730u: goto label_553730;
        case 0x553734u: goto label_553734;
        case 0x553738u: goto label_553738;
        case 0x55373cu: goto label_55373c;
        case 0x553740u: goto label_553740;
        case 0x553744u: goto label_553744;
        case 0x553748u: goto label_553748;
        case 0x55374cu: goto label_55374c;
        case 0x553750u: goto label_553750;
        case 0x553754u: goto label_553754;
        case 0x553758u: goto label_553758;
        case 0x55375cu: goto label_55375c;
        case 0x553760u: goto label_553760;
        case 0x553764u: goto label_553764;
        case 0x553768u: goto label_553768;
        case 0x55376cu: goto label_55376c;
        case 0x553770u: goto label_553770;
        case 0x553774u: goto label_553774;
        case 0x553778u: goto label_553778;
        case 0x55377cu: goto label_55377c;
        case 0x553780u: goto label_553780;
        case 0x553784u: goto label_553784;
        case 0x553788u: goto label_553788;
        case 0x55378cu: goto label_55378c;
        case 0x553790u: goto label_553790;
        case 0x553794u: goto label_553794;
        case 0x553798u: goto label_553798;
        case 0x55379cu: goto label_55379c;
        case 0x5537a0u: goto label_5537a0;
        case 0x5537a4u: goto label_5537a4;
        case 0x5537a8u: goto label_5537a8;
        case 0x5537acu: goto label_5537ac;
        case 0x5537b0u: goto label_5537b0;
        case 0x5537b4u: goto label_5537b4;
        case 0x5537b8u: goto label_5537b8;
        case 0x5537bcu: goto label_5537bc;
        case 0x5537c0u: goto label_5537c0;
        case 0x5537c4u: goto label_5537c4;
        case 0x5537c8u: goto label_5537c8;
        case 0x5537ccu: goto label_5537cc;
        case 0x5537d0u: goto label_5537d0;
        case 0x5537d4u: goto label_5537d4;
        case 0x5537d8u: goto label_5537d8;
        case 0x5537dcu: goto label_5537dc;
        case 0x5537e0u: goto label_5537e0;
        case 0x5537e4u: goto label_5537e4;
        case 0x5537e8u: goto label_5537e8;
        case 0x5537ecu: goto label_5537ec;
        case 0x5537f0u: goto label_5537f0;
        case 0x5537f4u: goto label_5537f4;
        case 0x5537f8u: goto label_5537f8;
        case 0x5537fcu: goto label_5537fc;
        case 0x553800u: goto label_553800;
        case 0x553804u: goto label_553804;
        case 0x553808u: goto label_553808;
        case 0x55380cu: goto label_55380c;
        case 0x553810u: goto label_553810;
        case 0x553814u: goto label_553814;
        case 0x553818u: goto label_553818;
        case 0x55381cu: goto label_55381c;
        case 0x553820u: goto label_553820;
        case 0x553824u: goto label_553824;
        case 0x553828u: goto label_553828;
        case 0x55382cu: goto label_55382c;
        case 0x553830u: goto label_553830;
        case 0x553834u: goto label_553834;
        case 0x553838u: goto label_553838;
        case 0x55383cu: goto label_55383c;
        case 0x553840u: goto label_553840;
        case 0x553844u: goto label_553844;
        case 0x553848u: goto label_553848;
        case 0x55384cu: goto label_55384c;
        case 0x553850u: goto label_553850;
        case 0x553854u: goto label_553854;
        case 0x553858u: goto label_553858;
        case 0x55385cu: goto label_55385c;
        case 0x553860u: goto label_553860;
        case 0x553864u: goto label_553864;
        case 0x553868u: goto label_553868;
        case 0x55386cu: goto label_55386c;
        case 0x553870u: goto label_553870;
        case 0x553874u: goto label_553874;
        case 0x553878u: goto label_553878;
        case 0x55387cu: goto label_55387c;
        case 0x553880u: goto label_553880;
        case 0x553884u: goto label_553884;
        case 0x553888u: goto label_553888;
        case 0x55388cu: goto label_55388c;
        case 0x553890u: goto label_553890;
        case 0x553894u: goto label_553894;
        case 0x553898u: goto label_553898;
        case 0x55389cu: goto label_55389c;
        case 0x5538a0u: goto label_5538a0;
        case 0x5538a4u: goto label_5538a4;
        case 0x5538a8u: goto label_5538a8;
        case 0x5538acu: goto label_5538ac;
        case 0x5538b0u: goto label_5538b0;
        case 0x5538b4u: goto label_5538b4;
        case 0x5538b8u: goto label_5538b8;
        case 0x5538bcu: goto label_5538bc;
        case 0x5538c0u: goto label_5538c0;
        case 0x5538c4u: goto label_5538c4;
        case 0x5538c8u: goto label_5538c8;
        case 0x5538ccu: goto label_5538cc;
        case 0x5538d0u: goto label_5538d0;
        case 0x5538d4u: goto label_5538d4;
        case 0x5538d8u: goto label_5538d8;
        case 0x5538dcu: goto label_5538dc;
        case 0x5538e0u: goto label_5538e0;
        case 0x5538e4u: goto label_5538e4;
        case 0x5538e8u: goto label_5538e8;
        case 0x5538ecu: goto label_5538ec;
        case 0x5538f0u: goto label_5538f0;
        case 0x5538f4u: goto label_5538f4;
        case 0x5538f8u: goto label_5538f8;
        case 0x5538fcu: goto label_5538fc;
        default: break;
    }

    ctx->pc = 0x553510u;

label_553510:
    // 0x553510: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x553510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_553514:
    // 0x553514: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x553514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_553518:
    // 0x553518: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x553518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_55351c:
    // 0x55351c: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x55351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
label_553520:
    // 0x553520: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x553520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_553524:
    // 0x553524: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x553524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_553528:
    // 0x553528: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x553528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_55352c:
    // 0x55352c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x55352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_553530:
    // 0x553530: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x553530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_553534:
    // 0x553534: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x553534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_553538:
    // 0x553538: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x553538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_55353c:
    // 0x55353c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x55353cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_553540:
    // 0x553540: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x553540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_553544:
    // 0x553544: 0x641200ff  daddiu      $s2, $zero, 0xFF
    ctx->pc = 0x553544u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_553548:
    // 0x553548: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x553548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_55354c:
    // 0x55354c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x55354cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_553550:
    // 0x553550: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x553550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_553554:
    // 0x553554: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x553554u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_553558:
    // 0x553558: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_55355c:
    // 0x55355c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55355cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_553560:
    // 0x553560: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x553560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_553564:
    // 0x553564: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x553564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_553568:
    // 0x553568: 0x9451dc20  lhu         $s1, -0x23E0($v0)
    ctx->pc = 0x553568u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958112)));
label_55356c:
    // 0x55356c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x55356cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_553570:
    // 0x553570: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_553574:
    // 0x553574: 0x9450dc22  lhu         $s0, -0x23DE($v0)
    ctx->pc = 0x553574u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958114)));
label_553578:
    // 0x553578: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_55357c:
    // 0x55357c: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x55357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_553580:
    // 0x553580: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x553580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_553584:
    // 0x553584: 0x90820082  lbu         $v0, 0x82($a0)
    ctx->pc = 0x553584u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
label_553588:
    // 0x553588: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x553588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
label_55358c:
    // 0x55358c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_553590:
    if (ctx->pc == 0x553590u) {
        ctx->pc = 0x553590u;
            // 0x553590: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x553594u;
        goto label_553594;
    }
    ctx->pc = 0x55358Cu;
    {
        const bool branch_taken_0x55358c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x553590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55358Cu;
            // 0x553590: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55358c) {
            ctx->pc = 0x553598u;
            goto label_553598;
        }
    }
    ctx->pc = 0x553594u;
label_553594:
    // 0x553594: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x553594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_553598:
    // 0x553598: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x553598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_55359c:
    // 0x55359c: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x55359cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_5535a0:
    // 0x5535a0: 0xc0506ac  jal         func_141AB0
label_5535a4:
    if (ctx->pc == 0x5535A4u) {
        ctx->pc = 0x5535A4u;
            // 0x5535a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5535A8u;
        goto label_5535a8;
    }
    ctx->pc = 0x5535A0u;
    SET_GPR_U32(ctx, 31, 0x5535A8u);
    ctx->pc = 0x5535A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5535A0u;
            // 0x5535a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5535A8u; }
        if (ctx->pc != 0x5535A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5535A8u; }
        if (ctx->pc != 0x5535A8u) { return; }
    }
    ctx->pc = 0x5535A8u;
label_5535a8:
    // 0x5535a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5535a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5535ac:
    // 0x5535ac: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5535acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5535b0:
    // 0x5535b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5535b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5535b4:
    // 0x5535b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5535b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5535b8:
    // 0x5535b8: 0x320f809  jalr        $t9
label_5535bc:
    if (ctx->pc == 0x5535BCu) {
        ctx->pc = 0x5535BCu;
            // 0x5535bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5535C0u;
        goto label_5535c0;
    }
    ctx->pc = 0x5535B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5535C0u);
        ctx->pc = 0x5535BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5535B8u;
            // 0x5535bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5535C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5535C0u; }
            if (ctx->pc != 0x5535C0u) { return; }
        }
        }
    }
    ctx->pc = 0x5535C0u;
label_5535c0:
    // 0x5535c0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x5535c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_5535c4:
    // 0x5535c4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x5535c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_5535c8:
    // 0x5535c8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x5535c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_5535cc:
    // 0x5535cc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x5535ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5535d0:
    // 0x5535d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5535d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5535d4:
    // 0x5535d4: 0x2442de80  addiu       $v0, $v0, -0x2180
    ctx->pc = 0x5535d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
label_5535d8:
    // 0x5535d8: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x5535d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5535dc:
    // 0x5535dc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x5535dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_5535e0:
    // 0x5535e0: 0x26e3000a  addiu       $v1, $s7, 0xA
    ctx->pc = 0x5535e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 10));
label_5535e4:
    // 0x5535e4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x5535e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5535e8:
    // 0x5535e8: 0x8444002c  lh          $a0, 0x2C($v0)
    ctx->pc = 0x5535e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_5535ec:
    // 0x5535ec: 0x8443002e  lh          $v1, 0x2E($v0)
    ctx->pc = 0x5535ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_5535f0:
    // 0x5535f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5535f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5535f4:
    // 0x5535f4: 0x0  nop
    ctx->pc = 0x5535f4u;
    // NOP
label_5535f8:
    // 0x5535f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5535f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5535fc:
    // 0x5535fc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x5535fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_553600:
    // 0x553600: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x553600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_553604:
    // 0x553604: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x553604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_553608:
    // 0x553608: 0x4600c300  add.s       $f12, $f24, $f0
    ctx->pc = 0x553608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_55360c:
    // 0x55360c: 0x84420032  lh          $v0, 0x32($v0)
    ctx->pc = 0x55360cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_553610:
    // 0x553610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553614:
    // 0x553614: 0x0  nop
    ctx->pc = 0x553614u;
    // NOP
label_553618:
    // 0x553618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_55361c:
    // 0x55361c: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x55361cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_553620:
    // 0x553620: 0x4600b840  add.s       $f1, $f23, $f0
    ctx->pc = 0x553620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_553624:
    // 0x553624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x553624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553628:
    // 0x553628: 0x0  nop
    ctx->pc = 0x553628u;
    // NOP
label_55362c:
    // 0x55362c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55362cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553630:
    // 0x553630: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x553630u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_553634:
    // 0x553634: 0xc4b4000c  lwc1        $f20, 0xC($a1)
    ctx->pc = 0x553634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_553638:
    // 0x553638: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_55363c:
    if (ctx->pc == 0x55363Cu) {
        ctx->pc = 0x55363Cu;
            // 0x55363c: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x553640u;
        goto label_553640;
    }
    ctx->pc = 0x553638u;
    {
        const bool branch_taken_0x553638 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x55363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553638u;
            // 0x55363c: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553638) {
            ctx->pc = 0x55364Cu;
            goto label_55364c;
        }
    }
    ctx->pc = 0x553640u;
label_553640:
    // 0x553640: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x553640u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553644:
    // 0x553644: 0x10000008  b           . + 4 + (0x8 << 2)
label_553648:
    if (ctx->pc == 0x553648u) {
        ctx->pc = 0x553648u;
            // 0x553648: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55364Cu;
        goto label_55364c;
    }
    ctx->pc = 0x553644u;
    {
        const bool branch_taken_0x553644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553644u;
            // 0x553648: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553644) {
            ctx->pc = 0x553668u;
            goto label_553668;
        }
    }
    ctx->pc = 0x55364Cu;
label_55364c:
    // 0x55364c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x55364cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_553650:
    // 0x553650: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x553650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_553654:
    // 0x553654: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553658:
    // 0x553658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55365c:
    // 0x55365c: 0x0  nop
    ctx->pc = 0x55365cu;
    // NOP
label_553660:
    // 0x553660: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553664:
    // 0x553664: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553664u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553668:
    // 0x553668: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_55366c:
    if (ctx->pc == 0x55366Cu) {
        ctx->pc = 0x55366Cu;
            // 0x55366c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x553670u;
        goto label_553670;
    }
    ctx->pc = 0x553668u;
    {
        const bool branch_taken_0x553668 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x553668) {
            ctx->pc = 0x55366Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553668u;
            // 0x55366c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55367Cu;
            goto label_55367c;
        }
    }
    ctx->pc = 0x553670u;
label_553670:
    // 0x553670: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x553670u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553674:
    // 0x553674: 0x10000007  b           . + 4 + (0x7 << 2)
label_553678:
    if (ctx->pc == 0x553678u) {
        ctx->pc = 0x553678u;
            // 0x553678: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55367Cu;
        goto label_55367c;
    }
    ctx->pc = 0x553674u;
    {
        const bool branch_taken_0x553674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553674u;
            // 0x553678: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553674) {
            ctx->pc = 0x553694u;
            goto label_553694;
        }
    }
    ctx->pc = 0x55367Cu;
label_55367c:
    // 0x55367c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x55367cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_553680:
    // 0x553680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553684:
    // 0x553684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553688:
    // 0x553688: 0x0  nop
    ctx->pc = 0x553688u;
    // NOP
label_55368c:
    // 0x55368c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55368cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_553690:
    // 0x553690: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x553690u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553694:
    // 0x553694: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x553694u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_553698:
    // 0x553698: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55369c:
    // 0x55369c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55369cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5536a0:
    // 0x5536a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x5536a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5536a4:
    // 0x5536a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5536a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5536a8:
    // 0x5536a8: 0x4614abc0  add.s       $f15, $f21, $f20
    ctx->pc = 0x5536a8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_5536ac:
    // 0x5536ac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5536acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5536b0:
    // 0x5536b0: 0xc0bc284  jal         func_2F0A10
label_5536b4:
    if (ctx->pc == 0x5536B4u) {
        ctx->pc = 0x5536B4u;
            // 0x5536b4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x5536B8u;
        goto label_5536b8;
    }
    ctx->pc = 0x5536B0u;
    SET_GPR_U32(ctx, 31, 0x5536B8u);
    ctx->pc = 0x5536B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5536B0u;
            // 0x5536b4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5536B8u; }
        if (ctx->pc != 0x5536B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5536B8u; }
        if (ctx->pc != 0x5536B8u) { return; }
    }
    ctx->pc = 0x5536B8u;
label_5536b8:
    // 0x5536b8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x5536b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_5536bc:
    // 0x5536bc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x5536bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_5536c0:
    // 0x5536c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5536c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5536c4:
    // 0x5536c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x5536c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5536c8:
    // 0x5536c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x5536c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5536cc:
    // 0x5536cc: 0x245e02f0  addiu       $fp, $v0, 0x2F0
    ctx->pc = 0x5536ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
label_5536d0:
    // 0x5536d0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x5536d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_5536d4:
    // 0x5536d4: 0x34557fff  ori         $s5, $v0, 0x7FFF
    ctx->pc = 0x5536d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_5536d8:
    // 0x5536d8: 0x34437f00  ori         $v1, $v0, 0x7F00
    ctx->pc = 0x5536d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
label_5536dc:
    // 0x5536dc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x5536dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_5536e0:
    // 0x5536e0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x5536e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_5536e4:
    // 0x5536e4: 0x4614105c  madd.s      $f1, $f2, $f20
    ctx->pc = 0x5536e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
label_5536e8:
    // 0x5536e8: 0xc45402f8  lwc1        $f20, 0x2F8($v0)
    ctx->pc = 0x5536e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5536ec:
    // 0x5536ec: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x5536ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_5536f0:
    // 0x5536f0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x5536f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_5536f4:
    // 0x5536f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x5536f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_5536f8:
    // 0x5536f8: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x5536f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_5536fc:
    // 0x5536fc: 0x829825  or          $s3, $a0, $v0
    ctx->pc = 0x5536fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_553700:
    // 0x553700: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x553700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_553704:
    // 0x553704: 0xc44002fc  lwc1        $f0, 0x2FC($v0)
    ctx->pc = 0x553704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_553708:
    // 0x553708: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x553708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_55370c:
    // 0x55370c: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x55370cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_553710:
    // 0x553710: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x553710u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_553714:
    // 0x553714: 0x0  nop
    ctx->pc = 0x553714u;
    // NOP
label_553718:
    // 0x553718: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x553718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_55371c:
    // 0x55371c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x55371cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_553720:
    // 0x553720: 0x84430034  lh          $v1, 0x34($v0)
    ctx->pc = 0x553720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
label_553724:
    // 0x553724: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x553724u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553728:
    // 0x553728: 0x0  nop
    ctx->pc = 0x553728u;
    // NOP
label_55372c:
    // 0x55372c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55372cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553730:
    // 0x553730: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x553730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553734:
    // 0x553734: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x553734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_553738:
    // 0x553738: 0x4600c040  add.s       $f1, $f24, $f0
    ctx->pc = 0x553738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_55373c:
    // 0x55373c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55373cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553740:
    // 0x553740: 0x0  nop
    ctx->pc = 0x553740u;
    // NOP
label_553744:
    // 0x553744: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553748:
    // 0x553748: 0x12e20023  beq         $s7, $v0, . + 4 + (0x23 << 2)
label_55374c:
    if (ctx->pc == 0x55374Cu) {
        ctx->pc = 0x55374Cu;
            // 0x55374c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x553750u;
        goto label_553750;
    }
    ctx->pc = 0x553748u;
    {
        const bool branch_taken_0x553748 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x55374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553748u;
            // 0x55374c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x553748) {
            ctx->pc = 0x5537D8u;
            goto label_5537d8;
        }
    }
    ctx->pc = 0x553750u;
label_553750:
    // 0x553750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x553750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_553754:
    // 0x553754: 0x12e20018  beq         $s7, $v0, . + 4 + (0x18 << 2)
label_553758:
    if (ctx->pc == 0x553758u) {
        ctx->pc = 0x55375Cu;
        goto label_55375c;
    }
    ctx->pc = 0x553754u;
    {
        const bool branch_taken_0x553754 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x553754) {
            ctx->pc = 0x5537B8u;
            goto label_5537b8;
        }
    }
    ctx->pc = 0x55375Cu;
label_55375c:
    // 0x55375c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x55375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_553760:
    // 0x553760: 0x12e2000d  beq         $s7, $v0, . + 4 + (0xD << 2)
label_553764:
    if (ctx->pc == 0x553764u) {
        ctx->pc = 0x553768u;
        goto label_553768;
    }
    ctx->pc = 0x553760u;
    {
        const bool branch_taken_0x553760 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x553760) {
            ctx->pc = 0x553798u;
            goto label_553798;
        }
    }
    ctx->pc = 0x553768u;
label_553768:
    // 0x553768: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_55376c:
    if (ctx->pc == 0x55376Cu) {
        ctx->pc = 0x553770u;
        goto label_553770;
    }
    ctx->pc = 0x553768u;
    {
        const bool branch_taken_0x553768 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x553768) {
            ctx->pc = 0x553778u;
            goto label_553778;
        }
    }
    ctx->pc = 0x553770u;
label_553770:
    // 0x553770: 0x10000021  b           . + 4 + (0x21 << 2)
label_553774:
    if (ctx->pc == 0x553774u) {
        ctx->pc = 0x553778u;
        goto label_553778;
    }
    ctx->pc = 0x553770u;
    {
        const bool branch_taken_0x553770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x553770) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x553778u;
label_553778:
    // 0x553778: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x553778u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_55377c:
    // 0x55377c: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x55377cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_553780:
    // 0x553780: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_553784:
    if (ctx->pc == 0x553784u) {
        ctx->pc = 0x553788u;
        goto label_553788;
    }
    ctx->pc = 0x553780u;
    {
        const bool branch_taken_0x553780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x553780) {
            ctx->pc = 0x553790u;
            goto label_553790;
        }
    }
    ctx->pc = 0x553788u;
label_553788:
    // 0x553788: 0x1000001b  b           . + 4 + (0x1B << 2)
label_55378c:
    if (ctx->pc == 0x55378Cu) {
        ctx->pc = 0x55378Cu;
            // 0x55378c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x553790u;
        goto label_553790;
    }
    ctx->pc = 0x553788u;
    {
        const bool branch_taken_0x553788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553788u;
            // 0x55378c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553788) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x553790u;
label_553790:
    // 0x553790: 0x10000019  b           . + 4 + (0x19 << 2)
label_553794:
    if (ctx->pc == 0x553794u) {
        ctx->pc = 0x553794u;
            // 0x553794: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x553798u;
        goto label_553798;
    }
    ctx->pc = 0x553790u;
    {
        const bool branch_taken_0x553790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553790u;
            // 0x553794: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553790) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x553798u;
label_553798:
    // 0x553798: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x553798u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_55379c:
    // 0x55379c: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x55379cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_5537a0:
    // 0x5537a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5537a4:
    if (ctx->pc == 0x5537A4u) {
        ctx->pc = 0x5537A8u;
        goto label_5537a8;
    }
    ctx->pc = 0x5537A0u;
    {
        const bool branch_taken_0x5537a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5537a0) {
            ctx->pc = 0x5537B0u;
            goto label_5537b0;
        }
    }
    ctx->pc = 0x5537A8u;
label_5537a8:
    // 0x5537a8: 0x10000013  b           . + 4 + (0x13 << 2)
label_5537ac:
    if (ctx->pc == 0x5537ACu) {
        ctx->pc = 0x5537ACu;
            // 0x5537ac: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5537B0u;
        goto label_5537b0;
    }
    ctx->pc = 0x5537A8u;
    {
        const bool branch_taken_0x5537a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5537ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5537A8u;
            // 0x5537ac: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5537a8) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x5537B0u;
label_5537b0:
    // 0x5537b0: 0x10000011  b           . + 4 + (0x11 << 2)
label_5537b4:
    if (ctx->pc == 0x5537B4u) {
        ctx->pc = 0x5537B4u;
            // 0x5537b4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5537B8u;
        goto label_5537b8;
    }
    ctx->pc = 0x5537B0u;
    {
        const bool branch_taken_0x5537b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5537B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5537B0u;
            // 0x5537b4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5537b0) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x5537B8u;
label_5537b8:
    // 0x5537b8: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x5537b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_5537bc:
    // 0x5537bc: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x5537bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_5537c0:
    // 0x5537c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5537c4:
    if (ctx->pc == 0x5537C4u) {
        ctx->pc = 0x5537C8u;
        goto label_5537c8;
    }
    ctx->pc = 0x5537C0u;
    {
        const bool branch_taken_0x5537c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5537c0) {
            ctx->pc = 0x5537D0u;
            goto label_5537d0;
        }
    }
    ctx->pc = 0x5537C8u;
label_5537c8:
    // 0x5537c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_5537cc:
    if (ctx->pc == 0x5537CCu) {
        ctx->pc = 0x5537CCu;
            // 0x5537cc: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5537D0u;
        goto label_5537d0;
    }
    ctx->pc = 0x5537C8u;
    {
        const bool branch_taken_0x5537c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5537CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5537C8u;
            // 0x5537cc: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5537c8) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x5537D0u;
label_5537d0:
    // 0x5537d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_5537d4:
    if (ctx->pc == 0x5537D4u) {
        ctx->pc = 0x5537D4u;
            // 0x5537d4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5537D8u;
        goto label_5537d8;
    }
    ctx->pc = 0x5537D0u;
    {
        const bool branch_taken_0x5537d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5537D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5537D0u;
            // 0x5537d4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5537d0) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x5537D8u;
label_5537d8:
    // 0x5537d8: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x5537d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
label_5537dc:
    // 0x5537dc: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x5537dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_5537e0:
    // 0x5537e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5537e4:
    if (ctx->pc == 0x5537E4u) {
        ctx->pc = 0x5537E8u;
        goto label_5537e8;
    }
    ctx->pc = 0x5537E0u;
    {
        const bool branch_taken_0x5537e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5537e0) {
            ctx->pc = 0x5537F0u;
            goto label_5537f0;
        }
    }
    ctx->pc = 0x5537E8u;
label_5537e8:
    // 0x5537e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_5537ec:
    if (ctx->pc == 0x5537ECu) {
        ctx->pc = 0x5537ECu;
            // 0x5537ec: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5537F0u;
        goto label_5537f0;
    }
    ctx->pc = 0x5537E8u;
    {
        const bool branch_taken_0x5537e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5537ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5537E8u;
            // 0x5537ec: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5537e8) {
            ctx->pc = 0x5537F8u;
            goto label_5537f8;
        }
    }
    ctx->pc = 0x5537F0u;
label_5537f0:
    // 0x5537f0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x5537f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5537f4:
    // 0x5537f4: 0x0  nop
    ctx->pc = 0x5537f4u;
    // NOP
label_5537f8:
    // 0x5537f8: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5537fc:
    if (ctx->pc == 0x5537FCu) {
        ctx->pc = 0x5537FCu;
            // 0x5537fc: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x553800u;
        goto label_553800;
    }
    ctx->pc = 0x5537F8u;
    {
        const bool branch_taken_0x5537f8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5537f8) {
            ctx->pc = 0x5537FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5537F8u;
            // 0x5537fc: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55380Cu;
            goto label_55380c;
        }
    }
    ctx->pc = 0x553800u;
label_553800:
    // 0x553800: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x553800u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553804:
    // 0x553804: 0x10000007  b           . + 4 + (0x7 << 2)
label_553808:
    if (ctx->pc == 0x553808u) {
        ctx->pc = 0x553808u;
            // 0x553808: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55380Cu;
        goto label_55380c;
    }
    ctx->pc = 0x553804u;
    {
        const bool branch_taken_0x553804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553804u;
            // 0x553808: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553804) {
            ctx->pc = 0x553824u;
            goto label_553824;
        }
    }
    ctx->pc = 0x55380Cu;
label_55380c:
    // 0x55380c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_553810:
    // 0x553810: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553814:
    // 0x553814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553818:
    // 0x553818: 0x0  nop
    ctx->pc = 0x553818u;
    // NOP
label_55381c:
    // 0x55381c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55381cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553820:
    // 0x553820: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553820u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553824:
    // 0x553824: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_553828:
    if (ctx->pc == 0x553828u) {
        ctx->pc = 0x553828u;
            // 0x553828: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x55382Cu;
        goto label_55382c;
    }
    ctx->pc = 0x553824u;
    {
        const bool branch_taken_0x553824 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x553824) {
            ctx->pc = 0x553828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553824u;
            // 0x553828: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553838u;
            goto label_553838;
        }
    }
    ctx->pc = 0x55382Cu;
label_55382c:
    // 0x55382c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x55382cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553830:
    // 0x553830: 0x10000007  b           . + 4 + (0x7 << 2)
label_553834:
    if (ctx->pc == 0x553834u) {
        ctx->pc = 0x553834u;
            // 0x553834: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553838u;
        goto label_553838;
    }
    ctx->pc = 0x553830u;
    {
        const bool branch_taken_0x553830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553830u;
            // 0x553834: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553830) {
            ctx->pc = 0x553850u;
            goto label_553850;
        }
    }
    ctx->pc = 0x553838u;
label_553838:
    // 0x553838: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x553838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_55383c:
    // 0x55383c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553840:
    // 0x553840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553844:
    // 0x553844: 0x0  nop
    ctx->pc = 0x553844u;
    // NOP
label_553848:
    // 0x553848: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55384c:
    // 0x55384c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x55384cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553850:
    // 0x553850: 0x46146380  add.s       $f14, $f12, $f20
    ctx->pc = 0x553850u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_553854:
    // 0x553854: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553858:
    // 0x553858: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55385c:
    // 0x55385c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x55385cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_553860:
    // 0x553860: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x553860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_553864:
    // 0x553864: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x553864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_553868:
    // 0x553868: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x553868u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_55386c:
    // 0x55386c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55386cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_553870:
    // 0x553870: 0xc0bc284  jal         func_2F0A10
label_553874:
    if (ctx->pc == 0x553874u) {
        ctx->pc = 0x553874u;
            // 0x553874: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x553878u;
        goto label_553878;
    }
    ctx->pc = 0x553870u;
    SET_GPR_U32(ctx, 31, 0x553878u);
    ctx->pc = 0x553874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553870u;
            // 0x553874: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553878u; }
        if (ctx->pc != 0x553878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553878u; }
        if (ctx->pc != 0x553878u) { return; }
    }
    ctx->pc = 0x553878u;
label_553878:
    // 0x553878: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x553878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_55387c:
    // 0x55387c: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x55387cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_553880:
    // 0x553880: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_553884:
    if (ctx->pc == 0x553884u) {
        ctx->pc = 0x553888u;
        goto label_553888;
    }
    ctx->pc = 0x553880u;
    {
        const bool branch_taken_0x553880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x553880) {
            ctx->pc = 0x553718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_553718;
        }
    }
    ctx->pc = 0x553888u;
label_553888:
    // 0x553888: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x553888u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_55388c:
    // 0x55388c: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x55388cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
label_553890:
    // 0x553890: 0x5440ff53  bnel        $v0, $zero, . + 4 + (-0xAD << 2)
label_553894:
    if (ctx->pc == 0x553894u) {
        ctx->pc = 0x553894u;
            // 0x553894: 0x7ba200d0  lq          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x553898u;
        goto label_553898;
    }
    ctx->pc = 0x553890u;
    {
        const bool branch_taken_0x553890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x553890) {
            ctx->pc = 0x553894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553890u;
            // 0x553894: 0x7ba200d0  lq          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5535E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5535e0;
        }
    }
    ctx->pc = 0x553898u;
label_553898:
    // 0x553898: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x553898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55389c:
    // 0x55389c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x55389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5538a0:
    // 0x5538a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5538a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5538a4:
    // 0x5538a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5538a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5538a8:
    // 0x5538a8: 0x320f809  jalr        $t9
label_5538ac:
    if (ctx->pc == 0x5538ACu) {
        ctx->pc = 0x5538B0u;
        goto label_5538b0;
    }
    ctx->pc = 0x5538A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5538B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5538B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5538B0u; }
            if (ctx->pc != 0x5538B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5538B0u;
label_5538b0:
    // 0x5538b0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x5538b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_5538b4:
    // 0x5538b4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x5538b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_5538b8:
    // 0x5538b8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x5538b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_5538bc:
    // 0x5538bc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x5538bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_5538c0:
    // 0x5538c0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x5538c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_5538c4:
    // 0x5538c4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x5538c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_5538c8:
    // 0x5538c8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x5538c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5538cc:
    // 0x5538cc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5538ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5538d0:
    // 0x5538d0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x5538d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5538d4:
    // 0x5538d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5538d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5538d8:
    // 0x5538d8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x5538d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5538dc:
    // 0x5538dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x5538dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5538e0:
    // 0x5538e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x5538e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5538e4:
    // 0x5538e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x5538e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5538e8:
    // 0x5538e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x5538e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5538ec:
    // 0x5538ec: 0x3e00008  jr          $ra
label_5538f0:
    if (ctx->pc == 0x5538F0u) {
        ctx->pc = 0x5538F0u;
            // 0x5538f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5538F4u;
        goto label_5538f4;
    }
    ctx->pc = 0x5538ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5538F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5538ECu;
            // 0x5538f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5538F4u;
label_5538f4:
    // 0x5538f4: 0x0  nop
    ctx->pc = 0x5538f4u;
    // NOP
label_5538f8:
    // 0x5538f8: 0x0  nop
    ctx->pc = 0x5538f8u;
    // NOP
label_5538fc:
    // 0x5538fc: 0x0  nop
    ctx->pc = 0x5538fcu;
    // NOP
}
