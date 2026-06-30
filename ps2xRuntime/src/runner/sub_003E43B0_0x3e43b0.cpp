#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E43B0
// Address: 0x3e43b0 - 0x3e4760
void sub_003E43B0_0x3e43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E43B0_0x3e43b0");
#endif

    switch (ctx->pc) {
        case 0x3e43b0u: goto label_3e43b0;
        case 0x3e43b4u: goto label_3e43b4;
        case 0x3e43b8u: goto label_3e43b8;
        case 0x3e43bcu: goto label_3e43bc;
        case 0x3e43c0u: goto label_3e43c0;
        case 0x3e43c4u: goto label_3e43c4;
        case 0x3e43c8u: goto label_3e43c8;
        case 0x3e43ccu: goto label_3e43cc;
        case 0x3e43d0u: goto label_3e43d0;
        case 0x3e43d4u: goto label_3e43d4;
        case 0x3e43d8u: goto label_3e43d8;
        case 0x3e43dcu: goto label_3e43dc;
        case 0x3e43e0u: goto label_3e43e0;
        case 0x3e43e4u: goto label_3e43e4;
        case 0x3e43e8u: goto label_3e43e8;
        case 0x3e43ecu: goto label_3e43ec;
        case 0x3e43f0u: goto label_3e43f0;
        case 0x3e43f4u: goto label_3e43f4;
        case 0x3e43f8u: goto label_3e43f8;
        case 0x3e43fcu: goto label_3e43fc;
        case 0x3e4400u: goto label_3e4400;
        case 0x3e4404u: goto label_3e4404;
        case 0x3e4408u: goto label_3e4408;
        case 0x3e440cu: goto label_3e440c;
        case 0x3e4410u: goto label_3e4410;
        case 0x3e4414u: goto label_3e4414;
        case 0x3e4418u: goto label_3e4418;
        case 0x3e441cu: goto label_3e441c;
        case 0x3e4420u: goto label_3e4420;
        case 0x3e4424u: goto label_3e4424;
        case 0x3e4428u: goto label_3e4428;
        case 0x3e442cu: goto label_3e442c;
        case 0x3e4430u: goto label_3e4430;
        case 0x3e4434u: goto label_3e4434;
        case 0x3e4438u: goto label_3e4438;
        case 0x3e443cu: goto label_3e443c;
        case 0x3e4440u: goto label_3e4440;
        case 0x3e4444u: goto label_3e4444;
        case 0x3e4448u: goto label_3e4448;
        case 0x3e444cu: goto label_3e444c;
        case 0x3e4450u: goto label_3e4450;
        case 0x3e4454u: goto label_3e4454;
        case 0x3e4458u: goto label_3e4458;
        case 0x3e445cu: goto label_3e445c;
        case 0x3e4460u: goto label_3e4460;
        case 0x3e4464u: goto label_3e4464;
        case 0x3e4468u: goto label_3e4468;
        case 0x3e446cu: goto label_3e446c;
        case 0x3e4470u: goto label_3e4470;
        case 0x3e4474u: goto label_3e4474;
        case 0x3e4478u: goto label_3e4478;
        case 0x3e447cu: goto label_3e447c;
        case 0x3e4480u: goto label_3e4480;
        case 0x3e4484u: goto label_3e4484;
        case 0x3e4488u: goto label_3e4488;
        case 0x3e448cu: goto label_3e448c;
        case 0x3e4490u: goto label_3e4490;
        case 0x3e4494u: goto label_3e4494;
        case 0x3e4498u: goto label_3e4498;
        case 0x3e449cu: goto label_3e449c;
        case 0x3e44a0u: goto label_3e44a0;
        case 0x3e44a4u: goto label_3e44a4;
        case 0x3e44a8u: goto label_3e44a8;
        case 0x3e44acu: goto label_3e44ac;
        case 0x3e44b0u: goto label_3e44b0;
        case 0x3e44b4u: goto label_3e44b4;
        case 0x3e44b8u: goto label_3e44b8;
        case 0x3e44bcu: goto label_3e44bc;
        case 0x3e44c0u: goto label_3e44c0;
        case 0x3e44c4u: goto label_3e44c4;
        case 0x3e44c8u: goto label_3e44c8;
        case 0x3e44ccu: goto label_3e44cc;
        case 0x3e44d0u: goto label_3e44d0;
        case 0x3e44d4u: goto label_3e44d4;
        case 0x3e44d8u: goto label_3e44d8;
        case 0x3e44dcu: goto label_3e44dc;
        case 0x3e44e0u: goto label_3e44e0;
        case 0x3e44e4u: goto label_3e44e4;
        case 0x3e44e8u: goto label_3e44e8;
        case 0x3e44ecu: goto label_3e44ec;
        case 0x3e44f0u: goto label_3e44f0;
        case 0x3e44f4u: goto label_3e44f4;
        case 0x3e44f8u: goto label_3e44f8;
        case 0x3e44fcu: goto label_3e44fc;
        case 0x3e4500u: goto label_3e4500;
        case 0x3e4504u: goto label_3e4504;
        case 0x3e4508u: goto label_3e4508;
        case 0x3e450cu: goto label_3e450c;
        case 0x3e4510u: goto label_3e4510;
        case 0x3e4514u: goto label_3e4514;
        case 0x3e4518u: goto label_3e4518;
        case 0x3e451cu: goto label_3e451c;
        case 0x3e4520u: goto label_3e4520;
        case 0x3e4524u: goto label_3e4524;
        case 0x3e4528u: goto label_3e4528;
        case 0x3e452cu: goto label_3e452c;
        case 0x3e4530u: goto label_3e4530;
        case 0x3e4534u: goto label_3e4534;
        case 0x3e4538u: goto label_3e4538;
        case 0x3e453cu: goto label_3e453c;
        case 0x3e4540u: goto label_3e4540;
        case 0x3e4544u: goto label_3e4544;
        case 0x3e4548u: goto label_3e4548;
        case 0x3e454cu: goto label_3e454c;
        case 0x3e4550u: goto label_3e4550;
        case 0x3e4554u: goto label_3e4554;
        case 0x3e4558u: goto label_3e4558;
        case 0x3e455cu: goto label_3e455c;
        case 0x3e4560u: goto label_3e4560;
        case 0x3e4564u: goto label_3e4564;
        case 0x3e4568u: goto label_3e4568;
        case 0x3e456cu: goto label_3e456c;
        case 0x3e4570u: goto label_3e4570;
        case 0x3e4574u: goto label_3e4574;
        case 0x3e4578u: goto label_3e4578;
        case 0x3e457cu: goto label_3e457c;
        case 0x3e4580u: goto label_3e4580;
        case 0x3e4584u: goto label_3e4584;
        case 0x3e4588u: goto label_3e4588;
        case 0x3e458cu: goto label_3e458c;
        case 0x3e4590u: goto label_3e4590;
        case 0x3e4594u: goto label_3e4594;
        case 0x3e4598u: goto label_3e4598;
        case 0x3e459cu: goto label_3e459c;
        case 0x3e45a0u: goto label_3e45a0;
        case 0x3e45a4u: goto label_3e45a4;
        case 0x3e45a8u: goto label_3e45a8;
        case 0x3e45acu: goto label_3e45ac;
        case 0x3e45b0u: goto label_3e45b0;
        case 0x3e45b4u: goto label_3e45b4;
        case 0x3e45b8u: goto label_3e45b8;
        case 0x3e45bcu: goto label_3e45bc;
        case 0x3e45c0u: goto label_3e45c0;
        case 0x3e45c4u: goto label_3e45c4;
        case 0x3e45c8u: goto label_3e45c8;
        case 0x3e45ccu: goto label_3e45cc;
        case 0x3e45d0u: goto label_3e45d0;
        case 0x3e45d4u: goto label_3e45d4;
        case 0x3e45d8u: goto label_3e45d8;
        case 0x3e45dcu: goto label_3e45dc;
        case 0x3e45e0u: goto label_3e45e0;
        case 0x3e45e4u: goto label_3e45e4;
        case 0x3e45e8u: goto label_3e45e8;
        case 0x3e45ecu: goto label_3e45ec;
        case 0x3e45f0u: goto label_3e45f0;
        case 0x3e45f4u: goto label_3e45f4;
        case 0x3e45f8u: goto label_3e45f8;
        case 0x3e45fcu: goto label_3e45fc;
        case 0x3e4600u: goto label_3e4600;
        case 0x3e4604u: goto label_3e4604;
        case 0x3e4608u: goto label_3e4608;
        case 0x3e460cu: goto label_3e460c;
        case 0x3e4610u: goto label_3e4610;
        case 0x3e4614u: goto label_3e4614;
        case 0x3e4618u: goto label_3e4618;
        case 0x3e461cu: goto label_3e461c;
        case 0x3e4620u: goto label_3e4620;
        case 0x3e4624u: goto label_3e4624;
        case 0x3e4628u: goto label_3e4628;
        case 0x3e462cu: goto label_3e462c;
        case 0x3e4630u: goto label_3e4630;
        case 0x3e4634u: goto label_3e4634;
        case 0x3e4638u: goto label_3e4638;
        case 0x3e463cu: goto label_3e463c;
        case 0x3e4640u: goto label_3e4640;
        case 0x3e4644u: goto label_3e4644;
        case 0x3e4648u: goto label_3e4648;
        case 0x3e464cu: goto label_3e464c;
        case 0x3e4650u: goto label_3e4650;
        case 0x3e4654u: goto label_3e4654;
        case 0x3e4658u: goto label_3e4658;
        case 0x3e465cu: goto label_3e465c;
        case 0x3e4660u: goto label_3e4660;
        case 0x3e4664u: goto label_3e4664;
        case 0x3e4668u: goto label_3e4668;
        case 0x3e466cu: goto label_3e466c;
        case 0x3e4670u: goto label_3e4670;
        case 0x3e4674u: goto label_3e4674;
        case 0x3e4678u: goto label_3e4678;
        case 0x3e467cu: goto label_3e467c;
        case 0x3e4680u: goto label_3e4680;
        case 0x3e4684u: goto label_3e4684;
        case 0x3e4688u: goto label_3e4688;
        case 0x3e468cu: goto label_3e468c;
        case 0x3e4690u: goto label_3e4690;
        case 0x3e4694u: goto label_3e4694;
        case 0x3e4698u: goto label_3e4698;
        case 0x3e469cu: goto label_3e469c;
        case 0x3e46a0u: goto label_3e46a0;
        case 0x3e46a4u: goto label_3e46a4;
        case 0x3e46a8u: goto label_3e46a8;
        case 0x3e46acu: goto label_3e46ac;
        case 0x3e46b0u: goto label_3e46b0;
        case 0x3e46b4u: goto label_3e46b4;
        case 0x3e46b8u: goto label_3e46b8;
        case 0x3e46bcu: goto label_3e46bc;
        case 0x3e46c0u: goto label_3e46c0;
        case 0x3e46c4u: goto label_3e46c4;
        case 0x3e46c8u: goto label_3e46c8;
        case 0x3e46ccu: goto label_3e46cc;
        case 0x3e46d0u: goto label_3e46d0;
        case 0x3e46d4u: goto label_3e46d4;
        case 0x3e46d8u: goto label_3e46d8;
        case 0x3e46dcu: goto label_3e46dc;
        case 0x3e46e0u: goto label_3e46e0;
        case 0x3e46e4u: goto label_3e46e4;
        case 0x3e46e8u: goto label_3e46e8;
        case 0x3e46ecu: goto label_3e46ec;
        case 0x3e46f0u: goto label_3e46f0;
        case 0x3e46f4u: goto label_3e46f4;
        case 0x3e46f8u: goto label_3e46f8;
        case 0x3e46fcu: goto label_3e46fc;
        case 0x3e4700u: goto label_3e4700;
        case 0x3e4704u: goto label_3e4704;
        case 0x3e4708u: goto label_3e4708;
        case 0x3e470cu: goto label_3e470c;
        case 0x3e4710u: goto label_3e4710;
        case 0x3e4714u: goto label_3e4714;
        case 0x3e4718u: goto label_3e4718;
        case 0x3e471cu: goto label_3e471c;
        case 0x3e4720u: goto label_3e4720;
        case 0x3e4724u: goto label_3e4724;
        case 0x3e4728u: goto label_3e4728;
        case 0x3e472cu: goto label_3e472c;
        case 0x3e4730u: goto label_3e4730;
        case 0x3e4734u: goto label_3e4734;
        case 0x3e4738u: goto label_3e4738;
        case 0x3e473cu: goto label_3e473c;
        case 0x3e4740u: goto label_3e4740;
        case 0x3e4744u: goto label_3e4744;
        case 0x3e4748u: goto label_3e4748;
        case 0x3e474cu: goto label_3e474c;
        case 0x3e4750u: goto label_3e4750;
        case 0x3e4754u: goto label_3e4754;
        case 0x3e4758u: goto label_3e4758;
        case 0x3e475cu: goto label_3e475c;
        default: break;
    }

    ctx->pc = 0x3e43b0u;

