#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F4500
// Address: 0x3f4500 - 0x3f47a0
void sub_003F4500_0x3f4500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4500_0x3f4500");
#endif

    switch (ctx->pc) {
        case 0x3f4500u: goto label_3f4500;
        case 0x3f4504u: goto label_3f4504;
        case 0x3f4508u: goto label_3f4508;
        case 0x3f450cu: goto label_3f450c;
        case 0x3f4510u: goto label_3f4510;
        case 0x3f4514u: goto label_3f4514;
        case 0x3f4518u: goto label_3f4518;
        case 0x3f451cu: goto label_3f451c;
        case 0x3f4520u: goto label_3f4520;
        case 0x3f4524u: goto label_3f4524;
        case 0x3f4528u: goto label_3f4528;
        case 0x3f452cu: goto label_3f452c;
        case 0x3f4530u: goto label_3f4530;
        case 0x3f4534u: goto label_3f4534;
        case 0x3f4538u: goto label_3f4538;
        case 0x3f453cu: goto label_3f453c;
        case 0x3f4540u: goto label_3f4540;
        case 0x3f4544u: goto label_3f4544;
        case 0x3f4548u: goto label_3f4548;
        case 0x3f454cu: goto label_3f454c;
        case 0x3f4550u: goto label_3f4550;
        case 0x3f4554u: goto label_3f4554;
        case 0x3f4558u: goto label_3f4558;
        case 0x3f455cu: goto label_3f455c;
        case 0x3f4560u: goto label_3f4560;
        case 0x3f4564u: goto label_3f4564;
        case 0x3f4568u: goto label_3f4568;
        case 0x3f456cu: goto label_3f456c;
        case 0x3f4570u: goto label_3f4570;
        case 0x3f4574u: goto label_3f4574;
        case 0x3f4578u: goto label_3f4578;
        case 0x3f457cu: goto label_3f457c;
        case 0x3f4580u: goto label_3f4580;
        case 0x3f4584u: goto label_3f4584;
        case 0x3f4588u: goto label_3f4588;
        case 0x3f458cu: goto label_3f458c;
        case 0x3f4590u: goto label_3f4590;
        case 0x3f4594u: goto label_3f4594;
        case 0x3f4598u: goto label_3f4598;
        case 0x3f459cu: goto label_3f459c;
        case 0x3f45a0u: goto label_3f45a0;
        case 0x3f45a4u: goto label_3f45a4;
        case 0x3f45a8u: goto label_3f45a8;
        case 0x3f45acu: goto label_3f45ac;
        case 0x3f45b0u: goto label_3f45b0;
        case 0x3f45b4u: goto label_3f45b4;
        case 0x3f45b8u: goto label_3f45b8;
        case 0x3f45bcu: goto label_3f45bc;
        case 0x3f45c0u: goto label_3f45c0;
        case 0x3f45c4u: goto label_3f45c4;
        case 0x3f45c8u: goto label_3f45c8;
        case 0x3f45ccu: goto label_3f45cc;
        case 0x3f45d0u: goto label_3f45d0;
        case 0x3f45d4u: goto label_3f45d4;
        case 0x3f45d8u: goto label_3f45d8;
        case 0x3f45dcu: goto label_3f45dc;
        case 0x3f45e0u: goto label_3f45e0;
        case 0x3f45e4u: goto label_3f45e4;
        case 0x3f45e8u: goto label_3f45e8;
        case 0x3f45ecu: goto label_3f45ec;
        case 0x3f45f0u: goto label_3f45f0;
        case 0x3f45f4u: goto label_3f45f4;
        case 0x3f45f8u: goto label_3f45f8;
        case 0x3f45fcu: goto label_3f45fc;
        case 0x3f4600u: goto label_3f4600;
        case 0x3f4604u: goto label_3f4604;
        case 0x3f4608u: goto label_3f4608;
        case 0x3f460cu: goto label_3f460c;
        case 0x3f4610u: goto label_3f4610;
        case 0x3f4614u: goto label_3f4614;
        case 0x3f4618u: goto label_3f4618;
        case 0x3f461cu: goto label_3f461c;
        case 0x3f4620u: goto label_3f4620;
        case 0x3f4624u: goto label_3f4624;
        case 0x3f4628u: goto label_3f4628;
        case 0x3f462cu: goto label_3f462c;
        case 0x3f4630u: goto label_3f4630;
        case 0x3f4634u: goto label_3f4634;
        case 0x3f4638u: goto label_3f4638;
        case 0x3f463cu: goto label_3f463c;
        case 0x3f4640u: goto label_3f4640;
        case 0x3f4644u: goto label_3f4644;
        case 0x3f4648u: goto label_3f4648;
        case 0x3f464cu: goto label_3f464c;
        case 0x3f4650u: goto label_3f4650;
        case 0x3f4654u: goto label_3f4654;
        case 0x3f4658u: goto label_3f4658;
        case 0x3f465cu: goto label_3f465c;
        case 0x3f4660u: goto label_3f4660;
        case 0x3f4664u: goto label_3f4664;
        case 0x3f4668u: goto label_3f4668;
        case 0x3f466cu: goto label_3f466c;
        case 0x3f4670u: goto label_3f4670;
        case 0x3f4674u: goto label_3f4674;
        case 0x3f4678u: goto label_3f4678;
        case 0x3f467cu: goto label_3f467c;
        case 0x3f4680u: goto label_3f4680;
        case 0x3f4684u: goto label_3f4684;
        case 0x3f4688u: goto label_3f4688;
        case 0x3f468cu: goto label_3f468c;
        case 0x3f4690u: goto label_3f4690;
        case 0x3f4694u: goto label_3f4694;
        case 0x3f4698u: goto label_3f4698;
        case 0x3f469cu: goto label_3f469c;
        case 0x3f46a0u: goto label_3f46a0;
        case 0x3f46a4u: goto label_3f46a4;
        case 0x3f46a8u: goto label_3f46a8;
        case 0x3f46acu: goto label_3f46ac;
        case 0x3f46b0u: goto label_3f46b0;
        case 0x3f46b4u: goto label_3f46b4;
        case 0x3f46b8u: goto label_3f46b8;
        case 0x3f46bcu: goto label_3f46bc;
        case 0x3f46c0u: goto label_3f46c0;
        case 0x3f46c4u: goto label_3f46c4;
        case 0x3f46c8u: goto label_3f46c8;
        case 0x3f46ccu: goto label_3f46cc;
        case 0x3f46d0u: goto label_3f46d0;
        case 0x3f46d4u: goto label_3f46d4;
        case 0x3f46d8u: goto label_3f46d8;
        case 0x3f46dcu: goto label_3f46dc;
        case 0x3f46e0u: goto label_3f46e0;
        case 0x3f46e4u: goto label_3f46e4;
        case 0x3f46e8u: goto label_3f46e8;
        case 0x3f46ecu: goto label_3f46ec;
        case 0x3f46f0u: goto label_3f46f0;
        case 0x3f46f4u: goto label_3f46f4;
        case 0x3f46f8u: goto label_3f46f8;
        case 0x3f46fcu: goto label_3f46fc;
        case 0x3f4700u: goto label_3f4700;
        case 0x3f4704u: goto label_3f4704;
        case 0x3f4708u: goto label_3f4708;
        case 0x3f470cu: goto label_3f470c;
        case 0x3f4710u: goto label_3f4710;
        case 0x3f4714u: goto label_3f4714;
        case 0x3f4718u: goto label_3f4718;
        case 0x3f471cu: goto label_3f471c;
        case 0x3f4720u: goto label_3f4720;
        case 0x3f4724u: goto label_3f4724;
        case 0x3f4728u: goto label_3f4728;
        case 0x3f472cu: goto label_3f472c;
        case 0x3f4730u: goto label_3f4730;
        case 0x3f4734u: goto label_3f4734;
        case 0x3f4738u: goto label_3f4738;
        case 0x3f473cu: goto label_3f473c;
        case 0x3f4740u: goto label_3f4740;
        case 0x3f4744u: goto label_3f4744;
        case 0x3f4748u: goto label_3f4748;
        case 0x3f474cu: goto label_3f474c;
        case 0x3f4750u: goto label_3f4750;
        case 0x3f4754u: goto label_3f4754;
        case 0x3f4758u: goto label_3f4758;
        case 0x3f475cu: goto label_3f475c;
        case 0x3f4760u: goto label_3f4760;
        case 0x3f4764u: goto label_3f4764;
        case 0x3f4768u: goto label_3f4768;
        case 0x3f476cu: goto label_3f476c;
        case 0x3f4770u: goto label_3f4770;
        case 0x3f4774u: goto label_3f4774;
        case 0x3f4778u: goto label_3f4778;
        case 0x3f477cu: goto label_3f477c;
        case 0x3f4780u: goto label_3f4780;
        case 0x3f4784u: goto label_3f4784;
        case 0x3f4788u: goto label_3f4788;
        case 0x3f478cu: goto label_3f478c;
        case 0x3f4790u: goto label_3f4790;
        case 0x3f4794u: goto label_3f4794;
        case 0x3f4798u: goto label_3f4798;
        case 0x3f479cu: goto label_3f479c;
        default: break;
    }

    ctx->pc = 0x3f4500u;

