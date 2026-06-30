#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DC580
// Address: 0x4dc580 - 0x4dc760
void sub_004DC580_0x4dc580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC580_0x4dc580");
#endif

    switch (ctx->pc) {
        case 0x4dc580u: goto label_4dc580;
        case 0x4dc584u: goto label_4dc584;
        case 0x4dc588u: goto label_4dc588;
        case 0x4dc58cu: goto label_4dc58c;
        case 0x4dc590u: goto label_4dc590;
        case 0x4dc594u: goto label_4dc594;
        case 0x4dc598u: goto label_4dc598;
        case 0x4dc59cu: goto label_4dc59c;
        case 0x4dc5a0u: goto label_4dc5a0;
        case 0x4dc5a4u: goto label_4dc5a4;
        case 0x4dc5a8u: goto label_4dc5a8;
        case 0x4dc5acu: goto label_4dc5ac;
        case 0x4dc5b0u: goto label_4dc5b0;
        case 0x4dc5b4u: goto label_4dc5b4;
        case 0x4dc5b8u: goto label_4dc5b8;
        case 0x4dc5bcu: goto label_4dc5bc;
        case 0x4dc5c0u: goto label_4dc5c0;
        case 0x4dc5c4u: goto label_4dc5c4;
        case 0x4dc5c8u: goto label_4dc5c8;
        case 0x4dc5ccu: goto label_4dc5cc;
        case 0x4dc5d0u: goto label_4dc5d0;
        case 0x4dc5d4u: goto label_4dc5d4;
        case 0x4dc5d8u: goto label_4dc5d8;
        case 0x4dc5dcu: goto label_4dc5dc;
        case 0x4dc5e0u: goto label_4dc5e0;
        case 0x4dc5e4u: goto label_4dc5e4;
        case 0x4dc5e8u: goto label_4dc5e8;
        case 0x4dc5ecu: goto label_4dc5ec;
        case 0x4dc5f0u: goto label_4dc5f0;
        case 0x4dc5f4u: goto label_4dc5f4;
        case 0x4dc5f8u: goto label_4dc5f8;
        case 0x4dc5fcu: goto label_4dc5fc;
        case 0x4dc600u: goto label_4dc600;
        case 0x4dc604u: goto label_4dc604;
        case 0x4dc608u: goto label_4dc608;
        case 0x4dc60cu: goto label_4dc60c;
        case 0x4dc610u: goto label_4dc610;
        case 0x4dc614u: goto label_4dc614;
        case 0x4dc618u: goto label_4dc618;
        case 0x4dc61cu: goto label_4dc61c;
        case 0x4dc620u: goto label_4dc620;
        case 0x4dc624u: goto label_4dc624;
        case 0x4dc628u: goto label_4dc628;
        case 0x4dc62cu: goto label_4dc62c;
        case 0x4dc630u: goto label_4dc630;
        case 0x4dc634u: goto label_4dc634;
        case 0x4dc638u: goto label_4dc638;
        case 0x4dc63cu: goto label_4dc63c;
        case 0x4dc640u: goto label_4dc640;
        case 0x4dc644u: goto label_4dc644;
        case 0x4dc648u: goto label_4dc648;
        case 0x4dc64cu: goto label_4dc64c;
        case 0x4dc650u: goto label_4dc650;
        case 0x4dc654u: goto label_4dc654;
        case 0x4dc658u: goto label_4dc658;
        case 0x4dc65cu: goto label_4dc65c;
        case 0x4dc660u: goto label_4dc660;
        case 0x4dc664u: goto label_4dc664;
        case 0x4dc668u: goto label_4dc668;
        case 0x4dc66cu: goto label_4dc66c;
        case 0x4dc670u: goto label_4dc670;
        case 0x4dc674u: goto label_4dc674;
        case 0x4dc678u: goto label_4dc678;
        case 0x4dc67cu: goto label_4dc67c;
        case 0x4dc680u: goto label_4dc680;
        case 0x4dc684u: goto label_4dc684;
        case 0x4dc688u: goto label_4dc688;
        case 0x4dc68cu: goto label_4dc68c;
        case 0x4dc690u: goto label_4dc690;
        case 0x4dc694u: goto label_4dc694;
        case 0x4dc698u: goto label_4dc698;
        case 0x4dc69cu: goto label_4dc69c;
        case 0x4dc6a0u: goto label_4dc6a0;
        case 0x4dc6a4u: goto label_4dc6a4;
        case 0x4dc6a8u: goto label_4dc6a8;
        case 0x4dc6acu: goto label_4dc6ac;
        case 0x4dc6b0u: goto label_4dc6b0;
        case 0x4dc6b4u: goto label_4dc6b4;
        case 0x4dc6b8u: goto label_4dc6b8;
        case 0x4dc6bcu: goto label_4dc6bc;
        case 0x4dc6c0u: goto label_4dc6c0;
        case 0x4dc6c4u: goto label_4dc6c4;
        case 0x4dc6c8u: goto label_4dc6c8;
        case 0x4dc6ccu: goto label_4dc6cc;
        case 0x4dc6d0u: goto label_4dc6d0;
        case 0x4dc6d4u: goto label_4dc6d4;
        case 0x4dc6d8u: goto label_4dc6d8;
        case 0x4dc6dcu: goto label_4dc6dc;
        case 0x4dc6e0u: goto label_4dc6e0;
        case 0x4dc6e4u: goto label_4dc6e4;
        case 0x4dc6e8u: goto label_4dc6e8;
        case 0x4dc6ecu: goto label_4dc6ec;
        case 0x4dc6f0u: goto label_4dc6f0;
        case 0x4dc6f4u: goto label_4dc6f4;
        case 0x4dc6f8u: goto label_4dc6f8;
        case 0x4dc6fcu: goto label_4dc6fc;
        case 0x4dc700u: goto label_4dc700;
        case 0x4dc704u: goto label_4dc704;
        case 0x4dc708u: goto label_4dc708;
        case 0x4dc70cu: goto label_4dc70c;
        case 0x4dc710u: goto label_4dc710;
        case 0x4dc714u: goto label_4dc714;
        case 0x4dc718u: goto label_4dc718;
        case 0x4dc71cu: goto label_4dc71c;
        case 0x4dc720u: goto label_4dc720;
        case 0x4dc724u: goto label_4dc724;
        case 0x4dc728u: goto label_4dc728;
        case 0x4dc72cu: goto label_4dc72c;
        case 0x4dc730u: goto label_4dc730;
        case 0x4dc734u: goto label_4dc734;
        case 0x4dc738u: goto label_4dc738;
        case 0x4dc73cu: goto label_4dc73c;
        case 0x4dc740u: goto label_4dc740;
        case 0x4dc744u: goto label_4dc744;
        case 0x4dc748u: goto label_4dc748;
        case 0x4dc74cu: goto label_4dc74c;
        case 0x4dc750u: goto label_4dc750;
        case 0x4dc754u: goto label_4dc754;
        case 0x4dc758u: goto label_4dc758;
        case 0x4dc75cu: goto label_4dc75c;
        default: break;
    }

    ctx->pc = 0x4dc580u;

