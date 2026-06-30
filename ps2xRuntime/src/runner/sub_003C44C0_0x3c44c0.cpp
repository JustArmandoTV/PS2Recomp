#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C44C0
// Address: 0x3c44c0 - 0x3c48b0
void sub_003C44C0_0x3c44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C44C0_0x3c44c0");
#endif

    switch (ctx->pc) {
        case 0x3c44c0u: goto label_3c44c0;
        case 0x3c44c4u: goto label_3c44c4;
        case 0x3c44c8u: goto label_3c44c8;
        case 0x3c44ccu: goto label_3c44cc;
        case 0x3c44d0u: goto label_3c44d0;
        case 0x3c44d4u: goto label_3c44d4;
        case 0x3c44d8u: goto label_3c44d8;
        case 0x3c44dcu: goto label_3c44dc;
        case 0x3c44e0u: goto label_3c44e0;
        case 0x3c44e4u: goto label_3c44e4;
        case 0x3c44e8u: goto label_3c44e8;
        case 0x3c44ecu: goto label_3c44ec;
        case 0x3c44f0u: goto label_3c44f0;
        case 0x3c44f4u: goto label_3c44f4;
        case 0x3c44f8u: goto label_3c44f8;
        case 0x3c44fcu: goto label_3c44fc;
        case 0x3c4500u: goto label_3c4500;
        case 0x3c4504u: goto label_3c4504;
        case 0x3c4508u: goto label_3c4508;
        case 0x3c450cu: goto label_3c450c;
        case 0x3c4510u: goto label_3c4510;
        case 0x3c4514u: goto label_3c4514;
        case 0x3c4518u: goto label_3c4518;
        case 0x3c451cu: goto label_3c451c;
        case 0x3c4520u: goto label_3c4520;
        case 0x3c4524u: goto label_3c4524;
        case 0x3c4528u: goto label_3c4528;
        case 0x3c452cu: goto label_3c452c;
        case 0x3c4530u: goto label_3c4530;
        case 0x3c4534u: goto label_3c4534;
        case 0x3c4538u: goto label_3c4538;
        case 0x3c453cu: goto label_3c453c;
        case 0x3c4540u: goto label_3c4540;
        case 0x3c4544u: goto label_3c4544;
        case 0x3c4548u: goto label_3c4548;
        case 0x3c454cu: goto label_3c454c;
        case 0x3c4550u: goto label_3c4550;
        case 0x3c4554u: goto label_3c4554;
        case 0x3c4558u: goto label_3c4558;
        case 0x3c455cu: goto label_3c455c;
        case 0x3c4560u: goto label_3c4560;
        case 0x3c4564u: goto label_3c4564;
        case 0x3c4568u: goto label_3c4568;
        case 0x3c456cu: goto label_3c456c;
        case 0x3c4570u: goto label_3c4570;
        case 0x3c4574u: goto label_3c4574;
        case 0x3c4578u: goto label_3c4578;
        case 0x3c457cu: goto label_3c457c;
        case 0x3c4580u: goto label_3c4580;
        case 0x3c4584u: goto label_3c4584;
        case 0x3c4588u: goto label_3c4588;
        case 0x3c458cu: goto label_3c458c;
        case 0x3c4590u: goto label_3c4590;
        case 0x3c4594u: goto label_3c4594;
        case 0x3c4598u: goto label_3c4598;
        case 0x3c459cu: goto label_3c459c;
        case 0x3c45a0u: goto label_3c45a0;
        case 0x3c45a4u: goto label_3c45a4;
        case 0x3c45a8u: goto label_3c45a8;
        case 0x3c45acu: goto label_3c45ac;
        case 0x3c45b0u: goto label_3c45b0;
        case 0x3c45b4u: goto label_3c45b4;
        case 0x3c45b8u: goto label_3c45b8;
        case 0x3c45bcu: goto label_3c45bc;
        case 0x3c45c0u: goto label_3c45c0;
        case 0x3c45c4u: goto label_3c45c4;
        case 0x3c45c8u: goto label_3c45c8;
        case 0x3c45ccu: goto label_3c45cc;
        case 0x3c45d0u: goto label_3c45d0;
        case 0x3c45d4u: goto label_3c45d4;
        case 0x3c45d8u: goto label_3c45d8;
        case 0x3c45dcu: goto label_3c45dc;
        case 0x3c45e0u: goto label_3c45e0;
        case 0x3c45e4u: goto label_3c45e4;
        case 0x3c45e8u: goto label_3c45e8;
        case 0x3c45ecu: goto label_3c45ec;
        case 0x3c45f0u: goto label_3c45f0;
        case 0x3c45f4u: goto label_3c45f4;
        case 0x3c45f8u: goto label_3c45f8;
        case 0x3c45fcu: goto label_3c45fc;
        case 0x3c4600u: goto label_3c4600;
        case 0x3c4604u: goto label_3c4604;
        case 0x3c4608u: goto label_3c4608;
        case 0x3c460cu: goto label_3c460c;
        case 0x3c4610u: goto label_3c4610;
        case 0x3c4614u: goto label_3c4614;
        case 0x3c4618u: goto label_3c4618;
        case 0x3c461cu: goto label_3c461c;
        case 0x3c4620u: goto label_3c4620;
        case 0x3c4624u: goto label_3c4624;
        case 0x3c4628u: goto label_3c4628;
        case 0x3c462cu: goto label_3c462c;
        case 0x3c4630u: goto label_3c4630;
        case 0x3c4634u: goto label_3c4634;
        case 0x3c4638u: goto label_3c4638;
        case 0x3c463cu: goto label_3c463c;
        case 0x3c4640u: goto label_3c4640;
        case 0x3c4644u: goto label_3c4644;
        case 0x3c4648u: goto label_3c4648;
        case 0x3c464cu: goto label_3c464c;
        case 0x3c4650u: goto label_3c4650;
        case 0x3c4654u: goto label_3c4654;
        case 0x3c4658u: goto label_3c4658;
        case 0x3c465cu: goto label_3c465c;
        case 0x3c4660u: goto label_3c4660;
        case 0x3c4664u: goto label_3c4664;
        case 0x3c4668u: goto label_3c4668;
        case 0x3c466cu: goto label_3c466c;
        case 0x3c4670u: goto label_3c4670;
        case 0x3c4674u: goto label_3c4674;
        case 0x3c4678u: goto label_3c4678;
        case 0x3c467cu: goto label_3c467c;
        case 0x3c4680u: goto label_3c4680;
        case 0x3c4684u: goto label_3c4684;
        case 0x3c4688u: goto label_3c4688;
        case 0x3c468cu: goto label_3c468c;
        case 0x3c4690u: goto label_3c4690;
        case 0x3c4694u: goto label_3c4694;
        case 0x3c4698u: goto label_3c4698;
        case 0x3c469cu: goto label_3c469c;
        case 0x3c46a0u: goto label_3c46a0;
        case 0x3c46a4u: goto label_3c46a4;
        case 0x3c46a8u: goto label_3c46a8;
        case 0x3c46acu: goto label_3c46ac;
        case 0x3c46b0u: goto label_3c46b0;
        case 0x3c46b4u: goto label_3c46b4;
        case 0x3c46b8u: goto label_3c46b8;
        case 0x3c46bcu: goto label_3c46bc;
        case 0x3c46c0u: goto label_3c46c0;
        case 0x3c46c4u: goto label_3c46c4;
        case 0x3c46c8u: goto label_3c46c8;
        case 0x3c46ccu: goto label_3c46cc;
        case 0x3c46d0u: goto label_3c46d0;
        case 0x3c46d4u: goto label_3c46d4;
        case 0x3c46d8u: goto label_3c46d8;
        case 0x3c46dcu: goto label_3c46dc;
        case 0x3c46e0u: goto label_3c46e0;
        case 0x3c46e4u: goto label_3c46e4;
        case 0x3c46e8u: goto label_3c46e8;
        case 0x3c46ecu: goto label_3c46ec;
        case 0x3c46f0u: goto label_3c46f0;
        case 0x3c46f4u: goto label_3c46f4;
        case 0x3c46f8u: goto label_3c46f8;
        case 0x3c46fcu: goto label_3c46fc;
        case 0x3c4700u: goto label_3c4700;
        case 0x3c4704u: goto label_3c4704;
        case 0x3c4708u: goto label_3c4708;
        case 0x3c470cu: goto label_3c470c;
        case 0x3c4710u: goto label_3c4710;
        case 0x3c4714u: goto label_3c4714;
        case 0x3c4718u: goto label_3c4718;
        case 0x3c471cu: goto label_3c471c;
        case 0x3c4720u: goto label_3c4720;
        case 0x3c4724u: goto label_3c4724;
        case 0x3c4728u: goto label_3c4728;
        case 0x3c472cu: goto label_3c472c;
        case 0x3c4730u: goto label_3c4730;
        case 0x3c4734u: goto label_3c4734;
        case 0x3c4738u: goto label_3c4738;
        case 0x3c473cu: goto label_3c473c;
        case 0x3c4740u: goto label_3c4740;
        case 0x3c4744u: goto label_3c4744;
        case 0x3c4748u: goto label_3c4748;
        case 0x3c474cu: goto label_3c474c;
        case 0x3c4750u: goto label_3c4750;
        case 0x3c4754u: goto label_3c4754;
        case 0x3c4758u: goto label_3c4758;
        case 0x3c475cu: goto label_3c475c;
        case 0x3c4760u: goto label_3c4760;
        case 0x3c4764u: goto label_3c4764;
        case 0x3c4768u: goto label_3c4768;
        case 0x3c476cu: goto label_3c476c;
        case 0x3c4770u: goto label_3c4770;
        case 0x3c4774u: goto label_3c4774;
        case 0x3c4778u: goto label_3c4778;
        case 0x3c477cu: goto label_3c477c;
        case 0x3c4780u: goto label_3c4780;
        case 0x3c4784u: goto label_3c4784;
        case 0x3c4788u: goto label_3c4788;
        case 0x3c478cu: goto label_3c478c;
        case 0x3c4790u: goto label_3c4790;
        case 0x3c4794u: goto label_3c4794;
        case 0x3c4798u: goto label_3c4798;
        case 0x3c479cu: goto label_3c479c;
        case 0x3c47a0u: goto label_3c47a0;
        case 0x3c47a4u: goto label_3c47a4;
        case 0x3c47a8u: goto label_3c47a8;
        case 0x3c47acu: goto label_3c47ac;
        case 0x3c47b0u: goto label_3c47b0;
        case 0x3c47b4u: goto label_3c47b4;
        case 0x3c47b8u: goto label_3c47b8;
        case 0x3c47bcu: goto label_3c47bc;
        case 0x3c47c0u: goto label_3c47c0;
        case 0x3c47c4u: goto label_3c47c4;
        case 0x3c47c8u: goto label_3c47c8;
        case 0x3c47ccu: goto label_3c47cc;
        case 0x3c47d0u: goto label_3c47d0;
        case 0x3c47d4u: goto label_3c47d4;
        case 0x3c47d8u: goto label_3c47d8;
        case 0x3c47dcu: goto label_3c47dc;
        case 0x3c47e0u: goto label_3c47e0;
        case 0x3c47e4u: goto label_3c47e4;
        case 0x3c47e8u: goto label_3c47e8;
        case 0x3c47ecu: goto label_3c47ec;
        case 0x3c47f0u: goto label_3c47f0;
        case 0x3c47f4u: goto label_3c47f4;
        case 0x3c47f8u: goto label_3c47f8;
        case 0x3c47fcu: goto label_3c47fc;
        case 0x3c4800u: goto label_3c4800;
        case 0x3c4804u: goto label_3c4804;
        case 0x3c4808u: goto label_3c4808;
        case 0x3c480cu: goto label_3c480c;
        case 0x3c4810u: goto label_3c4810;
        case 0x3c4814u: goto label_3c4814;
        case 0x3c4818u: goto label_3c4818;
        case 0x3c481cu: goto label_3c481c;
        case 0x3c4820u: goto label_3c4820;
        case 0x3c4824u: goto label_3c4824;
        case 0x3c4828u: goto label_3c4828;
        case 0x3c482cu: goto label_3c482c;
        case 0x3c4830u: goto label_3c4830;
        case 0x3c4834u: goto label_3c4834;
        case 0x3c4838u: goto label_3c4838;
        case 0x3c483cu: goto label_3c483c;
        case 0x3c4840u: goto label_3c4840;
        case 0x3c4844u: goto label_3c4844;
        case 0x3c4848u: goto label_3c4848;
        case 0x3c484cu: goto label_3c484c;
        case 0x3c4850u: goto label_3c4850;
        case 0x3c4854u: goto label_3c4854;
        case 0x3c4858u: goto label_3c4858;
        case 0x3c485cu: goto label_3c485c;
        case 0x3c4860u: goto label_3c4860;
        case 0x3c4864u: goto label_3c4864;
        case 0x3c4868u: goto label_3c4868;
        case 0x3c486cu: goto label_3c486c;
        case 0x3c4870u: goto label_3c4870;
        case 0x3c4874u: goto label_3c4874;
        case 0x3c4878u: goto label_3c4878;
        case 0x3c487cu: goto label_3c487c;
        case 0x3c4880u: goto label_3c4880;
        case 0x3c4884u: goto label_3c4884;
        case 0x3c4888u: goto label_3c4888;
        case 0x3c488cu: goto label_3c488c;
        case 0x3c4890u: goto label_3c4890;
        case 0x3c4894u: goto label_3c4894;
        case 0x3c4898u: goto label_3c4898;
        case 0x3c489cu: goto label_3c489c;
        case 0x3c48a0u: goto label_3c48a0;
        case 0x3c48a4u: goto label_3c48a4;
        case 0x3c48a8u: goto label_3c48a8;
        case 0x3c48acu: goto label_3c48ac;
        default: break;
    }

    ctx->pc = 0x3c44c0u;