label_3f4500:
    // 0x3f4500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f4500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f4504:
    // 0x3f4504: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f4504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f4508:
    // 0x3f4508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f4508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f450c:
    // 0x3f450c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f4510:
    // 0x3f4510: 0x8c4789c8  lw          $a3, -0x7638($v0)
    ctx->pc = 0x3f4510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_3f4514:
    // 0x3f4514: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
label_3f4518:
    if (ctx->pc == 0x3F4518u) {
        ctx->pc = 0x3F4518u;
            // 0x3f4518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F451Cu;
        goto label_3f451c;
    }
    ctx->pc = 0x3F4514u;
    {
        const bool branch_taken_0x3f4514 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4514u;
            // 0x3f4518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4514) {
            ctx->pc = 0x3F4520u;
            goto label_3f4520;
        }
    }
    ctx->pc = 0x3F451Cu;
label_3f451c:
    // 0x3f451c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3f451cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3f4520:
    // 0x3f4520: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f4520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f4524:
    // 0x3f4524: 0x8c4589e0  lw          $a1, -0x7620($v0)
    ctx->pc = 0x3f4524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3f4528:
    // 0x3f4528: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3f452c:
    if (ctx->pc == 0x3F452Cu) {
        ctx->pc = 0x3F452Cu;
            // 0x3f452c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4530u;
        goto label_3f4530;
    }
    ctx->pc = 0x3F4528u;
    {
        const bool branch_taken_0x3f4528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4528) {
            ctx->pc = 0x3F452Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4528u;
            // 0x3f452c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4538u;
            goto label_3f4538;
        }
    }
    ctx->pc = 0x3F4530u;
