#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D0460
// Address: 0x4d0460 - 0x4d0590
void sub_004D0460_0x4d0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0460_0x4d0460");
#endif

    switch (ctx->pc) {
        case 0x4d0460u: goto label_4d0460;
        case 0x4d0464u: goto label_4d0464;
        case 0x4d0468u: goto label_4d0468;
        case 0x4d046cu: goto label_4d046c;
        case 0x4d0470u: goto label_4d0470;
        case 0x4d0474u: goto label_4d0474;
        case 0x4d0478u: goto label_4d0478;
        case 0x4d047cu: goto label_4d047c;
        case 0x4d0480u: goto label_4d0480;
        case 0x4d0484u: goto label_4d0484;
        case 0x4d0488u: goto label_4d0488;
        case 0x4d048cu: goto label_4d048c;
        case 0x4d0490u: goto label_4d0490;
        case 0x4d0494u: goto label_4d0494;
        case 0x4d0498u: goto label_4d0498;
        case 0x4d049cu: goto label_4d049c;
        case 0x4d04a0u: goto label_4d04a0;
        case 0x4d04a4u: goto label_4d04a4;
        case 0x4d04a8u: goto label_4d04a8;
        case 0x4d04acu: goto label_4d04ac;
        case 0x4d04b0u: goto label_4d04b0;
        case 0x4d04b4u: goto label_4d04b4;
        case 0x4d04b8u: goto label_4d04b8;
        case 0x4d04bcu: goto label_4d04bc;
        case 0x4d04c0u: goto label_4d04c0;
        case 0x4d04c4u: goto label_4d04c4;
        case 0x4d04c8u: goto label_4d04c8;
        case 0x4d04ccu: goto label_4d04cc;
        case 0x4d04d0u: goto label_4d04d0;
        case 0x4d04d4u: goto label_4d04d4;
        case 0x4d04d8u: goto label_4d04d8;
        case 0x4d04dcu: goto label_4d04dc;
        case 0x4d04e0u: goto label_4d04e0;
        case 0x4d04e4u: goto label_4d04e4;
        case 0x4d04e8u: goto label_4d04e8;
        case 0x4d04ecu: goto label_4d04ec;
        case 0x4d04f0u: goto label_4d04f0;
        case 0x4d04f4u: goto label_4d04f4;
        case 0x4d04f8u: goto label_4d04f8;
        case 0x4d04fcu: goto label_4d04fc;
        case 0x4d0500u: goto label_4d0500;
        case 0x4d0504u: goto label_4d0504;
        case 0x4d0508u: goto label_4d0508;
        case 0x4d050cu: goto label_4d050c;
        case 0x4d0510u: goto label_4d0510;
        case 0x4d0514u: goto label_4d0514;
        case 0x4d0518u: goto label_4d0518;
        case 0x4d051cu: goto label_4d051c;
        case 0x4d0520u: goto label_4d0520;
        case 0x4d0524u: goto label_4d0524;
        case 0x4d0528u: goto label_4d0528;
        case 0x4d052cu: goto label_4d052c;
        case 0x4d0530u: goto label_4d0530;
        case 0x4d0534u: goto label_4d0534;
        case 0x4d0538u: goto label_4d0538;
        case 0x4d053cu: goto label_4d053c;
        case 0x4d0540u: goto label_4d0540;
        case 0x4d0544u: goto label_4d0544;
        case 0x4d0548u: goto label_4d0548;
        case 0x4d054cu: goto label_4d054c;
        case 0x4d0550u: goto label_4d0550;
        case 0x4d0554u: goto label_4d0554;
        case 0x4d0558u: goto label_4d0558;
        case 0x4d055cu: goto label_4d055c;
        case 0x4d0560u: goto label_4d0560;
        case 0x4d0564u: goto label_4d0564;
        case 0x4d0568u: goto label_4d0568;
        case 0x4d056cu: goto label_4d056c;
        case 0x4d0570u: goto label_4d0570;
        case 0x4d0574u: goto label_4d0574;
        case 0x4d0578u: goto label_4d0578;
        case 0x4d057cu: goto label_4d057c;
        case 0x4d0580u: goto label_4d0580;
        case 0x4d0584u: goto label_4d0584;
        case 0x4d0588u: goto label_4d0588;
        case 0x4d058cu: goto label_4d058c;
        default: break;
    }

    ctx->pc = 0x4d0460u;