label_3e43b0:
    // 0x3e43b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e43b4:
    // 0x3e43b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3e43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3e43b8:
    // 0x3e43b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e43b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e43bc:
    // 0x3e43bc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3e43bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e43c0:
    // 0x3e43c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e43c4:
    // 0x3e43c4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3e43c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_3e43c8:
    // 0x3e43c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3e43cc:
    // 0x3e43cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e43ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e43d0:
    // 0x3e43d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e43d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e43d4:
    // 0x3e43d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e43d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e43d8:
    // 0x3e43d8: 0xc0aeaf4  jal         func_2BABD0
label_3e43dc:
    if (ctx->pc == 0x3E43DCu) {
        ctx->pc = 0x3E43DCu;
            // 0x3e43dc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3E43E0u;
        goto label_3e43e0;
    }
    ctx->pc = 0x3E43D8u;
    SET_GPR_U32(ctx, 31, 0x3E43E0u);
    ctx->pc = 0x3E43DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E43D8u;
            // 0x3e43dc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E43E0u; }
        if (ctx->pc != 0x3E43E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E43E0u; }
        if (ctx->pc != 0x3E43E0u) { return; }
    }
    ctx->pc = 0x3E43E0u;
label_3e43e0:
    // 0x3e43e0: 0xc0f91f0  jal         func_3E47C0
