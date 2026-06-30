#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049C5B0
// Address: 0x49c5b0 - 0x49c7d0
void sub_0049C5B0_0x49c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C5B0_0x49c5b0");
#endif

    switch (ctx->pc) {
        case 0x49c5b0u: goto label_49c5b0;
        case 0x49c5b4u: goto label_49c5b4;
        case 0x49c5b8u: goto label_49c5b8;
        case 0x49c5bcu: goto label_49c5bc;
        case 0x49c5c0u: goto label_49c5c0;
        case 0x49c5c4u: goto label_49c5c4;
        case 0x49c5c8u: goto label_49c5c8;
        case 0x49c5ccu: goto label_49c5cc;
        case 0x49c5d0u: goto label_49c5d0;
        case 0x49c5d4u: goto label_49c5d4;
        case 0x49c5d8u: goto label_49c5d8;
        case 0x49c5dcu: goto label_49c5dc;
        case 0x49c5e0u: goto label_49c5e0;
        case 0x49c5e4u: goto label_49c5e4;
        case 0x49c5e8u: goto label_49c5e8;
        case 0x49c5ecu: goto label_49c5ec;
        case 0x49c5f0u: goto label_49c5f0;
        case 0x49c5f4u: goto label_49c5f4;
        case 0x49c5f8u: goto label_49c5f8;
        case 0x49c5fcu: goto label_49c5fc;
        case 0x49c600u: goto label_49c600;
        case 0x49c604u: goto label_49c604;
        case 0x49c608u: goto label_49c608;
        case 0x49c60cu: goto label_49c60c;
        case 0x49c610u: goto label_49c610;
        case 0x49c614u: goto label_49c614;
        case 0x49c618u: goto label_49c618;
        case 0x49c61cu: goto label_49c61c;
        case 0x49c620u: goto label_49c620;
        case 0x49c624u: goto label_49c624;
        case 0x49c628u: goto label_49c628;
        case 0x49c62cu: goto label_49c62c;
        case 0x49c630u: goto label_49c630;
        case 0x49c634u: goto label_49c634;
        case 0x49c638u: goto label_49c638;
        case 0x49c63cu: goto label_49c63c;
        case 0x49c640u: goto label_49c640;
        case 0x49c644u: goto label_49c644;
        case 0x49c648u: goto label_49c648;
        case 0x49c64cu: goto label_49c64c;
        case 0x49c650u: goto label_49c650;
        case 0x49c654u: goto label_49c654;
        case 0x49c658u: goto label_49c658;
        case 0x49c65cu: goto label_49c65c;
        case 0x49c660u: goto label_49c660;
        case 0x49c664u: goto label_49c664;
        case 0x49c668u: goto label_49c668;
        case 0x49c66cu: goto label_49c66c;
        case 0x49c670u: goto label_49c670;
        case 0x49c674u: goto label_49c674;
        case 0x49c678u: goto label_49c678;
        case 0x49c67cu: goto label_49c67c;
        case 0x49c680u: goto label_49c680;
        case 0x49c684u: goto label_49c684;
        case 0x49c688u: goto label_49c688;
        case 0x49c68cu: goto label_49c68c;
        case 0x49c690u: goto label_49c690;
        case 0x49c694u: goto label_49c694;
        case 0x49c698u: goto label_49c698;
        case 0x49c69cu: goto label_49c69c;
        case 0x49c6a0u: goto label_49c6a0;
        case 0x49c6a4u: goto label_49c6a4;
        case 0x49c6a8u: goto label_49c6a8;
        case 0x49c6acu: goto label_49c6ac;
        case 0x49c6b0u: goto label_49c6b0;
        case 0x49c6b4u: goto label_49c6b4;
        case 0x49c6b8u: goto label_49c6b8;
        case 0x49c6bcu: goto label_49c6bc;
        case 0x49c6c0u: goto label_49c6c0;
        case 0x49c6c4u: goto label_49c6c4;
        case 0x49c6c8u: goto label_49c6c8;
        case 0x49c6ccu: goto label_49c6cc;
        case 0x49c6d0u: goto label_49c6d0;
        case 0x49c6d4u: goto label_49c6d4;
        case 0x49c6d8u: goto label_49c6d8;
        case 0x49c6dcu: goto label_49c6dc;
        case 0x49c6e0u: goto label_49c6e0;
        case 0x49c6e4u: goto label_49c6e4;
        case 0x49c6e8u: goto label_49c6e8;
        case 0x49c6ecu: goto label_49c6ec;
        case 0x49c6f0u: goto label_49c6f0;
        case 0x49c6f4u: goto label_49c6f4;
        case 0x49c6f8u: goto label_49c6f8;
        case 0x49c6fcu: goto label_49c6fc;
        case 0x49c700u: goto label_49c700;
        case 0x49c704u: goto label_49c704;
        case 0x49c708u: goto label_49c708;
        case 0x49c70cu: goto label_49c70c;
        case 0x49c710u: goto label_49c710;
        case 0x49c714u: goto label_49c714;
        case 0x49c718u: goto label_49c718;
        case 0x49c71cu: goto label_49c71c;
        case 0x49c720u: goto label_49c720;
        case 0x49c724u: goto label_49c724;
        case 0x49c728u: goto label_49c728;
        case 0x49c72cu: goto label_49c72c;
        case 0x49c730u: goto label_49c730;
        case 0x49c734u: goto label_49c734;
        case 0x49c738u: goto label_49c738;
        case 0x49c73cu: goto label_49c73c;
        case 0x49c740u: goto label_49c740;
        case 0x49c744u: goto label_49c744;
        case 0x49c748u: goto label_49c748;
        case 0x49c74cu: goto label_49c74c;
        case 0x49c750u: goto label_49c750;
        case 0x49c754u: goto label_49c754;
        case 0x49c758u: goto label_49c758;
        case 0x49c75cu: goto label_49c75c;
        case 0x49c760u: goto label_49c760;
        case 0x49c764u: goto label_49c764;
        case 0x49c768u: goto label_49c768;
        case 0x49c76cu: goto label_49c76c;
        case 0x49c770u: goto label_49c770;
        case 0x49c774u: goto label_49c774;
        case 0x49c778u: goto label_49c778;
        case 0x49c77cu: goto label_49c77c;
        case 0x49c780u: goto label_49c780;
        case 0x49c784u: goto label_49c784;
        case 0x49c788u: goto label_49c788;
        case 0x49c78cu: goto label_49c78c;
        case 0x49c790u: goto label_49c790;
        case 0x49c794u: goto label_49c794;
        case 0x49c798u: goto label_49c798;
        case 0x49c79cu: goto label_49c79c;
        case 0x49c7a0u: goto label_49c7a0;
        case 0x49c7a4u: goto label_49c7a4;
        case 0x49c7a8u: goto label_49c7a8;
        case 0x49c7acu: goto label_49c7ac;
        case 0x49c7b0u: goto label_49c7b0;
        case 0x49c7b4u: goto label_49c7b4;
        case 0x49c7b8u: goto label_49c7b8;
        case 0x49c7bcu: goto label_49c7bc;
        case 0x49c7c0u: goto label_49c7c0;
        case 0x49c7c4u: goto label_49c7c4;
        case 0x49c7c8u: goto label_49c7c8;
        case 0x49c7ccu: goto label_49c7cc;
        default: break;
    }

    ctx->pc = 0x49c5b0u;