label_3c44c0:
    // 0x3c44c0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3c44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c44c4:
    // 0x3c44c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c44c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c44c8:
    // 0x3c44c8: 0x0  nop
    ctx->pc = 0x3c44c8u;
    // NOP
label_3c44cc:
    // 0x3c44cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c44ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c44d0:
    // 0x3c44d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3c44d4:
    if (ctx->pc == 0x3C44D4u) {
        ctx->pc = 0x3C44D8u;
        goto label_3c44d8;
    }
    ctx->pc = 0x3C44D0u;
    {
        const bool branch_taken_0x3c44d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c44d0) {
            ctx->pc = 0x3C44DCu;
            goto label_3c44dc;
        }
    }
    ctx->pc = 0x3C44D8u;
label_3c44d8:
    // 0x3c44d8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3c44d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c44dc:
    // 0x3c44dc: 0x3e00008  jr          $ra
label_3c44e0:
    if (ctx->pc == 0x3C44E0u) {
        ctx->pc = 0x3C44E4u;
        goto label_3c44e4;
    }
    ctx->pc = 0x3C44DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C44E4u;
label_3c44e4:
    // 0x3c44e4: 0x0  nop
    ctx->pc = 0x3c44e4u;
    // NOP
label_3c44e8:
    // 0x3c44e8: 0x0  nop
    ctx->pc = 0x3c44e8u;
    // NOP
