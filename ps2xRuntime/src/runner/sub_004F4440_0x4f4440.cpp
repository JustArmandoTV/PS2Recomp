#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F4440
// Address: 0x4f4440 - 0x4f4750
void sub_004F4440_0x4f4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4440_0x4f4440");
#endif

    switch (ctx->pc) {
        case 0x4f4440u: goto label_4f4440;
        case 0x4f4444u: goto label_4f4444;
        case 0x4f4448u: goto label_4f4448;
        case 0x4f444cu: goto label_4f444c;
        case 0x4f4450u: goto label_4f4450;
        case 0x4f4454u: goto label_4f4454;
        case 0x4f4458u: goto label_4f4458;
        case 0x4f445cu: goto label_4f445c;
        case 0x4f4460u: goto label_4f4460;
        case 0x4f4464u: goto label_4f4464;
        case 0x4f4468u: goto label_4f4468;
        case 0x4f446cu: goto label_4f446c;
        case 0x4f4470u: goto label_4f4470;
        case 0x4f4474u: goto label_4f4474;
        case 0x4f4478u: goto label_4f4478;
        case 0x4f447cu: goto label_4f447c;
        case 0x4f4480u: goto label_4f4480;
        case 0x4f4484u: goto label_4f4484;
        case 0x4f4488u: goto label_4f4488;
        case 0x4f448cu: goto label_4f448c;
        case 0x4f4490u: goto label_4f4490;
        case 0x4f4494u: goto label_4f4494;
        case 0x4f4498u: goto label_4f4498;
        case 0x4f449cu: goto label_4f449c;
        case 0x4f44a0u: goto label_4f44a0;
        case 0x4f44a4u: goto label_4f44a4;
        case 0x4f44a8u: goto label_4f44a8;
        case 0x4f44acu: goto label_4f44ac;
        case 0x4f44b0u: goto label_4f44b0;
        case 0x4f44b4u: goto label_4f44b4;
        case 0x4f44b8u: goto label_4f44b8;
        case 0x4f44bcu: goto label_4f44bc;
        case 0x4f44c0u: goto label_4f44c0;
        case 0x4f44c4u: goto label_4f44c4;
        case 0x4f44c8u: goto label_4f44c8;
        case 0x4f44ccu: goto label_4f44cc;
        case 0x4f44d0u: goto label_4f44d0;
        case 0x4f44d4u: goto label_4f44d4;
        case 0x4f44d8u: goto label_4f44d8;
        case 0x4f44dcu: goto label_4f44dc;
        case 0x4f44e0u: goto label_4f44e0;
        case 0x4f44e4u: goto label_4f44e4;
        case 0x4f44e8u: goto label_4f44e8;
        case 0x4f44ecu: goto label_4f44ec;
        case 0x4f44f0u: goto label_4f44f0;
        case 0x4f44f4u: goto label_4f44f4;
        case 0x4f44f8u: goto label_4f44f8;
        case 0x4f44fcu: goto label_4f44fc;
        case 0x4f4500u: goto label_4f4500;
        case 0x4f4504u: goto label_4f4504;
        case 0x4f4508u: goto label_4f4508;
        case 0x4f450cu: goto label_4f450c;
        case 0x4f4510u: goto label_4f4510;
        case 0x4f4514u: goto label_4f4514;
        case 0x4f4518u: goto label_4f4518;
        case 0x4f451cu: goto label_4f451c;
        case 0x4f4520u: goto label_4f4520;
        case 0x4f4524u: goto label_4f4524;
        case 0x4f4528u: goto label_4f4528;
        case 0x4f452cu: goto label_4f452c;
        case 0x4f4530u: goto label_4f4530;
        case 0x4f4534u: goto label_4f4534;
        case 0x4f4538u: goto label_4f4538;
        case 0x4f453cu: goto label_4f453c;
        case 0x4f4540u: goto label_4f4540;
        case 0x4f4544u: goto label_4f4544;
        case 0x4f4548u: goto label_4f4548;
        case 0x4f454cu: goto label_4f454c;
        case 0x4f4550u: goto label_4f4550;
        case 0x4f4554u: goto label_4f4554;
        case 0x4f4558u: goto label_4f4558;
        case 0x4f455cu: goto label_4f455c;
        case 0x4f4560u: goto label_4f4560;
        case 0x4f4564u: goto label_4f4564;
        case 0x4f4568u: goto label_4f4568;
        case 0x4f456cu: goto label_4f456c;
        case 0x4f4570u: goto label_4f4570;
        case 0x4f4574u: goto label_4f4574;
        case 0x4f4578u: goto label_4f4578;
        case 0x4f457cu: goto label_4f457c;
        case 0x4f4580u: goto label_4f4580;
        case 0x4f4584u: goto label_4f4584;
        case 0x4f4588u: goto label_4f4588;
        case 0x4f458cu: goto label_4f458c;
        case 0x4f4590u: goto label_4f4590;
        case 0x4f4594u: goto label_4f4594;
        case 0x4f4598u: goto label_4f4598;
        case 0x4f459cu: goto label_4f459c;
        case 0x4f45a0u: goto label_4f45a0;
        case 0x4f45a4u: goto label_4f45a4;
        case 0x4f45a8u: goto label_4f45a8;
        case 0x4f45acu: goto label_4f45ac;
        case 0x4f45b0u: goto label_4f45b0;
        case 0x4f45b4u: goto label_4f45b4;
        case 0x4f45b8u: goto label_4f45b8;
        case 0x4f45bcu: goto label_4f45bc;
        case 0x4f45c0u: goto label_4f45c0;
        case 0x4f45c4u: goto label_4f45c4;
        case 0x4f45c8u: goto label_4f45c8;
        case 0x4f45ccu: goto label_4f45cc;
        case 0x4f45d0u: goto label_4f45d0;
        case 0x4f45d4u: goto label_4f45d4;
        case 0x4f45d8u: goto label_4f45d8;
        case 0x4f45dcu: goto label_4f45dc;
        case 0x4f45e0u: goto label_4f45e0;
        case 0x4f45e4u: goto label_4f45e4;
        case 0x4f45e8u: goto label_4f45e8;
        case 0x4f45ecu: goto label_4f45ec;
        case 0x4f45f0u: goto label_4f45f0;
        case 0x4f45f4u: goto label_4f45f4;
        case 0x4f45f8u: goto label_4f45f8;
        case 0x4f45fcu: goto label_4f45fc;
        case 0x4f4600u: goto label_4f4600;
        case 0x4f4604u: goto label_4f4604;
        case 0x4f4608u: goto label_4f4608;
        case 0x4f460cu: goto label_4f460c;
        case 0x4f4610u: goto label_4f4610;
        case 0x4f4614u: goto label_4f4614;
        case 0x4f4618u: goto label_4f4618;
        case 0x4f461cu: goto label_4f461c;
        case 0x4f4620u: goto label_4f4620;
        case 0x4f4624u: goto label_4f4624;
        case 0x4f4628u: goto label_4f4628;
        case 0x4f462cu: goto label_4f462c;
        case 0x4f4630u: goto label_4f4630;
        case 0x4f4634u: goto label_4f4634;
        case 0x4f4638u: goto label_4f4638;
        case 0x4f463cu: goto label_4f463c;
        case 0x4f4640u: goto label_4f4640;
        case 0x4f4644u: goto label_4f4644;
        case 0x4f4648u: goto label_4f4648;
        case 0x4f464cu: goto label_4f464c;
        case 0x4f4650u: goto label_4f4650;
        case 0x4f4654u: goto label_4f4654;
        case 0x4f4658u: goto label_4f4658;
        case 0x4f465cu: goto label_4f465c;
        case 0x4f4660u: goto label_4f4660;
        case 0x4f4664u: goto label_4f4664;
        case 0x4f4668u: goto label_4f4668;
        case 0x4f466cu: goto label_4f466c;
        case 0x4f4670u: goto label_4f4670;
        case 0x4f4674u: goto label_4f4674;
        case 0x4f4678u: goto label_4f4678;
        case 0x4f467cu: goto label_4f467c;
        case 0x4f4680u: goto label_4f4680;
        case 0x4f4684u: goto label_4f4684;
        case 0x4f4688u: goto label_4f4688;
        case 0x4f468cu: goto label_4f468c;
        case 0x4f4690u: goto label_4f4690;
        case 0x4f4694u: goto label_4f4694;
        case 0x4f4698u: goto label_4f4698;
        case 0x4f469cu: goto label_4f469c;
        case 0x4f46a0u: goto label_4f46a0;
        case 0x4f46a4u: goto label_4f46a4;
        case 0x4f46a8u: goto label_4f46a8;
        case 0x4f46acu: goto label_4f46ac;
        case 0x4f46b0u: goto label_4f46b0;
        case 0x4f46b4u: goto label_4f46b4;
        case 0x4f46b8u: goto label_4f46b8;
        case 0x4f46bcu: goto label_4f46bc;
        case 0x4f46c0u: goto label_4f46c0;
        case 0x4f46c4u: goto label_4f46c4;
        case 0x4f46c8u: goto label_4f46c8;
        case 0x4f46ccu: goto label_4f46cc;
        case 0x4f46d0u: goto label_4f46d0;
        case 0x4f46d4u: goto label_4f46d4;
        case 0x4f46d8u: goto label_4f46d8;
        case 0x4f46dcu: goto label_4f46dc;
        case 0x4f46e0u: goto label_4f46e0;
        case 0x4f46e4u: goto label_4f46e4;
        case 0x4f46e8u: goto label_4f46e8;
        case 0x4f46ecu: goto label_4f46ec;
        case 0x4f46f0u: goto label_4f46f0;
        case 0x4f46f4u: goto label_4f46f4;
        case 0x4f46f8u: goto label_4f46f8;
        case 0x4f46fcu: goto label_4f46fc;
        case 0x4f4700u: goto label_4f4700;
        case 0x4f4704u: goto label_4f4704;
        case 0x4f4708u: goto label_4f4708;
        case 0x4f470cu: goto label_4f470c;
        case 0x4f4710u: goto label_4f4710;
        case 0x4f4714u: goto label_4f4714;
        case 0x4f4718u: goto label_4f4718;
        case 0x4f471cu: goto label_4f471c;
        case 0x4f4720u: goto label_4f4720;
        case 0x4f4724u: goto label_4f4724;
        case 0x4f4728u: goto label_4f4728;
        case 0x4f472cu: goto label_4f472c;
        case 0x4f4730u: goto label_4f4730;
        case 0x4f4734u: goto label_4f4734;
        case 0x4f4738u: goto label_4f4738;
        case 0x4f473cu: goto label_4f473c;
        case 0x4f4740u: goto label_4f4740;
        case 0x4f4744u: goto label_4f4744;
        case 0x4f4748u: goto label_4f4748;
        case 0x4f474cu: goto label_4f474c;
        default: break;
    }

    ctx->pc = 0x4f4440u;