label_4dc580:
    // 0x4dc580: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc584:
    // 0x4dc584: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4dc584u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4dc588:
    // 0x4dc588: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4dc588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4dc58c:
    // 0x4dc58c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc590:
    // 0x4dc590: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4dc590u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4dc594:
    // 0x4dc594: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4dc594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4dc598:
    // 0x4dc598: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc59c:
    // 0x4dc59c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4dc59cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4dc5a0:
    // 0x4dc5a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc5a4:
    // 0x4dc5a4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4dc5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4dc5a8:
    // 0x4dc5a8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4dc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4dc5ac:
    // 0x4dc5ac: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4dc5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4dc5b0:
    // 0x4dc5b0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4dc5b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4dc5b4:
    // 0x4dc5b4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4dc5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4dc5b8:
    // 0x4dc5b8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4dc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4dc5bc:
    // 0x4dc5bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc5c0:
    // 0x4dc5c0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4dc5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4dc5c4:
    // 0x4dc5c4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4dc5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4dc5c8:
    // 0x4dc5c8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4dc5c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4dc5cc:
    // 0x4dc5cc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4dc5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4dc5d0:
    // 0x4dc5d0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4dc5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4dc5d4:
    // 0x4dc5d4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4dc5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4dc5d8:
    // 0x4dc5d8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4dc5d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4dc5dc:
    // 0x4dc5dc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4dc5dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4dc5e0:
    // 0x4dc5e0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4dc5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4dc5e4:
    // 0x4dc5e4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4dc5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4dc5e8:
    // 0x4dc5e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc5ec:
    // 0x4dc5ec: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4dc5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4dc5f0:
    // 0x4dc5f0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4dc5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4dc5f4:
    // 0x4dc5f4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4dc5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dc5f8:
    // 0x4dc5f8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4dc5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4dc5fc:
    // 0x4dc5fc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4dc5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4dc600:
    // 0x4dc600: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4dc600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4dc604:
    // 0x4dc604: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4dc604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4dc608:
    // 0x4dc608: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4dc608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4dc60c:
    // 0x4dc60c: 0x3e00008  jr          $ra