label_49c5b0:
    // 0x49c5b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c5b4:
    // 0x49c5b4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x49c5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_49c5b8:
    // 0x49c5b8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x49c5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_49c5bc:
    // 0x49c5bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c5c0:
    // 0x49c5c0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x49c5c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_49c5c4:
    // 0x49c5c4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x49c5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_49c5c8:
    // 0x49c5c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c5cc:
    // 0x49c5cc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x49c5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_49c5d0:
    // 0x49c5d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c5d4:
    // 0x49c5d4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x49c5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_49c5d8:
    // 0x49c5d8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x49c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_49c5dc:
    // 0x49c5dc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x49c5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_49c5e0:
    // 0x49c5e0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x49c5e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_49c5e4:
    // 0x49c5e4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x49c5e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_49c5e8:
    // 0x49c5e8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x49c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_49c5ec:
    // 0x49c5ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c5f0:
    // 0x49c5f0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x49c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_49c5f4:
    // 0x49c5f4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x49c5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_49c5f8:
    // 0x49c5f8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x49c5f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_49c5fc:
    // 0x49c5fc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x49c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_49c600:
    // 0x49c600: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x49c600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_49c604:
    // 0x49c604: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x49c604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_49c608:
    // 0x49c608: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x49c608u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_49c60c:
    // 0x49c60c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x49c60cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_49c610:
    // 0x49c610: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x49c610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_49c614:
    // 0x49c614: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x49c614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_49c618:
    // 0x49c618: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49c618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49c61c:
    // 0x49c61c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x49c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_49c620:
    // 0x49c620: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x49c620u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_49c624:
    // 0x49c624: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x49c624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49c628:
    // 0x49c628: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x49c628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_49c62c:
    // 0x49c62c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x49c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_49c630:
    // 0x49c630: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x49c630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_49c634:
    // 0x49c634: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49c634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_49c638:
    // 0x49c638: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x49c638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_49c63c:
    // 0x49c63c: 0x3e00008  jr          $ra
