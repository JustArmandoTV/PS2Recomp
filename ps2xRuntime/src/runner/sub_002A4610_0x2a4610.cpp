#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4610
// Address: 0x2a4610 - 0x2a4b20
void sub_002A4610_0x2a4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4610_0x2a4610");
#endif

    switch (ctx->pc) {
        case 0x2a4610u: goto label_2a4610;
        case 0x2a4614u: goto label_2a4614;
        case 0x2a4618u: goto label_2a4618;
        case 0x2a461cu: goto label_2a461c;
        case 0x2a4620u: goto label_2a4620;
        case 0x2a4624u: goto label_2a4624;
        case 0x2a4628u: goto label_2a4628;
        case 0x2a462cu: goto label_2a462c;
        case 0x2a4630u: goto label_2a4630;
        case 0x2a4634u: goto label_2a4634;
        case 0x2a4638u: goto label_2a4638;
        case 0x2a463cu: goto label_2a463c;
        case 0x2a4640u: goto label_2a4640;
        case 0x2a4644u: goto label_2a4644;
        case 0x2a4648u: goto label_2a4648;
        case 0x2a464cu: goto label_2a464c;
        case 0x2a4650u: goto label_2a4650;
        case 0x2a4654u: goto label_2a4654;
        case 0x2a4658u: goto label_2a4658;
        case 0x2a465cu: goto label_2a465c;
        case 0x2a4660u: goto label_2a4660;
        case 0x2a4664u: goto label_2a4664;
        case 0x2a4668u: goto label_2a4668;
        case 0x2a466cu: goto label_2a466c;
        case 0x2a4670u: goto label_2a4670;
        case 0x2a4674u: goto label_2a4674;
        case 0x2a4678u: goto label_2a4678;
        case 0x2a467cu: goto label_2a467c;
        case 0x2a4680u: goto label_2a4680;
        case 0x2a4684u: goto label_2a4684;
        case 0x2a4688u: goto label_2a4688;
        case 0x2a468cu: goto label_2a468c;
        case 0x2a4690u: goto label_2a4690;
        case 0x2a4694u: goto label_2a4694;
        case 0x2a4698u: goto label_2a4698;
        case 0x2a469cu: goto label_2a469c;
        case 0x2a46a0u: goto label_2a46a0;
        case 0x2a46a4u: goto label_2a46a4;
        case 0x2a46a8u: goto label_2a46a8;
        case 0x2a46acu: goto label_2a46ac;
        case 0x2a46b0u: goto label_2a46b0;
        case 0x2a46b4u: goto label_2a46b4;
        case 0x2a46b8u: goto label_2a46b8;
        case 0x2a46bcu: goto label_2a46bc;
        case 0x2a46c0u: goto label_2a46c0;
        case 0x2a46c4u: goto label_2a46c4;
        case 0x2a46c8u: goto label_2a46c8;
        case 0x2a46ccu: goto label_2a46cc;
        case 0x2a46d0u: goto label_2a46d0;
        case 0x2a46d4u: goto label_2a46d4;
        case 0x2a46d8u: goto label_2a46d8;
        case 0x2a46dcu: goto label_2a46dc;
        case 0x2a46e0u: goto label_2a46e0;
        case 0x2a46e4u: goto label_2a46e4;
        case 0x2a46e8u: goto label_2a46e8;
        case 0x2a46ecu: goto label_2a46ec;
        case 0x2a46f0u: goto label_2a46f0;
        case 0x2a46f4u: goto label_2a46f4;
        case 0x2a46f8u: goto label_2a46f8;
        case 0x2a46fcu: goto label_2a46fc;
        case 0x2a4700u: goto label_2a4700;
        case 0x2a4704u: goto label_2a4704;
        case 0x2a4708u: goto label_2a4708;
        case 0x2a470cu: goto label_2a470c;
        case 0x2a4710u: goto label_2a4710;
        case 0x2a4714u: goto label_2a4714;
        case 0x2a4718u: goto label_2a4718;
        case 0x2a471cu: goto label_2a471c;
        case 0x2a4720u: goto label_2a4720;
        case 0x2a4724u: goto label_2a4724;
        case 0x2a4728u: goto label_2a4728;
        case 0x2a472cu: goto label_2a472c;
        case 0x2a4730u: goto label_2a4730;
        case 0x2a4734u: goto label_2a4734;
        case 0x2a4738u: goto label_2a4738;
        case 0x2a473cu: goto label_2a473c;
        case 0x2a4740u: goto label_2a4740;
        case 0x2a4744u: goto label_2a4744;
        case 0x2a4748u: goto label_2a4748;
        case 0x2a474cu: goto label_2a474c;
        case 0x2a4750u: goto label_2a4750;
        case 0x2a4754u: goto label_2a4754;
        case 0x2a4758u: goto label_2a4758;
        case 0x2a475cu: goto label_2a475c;
        case 0x2a4760u: goto label_2a4760;
        case 0x2a4764u: goto label_2a4764;
        case 0x2a4768u: goto label_2a4768;
        case 0x2a476cu: goto label_2a476c;
        case 0x2a4770u: goto label_2a4770;
        case 0x2a4774u: goto label_2a4774;
        case 0x2a4778u: goto label_2a4778;
        case 0x2a477cu: goto label_2a477c;
        case 0x2a4780u: goto label_2a4780;
        case 0x2a4784u: goto label_2a4784;
        case 0x2a4788u: goto label_2a4788;
        case 0x2a478cu: goto label_2a478c;
        case 0x2a4790u: goto label_2a4790;
        case 0x2a4794u: goto label_2a4794;
        case 0x2a4798u: goto label_2a4798;
        case 0x2a479cu: goto label_2a479c;
        case 0x2a47a0u: goto label_2a47a0;
        case 0x2a47a4u: goto label_2a47a4;
        case 0x2a47a8u: goto label_2a47a8;
        case 0x2a47acu: goto label_2a47ac;
        case 0x2a47b0u: goto label_2a47b0;
        case 0x2a47b4u: goto label_2a47b4;
        case 0x2a47b8u: goto label_2a47b8;
        case 0x2a47bcu: goto label_2a47bc;
        case 0x2a47c0u: goto label_2a47c0;
        case 0x2a47c4u: goto label_2a47c4;
        case 0x2a47c8u: goto label_2a47c8;
        case 0x2a47ccu: goto label_2a47cc;
        case 0x2a47d0u: goto label_2a47d0;
        case 0x2a47d4u: goto label_2a47d4;
        case 0x2a47d8u: goto label_2a47d8;
        case 0x2a47dcu: goto label_2a47dc;
        case 0x2a47e0u: goto label_2a47e0;
        case 0x2a47e4u: goto label_2a47e4;
        case 0x2a47e8u: goto label_2a47e8;
        case 0x2a47ecu: goto label_2a47ec;
        case 0x2a47f0u: goto label_2a47f0;
        case 0x2a47f4u: goto label_2a47f4;
        case 0x2a47f8u: goto label_2a47f8;
        case 0x2a47fcu: goto label_2a47fc;
        case 0x2a4800u: goto label_2a4800;
        case 0x2a4804u: goto label_2a4804;
        case 0x2a4808u: goto label_2a4808;
        case 0x2a480cu: goto label_2a480c;
        case 0x2a4810u: goto label_2a4810;
        case 0x2a4814u: goto label_2a4814;
        case 0x2a4818u: goto label_2a4818;
        case 0x2a481cu: goto label_2a481c;
        case 0x2a4820u: goto label_2a4820;
        case 0x2a4824u: goto label_2a4824;
        case 0x2a4828u: goto label_2a4828;
        case 0x2a482cu: goto label_2a482c;
        case 0x2a4830u: goto label_2a4830;
        case 0x2a4834u: goto label_2a4834;
        case 0x2a4838u: goto label_2a4838;
        case 0x2a483cu: goto label_2a483c;
        case 0x2a4840u: goto label_2a4840;
        case 0x2a4844u: goto label_2a4844;
        case 0x2a4848u: goto label_2a4848;
        case 0x2a484cu: goto label_2a484c;
        case 0x2a4850u: goto label_2a4850;
        case 0x2a4854u: goto label_2a4854;
        case 0x2a4858u: goto label_2a4858;
        case 0x2a485cu: goto label_2a485c;
        case 0x2a4860u: goto label_2a4860;
        case 0x2a4864u: goto label_2a4864;
        case 0x2a4868u: goto label_2a4868;
        case 0x2a486cu: goto label_2a486c;
        case 0x2a4870u: goto label_2a4870;
        case 0x2a4874u: goto label_2a4874;
        case 0x2a4878u: goto label_2a4878;
        case 0x2a487cu: goto label_2a487c;
        case 0x2a4880u: goto label_2a4880;
        case 0x2a4884u: goto label_2a4884;
        case 0x2a4888u: goto label_2a4888;
        case 0x2a488cu: goto label_2a488c;
        case 0x2a4890u: goto label_2a4890;
        case 0x2a4894u: goto label_2a4894;
        case 0x2a4898u: goto label_2a4898;
        case 0x2a489cu: goto label_2a489c;
        case 0x2a48a0u: goto label_2a48a0;
        case 0x2a48a4u: goto label_2a48a4;
        case 0x2a48a8u: goto label_2a48a8;
        case 0x2a48acu: goto label_2a48ac;
        case 0x2a48b0u: goto label_2a48b0;
        case 0x2a48b4u: goto label_2a48b4;
        case 0x2a48b8u: goto label_2a48b8;
        case 0x2a48bcu: goto label_2a48bc;
        case 0x2a48c0u: goto label_2a48c0;
        case 0x2a48c4u: goto label_2a48c4;
        case 0x2a48c8u: goto label_2a48c8;
        case 0x2a48ccu: goto label_2a48cc;
        case 0x2a48d0u: goto label_2a48d0;
        case 0x2a48d4u: goto label_2a48d4;
        case 0x2a48d8u: goto label_2a48d8;
        case 0x2a48dcu: goto label_2a48dc;
        case 0x2a48e0u: goto label_2a48e0;
        case 0x2a48e4u: goto label_2a48e4;
        case 0x2a48e8u: goto label_2a48e8;
        case 0x2a48ecu: goto label_2a48ec;
        case 0x2a48f0u: goto label_2a48f0;
        case 0x2a48f4u: goto label_2a48f4;
        case 0x2a48f8u: goto label_2a48f8;
        case 0x2a48fcu: goto label_2a48fc;
        case 0x2a4900u: goto label_2a4900;
        case 0x2a4904u: goto label_2a4904;
        case 0x2a4908u: goto label_2a4908;
        case 0x2a490cu: goto label_2a490c;
        case 0x2a4910u: goto label_2a4910;
        case 0x2a4914u: goto label_2a4914;
        case 0x2a4918u: goto label_2a4918;
        case 0x2a491cu: goto label_2a491c;
        case 0x2a4920u: goto label_2a4920;
        case 0x2a4924u: goto label_2a4924;
        case 0x2a4928u: goto label_2a4928;
        case 0x2a492cu: goto label_2a492c;
        case 0x2a4930u: goto label_2a4930;
        case 0x2a4934u: goto label_2a4934;
        case 0x2a4938u: goto label_2a4938;
        case 0x2a493cu: goto label_2a493c;
        case 0x2a4940u: goto label_2a4940;
        case 0x2a4944u: goto label_2a4944;
        case 0x2a4948u: goto label_2a4948;
        case 0x2a494cu: goto label_2a494c;
        case 0x2a4950u: goto label_2a4950;
        case 0x2a4954u: goto label_2a4954;
        case 0x2a4958u: goto label_2a4958;
        case 0x2a495cu: goto label_2a495c;
        case 0x2a4960u: goto label_2a4960;
        case 0x2a4964u: goto label_2a4964;
        case 0x2a4968u: goto label_2a4968;
        case 0x2a496cu: goto label_2a496c;
        case 0x2a4970u: goto label_2a4970;
        case 0x2a4974u: goto label_2a4974;
        case 0x2a4978u: goto label_2a4978;
        case 0x2a497cu: goto label_2a497c;
        case 0x2a4980u: goto label_2a4980;
        case 0x2a4984u: goto label_2a4984;
        case 0x2a4988u: goto label_2a4988;
        case 0x2a498cu: goto label_2a498c;
        case 0x2a4990u: goto label_2a4990;
        case 0x2a4994u: goto label_2a4994;
        case 0x2a4998u: goto label_2a4998;
        case 0x2a499cu: goto label_2a499c;
        case 0x2a49a0u: goto label_2a49a0;
        case 0x2a49a4u: goto label_2a49a4;
        case 0x2a49a8u: goto label_2a49a8;
        case 0x2a49acu: goto label_2a49ac;
        case 0x2a49b0u: goto label_2a49b0;
        case 0x2a49b4u: goto label_2a49b4;
        case 0x2a49b8u: goto label_2a49b8;
        case 0x2a49bcu: goto label_2a49bc;
        case 0x2a49c0u: goto label_2a49c0;
        case 0x2a49c4u: goto label_2a49c4;
        case 0x2a49c8u: goto label_2a49c8;
        case 0x2a49ccu: goto label_2a49cc;
        case 0x2a49d0u: goto label_2a49d0;
        case 0x2a49d4u: goto label_2a49d4;
        case 0x2a49d8u: goto label_2a49d8;
        case 0x2a49dcu: goto label_2a49dc;
        case 0x2a49e0u: goto label_2a49e0;
        case 0x2a49e4u: goto label_2a49e4;
        case 0x2a49e8u: goto label_2a49e8;
        case 0x2a49ecu: goto label_2a49ec;
        case 0x2a49f0u: goto label_2a49f0;
        case 0x2a49f4u: goto label_2a49f4;
        case 0x2a49f8u: goto label_2a49f8;
        case 0x2a49fcu: goto label_2a49fc;
        case 0x2a4a00u: goto label_2a4a00;
        case 0x2a4a04u: goto label_2a4a04;
        case 0x2a4a08u: goto label_2a4a08;
        case 0x2a4a0cu: goto label_2a4a0c;
        case 0x2a4a10u: goto label_2a4a10;
        case 0x2a4a14u: goto label_2a4a14;
        case 0x2a4a18u: goto label_2a4a18;
        case 0x2a4a1cu: goto label_2a4a1c;
        case 0x2a4a20u: goto label_2a4a20;
        case 0x2a4a24u: goto label_2a4a24;
        case 0x2a4a28u: goto label_2a4a28;
        case 0x2a4a2cu: goto label_2a4a2c;
        case 0x2a4a30u: goto label_2a4a30;
        case 0x2a4a34u: goto label_2a4a34;
        case 0x2a4a38u: goto label_2a4a38;
        case 0x2a4a3cu: goto label_2a4a3c;
        case 0x2a4a40u: goto label_2a4a40;
        case 0x2a4a44u: goto label_2a4a44;
        case 0x2a4a48u: goto label_2a4a48;
        case 0x2a4a4cu: goto label_2a4a4c;
        case 0x2a4a50u: goto label_2a4a50;
        case 0x2a4a54u: goto label_2a4a54;
        case 0x2a4a58u: goto label_2a4a58;
        case 0x2a4a5cu: goto label_2a4a5c;
        case 0x2a4a60u: goto label_2a4a60;
        case 0x2a4a64u: goto label_2a4a64;
        case 0x2a4a68u: goto label_2a4a68;
        case 0x2a4a6cu: goto label_2a4a6c;
        case 0x2a4a70u: goto label_2a4a70;
        case 0x2a4a74u: goto label_2a4a74;
        case 0x2a4a78u: goto label_2a4a78;
        case 0x2a4a7cu: goto label_2a4a7c;
        case 0x2a4a80u: goto label_2a4a80;
        case 0x2a4a84u: goto label_2a4a84;
        case 0x2a4a88u: goto label_2a4a88;
        case 0x2a4a8cu: goto label_2a4a8c;
        case 0x2a4a90u: goto label_2a4a90;
        case 0x2a4a94u: goto label_2a4a94;
        case 0x2a4a98u: goto label_2a4a98;
        case 0x2a4a9cu: goto label_2a4a9c;
        case 0x2a4aa0u: goto label_2a4aa0;
        case 0x2a4aa4u: goto label_2a4aa4;
        case 0x2a4aa8u: goto label_2a4aa8;
        case 0x2a4aacu: goto label_2a4aac;
        case 0x2a4ab0u: goto label_2a4ab0;
        case 0x2a4ab4u: goto label_2a4ab4;
        case 0x2a4ab8u: goto label_2a4ab8;
        case 0x2a4abcu: goto label_2a4abc;
        case 0x2a4ac0u: goto label_2a4ac0;
        case 0x2a4ac4u: goto label_2a4ac4;
        case 0x2a4ac8u: goto label_2a4ac8;
        case 0x2a4accu: goto label_2a4acc;
        case 0x2a4ad0u: goto label_2a4ad0;
        case 0x2a4ad4u: goto label_2a4ad4;
        case 0x2a4ad8u: goto label_2a4ad8;
        case 0x2a4adcu: goto label_2a4adc;
        case 0x2a4ae0u: goto label_2a4ae0;
        case 0x2a4ae4u: goto label_2a4ae4;
        case 0x2a4ae8u: goto label_2a4ae8;
        case 0x2a4aecu: goto label_2a4aec;
        case 0x2a4af0u: goto label_2a4af0;
        case 0x2a4af4u: goto label_2a4af4;
        case 0x2a4af8u: goto label_2a4af8;
        case 0x2a4afcu: goto label_2a4afc;
        case 0x2a4b00u: goto label_2a4b00;
        case 0x2a4b04u: goto label_2a4b04;
        case 0x2a4b08u: goto label_2a4b08;
        case 0x2a4b0cu: goto label_2a4b0c;
        case 0x2a4b10u: goto label_2a4b10;
        case 0x2a4b14u: goto label_2a4b14;
        case 0x2a4b18u: goto label_2a4b18;
        case 0x2a4b1cu: goto label_2a4b1c;
        default: break;
    }

    ctx->pc = 0x2a4610u;

