#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B4300
// Address: 0x4b4300 - 0x4b46c0
void sub_004B4300_0x4b4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4300_0x4b4300");
#endif

    switch (ctx->pc) {
        case 0x4b4300u: goto label_4b4300;
        case 0x4b4304u: goto label_4b4304;
        case 0x4b4308u: goto label_4b4308;
        case 0x4b430cu: goto label_4b430c;
        case 0x4b4310u: goto label_4b4310;
        case 0x4b4314u: goto label_4b4314;
        case 0x4b4318u: goto label_4b4318;
        case 0x4b431cu: goto label_4b431c;
        case 0x4b4320u: goto label_4b4320;
        case 0x4b4324u: goto label_4b4324;
        case 0x4b4328u: goto label_4b4328;
        case 0x4b432cu: goto label_4b432c;
        case 0x4b4330u: goto label_4b4330;
        case 0x4b4334u: goto label_4b4334;
        case 0x4b4338u: goto label_4b4338;
        case 0x4b433cu: goto label_4b433c;
        case 0x4b4340u: goto label_4b4340;
        case 0x4b4344u: goto label_4b4344;
        case 0x4b4348u: goto label_4b4348;
        case 0x4b434cu: goto label_4b434c;
        case 0x4b4350u: goto label_4b4350;
        case 0x4b4354u: goto label_4b4354;
        case 0x4b4358u: goto label_4b4358;
        case 0x4b435cu: goto label_4b435c;
        case 0x4b4360u: goto label_4b4360;
        case 0x4b4364u: goto label_4b4364;
        case 0x4b4368u: goto label_4b4368;
        case 0x4b436cu: goto label_4b436c;
        case 0x4b4370u: goto label_4b4370;
        case 0x4b4374u: goto label_4b4374;
        case 0x4b4378u: goto label_4b4378;
        case 0x4b437cu: goto label_4b437c;
        case 0x4b4380u: goto label_4b4380;
        case 0x4b4384u: goto label_4b4384;
        case 0x4b4388u: goto label_4b4388;
        case 0x4b438cu: goto label_4b438c;
        case 0x4b4390u: goto label_4b4390;
        case 0x4b4394u: goto label_4b4394;
        case 0x4b4398u: goto label_4b4398;
        case 0x4b439cu: goto label_4b439c;
        case 0x4b43a0u: goto label_4b43a0;
        case 0x4b43a4u: goto label_4b43a4;
        case 0x4b43a8u: goto label_4b43a8;
        case 0x4b43acu: goto label_4b43ac;
        case 0x4b43b0u: goto label_4b43b0;
        case 0x4b43b4u: goto label_4b43b4;
        case 0x4b43b8u: goto label_4b43b8;
        case 0x4b43bcu: goto label_4b43bc;
        case 0x4b43c0u: goto label_4b43c0;
        case 0x4b43c4u: goto label_4b43c4;
        case 0x4b43c8u: goto label_4b43c8;
        case 0x4b43ccu: goto label_4b43cc;
        case 0x4b43d0u: goto label_4b43d0;
        case 0x4b43d4u: goto label_4b43d4;
        case 0x4b43d8u: goto label_4b43d8;
        case 0x4b43dcu: goto label_4b43dc;
        case 0x4b43e0u: goto label_4b43e0;
        case 0x4b43e4u: goto label_4b43e4;
        case 0x4b43e8u: goto label_4b43e8;
        case 0x4b43ecu: goto label_4b43ec;
        case 0x4b43f0u: goto label_4b43f0;
        case 0x4b43f4u: goto label_4b43f4;
        case 0x4b43f8u: goto label_4b43f8;
        case 0x4b43fcu: goto label_4b43fc;
        case 0x4b4400u: goto label_4b4400;
        case 0x4b4404u: goto label_4b4404;
        case 0x4b4408u: goto label_4b4408;
        case 0x4b440cu: goto label_4b440c;
        case 0x4b4410u: goto label_4b4410;
        case 0x4b4414u: goto label_4b4414;
        case 0x4b4418u: goto label_4b4418;
        case 0x4b441cu: goto label_4b441c;
        case 0x4b4420u: goto label_4b4420;
        case 0x4b4424u: goto label_4b4424;
        case 0x4b4428u: goto label_4b4428;
        case 0x4b442cu: goto label_4b442c;
        case 0x4b4430u: goto label_4b4430;
        case 0x4b4434u: goto label_4b4434;
        case 0x4b4438u: goto label_4b4438;
        case 0x4b443cu: goto label_4b443c;
        case 0x4b4440u: goto label_4b4440;
        case 0x4b4444u: goto label_4b4444;
        case 0x4b4448u: goto label_4b4448;
        case 0x4b444cu: goto label_4b444c;
        case 0x4b4450u: goto label_4b4450;
        case 0x4b4454u: goto label_4b4454;
        case 0x4b4458u: goto label_4b4458;
        case 0x4b445cu: goto label_4b445c;
        case 0x4b4460u: goto label_4b4460;
        case 0x4b4464u: goto label_4b4464;
        case 0x4b4468u: goto label_4b4468;
        case 0x4b446cu: goto label_4b446c;
        case 0x4b4470u: goto label_4b4470;
        case 0x4b4474u: goto label_4b4474;
        case 0x4b4478u: goto label_4b4478;
        case 0x4b447cu: goto label_4b447c;
        case 0x4b4480u: goto label_4b4480;
        case 0x4b4484u: goto label_4b4484;
        case 0x4b4488u: goto label_4b4488;
        case 0x4b448cu: goto label_4b448c;
        case 0x4b4490u: goto label_4b4490;
        case 0x4b4494u: goto label_4b4494;
        case 0x4b4498u: goto label_4b4498;
        case 0x4b449cu: goto label_4b449c;
        case 0x4b44a0u: goto label_4b44a0;
        case 0x4b44a4u: goto label_4b44a4;
        case 0x4b44a8u: goto label_4b44a8;
        case 0x4b44acu: goto label_4b44ac;
        case 0x4b44b0u: goto label_4b44b0;
        case 0x4b44b4u: goto label_4b44b4;
        case 0x4b44b8u: goto label_4b44b8;
        case 0x4b44bcu: goto label_4b44bc;
        case 0x4b44c0u: goto label_4b44c0;
        case 0x4b44c4u: goto label_4b44c4;
        case 0x4b44c8u: goto label_4b44c8;
        case 0x4b44ccu: goto label_4b44cc;
        case 0x4b44d0u: goto label_4b44d0;
        case 0x4b44d4u: goto label_4b44d4;
        case 0x4b44d8u: goto label_4b44d8;
        case 0x4b44dcu: goto label_4b44dc;
        case 0x4b44e0u: goto label_4b44e0;
        case 0x4b44e4u: goto label_4b44e4;
        case 0x4b44e8u: goto label_4b44e8;
        case 0x4b44ecu: goto label_4b44ec;
        case 0x4b44f0u: goto label_4b44f0;
        case 0x4b44f4u: goto label_4b44f4;
        case 0x4b44f8u: goto label_4b44f8;
        case 0x4b44fcu: goto label_4b44fc;
        case 0x4b4500u: goto label_4b4500;
        case 0x4b4504u: goto label_4b4504;
        case 0x4b4508u: goto label_4b4508;
        case 0x4b450cu: goto label_4b450c;
        case 0x4b4510u: goto label_4b4510;
        case 0x4b4514u: goto label_4b4514;
        case 0x4b4518u: goto label_4b4518;
        case 0x4b451cu: goto label_4b451c;
        case 0x4b4520u: goto label_4b4520;
        case 0x4b4524u: goto label_4b4524;
        case 0x4b4528u: goto label_4b4528;
        case 0x4b452cu: goto label_4b452c;
        case 0x4b4530u: goto label_4b4530;
        case 0x4b4534u: goto label_4b4534;
        case 0x4b4538u: goto label_4b4538;
        case 0x4b453cu: goto label_4b453c;
        case 0x4b4540u: goto label_4b4540;
        case 0x4b4544u: goto label_4b4544;
        case 0x4b4548u: goto label_4b4548;
        case 0x4b454cu: goto label_4b454c;
        case 0x4b4550u: goto label_4b4550;
        case 0x4b4554u: goto label_4b4554;
        case 0x4b4558u: goto label_4b4558;
        case 0x4b455cu: goto label_4b455c;
        case 0x4b4560u: goto label_4b4560;
        case 0x4b4564u: goto label_4b4564;
        case 0x4b4568u: goto label_4b4568;
        case 0x4b456cu: goto label_4b456c;
        case 0x4b4570u: goto label_4b4570;
        case 0x4b4574u: goto label_4b4574;
        case 0x4b4578u: goto label_4b4578;
        case 0x4b457cu: goto label_4b457c;
        case 0x4b4580u: goto label_4b4580;
        case 0x4b4584u: goto label_4b4584;
        case 0x4b4588u: goto label_4b4588;
        case 0x4b458cu: goto label_4b458c;
        case 0x4b4590u: goto label_4b4590;
        case 0x4b4594u: goto label_4b4594;
        case 0x4b4598u: goto label_4b4598;
        case 0x4b459cu: goto label_4b459c;
        case 0x4b45a0u: goto label_4b45a0;
        case 0x4b45a4u: goto label_4b45a4;
        case 0x4b45a8u: goto label_4b45a8;
        case 0x4b45acu: goto label_4b45ac;
        case 0x4b45b0u: goto label_4b45b0;
        case 0x4b45b4u: goto label_4b45b4;
        case 0x4b45b8u: goto label_4b45b8;
        case 0x4b45bcu: goto label_4b45bc;
        case 0x4b45c0u: goto label_4b45c0;
        case 0x4b45c4u: goto label_4b45c4;
        case 0x4b45c8u: goto label_4b45c8;
        case 0x4b45ccu: goto label_4b45cc;
        case 0x4b45d0u: goto label_4b45d0;
        case 0x4b45d4u: goto label_4b45d4;
        case 0x4b45d8u: goto label_4b45d8;
        case 0x4b45dcu: goto label_4b45dc;
        case 0x4b45e0u: goto label_4b45e0;
        case 0x4b45e4u: goto label_4b45e4;
        case 0x4b45e8u: goto label_4b45e8;
        case 0x4b45ecu: goto label_4b45ec;
        case 0x4b45f0u: goto label_4b45f0;
        case 0x4b45f4u: goto label_4b45f4;
        case 0x4b45f8u: goto label_4b45f8;
        case 0x4b45fcu: goto label_4b45fc;
        case 0x4b4600u: goto label_4b4600;
        case 0x4b4604u: goto label_4b4604;
        case 0x4b4608u: goto label_4b4608;
        case 0x4b460cu: goto label_4b460c;
        case 0x4b4610u: goto label_4b4610;
        case 0x4b4614u: goto label_4b4614;
        case 0x4b4618u: goto label_4b4618;
        case 0x4b461cu: goto label_4b461c;
        case 0x4b4620u: goto label_4b4620;
        case 0x4b4624u: goto label_4b4624;
        case 0x4b4628u: goto label_4b4628;
        case 0x4b462cu: goto label_4b462c;
        case 0x4b4630u: goto label_4b4630;
        case 0x4b4634u: goto label_4b4634;
        case 0x4b4638u: goto label_4b4638;
        case 0x4b463cu: goto label_4b463c;
        case 0x4b4640u: goto label_4b4640;
        case 0x4b4644u: goto label_4b4644;
        case 0x4b4648u: goto label_4b4648;
        case 0x4b464cu: goto label_4b464c;
        case 0x4b4650u: goto label_4b4650;
        case 0x4b4654u: goto label_4b4654;
        case 0x4b4658u: goto label_4b4658;
        case 0x4b465cu: goto label_4b465c;
        case 0x4b4660u: goto label_4b4660;
        case 0x4b4664u: goto label_4b4664;
        case 0x4b4668u: goto label_4b4668;
        case 0x4b466cu: goto label_4b466c;
        case 0x4b4670u: goto label_4b4670;
        case 0x4b4674u: goto label_4b4674;
        case 0x4b4678u: goto label_4b4678;
        case 0x4b467cu: goto label_4b467c;
        case 0x4b4680u: goto label_4b4680;
        case 0x4b4684u: goto label_4b4684;
        case 0x4b4688u: goto label_4b4688;
        case 0x4b468cu: goto label_4b468c;
        case 0x4b4690u: goto label_4b4690;
        case 0x4b4694u: goto label_4b4694;
        case 0x4b4698u: goto label_4b4698;
        case 0x4b469cu: goto label_4b469c;
        case 0x4b46a0u: goto label_4b46a0;
        case 0x4b46a4u: goto label_4b46a4;
        case 0x4b46a8u: goto label_4b46a8;
        case 0x4b46acu: goto label_4b46ac;
        case 0x4b46b0u: goto label_4b46b0;
        case 0x4b46b4u: goto label_4b46b4;
        case 0x4b46b8u: goto label_4b46b8;
        case 0x4b46bcu: goto label_4b46bc;
        default: break;
    }

    ctx->pc = 0x4b4300u;

