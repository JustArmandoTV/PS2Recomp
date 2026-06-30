#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C630
// Address: 0x20c630 - 0x20c7b0
void sub_0020C630_0x20c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C630_0x20c630");
#endif

    switch (ctx->pc) {
        case 0x20c630u: goto label_20c630;
        case 0x20c634u: goto label_20c634;
        case 0x20c638u: goto label_20c638;
        case 0x20c63cu: goto label_20c63c;
        case 0x20c640u: goto label_20c640;
        case 0x20c644u: goto label_20c644;
        case 0x20c648u: goto label_20c648;
        case 0x20c64cu: goto label_20c64c;
        case 0x20c650u: goto label_20c650;
        case 0x20c654u: goto label_20c654;
        case 0x20c658u: goto label_20c658;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c660u: goto label_20c660;
        case 0x20c664u: goto label_20c664;
        case 0x20c668u: goto label_20c668;
        case 0x20c66cu: goto label_20c66c;
        case 0x20c670u: goto label_20c670;
        case 0x20c674u: goto label_20c674;
        case 0x20c678u: goto label_20c678;
        case 0x20c67cu: goto label_20c67c;
        case 0x20c680u: goto label_20c680;
        case 0x20c684u: goto label_20c684;
        case 0x20c688u: goto label_20c688;
        case 0x20c68cu: goto label_20c68c;
        case 0x20c690u: goto label_20c690;
        case 0x20c694u: goto label_20c694;
        case 0x20c698u: goto label_20c698;
        case 0x20c69cu: goto label_20c69c;
        case 0x20c6a0u: goto label_20c6a0;
        case 0x20c6a4u: goto label_20c6a4;
        case 0x20c6a8u: goto label_20c6a8;
        case 0x20c6acu: goto label_20c6ac;
        case 0x20c6b0u: goto label_20c6b0;
        case 0x20c6b4u: goto label_20c6b4;
        case 0x20c6b8u: goto label_20c6b8;
        case 0x20c6bcu: goto label_20c6bc;
        case 0x20c6c0u: goto label_20c6c0;
        case 0x20c6c4u: goto label_20c6c4;
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c6ccu: goto label_20c6cc;
        case 0x20c6d0u: goto label_20c6d0;
        case 0x20c6d4u: goto label_20c6d4;
        case 0x20c6d8u: goto label_20c6d8;
        case 0x20c6dcu: goto label_20c6dc;
        case 0x20c6e0u: goto label_20c6e0;
        case 0x20c6e4u: goto label_20c6e4;
        case 0x20c6e8u: goto label_20c6e8;
        case 0x20c6ecu: goto label_20c6ec;
        case 0x20c6f0u: goto label_20c6f0;
        case 0x20c6f4u: goto label_20c6f4;
        case 0x20c6f8u: goto label_20c6f8;
        case 0x20c6fcu: goto label_20c6fc;
        case 0x20c700u: goto label_20c700;
        case 0x20c704u: goto label_20c704;
        case 0x20c708u: goto label_20c708;
        case 0x20c70cu: goto label_20c70c;
        case 0x20c710u: goto label_20c710;
        case 0x20c714u: goto label_20c714;
        case 0x20c718u: goto label_20c718;
        case 0x20c71cu: goto label_20c71c;
        case 0x20c720u: goto label_20c720;
        case 0x20c724u: goto label_20c724;
        case 0x20c728u: goto label_20c728;
        case 0x20c72cu: goto label_20c72c;
        case 0x20c730u: goto label_20c730;
        case 0x20c734u: goto label_20c734;
        case 0x20c738u: goto label_20c738;
        case 0x20c73cu: goto label_20c73c;
        case 0x20c740u: goto label_20c740;
        case 0x20c744u: goto label_20c744;
        case 0x20c748u: goto label_20c748;
        case 0x20c74cu: goto label_20c74c;
        case 0x20c750u: goto label_20c750;
        case 0x20c754u: goto label_20c754;
        case 0x20c758u: goto label_20c758;
        case 0x20c75cu: goto label_20c75c;
        case 0x20c760u: goto label_20c760;
        case 0x20c764u: goto label_20c764;
        case 0x20c768u: goto label_20c768;
        case 0x20c76cu: goto label_20c76c;
        case 0x20c770u: goto label_20c770;
        case 0x20c774u: goto label_20c774;
        case 0x20c778u: goto label_20c778;
        case 0x20c77cu: goto label_20c77c;
        case 0x20c780u: goto label_20c780;
        case 0x20c784u: goto label_20c784;
        case 0x20c788u: goto label_20c788;
        case 0x20c78cu: goto label_20c78c;
        case 0x20c790u: goto label_20c790;
        case 0x20c794u: goto label_20c794;
        case 0x20c798u: goto label_20c798;
        case 0x20c79cu: goto label_20c79c;
        case 0x20c7a0u: goto label_20c7a0;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c7a8u: goto label_20c7a8;
        case 0x20c7acu: goto label_20c7ac;
        default: break;
    }

    ctx->pc = 0x20c630u;