label_2a4610:
    // 0x2a4610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a4614:
    // 0x2a4614: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a4614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a4618:
    // 0x2a4618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a461c:
    // 0x2a461c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2a4620:
    // 0x2a4620: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a4620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a4624:
    // 0x2a4624: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a4624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a4628:
    // 0x2a4628: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a462c:
    // 0x2a462c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2a462cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a4630:
    // 0x2a4630: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a4630u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a4634:
    // 0x2a4634: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a4634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a4638:
    // 0x2a4638: 0x90840564  lbu         $a0, 0x564($a0)
    ctx->pc = 0x2a4638u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1380)));
label_2a463c:
    // 0x2a463c: 0x5083012a  beql        $a0, $v1, . + 4 + (0x12A << 2)
label_2a4640:
    if (ctx->pc == 0x2A4640u) {
        ctx->pc = 0x2A4640u;
            // 0x2a4640: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2A4644u;
        goto label_2a4644;
    }
    ctx->pc = 0x2A463Cu;
    {
        const bool branch_taken_0x2a463c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a463c) {
            ctx->pc = 0x2A4640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A463Cu;
            // 0x2a4640: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4AE8u;
            goto label_2a4ae8;
        }
    }
    ctx->pc = 0x2A4644u;
label_2a4644:
    // 0x2a4644: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a4644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a4648:
    // 0x2a4648: 0x50830054  beql        $a0, $v1, . + 4 + (0x54 << 2)