label_3f4530:
    // 0x3f4530: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3f4530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3f4534:
    // 0x3f4534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4538:
    // 0x3f4538: 0xc0ee4d8  jal         func_3B9360
label_3f453c:
    if (ctx->pc == 0x3F453Cu) {
        ctx->pc = 0x3F453Cu;
            // 0x3f453c: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x3F4540u;
        goto label_3f4540;
    }
    ctx->pc = 0x3F4538u;
    SET_GPR_U32(ctx, 31, 0x3F4540u);
    ctx->pc = 0x3F453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4538u;
            // 0x3f453c: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9360u;
    if (runtime->hasFunction(0x3B9360u)) {
        auto targetFn = runtime->lookupFunction(0x3B9360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4540u; }
        if (ctx->pc != 0x3F4540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9360_0x3b9360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4540u; }
        if (ctx->pc != 0x3F4540u) { return; }
    }
    ctx->pc = 0x3F4540u;
label_3f4540:
    // 0x3f4540: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f4540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f4544:
    // 0x3f4544: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x3f4544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_3f4548:
    // 0x3f4548: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x3f4548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
label_3f454c:
    // 0x3f454c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3f454cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_3f4550:
    // 0x3f4550: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x3f4550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_3f4554:
    // 0x3f4554: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f4554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f4558:
    // 0x3f4558: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3f4558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_3f455c:
    // 0x3f455c: 0x2602004c  addiu       $v0, $s0, 0x4C
    ctx->pc = 0x3f455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_3f4560:
    // 0x3f4560: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x3f4560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_3f4564:
    // 0x3f4564: 0x2445ffb4  addiu       $a1, $v0, -0x4C
    ctx->pc = 0x3f4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967220));
label_3f4568:
    // 0x3f4568: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3f4568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3f456c:
    // 0x3f456c: 0x24c6a2b0  addiu       $a2, $a2, -0x5D50
    ctx->pc = 0x3f456cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943408));