label_49c640:
    if (ctx->pc == 0x49C640u) {
        ctx->pc = 0x49C640u;
            // 0x49c640: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x49C644u;
        goto label_49c644;
    }
    ctx->pc = 0x49C63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C63Cu;
            // 0x49c640: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C644u;
label_49c644:
    // 0x49c644: 0x0  nop
    ctx->pc = 0x49c644u;
    // NOP
label_49c648:
    // 0x49c648: 0x0  nop
    ctx->pc = 0x49c648u;
    // NOP
label_49c64c:
    // 0x49c64c: 0x0  nop
    ctx->pc = 0x49c64cu;
    // NOP
label_49c650:
    // 0x49c650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49c654:
    // 0x49c654: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49c654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49c658:
    // 0x49c658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49c658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_49c65c:
    // 0x49c65c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49c660:
    // 0x49c660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49c660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49c664:
    // 0x49c664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49c668:
    // 0x49c668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49c66c:
    // 0x49c66c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49c66cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49c670:
    // 0x49c670: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_49c674:
    if (ctx->pc == 0x49C674u) {
        ctx->pc = 0x49C674u;
            // 0x49c674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C678u;
        goto label_49c678;
    }
    ctx->pc = 0x49C670u;
    {
        const bool branch_taken_0x49c670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C670u;
            // 0x49c674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c670) {
            ctx->pc = 0x49C6F0u;
            goto label_49c6f0;
        }
    }
    ctx->pc = 0x49C678u;
label_49c678:
    // 0x49c678: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49c67c:
    // 0x49c67c: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
label_49c680:
    if (ctx->pc == 0x49C680u) {
        ctx->pc = 0x49C680u;
            // 0x49c680: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49C684u;
        goto label_49c684;
    }
    ctx->pc = 0x49C67Cu;
    {
        const bool branch_taken_0x49c67c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49c67c) {
            ctx->pc = 0x49C680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C67Cu;
            // 0x49c680: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C6E4u;
            goto label_49c6e4;
        }
    }
    ctx->pc = 0x49C684u;
label_49c684:
    // 0x49c684: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49c688:
    // 0x49c688: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_49c68c:
    if (ctx->pc == 0x49C68Cu) {
        ctx->pc = 0x49C690u;
        goto label_49c690;
    }
    ctx->pc = 0x49C688u;
    {
        const bool branch_taken_0x49c688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49c688) {
            ctx->pc = 0x49C698u;
            goto label_49c698;
        }
    }
    ctx->pc = 0x49C690u;
label_49c690:
    // 0x49c690: 0x10000025  b           . + 4 + (0x25 << 2)
label_49c694:
    if (ctx->pc == 0x49C694u) {
        ctx->pc = 0x49C698u;
        goto label_49c698;
    }
    ctx->pc = 0x49C690u;
    {
        const bool branch_taken_0x49c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c690) {
            ctx->pc = 0x49C728u;
            goto label_49c728;
        }
    }
    ctx->pc = 0x49C698u;
label_49c698:
    // 0x49c698: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49c698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49c69c:
    // 0x49c69c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49c6a0:
    // 0x49c6a0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x49c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49c6a4:
    // 0x49c6a4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x49c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_49c6a8:
    // 0x49c6a8: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_49c6ac:
    if (ctx->pc == 0x49C6ACu) {
        ctx->pc = 0x49C6B0u;
        goto label_49c6b0;
    }
    ctx->pc = 0x49C6A8u;
    {
        const bool branch_taken_0x49c6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x49c6a8) {
            ctx->pc = 0x49C728u;
            goto label_49c728;
        }
    }
    ctx->pc = 0x49C6B0u;