label_4dc610:
    if (ctx->pc == 0x4DC610u) {
        ctx->pc = 0x4DC610u;
            // 0x4dc610: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4DC614u;
        goto label_4dc614;
    }
    ctx->pc = 0x4DC60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC60Cu;
            // 0x4dc610: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DC614u;
label_4dc614:
    // 0x4dc614: 0x0  nop
    ctx->pc = 0x4dc614u;
    // NOP
label_4dc618:
    // 0x4dc618: 0x0  nop
    ctx->pc = 0x4dc618u;
    // NOP
label_4dc61c:
    // 0x4dc61c: 0x0  nop
    ctx->pc = 0x4dc61cu;
    // NOP
label_4dc620:
    // 0x4dc620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4dc620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4dc624:
    // 0x4dc624: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4dc624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dc628:
    // 0x4dc628: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4dc628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4dc62c:
    // 0x4dc62c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dc62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dc630:
    // 0x4dc630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dc630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dc634:
    // 0x4dc634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc638:
    // 0x4dc638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dc638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dc63c:
    // 0x4dc63c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4dc63cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4dc640:
    // 0x4dc640: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4dc644:
    if (ctx->pc == 0x4DC644u) {
        ctx->pc = 0x4DC644u;
            // 0x4dc644: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC648u;
        goto label_4dc648;
    }
    ctx->pc = 0x4DC640u;
    {
        const bool branch_taken_0x4dc640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DC644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC640u;
            // 0x4dc644: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc640) {
            ctx->pc = 0x4DC674u;
            goto label_4dc674;
        }
    }
    ctx->pc = 0x4DC648u;
label_4dc648:
    // 0x4dc648: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4dc648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4dc64c:
    // 0x4dc64c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4dc650:
    if (ctx->pc == 0x4DC650u) {
        ctx->pc = 0x4DC650u;
            // 0x4dc650: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DC654u;
        goto label_4dc654;
    }
    ctx->pc = 0x4DC64Cu;
    {
        const bool branch_taken_0x4dc64c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4dc64c) {
            ctx->pc = 0x4DC650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC64Cu;
            // 0x4dc650: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC668u;
            goto label_4dc668;
        }
    }
    ctx->pc = 0x4DC654u;
label_4dc654:
    // 0x4dc654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4dc654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dc658:
    // 0x4dc658: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_4dc65c:
    if (ctx->pc == 0x4DC65Cu) {
        ctx->pc = 0x4DC660u;
        goto label_4dc660;
    }
    ctx->pc = 0x4DC658u;
    {
        const bool branch_taken_0x4dc658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4dc658) {
            ctx->pc = 0x4DC6B8u;
            goto label_4dc6b8;
        }
    }
    ctx->pc = 0x4DC660u;
label_4dc660:
    // 0x4dc660: 0x10000015  b           . + 4 + (0x15 << 2)
label_4dc664:
    if (ctx->pc == 0x4DC664u) {
        ctx->pc = 0x4DC668u;
        goto label_4dc668;
    }
    ctx->pc = 0x4DC660u;
    {
        const bool branch_taken_0x4dc660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc660) {
            ctx->pc = 0x4DC6B8u;
            goto label_4dc6b8;
        }
    }
    ctx->pc = 0x4DC668u;