label_4f4440:
    // 0x4f4440: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f4440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f4444:
    // 0x4f4444: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4f4444u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4f4448:
    // 0x4f4448: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4f4448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4f444c:
    // 0x4f444c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f444cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f4450:
    // 0x4f4450: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4f4450u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f4454:
    // 0x4f4454: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4f4454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4f4458:
    // 0x4f4458: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f4458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f445c:
    // 0x4f445c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4f445cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4f4460:
    // 0x4f4460: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f4460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f4464:
    // 0x4f4464: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4f4464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4f4468:
    // 0x4f4468: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4f4468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4f446c:
    // 0x4f446c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4f446cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4f4470:
    // 0x4f4470: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4f4470u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4f4474:
    // 0x4f4474: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4f4474u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4f4478:
    // 0x4f4478: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4f4478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4f447c:
    // 0x4f447c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f447cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f4480:
    // 0x4f4480: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4f4480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4f4484:
    // 0x4f4484: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4f4484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4f4488:
    // 0x4f4488: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4f4488u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4f448c:
    // 0x4f448c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4f448cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4f4490:
    // 0x4f4490: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4f4490u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4f4494:
    // 0x4f4494: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4f4494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4f4498:
    // 0x4f4498: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4f4498u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4f449c:
    // 0x4f449c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4f449cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4f44a0:
    // 0x4f44a0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4f44a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4f44a4:
    // 0x4f44a4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4f44a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4f44a8:
    // 0x4f44a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f44ac:
    // 0x4f44ac: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4f44acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4f44b0:
    // 0x4f44b0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4f44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4f44b4:
    // 0x4f44b4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4f44b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f44b8:
    // 0x4f44b8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4f44b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4f44bc:
    // 0x4f44bc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4f44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4f44c0:
    // 0x4f44c0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4f44c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4f44c4:
    // 0x4f44c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f44c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f44c8:
    // 0x4f44c8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4f44c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4f44cc:
    // 0x4f44cc: 0x3e00008  jr          $ra
