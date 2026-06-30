#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E0600
// Address: 0x4e0600 - 0x4e0730
void sub_004E0600_0x4e0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0600_0x4e0600");
#endif

    switch (ctx->pc) {
        case 0x4e0600u: goto label_4e0600;
        case 0x4e0604u: goto label_4e0604;
        case 0x4e0608u: goto label_4e0608;
        case 0x4e060cu: goto label_4e060c;
        case 0x4e0610u: goto label_4e0610;
        case 0x4e0614u: goto label_4e0614;
        case 0x4e0618u: goto label_4e0618;
        case 0x4e061cu: goto label_4e061c;
        case 0x4e0620u: goto label_4e0620;
        case 0x4e0624u: goto label_4e0624;
        case 0x4e0628u: goto label_4e0628;
        case 0x4e062cu: goto label_4e062c;
        case 0x4e0630u: goto label_4e0630;
        case 0x4e0634u: goto label_4e0634;
        case 0x4e0638u: goto label_4e0638;
        case 0x4e063cu: goto label_4e063c;
        case 0x4e0640u: goto label_4e0640;
        case 0x4e0644u: goto label_4e0644;
        case 0x4e0648u: goto label_4e0648;
        case 0x4e064cu: goto label_4e064c;
        case 0x4e0650u: goto label_4e0650;
        case 0x4e0654u: goto label_4e0654;
        case 0x4e0658u: goto label_4e0658;
        case 0x4e065cu: goto label_4e065c;
        case 0x4e0660u: goto label_4e0660;
        case 0x4e0664u: goto label_4e0664;
        case 0x4e0668u: goto label_4e0668;
        case 0x4e066cu: goto label_4e066c;
        case 0x4e0670u: goto label_4e0670;
        case 0x4e0674u: goto label_4e0674;
        case 0x4e0678u: goto label_4e0678;
        case 0x4e067cu: goto label_4e067c;
        case 0x4e0680u: goto label_4e0680;
        case 0x4e0684u: goto label_4e0684;
        case 0x4e0688u: goto label_4e0688;
        case 0x4e068cu: goto label_4e068c;
        case 0x4e0690u: goto label_4e0690;
        case 0x4e0694u: goto label_4e0694;
        case 0x4e0698u: goto label_4e0698;
        case 0x4e069cu: goto label_4e069c;
        case 0x4e06a0u: goto label_4e06a0;
        case 0x4e06a4u: goto label_4e06a4;
        case 0x4e06a8u: goto label_4e06a8;
        case 0x4e06acu: goto label_4e06ac;
        case 0x4e06b0u: goto label_4e06b0;
        case 0x4e06b4u: goto label_4e06b4;
        case 0x4e06b8u: goto label_4e06b8;
        case 0x4e06bcu: goto label_4e06bc;
        case 0x4e06c0u: goto label_4e06c0;
        case 0x4e06c4u: goto label_4e06c4;
        case 0x4e06c8u: goto label_4e06c8;
        case 0x4e06ccu: goto label_4e06cc;
        case 0x4e06d0u: goto label_4e06d0;
        case 0x4e06d4u: goto label_4e06d4;
        case 0x4e06d8u: goto label_4e06d8;
        case 0x4e06dcu: goto label_4e06dc;
        case 0x4e06e0u: goto label_4e06e0;
        case 0x4e06e4u: goto label_4e06e4;
        case 0x4e06e8u: goto label_4e06e8;
        case 0x4e06ecu: goto label_4e06ec;
        case 0x4e06f0u: goto label_4e06f0;
        case 0x4e06f4u: goto label_4e06f4;
        case 0x4e06f8u: goto label_4e06f8;
        case 0x4e06fcu: goto label_4e06fc;
        case 0x4e0700u: goto label_4e0700;
        case 0x4e0704u: goto label_4e0704;
        case 0x4e0708u: goto label_4e0708;
        case 0x4e070cu: goto label_4e070c;
        case 0x4e0710u: goto label_4e0710;
        case 0x4e0714u: goto label_4e0714;
        case 0x4e0718u: goto label_4e0718;
        case 0x4e071cu: goto label_4e071c;
        case 0x4e0720u: goto label_4e0720;
        case 0x4e0724u: goto label_4e0724;
        case 0x4e0728u: goto label_4e0728;
        case 0x4e072cu: goto label_4e072c;
        default: break;
    }

    ctx->pc = 0x4e0600u;

label_4e0600:
    // 0x4e0600: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0604:
    // 0x4e0604: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4e0604u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4e0608:
    // 0x4e0608: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4e0608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e060c:
    // 0x4e060c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e060cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0610:
    // 0x4e0610: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4e0610u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4e0614:
    // 0x4e0614: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4e0614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4e0618:
    // 0x4e0618: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e061c:
    // 0x4e061c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4e061cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4e0620:
    // 0x4e0620: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0624:
    // 0x4e0624: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4e0624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e0628:
    // 0x4e0628: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4e0628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4e062c:
    // 0x4e062c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4e062cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4e0630:
    // 0x4e0630: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4e0630u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4e0634:
    // 0x4e0634: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e0634u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e0638:
    // 0x4e0638: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4e0638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4e063c:
    // 0x4e063c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0640:
    // 0x4e0640: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4e0640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4e0644:
    // 0x4e0644: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4e0644u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4e0648:
    // 0x4e0648: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4e0648u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4e064c:
    // 0x4e064c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4e064cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4e0650:
    // 0x4e0650: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4e0650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4e0654:
    // 0x4e0654: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4e0654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4e0658:
    // 0x4e0658: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4e0658u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4e065c:
    // 0x4e065c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4e065cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4e0660:
    // 0x4e0660: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4e0660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4e0664:
    // 0x4e0664: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4e0664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4e0668:
    // 0x4e0668: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e066c:
    // 0x4e066c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4e066cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4e0670:
    // 0x4e0670: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4e0670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4e0674:
    // 0x4e0674: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4e0674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e0678:
    // 0x4e0678: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4e0678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4e067c:
    // 0x4e067c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4e067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4e0680:
    // 0x4e0680: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4e0680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4e0684:
    // 0x4e0684: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e0684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e0688:
    // 0x4e0688: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4e0688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4e068c:
    // 0x4e068c: 0x3e00008  jr          $ra