label_4b4300:
    // 0x4b4300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b4304:
    // 0x4b4304: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4b4308:
    // 0x4b4308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b430c:
    // 0x4b430c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4b430cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4b4310:
    // 0x4b4310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b4314:
    // 0x4b4314: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4b4314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b4318:
    // 0x4b4318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b431c:
    // 0x4b431c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b431cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b4320:
    // 0x4b4320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b4324:
    // 0x4b4324: 0xc10ca68  jal         func_4329A0
label_4b4328:
    if (ctx->pc == 0x4B4328u) {
        ctx->pc = 0x4B4328u;
            // 0x4b4328: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->pc = 0x4B432Cu;
        goto label_4b432c;
    }
    ctx->pc = 0x4B4324u;
    SET_GPR_U32(ctx, 31, 0x4B432Cu);
    ctx->pc = 0x4B4328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4324u;
            // 0x4b4328: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B432Cu; }
        if (ctx->pc != 0x4B432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B432Cu; }
        if (ctx->pc != 0x4B432Cu) { return; }
    }
    ctx->pc = 0x4B432Cu;
label_4b432c:
    // 0x4b432c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b432cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b4330:
    // 0x4b4330: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b4334:
    // 0x4b4334: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4b4334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4b4338:
    // 0x4b4338: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x4b4338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