label_4f44d0:
    if (ctx->pc == 0x4F44D0u) {
        ctx->pc = 0x4F44D0u;
            // 0x4f44d0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4F44D4u;
        goto label_4f44d4;
    }
    ctx->pc = 0x4F44CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F44D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F44CCu;
            // 0x4f44d0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F44D4u;
label_4f44d4:
    // 0x4f44d4: 0x0  nop
    ctx->pc = 0x4f44d4u;
    // NOP
label_4f44d8:
    // 0x4f44d8: 0x0  nop
    ctx->pc = 0x4f44d8u;
    // NOP
label_4f44dc:
    // 0x4f44dc: 0x0  nop
    ctx->pc = 0x4f44dcu;
    // NOP
label_4f44e0:
    // 0x4f44e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f44e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f44e4:
    // 0x4f44e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f44e8:
    // 0x4f44e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f44e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4f44ec:
    // 0x4f44ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f44ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f44f0:
    // 0x4f44f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f44f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f44f4:
    // 0x4f44f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f44f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f44f8:
    // 0x4f44f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f44f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f44fc:
    // 0x4f44fc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f44fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f4500:
    // 0x4f4500: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4f4504:
    if (ctx->pc == 0x4F4504u) {
        ctx->pc = 0x4F4504u;
            // 0x4f4504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4508u;
        goto label_4f4508;
    }
    ctx->pc = 0x4F4500u;
    {
        const bool branch_taken_0x4f4500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F4504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4500u;
            // 0x4f4504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4500) {
            ctx->pc = 0x4F4534u;
            goto label_4f4534;
        }
    }
    ctx->pc = 0x4F4508u;