label_3e43e4:
    if (ctx->pc == 0x3E43E4u) {
        ctx->pc = 0x3E43E4u;
            // 0x3e43e4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3E43E8u;
        goto label_3e43e8;
    }
    ctx->pc = 0x3E43E0u;
    SET_GPR_U32(ctx, 31, 0x3E43E8u);
    ctx->pc = 0x3E43E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E43E0u;
            // 0x3e43e4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E47C0u;
    if (runtime->hasFunction(0x3E47C0u)) {
        auto targetFn = runtime->lookupFunction(0x3E47C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E43E8u; }
        if (ctx->pc != 0x3E43E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E47C0_0x3e47c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E43E8u; }
        if (ctx->pc != 0x3E43E8u) { return; }
    }
    ctx->pc = 0x3E43E8u;
label_3e43e8:
    // 0x3e43e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e43ec:
    // 0x3e43ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e43f0:
    // 0x3e43f0: 0x24639b30  addiu       $v1, $v1, -0x64D0
    ctx->pc = 0x3e43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941488));
label_3e43f4:
    // 0x3e43f4: 0x24429b68  addiu       $v0, $v0, -0x6498
    ctx->pc = 0x3e43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
label_3e43f8:
    // 0x3e43f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3e43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3e43fc:
    // 0x3e43fc: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3e43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3e4400:
    // 0x3e4400: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3e4400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3e4404:
    // 0x3e4404: 0xc0f91e8  jal         func_3E47A0
label_3e4408:
    if (ctx->pc == 0x3E4408u) {
        ctx->pc = 0x3E4408u;
            // 0x3e4408: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x3E440Cu;
        goto label_3e440c;
    }
    ctx->pc = 0x3E4404u;
    SET_GPR_U32(ctx, 31, 0x3E440Cu);
    ctx->pc = 0x3E4408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4404u;
            // 0x3e4408: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E47A0u;
    if (runtime->hasFunction(0x3E47A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E440Cu; }
        if (ctx->pc != 0x3E440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E47A0_0x3e47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E440Cu; }
        if (ctx->pc != 0x3E440Cu) { return; }
    }
    ctx->pc = 0x3E440Cu;
label_3e440c:
    // 0x3e440c: 0xc0f91e8  jal         func_3E47A0
label_3e4410:
    if (ctx->pc == 0x3E4410u) {
        ctx->pc = 0x3E4410u;
            // 0x3e4410: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3E4414u;
        goto label_3e4414;
    }
    ctx->pc = 0x3E440Cu;
    SET_GPR_U32(ctx, 31, 0x3E4414u);
    ctx->pc = 0x3E4410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E440Cu;
            // 0x3e4410: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E47A0u;
    if (runtime->hasFunction(0x3E47A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4414u; }
        if (ctx->pc != 0x3E4414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E47A0_0x3e47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4414u; }
        if (ctx->pc != 0x3E4414u) { return; }
    }
    ctx->pc = 0x3E4414u;
label_3e4414:
    // 0x3e4414: 0xc0f91e4  jal         func_3E4790
label_3e4418:
    if (ctx->pc == 0x3E4418u) {
        ctx->pc = 0x3E4418u;
            // 0x3e4418: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x3E441Cu;
        goto label_3e441c;
    }
    ctx->pc = 0x3E4414u;
    SET_GPR_U32(ctx, 31, 0x3E441Cu);
    ctx->pc = 0x3E4418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4414u;
            // 0x3e4418: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4790u;
    if (runtime->hasFunction(0x3E4790u)) {
        auto targetFn = runtime->lookupFunction(0x3E4790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E441Cu; }
        if (ctx->pc != 0x3E441Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4790_0x3e4790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E441Cu; }
        if (ctx->pc != 0x3E441Cu) { return; }
    }
    ctx->pc = 0x3E441Cu;
label_3e441c:
    // 0x3e441c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4420:
    // 0x3e4420: 0xc0aeac0  jal         func_2BAB00
label_3e4424:
    if (ctx->pc == 0x3E4424u) {
        ctx->pc = 0x3E4424u;
            // 0x3e4424: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x3E4428u;
        goto label_3e4428;
    }
    ctx->pc = 0x3E4420u;
    SET_GPR_U32(ctx, 31, 0x3E4428u);
    ctx->pc = 0x3E4424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4420u;
            // 0x3e4424: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4428u; }
        if (ctx->pc != 0x3E4428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4428u; }
        if (ctx->pc != 0x3E4428u) { return; }
    }
    ctx->pc = 0x3E4428u;
label_3e4428:
    // 0x3e4428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e4428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e442c:
    // 0x3e442c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_3e4430:
    if (ctx->pc == 0x3E4430u) {
        ctx->pc = 0x3E4434u;
        goto label_3e4434;
    }
    ctx->pc = 0x3E442Cu;
    {
        const bool branch_taken_0x3e442c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e442c) {
            ctx->pc = 0x3E44B8u;
            goto label_3e44b8;
        }
    }
    ctx->pc = 0x3E4434u;
label_3e4434:
    // 0x3e4434: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3e4434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3e4438:
    // 0x3e4438: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3e4438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e443c:
    // 0x3e443c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e443cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e4440:
    // 0x3e4440: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3e4440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e4444:
    // 0x3e4444: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3e4444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3e4448:
    // 0x3e4448: 0xc040138  jal         func_1004E0
label_3e444c:
    if (ctx->pc == 0x3E444Cu) {
        ctx->pc = 0x3E444Cu;
            // 0x3e444c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3E4450u;
        goto label_3e4450;
    }
    ctx->pc = 0x3E4448u;
    SET_GPR_U32(ctx, 31, 0x3E4450u);
    ctx->pc = 0x3E444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4448u;
            // 0x3e444c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4450u; }
        if (ctx->pc != 0x3E4450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4450u; }
        if (ctx->pc != 0x3E4450u) { return; }
    }
    ctx->pc = 0x3E4450u;
label_3e4450:
    // 0x3e4450: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3e4450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3e4454:
    // 0x3e4454: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3e4454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
label_3e4458:
    // 0x3e4458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e445c:
    // 0x3e445c: 0x24a55920  addiu       $a1, $a1, 0x5920
    ctx->pc = 0x3e445cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