label_4b433c:
    // 0x4b433c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b433cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b4340:
    // 0x4b4340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b4340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b4344:
    // 0x4b4344: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b4344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b4348:
    // 0x4b4348: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x4b4348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_4b434c:
    // 0x4b434c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b434cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4350:
    // 0x4b4350: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4b4350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_4b4354:
    // 0x4b4354: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x4b4354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
label_4b4358:
    // 0x4b4358: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4b4358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4b435c:
    // 0x4b435c: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x4b435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
label_4b4360:
    // 0x4b4360: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x4b4360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_4b4364:
    // 0x4b4364: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b4364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4368:
    // 0x4b4368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b436c:
    // 0x4b436c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b436cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b4370:
    // 0x4b4370: 0x3e00008  jr          $ra
label_4b4374:
    if (ctx->pc == 0x4B4374u) {
        ctx->pc = 0x4B4374u;
            // 0x4b4374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B4378u;
        goto label_4b4378;
    }
    ctx->pc = 0x4B4370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4370u;
            // 0x4b4374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4378u;
label_4b4378:
    // 0x4b4378: 0x0  nop
    ctx->pc = 0x4b4378u;
    // NOP
label_4b437c:
    // 0x4b437c: 0x0  nop
    ctx->pc = 0x4b437cu;
    // NOP
label_4b4380:
    // 0x4b4380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b4380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b4384:
    // 0x4b4384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b4384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b4388:
    // 0x4b4388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b438c:
    // 0x4b438c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b4390:
    // 0x4b4390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b4390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b4394:
    // 0x4b4394: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4b4398:
    if (ctx->pc == 0x4B4398u) {
        ctx->pc = 0x4B4398u;
            // 0x4b4398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B439Cu;
        goto label_4b439c;
    }
    ctx->pc = 0x4B4394u;
    {
        const bool branch_taken_0x4b4394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4394u;
            // 0x4b4398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4394) {
            ctx->pc = 0x4B43D8u;
            goto label_4b43d8;
        }
    }
    ctx->pc = 0x4B439Cu;