label_3f4570:
    // 0x3f4570: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x3f4570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_3f4574:
    // 0x3f4574: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f4574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f4578:
    // 0x3f4578: 0xae06004c  sw          $a2, 0x4C($s0)
    ctx->pc = 0x3f4578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 6));
label_3f457c:
    // 0x3f457c: 0x2484a230  addiu       $a0, $a0, -0x5DD0
    ctx->pc = 0x3f457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943280));
label_3f4580:
    // 0x3f4580: 0xac450e68  sw          $a1, 0xE68($v0)
    ctx->pc = 0x3f4580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3688), GPR_U32(ctx, 5));
label_3f4584:
    // 0x3f4584: 0x2463a25c  addiu       $v1, $v1, -0x5DA4
    ctx->pc = 0x3f4584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943324));
label_3f4588:
    // 0x3f4588: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x3f4588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_3f458c:
    // 0x3f458c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f458cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4590:
    // 0x3f4590: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x3f4590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_3f4594:
    // 0x3f4594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4598:
    // 0x3f4598: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x3f4598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
label_3f459c:
    // 0x3f459c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3f459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3f45a0:
    // 0x3f45a0: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x3f45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
label_3f45a4:
    // 0x3f45a4: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x3f45a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
label_3f45a8:
    // 0x3f45a8: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x3f45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
label_3f45ac:
    // 0x3f45ac: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x3f45acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
label_3f45b0:
    // 0x3f45b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f45b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3f45b4:
    // 0x3f45b4: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x3f45b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_3f45b8:
    // 0x3f45b8: 0x28c20015  slti        $v0, $a2, 0x15
    ctx->pc = 0x3f45b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
label_3f45bc:
    // 0x3f45bc: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x3f45bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
label_3f45c0:
    // 0x3f45c0: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x3f45c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
label_3f45c4:
    // 0x3f45c4: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x3f45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_3f45c8:
    // 0x3f45c8: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x3f45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
label_3f45cc:
    // 0x3f45cc: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x3f45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_3f45d0:
    // 0x3f45d0: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x3f45d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
label_3f45d4:
    // 0x3f45d4: 0xaca30070  sw          $v1, 0x70($a1)
    ctx->pc = 0x3f45d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
label_3f45d8:
    // 0x3f45d8: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x3f45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
label_3f45dc:
    // 0x3f45dc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_3f45e0:
    if (ctx->pc == 0x3F45E0u) {
        ctx->pc = 0x3F45E0u;
            // 0x3f45e0: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x3F45E4u;
        goto label_3f45e4;
    }
    ctx->pc = 0x3F45DCu;
    {
        const bool branch_taken_0x3f45dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F45E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F45DCu;
            // 0x3f45e0: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f45dc) {
            ctx->pc = 0x3F45ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f45ac;
        }
    }
    ctx->pc = 0x3F45E4u;
label_3f45e4:
    // 0x3f45e4: 0x260403ac  addiu       $a0, $s0, 0x3AC
    ctx->pc = 0x3f45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 940));
label_3f45e8:
    // 0x3f45e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f45e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f45ec:
    // 0x3f45ec: 0xc04a576  jal         func_1295D8
label_3f45f0:
    if (ctx->pc == 0x3F45F0u) {
        ctx->pc = 0x3F45F0u;
            // 0x3f45f0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F45F4u;
        goto label_3f45f4;
    }
    ctx->pc = 0x3F45ECu;
    SET_GPR_U32(ctx, 31, 0x3F45F4u);
    ctx->pc = 0x3F45F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F45ECu;
            // 0x3f45f0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F45F4u; }
        if (ctx->pc != 0x3F45F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F45F4u; }
        if (ctx->pc != 0x3F45F4u) { return; }
    }
    ctx->pc = 0x3F45F4u;
label_3f45f4:
    // 0x3f45f4: 0x260403cc  addiu       $a0, $s0, 0x3CC
    ctx->pc = 0x3f45f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 972));
label_3f45f8:
    // 0x3f45f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f45f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f45fc:
    // 0x3f45fc: 0xc04a576  jal         func_1295D8
label_3f4600:
    if (ctx->pc == 0x3F4600u) {
        ctx->pc = 0x3F4600u;
            // 0x3f4600: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F4604u;
        goto label_3f4604;
    }
    ctx->pc = 0x3F45FCu;
    SET_GPR_U32(ctx, 31, 0x3F4604u);
    ctx->pc = 0x3F4600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F45FCu;
            // 0x3f4600: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4604u; }
        if (ctx->pc != 0x3F4604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4604u; }
        if (ctx->pc != 0x3F4604u) { return; }
    }
    ctx->pc = 0x3F4604u;