label_3e4460:
    // 0x3e4460: 0x24c6fe50  addiu       $a2, $a2, -0x1B0
    ctx->pc = 0x3e4460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966864));
label_3e4464:
    // 0x3e4464: 0x240703b0  addiu       $a3, $zero, 0x3B0
    ctx->pc = 0x3e4464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
label_3e4468:
    // 0x3e4468: 0xc040840  jal         func_102100
label_3e446c:
    if (ctx->pc == 0x3E446Cu) {
        ctx->pc = 0x3E446Cu;
            // 0x3e446c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4470u;
        goto label_3e4470;
    }
    ctx->pc = 0x3E4468u;
    SET_GPR_U32(ctx, 31, 0x3E4470u);
    ctx->pc = 0x3E446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4468u;
            // 0x3e446c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4470u; }
        if (ctx->pc != 0x3E4470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4470u; }
        if (ctx->pc != 0x3E4470u) { return; }
    }
    ctx->pc = 0x3E4470u;
label_3e4470:
    // 0x3e4470: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3e4470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_3e4474:
    // 0x3e4474: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e4474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4478:
    // 0x3e4478: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3e4478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3e447c:
    // 0x3e447c: 0xc0f91e0  jal         func_3E4780
label_3e4480:
    if (ctx->pc == 0x3E4480u) {
        ctx->pc = 0x3E4480u;
            // 0x3e4480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4484u;
        goto label_3e4484;
    }
    ctx->pc = 0x3E447Cu;
    SET_GPR_U32(ctx, 31, 0x3E4484u);
    ctx->pc = 0x3E4480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E447Cu;
            // 0x3e4480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4780u;
    if (runtime->hasFunction(0x3E4780u)) {
        auto targetFn = runtime->lookupFunction(0x3E4780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4484u; }
        if (ctx->pc != 0x3E4484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4780_0x3e4780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4484u; }
        if (ctx->pc != 0x3E4484u) { return; }
    }
    ctx->pc = 0x3E4484u;
label_3e4484:
    // 0x3e4484: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3e4484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e4488:
    // 0x3e4488: 0xc0f91e0  jal         func_3E4780
label_3e448c:
    if (ctx->pc == 0x3E448Cu) {
        ctx->pc = 0x3E448Cu;
            // 0x3e448c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4490u;
        goto label_3e4490;
    }
    ctx->pc = 0x3E4488u;
    SET_GPR_U32(ctx, 31, 0x3E4490u);
    ctx->pc = 0x3E448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4488u;
            // 0x3e448c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4780u;
    if (runtime->hasFunction(0x3E4780u)) {
        auto targetFn = runtime->lookupFunction(0x3E4780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4490u; }
        if (ctx->pc != 0x3E4490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4780_0x3e4780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4490u; }
        if (ctx->pc != 0x3E4490u) { return; }
    }
    ctx->pc = 0x3E4490u;
label_3e4490:
    // 0x3e4490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e4490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4494:
    // 0x3e4494: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3e4494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e4498:
    // 0x3e4498: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x3e4498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_3e449c:
    // 0x3e449c: 0xc0f91d8  jal         func_3E4760
label_3e44a0:
    if (ctx->pc == 0x3E44A0u) {
        ctx->pc = 0x3E44A0u;
            // 0x3e44a0: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x3E44A4u;
        goto label_3e44a4;
    }
    ctx->pc = 0x3E449Cu;
    SET_GPR_U32(ctx, 31, 0x3E44A4u);
    ctx->pc = 0x3E44A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E449Cu;
            // 0x3e44a0: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4760u;
    if (runtime->hasFunction(0x3E4760u)) {
        auto targetFn = runtime->lookupFunction(0x3E4760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E44A4u; }
        if (ctx->pc != 0x3E44A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4760_0x3e4760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E44A4u; }
        if (ctx->pc != 0x3E44A4u) { return; }
    }
    ctx->pc = 0x3E44A4u;
label_3e44a4:
    // 0x3e44a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e44a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3e44a8:
    // 0x3e44a8: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3e44a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e44ac:
    // 0x3e44ac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3e44b0:
    if (ctx->pc == 0x3E44B0u) {
        ctx->pc = 0x3E44B0u;
            // 0x3e44b0: 0x267303b0  addiu       $s3, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->pc = 0x3E44B4u;
        goto label_3e44b4;
    }
    ctx->pc = 0x3E44ACu;
    {
        const bool branch_taken_0x3e44ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E44B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E44ACu;
            // 0x3e44b0: 0x267303b0  addiu       $s3, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e44ac) {
            ctx->pc = 0x3E4494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e4494;
        }
    }
    ctx->pc = 0x3E44B4u;
label_3e44b4:
    // 0x3e44b4: 0x0  nop
    ctx->pc = 0x3e44b4u;
    // NOP
label_3e44b8:
    // 0x3e44b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e44bc:
    // 0x3e44bc: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x3e44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
label_3e44c0:
    // 0x3e44c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e44c4:
    // 0x3e44c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e44c8:
    // 0x3e44c8: 0x24429b08  addiu       $v0, $v0, -0x64F8
    ctx->pc = 0x3e44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941448));
label_3e44cc:
    // 0x3e44cc: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3e44ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3e44d0:
    // 0x3e44d0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x3e44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_3e44d4:
    // 0x3e44d4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3e44d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e44d8:
    // 0x3e44d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e44dc:
    // 0x3e44dc: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x3e44dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3e44e0:
    // 0x3e44e0: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3e44e4:
    // 0x3e44e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3e44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e44e8:
    // 0x3e44e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_3e44ec:
    if (ctx->pc == 0x3E44ECu) {
        ctx->pc = 0x3E44F0u;
        goto label_3e44f0;
    }
    ctx->pc = 0x3E44E8u;
    {
        const bool branch_taken_0x3e44e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e44e8) {
            ctx->pc = 0x3E4510u;
            goto label_3e4510;
        }
    }
    ctx->pc = 0x3E44F0u;
label_3e44f0:
    // 0x3e44f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e44f4:
    // 0x3e44f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e44f8:
    // 0x3e44f8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e44fc:
    // 0x3e44fc: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x3e44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_3e4500:
    // 0x3e4500: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3e4504:
    if (ctx->pc == 0x3E4504u) {
        ctx->pc = 0x3E4508u;
        goto label_3e4508;
    }
    ctx->pc = 0x3E4500u;
    {
        const bool branch_taken_0x3e4500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e4500) {
            ctx->pc = 0x3E4510u;
            goto label_3e4510;
        }
    }
    ctx->pc = 0x3E4508u;
label_3e4508:
    // 0x3e4508: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x3e4508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
label_3e450c:
    // 0x3e450c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3e450cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e4510:
    // 0x3e4510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4514:
    // 0x3e4514: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e4514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e4518:
    // 0x3e4518: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3e4518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3e451c:
    // 0x3e451c: 0xc0a7a88  jal         func_29EA20