label_2a464c:
    if (ctx->pc == 0x2A464Cu) {
        ctx->pc = 0x2A464Cu;
            // 0x2a464c: 0x8e220568  lw          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->pc = 0x2A4650u;
        goto label_2a4650;
    }
    ctx->pc = 0x2A4648u;
    {
        const bool branch_taken_0x2a4648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4648) {
            ctx->pc = 0x2A464Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4648u;
            // 0x2a464c: 0x8e220568  lw          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A479Cu;
            goto label_2a479c;
        }
    }
    ctx->pc = 0x2A4650u;
label_2a4650:
    // 0x2a4650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a4654:
    // 0x2a4654: 0x5083003d  beql        $a0, $v1, . + 4 + (0x3D << 2)
label_2a4658:
    if (ctx->pc == 0x2A4658u) {
        ctx->pc = 0x2A4658u;
            // 0x2a4658: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2A465Cu;
        goto label_2a465c;
    }
    ctx->pc = 0x2A4654u;
    {
        const bool branch_taken_0x2a4654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4654) {
            ctx->pc = 0x2A4658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4654u;
            // 0x2a4658: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A474Cu;
            goto label_2a474c;
        }
    }
    ctx->pc = 0x2A465Cu;
label_2a465c:
    // 0x2a465c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4660:
    // 0x2a4660: 0x5083002b  beql        $a0, $v1, . + 4 + (0x2B << 2)
label_2a4664:
    if (ctx->pc == 0x2A4664u) {
        ctx->pc = 0x2A4664u;
            // 0x2a4664: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2A4668u;
        goto label_2a4668;
    }
    ctx->pc = 0x2A4660u;
    {
        const bool branch_taken_0x2a4660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4660) {
            ctx->pc = 0x2A4664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4660u;
            // 0x2a4664: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4710u;
            goto label_2a4710;
        }
    }
    ctx->pc = 0x2A4668u;
label_2a4668:
    // 0x2a4668: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_2a466c:
    if (ctx->pc == 0x2A466Cu) {
        ctx->pc = 0x2A466Cu;
            // 0x2a466c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2A4670u;
        goto label_2a4670;
    }
    ctx->pc = 0x2A4668u;
    {
        const bool branch_taken_0x2a4668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4668) {
            ctx->pc = 0x2A466Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4668u;
            // 0x2a466c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4678u;
            goto label_2a4678;
        }
    }
    ctx->pc = 0x2A4670u;
label_2a4670:
    // 0x2a4670: 0x1000011c  b           . + 4 + (0x11C << 2)
label_2a4674:
    if (ctx->pc == 0x2A4674u) {
        ctx->pc = 0x2A4678u;
        goto label_2a4678;
    }
    ctx->pc = 0x2A4670u;
    {
        const bool branch_taken_0x2a4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4670) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A4678u;
label_2a4678:
    // 0x2a4678: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2a4678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2a467c:
    // 0x2a467c: 0xc6160198  lwc1        $f22, 0x198($s0)
    ctx->pc = 0x2a467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a4680:
    // 0x2a4680: 0x8e120194  lw          $s2, 0x194($s0)
    ctx->pc = 0x2a4680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_2a4684:
    // 0x2a4684: 0xc61501a0  lwc1        $f21, 0x1A0($s0)
    ctx->pc = 0x2a4684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a4688:
    // 0x2a4688: 0xc614019c  lwc1        $f20, 0x19C($s0)
    ctx->pc = 0x2a4688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a468c:
    // 0x2a468c: 0xc0a917c  jal         func_2A45F0
label_2a4690:
    if (ctx->pc == 0x2A4690u) {
        ctx->pc = 0x2A4690u;
            // 0x2a4690: 0x260501a4  addiu       $a1, $s0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
        ctx->pc = 0x2A4694u;
        goto label_2a4694;
    }
    ctx->pc = 0x2A468Cu;
    SET_GPR_U32(ctx, 31, 0x2A4694u);
    ctx->pc = 0x2A4690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A468Cu;
            // 0x2a4690: 0x260501a4  addiu       $a1, $s0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45F0u;
    if (runtime->hasFunction(0x2A45F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4694u; }
        if (ctx->pc != 0x2A4694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45F0_0x2a45f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4694u; }
        if (ctx->pc != 0x2A4694u) { return; }
    }
    ctx->pc = 0x2A4694u;
label_2a4694:
    // 0x2a4694: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2a4694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2a4698:
    // 0x2a4698: 0xc0a9174  jal         func_2A45D0
label_2a469c:
    if (ctx->pc == 0x2A469Cu) {
        ctx->pc = 0x2A469Cu;
            // 0x2a469c: 0x260501b0  addiu       $a1, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->pc = 0x2A46A0u;
        goto label_2a46a0;
    }
    ctx->pc = 0x2A4698u;
    SET_GPR_U32(ctx, 31, 0x2A46A0u);
    ctx->pc = 0x2A469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4698u;
            // 0x2a469c: 0x260501b0  addiu       $a1, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45D0u;
    if (runtime->hasFunction(0x2A45D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46A0u; }
        if (ctx->pc != 0x2A46A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45D0_0x2a45d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46A0u; }
        if (ctx->pc != 0x2A46A0u) { return; }
    }
    ctx->pc = 0x2A46A0u;
label_2a46a0:
    // 0x2a46a0: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x2a46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_2a46a4:
    // 0x2a46a4: 0xc0a916c  jal         func_2A45B0
label_2a46a8:
    if (ctx->pc == 0x2A46A8u) {
        ctx->pc = 0x2A46A8u;
            // 0x2a46a8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x2A46ACu;
        goto label_2a46ac;
    }
    ctx->pc = 0x2A46A4u;
    SET_GPR_U32(ctx, 31, 0x2A46ACu);
    ctx->pc = 0x2A46A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46A4u;
            // 0x2a46a8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45B0u;
    if (runtime->hasFunction(0x2A45B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46ACu; }
        if (ctx->pc != 0x2A46ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45B0_0x2a45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46ACu; }
        if (ctx->pc != 0x2A46ACu) { return; }
    }
    ctx->pc = 0x2A46ACu;