label_4dc668:
    // 0x4dc668: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4dc668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4dc66c:
    // 0x4dc66c: 0x320f809  jalr        $t9
label_4dc670:
    if (ctx->pc == 0x4DC670u) {
        ctx->pc = 0x4DC674u;
        goto label_4dc674;
    }
    ctx->pc = 0x4DC66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC674u; }
            if (ctx->pc != 0x4DC674u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC674u;
label_4dc674:
    // 0x4dc674: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x4dc674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4dc678:
    // 0x4dc678: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4dc67c:
    if (ctx->pc == 0x4DC67Cu) {
        ctx->pc = 0x4DC680u;
        goto label_4dc680;
    }
    ctx->pc = 0x4DC678u;
    {
        const bool branch_taken_0x4dc678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc678) {
            ctx->pc = 0x4DC6B8u;
            goto label_4dc6b8;
        }
    }
    ctx->pc = 0x4DC680u;
label_4dc680:
    // 0x4dc680: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dc680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc684:
    // 0x4dc684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dc684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc688:
    // 0x4dc688: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4dc688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4dc68c:
    // 0x4dc68c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4dc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4dc690:
    // 0x4dc690: 0xc136f88  jal         func_4DBE20
label_4dc694:
    if (ctx->pc == 0x4DC694u) {
        ctx->pc = 0x4DC694u;
            // 0x4dc694: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4DC698u;
        goto label_4dc698;
    }
    ctx->pc = 0x4DC690u;
    SET_GPR_U32(ctx, 31, 0x4DC698u);
    ctx->pc = 0x4DC694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC690u;
            // 0x4dc694: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DBE20u;
    if (runtime->hasFunction(0x4DBE20u)) {
        auto targetFn = runtime->lookupFunction(0x4DBE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC698u; }
        if (ctx->pc != 0x4DC698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DBE20_0x4dbe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC698u; }
        if (ctx->pc != 0x4DC698u) { return; }
    }
    ctx->pc = 0x4DC698u;
label_4dc698:
    // 0x4dc698: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4dc698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4dc69c:
    // 0x4dc69c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4dc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4dc6a0:
    // 0x4dc6a0: 0xc136f50  jal         func_4DBD40
label_4dc6a4:
    if (ctx->pc == 0x4DC6A4u) {
        ctx->pc = 0x4DC6A4u;
            // 0x4dc6a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4DC6A8u;
        goto label_4dc6a8;
    }
    ctx->pc = 0x4DC6A0u;
    SET_GPR_U32(ctx, 31, 0x4DC6A8u);
    ctx->pc = 0x4DC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC6A0u;
            // 0x4dc6a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DBD40u;
    if (runtime->hasFunction(0x4DBD40u)) {
        auto targetFn = runtime->lookupFunction(0x4DBD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC6A8u; }
        if (ctx->pc != 0x4DC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DBD40_0x4dbd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC6A8u; }
        if (ctx->pc != 0x4DC6A8u) { return; }
    }
    ctx->pc = 0x4DC6A8u;
label_4dc6a8:
    // 0x4dc6a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4dc6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4dc6ac:
    // 0x4dc6ac: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4dc6acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4dc6b0:
    // 0x4dc6b0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_4dc6b4:
    if (ctx->pc == 0x4DC6B4u) {
        ctx->pc = 0x4DC6B4u;
            // 0x4dc6b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DC6B8u;
        goto label_4dc6b8;
    }
    ctx->pc = 0x4DC6B0u;
    {
        const bool branch_taken_0x4dc6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC6B0u;
            // 0x4dc6b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc6b0) {
            ctx->pc = 0x4DC688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dc688;
        }
    }
    ctx->pc = 0x4DC6B8u;
label_4dc6b8:
    // 0x4dc6b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4dc6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc6bc:
    // 0x4dc6bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dc6bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dc6c0:
    // 0x4dc6c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dc6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc6c4:
    // 0x4dc6c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc6c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc6c8:
    // 0x4dc6c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dc6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc6cc:
    // 0x4dc6cc: 0x3e00008  jr          $ra