label_3c44ec:
    // 0x3c44ec: 0x0  nop
    ctx->pc = 0x3c44ecu;
    // NOP
label_3c44f0:
    // 0x3c44f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c44f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c44f4:
    // 0x3c44f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c44f8:
    // 0x3c44f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c44f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c44fc:
    // 0x3c44fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c4500:
    // 0x3c4500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c4500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c4504:
    // 0x3c4504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c4504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c4508:
    // 0x3c4508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c450c:
    // 0x3c450c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c4510:
    // 0x3c4510: 0x8c7189e8  lw          $s1, -0x7618($v1)
    ctx->pc = 0x3c4510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_3c4514:
    // 0x3c4514: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x3c4514u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3c4518:
    // 0x3c4518: 0xc122890  jal         func_48A240
label_3c451c:
    if (ctx->pc == 0x3C451Cu) {
        ctx->pc = 0x3C451Cu;
            // 0x3c451c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4520u;
        goto label_3c4520;
    }
    ctx->pc = 0x3C4518u;
    SET_GPR_U32(ctx, 31, 0x3C4520u);
    ctx->pc = 0x3C451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4518u;
            // 0x3c451c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48A240u;
    if (runtime->hasFunction(0x48A240u)) {
        auto targetFn = runtime->lookupFunction(0x48A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4520u; }
        if (ctx->pc != 0x3C4520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048A240_0x48a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4520u; }
        if (ctx->pc != 0x3C4520u) { return; }
    }
    ctx->pc = 0x3C4520u;
label_3c4520:
    // 0x3c4520: 0x92630118  lbu         $v1, 0x118($s3)
    ctx->pc = 0x3c4520u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 280)));
label_3c4524:
    // 0x3c4524: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3c4524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3c4528:
    // 0x3c4528: 0x102000b9  beqz        $at, . + 4 + (0xB9 << 2)
label_3c452c:
    if (ctx->pc == 0x3C452Cu) {
        ctx->pc = 0x3C452Cu;
            // 0x3c452c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4530u;
        goto label_3c4530;
    }
    ctx->pc = 0x3C4528u;
    {
        const bool branch_taken_0x3c4528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C452Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4528u;
            // 0x3c452c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4528) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C4530u;
label_3c4530:
    // 0x3c4530: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3c4530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3c4534:
    // 0x3c4534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c4534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c4538:
    // 0x3c4538: 0x24848d10  addiu       $a0, $a0, -0x72F0
    ctx->pc = 0x3c4538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937872));
label_3c453c:
    // 0x3c453c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3c4540:
    // 0x3c4540: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c4540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c4544:
    // 0x3c4544: 0x600008  jr          $v1
label_3c4548:
    if (ctx->pc == 0x3C4548u) {
        ctx->pc = 0x3C454Cu;
        goto label_3c454c;
    }
    ctx->pc = 0x3C4544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C454Cu: goto label_3c454c;
            case 0x3C45D8u: goto label_3c45d8;
            case 0x3C4600u: goto label_3c4600;
            case 0x3C4660u: goto label_3c4660;
            case 0x3C477Cu: goto label_3c477c;
            case 0x3C47BCu: goto label_3c47bc;
            case 0x3C4810u: goto label_3c4810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3C454Cu;
label_3c454c:
    // 0x3c454c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c4550:
    // 0x3c4550: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x3c4550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_3c4554:
    // 0x3c4554: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x3c4554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
label_3c4558:
    // 0x3c4558: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c4558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c455c:
    // 0x3c455c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c455cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c4560:
    // 0x3c4560: 0x320f809  jalr        $t9