label_2a46ac:
    // 0x2a46ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a46acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a46b0:
    // 0x2a46b0: 0xc0a9168  jal         func_2A45A0
label_2a46b4:
    if (ctx->pc == 0x2A46B4u) {
        ctx->pc = 0x2A46B4u;
            // 0x2a46b4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x2A46B8u;
        goto label_2a46b8;
    }
    ctx->pc = 0x2A46B0u;
    SET_GPR_U32(ctx, 31, 0x2A46B8u);
    ctx->pc = 0x2A46B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46B0u;
            // 0x2a46b4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45A0u;
    if (runtime->hasFunction(0x2A45A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46B8u; }
        if (ctx->pc != 0x2A46B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45A0_0x2a45a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46B8u; }
        if (ctx->pc != 0x2A46B8u) { return; }
    }
    ctx->pc = 0x2A46B8u;
label_2a46b8:
    // 0x2a46b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a46b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a46bc:
    // 0x2a46bc: 0xc0a9164  jal         func_2A4590
label_2a46c0:
    if (ctx->pc == 0x2A46C0u) {
        ctx->pc = 0x2A46C0u;
            // 0x2a46c0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x2A46C4u;
        goto label_2a46c4;
    }
    ctx->pc = 0x2A46BCu;
    SET_GPR_U32(ctx, 31, 0x2A46C4u);
    ctx->pc = 0x2A46C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46BCu;
            // 0x2a46c0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4590u;
    if (runtime->hasFunction(0x2A4590u)) {
        auto targetFn = runtime->lookupFunction(0x2A4590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46C4u; }
        if (ctx->pc != 0x2A46C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4590_0x2a4590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46C4u; }
        if (ctx->pc != 0x2A46C4u) { return; }
    }
    ctx->pc = 0x2A46C4u;
label_2a46c4:
    // 0x2a46c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a46c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2a46c8:
    // 0x2a46c8: 0xc0a9160  jal         func_2A4580
label_2a46cc:
    if (ctx->pc == 0x2A46CCu) {
        ctx->pc = 0x2A46CCu;
            // 0x2a46cc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x2A46D0u;
        goto label_2a46d0;
    }
    ctx->pc = 0x2A46C8u;
    SET_GPR_U32(ctx, 31, 0x2A46D0u);
    ctx->pc = 0x2A46CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46C8u;
            // 0x2a46cc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4580u;
    if (runtime->hasFunction(0x2A4580u)) {
        auto targetFn = runtime->lookupFunction(0x2A4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46D0u; }
        if (ctx->pc != 0x2A46D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4580_0x2a4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46D0u; }
        if (ctx->pc != 0x2A46D0u) { return; }
    }
    ctx->pc = 0x2A46D0u;
label_2a46d0:
    // 0x2a46d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2a46d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2a46d4:
    // 0x2a46d4: 0xc0a915c  jal         func_2A4570
label_2a46d8:
    if (ctx->pc == 0x2A46D8u) {
        ctx->pc = 0x2A46D8u;
            // 0x2a46d8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x2A46DCu;
        goto label_2a46dc;
    }
    ctx->pc = 0x2A46D4u;
    SET_GPR_U32(ctx, 31, 0x2A46DCu);
    ctx->pc = 0x2A46D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46D4u;
            // 0x2a46d8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4570u;
    if (runtime->hasFunction(0x2A4570u)) {
        auto targetFn = runtime->lookupFunction(0x2A4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46DCu; }
        if (ctx->pc != 0x2A46DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4570_0x2a4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46DCu; }
        if (ctx->pc != 0x2A46DCu) { return; }
    }
    ctx->pc = 0x2A46DCu;
label_2a46dc:
    // 0x2a46dc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a46e0:
    // 0x2a46e0: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_2a46e4:
    if (ctx->pc == 0x2A46E4u) {
        ctx->pc = 0x2A46E4u;
            // 0x2a46e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2A46E8u;
        goto label_2a46e8;
    }
    ctx->pc = 0x2A46E0u;
    {
        const bool branch_taken_0x2a46e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a46e0) {
            ctx->pc = 0x2A46E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46E0u;
            // 0x2a46e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A46F4u;
            goto label_2a46f4;
        }
    }
    ctx->pc = 0x2A46E8u;
label_2a46e8:
    // 0x2a46e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a46ec:
    // 0x2a46ec: 0x100000fd  b           . + 4 + (0xFD << 2)
label_2a46f0:
    if (ctx->pc == 0x2A46F0u) {
        ctx->pc = 0x2A46F0u;
            // 0x2a46f0: 0xa2230564  sb          $v1, 0x564($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1380), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A46F4u;
        goto label_2a46f4;
    }
    ctx->pc = 0x2A46ECu;
    {
        const bool branch_taken_0x2a46ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A46F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46ECu;
            // 0x2a46f0: 0xa2230564  sb          $v1, 0x564($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46ec) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A46F4u;
label_2a46f4:
    // 0x2a46f4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2a46f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a46f8:
    // 0x2a46f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a46f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a46fc:
    // 0x2a46fc: 0x320f809  jalr        $t9
label_2a4700:
    if (ctx->pc == 0x2A4700u) {
        ctx->pc = 0x2A4700u;
            // 0x2a4700: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4704u;
        goto label_2a4704;
    }
    ctx->pc = 0x2A46FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4704u);
        ctx->pc = 0x2A4700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46FCu;
            // 0x2a4700: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4704u; }
            if (ctx->pc != 0x2A4704u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4704u;
label_2a4704:
    // 0x2a4704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4708:
    // 0x2a4708: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_2a470c:
    if (ctx->pc == 0x2A470Cu) {
        ctx->pc = 0x2A470Cu;
            // 0x2a470c: 0xa2230564  sb          $v1, 0x564($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1380), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A4710u;
        goto label_2a4710;
    }
    ctx->pc = 0x2A4708u;
    {
        const bool branch_taken_0x2a4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4708u;
            // 0x2a470c: 0xa2230564  sb          $v1, 0x564($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4708) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A4710u;
label_2a4710:
    // 0x2a4710: 0x108000f4  beqz        $a0, . + 4 + (0xF4 << 2)
label_2a4714:
    if (ctx->pc == 0x2A4714u) {
        ctx->pc = 0x2A4718u;
        goto label_2a4718;
    }
    ctx->pc = 0x2A4710u;
    {
        const bool branch_taken_0x2a4710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4710) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A4718u;
label_2a4718:
    // 0x2a4718: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a4718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a471c:
    // 0x2a471c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2a471cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a4720:
    // 0x2a4720: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a4720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a4724:
    // 0x2a4724: 0x320f809  jalr        $t9
label_2a4728:
    if (ctx->pc == 0x2A4728u) {
        ctx->pc = 0x2A4728u;
            // 0x2a4728: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A472Cu;
        goto label_2a472c;
    }
    ctx->pc = 0x2A4724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A472Cu);
        ctx->pc = 0x2A4728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4724u;
            // 0x2a4728: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A472Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A472Cu; }
            if (ctx->pc != 0x2A472Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A472Cu;
label_2a472c:
    // 0x2a472c: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
label_2a4730:
    if (ctx->pc == 0x2A4730u) {
        ctx->pc = 0x2A4734u;
        goto label_2a4734;
    }
    ctx->pc = 0x2A472Cu;
    {
        const bool branch_taken_0x2a472c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a472c) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A4734u;
label_2a4734:
    // 0x2a4734: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a4734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4738:
    // 0x2a4738: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a4738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a473c:
    // 0x2a473c: 0x320f809  jalr        $t9
label_2a4740:
    if (ctx->pc == 0x2A4740u) {
        ctx->pc = 0x2A4740u;
            // 0x2a4740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4744u;
        goto label_2a4744;
    }
    ctx->pc = 0x2A473Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4744u);
        ctx->pc = 0x2A4740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A473Cu;
            // 0x2a4740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4744u; }
            if (ctx->pc != 0x2A4744u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4744u;
label_2a4744:
    // 0x2a4744: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2a4748:
    if (ctx->pc == 0x2A4748u) {
        ctx->pc = 0x2A474Cu;
        goto label_2a474c;
    }
    ctx->pc = 0x2A4744u;
    {
        const bool branch_taken_0x2a4744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4744) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A474Cu;
label_2a474c:
    // 0x2a474c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2a474cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2a4750:
    // 0x2a4750: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2a4750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2a4754:
    // 0x2a4754: 0x92220566  lbu         $v0, 0x566($s1)
    ctx->pc = 0x2a4754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1382)));