label_4f4508:
    // 0x4f4508: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f4508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f450c:
    // 0x4f450c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4f4510:
    if (ctx->pc == 0x4F4510u) {
        ctx->pc = 0x4F4510u;
            // 0x4f4510: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F4514u;
        goto label_4f4514;
    }
    ctx->pc = 0x4F450Cu;
    {
        const bool branch_taken_0x4f450c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f450c) {
            ctx->pc = 0x4F4510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F450Cu;
            // 0x4f4510: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4528u;
            goto label_4f4528;
        }
    }
    ctx->pc = 0x4F4514u;
label_4f4514:
    // 0x4f4514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f4518:
    // 0x4f4518: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4f451c:
    if (ctx->pc == 0x4F451Cu) {
        ctx->pc = 0x4F4520u;
        goto label_4f4520;
    }
    ctx->pc = 0x4F4518u;
    {
        const bool branch_taken_0x4f4518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f4518) {
            ctx->pc = 0x4F4568u;
            goto label_4f4568;
        }
    }
    ctx->pc = 0x4F4520u;
label_4f4520:
    // 0x4f4520: 0x10000011  b           . + 4 + (0x11 << 2)
label_4f4524:
    if (ctx->pc == 0x4F4524u) {
        ctx->pc = 0x4F4528u;
        goto label_4f4528;
    }
    ctx->pc = 0x4F4520u;
    {
        const bool branch_taken_0x4f4520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4520) {
            ctx->pc = 0x4F4568u;
            goto label_4f4568;
        }
    }
    ctx->pc = 0x4F4528u;
label_4f4528:
    // 0x4f4528: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4f4528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4f452c:
    // 0x4f452c: 0x320f809  jalr        $t9
label_4f4530:
    if (ctx->pc == 0x4F4530u) {
        ctx->pc = 0x4F4534u;
        goto label_4f4534;
    }
    ctx->pc = 0x4F452Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F4534u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F4534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F4534u; }
            if (ctx->pc != 0x4F4534u) { return; }
        }
        }
    }
    ctx->pc = 0x4F4534u;