label_3e4520:
    if (ctx->pc == 0x3E4520u) {
        ctx->pc = 0x3E4520u;
            // 0x3e4520: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3E4524u;
        goto label_3e4524;
    }
    ctx->pc = 0x3E451Cu;
    SET_GPR_U32(ctx, 31, 0x3E4524u);
    ctx->pc = 0x3E4520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E451Cu;
            // 0x3e4520: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4524u; }
        if (ctx->pc != 0x3E4524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4524u; }
        if (ctx->pc != 0x3E4524u) { return; }
    }
    ctx->pc = 0x3E4524u;
label_3e4524:
    // 0x3e4524: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3e4524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e4528:
    // 0x3e4528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e452c:
    // 0x3e452c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3e4530:
    if (ctx->pc == 0x3E4530u) {
        ctx->pc = 0x3E4530u;
            // 0x3e4530: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3E4534u;
        goto label_3e4534;
    }
    ctx->pc = 0x3E452Cu;
    {
        const bool branch_taken_0x3e452c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E452Cu;
            // 0x3e4530: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e452c) {
            ctx->pc = 0x3E4540u;
            goto label_3e4540;
        }
    }
    ctx->pc = 0x3E4534u;
label_3e4534:
    // 0x3e4534: 0xc0827ac  jal         func_209EB0
label_3e4538:
    if (ctx->pc == 0x3E4538u) {
        ctx->pc = 0x3E4538u;
            // 0x3e4538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3E453Cu;
        goto label_3e453c;
    }
    ctx->pc = 0x3E4534u;
    SET_GPR_U32(ctx, 31, 0x3E453Cu);
    ctx->pc = 0x3E4538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4534u;
            // 0x3e4538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E453Cu; }
        if (ctx->pc != 0x3E453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E453Cu; }
        if (ctx->pc != 0x3E453Cu) { return; }
    }
    ctx->pc = 0x3E453Cu;
label_3e453c:
    // 0x3e453c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4540:
    // 0x3e4540: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x3e4540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
label_3e4544:
    // 0x3e4544: 0x240400ac  addiu       $a0, $zero, 0xAC
    ctx->pc = 0x3e4544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_3e4548:
    // 0x3e4548: 0xc040180  jal         func_100600
label_3e454c:
    if (ctx->pc == 0x3E454Cu) {
        ctx->pc = 0x3E454Cu;
            // 0x3e454c: 0xae2000b8  sw          $zero, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
        ctx->pc = 0x3E4550u;
        goto label_3e4550;
    }
    ctx->pc = 0x3E4548u;
    SET_GPR_U32(ctx, 31, 0x3E4550u);
    ctx->pc = 0x3E454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4548u;
            // 0x3e454c: 0xae2000b8  sw          $zero, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4550u; }
        if (ctx->pc != 0x3E4550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4550u; }
        if (ctx->pc != 0x3E4550u) { return; }
    }
    ctx->pc = 0x3E4550u;
label_3e4550:
    // 0x3e4550: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e4554:
    if (ctx->pc == 0x3E4554u) {
        ctx->pc = 0x3E4554u;
            // 0x3e4554: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->pc = 0x3E4558u;
        goto label_3e4558;
    }
    ctx->pc = 0x3E4550u;
    {
        const bool branch_taken_0x3e4550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4550) {
            ctx->pc = 0x3E4554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4550u;
            // 0x3e4554: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4568u;
            goto label_3e4568;
        }
    }
    ctx->pc = 0x3E4558u;
label_3e4558:
    // 0x3e4558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e455c:
    // 0x3e455c: 0xc107924  jal         func_41E490
label_3e4560:
    if (ctx->pc == 0x3E4560u) {
        ctx->pc = 0x3E4560u;
            // 0x3e4560: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3E4564u;
        goto label_3e4564;
    }
    ctx->pc = 0x3E455Cu;
    SET_GPR_U32(ctx, 31, 0x3E4564u);
    ctx->pc = 0x3E4560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E455Cu;
            // 0x3e4560: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E490u;
    if (runtime->hasFunction(0x41E490u)) {
        auto targetFn = runtime->lookupFunction(0x41E490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4564u; }
        if (ctx->pc != 0x3E4564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041E490_0x41e490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4564u; }
        if (ctx->pc != 0x3E4564u) { return; }
    }
    ctx->pc = 0x3E4564u;
label_3e4564:
    // 0x3e4564: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x3e4564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_3e4568:
    // 0x3e4568: 0xc040180  jal         func_100600
label_3e456c:
    if (ctx->pc == 0x3E456Cu) {
        ctx->pc = 0x3E4570u;
        goto label_3e4570;
    }
    ctx->pc = 0x3E4568u;
    SET_GPR_U32(ctx, 31, 0x3E4570u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4570u; }
        if (ctx->pc != 0x3E4570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4570u; }
        if (ctx->pc != 0x3E4570u) { return; }
    }
    ctx->pc = 0x3E4570u;
label_3e4570:
    // 0x3e4570: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e4574:
    if (ctx->pc == 0x3E4574u) {
        ctx->pc = 0x3E4574u;
            // 0x3e4574: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x3E4578u;
        goto label_3e4578;
    }
    ctx->pc = 0x3E4570u;
    {
        const bool branch_taken_0x3e4570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4570) {
            ctx->pc = 0x3E4574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4570u;
            // 0x3e4574: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4588u;
            goto label_3e4588;
        }
    }
    ctx->pc = 0x3E4578u;
label_3e4578:
    // 0x3e4578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e457c:
    // 0x3e457c: 0xc10bbc8  jal         func_42EF20
label_3e4580:
    if (ctx->pc == 0x3E4580u) {
        ctx->pc = 0x3E4580u;
            // 0x3e4580: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E4584u;
        goto label_3e4584;
    }
    ctx->pc = 0x3E457Cu;
    SET_GPR_U32(ctx, 31, 0x3E4584u);
    ctx->pc = 0x3E4580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E457Cu;
            // 0x3e4580: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EF20u;
    if (runtime->hasFunction(0x42EF20u)) {
        auto targetFn = runtime->lookupFunction(0x42EF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4584u; }
        if (ctx->pc != 0x3E4584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EF20_0x42ef20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4584u; }
        if (ctx->pc != 0x3E4584u) { return; }
    }
    ctx->pc = 0x3E4584u;
label_3e4584:
    // 0x3e4584: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x3e4584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_3e4588:
    // 0x3e4588: 0xc040180  jal         func_100600
label_3e458c:
    if (ctx->pc == 0x3E458Cu) {
        ctx->pc = 0x3E4590u;
        goto label_3e4590;
    }
    ctx->pc = 0x3E4588u;
    SET_GPR_U32(ctx, 31, 0x3E4590u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4590u; }
        if (ctx->pc != 0x3E4590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4590u; }
        if (ctx->pc != 0x3E4590u) { return; }
    }
    ctx->pc = 0x3E4590u;