label_2a4758:
    // 0x2a4758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a4758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a475c:
    // 0x2a475c: 0xa2220566  sb          $v0, 0x566($s1)
    ctx->pc = 0x2a475cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1382), (uint8_t)GPR_U32(ctx, 2));
label_2a4760:
    // 0x2a4760: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2a4760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a4764:
    // 0x2a4764: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2a4764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a4768:
    // 0x2a4768: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a4768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a476c:
    // 0x2a476c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a476cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a4770:
    // 0x2a4770: 0x320f809  jalr        $t9
label_2a4774:
    if (ctx->pc == 0x2A4774u) {
        ctx->pc = 0x2A4774u;
            // 0x2a4774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4778u;
        goto label_2a4778;
    }
    ctx->pc = 0x2A4770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4778u);
        ctx->pc = 0x2A4774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4770u;
            // 0x2a4774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4778u; }
            if (ctx->pc != 0x2A4778u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4778u;
label_2a4778:
    // 0x2a4778: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2a477c:
    if (ctx->pc == 0x2A477Cu) {
        ctx->pc = 0x2A477Cu;
            // 0x2a477c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A4780u;
        goto label_2a4780;
    }
    ctx->pc = 0x2A4778u;
    {
        const bool branch_taken_0x2a4778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4778) {
            ctx->pc = 0x2A477Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4778u;
            // 0x2a477c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4794u;
            goto label_2a4794;
        }
    }
    ctx->pc = 0x2A4780u;
label_2a4780:
    // 0x2a4780: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a4780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4784:
    // 0x2a4784: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a4784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a4788:
    // 0x2a4788: 0x320f809  jalr        $t9
label_2a478c:
    if (ctx->pc == 0x2A478Cu) {
        ctx->pc = 0x2A478Cu;
            // 0x2a478c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4790u;
        goto label_2a4790;
    }
    ctx->pc = 0x2A4788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4790u);
        ctx->pc = 0x2A478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4788u;
            // 0x2a478c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4790u; }
            if (ctx->pc != 0x2A4790u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4790u;
label_2a4790:
    // 0x2a4790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4794:
    // 0x2a4794: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2a4798:
    if (ctx->pc == 0x2A4798u) {
        ctx->pc = 0x2A4798u;
            // 0x2a4798: 0xa2230564  sb          $v1, 0x564($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1380), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A479Cu;
        goto label_2a479c;
    }
    ctx->pc = 0x2A4794u;
    {
        const bool branch_taken_0x2a4794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4794u;
            // 0x2a4798: 0xa2230564  sb          $v1, 0x564($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4794) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A479Cu;
label_2a479c:
    // 0x2a479c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a47a0:
    if (ctx->pc == 0x2A47A0u) {
        ctx->pc = 0x2A47A0u;
            // 0x2a47a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A47A4u;
        goto label_2a47a4;
    }
    ctx->pc = 0x2A479Cu;
    {
        const bool branch_taken_0x2a479c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a479c) {
            ctx->pc = 0x2A47A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A479Cu;
            // 0x2a47a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A47B0u;
            goto label_2a47b0;
        }
    }
    ctx->pc = 0x2A47A4u;
label_2a47a4:
    // 0x2a47a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a47a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a47a8:
    // 0x2a47a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a47ac:
    if (ctx->pc == 0x2A47ACu) {
        ctx->pc = 0x2A47ACu;
            // 0x2a47ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A47B0u;
        goto label_2a47b0;
    }
    ctx->pc = 0x2A47A8u;
    {
        const bool branch_taken_0x2a47a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A47ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47A8u;
            // 0x2a47ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47a8) {
            ctx->pc = 0x2A47C8u;
            goto label_2a47c8;
        }
    }
    ctx->pc = 0x2A47B0u;
label_2a47b0:
    // 0x2a47b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a47b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a47b4:
    // 0x2a47b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a47b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a47b8:
    // 0x2a47b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a47b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a47bc:
    // 0x2a47bc: 0x0  nop
    ctx->pc = 0x2a47bcu;
    // NOP
label_2a47c0:
    // 0x2a47c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a47c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a47c4:
    // 0x2a47c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a47c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a47c8:
    // 0x2a47c8: 0x8e22056c  lw          $v0, 0x56C($s1)
    ctx->pc = 0x2a47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_2a47cc:
    // 0x2a47cc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a47d0:
    if (ctx->pc == 0x2A47D0u) {
        ctx->pc = 0x2A47D0u;
            // 0x2a47d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A47D4u;
        goto label_2a47d4;
    }
    ctx->pc = 0x2A47CCu;
    {
        const bool branch_taken_0x2a47cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a47cc) {
            ctx->pc = 0x2A47D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47CCu;
            // 0x2a47d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A47E0u;
            goto label_2a47e0;
        }
    }
    ctx->pc = 0x2A47D4u;
label_2a47d4:
    // 0x2a47d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a47d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a47d8:
    // 0x2a47d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a47dc:
    if (ctx->pc == 0x2A47DCu) {
        ctx->pc = 0x2A47DCu;
            // 0x2a47dc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A47E0u;
        goto label_2a47e0;
    }
    ctx->pc = 0x2A47D8u;
    {
        const bool branch_taken_0x2a47d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A47DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47D8u;
            // 0x2a47dc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47d8) {
            ctx->pc = 0x2A47F8u;
            goto label_2a47f8;
        }
    }
    ctx->pc = 0x2A47E0u;
label_2a47e0:
    // 0x2a47e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a47e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a47e4:
    // 0x2a47e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a47e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a47e8:
    // 0x2a47e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a47e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a47ec:
    // 0x2a47ec: 0x0  nop
    ctx->pc = 0x2a47ecu;
    // NOP
label_2a47f0:
    // 0x2a47f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a47f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a47f4:
    // 0x2a47f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a47f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a47f8:
    // 0x2a47f8: 0x0  nop
    ctx->pc = 0x2a47f8u;
    // NOP
label_2a47fc:
    // 0x2a47fc: 0x0  nop
    ctx->pc = 0x2a47fcu;
    // NOP
label_2a4800:
    // 0x2a4800: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a4800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a4804:
    // 0x2a4804: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x2a4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2a4808:
    // 0x2a4808: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2a4808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2a480c:
    // 0x2a480c: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x2a480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a4810:
    // 0x2a4810: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2a4814:
    if (ctx->pc == 0x2A4814u) {
        ctx->pc = 0x2A4814u;
            // 0x2a4814: 0x46000d43  div.s       $f21, $f1, $f0 (Delay Slot)
        if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
        ctx->pc = 0x2A4818u;
        goto label_2a4818;
    }
    ctx->pc = 0x2A4810u;
    {
        const bool branch_taken_0x2a4810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4810u;
            // 0x2a4814: 0x46000d43  div.s       $f21, $f1, $f0 (Delay Slot)
        if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4810) {
            ctx->pc = 0x2A484Cu;
            goto label_2a484c;
        }
    }
    ctx->pc = 0x2A4818u;
label_2a4818:
    // 0x2a4818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a481c:
    // 0x2a481c: 0xa2230564  sb          $v1, 0x564($s1)
    ctx->pc = 0x2a481cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1380), (uint8_t)GPR_U32(ctx, 3));
label_2a4820:
    // 0x2a4820: 0x92220566  lbu         $v0, 0x566($s1)
    ctx->pc = 0x2a4820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1382)));
label_2a4824:
    // 0x2a4824: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2a4824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2a4828:
    // 0x2a4828: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_2a482c:
    if (ctx->pc == 0x2A482Cu) {
        ctx->pc = 0x2A482Cu;
            // 0x2a482c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2A4830u;
        goto label_2a4830;
    }
    ctx->pc = 0x2A4828u;
    {
        const bool branch_taken_0x2a4828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4828) {
            ctx->pc = 0x2A482Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4828u;
            // 0x2a482c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4838u;
            goto label_2a4838;
        }
    }
    ctx->pc = 0x2A4830u;
label_2a4830:
    // 0x2a4830: 0xa2230566  sb          $v1, 0x566($s1)
    ctx->pc = 0x2a4830u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1382), (uint8_t)GPR_U32(ctx, 3));