label_4f4534:
    // 0x4f4534: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4f4534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4f4538:
    // 0x4f4538: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4f453c:
    if (ctx->pc == 0x4F453Cu) {
        ctx->pc = 0x4F4540u;
        goto label_4f4540;
    }
    ctx->pc = 0x4F4538u;
    {
        const bool branch_taken_0x4f4538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4538) {
            ctx->pc = 0x4F4568u;
            goto label_4f4568;
        }
    }
    ctx->pc = 0x4F4540u;
label_4f4540:
    // 0x4f4540: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f4540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4544:
    // 0x4f4544: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f4544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4548:
    // 0x4f4548: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4f4548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4f454c:
    // 0x4f454c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4f454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f4550:
    // 0x4f4550: 0xc0e3658  jal         func_38D960
label_4f4554:
    if (ctx->pc == 0x4F4554u) {
        ctx->pc = 0x4F4554u;
            // 0x4f4554: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4F4558u;
        goto label_4f4558;
    }
    ctx->pc = 0x4F4550u;
    SET_GPR_U32(ctx, 31, 0x4F4558u);
    ctx->pc = 0x4F4554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4550u;
            // 0x4f4554: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4558u; }
        if (ctx->pc != 0x4F4558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4558u; }
        if (ctx->pc != 0x4F4558u) { return; }
    }
    ctx->pc = 0x4F4558u;
label_4f4558:
    // 0x4f4558: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f4558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4f455c:
    // 0x4f455c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4f455cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f4560:
    // 0x4f4560: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4f4564:
    if (ctx->pc == 0x4F4564u) {
        ctx->pc = 0x4F4564u;
            // 0x4f4564: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4F4568u;
        goto label_4f4568;
    }
    ctx->pc = 0x4F4560u;
    {
        const bool branch_taken_0x4f4560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F4564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4560u;
            // 0x4f4564: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4560) {
            ctx->pc = 0x4F4548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f4548;
        }
    }
    ctx->pc = 0x4F4568u;
label_4f4568:
    // 0x4f4568: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f4568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f456c:
    // 0x4f456c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f456cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4570:
    // 0x4f4570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f4570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4574:
    // 0x4f4574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f4574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4578:
    // 0x4f4578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f4578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f457c:
    // 0x4f457c: 0x3e00008  jr          $ra
label_4f4580:
    if (ctx->pc == 0x4F4580u) {
        ctx->pc = 0x4F4580u;
            // 0x4f4580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4F4584u;
        goto label_4f4584;
    }
    ctx->pc = 0x4F457Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F457Cu;
            // 0x4f4580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4584u;
label_4f4584:
    // 0x4f4584: 0x0  nop
    ctx->pc = 0x4f4584u;
    // NOP
label_4f4588:
    // 0x4f4588: 0x0  nop
    ctx->pc = 0x4f4588u;
    // NOP
label_4f458c:
    // 0x4f458c: 0x0  nop
    ctx->pc = 0x4f458cu;
    // NOP
label_4f4590:
    // 0x4f4590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f4590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f4594:
    // 0x4f4594: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f4594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4f4598:
    // 0x4f4598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f4598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f459c:
    // 0x4f459c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f45a0:
    // 0x4f45a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f45a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f45a4:
    // 0x4f45a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f45a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f45a8:
    // 0x4f45a8: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4f45a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f45ac:
    // 0x4f45ac: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4f45b0:
    if (ctx->pc == 0x4F45B0u) {
        ctx->pc = 0x4F45B0u;
            // 0x4f45b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F45B4u;
        goto label_4f45b4;
    }
    ctx->pc = 0x4F45ACu;
    {
        const bool branch_taken_0x4f45ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F45B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F45ACu;
            // 0x4f45b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f45ac) {
            ctx->pc = 0x4F45ECu;
            goto label_4f45ec;
        }
    }
    ctx->pc = 0x4F45B4u;
label_4f45b4:
    // 0x4f45b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f45b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f45b8:
    // 0x4f45b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f45b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f45bc:
    // 0x4f45bc: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4f45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4f45c0:
    // 0x4f45c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f45c4:
    // 0x4f45c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f45c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f45c8:
    // 0x4f45c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f45c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f45cc:
    // 0x4f45cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4f45ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4f45d0:
    // 0x4f45d0: 0x320f809  jalr        $t9