label_20c630:
    // 0x20c630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20c634:
    // 0x20c634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20c638:
    // 0x20c638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20c63c:
    // 0x20c63c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20c640:
    // 0x20c640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20c644:
    // 0x20c644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20c644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c648:
    // 0x20c648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20c64c:
    // 0x20c64c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20c64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20c650:
    // 0x20c650: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20c654:
    // 0x20c654: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x20c654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_20c658:
    // 0x20c658: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20c658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20c65c:
    // 0x20c65c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x20c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20c660:
    // 0x20c660: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x20c660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20c664:
    // 0x20c664: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x20c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_20c668:
    // 0x20c668: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20c668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20c66c:
    // 0x20c66c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x20c66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20c670:
    // 0x20c670: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20c674:
    // 0x20c674: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x20c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_20c678:
    // 0x20c678: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x20c678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20c67c:
    // 0x20c67c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x20c67cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_20c680:
    // 0x20c680: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_20c684:
    if (ctx->pc == 0x20C684u) {
        ctx->pc = 0x20C684u;
            // 0x20c684: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x20C688u;
        goto label_20c688;
    }
    ctx->pc = 0x20C680u;
    {
        const bool branch_taken_0x20c680 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c680) {
            ctx->pc = 0x20C684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C680u;
            // 0x20c684: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C690u;
            goto label_20c690;
        }
    }
    ctx->pc = 0x20C688u;
label_20c688:
    // 0x20c688: 0x10000004  b           . + 4 + (0x4 << 2)
label_20c68c:
    if (ctx->pc == 0x20C68Cu) {
        ctx->pc = 0x20C68Cu;
            // 0x20c68c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x20C690u;
        goto label_20c690;
    }
    ctx->pc = 0x20C688u;
    {
        const bool branch_taken_0x20c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C688u;
            // 0x20c68c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c688) {
            ctx->pc = 0x20C69Cu;
            goto label_20c69c;
        }
    }
    ctx->pc = 0x20C690u;
label_20c690:
    // 0x20c690: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20c690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20c694:
    // 0x20c694: 0x320f809  jalr        $t9