label_2a4834:
    // 0x2a4834: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a4834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4838:
    // 0x2a4838: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a4838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a483c:
    // 0x2a483c: 0x320f809  jalr        $t9
label_2a4840:
    if (ctx->pc == 0x2A4840u) {
        ctx->pc = 0x2A4840u;
            // 0x2a4840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4844u;
        goto label_2a4844;
    }
    ctx->pc = 0x2A483Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4844u);
        ctx->pc = 0x2A4840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A483Cu;
            // 0x2a4840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4844u; }
            if (ctx->pc != 0x2A4844u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4844u;
label_2a4844:
    // 0x2a4844: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2a4848:
    if (ctx->pc == 0x2A4848u) {
        ctx->pc = 0x2A484Cu;
        goto label_2a484c;
    }
    ctx->pc = 0x2A4844u;
    {
        const bool branch_taken_0x2a4844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4844) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A484Cu;
label_2a484c:
    // 0x2a484c: 0x8e240560  lw          $a0, 0x560($s1)
    ctx->pc = 0x2a484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_2a4850:
    // 0x2a4850: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_2a4854:
    if (ctx->pc == 0x2A4854u) {
        ctx->pc = 0x2A4854u;
            // 0x2a4854: 0x8e220568  lw          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->pc = 0x2A4858u;
        goto label_2a4858;
    }
    ctx->pc = 0x2A4850u;
    {
        const bool branch_taken_0x2a4850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4850) {
            ctx->pc = 0x2A4854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4850u;
            // 0x2a4854: 0x8e220568  lw          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A487Cu;
            goto label_2a487c;
        }
    }
    ctx->pc = 0x2A4858u;
label_2a4858:
    // 0x2a4858: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a4858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a485c:
    // 0x2a485c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a485cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a4860:
    // 0x2a4860: 0x320f809  jalr        $t9
label_2a4864:
    if (ctx->pc == 0x2A4864u) {
        ctx->pc = 0x2A4864u;
            // 0x2a4864: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2A4868u;
        goto label_2a4868;
    }
    ctx->pc = 0x2A4860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4868u);
        ctx->pc = 0x2A4864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4860u;
            // 0x2a4864: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4868u; }
            if (ctx->pc != 0x2A4868u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4868u;
label_2a4868:
    // 0x2a4868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a486c:
    // 0x2a486c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2a4870:
    if (ctx->pc == 0x2A4870u) {
        ctx->pc = 0x2A4874u;
        goto label_2a4874;
    }
    ctx->pc = 0x2A486Cu;
    {
        const bool branch_taken_0x2a486c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a486c) {
            ctx->pc = 0x2A4878u;
            goto label_2a4878;
        }
    }
    ctx->pc = 0x2A4874u;
label_2a4874:
    // 0x2a4874: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x2a4874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
label_2a4878:
    // 0x2a4878: 0x8e220568  lw          $v0, 0x568($s1)
    ctx->pc = 0x2a4878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
label_2a487c:
    // 0x2a487c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a4880:
    if (ctx->pc == 0x2A4880u) {
        ctx->pc = 0x2A4880u;
            // 0x2a4880: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A4884u;
        goto label_2a4884;
    }
    ctx->pc = 0x2A487Cu;
    {
        const bool branch_taken_0x2a487c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a487c) {
            ctx->pc = 0x2A4880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A487Cu;
            // 0x2a4880: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4890u;
            goto label_2a4890;
        }
    }
    ctx->pc = 0x2A4884u;
label_2a4884:
    // 0x2a4884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a4888:
    // 0x2a4888: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a488c:
    if (ctx->pc == 0x2A488Cu) {
        ctx->pc = 0x2A488Cu;
            // 0x2a488c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A4890u;
        goto label_2a4890;
    }
    ctx->pc = 0x2A4888u;
    {
        const bool branch_taken_0x2a4888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A488Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4888u;
            // 0x2a488c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4888) {
            ctx->pc = 0x2A48A8u;
            goto label_2a48a8;
        }
    }
    ctx->pc = 0x2A4890u;
label_2a4890:
    // 0x2a4890: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a4894:
    // 0x2a4894: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a4894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a4898:
    // 0x2a4898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a489c:
    // 0x2a489c: 0x0  nop
    ctx->pc = 0x2a489cu;
    // NOP
label_2a48a0:
    // 0x2a48a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a48a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a48a4:
    // 0x2a48a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a48a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a48a8:
    // 0x2a48a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a48a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a48ac:
    // 0x2a48ac: 0x0  nop
    ctx->pc = 0x2a48acu;
    // NOP
label_2a48b0:
    // 0x2a48b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a48b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a48b4:
    // 0x2a48b4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_2a48b8:
    if (ctx->pc == 0x2A48B8u) {
        ctx->pc = 0x2A48B8u;
            // 0x2a48b8: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2A48BCu;
        goto label_2a48bc;
    }
    ctx->pc = 0x2A48B4u;
    {
        const bool branch_taken_0x2a48b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a48b4) {
            ctx->pc = 0x2A48B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A48B4u;
            // 0x2a48b8: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A48D4u;
            goto label_2a48d4;
        }
    }
    ctx->pc = 0x2A48BCu;
label_2a48bc:
    // 0x2a48bc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a48c0:
    // 0x2a48c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a48c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a48c4:
    // 0x2a48c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a48c8:
    // 0x2a48c8: 0x320f809  jalr        $t9