label_4f45d4:
    if (ctx->pc == 0x4F45D4u) {
        ctx->pc = 0x4F45D8u;
        goto label_4f45d8;
    }
    ctx->pc = 0x4F45D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F45D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F45D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F45D8u; }
            if (ctx->pc != 0x4F45D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F45D8u;
label_4f45d8:
    // 0x4f45d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4f45d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4f45dc:
    // 0x4f45dc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4f45dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f45e0:
    // 0x4f45e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4f45e4:
    if (ctx->pc == 0x4F45E4u) {
        ctx->pc = 0x4F45E4u;
            // 0x4f45e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F45E8u;
        goto label_4f45e8;
    }
    ctx->pc = 0x4F45E0u;
    {
        const bool branch_taken_0x4f45e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F45E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F45E0u;
            // 0x4f45e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f45e0) {
            ctx->pc = 0x4F45BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f45bc;
        }
    }
    ctx->pc = 0x4F45E8u;
label_4f45e8:
    // 0x4f45e8: 0xa2600091  sb          $zero, 0x91($s3)
    ctx->pc = 0x4f45e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 145), (uint8_t)GPR_U32(ctx, 0));
label_4f45ec:
    // 0x4f45ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f45ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f45f0:
    // 0x4f45f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f45f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f45f4:
    // 0x4f45f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f45f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f45f8:
    // 0x4f45f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f45f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f45fc:
    // 0x4f45fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f45fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4600:
    // 0x4f4600: 0x3e00008  jr          $ra
label_4f4604:
    if (ctx->pc == 0x4F4604u) {
        ctx->pc = 0x4F4604u;
            // 0x4f4604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4F4608u;
        goto label_4f4608;
    }
    ctx->pc = 0x4F4600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4600u;
            // 0x4f4604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4608u;
label_4f4608:
    // 0x4f4608: 0x0  nop
    ctx->pc = 0x4f4608u;
    // NOP
label_4f460c:
    // 0x4f460c: 0x0  nop
    ctx->pc = 0x4f460cu;
    // NOP
label_4f4610:
    // 0x4f4610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f4614:
    // 0x4f4614: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4f4614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4f4618:
    // 0x4f4618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f461c:
    // 0x4f461c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x4f461cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4f4620:
    // 0x4f4620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f4620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f4624:
    // 0x4f4624: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4628:
    // 0x4f4628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f4628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f462c:
    // 0x4f462c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4f462cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4630:
    // 0x4f4630: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4f4630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4f4634:
    // 0x4f4634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4638:
    // 0x4f4638: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4f4638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4f463c:
    // 0x4f463c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f4640:
    // 0x4f4640: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f4640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f4644:
    // 0x4f4644: 0xc08bff0  jal         func_22FFC0
label_4f4648:
    if (ctx->pc == 0x4F4648u) {
        ctx->pc = 0x4F4648u;
            // 0x4f4648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F464Cu;
        goto label_4f464c;
    }
    ctx->pc = 0x4F4644u;
    SET_GPR_U32(ctx, 31, 0x4F464Cu);
    ctx->pc = 0x4F4648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4644u;
            // 0x4f4648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F464Cu; }
        if (ctx->pc != 0x4F464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F464Cu; }
        if (ctx->pc != 0x4F464Cu) { return; }
    }
    ctx->pc = 0x4F464Cu;
label_4f464c:
    // 0x4f464c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4f464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f4650:
    // 0x4f4650: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4f4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f4654:
    // 0x4f4654: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f4654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f4658:
    // 0x4f4658: 0xc08914c  jal         func_224530
label_4f465c:
    if (ctx->pc == 0x4F465Cu) {
        ctx->pc = 0x4F465Cu;
            // 0x4f465c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4660u;
        goto label_4f4660;
    }
    ctx->pc = 0x4F4658u;
    SET_GPR_U32(ctx, 31, 0x4F4660u);
    ctx->pc = 0x4F465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4658u;
            // 0x4f465c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4660u; }
        if (ctx->pc != 0x4F4660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4660u; }
        if (ctx->pc != 0x4F4660u) { return; }
    }
    ctx->pc = 0x4F4660u;