label_3f4604:
    // 0x3f4604: 0x260403ec  addiu       $a0, $s0, 0x3EC
    ctx->pc = 0x3f4604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1004));
label_3f4608:
    // 0x3f4608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f460c:
    // 0x3f460c: 0xc04a576  jal         func_1295D8
label_3f4610:
    if (ctx->pc == 0x3F4610u) {
        ctx->pc = 0x3F4610u;
            // 0x3f4610: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F4614u;
        goto label_3f4614;
    }
    ctx->pc = 0x3F460Cu;
    SET_GPR_U32(ctx, 31, 0x3F4614u);
    ctx->pc = 0x3F4610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F460Cu;
            // 0x3f4610: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4614u; }
        if (ctx->pc != 0x3F4614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4614u; }
        if (ctx->pc != 0x3F4614u) { return; }
    }
    ctx->pc = 0x3F4614u;
label_3f4614:
    // 0x3f4614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f4614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4618:
    // 0x3f4618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f4618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f461c:
    // 0x3f461c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f461cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4620:
    // 0x3f4620: 0x3e00008  jr          $ra
label_3f4624:
    if (ctx->pc == 0x3F4624u) {
        ctx->pc = 0x3F4624u;
            // 0x3f4624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F4628u;
        goto label_3f4628;
    }
    ctx->pc = 0x3F4620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4620u;
            // 0x3f4624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F4628u;
label_3f4628:
    // 0x3f4628: 0x0  nop
    ctx->pc = 0x3f4628u;
    // NOP
label_3f462c:
    // 0x3f462c: 0x0  nop
    ctx->pc = 0x3f462cu;
    // NOP
label_3f4630:
    // 0x3f4630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f4630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f4634:
    // 0x3f4634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f4634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f4638:
    // 0x3f4638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f4638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f463c:
    // 0x3f463c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f463cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4640:
    // 0x3f4640: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_3f4644:
    if (ctx->pc == 0x3F4644u) {
        ctx->pc = 0x3F4644u;
            // 0x3f4644: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4648u;
        goto label_3f4648;
    }
    ctx->pc = 0x3F4640u;
    {
        const bool branch_taken_0x3f4640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4640) {
            ctx->pc = 0x3F4644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4640u;
            // 0x3f4644: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4674u;
            goto label_3f4674;
        }
    }
    ctx->pc = 0x3F4648u;
label_3f4648:
    // 0x3f4648: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f4648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f464c:
    // 0x3f464c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3f464cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_3f4650:
    // 0x3f4650: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x3f4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
label_3f4654:
    // 0x3f4654: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3f4654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3f4658:
    // 0x3f4658: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f4658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3f465c:
    // 0x3f465c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f4660:
    // 0x3f4660: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_3f4664:
    if (ctx->pc == 0x3F4664u) {
        ctx->pc = 0x3F4664u;
            // 0x3f4664: 0xac400e68  sw          $zero, 0xE68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3688), GPR_U32(ctx, 0));
        ctx->pc = 0x3F4668u;
        goto label_3f4668;
    }
    ctx->pc = 0x3F4660u;
    {
        const bool branch_taken_0x3f4660 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F4664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4660u;
            // 0x3f4664: 0xac400e68  sw          $zero, 0xE68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4660) {
            ctx->pc = 0x3F4670u;
            goto label_3f4670;
        }
    }
    ctx->pc = 0x3F4668u;
label_3f4668:
    // 0x3f4668: 0xc0400a8  jal         func_1002A0
label_3f466c:
    if (ctx->pc == 0x3F466Cu) {
        ctx->pc = 0x3F4670u;
        goto label_3f4670;
    }
    ctx->pc = 0x3F4668u;
    SET_GPR_U32(ctx, 31, 0x3F4670u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4670u; }
        if (ctx->pc != 0x3F4670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4670u; }
        if (ctx->pc != 0x3F4670u) { return; }
    }
    ctx->pc = 0x3F4670u;
label_3f4670:
    // 0x3f4670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f4670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4674:
    // 0x3f4674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f4674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4678:
    // 0x3f4678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f467c:
    // 0x3f467c: 0x3e00008  jr          $ra