label_3c4564:
    if (ctx->pc == 0x3C4564u) {
        ctx->pc = 0x3C4564u;
            // 0x3c4564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4568u;
        goto label_3c4568;
    }
    ctx->pc = 0x3C4560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4568u);
        ctx->pc = 0x3C4564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4560u;
            // 0x3c4564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4568u; }
            if (ctx->pc != 0x3C4568u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4568u;
label_3c4568:
    // 0x3c4568: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c4568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c456c:
    // 0x3c456c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c4570:
    // 0x3c4570: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3c4570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3c4574:
    // 0x3c4574: 0x320f809  jalr        $t9
label_3c4578:
    if (ctx->pc == 0x3C4578u) {
        ctx->pc = 0x3C4578u;
            // 0x3c4578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C457Cu;
        goto label_3c457c;
    }
    ctx->pc = 0x3C4574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C457Cu);
        ctx->pc = 0x3C4578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4574u;
            // 0x3c4578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C457Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C457Cu; }
            if (ctx->pc != 0x3C457Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C457Cu;
label_3c457c:
    // 0x3c457c: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x3c457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_3c4580:
    // 0x3c4580: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_3c4584:
    if (ctx->pc == 0x3C4584u) {
        ctx->pc = 0x3C4584u;
            // 0x3c4584: 0x8e6300e4  lw          $v1, 0xE4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
        ctx->pc = 0x3C4588u;
        goto label_3c4588;
    }
    ctx->pc = 0x3C4580u;
    {
        const bool branch_taken_0x3c4580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4580) {
            ctx->pc = 0x3C4584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4580u;
            // 0x3c4584: 0x8e6300e4  lw          $v1, 0xE4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C45B4u;
            goto label_3c45b4;
        }
    }
    ctx->pc = 0x3C4588u;
label_3c4588:
    // 0x3c4588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c458c:
    // 0x3c458c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4590:
    // 0x3c4590: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3c4590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c4594:
    // 0x3c4594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4598:
    // 0x3c4598: 0xc0fd020  jal         func_3F4080
label_3c459c:
    if (ctx->pc == 0x3C459Cu) {
        ctx->pc = 0x3C459Cu;
            // 0x3c459c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C45A0u;
        goto label_3c45a0;
    }
    ctx->pc = 0x3C4598u;
    SET_GPR_U32(ctx, 31, 0x3C45A0u);
    ctx->pc = 0x3C459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4598u;
            // 0x3c459c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C45A0u; }
        if (ctx->pc != 0x3C45A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C45A0u; }
        if (ctx->pc != 0x3C45A0u) { return; }
    }
    ctx->pc = 0x3C45A0u;
label_3c45a0:
    // 0x3c45a0: 0x8e790108  lw          $t9, 0x108($s3)
    ctx->pc = 0x3c45a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3c45a4:
    // 0x3c45a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c45a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c45a8:
    // 0x3c45a8: 0x320f809  jalr        $t9
label_3c45ac:
    if (ctx->pc == 0x3C45ACu) {
        ctx->pc = 0x3C45ACu;
            // 0x3c45ac: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->pc = 0x3C45B0u;
        goto label_3c45b0;
    }
    ctx->pc = 0x3C45A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C45B0u);
        ctx->pc = 0x3C45ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C45A8u;
            // 0x3c45ac: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C45B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C45B0u; }
            if (ctx->pc != 0x3C45B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C45B0u;
label_3c45b0:
    // 0x3c45b0: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x3c45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_3c45b4:
    // 0x3c45b4: 0x54600097  bnel        $v1, $zero, . + 4 + (0x97 << 2)
label_3c45b8:
    if (ctx->pc == 0x3C45B8u) {
        ctx->pc = 0x3C45B8u;
            // 0x3c45b8: 0x8e66015c  lw          $a2, 0x15C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
        ctx->pc = 0x3C45BCu;
        goto label_3c45bc;
    }
    ctx->pc = 0x3C45B4u;
    {
        const bool branch_taken_0x3c45b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c45b4) {
            ctx->pc = 0x3C45B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C45B4u;
            // 0x3c45b8: 0x8e66015c  lw          $a2, 0x15C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4814u;
            goto label_3c4814;
        }
    }
    ctx->pc = 0x3C45BCu;
label_3c45bc:
    // 0x3c45bc: 0x8e790108  lw          $t9, 0x108($s3)
    ctx->pc = 0x3c45bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3c45c0:
    // 0x3c45c0: 0x26640108  addiu       $a0, $s3, 0x108
    ctx->pc = 0x3c45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
label_3c45c4:
    // 0x3c45c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c45c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c45c8:
    // 0x3c45c8: 0x320f809  jalr        $t9
label_3c45cc:
    if (ctx->pc == 0x3C45CCu) {
        ctx->pc = 0x3C45CCu;
            // 0x3c45cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C45D0u;
        goto label_3c45d0;
    }
    ctx->pc = 0x3C45C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C45D0u);
        ctx->pc = 0x3C45CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C45C8u;
            // 0x3c45cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C45D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C45D0u; }
            if (ctx->pc != 0x3C45D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C45D0u;
label_3c45d0:
    // 0x3c45d0: 0x1000008f  b           . + 4 + (0x8F << 2)
label_3c45d4:
    if (ctx->pc == 0x3C45D4u) {
        ctx->pc = 0x3C45D8u;
        goto label_3c45d8;
    }
    ctx->pc = 0x3C45D0u;
    {
        const bool branch_taken_0x3c45d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c45d0) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C45D8u;
label_3c45d8:
    // 0x3c45d8: 0xc0fcfe0  jal         func_3F3F80
label_3c45dc:
    if (ctx->pc == 0x3C45DCu) {
        ctx->pc = 0x3C45DCu;
            // 0x3c45dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C45E0u;
        goto label_3c45e0;
    }
    ctx->pc = 0x3C45D8u;
    SET_GPR_U32(ctx, 31, 0x3C45E0u);
    ctx->pc = 0x3C45DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C45D8u;
            // 0x3c45dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C45E0u; }
        if (ctx->pc != 0x3C45E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C45E0u; }
        if (ctx->pc != 0x3C45E0u) { return; }
    }
    ctx->pc = 0x3C45E0u;
label_3c45e0:
    // 0x3c45e0: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_3c45e4:
    if (ctx->pc == 0x3C45E4u) {
        ctx->pc = 0x3C45E8u;
        goto label_3c45e8;
    }
    ctx->pc = 0x3C45E0u;
    {
        const bool branch_taken_0x3c45e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c45e0) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C45E8u;
label_3c45e8:
    // 0x3c45e8: 0x8e790108  lw          $t9, 0x108($s3)
    ctx->pc = 0x3c45e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3c45ec:
    // 0x3c45ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c45ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c45f0:
    // 0x3c45f0: 0x320f809  jalr        $t9