label_4b439c:
    // 0x4b439c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b43a0:
    // 0x4b43a0: 0x244208b0  addiu       $v0, $v0, 0x8B0
    ctx->pc = 0x4b43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2224));
label_4b43a4:
    // 0x4b43a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4b43a8:
    if (ctx->pc == 0x4B43A8u) {
        ctx->pc = 0x4B43A8u;
            // 0x4b43a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B43ACu;
        goto label_4b43ac;
    }
    ctx->pc = 0x4B43A4u;
    {
        const bool branch_taken_0x4b43a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B43A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B43A4u;
            // 0x4b43a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b43a4) {
            ctx->pc = 0x4B43C0u;
            goto label_4b43c0;
        }
    }
    ctx->pc = 0x4B43ACu;
label_4b43ac:
    // 0x4b43ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b43acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b43b0:
    // 0x4b43b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b43b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b43b4:
    // 0x4b43b4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4b43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4b43b8:
    // 0x4b43b8: 0xc057a68  jal         func_15E9A0
label_4b43bc:
    if (ctx->pc == 0x4B43BCu) {
        ctx->pc = 0x4B43BCu;
            // 0x4b43bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B43C0u;
        goto label_4b43c0;
    }
    ctx->pc = 0x4B43B8u;
    SET_GPR_U32(ctx, 31, 0x4B43C0u);
    ctx->pc = 0x4B43BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B43B8u;
            // 0x4b43bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B43C0u; }
        if (ctx->pc != 0x4B43C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B43C0u; }
        if (ctx->pc != 0x4B43C0u) { return; }
    }
    ctx->pc = 0x4B43C0u;
label_4b43c0:
    // 0x4b43c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b43c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b43c4:
    // 0x4b43c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b43c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b43c8:
    // 0x4b43c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b43cc:
    if (ctx->pc == 0x4B43CCu) {
        ctx->pc = 0x4B43CCu;
            // 0x4b43cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B43D0u;
        goto label_4b43d0;
    }
    ctx->pc = 0x4B43C8u;
    {
        const bool branch_taken_0x4b43c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b43c8) {
            ctx->pc = 0x4B43CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B43C8u;
            // 0x4b43cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B43DCu;
            goto label_4b43dc;
        }
    }
    ctx->pc = 0x4B43D0u;
label_4b43d0:
    // 0x4b43d0: 0xc0400a8  jal         func_1002A0
label_4b43d4:
    if (ctx->pc == 0x4B43D4u) {
        ctx->pc = 0x4B43D4u;
            // 0x4b43d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B43D8u;
        goto label_4b43d8;
    }
    ctx->pc = 0x4B43D0u;
    SET_GPR_U32(ctx, 31, 0x4B43D8u);
    ctx->pc = 0x4B43D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B43D0u;
            // 0x4b43d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B43D8u; }
        if (ctx->pc != 0x4B43D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B43D8u; }
        if (ctx->pc != 0x4B43D8u) { return; }
    }
    ctx->pc = 0x4B43D8u;
label_4b43d8:
    // 0x4b43d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b43d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b43dc:
    // 0x4b43dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b43dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b43e0:
    // 0x4b43e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b43e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b43e4:
    // 0x4b43e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b43e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b43e8:
    // 0x4b43e8: 0x3e00008  jr          $ra
label_4b43ec:
    if (ctx->pc == 0x4B43ECu) {
        ctx->pc = 0x4B43ECu;
            // 0x4b43ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B43F0u;
        goto label_4b43f0;
    }
    ctx->pc = 0x4B43E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B43ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B43E8u;
            // 0x4b43ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B43F0u;
label_4b43f0:
    // 0x4b43f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b43f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b43f4:
    // 0x4b43f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b43f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b43f8:
    // 0x4b43f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b43f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b43fc:
    // 0x4b43fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b43fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b4400:
    // 0x4b4400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b4404:
    // 0x4b4404: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b4404u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b4408:
    // 0x4b4408: 0x10a300a2  beq         $a1, $v1, . + 4 + (0xA2 << 2)
label_4b440c:
    if (ctx->pc == 0x4B440Cu) {
        ctx->pc = 0x4B440Cu;
            // 0x4b440c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4410u;
        goto label_4b4410;
    }
    ctx->pc = 0x4B4408u;
    {
        const bool branch_taken_0x4b4408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4408u;
            // 0x4b440c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4408) {
            ctx->pc = 0x4B4694u;
            goto label_4b4694;
        }
    }
    ctx->pc = 0x4B4410u;
label_4b4410:
    // 0x4b4410: 0x50a0009b  beql        $a1, $zero, . + 4 + (0x9B << 2)
label_4b4414:
    if (ctx->pc == 0x4B4414u) {
        ctx->pc = 0x4B4414u;
            // 0x4b4414: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B4418u;
        goto label_4b4418;
    }
    ctx->pc = 0x4B4410u;
    {
        const bool branch_taken_0x4b4410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4410) {
            ctx->pc = 0x4B4414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4410u;
            // 0x4b4414: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4680u;
            goto label_4b4680;
        }
    }
    ctx->pc = 0x4B4418u;