label_3f4680:
    if (ctx->pc == 0x3F4680u) {
        ctx->pc = 0x3F4680u;
            // 0x3f4680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F4684u;
        goto label_3f4684;
    }
    ctx->pc = 0x3F467Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F467Cu;
            // 0x3f4680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F4684u;
label_3f4684:
    // 0x3f4684: 0x0  nop
    ctx->pc = 0x3f4684u;
    // NOP
label_3f4688:
    // 0x3f4688: 0x0  nop
    ctx->pc = 0x3f4688u;
    // NOP
label_3f468c:
    // 0x3f468c: 0x0  nop
    ctx->pc = 0x3f468cu;
    // NOP
label_3f4690:
    // 0x3f4690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f4694:
    // 0x3f4694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f4694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f4698:
    // 0x3f4698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f4698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f469c:
    // 0x3f469c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f46a0:
    // 0x3f46a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f46a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f46a4:
    // 0x3f46a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f46a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f46a8:
    // 0x3f46a8: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_3f46ac:
    if (ctx->pc == 0x3F46ACu) {
        ctx->pc = 0x3F46ACu;
            // 0x3f46ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F46B0u;
        goto label_3f46b0;
    }
    ctx->pc = 0x3F46A8u;
    {
        const bool branch_taken_0x3f46a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F46ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F46A8u;
            // 0x3f46ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f46a8) {
            ctx->pc = 0x3F4780u;
            goto label_3f4780;
        }
    }
    ctx->pc = 0x3F46B0u;
label_3f46b0:
    // 0x3f46b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f46b4:
    // 0x3f46b4: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x3f46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
label_3f46b8:
    // 0x3f46b8: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_3f46bc:
    if (ctx->pc == 0x3F46BCu) {
        ctx->pc = 0x3F46BCu;
            // 0x3f46bc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x3F46C0u;
        goto label_3f46c0;
    }
    ctx->pc = 0x3F46B8u;
    {
        const bool branch_taken_0x3f46b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F46BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F46B8u;
            // 0x3f46bc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f46b8) {
            ctx->pc = 0x3F4768u;
            goto label_3f4768;
        }
    }
    ctx->pc = 0x3F46C0u;
label_3f46c0:
    // 0x3f46c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f46c4:
    // 0x3f46c4: 0x24428b90  addiu       $v0, $v0, -0x7470
    ctx->pc = 0x3f46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937488));
label_3f46c8:
    // 0x3f46c8: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x3f46c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_3f46cc:
    // 0x3f46cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3f46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3f46d0:
    // 0x3f46d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3f46d4:
    if (ctx->pc == 0x3F46D4u) {
        ctx->pc = 0x3F46D4u;
            // 0x3f46d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F46D8u;
        goto label_3f46d8;
    }
    ctx->pc = 0x3F46D0u;
    {
        const bool branch_taken_0x3f46d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F46D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F46D0u;
            // 0x3f46d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f46d0) {
            ctx->pc = 0x3F4750u;
            goto label_3f4750;
        }
    }
    ctx->pc = 0x3F46D8u;
label_3f46d8:
    // 0x3f46d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f46d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f46dc:
    // 0x3f46dc: 0xc0fd1e8  jal         func_3F47A0
label_3f46e0:
    if (ctx->pc == 0x3F46E0u) {
        ctx->pc = 0x3F46E0u;
            // 0x3f46e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F46E4u;
        goto label_3f46e4;
    }
    ctx->pc = 0x3F46DCu;
    SET_GPR_U32(ctx, 31, 0x3F46E4u);
    ctx->pc = 0x3F46E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F46DCu;
            // 0x3f46e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F47A0u;
    if (runtime->hasFunction(0x3F47A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F46E4u; }
        if (ctx->pc != 0x3F46E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F47A0_0x3f47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F46E4u; }
        if (ctx->pc != 0x3F46E4u) { return; }
    }
    ctx->pc = 0x3F46E4u;
label_3f46e4:
    // 0x3f46e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f46e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f46e8:
    // 0x3f46e8: 0x8c990044  lw          $t9, 0x44($a0)
    ctx->pc = 0x3f46e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3f46ec:
    // 0x3f46ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f46ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f46f0:
    // 0x3f46f0: 0x320f809  jalr        $t9