label_3c45f4:
    if (ctx->pc == 0x3C45F4u) {
        ctx->pc = 0x3C45F4u;
            // 0x3c45f4: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->pc = 0x3C45F8u;
        goto label_3c45f8;
    }
    ctx->pc = 0x3C45F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C45F8u);
        ctx->pc = 0x3C45F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C45F0u;
            // 0x3c45f4: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C45F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C45F8u; }
            if (ctx->pc != 0x3C45F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C45F8u;
label_3c45f8:
    // 0x3c45f8: 0x10000085  b           . + 4 + (0x85 << 2)
label_3c45fc:
    if (ctx->pc == 0x3C45FCu) {
        ctx->pc = 0x3C4600u;
        goto label_3c4600;
    }
    ctx->pc = 0x3C45F8u;
    {
        const bool branch_taken_0x3c45f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c45f8) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C4600u;
label_3c4600:
    // 0x3c4600: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c4600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c4604:
    // 0x3c4604: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x3c4604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_3c4608:
    // 0x3c4608: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x3c4608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3c460c:
    // 0x3c460c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3c460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3c4610:
    // 0x3c4610: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c4610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c4614:
    // 0x3c4614: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
label_3c4618:
    if (ctx->pc == 0x3C4618u) {
        ctx->pc = 0x3C461Cu;
        goto label_3c461c;
    }
    ctx->pc = 0x3C4614u;
    {
        const bool branch_taken_0x3c4614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4614) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C461Cu;
label_3c461c:
    // 0x3c461c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4620:
    // 0x3c4620: 0x1603007b  bne         $s0, $v1, . + 4 + (0x7B << 2)
label_3c4624:
    if (ctx->pc == 0x3C4624u) {
        ctx->pc = 0x3C4628u;
        goto label_3c4628;
    }
    ctx->pc = 0x3C4620u;
    {
        const bool branch_taken_0x3c4620 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c4620) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C4628u;
label_3c4628:
    // 0x3c4628: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c4628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c462c:
    // 0x3c462c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c4630:
    // 0x3c4630: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3c4630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3c4634:
    // 0x3c4634: 0x320f809  jalr        $t9
label_3c4638:
    if (ctx->pc == 0x3C4638u) {
        ctx->pc = 0x3C4638u;
            // 0x3c4638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C463Cu;
        goto label_3c463c;
    }
    ctx->pc = 0x3C4634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C463Cu);
        ctx->pc = 0x3C4638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4634u;
            // 0x3c4638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C463Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C463Cu; }
            if (ctx->pc != 0x3C463Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C463Cu;
label_3c463c:
    // 0x3c463c: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x3c463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_3c4640:
    // 0x3c4640: 0xc05d416  jal         func_175058
label_3c4644:
    if (ctx->pc == 0x3C4644u) {
        ctx->pc = 0x3C4644u;
            // 0x3c4644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4648u;
        goto label_3c4648;
    }
    ctx->pc = 0x3C4640u;
    SET_GPR_U32(ctx, 31, 0x3C4648u);
    ctx->pc = 0x3C4644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4640u;
            // 0x3c4644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4648u; }
        if (ctx->pc != 0x3C4648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4648u; }
        if (ctx->pc != 0x3C4648u) { return; }
    }
    ctx->pc = 0x3C4648u;
label_3c4648:
    // 0x3c4648: 0x8e790108  lw          $t9, 0x108($s3)
    ctx->pc = 0x3c4648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3c464c:
    // 0x3c464c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c464cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c4650:
    // 0x3c4650: 0x320f809  jalr        $t9
label_3c4654:
    if (ctx->pc == 0x3C4654u) {
        ctx->pc = 0x3C4654u;
            // 0x3c4654: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->pc = 0x3C4658u;
        goto label_3c4658;
    }
    ctx->pc = 0x3C4650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4658u);
        ctx->pc = 0x3C4654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4650u;
            // 0x3c4654: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4658u; }
            if (ctx->pc != 0x3C4658u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4658u;
label_3c4658:
    // 0x3c4658: 0x1000006d  b           . + 4 + (0x6D << 2)
label_3c465c:
    if (ctx->pc == 0x3C465Cu) {
        ctx->pc = 0x3C4660u;
        goto label_3c4660;
    }
    ctx->pc = 0x3C4658u;
    {
        const bool branch_taken_0x3c4658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4658) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C4660u;
label_3c4660:
    // 0x3c4660: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c4664:
    // 0x3c4664: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3c4664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3c4668:
    // 0x3c4668: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x3c4668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_3c466c:
    // 0x3c466c: 0x401027  not         $v0, $v0
    ctx->pc = 0x3c466cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_3c4670:
    // 0x3c4670: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3c4670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c4674:
    // 0x3c4674: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_3c4678:
    if (ctx->pc == 0x3C4678u) {
        ctx->pc = 0x3C4678u;
            // 0x3c4678: 0x8e790108  lw          $t9, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->pc = 0x3C467Cu;
        goto label_3c467c;
    }
    ctx->pc = 0x3C4674u;
    {
        const bool branch_taken_0x3c4674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4674) {
            ctx->pc = 0x3C4678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4674u;
            // 0x3c4678: 0x8e790108  lw          $t9, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4770u;
            goto label_3c4770;
        }
    }
    ctx->pc = 0x3C467Cu;
label_3c467c:
    // 0x3c467c: 0xc040180  jal         func_100600
label_3c4680:
    if (ctx->pc == 0x3C4680u) {
        ctx->pc = 0x3C4680u;
            // 0x3c4680: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x3C4684u;
        goto label_3c4684;
    }
    ctx->pc = 0x3C467Cu;
    SET_GPR_U32(ctx, 31, 0x3C4684u);
    ctx->pc = 0x3C4680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C467Cu;
            // 0x3c4680: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4684u; }
        if (ctx->pc != 0x3C4684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4684u; }
        if (ctx->pc != 0x3C4684u) { return; }
    }
    ctx->pc = 0x3C4684u;
label_3c4684:
    // 0x3c4684: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3c4688:
    if (ctx->pc == 0x3C4688u) {
        ctx->pc = 0x3C4688u;
            // 0x3c4688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C468Cu;
        goto label_3c468c;
    }
    ctx->pc = 0x3C4684u;
    {
        const bool branch_taken_0x3c4684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4684u;
            // 0x3c4688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4684) {
            ctx->pc = 0x3C476Cu;
            goto label_3c476c;
        }
    }
    ctx->pc = 0x3C468Cu;
label_3c468c:
    // 0x3c468c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_3c4690:
    // 0x3c4690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4694:
    // 0x3c4694: 0x3445423f  ori         $a1, $v0, 0x423F
    ctx->pc = 0x3c4694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_3c4698:
    // 0x3c4698: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3c4698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c469c:
    // 0x3c469c: 0xc10ca68  jal         func_4329A0