label_3e4590:
    // 0x3e4590: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e4594:
    if (ctx->pc == 0x3E4594u) {
        ctx->pc = 0x3E4594u;
            // 0x3e4594: 0x240400ac  addiu       $a0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->pc = 0x3E4598u;
        goto label_3e4598;
    }
    ctx->pc = 0x3E4590u;
    {
        const bool branch_taken_0x3e4590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4590) {
            ctx->pc = 0x3E4594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4590u;
            // 0x3e4594: 0x240400ac  addiu       $a0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E45A8u;
            goto label_3e45a8;
        }
    }
    ctx->pc = 0x3E4598u;
label_3e4598:
    // 0x3e4598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e459c:
    // 0x3e459c: 0xc10cd80  jal         func_433600
label_3e45a0:
    if (ctx->pc == 0x3E45A0u) {
        ctx->pc = 0x3E45A0u;
            // 0x3e45a0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3E45A4u;
        goto label_3e45a4;
    }
    ctx->pc = 0x3E459Cu;
    SET_GPR_U32(ctx, 31, 0x3E45A4u);
    ctx->pc = 0x3E45A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E459Cu;
            // 0x3e45a0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x433600u;
    if (runtime->hasFunction(0x433600u)) {
        auto targetFn = runtime->lookupFunction(0x433600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E45A4u; }
        if (ctx->pc != 0x3E45A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00433600_0x433600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E45A4u; }
        if (ctx->pc != 0x3E45A4u) { return; }
    }
    ctx->pc = 0x3E45A4u;
label_3e45a4:
    // 0x3e45a4: 0x240400ac  addiu       $a0, $zero, 0xAC
    ctx->pc = 0x3e45a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_3e45a8:
    // 0x3e45a8: 0xc040180  jal         func_100600
label_3e45ac:
    if (ctx->pc == 0x3E45ACu) {
        ctx->pc = 0x3E45B0u;
        goto label_3e45b0;
    }
    ctx->pc = 0x3E45A8u;
    SET_GPR_U32(ctx, 31, 0x3E45B0u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E45B0u; }
        if (ctx->pc != 0x3E45B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E45B0u; }
        if (ctx->pc != 0x3E45B0u) { return; }
    }
    ctx->pc = 0x3E45B0u;
label_3e45b0:
    // 0x3e45b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e45b4:
    if (ctx->pc == 0x3E45B4u) {
        ctx->pc = 0x3E45B4u;
            // 0x3e45b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E45B8u;
        goto label_3e45b8;
    }
    ctx->pc = 0x3E45B0u;
    {
        const bool branch_taken_0x3e45b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e45b0) {
            ctx->pc = 0x3E45B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E45B0u;
            // 0x3e45b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E45C8u;
            goto label_3e45c8;
        }
    }
    ctx->pc = 0x3E45B8u;
label_3e45b8:
    // 0x3e45b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e45b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e45bc:
    // 0x3e45bc: 0xc10a24c  jal         func_428930
label_3e45c0:
    if (ctx->pc == 0x3E45C0u) {
        ctx->pc = 0x3E45C0u;
            // 0x3e45c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3E45C4u;
        goto label_3e45c4;
    }
    ctx->pc = 0x3E45BCu;
    SET_GPR_U32(ctx, 31, 0x3E45C4u);
    ctx->pc = 0x3E45C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E45BCu;
            // 0x3e45c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428930u;
    if (runtime->hasFunction(0x428930u)) {
        auto targetFn = runtime->lookupFunction(0x428930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E45C4u; }
        if (ctx->pc != 0x3E45C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428930_0x428930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E45C4u; }
        if (ctx->pc != 0x3E45C4u) { return; }
    }
    ctx->pc = 0x3E45C4u;
label_3e45c4:
    // 0x3e45c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e45c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e45c8:
    // 0x3e45c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e45c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e45cc:
    // 0x3e45cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e45ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e45d0:
    // 0x3e45d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3e45d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e45d4:
    // 0x3e45d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e45d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e45d8:
    // 0x3e45d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e45d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e45dc:
    // 0x3e45dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e45dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e45e0:
    // 0x3e45e0: 0x3e00008  jr          $ra
label_3e45e4:
    if (ctx->pc == 0x3E45E4u) {
        ctx->pc = 0x3E45E4u;
            // 0x3e45e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3E45E8u;
        goto label_3e45e8;
    }
    ctx->pc = 0x3E45E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E45E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E45E0u;
            // 0x3e45e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E45E8u;
label_3e45e8:
    // 0x3e45e8: 0x0  nop
    ctx->pc = 0x3e45e8u;
    // NOP
label_3e45ec:
    // 0x3e45ec: 0x0  nop
    ctx->pc = 0x3e45ecu;
    // NOP
label_3e45f0:
    // 0x3e45f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e45f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e45f4:
    // 0x3e45f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e45f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e45f8:
    // 0x3e45f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e45fc:
    // 0x3e45fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e4600:
    // 0x3e4600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e4600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4604:
    // 0x3e4604: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_3e4608:
    if (ctx->pc == 0x3E4608u) {
        ctx->pc = 0x3E4608u;
            // 0x3e4608: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E460Cu;
        goto label_3e460c;
    }
    ctx->pc = 0x3E4604u;
    {
        const bool branch_taken_0x3e4604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4604u;
            // 0x3e4608: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4604) {
            ctx->pc = 0x3E4740u;
            goto label_3e4740;
        }
    }
    ctx->pc = 0x3E460Cu;
label_3e460c:
    // 0x3e460c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e460cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e4610:
    // 0x3e4610: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e4610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e4614:
    // 0x3e4614: 0x24639b30  addiu       $v1, $v1, -0x64D0
    ctx->pc = 0x3e4614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941488));
label_3e4618:
    // 0x3e4618: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3e4618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3e461c:
    // 0x3e461c: 0x24429b68  addiu       $v0, $v0, -0x6498
    ctx->pc = 0x3e461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
label_3e4620:
    // 0x3e4620: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3e4620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3e4624:
    // 0x3e4624: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3e4624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3e4628:
    // 0x3e4628: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3e4628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3e462c:
    // 0x3e462c: 0xc0407c0  jal         func_101F00
label_3e4630:
    if (ctx->pc == 0x3E4630u) {
        ctx->pc = 0x3E4630u;
            // 0x3e4630: 0x24a5fe50  addiu       $a1, $a1, -0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966864));
        ctx->pc = 0x3E4634u;
        goto label_3e4634;
    }
    ctx->pc = 0x3E462Cu;
    SET_GPR_U32(ctx, 31, 0x3E4634u);
    ctx->pc = 0x3E4630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E462Cu;
            // 0x3e4630: 0x24a5fe50  addiu       $a1, $a1, -0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4634u; }
        if (ctx->pc != 0x3E4634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4634u; }
        if (ctx->pc != 0x3E4634u) { return; }
    }
    ctx->pc = 0x3E4634u;