label_4b4418:
    // 0x4b4418: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b4418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b441c:
    // 0x4b441c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4b4420:
    if (ctx->pc == 0x4B4420u) {
        ctx->pc = 0x4B4424u;
        goto label_4b4424;
    }
    ctx->pc = 0x4B441Cu;
    {
        const bool branch_taken_0x4b441c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b441c) {
            ctx->pc = 0x4B446Cu;
            goto label_4b446c;
        }
    }
    ctx->pc = 0x4B4424u;
label_4b4424:
    // 0x4b4424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b4424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b4428:
    // 0x4b4428: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4b442c:
    if (ctx->pc == 0x4B442Cu) {
        ctx->pc = 0x4B4430u;
        goto label_4b4430;
    }
    ctx->pc = 0x4B4428u;
    {
        const bool branch_taken_0x4b4428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b4428) {
            ctx->pc = 0x4B4438u;
            goto label_4b4438;
        }
    }
    ctx->pc = 0x4B4430u;
label_4b4430:
    // 0x4b4430: 0x1000009e  b           . + 4 + (0x9E << 2)
label_4b4434:
    if (ctx->pc == 0x4B4434u) {
        ctx->pc = 0x4B4434u;
            // 0x4b4434: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4B4438u;
        goto label_4b4438;
    }
    ctx->pc = 0x4B4430u;
    {
        const bool branch_taken_0x4b4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4430u;
            // 0x4b4434: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4430) {
            ctx->pc = 0x4B46ACu;
            goto label_4b46ac;
        }
    }
    ctx->pc = 0x4B4438u;
label_4b4438:
    // 0x4b4438: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b4438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b443c:
    // 0x4b443c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b4440:
    // 0x4b4440: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x4b4440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b4444:
    // 0x4b4444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b4444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b4448:
    // 0x4b4448: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b4448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b444c:
    // 0x4b444c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b444cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4b4450:
    // 0x4b4450: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b4450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b4454:
    // 0x4b4454: 0x45000094  bc1f        . + 4 + (0x94 << 2)
label_4b4458:
    if (ctx->pc == 0x4B4458u) {
        ctx->pc = 0x4B4458u;
            // 0x4b4458: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->pc = 0x4B445Cu;
        goto label_4b445c;
    }
    ctx->pc = 0x4B4454u;
    {
        const bool branch_taken_0x4b4454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B4458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4454u;
            // 0x4b4458: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4454) {
            ctx->pc = 0x4B46A8u;
            goto label_4b46a8;
        }
    }
    ctx->pc = 0x4B445Cu;
label_4b445c:
    // 0x4b445c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b445cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4460:
    // 0x4b4460: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4b4460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4b4464:
    // 0x4b4464: 0x320f809  jalr        $t9
label_4b4468:
    if (ctx->pc == 0x4B4468u) {
        ctx->pc = 0x4B446Cu;
        goto label_4b446c;
    }
    ctx->pc = 0x4B4464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B446Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B446Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B446Cu; }
            if (ctx->pc != 0x4B446Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B446Cu;
label_4b446c:
    // 0x4b446c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b446cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b4470:
    // 0x4b4470: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4b4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4b4474:
    // 0x4b4474: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4b4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4b4478:
    // 0x4b4478: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4b4478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4b447c:
    // 0x4b447c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_4b4480:
    if (ctx->pc == 0x4B4480u) {
        ctx->pc = 0x4B4484u;
        goto label_4b4484;
    }
    ctx->pc = 0x4B447Cu;
    {
        const bool branch_taken_0x4b447c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b447c) {
            ctx->pc = 0x4B44A0u;
            goto label_4b44a0;
        }
    }
    ctx->pc = 0x4B4484u;
label_4b4484:
    // 0x4b4484: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4b4484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b4488:
    // 0x4b4488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b448c:
    // 0x4b448c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4b448cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4b4490:
    // 0x4b4490: 0x320f809  jalr        $t9
label_4b4494:
    if (ctx->pc == 0x4B4494u) {
        ctx->pc = 0x4B4494u;
            // 0x4b4494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4498u;
        goto label_4b4498;
    }
    ctx->pc = 0x4B4490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B4498u);
        ctx->pc = 0x4B4494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4490u;
            // 0x4b4494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B4498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B4498u; }
            if (ctx->pc != 0x4B4498u) { return; }
        }
        }
    }
    ctx->pc = 0x4B4498u;
label_4b4498:
    // 0x4b4498: 0x10000083  b           . + 4 + (0x83 << 2)
label_4b449c:
    if (ctx->pc == 0x4B449Cu) {
        ctx->pc = 0x4B44A0u;
        goto label_4b44a0;
    }
    ctx->pc = 0x4B4498u;
    {
        const bool branch_taken_0x4b4498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4498) {
            ctx->pc = 0x4B46A8u;
            goto label_4b46a8;
        }
    }
    ctx->pc = 0x4B44A0u;
label_4b44a0:
    // 0x4b44a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b44a4:
    // 0x4b44a4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b44a8:
    // 0x4b44a8: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x4b44a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b44ac:
    // 0x4b44ac: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4b44acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b44b0:
    // 0x4b44b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b44b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b44b4:
    // 0x4b44b4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x4b44b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_4b44b8:
    // 0x4b44b8: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x4b44b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b44bc:
    // 0x4b44bc: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x4b44bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b44c0:
    // 0x4b44c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b44c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b44c4:
    // 0x4b44c4: 0x45010078  bc1t        . + 4 + (0x78 << 2)