label_49c6b0:
    // 0x49c6b0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x49c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49c6b4:
    // 0x49c6b4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x49c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_49c6b8:
    // 0x49c6b8: 0x8c653f58  lw          $a1, 0x3F58($v1)
    ctx->pc = 0x49c6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16216)));
label_49c6bc:
    // 0x49c6bc: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x49c6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_49c6c0:
    // 0x49c6c0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x49c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_49c6c4:
    // 0x49c6c4: 0x8cc40090  lw          $a0, 0x90($a2)
    ctx->pc = 0x49c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_49c6c8:
    // 0x49c6c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x49c6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_49c6cc:
    // 0x49c6cc: 0xacc40090  sw          $a0, 0x90($a2)
    ctx->pc = 0x49c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 4));
label_49c6d0:
    // 0x49c6d0: 0x8c643f60  lw          $a0, 0x3F60($v1)
    ctx->pc = 0x49c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16224)));
label_49c6d4:
    // 0x49c6d4: 0x8cc30120  lw          $v1, 0x120($a2)
    ctx->pc = 0x49c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_49c6d8:
    // 0x49c6d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49c6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_49c6dc:
    // 0x49c6dc: 0x10000012  b           . + 4 + (0x12 << 2)
label_49c6e0:
    if (ctx->pc == 0x49C6E0u) {
        ctx->pc = 0x49C6E0u;
            // 0x49c6e0: 0xacc30120  sw          $v1, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 3));
        ctx->pc = 0x49C6E4u;
        goto label_49c6e4;
    }
    ctx->pc = 0x49C6DCu;
    {
        const bool branch_taken_0x49c6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C6DCu;
            // 0x49c6e0: 0xacc30120  sw          $v1, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c6dc) {
            ctx->pc = 0x49C728u;
            goto label_49c728;
        }
    }
    ctx->pc = 0x49C6E4u;
label_49c6e4:
    // 0x49c6e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49c6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49c6e8:
    // 0x49c6e8: 0x320f809  jalr        $t9
label_49c6ec:
    if (ctx->pc == 0x49C6ECu) {
        ctx->pc = 0x49C6F0u;
        goto label_49c6f0;
    }
    ctx->pc = 0x49C6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C6F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C6F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C6F0u; }
            if (ctx->pc != 0x49C6F0u) { return; }
        }
        }
    }
    ctx->pc = 0x49C6F0u;
label_49c6f0:
    // 0x49c6f0: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x49c6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_49c6f4:
    // 0x49c6f4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_49c6f8:
    if (ctx->pc == 0x49C6F8u) {
        ctx->pc = 0x49C6FCu;
        goto label_49c6fc;
    }
    ctx->pc = 0x49C6F4u;
    {
        const bool branch_taken_0x49c6f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c6f4) {
            ctx->pc = 0x49C728u;
            goto label_49c728;
        }
    }
    ctx->pc = 0x49C6FCu;
label_49c6fc:
    // 0x49c6fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49c6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c700:
    // 0x49c700: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49c700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c704:
    // 0x49c704: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x49c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_49c708:
    // 0x49c708: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49c708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_49c70c:
    // 0x49c70c: 0xc0e3658  jal         func_38D960
label_49c710:
    if (ctx->pc == 0x49C710u) {
        ctx->pc = 0x49C710u;
            // 0x49c710: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x49C714u;
        goto label_49c714;
    }
    ctx->pc = 0x49C70Cu;
    SET_GPR_U32(ctx, 31, 0x49C714u);
    ctx->pc = 0x49C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C70Cu;
            // 0x49c710: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C714u; }
        if (ctx->pc != 0x49C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C714u; }
        if (ctx->pc != 0x49C714u) { return; }
    }
    ctx->pc = 0x49C714u;
label_49c714:
    // 0x49c714: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49c714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49c718:
    // 0x49c718: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x49c718u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49c71c:
    // 0x49c71c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_49c720:
    if (ctx->pc == 0x49C720u) {
        ctx->pc = 0x49C720u;
            // 0x49c720: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x49C724u;
        goto label_49c724;
    }
    ctx->pc = 0x49C71Cu;
    {
        const bool branch_taken_0x49c71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C71Cu;
            // 0x49c720: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c71c) {
            ctx->pc = 0x49C704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49c704;
        }
    }
    ctx->pc = 0x49C724u;