label_3e4634:
    // 0x3e4634: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3e4634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3e4638:
    // 0x3e4638: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3e463c:
    if (ctx->pc == 0x3E463Cu) {
        ctx->pc = 0x3E463Cu;
            // 0x3e463c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3E4640u;
        goto label_3e4640;
    }
    ctx->pc = 0x3E4638u;
    {
        const bool branch_taken_0x3e4638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4638) {
            ctx->pc = 0x3E463Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4638u;
            // 0x3e463c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4654u;
            goto label_3e4654;
        }
    }
    ctx->pc = 0x3E4640u;
label_3e4640:
    // 0x3e4640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e4644:
    if (ctx->pc == 0x3E4644u) {
        ctx->pc = 0x3E4648u;
        goto label_3e4648;
    }
    ctx->pc = 0x3E4640u;
    {
        const bool branch_taken_0x3e4640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4640) {
            ctx->pc = 0x3E4650u;
            goto label_3e4650;
        }
    }
    ctx->pc = 0x3E4648u;
label_3e4648:
    // 0x3e4648: 0xc07507c  jal         func_1D41F0
label_3e464c:
    if (ctx->pc == 0x3E464Cu) {
        ctx->pc = 0x3E464Cu;
            // 0x3e464c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3E4650u;
        goto label_3e4650;
    }
    ctx->pc = 0x3E4648u;
    SET_GPR_U32(ctx, 31, 0x3E4650u);
    ctx->pc = 0x3E464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4648u;
            // 0x3e464c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4650u; }
        if (ctx->pc != 0x3E4650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4650u; }
        if (ctx->pc != 0x3E4650u) { return; }
    }
    ctx->pc = 0x3E4650u;
label_3e4650:
    // 0x3e4650: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3e4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e4654:
    // 0x3e4654: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e4658:
    if (ctx->pc == 0x3E4658u) {
        ctx->pc = 0x3E4658u;
            // 0x3e4658: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3E465Cu;
        goto label_3e465c;
    }
    ctx->pc = 0x3E4654u;
    {
        const bool branch_taken_0x3e4654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4654) {
            ctx->pc = 0x3E4658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4654u;
            // 0x3e4658: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4684u;
            goto label_3e4684;
        }
    }
    ctx->pc = 0x3E465Cu;
label_3e465c:
    // 0x3e465c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3e4660:
    if (ctx->pc == 0x3E4660u) {
        ctx->pc = 0x3E4664u;
        goto label_3e4664;
    }
    ctx->pc = 0x3E465Cu;
    {
        const bool branch_taken_0x3e465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e465c) {
            ctx->pc = 0x3E4680u;
            goto label_3e4680;
        }
    }
    ctx->pc = 0x3E4664u;
label_3e4664:
    // 0x3e4664: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e4668:
    if (ctx->pc == 0x3E4668u) {
        ctx->pc = 0x3E466Cu;
        goto label_3e466c;
    }
    ctx->pc = 0x3E4664u;
    {
        const bool branch_taken_0x3e4664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4664) {
            ctx->pc = 0x3E4680u;
            goto label_3e4680;
        }
    }
    ctx->pc = 0x3E466Cu;
label_3e466c:
    // 0x3e466c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3e466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3e4670:
    // 0x3e4670: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3e4674:
    if (ctx->pc == 0x3E4674u) {
        ctx->pc = 0x3E4678u;
        goto label_3e4678;
    }
    ctx->pc = 0x3E4670u;
    {
        const bool branch_taken_0x3e4670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4670) {
            ctx->pc = 0x3E4680u;
            goto label_3e4680;
        }
    }
    ctx->pc = 0x3E4678u;
label_3e4678:
    // 0x3e4678: 0xc0400a8  jal         func_1002A0
label_3e467c:
    if (ctx->pc == 0x3E467Cu) {
        ctx->pc = 0x3E4680u;
        goto label_3e4680;
    }
    ctx->pc = 0x3E4678u;
    SET_GPR_U32(ctx, 31, 0x3E4680u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4680u; }
        if (ctx->pc != 0x3E4680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4680u; }
        if (ctx->pc != 0x3E4680u) { return; }
    }
    ctx->pc = 0x3E4680u;
label_3e4680:
    // 0x3e4680: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3e4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3e4684:
    // 0x3e4684: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e4688:
    if (ctx->pc == 0x3E4688u) {
        ctx->pc = 0x3E4688u;
            // 0x3e4688: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3E468Cu;
        goto label_3e468c;
    }
    ctx->pc = 0x3E4684u;
    {
        const bool branch_taken_0x3e4684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4684) {
            ctx->pc = 0x3E4688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4684u;
            // 0x3e4688: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E46B4u;
            goto label_3e46b4;
        }
    }
    ctx->pc = 0x3E468Cu;
label_3e468c:
    // 0x3e468c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3e4690:
    if (ctx->pc == 0x3E4690u) {
        ctx->pc = 0x3E4694u;
        goto label_3e4694;
    }
    ctx->pc = 0x3E468Cu;
    {
        const bool branch_taken_0x3e468c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e468c) {
            ctx->pc = 0x3E46B0u;
            goto label_3e46b0;
        }
    }
    ctx->pc = 0x3E4694u;
label_3e4694:
    // 0x3e4694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e4698:
    if (ctx->pc == 0x3E4698u) {
        ctx->pc = 0x3E469Cu;
        goto label_3e469c;
    }
    ctx->pc = 0x3E4694u;
    {
        const bool branch_taken_0x3e4694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4694) {
            ctx->pc = 0x3E46B0u;
            goto label_3e46b0;
        }
    }
    ctx->pc = 0x3E469Cu;
label_3e469c:
    // 0x3e469c: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3e469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3e46a0:
    // 0x3e46a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3e46a4:
    if (ctx->pc == 0x3E46A4u) {
        ctx->pc = 0x3E46A8u;
        goto label_3e46a8;
    }
    ctx->pc = 0x3E46A0u;
    {
        const bool branch_taken_0x3e46a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e46a0) {
            ctx->pc = 0x3E46B0u;
            goto label_3e46b0;
        }
    }
    ctx->pc = 0x3E46A8u;
label_3e46a8:
    // 0x3e46a8: 0xc0400a8  jal         func_1002A0
label_3e46ac:
    if (ctx->pc == 0x3E46ACu) {
        ctx->pc = 0x3E46B0u;
        goto label_3e46b0;
    }
    ctx->pc = 0x3E46A8u;
    SET_GPR_U32(ctx, 31, 0x3E46B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E46B0u; }
        if (ctx->pc != 0x3E46B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E46B0u; }
        if (ctx->pc != 0x3E46B0u) { return; }
    }
    ctx->pc = 0x3E46B0u;