label_4d0460:
    // 0x4d0460: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0464:
    // 0x4d0464: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4d0464u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4d0468:
    // 0x4d0468: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4d0468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d046c:
    // 0x4d046c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d046cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0470:
    // 0x4d0470: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4d0470u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4d0474:
    // 0x4d0474: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4d0474u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4d0478:
    // 0x4d0478: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d047c:
    // 0x4d047c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4d047cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4d0480:
    // 0x4d0480: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0484:
    // 0x4d0484: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4d0484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4d0488:
    // 0x4d0488: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4d0488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4d048c:
    // 0x4d048c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4d0490:
    // 0x4d0490: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4d0490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4d0494:
    // 0x4d0494: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d0494u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4d0498:
    // 0x4d0498: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4d0498u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4d049c:
    // 0x4d049c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d049cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d04a0:
    // 0x4d04a0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4d04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4d04a4:
    // 0x4d04a4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d04a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d04a8:
    // 0x4d04a8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4d04a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4d04ac:
    // 0x4d04ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4d04acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4d04b0:
    // 0x4d04b0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4d04b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4d04b4:
    // 0x4d04b4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d04b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4d04b8:
    // 0x4d04b8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4d04b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4d04bc:
    // 0x4d04bc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4d04bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4d04c0:
    // 0x4d04c0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4d04c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4d04c4:
    // 0x4d04c4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4d04c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4d04c8:
    // 0x4d04c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d04cc:
    // 0x4d04cc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4d04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4d04d0:
    // 0x4d04d0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4d04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4d04d4:
    // 0x4d04d4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4d04d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d04d8:
    // 0x4d04d8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4d04d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4d04dc:
    // 0x4d04dc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4d04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4d04e0:
    // 0x4d04e0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4d04e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4d04e4:
    // 0x4d04e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4d04e8:
    // 0x4d04e8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4d04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4d04ec:
    // 0x4d04ec: 0x3e00008  jr          $ra
label_4d04f0:
    if (ctx->pc == 0x4D04F0u) {
        ctx->pc = 0x4D04F0u;
            // 0x4d04f0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4D04F4u;
        goto label_4d04f4;
    }
    ctx->pc = 0x4D04ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D04F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D04ECu;
            // 0x4d04f0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D04F4u;
label_4d04f4:
    // 0x4d04f4: 0x0  nop
    ctx->pc = 0x4d04f4u;
    // NOP
label_4d04f8:
    // 0x4d04f8: 0x0  nop
    ctx->pc = 0x4d04f8u;
    // NOP
label_4d04fc:
    // 0x4d04fc: 0x0  nop
    ctx->pc = 0x4d04fcu;
    // NOP
label_4d0500:
    // 0x4d0500: 0x3e00008  jr          $ra
label_4d0504:
    if (ctx->pc == 0x4D0504u) {
        ctx->pc = 0x4D0508u;
        goto label_4d0508;
    }
    ctx->pc = 0x4D0500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0508u;
label_4d0508:
    // 0x4d0508: 0x0  nop
    ctx->pc = 0x4d0508u;
    // NOP
label_4d050c:
    // 0x4d050c: 0x0  nop
    ctx->pc = 0x4d050cu;
    // NOP
label_4d0510:
    // 0x4d0510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d0514:
    // 0x4d0514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d0518:
    // 0x4d0518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d0518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d051c:
    // 0x4d051c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d0520:
    // 0x4d0520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d0524:
    // 0x4d0524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0528:
    // 0x4d0528: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4d0528u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d052c:
    // 0x4d052c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4d0530:
    if (ctx->pc == 0x4D0530u) {
        ctx->pc = 0x4D0530u;
            // 0x4d0530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0534u;
        goto label_4d0534;
    }
    ctx->pc = 0x4D052Cu;
    {
        const bool branch_taken_0x4d052c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D052Cu;
            // 0x4d0530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d052c) {
            ctx->pc = 0x4D0568u;
            goto label_4d0568;
        }
    }
    ctx->pc = 0x4D0534u;
label_4d0534:
    // 0x4d0534: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d0534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0538:
    // 0x4d0538: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d0538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d053c:
    // 0x4d053c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d0540:
    // 0x4d0540: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d0540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d0544:
    // 0x4d0544: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d0544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d0548:
    // 0x4d0548: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d054c:
    // 0x4d054c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d054cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d0550:
    // 0x4d0550: 0x320f809  jalr        $t9
label_4d0554:
    if (ctx->pc == 0x4D0554u) {
        ctx->pc = 0x4D0558u;
        goto label_4d0558;
    }
    ctx->pc = 0x4D0550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0558u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0558u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0558u; }
            if (ctx->pc != 0x4D0558u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0558u;
label_4d0558:
    // 0x4d0558: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d0558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d055c:
    // 0x4d055c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d055cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d0560:
    // 0x4d0560: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4d0564:
    if (ctx->pc == 0x4D0564u) {
        ctx->pc = 0x4D0564u;
            // 0x4d0564: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D0568u;
        goto label_4d0568;
    }
    ctx->pc = 0x4D0560u;
    {
        const bool branch_taken_0x4d0560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0560u;
            // 0x4d0564: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0560) {
            ctx->pc = 0x4D053Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d053c;
        }
    }
    ctx->pc = 0x4D0568u;
label_4d0568:
    // 0x4d0568: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d0568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d056c:
    // 0x4d056c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d056cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d0570:
    // 0x4d0570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d0570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0574:
    // 0x4d0574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d0574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0578:
    // 0x4d0578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d057c:
    // 0x4d057c: 0x3e00008  jr          $ra
label_4d0580:
    if (ctx->pc == 0x4D0580u) {
        ctx->pc = 0x4D0580u;
            // 0x4d0580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D0584u;
        goto label_4d0584;
    }
    ctx->pc = 0x4D057Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D057Cu;
            // 0x4d0580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0584u;
label_4d0584:
    // 0x4d0584: 0x0  nop
    ctx->pc = 0x4d0584u;
    // NOP
label_4d0588:
    // 0x4d0588: 0x0  nop
    ctx->pc = 0x4d0588u;
    // NOP
label_4d058c:
    // 0x4d058c: 0x0  nop
    ctx->pc = 0x4d058cu;
    // NOP
}