label_20c698:
    if (ctx->pc == 0x20C698u) {
        ctx->pc = 0x20C69Cu;
        goto label_20c69c;
    }
    ctx->pc = 0x20C694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C69Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C69Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C69Cu; }
            if (ctx->pc != 0x20C69Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20C69Cu;
label_20c69c:
    // 0x20c69c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x20c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_20c6a0:
    // 0x20c6a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20c6a4:
    // 0x20c6a4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20c6a8:
    // 0x20c6a8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x20c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_20c6ac:
    // 0x20c6ac: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x20c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20c6b0:
    // 0x20c6b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x20c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_20c6b4:
    // 0x20c6b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20c6b8:
    // 0x20c6b8: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x20c6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20c6bc:
    // 0x20c6bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20c6c0:
    // 0x20c6c0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x20c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_20c6c4:
    // 0x20c6c4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x20c6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20c6c8:
    // 0x20c6c8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x20c6c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_20c6cc:
    // 0x20c6cc: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_20c6d0:
    if (ctx->pc == 0x20C6D0u) {
        ctx->pc = 0x20C6D0u;
            // 0x20c6d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x20C6D4u;
        goto label_20c6d4;
    }
    ctx->pc = 0x20C6CCu;
    {
        const bool branch_taken_0x20c6cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c6cc) {
            ctx->pc = 0x20C6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6CCu;
            // 0x20c6d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C6DCu;
            goto label_20c6dc;
        }
    }
    ctx->pc = 0x20C6D4u;
label_20c6d4:
    // 0x20c6d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_20c6d8:
    if (ctx->pc == 0x20C6D8u) {
        ctx->pc = 0x20C6D8u;
            // 0x20c6d8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x20C6DCu;
        goto label_20c6dc;
    }
    ctx->pc = 0x20C6D4u;
    {
        const bool branch_taken_0x20c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6D4u;
            // 0x20c6d8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6d4) {
            ctx->pc = 0x20C6E8u;
            goto label_20c6e8;
        }
    }
    ctx->pc = 0x20C6DCu;
label_20c6dc:
    // 0x20c6dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20c6e0:
    // 0x20c6e0: 0x320f809  jalr        $t9
label_20c6e4:
    if (ctx->pc == 0x20C6E4u) {
        ctx->pc = 0x20C6E8u;
        goto label_20c6e8;
    }
    ctx->pc = 0x20C6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C6E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C6E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C6E8u; }
            if (ctx->pc != 0x20C6E8u) { return; }
        }
        }
    }
    ctx->pc = 0x20C6E8u;
label_20c6e8:
    // 0x20c6e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_20c6ec:
    if (ctx->pc == 0x20C6ECu) {
        ctx->pc = 0x20C6ECu;
            // 0x20c6ec: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x20C6F0u;
        goto label_20c6f0;
    }
    ctx->pc = 0x20C6E8u;
    {
        const bool branch_taken_0x20c6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6E8u;
            // 0x20c6ec: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6e8) {
            ctx->pc = 0x20C6F8u;
            goto label_20c6f8;
        }
    }
    ctx->pc = 0x20C6F0u;
label_20c6f0:
    // 0x20c6f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_20c6f4:
    if (ctx->pc == 0x20C6F4u) {
        ctx->pc = 0x20C6F4u;
            // 0x20c6f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C6F8u;
        goto label_20c6f8;
    }
    ctx->pc = 0x20C6F0u;
    {
        const bool branch_taken_0x20c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6F0u;
            // 0x20c6f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6f0) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C6F8u;
label_20c6f8:
    // 0x20c6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20c6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c6fc:
    // 0x20c6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20c700:
    // 0x20c700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20c704:
    // 0x20c704: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20c704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20c708:
    // 0x20c708: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_20c70c:
    // 0x20c70c: 0xc083110  jal         func_20C440
label_20c710:
    if (ctx->pc == 0x20C710u) {
        ctx->pc = 0x20C710u;
            // 0x20c710: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x20C714u;
        goto label_20c714;
    }
    ctx->pc = 0x20C70Cu;
    SET_GPR_U32(ctx, 31, 0x20C714u);
    ctx->pc = 0x20C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C70Cu;
            // 0x20c710: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C440u;
    if (runtime->hasFunction(0x20C440u)) {
        auto targetFn = runtime->lookupFunction(0x20C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C714u; }
        if (ctx->pc != 0x20C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C440_0x20c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C714u; }
        if (ctx->pc != 0x20C714u) { return; }
    }
    ctx->pc = 0x20C714u;
label_20c714:
    // 0x20c714: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20c714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20c718:
    // 0x20c718: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x20c718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_20c71c:
    // 0x20c71c: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x20c71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20c720:
    // 0x20c720: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x20c720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_20c724:
    // 0x20c724: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20c724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20c728:
    // 0x20c728: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x20c728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_20c72c:
    // 0x20c72c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x20c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_20c730:
    // 0x20c730: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x20c730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_20c734:
    // 0x20c734: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_20c738:
    // 0x20c738: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20c738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20c73c:
    // 0x20c73c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_20c740:
    // 0x20c740: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x20c740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20c744:
    // 0x20c744: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x20c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_20c748:
    // 0x20c748: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_20c74c:
    if (ctx->pc == 0x20C74Cu) {
        ctx->pc = 0x20C74Cu;
            // 0x20c74c: 0x468021  addu        $s0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = 0x20C750u;
        goto label_20c750;
    }
    ctx->pc = 0x20C748u;
    {
        const bool branch_taken_0x20c748 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x20C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C748u;
            // 0x20c74c: 0x468021  addu        $s0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c748) {
            ctx->pc = 0x20C760u;
            goto label_20c760;
        }
    }
    ctx->pc = 0x20C750u;