label_2a48cc:
    if (ctx->pc == 0x2A48CCu) {
        ctx->pc = 0x2A48D0u;
        goto label_2a48d0;
    }
    ctx->pc = 0x2A48C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A48D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A48D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A48D0u; }
            if (ctx->pc != 0x2A48D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A48D0u;
label_2a48d0:
    // 0x2a48d0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2a48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a48d4:
    // 0x2a48d4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2a48d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a48d8:
    // 0x2a48d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a48d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a48dc:
    // 0x2a48dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a48dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a48e0:
    // 0x2a48e0: 0x320f809  jalr        $t9
label_2a48e4:
    if (ctx->pc == 0x2A48E4u) {
        ctx->pc = 0x2A48E4u;
            // 0x2a48e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x2A48E8u;
        goto label_2a48e8;
    }
    ctx->pc = 0x2A48E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A48E8u);
        ctx->pc = 0x2A48E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A48E0u;
            // 0x2a48e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A48E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A48E8u; }
            if (ctx->pc != 0x2A48E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A48E8u;
label_2a48e8:
    // 0x2a48e8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2a48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2a48ec:
    // 0x2a48ec: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2a48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a48f0:
    // 0x2a48f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a48f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a48f4:
    // 0x2a48f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a48f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a48f8:
    // 0x2a48f8: 0x320f809  jalr        $t9
label_2a48fc:
    if (ctx->pc == 0x2A48FCu) {
        ctx->pc = 0x2A48FCu;
            // 0x2a48fc: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x2A4900u;
        goto label_2a4900;
    }
    ctx->pc = 0x2A48F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4900u);
        ctx->pc = 0x2A48FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A48F8u;
            // 0x2a48fc: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4900u; }
            if (ctx->pc != 0x2A4900u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4900u;
label_2a4900:
    // 0x2a4900: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a4900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2a4904:
    // 0x2a4904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a4908:
    // 0x2a4908: 0x0  nop
    ctx->pc = 0x2a4908u;
    // NOP
label_2a490c:
    // 0x2a490c: 0x46150101  sub.s       $f4, $f0, $f21
    ctx->pc = 0x2a490cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_2a4910:
    // 0x2a4910: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a4910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a4914:
    // 0x2a4914: 0xc6220464  lwc1        $f2, 0x464($s1)
    ctx->pc = 0x2a4914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a4918:
    // 0x2a4918: 0xc62301c4  lwc1        $f3, 0x1C4($s1)
    ctx->pc = 0x2a4918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a491c:
    // 0x2a491c: 0xc6200468  lwc1        $f0, 0x468($s1)
    ctx->pc = 0x2a491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4920:
    // 0x2a4920: 0x4615101a  mula.s      $f2, $f21
    ctx->pc = 0x2a4920u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_2a4924:
    // 0x2a4924: 0x460418dc  madd.s      $f3, $f3, $f4
    ctx->pc = 0x2a4924u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_2a4928:
    // 0x2a4928: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a4928u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2a492c:
    // 0x2a492c: 0xc62101c8  lwc1        $f1, 0x1C8($s1)
    ctx->pc = 0x2a492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a4930:
    // 0x2a4930: 0xc62601cc  lwc1        $f6, 0x1CC($s1)
    ctx->pc = 0x2a4930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a4934:
    // 0x2a4934: 0xc6200470  lwc1        $f0, 0x470($s1)
    ctx->pc = 0x2a4934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4938:
    // 0x2a4938: 0x4604089c  madd.s      $f2, $f1, $f4
    ctx->pc = 0x2a4938u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_2a493c:
    // 0x2a493c: 0xc621046c  lwc1        $f1, 0x46C($s1)
    ctx->pc = 0x2a493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a4940:
    // 0x2a4940: 0xc62501d0  lwc1        $f5, 0x1D0($s1)
    ctx->pc = 0x2a4940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a4944:
    // 0x2a4944: 0xc6270474  lwc1        $f7, 0x474($s1)
    ctx->pc = 0x2a4944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a4948:
    // 0x2a4948: 0x4615081a  mula.s      $f1, $f21
    ctx->pc = 0x2a4948u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2a494c:
    // 0x2a494c: 0x4604305c  madd.s      $f1, $f6, $f4
    ctx->pc = 0x2a494cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_2a4950:
    // 0x2a4950: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x2a4950u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2a4954:
    // 0x2a4954: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x2a4954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_2a4958:
    // 0x2a4958: 0x4615381a  mula.s      $f7, $f21
    ctx->pc = 0x2a4958u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
label_2a495c:
    // 0x2a495c: 0xc62801d4  lwc1        $f8, 0x1D4($s1)
    ctx->pc = 0x2a495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a4960:
    // 0x2a4960: 0xc6250478  lwc1        $f5, 0x478($s1)
    ctx->pc = 0x2a4960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a4964:
    // 0x2a4964: 0xc62601d8  lwc1        $f6, 0x1D8($s1)
    ctx->pc = 0x2a4964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a4968:
    // 0x2a4968: 0x4604435c  madd.s      $f13, $f8, $f4
    ctx->pc = 0x2a4968u;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
label_2a496c:
    // 0x2a496c: 0x4615281a  mula.s      $f5, $f21
    ctx->pc = 0x2a496cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_2a4970:
    // 0x2a4970: 0x4604331c  madd.s      $f12, $f6, $f4
    ctx->pc = 0x2a4970u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_2a4974:
    // 0x2a4974: 0xc627047c  lwc1        $f7, 0x47C($s1)
    ctx->pc = 0x2a4974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a4978:
    // 0x2a4978: 0xc62801dc  lwc1        $f8, 0x1DC($s1)
    ctx->pc = 0x2a4978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a497c:
    // 0x2a497c: 0xc6250480  lwc1        $f5, 0x480($s1)
    ctx->pc = 0x2a497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a4980:
    // 0x2a4980: 0x4615381a  mula.s      $f7, $f21
    ctx->pc = 0x2a4980u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
label_2a4984:
    // 0x2a4984: 0x460442dc  madd.s      $f11, $f8, $f4
    ctx->pc = 0x2a4984u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
label_2a4988:
    // 0x2a4988: 0x4615281a  mula.s      $f5, $f21
    ctx->pc = 0x2a4988u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_2a498c:
    // 0x2a498c: 0xc62601e0  lwc1        $f6, 0x1E0($s1)
    ctx->pc = 0x2a498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a4990:
    // 0x2a4990: 0xc6250454  lwc1        $f5, 0x454($s1)
    ctx->pc = 0x2a4990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a4994:
    // 0x2a4994: 0xc6270484  lwc1        $f7, 0x484($s1)
    ctx->pc = 0x2a4994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a4998:
    // 0x2a4998: 0x4604329c  madd.s      $f10, $f6, $f4
    ctx->pc = 0x2a4998u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_2a499c:
    // 0x2a499c: 0xc62601b4  lwc1        $f6, 0x1B4($s1)
    ctx->pc = 0x2a499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a49a0:
    // 0x2a49a0: 0x4615381a  mula.s      $f7, $f21
    ctx->pc = 0x2a49a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
label_2a49a4:
    // 0x2a49a4: 0xc62801e4  lwc1        $f8, 0x1E4($s1)
    ctx->pc = 0x2a49a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a49a8:
    // 0x2a49a8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2a49a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_2a49ac:
    // 0x2a49ac: 0x4604425c  madd.s      $f9, $f8, $f4
    ctx->pc = 0x2a49acu;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
label_2a49b0:
    // 0x2a49b0: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2a49b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_2a49b4:
    // 0x2a49b4: 0x4615281a  mula.s      $f5, $f21
    ctx->pc = 0x2a49b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_2a49b8:
    // 0x2a49b8: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x2a49b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_2a49bc:
    // 0x2a49bc: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a49bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
label_2a49c0:
    // 0x2a49c0: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x2a49c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2a49c4:
    // 0x2a49c4: 0xc627045c  lwc1        $f7, 0x45C($s1)
    ctx->pc = 0x2a49c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a49c8:
    // 0x2a49c8: 0xc62801bc  lwc1        $f8, 0x1BC($s1)
    ctx->pc = 0x2a49c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a49cc:
    // 0x2a49cc: 0xc62601c0  lwc1        $f6, 0x1C0($s1)
    ctx->pc = 0x2a49ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a49d0:
    // 0x2a49d0: 0xc6250460  lwc1        $f5, 0x460($s1)
    ctx->pc = 0x2a49d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a49d4:
    // 0x2a49d4: 0x4615381a  mula.s      $f7, $f21
    ctx->pc = 0x2a49d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
label_2a49d8:
    // 0x2a49d8: 0x460441dc  madd.s      $f7, $f8, $f4
    ctx->pc = 0x2a49d8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
label_2a49dc:
    // 0x2a49dc: 0xe46301a4  swc1        $f3, 0x1A4($v1)
    ctx->pc = 0x2a49dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_2a49e0:
    // 0x2a49e0: 0xe46201a8  swc1        $f2, 0x1A8($v1)
    ctx->pc = 0x2a49e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_2a49e4:
    // 0x2a49e4: 0xe46101ac  swc1        $f1, 0x1AC($v1)
    ctx->pc = 0x2a49e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 428), bits); }
label_2a49e8:
    // 0x2a49e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a49ec:
    // 0x2a49ec: 0x4615281a  mula.s      $f5, $f21
    ctx->pc = 0x2a49ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_2a49f0:
    // 0x2a49f0: 0x4604311c  madd.s      $f4, $f6, $f4
    ctx->pc = 0x2a49f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_2a49f4:
    // 0x2a49f4: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x2a49f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
label_2a49f8:
    // 0x2a49f8: 0xe46d01b4  swc1        $f13, 0x1B4($v1)
    ctx->pc = 0x2a49f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 436), bits); }
label_2a49fc:
    // 0x2a49fc: 0xe46c01b8  swc1        $f12, 0x1B8($v1)
    ctx->pc = 0x2a49fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 440), bits); }
label_2a4a00:
    // 0x2a4a00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a4a04:
    // 0x2a4a04: 0xe46b01bc  swc1        $f11, 0x1BC($v1)
    ctx->pc = 0x2a4a04u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
label_2a4a08:
    // 0x2a4a08: 0xe46a01c0  swc1        $f10, 0x1C0($v1)
    ctx->pc = 0x2a4a08u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 448), bits); }
label_2a4a0c:
    // 0x2a4a0c: 0xe46901c4  swc1        $f9, 0x1C4($v1)
    ctx->pc = 0x2a4a0cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 452), bits); }
label_2a4a10:
    // 0x2a4a10: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a4a14:
    // 0x2a4a14: 0xac640194  sw          $a0, 0x194($v1)
    ctx->pc = 0x2a4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 4));
label_2a4a18:
    // 0x2a4a18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a4a1c:
    // 0x2a4a1c: 0xe467019c  swc1        $f7, 0x19C($v1)
    ctx->pc = 0x2a4a1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 412), bits); }
label_2a4a20:
    // 0x2a4a20: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a4a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a4a24:
    // 0x2a4a24: 0xe46401a0  swc1        $f4, 0x1A0($v1)
    ctx->pc = 0x2a4a24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_2a4a28:
    // 0x2a4a28: 0x8e240560  lw          $a0, 0x560($s1)
    ctx->pc = 0x2a4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_2a4a2c:
    // 0x2a4a2c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2a4a30:
    if (ctx->pc == 0x2A4A30u) {
        ctx->pc = 0x2A4A30u;
            // 0x2a4a30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A34u;
        goto label_2a4a34;
    }
    ctx->pc = 0x2A4A2Cu;
    {
        const bool branch_taken_0x2a4a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4A2Cu;
            // 0x2a4a30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a2c) {
            ctx->pc = 0x2A4A54u;
            goto label_2a4a54;
        }
    }
    ctx->pc = 0x2A4A34u;