label_3c46a0:
    if (ctx->pc == 0x3C46A0u) {
        ctx->pc = 0x3C46A0u;
            // 0x3c46a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C46A4u;
        goto label_3c46a4;
    }
    ctx->pc = 0x3C469Cu;
    SET_GPR_U32(ctx, 31, 0x3C46A4u);
    ctx->pc = 0x3C46A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C469Cu;
            // 0x3c46a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C46A4u; }
        if (ctx->pc != 0x3C46A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C46A4u; }
        if (ctx->pc != 0x3C46A4u) { return; }
    }
    ctx->pc = 0x3C46A4u;
label_3c46a4:
    // 0x3c46a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3c46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3c46a8:
    // 0x3c46a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c46ac:
    // 0x3c46ac: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3c46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3c46b0:
    // 0x3c46b0: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x3c46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_3c46b4:
    // 0x3c46b4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3c46b8:
    // 0x3c46b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c46bc:
    // 0x3c46bc: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x3c46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_3c46c0:
    // 0x3c46c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c46c4:
    // 0x3c46c4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3c46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3c46c8:
    // 0x3c46c8: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3c46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c46cc:
    // 0x3c46cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c46ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c46d0:
    // 0x3c46d0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x3c46d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_3c46d4:
    // 0x3c46d4: 0x320f809  jalr        $t9
label_3c46d8:
    if (ctx->pc == 0x3C46D8u) {
        ctx->pc = 0x3C46DCu;
        goto label_3c46dc;
    }
    ctx->pc = 0x3C46D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C46DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C46DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C46DCu; }
            if (ctx->pc != 0x3C46DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C46DCu;
label_3c46dc:
    // 0x3c46dc: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x3c46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
label_3c46e0:
    // 0x3c46e0: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x3c46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_3c46e4:
    // 0x3c46e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c46e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c46e8:
    // 0x3c46e8: 0x0  nop
    ctx->pc = 0x3c46e8u;
    // NOP
label_3c46ec:
    // 0x3c46ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c46ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c46f0:
    // 0x3c46f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c46f4:
    // 0x3c46f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c46f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c46f8:
    // 0x3c46f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c46f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c46fc:
    // 0x3c46fc: 0x0  nop
    ctx->pc = 0x3c46fcu;
    // NOP
label_3c4700:
    // 0x3c4700: 0xae240058  sw          $a0, 0x58($s1)
    ctx->pc = 0x3c4700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 4));
label_3c4704:
    // 0x3c4704: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x3c4704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_3c4708:
    // 0x3c4708: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3c4708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c470c:
    // 0x3c470c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c470cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c4710:
    // 0x3c4710: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x3c4710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_3c4714:
    // 0x3c4714: 0x320f809  jalr        $t9
label_3c4718:
    if (ctx->pc == 0x3C4718u) {
        ctx->pc = 0x3C471Cu;
        goto label_3c471c;
    }
    ctx->pc = 0x3C4714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C471Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C471Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C471Cu; }
            if (ctx->pc != 0x3C471Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C471Cu;
label_3c471c:
    // 0x3c471c: 0x3c03422c  lui         $v1, 0x422C
    ctx->pc = 0x3c471cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16940 << 16));
label_3c4720:
    // 0x3c4720: 0x3c024c0a  lui         $v0, 0x4C0A
    ctx->pc = 0x3c4720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19466 << 16));
label_3c4724:
    // 0x3c4724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c4724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c4728:
    // 0x3c4728: 0x34466d80  ori         $a2, $v0, 0x6D80
    ctx->pc = 0x3c4728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28032);
label_3c472c:
    // 0x3c472c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c472cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c4730:
    // 0x3c4730: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x3c4730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_3c4734:
    // 0x3c4734: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c4734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4738:
    // 0x3c4738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c473c:
    // 0x3c473c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4740:
    // 0x3c4740: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c4740u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c4744:
    // 0x3c4744: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3c4744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3c4748:
    // 0x3c4748: 0x0  nop
    ctx->pc = 0x3c4748u;
    // NOP
label_3c474c:
    // 0x3c474c: 0xae270060  sw          $a3, 0x60($s1)
    ctx->pc = 0x3c474cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 7));
label_3c4750:
    // 0x3c4750: 0xae260064  sw          $a2, 0x64($s1)
    ctx->pc = 0x3c4750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 6));
label_3c4754:
    // 0x3c4754: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x3c4754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
label_3c4758:
    // 0x3c4758: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x3c4758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_3c475c:
    // 0x3c475c: 0xa2240080  sb          $a0, 0x80($s1)
    ctx->pc = 0x3c475cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 4));
label_3c4760:
    // 0x3c4760: 0xa2200081  sb          $zero, 0x81($s1)
    ctx->pc = 0x3c4760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 0));
label_3c4764:
    // 0x3c4764: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x3c4764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
label_3c4768:
    // 0x3c4768: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x3c4768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_3c476c:
    // 0x3c476c: 0x8e790108  lw          $t9, 0x108($s3)
    ctx->pc = 0x3c476cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3c4770:
    // 0x3c4770: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c4770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c4774:
    // 0x3c4774: 0x320f809  jalr        $t9
label_3c4778:
    if (ctx->pc == 0x3C4778u) {
        ctx->pc = 0x3C4778u;
            // 0x3c4778: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->pc = 0x3C477Cu;
        goto label_3c477c;
    }
    ctx->pc = 0x3C4774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C477Cu);
        ctx->pc = 0x3C4778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4774u;
            // 0x3c4778: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C477Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C477Cu; }
            if (ctx->pc != 0x3C477Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C477Cu;
label_3c477c:
    // 0x3c477c: 0x3a020003  xori        $v0, $s0, 0x3
    ctx->pc = 0x3c477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
label_3c4780:
    // 0x3c4780: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3c4780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3c4784:
    // 0x3c4784: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c4788:
    if (ctx->pc == 0x3C4788u) {
        ctx->pc = 0x3C4788u;
            // 0x3c4788: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3C478Cu;
        goto label_3c478c;
    }
    ctx->pc = 0x3C4784u;
    {
        const bool branch_taken_0x3c4784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4784u;
            // 0x3c4788: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4784) {
            ctx->pc = 0x3C4794u;
            goto label_3c4794;
        }
    }
    ctx->pc = 0x3C478Cu;
label_3c478c:
    // 0x3c478c: 0x3a020004  xori        $v0, $s0, 0x4
    ctx->pc = 0x3c478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