label_4f4660:
    // 0x4f4660: 0xc0e393c  jal         func_38E4F0
label_4f4664:
    if (ctx->pc == 0x4F4664u) {
        ctx->pc = 0x4F4664u;
            // 0x4f4664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4668u;
        goto label_4f4668;
    }
    ctx->pc = 0x4F4660u;
    SET_GPR_U32(ctx, 31, 0x4F4668u);
    ctx->pc = 0x4F4664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4660u;
            // 0x4f4664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4668u; }
        if (ctx->pc != 0x4F4668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4668u; }
        if (ctx->pc != 0x4F4668u) { return; }
    }
    ctx->pc = 0x4F4668u;
label_4f4668:
    // 0x4f4668: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4f4668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4f466c:
    // 0x4f466c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4f466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4f4670:
    // 0x4f4670: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x4f4670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_4f4674:
    // 0x4f4674: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4f4674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_4f4678:
    // 0x4f4678: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x4f4678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_4f467c:
    // 0x4f467c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4f467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4f4680:
    // 0x4f4680: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4f4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f4684:
    // 0x4f4684: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x4f4684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f4688:
    // 0x4f4688: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x4f4688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f468c:
    // 0x4f468c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x4f468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f4690:
    // 0x4f4690: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x4f4690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4694:
    // 0x4f4694: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4f4694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4f4698:
    // 0x4f4698: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4f4698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4f469c:
    // 0x4f469c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4f469cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4f46a0:
    // 0x4f46a0: 0xc0892a0  jal         func_224A80
label_4f46a4:
    if (ctx->pc == 0x4F46A4u) {
        ctx->pc = 0x4F46A4u;
            // 0x4f46a4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4F46A8u;
        goto label_4f46a8;
    }
    ctx->pc = 0x4F46A0u;
    SET_GPR_U32(ctx, 31, 0x4F46A8u);
    ctx->pc = 0x4F46A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F46A0u;
            // 0x4f46a4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F46A8u; }
        if (ctx->pc != 0x4F46A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F46A8u; }
        if (ctx->pc != 0x4F46A8u) { return; }
    }
    ctx->pc = 0x4F46A8u;
label_4f46a8:
    // 0x4f46a8: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4f46a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f46ac:
    // 0x4f46ac: 0xc088b74  jal         func_222DD0
label_4f46b0:
    if (ctx->pc == 0x4F46B0u) {
        ctx->pc = 0x4F46B0u;
            // 0x4f46b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F46B4u;
        goto label_4f46b4;
    }
    ctx->pc = 0x4F46ACu;
    SET_GPR_U32(ctx, 31, 0x4F46B4u);
    ctx->pc = 0x4F46B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F46ACu;
            // 0x4f46b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F46B4u; }
        if (ctx->pc != 0x4F46B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F46B4u; }
        if (ctx->pc != 0x4F46B4u) { return; }
    }
    ctx->pc = 0x4F46B4u;
label_4f46b4:
    // 0x4f46b4: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4f46b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4f46b8:
    // 0x4f46b8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4f46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4f46bc:
    // 0x4f46bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4f46bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4f46c0:
    // 0x4f46c0: 0x320f809  jalr        $t9
label_4f46c4:
    if (ctx->pc == 0x4F46C4u) {
        ctx->pc = 0x4F46C4u;
            // 0x4f46c4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4F46C8u;
        goto label_4f46c8;
    }
    ctx->pc = 0x4F46C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F46C8u);
        ctx->pc = 0x4F46C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F46C0u;
            // 0x4f46c4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F46C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F46C8u; }
            if (ctx->pc != 0x4F46C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F46C8u;
label_4f46c8:
    // 0x4f46c8: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4f46c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f46cc:
    // 0x4f46cc: 0xc088b74  jal         func_222DD0
label_4f46d0:
    if (ctx->pc == 0x4F46D0u) {
        ctx->pc = 0x4F46D0u;
            // 0x4f46d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F46D4u;
        goto label_4f46d4;
    }
    ctx->pc = 0x4F46CCu;
    SET_GPR_U32(ctx, 31, 0x4F46D4u);
    ctx->pc = 0x4F46D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F46CCu;
            // 0x4f46d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F46D4u; }
        if (ctx->pc != 0x4F46D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F46D4u; }
        if (ctx->pc != 0x4F46D4u) { return; }
    }
    ctx->pc = 0x4F46D4u;