label_2a4a34:
    // 0x2a4a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a4a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a4a38:
    // 0x2a4a38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a4a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a4a3c:
    // 0x2a4a3c: 0x320f809  jalr        $t9
label_2a4a40:
    if (ctx->pc == 0x2A4A40u) {
        ctx->pc = 0x2A4A40u;
            // 0x2a4a40: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2A4A44u;
        goto label_2a4a44;
    }
    ctx->pc = 0x2A4A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4A44u);
        ctx->pc = 0x2A4A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4A3Cu;
            // 0x2a4a40: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4A44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4A44u; }
            if (ctx->pc != 0x2A4A44u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4A44u;
label_2a4a44:
    // 0x2a4a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4a48:
    // 0x2a4a48: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_2a4a4c:
    if (ctx->pc == 0x2A4A4Cu) {
        ctx->pc = 0x2A4A4Cu;
            // 0x2a4a4c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->pc = 0x2A4A50u;
        goto label_2a4a50;
    }
    ctx->pc = 0x2A4A48u;
    {
        const bool branch_taken_0x2a4a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a4a48) {
            ctx->pc = 0x2A4A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4A48u;
            // 0x2a4a4c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A58u;
            goto label_2a4a58;
        }
    }
    ctx->pc = 0x2A4A50u;
label_2a4a50:
    // 0x2a4a50: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x2a4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
label_2a4a54:
    // 0x2a4a54: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2a4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2a4a58:
    // 0x2a4a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a4a5c:
    // 0x2a4a5c: 0x0  nop
    ctx->pc = 0x2a4a5cu;
    // NOP
label_2a4a60:
    // 0x2a4a60: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2a4a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a4a64:
    // 0x2a4a64: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2a4a68:
    if (ctx->pc == 0x2A4A68u) {
        ctx->pc = 0x2A4A68u;
            // 0x2a4a68: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2A4A6Cu;
        goto label_2a4a6c;
    }
    ctx->pc = 0x2A4A64u;
    {
        const bool branch_taken_0x2a4a64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4a64) {
            ctx->pc = 0x2A4A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4A64u;
            // 0x2a4a68: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A4A6Cu;
label_2a4a6c:
    // 0x2a4a6c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a4a6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a4a70:
    // 0x2a4a70: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a4a70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2a4a74:
    // 0x2a4a74: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a4a78:
    if (ctx->pc == 0x2A4A78u) {
        ctx->pc = 0x2A4A78u;
            // 0x2a4a78: 0x8e230568  lw          $v1, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->pc = 0x2A4A7Cu;
        goto label_2a4a7c;
    }
    ctx->pc = 0x2A4A74u;
    {
        const bool branch_taken_0x2a4a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4A74u;
            // 0x2a4a78: 0x8e230568  lw          $v1, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a74) {
            ctx->pc = 0x2A4A94u;
            goto label_2a4a94;
        }
    }
    ctx->pc = 0x2A4A7Cu;
label_2a4a7c:
    // 0x2a4a7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a4a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2a4a80:
    // 0x2a4a80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a4a80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a4a84:
    // 0x2a4a84: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a4a84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2a4a88:
    // 0x2a4a88: 0x0  nop
    ctx->pc = 0x2a4a88u;
    // NOP
label_2a4a8c:
    // 0x2a4a8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a4a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2a4a90:
    // 0x2a4a90: 0x8e230568  lw          $v1, 0x568($s1)
    ctx->pc = 0x2a4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
label_2a4a94:
    // 0x2a4a94: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2a4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a4a98:
    // 0x2a4a98: 0xae240568  sw          $a0, 0x568($s1)
    ctx->pc = 0x2a4a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 4));
label_2a4a9c:
    // 0x2a4a9c: 0x8e23056c  lw          $v1, 0x56C($s1)
    ctx->pc = 0x2a4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_2a4aa0:
    // 0x2a4aa0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2a4aa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a4aa4:
    // 0x2a4aa4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2a4aa8:
    if (ctx->pc == 0x2A4AA8u) {
        ctx->pc = 0x2A4AACu;
        goto label_2a4aac;
    }
    ctx->pc = 0x2A4AA4u;
    {
        const bool branch_taken_0x2a4aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4aa4) {
            ctx->pc = 0x2A4ABCu;
            goto label_2a4abc;
        }
    }
    ctx->pc = 0x2A4AACu;
label_2a4aac:
    // 0x2a4aac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a4aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4ab0:
    // 0x2a4ab0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a4ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a4ab4:
    // 0x2a4ab4: 0x320f809  jalr        $t9
label_2a4ab8:
    if (ctx->pc == 0x2A4AB8u) {
        ctx->pc = 0x2A4AB8u;
            // 0x2a4ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4ABCu;
        goto label_2a4abc;
    }
    ctx->pc = 0x2A4AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4ABCu);
        ctx->pc = 0x2A4AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4AB4u;
            // 0x2a4ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4ABCu; }
            if (ctx->pc != 0x2A4ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x2A4ABCu;
label_2a4abc:
    // 0x2a4abc: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_2a4ac0:
    if (ctx->pc == 0x2A4AC0u) {
        ctx->pc = 0x2A4AC4u;
        goto label_2a4ac4;
    }
    ctx->pc = 0x2A4ABCu;
    {
        const bool branch_taken_0x2a4abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4abc) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A4AC4u;
label_2a4ac4:
    // 0x2a4ac4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a4ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4ac8:
    // 0x2a4ac8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a4ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a4acc:
    // 0x2a4acc: 0x320f809  jalr        $t9
label_2a4ad0:
    if (ctx->pc == 0x2A4AD0u) {
        ctx->pc = 0x2A4AD0u;
            // 0x2a4ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4AD4u;
        goto label_2a4ad4;
    }
    ctx->pc = 0x2A4ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4AD4u);
        ctx->pc = 0x2A4AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4ACCu;
            // 0x2a4ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4AD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4AD4u; }
            if (ctx->pc != 0x2A4AD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4AD4u;
label_2a4ad4:
    // 0x2a4ad4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a4ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4ad8:
    // 0x2a4ad8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a4ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a4adc:
    // 0x2a4adc: 0x320f809  jalr        $t9
label_2a4ae0:
    if (ctx->pc == 0x2A4AE0u) {
        ctx->pc = 0x2A4AE0u;
            // 0x2a4ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4AE4u;
        goto label_2a4ae4;
    }
    ctx->pc = 0x2A4ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4AE4u);
        ctx->pc = 0x2A4AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4ADCu;
            // 0x2a4ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4AE4u; }
            if (ctx->pc != 0x2A4AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4AE4u;
label_2a4ae4:
    // 0x2a4ae4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a4ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4ae8:
    // 0x2a4ae8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2a4ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a4aec:
    // 0x2a4aec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a4aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4af0:
    // 0x2a4af0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a4af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a4af4:
    // 0x2a4af4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4af8:
    // 0x2a4af8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a4afc:
    // 0x2a4afc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4b00:
    // 0x2a4b00: 0x3e00008  jr          $ra
label_2a4b04:
    if (ctx->pc == 0x2A4B04u) {
        ctx->pc = 0x2A4B04u;
            // 0x2a4b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2A4B08u;
        goto label_2a4b08;
    }
    ctx->pc = 0x2A4B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B00u;
            // 0x2a4b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4B08u;
label_2a4b08:
    // 0x2a4b08: 0x0  nop
    ctx->pc = 0x2a4b08u;
    // NOP
label_2a4b0c:
    // 0x2a4b0c: 0x0  nop
    ctx->pc = 0x2a4b0cu;
    // NOP
label_2a4b10:
    // 0x2a4b10: 0x3e00008  jr          $ra
label_2a4b14:
    if (ctx->pc == 0x2A4B14u) {
        ctx->pc = 0x2A4B18u;
        goto label_2a4b18;
    }
    ctx->pc = 0x2A4B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4B18u;
label_2a4b18:
    // 0x2a4b18: 0x0  nop
    ctx->pc = 0x2a4b18u;
    // NOP
label_2a4b1c:
    // 0x2a4b1c: 0x0  nop
    ctx->pc = 0x2a4b1cu;
    // NOP
}