label_4b44c8:
    if (ctx->pc == 0x4B44C8u) {
        ctx->pc = 0x4B44CCu;
        goto label_4b44cc;
    }
    ctx->pc = 0x4B44C4u;
    {
        const bool branch_taken_0x4b44c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b44c4) {
            ctx->pc = 0x4B46A8u;
            goto label_4b46a8;
        }
    }
    ctx->pc = 0x4B44CCu;
label_4b44cc:
    // 0x4b44cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4b44ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4b44d0:
    // 0x4b44d0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4b44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4b44d4:
    // 0x4b44d4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4b44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4b44d8:
    // 0x4b44d8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4b44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4b44dc:
    // 0x4b44dc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b44e0:
    // 0x4b44e0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x4b44e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_4b44e4:
    // 0x4b44e4: 0xc4a0c670  lwc1        $f0, -0x3990($a1)
    ctx->pc = 0x4b44e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b44e8:
    // 0x4b44e8: 0xc482c674  lwc1        $f2, -0x398C($a0)
    ctx->pc = 0x4b44e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b44ec:
    // 0x4b44ec: 0xc461c678  lwc1        $f1, -0x3988($v1)
    ctx->pc = 0x4b44ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b44f0:
    // 0x4b44f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4b44f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4b44f4:
    // 0x4b44f4: 0xc440c67c  lwc1        $f0, -0x3984($v0)
    ctx->pc = 0x4b44f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b44f8:
    // 0x4b44f8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x4b44f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4b44fc:
    // 0x4b44fc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x4b44fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4b4500:
    // 0x4b4500: 0xc04ab66  jal         func_12AD98
label_4b4504:
    if (ctx->pc == 0x4B4504u) {
        ctx->pc = 0x4B4504u;
            // 0x4b4504: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4B4508u;
        goto label_4b4508;
    }
    ctx->pc = 0x4B4500u;
    SET_GPR_U32(ctx, 31, 0x4B4508u);
    ctx->pc = 0x4B4504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4500u;
            // 0x4b4504: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4508u; }
        if (ctx->pc != 0x4B4508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4508u; }
        if (ctx->pc != 0x4B4508u) { return; }
    }
    ctx->pc = 0x4B4508u;
label_4b4508:
    // 0x4b4508: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4b4508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4b450c:
    // 0x4b450c: 0xc04ab66  jal         func_12AD98
label_4b4510:
    if (ctx->pc == 0x4B4510u) {
        ctx->pc = 0x4B4510u;
            // 0x4b4510: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x4B4514u;
        goto label_4b4514;
    }
    ctx->pc = 0x4B450Cu;
    SET_GPR_U32(ctx, 31, 0x4B4514u);
    ctx->pc = 0x4B4510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B450Cu;
            // 0x4b4510: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4514u; }
        if (ctx->pc != 0x4B4514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4514u; }
        if (ctx->pc != 0x4B4514u) { return; }
    }
    ctx->pc = 0x4B4514u;
label_4b4514:
    // 0x4b4514: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x4b4514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4b4518:
    // 0x4b4518: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x4b4518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_4b451c:
    // 0x4b451c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b451cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b4520:
    // 0x4b4520: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4b4524:
    if (ctx->pc == 0x4B4524u) {
        ctx->pc = 0x4B4524u;
            // 0x4b4524: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4B4528u;
        goto label_4b4528;
    }
    ctx->pc = 0x4B4520u;
    {
        const bool branch_taken_0x4b4520 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4b4520) {
            ctx->pc = 0x4B4524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4520u;
            // 0x4b4524: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4534u;
            goto label_4b4534;
        }
    }
    ctx->pc = 0x4B4528u;
label_4b4528:
    // 0x4b4528: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4b4528u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b452c:
    // 0x4b452c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b4530:
    if (ctx->pc == 0x4B4530u) {
        ctx->pc = 0x4B4530u;
            // 0x4b4530: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B4534u;
        goto label_4b4534;
    }
    ctx->pc = 0x4B452Cu;
    {
        const bool branch_taken_0x4b452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B452Cu;
            // 0x4b4530: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b452c) {
            ctx->pc = 0x4B454Cu;
            goto label_4b454c;
        }
    }
    ctx->pc = 0x4B4534u;
label_4b4534:
    // 0x4b4534: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4b4534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4b4538:
    // 0x4b4538: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b4538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b453c:
    // 0x4b453c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b453cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b4540:
    // 0x4b4540: 0x0  nop
    ctx->pc = 0x4b4540u;
    // NOP
label_4b4544:
    // 0x4b4544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b4544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b4548:
    // 0x4b4548: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4b4548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4b454c:
    // 0x4b454c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4b454cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b4550:
    // 0x4b4550: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4b4550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4b4554:
    // 0x4b4554: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b4558:
    // 0x4b4558: 0x34420069  ori         $v0, $v0, 0x69
    ctx->pc = 0x4b4558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
label_4b455c:
    // 0x4b455c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b455cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b4560:
    // 0x4b4560: 0x0  nop
    ctx->pc = 0x4b4560u;
    // NOP
label_4b4564:
    // 0x4b4564: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4b4564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4b4568:
    // 0x4b4568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b4568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b456c:
    // 0x4b456c: 0x0  nop
    ctx->pc = 0x4b456cu;
    // NOP
label_4b4570:
    // 0x4b4570: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4b4570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4b4574:
    // 0x4b4574: 0xc04ab66  jal         func_12AD98