label_3f46f4:
    if (ctx->pc == 0x3F46F4u) {
        ctx->pc = 0x3F46F4u;
            // 0x3f46f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F46F8u;
        goto label_3f46f8;
    }
    ctx->pc = 0x3F46F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F46F8u);
        ctx->pc = 0x3F46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F46F0u;
            // 0x3f46f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F46F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F46F8u; }
            if (ctx->pc != 0x3F46F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F46F8u;
label_3f46f8:
    // 0x3f46f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f46f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f46fc:
    // 0x3f46fc: 0xc0fd1e8  jal         func_3F47A0
label_3f4700:
    if (ctx->pc == 0x3F4700u) {
        ctx->pc = 0x3F4700u;
            // 0x3f4700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4704u;
        goto label_3f4704;
    }
    ctx->pc = 0x3F46FCu;
    SET_GPR_U32(ctx, 31, 0x3F4704u);
    ctx->pc = 0x3F4700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F46FCu;
            // 0x3f4700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F47A0u;
    if (runtime->hasFunction(0x3F47A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4704u; }
        if (ctx->pc != 0x3F4704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F47A0_0x3f47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4704u; }
        if (ctx->pc != 0x3F4704u) { return; }
    }
    ctx->pc = 0x3F4704u;
label_3f4704:
    // 0x3f4704: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f4704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f4708:
    // 0x3f4708: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3f470c:
    if (ctx->pc == 0x3F470Cu) {
        ctx->pc = 0x3F4710u;
        goto label_3f4710;
    }
    ctx->pc = 0x3F4708u;
    {
        const bool branch_taken_0x3f4708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4708) {
            ctx->pc = 0x3F4738u;
            goto label_3f4738;
        }
    }
    ctx->pc = 0x3F4710u;
label_3f4710:
    // 0x3f4710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4714:
    // 0x3f4714: 0xc0fd1e8  jal         func_3F47A0
label_3f4718:
    if (ctx->pc == 0x3F4718u) {
        ctx->pc = 0x3F4718u;
            // 0x3f4718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F471Cu;
        goto label_3f471c;
    }
    ctx->pc = 0x3F4714u;
    SET_GPR_U32(ctx, 31, 0x3F471Cu);
    ctx->pc = 0x3F4718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4714u;
            // 0x3f4718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F47A0u;
    if (runtime->hasFunction(0x3F47A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F471Cu; }
        if (ctx->pc != 0x3F471Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F47A0_0x3f47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F471Cu; }
        if (ctx->pc != 0x3F471Cu) { return; }
    }
    ctx->pc = 0x3F471Cu;
label_3f471c:
    // 0x3f471c: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x3f471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3f4720:
    // 0x3f4720: 0xc0fe48c  jal         func_3F9230
label_3f4724:
    if (ctx->pc == 0x3F4724u) {
        ctx->pc = 0x3F4724u;
            // 0x3f4724: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3F4728u;
        goto label_3f4728;
    }
    ctx->pc = 0x3F4720u;
    SET_GPR_U32(ctx, 31, 0x3F4728u);
    ctx->pc = 0x3F4724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4720u;
            // 0x3f4724: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4728u; }
        if (ctx->pc != 0x3F4728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4728u; }
        if (ctx->pc != 0x3F4728u) { return; }
    }
    ctx->pc = 0x3F4728u;
label_3f4728:
    // 0x3f4728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f472c:
    // 0x3f472c: 0xc0fd1e8  jal         func_3F47A0
label_3f4730:
    if (ctx->pc == 0x3F4730u) {
        ctx->pc = 0x3F4730u;
            // 0x3f4730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4734u;
        goto label_3f4734;
    }
    ctx->pc = 0x3F472Cu;
    SET_GPR_U32(ctx, 31, 0x3F4734u);
    ctx->pc = 0x3F4730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F472Cu;
            // 0x3f4730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F47A0u;
    if (runtime->hasFunction(0x3F47A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4734u; }
        if (ctx->pc != 0x3F4734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F47A0_0x3f47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4734u; }
        if (ctx->pc != 0x3F4734u) { return; }
    }
    ctx->pc = 0x3F4734u;