label_3e46b0:
    // 0x3e46b0: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3e46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3e46b4:
    // 0x3e46b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e46b8:
    if (ctx->pc == 0x3E46B8u) {
        ctx->pc = 0x3E46BCu;
        goto label_3e46bc;
    }
    ctx->pc = 0x3E46B4u;
    {
        const bool branch_taken_0x3e46b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e46b4) {
            ctx->pc = 0x3E46D0u;
            goto label_3e46d0;
        }
    }
    ctx->pc = 0x3E46BCu;
label_3e46bc:
    // 0x3e46bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e46c0:
    // 0x3e46c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e46c4:
    // 0x3e46c4: 0x24639b18  addiu       $v1, $v1, -0x64E8
    ctx->pc = 0x3e46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941464));
label_3e46c8:
    // 0x3e46c8: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3e46c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3e46cc:
    // 0x3e46cc: 0xac403da0  sw          $zero, 0x3DA0($v0)
    ctx->pc = 0x3e46ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15776), GPR_U32(ctx, 0));
label_3e46d0:
    // 0x3e46d0: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3e46d4:
    if (ctx->pc == 0x3E46D4u) {
        ctx->pc = 0x3E46D4u;
            // 0x3e46d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3E46D8u;
        goto label_3e46d8;
    }
    ctx->pc = 0x3E46D0u;
    {
        const bool branch_taken_0x3e46d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e46d0) {
            ctx->pc = 0x3E46D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E46D0u;
            // 0x3e46d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E472Cu;
            goto label_3e472c;
        }
    }
    ctx->pc = 0x3E46D8u;
label_3e46d8:
    // 0x3e46d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e46dc:
    // 0x3e46dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3e46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3e46e0:
    // 0x3e46e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e46e4:
    // 0x3e46e4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3e46e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3e46e8:
    // 0x3e46e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e46ec:
    if (ctx->pc == 0x3E46ECu) {
        ctx->pc = 0x3E46ECu;
            // 0x3e46ec: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3E46F0u;
        goto label_3e46f0;
    }
    ctx->pc = 0x3E46E8u;
    {
        const bool branch_taken_0x3e46e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e46e8) {
            ctx->pc = 0x3E46ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E46E8u;
            // 0x3e46ec: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4704u;
            goto label_3e4704;
        }
    }
    ctx->pc = 0x3E46F0u;
label_3e46f0:
    // 0x3e46f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e46f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e46f4:
    // 0x3e46f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e46f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e46f8:
    // 0x3e46f8: 0x320f809  jalr        $t9
label_3e46fc:
    if (ctx->pc == 0x3E46FCu) {
        ctx->pc = 0x3E46FCu;
            // 0x3e46fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E4700u;
        goto label_3e4700;
    }
    ctx->pc = 0x3E46F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E4700u);
        ctx->pc = 0x3E46FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E46F8u;
            // 0x3e46fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E4700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E4700u; }
            if (ctx->pc != 0x3E4700u) { return; }
        }
        }
    }
    ctx->pc = 0x3E4700u;
label_3e4700:
    // 0x3e4700: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3e4700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3e4704:
    // 0x3e4704: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e4708:
    if (ctx->pc == 0x3E4708u) {
        ctx->pc = 0x3E4708u;
            // 0x3e4708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E470Cu;
        goto label_3e470c;
    }
    ctx->pc = 0x3E4704u;
    {
        const bool branch_taken_0x3e4704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4704) {
            ctx->pc = 0x3E4708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4704u;
            // 0x3e4708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4720u;
            goto label_3e4720;
        }
    }
    ctx->pc = 0x3E470Cu;
label_3e470c:
    // 0x3e470c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e470cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e4710:
    // 0x3e4710: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e4710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e4714:
    // 0x3e4714: 0x320f809  jalr        $t9
label_3e4718:
    if (ctx->pc == 0x3E4718u) {
        ctx->pc = 0x3E4718u;
            // 0x3e4718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E471Cu;
        goto label_3e471c;
    }
    ctx->pc = 0x3E4714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E471Cu);
        ctx->pc = 0x3E4718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4714u;
            // 0x3e4718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E471Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E471Cu; }
            if (ctx->pc != 0x3E471Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E471Cu;
label_3e471c:
    // 0x3e471c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e471cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4720:
    // 0x3e4720: 0xc075bf8  jal         func_1D6FE0
label_3e4724:
    if (ctx->pc == 0x3E4724u) {
        ctx->pc = 0x3E4724u;
            // 0x3e4724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4728u;
        goto label_3e4728;
    }
    ctx->pc = 0x3E4720u;
    SET_GPR_U32(ctx, 31, 0x3E4728u);
    ctx->pc = 0x3E4724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4720u;
            // 0x3e4724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4728u; }
        if (ctx->pc != 0x3E4728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4728u; }
        if (ctx->pc != 0x3E4728u) { return; }
    }
    ctx->pc = 0x3E4728u;
label_3e4728:
    // 0x3e4728: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3e4728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3e472c:
    // 0x3e472c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e472cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3e4730:
    // 0x3e4730: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3e4734:
    if (ctx->pc == 0x3E4734u) {
        ctx->pc = 0x3E4734u;
            // 0x3e4734: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4738u;
        goto label_3e4738;
    }
    ctx->pc = 0x3E4730u;
    {
        const bool branch_taken_0x3e4730 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e4730) {
            ctx->pc = 0x3E4734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4730u;
            // 0x3e4734: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4744u;
            goto label_3e4744;
        }
    }
    ctx->pc = 0x3E4738u;
label_3e4738:
    // 0x3e4738: 0xc0400a8  jal         func_1002A0
label_3e473c:
    if (ctx->pc == 0x3E473Cu) {
        ctx->pc = 0x3E473Cu;
            // 0x3e473c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4740u;
        goto label_3e4740;
    }
    ctx->pc = 0x3E4738u;
    SET_GPR_U32(ctx, 31, 0x3E4740u);
    ctx->pc = 0x3E473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4738u;
            // 0x3e473c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4740u; }
        if (ctx->pc != 0x3E4740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4740u; }
        if (ctx->pc != 0x3E4740u) { return; }
    }
    ctx->pc = 0x3E4740u;
label_3e4740:
    // 0x3e4740: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e4740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4744:
    // 0x3e4744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e4744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4748:
    // 0x3e4748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e4748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e474c:
    // 0x3e474c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e474cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e4750:
    // 0x3e4750: 0x3e00008  jr          $ra
label_3e4754:
    if (ctx->pc == 0x3E4754u) {
        ctx->pc = 0x3E4754u;
            // 0x3e4754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3E4758u;
        goto label_3e4758;
    }
    ctx->pc = 0x3E4750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4750u;
            // 0x3e4754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E4758u;
label_3e4758:
    // 0x3e4758: 0x0  nop
    ctx->pc = 0x3e4758u;
    // NOP
label_3e475c:
    // 0x3e475c: 0x0  nop
    ctx->pc = 0x3e475cu;
    // NOP
}