label_3c4790:
    // 0x3c4790: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3c4790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3c4794:
    // 0x3c4794: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c4798:
    if (ctx->pc == 0x3C4798u) {
        ctx->pc = 0x3C4798u;
            // 0x3c4798: 0x8e790108  lw          $t9, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->pc = 0x3C479Cu;
        goto label_3c479c;
    }
    ctx->pc = 0x3C4794u;
    {
        const bool branch_taken_0x3c4794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4794) {
            ctx->pc = 0x3C4798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4794u;
            // 0x3c4798: 0x8e790108  lw          $t9, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C47A4u;
            goto label_3c47a4;
        }
    }
    ctx->pc = 0x3C479Cu;
label_3c479c:
    // 0x3c479c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c479cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c47a0:
    // 0x3c47a0: 0x8e790108  lw          $t9, 0x108($s3)
    ctx->pc = 0x3c47a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3c47a4:
    // 0x3c47a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3c47a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3c47a8:
    // 0x3c47a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c47a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c47ac:
    // 0x3c47ac: 0x320f809  jalr        $t9
label_3c47b0:
    if (ctx->pc == 0x3C47B0u) {
        ctx->pc = 0x3C47B0u;
            // 0x3c47b0: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->pc = 0x3C47B4u;
        goto label_3c47b4;
    }
    ctx->pc = 0x3C47ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C47B4u);
        ctx->pc = 0x3C47B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C47ACu;
            // 0x3c47b0: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C47B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C47B4u; }
            if (ctx->pc != 0x3C47B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C47B4u;
label_3c47b4:
    // 0x3c47b4: 0x10000016  b           . + 4 + (0x16 << 2)
label_3c47b8:
    if (ctx->pc == 0x3C47B8u) {
        ctx->pc = 0x3C47BCu;
        goto label_3c47bc;
    }
    ctx->pc = 0x3C47B4u;
    {
        const bool branch_taken_0x3c47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c47b4) {
            ctx->pc = 0x3C4810u;
            goto label_3c4810;
        }
    }
    ctx->pc = 0x3C47BCu;
label_3c47bc:
    // 0x3c47bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c47c0:
    // 0x3c47c0: 0x8e630160  lw          $v1, 0x160($s3)
    ctx->pc = 0x3c47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_3c47c4:
    // 0x3c47c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c47c8:
    if (ctx->pc == 0x3C47C8u) {
        ctx->pc = 0x3C47C8u;
            // 0x3c47c8: 0x8c44d130  lw          $a0, -0x2ED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
        ctx->pc = 0x3C47CCu;
        goto label_3c47cc;
    }
    ctx->pc = 0x3C47C4u;
    {
        const bool branch_taken_0x3c47c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C47C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C47C4u;
            // 0x3c47c8: 0x8c44d130  lw          $a0, -0x2ED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c47c4) {
            ctx->pc = 0x3C47D4u;
            goto label_3c47d4;
        }
    }
    ctx->pc = 0x3C47CCu;
label_3c47cc:
    // 0x3c47cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c47d0:
    // 0x3c47d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3c47d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3c47d4:
    // 0x3c47d4: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x3c47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_3c47d8:
    // 0x3c47d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3c47dc:
    if (ctx->pc == 0x3C47DCu) {
        ctx->pc = 0x3C47DCu;
            // 0x3c47dc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3C47E0u;
        goto label_3c47e0;
    }
    ctx->pc = 0x3C47D8u;
    {
        const bool branch_taken_0x3c47d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c47d8) {
            ctx->pc = 0x3C47DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C47D8u;
            // 0x3c47dc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4800u;
            goto label_3c4800;
        }
    }
    ctx->pc = 0x3C47E0u;
label_3c47e0:
    // 0x3c47e0: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_3c47e4:
    if (ctx->pc == 0x3C47E4u) {
        ctx->pc = 0x3C47E4u;
            // 0x3c47e4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3C47E8u;
        goto label_3c47e8;
    }
    ctx->pc = 0x3C47E0u;
    {
        const bool branch_taken_0x3c47e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c47e0) {
            ctx->pc = 0x3C47E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C47E0u;
            // 0x3c47e4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C47F0u;
            goto label_3c47f0;
        }
    }
    ctx->pc = 0x3C47E8u;
label_3c47e8:
    // 0x3c47e8: 0x26730108  addiu       $s3, $s3, 0x108
    ctx->pc = 0x3c47e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
label_3c47ec:
    // 0x3c47ec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3c47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3c47f0:
    // 0x3c47f0: 0xc057b7c  jal         func_15EDF0
label_3c47f4:
    if (ctx->pc == 0x3C47F4u) {
        ctx->pc = 0x3C47F4u;
            // 0x3c47f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C47F8u;
        goto label_3c47f8;
    }
    ctx->pc = 0x3C47F0u;
    SET_GPR_U32(ctx, 31, 0x3C47F8u);
    ctx->pc = 0x3C47F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C47F0u;
            // 0x3c47f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C47F8u; }
        if (ctx->pc != 0x3C47F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C47F8u; }
        if (ctx->pc != 0x3C47F8u) { return; }
    }
    ctx->pc = 0x3C47F8u;
label_3c47f8:
    // 0x3c47f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c47fc:
    if (ctx->pc == 0x3C47FCu) {
        ctx->pc = 0x3C4800u;
        goto label_3c4800;
    }
    ctx->pc = 0x3C47F8u;
    {
        const bool branch_taken_0x3c47f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c47f8) {
            ctx->pc = 0x3C4808u;
            goto label_3c4808;
        }
    }
    ctx->pc = 0x3C4800u;
label_3c4800:
    // 0x3c4800: 0xc057b78  jal         func_15EDE0
label_3c4804:
    if (ctx->pc == 0x3C4804u) {
        ctx->pc = 0x3C4808u;
        goto label_3c4808;
    }
    ctx->pc = 0x3C4800u;
    SET_GPR_U32(ctx, 31, 0x3C4808u);
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4808u; }
        if (ctx->pc != 0x3C4808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4808u; }
        if (ctx->pc != 0x3C4808u) { return; }
    }
    ctx->pc = 0x3C4808u;
label_3c4808:
    // 0x3c4808: 0x10000023  b           . + 4 + (0x23 << 2)
label_3c480c:
    if (ctx->pc == 0x3C480Cu) {
        ctx->pc = 0x3C480Cu;
            // 0x3c480c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3C4810u;
        goto label_3c4810;
    }
    ctx->pc = 0x3C4808u;
    {
        const bool branch_taken_0x3c4808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4808u;
            // 0x3c480c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4808) {
            ctx->pc = 0x3C4898u;
            goto label_3c4898;
        }
    }
    ctx->pc = 0x3C4810u;