label_4b4578:
    if (ctx->pc == 0x4B4578u) {
        ctx->pc = 0x4B4578u;
            // 0x4b4578: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->pc = 0x4B457Cu;
        goto label_4b457c;
    }
    ctx->pc = 0x4B4574u;
    SET_GPR_U32(ctx, 31, 0x4B457Cu);
    ctx->pc = 0x4B4578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4574u;
            // 0x4b4578: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B457Cu; }
        if (ctx->pc != 0x4B457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B457Cu; }
        if (ctx->pc != 0x4B457Cu) { return; }
    }
    ctx->pc = 0x4B457Cu;
label_4b457c:
    // 0x4b457c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4b457cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4b4580:
    // 0x4b4580: 0xc04ab66  jal         func_12AD98
label_4b4584:
    if (ctx->pc == 0x4B4584u) {
        ctx->pc = 0x4B4584u;
            // 0x4b4584: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x4B4588u;
        goto label_4b4588;
    }
    ctx->pc = 0x4B4580u;
    SET_GPR_U32(ctx, 31, 0x4B4588u);
    ctx->pc = 0x4B4584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4580u;
            // 0x4b4584: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4588u; }
        if (ctx->pc != 0x4B4588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4588u; }
        if (ctx->pc != 0x4B4588u) { return; }
    }
    ctx->pc = 0x4B4588u;
label_4b4588:
    // 0x4b4588: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x4b4588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4b458c:
    // 0x4b458c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x4b458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_4b4590:
    // 0x4b4590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b4590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b4594:
    // 0x4b4594: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4b4598:
    if (ctx->pc == 0x4B4598u) {
        ctx->pc = 0x4B4598u;
            // 0x4b4598: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4B459Cu;
        goto label_4b459c;
    }
    ctx->pc = 0x4B4594u;
    {
        const bool branch_taken_0x4b4594 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4b4594) {
            ctx->pc = 0x4B4598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4594u;
            // 0x4b4598: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B45A8u;
            goto label_4b45a8;
        }
    }
    ctx->pc = 0x4B459Cu;
label_4b459c:
    // 0x4b459c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4b459cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b45a0:
    // 0x4b45a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b45a4:
    if (ctx->pc == 0x4B45A4u) {
        ctx->pc = 0x4B45A4u;
            // 0x4b45a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B45A8u;
        goto label_4b45a8;
    }
    ctx->pc = 0x4B45A0u;
    {
        const bool branch_taken_0x4b45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B45A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B45A0u;
            // 0x4b45a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b45a0) {
            ctx->pc = 0x4B45C0u;
            goto label_4b45c0;
        }
    }
    ctx->pc = 0x4B45A8u;
label_4b45a8:
    // 0x4b45a8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4b45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4b45ac:
    // 0x4b45ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b45acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b45b0:
    // 0x4b45b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b45b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b45b4:
    // 0x4b45b4: 0x0  nop
    ctx->pc = 0x4b45b4u;
    // NOP
label_4b45b8:
    // 0x4b45b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b45b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b45bc:
    // 0x4b45bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4b45bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4b45c0:
    // 0x4b45c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4b45c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b45c4:
    // 0x4b45c4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4b45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4b45c8:
    // 0x4b45c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b45cc:
    // 0x4b45cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4b45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4b45d0:
    // 0x4b45d0: 0x34420069  ori         $v0, $v0, 0x69
    ctx->pc = 0x4b45d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
label_4b45d4:
    // 0x4b45d4: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x4b45d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4b45d8:
    // 0x4b45d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b45d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b45dc:
    // 0x4b45dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b45dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b45e0:
    // 0x4b45e0: 0x0  nop
    ctx->pc = 0x4b45e0u;
    // NOP
label_4b45e4:
    // 0x4b45e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4b45e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4b45e8:
    // 0x4b45e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b45e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b45ec:
    // 0x4b45ec: 0x0  nop
    ctx->pc = 0x4b45ecu;
    // NOP
label_4b45f0:
    // 0x4b45f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4b45f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4b45f4:
    // 0x4b45f4: 0xc04ccc4  jal         func_133310
label_4b45f8:
    if (ctx->pc == 0x4B45F8u) {
        ctx->pc = 0x4B45F8u;
            // 0x4b45f8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x4B45FCu;
        goto label_4b45fc;
    }
    ctx->pc = 0x4B45F4u;
    SET_GPR_U32(ctx, 31, 0x4B45FCu);
    ctx->pc = 0x4B45F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B45F4u;
            // 0x4b45f8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B45FCu; }
        if (ctx->pc != 0x4B45FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B45FCu; }
        if (ctx->pc != 0x4B45FCu) { return; }
    }
    ctx->pc = 0x4B45FCu;
label_4b45fc:
    // 0x4b45fc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4b45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4b4600:
    // 0x4b4600: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4b4600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4b4604:
    // 0x4b4604: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x4b4604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b4608:
    // 0x4b4608: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4b4608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b460c:
    // 0x4b460c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x4b460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b4610:
    // 0x4b4610: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x4b4610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4b4614:
    // 0x4b4614: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4b4614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b4618:
    // 0x4b4618: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4b4618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b461c:
    // 0x4b461c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x4b461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b4620:
    // 0x4b4620: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x4b4620u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_4b4624:
    // 0x4b4624: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x4b4624u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4b4628:
    // 0x4b4628: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x4b4628u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4b462c:
    // 0x4b462c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x4b462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b4630:
    // 0x4b4630: 0x46007c46  mov.s       $f17, $f15
    ctx->pc = 0x4b4630u;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