label_20c750:
    // 0x20c750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20c754:
    // 0x20c754: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20c754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20c758:
    // 0x20c758: 0x320f809  jalr        $t9
label_20c75c:
    if (ctx->pc == 0x20C75Cu) {
        ctx->pc = 0x20C760u;
        goto label_20c760;
    }
    ctx->pc = 0x20C758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C760u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C760u; }
            if (ctx->pc != 0x20C760u) { return; }
        }
        }
    }
    ctx->pc = 0x20C760u;
label_20c760:
    // 0x20c760: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20c764:
    // 0x20c764: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x20c764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_20c768:
    // 0x20c768: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20c768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20c76c:
    // 0x20c76c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x20c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_20c770:
    // 0x20c770: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x20c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_20c774:
    // 0x20c774: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_20c778:
    if (ctx->pc == 0x20C778u) {
        ctx->pc = 0x20C778u;
            // 0x20c778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C77Cu;
        goto label_20c77c;
    }
    ctx->pc = 0x20C774u;
    {
        const bool branch_taken_0x20c774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c774) {
            ctx->pc = 0x20C778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C774u;
            // 0x20c778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C790u;
            goto label_20c790;
        }
    }
    ctx->pc = 0x20C77Cu;
label_20c77c:
    // 0x20c77c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20c77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20c780:
    // 0x20c780: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20c780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20c784:
    // 0x20c784: 0x320f809  jalr        $t9
label_20c788:
    if (ctx->pc == 0x20C788u) {
        ctx->pc = 0x20C78Cu;
        goto label_20c78c;
    }
    ctx->pc = 0x20C784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C78Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C78Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C78Cu; }
            if (ctx->pc != 0x20C78Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20C78Cu;
label_20c78c:
    // 0x20c78c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20c78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c790:
    // 0x20c790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20c790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20c794:
    // 0x20c794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c798:
    // 0x20c798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c79c:
    // 0x20c79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20c7a0:
    // 0x20c7a0: 0x3e00008  jr          $ra
label_20c7a4:
    if (ctx->pc == 0x20C7A4u) {
        ctx->pc = 0x20C7A4u;
            // 0x20c7a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20C7A8u;
        goto label_20c7a8;
    }
    ctx->pc = 0x20C7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C7A0u;
            // 0x20c7a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C7A8u;
label_20c7a8:
    // 0x20c7a8: 0x0  nop
    ctx->pc = 0x20c7a8u;
    // NOP
label_20c7ac:
    // 0x20c7ac: 0x0  nop
    ctx->pc = 0x20c7acu;
    // NOP
}