label_4e0690:
    if (ctx->pc == 0x4E0690u) {
        ctx->pc = 0x4E0690u;
            // 0x4e0690: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4E0694u;
        goto label_4e0694;
    }
    ctx->pc = 0x4E068Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E068Cu;
            // 0x4e0690: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0694u;
label_4e0694:
    // 0x4e0694: 0x0  nop
    ctx->pc = 0x4e0694u;
    // NOP
label_4e0698:
    // 0x4e0698: 0x0  nop
    ctx->pc = 0x4e0698u;
    // NOP
label_4e069c:
    // 0x4e069c: 0x0  nop
    ctx->pc = 0x4e069cu;
    // NOP
label_4e06a0:
    // 0x4e06a0: 0x3e00008  jr          $ra
label_4e06a4:
    if (ctx->pc == 0x4E06A4u) {
        ctx->pc = 0x4E06A8u;
        goto label_4e06a8;
    }
    ctx->pc = 0x4E06A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E06A8u;
label_4e06a8:
    // 0x4e06a8: 0x0  nop
    ctx->pc = 0x4e06a8u;
    // NOP
label_4e06ac:
    // 0x4e06ac: 0x0  nop
    ctx->pc = 0x4e06acu;
    // NOP
label_4e06b0:
    // 0x4e06b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e06b4:
    // 0x4e06b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e06b8:
    // 0x4e06b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e06bc:
    // 0x4e06bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e06c0:
    // 0x4e06c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e06c4:
    // 0x4e06c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e06c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e06c8:
    // 0x4e06c8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4e06c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e06cc:
    // 0x4e06cc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4e06d0:
    if (ctx->pc == 0x4E06D0u) {
        ctx->pc = 0x4E06D0u;
            // 0x4e06d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E06D4u;
        goto label_4e06d4;
    }
    ctx->pc = 0x4E06CCu;
    {
        const bool branch_taken_0x4e06cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E06D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E06CCu;
            // 0x4e06d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e06cc) {
            ctx->pc = 0x4E0708u;
            goto label_4e0708;
        }
    }
    ctx->pc = 0x4E06D4u;
label_4e06d4:
    // 0x4e06d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e06d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e06d8:
    // 0x4e06d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e06d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e06dc:
    // 0x4e06dc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4e06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4e06e0:
    // 0x4e06e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e06e4:
    // 0x4e06e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e06e8:
    // 0x4e06e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e06e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e06ec:
    // 0x4e06ec: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4e06ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4e06f0:
    // 0x4e06f0: 0x320f809  jalr        $t9
label_4e06f4:
    if (ctx->pc == 0x4E06F4u) {
        ctx->pc = 0x4E06F8u;
        goto label_4e06f8;
    }
    ctx->pc = 0x4E06F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E06F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E06F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E06F8u; }
            if (ctx->pc != 0x4E06F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E06F8u;
label_4e06f8:
    // 0x4e06f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e06f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e06fc:
    // 0x4e06fc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4e06fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e0700:
    // 0x4e0700: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4e0704:
    if (ctx->pc == 0x4E0704u) {
        ctx->pc = 0x4E0704u;
            // 0x4e0704: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E0708u;
        goto label_4e0708;
    }
    ctx->pc = 0x4E0700u;
    {
        const bool branch_taken_0x4e0700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0700u;
            // 0x4e0704: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0700) {
            ctx->pc = 0x4E06DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e06dc;
        }
    }
    ctx->pc = 0x4E0708u;
label_4e0708:
    // 0x4e0708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e0708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e070c:
    // 0x4e070c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e070cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e0710:
    // 0x4e0710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e0710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0714:
    // 0x4e0714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e0714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0718:
    // 0x4e0718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e071c:
    // 0x4e071c: 0x3e00008  jr          $ra
label_4e0720:
    if (ctx->pc == 0x4E0720u) {
        ctx->pc = 0x4E0720u;
            // 0x4e0720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E0724u;
        goto label_4e0724;
    }
    ctx->pc = 0x4E071Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E071Cu;
            // 0x4e0720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0724u;
label_4e0724:
    // 0x4e0724: 0x0  nop
    ctx->pc = 0x4e0724u;
    // NOP
label_4e0728:
    // 0x4e0728: 0x0  nop
    ctx->pc = 0x4e0728u;
    // NOP
label_4e072c:
    // 0x4e072c: 0x0  nop
    ctx->pc = 0x4e072cu;
    // NOP
}