label_4dc6d0:
    if (ctx->pc == 0x4DC6D0u) {
        ctx->pc = 0x4DC6D0u;
            // 0x4dc6d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DC6D4u;
        goto label_4dc6d4;
    }
    ctx->pc = 0x4DC6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC6CCu;
            // 0x4dc6d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DC6D4u;
label_4dc6d4:
    // 0x4dc6d4: 0x0  nop
    ctx->pc = 0x4dc6d4u;
    // NOP
label_4dc6d8:
    // 0x4dc6d8: 0x0  nop
    ctx->pc = 0x4dc6d8u;
    // NOP
label_4dc6dc:
    // 0x4dc6dc: 0x0  nop
    ctx->pc = 0x4dc6dcu;
    // NOP
label_4dc6e0:
    // 0x4dc6e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4dc6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4dc6e4:
    // 0x4dc6e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4dc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4dc6e8:
    // 0x4dc6e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dc6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dc6ec:
    // 0x4dc6ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dc6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dc6f0:
    // 0x4dc6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc6f4:
    // 0x4dc6f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dc6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dc6f8:
    // 0x4dc6f8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4dc6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4dc6fc:
    // 0x4dc6fc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4dc700:
    if (ctx->pc == 0x4DC700u) {
        ctx->pc = 0x4DC700u;
            // 0x4dc700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC704u;
        goto label_4dc704;
    }
    ctx->pc = 0x4DC6FCu;
    {
        const bool branch_taken_0x4dc6fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC6FCu;
            // 0x4dc700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc6fc) {
            ctx->pc = 0x4DC738u;
            goto label_4dc738;
        }
    }
    ctx->pc = 0x4DC704u;
label_4dc704:
    // 0x4dc704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4dc704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc708:
    // 0x4dc708: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dc708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc70c:
    // 0x4dc70c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4dc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4dc710:
    // 0x4dc710: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4dc710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4dc714:
    // 0x4dc714: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dc714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dc718:
    // 0x4dc718: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dc718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dc71c:
    // 0x4dc71c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4dc71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4dc720:
    // 0x4dc720: 0x320f809  jalr        $t9
label_4dc724:
    if (ctx->pc == 0x4DC724u) {
        ctx->pc = 0x4DC728u;
        goto label_4dc728;
    }
    ctx->pc = 0x4DC720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC728u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC728u; }
            if (ctx->pc != 0x4DC728u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC728u;
label_4dc728:
    // 0x4dc728: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4dc728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4dc72c:
    // 0x4dc72c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4dc72cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dc730:
    // 0x4dc730: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4dc734:
    if (ctx->pc == 0x4DC734u) {
        ctx->pc = 0x4DC734u;
            // 0x4dc734: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DC738u;
        goto label_4dc738;
    }
    ctx->pc = 0x4DC730u;
    {
        const bool branch_taken_0x4dc730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC730u;
            // 0x4dc734: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc730) {
            ctx->pc = 0x4DC70Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dc70c;
        }
    }
    ctx->pc = 0x4DC738u;
label_4dc738:
    // 0x4dc738: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4dc738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc73c:
    // 0x4dc73c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dc73cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dc740:
    // 0x4dc740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dc740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc744:
    // 0x4dc744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc748:
    // 0x4dc748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dc748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc74c:
    // 0x4dc74c: 0x3e00008  jr          $ra
label_4dc750:
    if (ctx->pc == 0x4DC750u) {
        ctx->pc = 0x4DC750u;
            // 0x4dc750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DC754u;
        goto label_4dc754;
    }
    ctx->pc = 0x4DC74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC74Cu;
            // 0x4dc750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DC754u;
label_4dc754:
    // 0x4dc754: 0x0  nop
    ctx->pc = 0x4dc754u;
    // NOP
label_4dc758:
    // 0x4dc758: 0x0  nop
    ctx->pc = 0x4dc758u;
    // NOP
label_4dc75c:
    // 0x4dc75c: 0x0  nop
    ctx->pc = 0x4dc75cu;
    // NOP
}