label_4b4634:
    // 0x4b4634: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x4b4634u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b4638:
    // 0x4b4638: 0xe7ad0034  swc1        $f13, 0x34($sp)
    ctx->pc = 0x4b4638u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4b463c:
    // 0x4b463c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4b463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b4640:
    // 0x4b4640: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x4b4640u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b4644:
    // 0x4b4644: 0xc0bafb8  jal         func_2EBEE0
label_4b4648:
    if (ctx->pc == 0x4B4648u) {
        ctx->pc = 0x4B4648u;
            // 0x4b4648: 0xe7ae0038  swc1        $f14, 0x38($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4B464Cu;
        goto label_4b464c;
    }
    ctx->pc = 0x4B4644u;
    SET_GPR_U32(ctx, 31, 0x4B464Cu);
    ctx->pc = 0x4B4648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4644u;
            // 0x4b4648: 0xe7ae0038  swc1        $f14, 0x38($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B464Cu; }
        if (ctx->pc != 0x4B464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B464Cu; }
        if (ctx->pc != 0x4B464Cu) { return; }
    }
    ctx->pc = 0x4B464Cu;
label_4b464c:
    // 0x4b464c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x4b464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b4650:
    // 0x4b4650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b4654:
    // 0x4b4654: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x4b4654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_4b4658:
    // 0x4b4658: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x4b4658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4b465c:
    // 0x4b465c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_4b4660:
    if (ctx->pc == 0x4B4660u) {
        ctx->pc = 0x4B4664u;
        goto label_4b4664;
    }
    ctx->pc = 0x4B465Cu;
    {
        const bool branch_taken_0x4b465c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b465c) {
            ctx->pc = 0x4B46A8u;
            goto label_4b46a8;
        }
    }
    ctx->pc = 0x4B4664u;
label_4b4664:
    // 0x4b4664: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4b4664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b4668:
    // 0x4b4668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b466c:
    // 0x4b466c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4b466cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4b4670:
    // 0x4b4670: 0x320f809  jalr        $t9
label_4b4674:
    if (ctx->pc == 0x4B4674u) {
        ctx->pc = 0x4B4674u;
            // 0x4b4674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4678u;
        goto label_4b4678;
    }
    ctx->pc = 0x4B4670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B4678u);
        ctx->pc = 0x4B4674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4670u;
            // 0x4b4674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B4678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B4678u; }
            if (ctx->pc != 0x4B4678u) { return; }
        }
        }
    }
    ctx->pc = 0x4B4678u;
label_4b4678:
    // 0x4b4678: 0x1000000b  b           . + 4 + (0xB << 2)
label_4b467c:
    if (ctx->pc == 0x4B467Cu) {
        ctx->pc = 0x4B4680u;
        goto label_4b4680;
    }
    ctx->pc = 0x4B4678u;
    {
        const bool branch_taken_0x4b4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4678) {
            ctx->pc = 0x4B46A8u;
            goto label_4b46a8;
        }
    }
    ctx->pc = 0x4B4680u;
label_4b4680:
    // 0x4b4680: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4b4680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4b4684:
    // 0x4b4684: 0x320f809  jalr        $t9
label_4b4688:
    if (ctx->pc == 0x4B4688u) {
        ctx->pc = 0x4B468Cu;
        goto label_4b468c;
    }
    ctx->pc = 0x4B4684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B468Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B468Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B468Cu; }
            if (ctx->pc != 0x4B468Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B468Cu;
label_4b468c:
    // 0x4b468c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4b4690:
    if (ctx->pc == 0x4B4690u) {
        ctx->pc = 0x4B4694u;
        goto label_4b4694;
    }
    ctx->pc = 0x4B468Cu;
    {
        const bool branch_taken_0x4b468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b468c) {
            ctx->pc = 0x4B46A8u;
            goto label_4b46a8;
        }
    }
    ctx->pc = 0x4B4694u;
label_4b4694:
    // 0x4b4694: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b4694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b4698:
    // 0x4b4698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b4698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b469c:
    // 0x4b469c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4b469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4b46a0:
    // 0x4b46a0: 0xc057b7c  jal         func_15EDF0
label_4b46a4:
    if (ctx->pc == 0x4B46A4u) {
        ctx->pc = 0x4B46A4u;
            // 0x4b46a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4B46A8u;
        goto label_4b46a8;
    }
    ctx->pc = 0x4B46A0u;
    SET_GPR_U32(ctx, 31, 0x4B46A8u);
    ctx->pc = 0x4B46A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B46A0u;
            // 0x4b46a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B46A8u; }
        if (ctx->pc != 0x4B46A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B46A8u; }
        if (ctx->pc != 0x4B46A8u) { return; }
    }
    ctx->pc = 0x4B46A8u;
label_4b46a8:
    // 0x4b46a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b46a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b46ac:
    // 0x4b46ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b46acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b46b0:
    // 0x4b46b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b46b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b46b4:
    // 0x4b46b4: 0x3e00008  jr          $ra
label_4b46b8:
    if (ctx->pc == 0x4B46B8u) {
        ctx->pc = 0x4B46B8u;
            // 0x4b46b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4B46BCu;
        goto label_4b46bc;
    }
    ctx->pc = 0x4B46B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B46B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B46B4u;
            // 0x4b46b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B46BCu;
label_4b46bc:
    // 0x4b46bc: 0x0  nop
    ctx->pc = 0x4b46bcu;
    // NOP
}