label_4f46d4:
    // 0x4f46d4: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4f46d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4f46d8:
    // 0x4f46d8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4f46d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4f46dc:
    // 0x4f46dc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4f46dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4f46e0:
    // 0x4f46e0: 0x320f809  jalr        $t9
label_4f46e4:
    if (ctx->pc == 0x4F46E4u) {
        ctx->pc = 0x4F46E4u;
            // 0x4f46e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4F46E8u;
        goto label_4f46e8;
    }
    ctx->pc = 0x4F46E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F46E8u);
        ctx->pc = 0x4F46E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F46E0u;
            // 0x4f46e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F46E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F46E8u; }
            if (ctx->pc != 0x4F46E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F46E8u;
label_4f46e8:
    // 0x4f46e8: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4f46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4f46ec:
    // 0x4f46ec: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4f46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f46f0:
    // 0x4f46f0: 0x34667084  ori         $a2, $v1, 0x7084
    ctx->pc = 0x4f46f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4f46f4:
    // 0x4f46f4: 0x3c033a7e  lui         $v1, 0x3A7E
    ctx->pc = 0x4f46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14974 << 16));
label_4f46f8:
    // 0x4f46f8: 0x34642e97  ori         $a0, $v1, 0x2E97
    ctx->pc = 0x4f46f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11927);
label_4f46fc:
    // 0x4f46fc: 0xaca60154  sw          $a2, 0x154($a1)
    ctx->pc = 0x4f46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 6));
label_4f4700:
    // 0x4f4700: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4f4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f4704:
    // 0x4f4704: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x4f4704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
label_4f4708:
    // 0x4f4708: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x4f4708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_4f470c:
    // 0x4f470c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_4f4710:
    if (ctx->pc == 0x4F4710u) {
        ctx->pc = 0x4F4710u;
            // 0x4f4710: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4F4714u;
        goto label_4f4714;
    }
    ctx->pc = 0x4F470Cu;
    {
        const bool branch_taken_0x4f470c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f470c) {
            ctx->pc = 0x4F4710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F470Cu;
            // 0x4f4710: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4734u;
            goto label_4f4734;
        }
    }
    ctx->pc = 0x4F4714u;
label_4f4714:
    // 0x4f4714: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x4f4714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
label_4f4718:
    // 0x4f4718: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4f4718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4f471c:
    // 0x4f471c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4f471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4f4720:
    // 0x4f4720: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x4f4720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_4f4724:
    // 0x4f4724: 0xc057b7c  jal         func_15EDF0
label_4f4728:
    if (ctx->pc == 0x4F4728u) {
        ctx->pc = 0x4F4728u;
            // 0x4f4728: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4F472Cu;
        goto label_4f472c;
    }
    ctx->pc = 0x4F4724u;
    SET_GPR_U32(ctx, 31, 0x4F472Cu);
    ctx->pc = 0x4F4728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4724u;
            // 0x4f4728: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F472Cu; }
        if (ctx->pc != 0x4F472Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F472Cu; }
        if (ctx->pc != 0x4F472Cu) { return; }
    }
    ctx->pc = 0x4F472Cu;
label_4f472c:
    // 0x4f472c: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x4f472cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_4f4730:
    // 0x4f4730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f4730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4734:
    // 0x4f4734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f4734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4738:
    // 0x4f4738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f4738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f473c:
    // 0x4f473c: 0x3e00008  jr          $ra
label_4f4740:
    if (ctx->pc == 0x4F4740u) {
        ctx->pc = 0x4F4740u;
            // 0x4f4740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4F4744u;
        goto label_4f4744;
    }
    ctx->pc = 0x4F473Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F473Cu;
            // 0x4f4740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4744u;
label_4f4744:
    // 0x4f4744: 0x0  nop
    ctx->pc = 0x4f4744u;
    // NOP
label_4f4748:
    // 0x4f4748: 0x0  nop
    ctx->pc = 0x4f4748u;
    // NOP
label_4f474c:
    // 0x4f474c: 0x0  nop
    ctx->pc = 0x4f474cu;
    // NOP
}