label_3f4734:
    // 0x3f4734: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3f4734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3f4738:
    // 0x3f4738: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3f4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3f473c:
    // 0x3f473c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f473cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3f4740:
    // 0x3f4740: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3f4740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f4744:
    // 0x3f4744: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_3f4748:
    if (ctx->pc == 0x3F4748u) {
        ctx->pc = 0x3F4748u;
            // 0x3f4748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F474Cu;
        goto label_3f474c;
    }
    ctx->pc = 0x3F4744u;
    {
        const bool branch_taken_0x3f4744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4744) {
            ctx->pc = 0x3F4748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4744u;
            // 0x3f4748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F46DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f46dc;
        }
    }
    ctx->pc = 0x3F474Cu;
label_3f474c:
    // 0x3f474c: 0x0  nop
    ctx->pc = 0x3f474cu;
    // NOP
label_3f4750:
    // 0x3f4750: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3f4750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3f4754:
    // 0x3f4754: 0xc0ad6c4  jal         func_2B5B10
label_3f4758:
    if (ctx->pc == 0x3F4758u) {
        ctx->pc = 0x3F4758u;
            // 0x3f4758: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
        ctx->pc = 0x3F475Cu;
        goto label_3f475c;
    }
    ctx->pc = 0x3F4754u;
    SET_GPR_U32(ctx, 31, 0x3F475Cu);
    ctx->pc = 0x3F4758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4754u;
            // 0x3f4758: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F475Cu; }
        if (ctx->pc != 0x3F475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F475Cu; }
        if (ctx->pc != 0x3F475Cu) { return; }
    }
    ctx->pc = 0x3F475Cu;
label_3f475c:
    // 0x3f475c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f475cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4760:
    // 0x3f4760: 0xc0ee520  jal         func_3B9480
label_3f4764:
    if (ctx->pc == 0x3F4764u) {
        ctx->pc = 0x3F4764u;
            // 0x3f4764: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F4768u;
        goto label_3f4768;
    }
    ctx->pc = 0x3F4760u;
    SET_GPR_U32(ctx, 31, 0x3F4768u);
    ctx->pc = 0x3F4764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4760u;
            // 0x3f4764: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9480u;
    if (runtime->hasFunction(0x3B9480u)) {
        auto targetFn = runtime->lookupFunction(0x3B9480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4768u; }
        if (ctx->pc != 0x3F4768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9480_0x3b9480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4768u; }
        if (ctx->pc != 0x3F4768u) { return; }
    }
    ctx->pc = 0x3F4768u;
label_3f4768:
    // 0x3f4768: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3f4768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3f476c:
    // 0x3f476c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f476cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f4770:
    // 0x3f4770: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f4774:
    if (ctx->pc == 0x3F4774u) {
        ctx->pc = 0x3F4774u;
            // 0x3f4774: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4778u;
        goto label_3f4778;
    }
    ctx->pc = 0x3F4770u;
    {
        const bool branch_taken_0x3f4770 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f4770) {
            ctx->pc = 0x3F4774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4770u;
            // 0x3f4774: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4784u;
            goto label_3f4784;
        }
    }
    ctx->pc = 0x3F4778u;
label_3f4778:
    // 0x3f4778: 0xc0400a8  jal         func_1002A0
label_3f477c:
    if (ctx->pc == 0x3F477Cu) {
        ctx->pc = 0x3F477Cu;
            // 0x3f477c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4780u;
        goto label_3f4780;
    }
    ctx->pc = 0x3F4778u;
    SET_GPR_U32(ctx, 31, 0x3F4780u);
    ctx->pc = 0x3F477Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4778u;
            // 0x3f477c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4780u; }
        if (ctx->pc != 0x3F4780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4780u; }
        if (ctx->pc != 0x3F4780u) { return; }
    }
    ctx->pc = 0x3F4780u;
label_3f4780:
    // 0x3f4780: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3f4780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4784:
    // 0x3f4784: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f4784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f4788:
    // 0x3f4788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f4788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f478c:
    // 0x3f478c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f478cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4790:
    // 0x3f4790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4794:
    // 0x3f4794: 0x3e00008  jr          $ra
label_3f4798:
    if (ctx->pc == 0x3F4798u) {
        ctx->pc = 0x3F4798u;
            // 0x3f4798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F479Cu;
        goto label_3f479c;
    }
    ctx->pc = 0x3F4794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4794u;
            // 0x3f4798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F479Cu;
label_3f479c:
    // 0x3f479c: 0x0  nop
    ctx->pc = 0x3f479cu;
    // NOP
}