label_3c4810:
    // 0x3c4810: 0x8e66015c  lw          $a2, 0x15C($s3)
    ctx->pc = 0x3c4810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
label_3c4814:
    // 0x3c4814: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
label_3c4818:
    if (ctx->pc == 0x3C4818u) {
        ctx->pc = 0x3C481Cu;
        goto label_3c481c;
    }
    ctx->pc = 0x3C4814u;
    {
        const bool branch_taken_0x3c4814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4814) {
            ctx->pc = 0x3C4894u;
            goto label_3c4894;
        }
    }
    ctx->pc = 0x3C481Cu;
label_3c481c:
    // 0x3c481c: 0x82650169  lb          $a1, 0x169($s3)
    ctx->pc = 0x3c481cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 361)));
label_3c4820:
    // 0x3c4820: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c4820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4824:
    // 0x3c4824: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_3c4828:
    if (ctx->pc == 0x3C4828u) {
        ctx->pc = 0x3C4828u;
            // 0x3c4828: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3C482Cu;
        goto label_3c482c;
    }
    ctx->pc = 0x3C4824u;
    {
        const bool branch_taken_0x3c4824 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c4824) {
            ctx->pc = 0x3C4828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4824u;
            // 0x3c4828: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4840u;
            goto label_3c4840;
        }
    }
    ctx->pc = 0x3C482Cu;
label_3c482c:
    // 0x3c482c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c482cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c4830:
    // 0x3c4830: 0x8c63a140  lw          $v1, -0x5EC0($v1)
    ctx->pc = 0x3c4830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_3c4834:
    // 0x3c4834: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3c4834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3c4838:
    // 0x3c4838: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c483c:
    if (ctx->pc == 0x3C483Cu) {
        ctx->pc = 0x3C483Cu;
            // 0x3c483c: 0x661824  and         $v1, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->pc = 0x3C4840u;
        goto label_3c4840;
    }
    ctx->pc = 0x3C4838u;
    {
        const bool branch_taken_0x3c4838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4838u;
            // 0x3c483c: 0x661824  and         $v1, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4838) {
            ctx->pc = 0x3C485Cu;
            goto label_3c485c;
        }
    }
    ctx->pc = 0x3C4840u;
label_3c4840:
    // 0x3c4840: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c4840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c4844:
    // 0x3c4844: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3c4844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3c4848:
    // 0x3c4848: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x3c4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
label_3c484c:
    // 0x3c484c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3c484cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3c4850:
    // 0x3c4850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c4850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3c4854:
    // 0x3c4854: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c4858:
    // 0x3c4858: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3c4858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_3c485c:
    // 0x3c485c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3c4860:
    if (ctx->pc == 0x3C4860u) {
        ctx->pc = 0x3C4864u;
        goto label_3c4864;
    }
    ctx->pc = 0x3C485Cu;
    {
        const bool branch_taken_0x3c485c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c485c) {
            ctx->pc = 0x3C4894u;
            goto label_3c4894;
        }
    }
    ctx->pc = 0x3C4864u;
label_3c4864:
    // 0x3c4864: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x3c4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_3c4868:
    // 0x3c4868: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3c486c:
    if (ctx->pc == 0x3C486Cu) {
        ctx->pc = 0x3C486Cu;
            // 0x3c486c: 0x8e790108  lw          $t9, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->pc = 0x3C4870u;
        goto label_3c4870;
    }
    ctx->pc = 0x3C4868u;
    {
        const bool branch_taken_0x3c4868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4868) {
            ctx->pc = 0x3C486Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4868u;
            // 0x3c486c: 0x8e790108  lw          $t9, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4884u;
            goto label_3c4884;
        }
    }
    ctx->pc = 0x3C4870u;
label_3c4870:
    // 0x3c4870: 0xc0fcfe0  jal         func_3F3F80
label_3c4874:
    if (ctx->pc == 0x3C4874u) {
        ctx->pc = 0x3C4874u;
            // 0x3c4874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4878u;
        goto label_3c4878;
    }
    ctx->pc = 0x3C4870u;
    SET_GPR_U32(ctx, 31, 0x3C4878u);
    ctx->pc = 0x3C4874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4870u;
            // 0x3c4874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4878u; }
        if (ctx->pc != 0x3C4878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4878u; }
        if (ctx->pc != 0x3C4878u) { return; }
    }
    ctx->pc = 0x3C4878u;
label_3c4878:
    // 0x3c4878: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c487c:
    if (ctx->pc == 0x3C487Cu) {
        ctx->pc = 0x3C4880u;
        goto label_3c4880;
    }
    ctx->pc = 0x3C4878u;
    {
        const bool branch_taken_0x3c4878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4878) {
            ctx->pc = 0x3C4894u;
            goto label_3c4894;
        }
    }
    ctx->pc = 0x3C4880u;
label_3c4880:
    // 0x3c4880: 0x8e790108  lw          $t9, 0x108($s3)
    ctx->pc = 0x3c4880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3c4884:
    // 0x3c4884: 0x26640108  addiu       $a0, $s3, 0x108
    ctx->pc = 0x3c4884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
label_3c4888:
    // 0x3c4888: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c4888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c488c:
    // 0x3c488c: 0x320f809  jalr        $t9
label_3c4890:
    if (ctx->pc == 0x3C4890u) {
        ctx->pc = 0x3C4890u;
            // 0x3c4890: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3C4894u;
        goto label_3c4894;
    }
    ctx->pc = 0x3C488Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4894u);
        ctx->pc = 0x3C4890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C488Cu;
            // 0x3c4890: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4894u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4894u; }
            if (ctx->pc != 0x3C4894u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4894u;
label_3c4894:
    // 0x3c4894: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c4894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4898:
    // 0x3c4898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c4898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c489c:
    // 0x3c489c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c489cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c48a0:
    // 0x3c48a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c48a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c48a4:
    // 0x3c48a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c48a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c48a8:
    // 0x3c48a8: 0x3e00008  jr          $ra
label_3c48ac:
    if (ctx->pc == 0x3C48ACu) {
        ctx->pc = 0x3C48ACu;
            // 0x3c48ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3C48B0u;
        goto label_fallthrough_0x3c48a8;
    }
    ctx->pc = 0x3C48A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C48ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C48A8u;
            // 0x3c48ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c48a8:
    ctx->pc = 0x3C48B0u;
}