label_49c724:
    // 0x49c724: 0x0  nop
    ctx->pc = 0x49c724u;
    // NOP
label_49c728:
    // 0x49c728: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_49c72c:
    // 0x49c72c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49c72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49c730:
    // 0x49c730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49c730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49c734:
    // 0x49c734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c738:
    // 0x49c738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49c73c:
    // 0x49c73c: 0x3e00008  jr          $ra
label_49c740:
    if (ctx->pc == 0x49C740u) {
        ctx->pc = 0x49C740u;
            // 0x49c740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x49C744u;
        goto label_49c744;
    }
    ctx->pc = 0x49C73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C73Cu;
            // 0x49c740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C744u;
label_49c744:
    // 0x49c744: 0x0  nop
    ctx->pc = 0x49c744u;
    // NOP
label_49c748:
    // 0x49c748: 0x0  nop
    ctx->pc = 0x49c748u;
    // NOP
label_49c74c:
    // 0x49c74c: 0x0  nop
    ctx->pc = 0x49c74cu;
    // NOP
label_49c750:
    // 0x49c750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49c754:
    // 0x49c754: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_49c758:
    // 0x49c758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49c75c:
    // 0x49c75c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49c760:
    // 0x49c760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49c764:
    // 0x49c764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49c768:
    // 0x49c768: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x49c768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49c76c:
    // 0x49c76c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_49c770:
    if (ctx->pc == 0x49C770u) {
        ctx->pc = 0x49C770u;
            // 0x49c770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49C774u;
        goto label_49c774;
    }
    ctx->pc = 0x49C76Cu;
    {
        const bool branch_taken_0x49c76c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C76Cu;
            // 0x49c770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c76c) {
            ctx->pc = 0x49C7A8u;
            goto label_49c7a8;
        }
    }
    ctx->pc = 0x49C774u;
label_49c774:
    // 0x49c774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49c774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c778:
    // 0x49c778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49c778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49c77c:
    // 0x49c77c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x49c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_49c780:
    // 0x49c780: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_49c784:
    // 0x49c784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49c784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49c788:
    // 0x49c788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49c788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c78c:
    // 0x49c78c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x49c78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_49c790:
    // 0x49c790: 0x320f809  jalr        $t9
label_49c794:
    if (ctx->pc == 0x49C794u) {
        ctx->pc = 0x49C798u;
        goto label_49c798;
    }
    ctx->pc = 0x49C790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49C798u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49C798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49C798u; }
            if (ctx->pc != 0x49C798u) { return; }
        }
        }
    }
    ctx->pc = 0x49C798u;
label_49c798:
    // 0x49c798: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49c798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49c79c:
    // 0x49c79c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x49c79cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49c7a0:
    // 0x49c7a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_49c7a4:
    if (ctx->pc == 0x49C7A4u) {
        ctx->pc = 0x49C7A4u;
            // 0x49c7a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x49C7A8u;
        goto label_49c7a8;
    }
    ctx->pc = 0x49C7A0u;
    {
        const bool branch_taken_0x49c7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C7A0u;
            // 0x49c7a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c7a0) {
            ctx->pc = 0x49C77Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49c77c;
        }
    }
    ctx->pc = 0x49C7A8u;
label_49c7a8:
    // 0x49c7a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49c7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_49c7ac:
    // 0x49c7ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49c7acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49c7b0:
    // 0x49c7b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49c7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49c7b4:
    // 0x49c7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c7b8:
    // 0x49c7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49c7bc:
    // 0x49c7bc: 0x3e00008  jr          $ra
label_49c7c0:
    if (ctx->pc == 0x49C7C0u) {
        ctx->pc = 0x49C7C0u;
            // 0x49c7c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x49C7C4u;
        goto label_49c7c4;
    }
    ctx->pc = 0x49C7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C7BCu;
            // 0x49c7c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C7C4u;
label_49c7c4:
    // 0x49c7c4: 0x0  nop
    ctx->pc = 0x49c7c4u;
    // NOP
label_49c7c8:
    // 0x49c7c8: 0x0  nop
    ctx->pc = 0x49c7c8u;
    // NOP
label_49c7cc:
    // 0x49c7cc: 0x0  nop
    ctx->pc = 0x49c7ccu;
    // NOP
}
