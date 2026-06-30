#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A630
// Address: 0x24a630 - 0x24a7d0
void sub_0024A630_0x24a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A630_0x24a630");
#endif

    switch (ctx->pc) {
        case 0x24a630u: goto label_24a630;
        case 0x24a634u: goto label_24a634;
        case 0x24a638u: goto label_24a638;
        case 0x24a63cu: goto label_24a63c;
        case 0x24a640u: goto label_24a640;
        case 0x24a644u: goto label_24a644;
        case 0x24a648u: goto label_24a648;
        case 0x24a64cu: goto label_24a64c;
        case 0x24a650u: goto label_24a650;
        case 0x24a654u: goto label_24a654;
        case 0x24a658u: goto label_24a658;
        case 0x24a65cu: goto label_24a65c;
        case 0x24a660u: goto label_24a660;
        case 0x24a664u: goto label_24a664;
        case 0x24a668u: goto label_24a668;
        case 0x24a66cu: goto label_24a66c;
        case 0x24a670u: goto label_24a670;
        case 0x24a674u: goto label_24a674;
        case 0x24a678u: goto label_24a678;
        case 0x24a67cu: goto label_24a67c;
        case 0x24a680u: goto label_24a680;
        case 0x24a684u: goto label_24a684;
        case 0x24a688u: goto label_24a688;
        case 0x24a68cu: goto label_24a68c;
        case 0x24a690u: goto label_24a690;
        case 0x24a694u: goto label_24a694;
        case 0x24a698u: goto label_24a698;
        case 0x24a69cu: goto label_24a69c;
        case 0x24a6a0u: goto label_24a6a0;
        case 0x24a6a4u: goto label_24a6a4;
        case 0x24a6a8u: goto label_24a6a8;
        case 0x24a6acu: goto label_24a6ac;
        case 0x24a6b0u: goto label_24a6b0;
        case 0x24a6b4u: goto label_24a6b4;
        case 0x24a6b8u: goto label_24a6b8;
        case 0x24a6bcu: goto label_24a6bc;
        case 0x24a6c0u: goto label_24a6c0;
        case 0x24a6c4u: goto label_24a6c4;
        case 0x24a6c8u: goto label_24a6c8;
        case 0x24a6ccu: goto label_24a6cc;
        case 0x24a6d0u: goto label_24a6d0;
        case 0x24a6d4u: goto label_24a6d4;
        case 0x24a6d8u: goto label_24a6d8;
        case 0x24a6dcu: goto label_24a6dc;
        case 0x24a6e0u: goto label_24a6e0;
        case 0x24a6e4u: goto label_24a6e4;
        case 0x24a6e8u: goto label_24a6e8;
        case 0x24a6ecu: goto label_24a6ec;
        case 0x24a6f0u: goto label_24a6f0;
        case 0x24a6f4u: goto label_24a6f4;
        case 0x24a6f8u: goto label_24a6f8;
        case 0x24a6fcu: goto label_24a6fc;
        case 0x24a700u: goto label_24a700;
        case 0x24a704u: goto label_24a704;
        case 0x24a708u: goto label_24a708;
        case 0x24a70cu: goto label_24a70c;
        case 0x24a710u: goto label_24a710;
        case 0x24a714u: goto label_24a714;
        case 0x24a718u: goto label_24a718;
        case 0x24a71cu: goto label_24a71c;
        case 0x24a720u: goto label_24a720;
        case 0x24a724u: goto label_24a724;
        case 0x24a728u: goto label_24a728;
        case 0x24a72cu: goto label_24a72c;
        case 0x24a730u: goto label_24a730;
        case 0x24a734u: goto label_24a734;
        case 0x24a738u: goto label_24a738;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a740u: goto label_24a740;
        case 0x24a744u: goto label_24a744;
        case 0x24a748u: goto label_24a748;
        case 0x24a74cu: goto label_24a74c;
        case 0x24a750u: goto label_24a750;
        case 0x24a754u: goto label_24a754;
        case 0x24a758u: goto label_24a758;
        case 0x24a75cu: goto label_24a75c;
        case 0x24a760u: goto label_24a760;
        case 0x24a764u: goto label_24a764;
        case 0x24a768u: goto label_24a768;
        case 0x24a76cu: goto label_24a76c;
        case 0x24a770u: goto label_24a770;
        case 0x24a774u: goto label_24a774;
        case 0x24a778u: goto label_24a778;
        case 0x24a77cu: goto label_24a77c;
        case 0x24a780u: goto label_24a780;
        case 0x24a784u: goto label_24a784;
        case 0x24a788u: goto label_24a788;
        case 0x24a78cu: goto label_24a78c;
        case 0x24a790u: goto label_24a790;
        case 0x24a794u: goto label_24a794;
        case 0x24a798u: goto label_24a798;
        case 0x24a79cu: goto label_24a79c;
        case 0x24a7a0u: goto label_24a7a0;
        case 0x24a7a4u: goto label_24a7a4;
        case 0x24a7a8u: goto label_24a7a8;
        case 0x24a7acu: goto label_24a7ac;
        case 0x24a7b0u: goto label_24a7b0;
        case 0x24a7b4u: goto label_24a7b4;
        case 0x24a7b8u: goto label_24a7b8;
        case 0x24a7bcu: goto label_24a7bc;
        case 0x24a7c0u: goto label_24a7c0;
        case 0x24a7c4u: goto label_24a7c4;
        case 0x24a7c8u: goto label_24a7c8;
        case 0x24a7ccu: goto label_24a7cc;
        default: break;
    }

    ctx->pc = 0x24a630u;

label_24a630:
    // 0x24a630: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x24a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_24a634:
    // 0x24a634: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_24a638:
    // 0x24a638: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24a63c:
    // 0x24a63c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24a640:
    // 0x24a640: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x24a640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_24a644:
    // 0x24a644: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24a648:
    // 0x24a648: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24a648u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a64c:
    // 0x24a64c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24a650:
    // 0x24a650: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x24a650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24a654:
    // 0x24a654: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24a658:
    // 0x24a658: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24a658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24a65c:
    // 0x24a65c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24a660:
    // 0x24a660: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24a660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24a664:
    // 0x24a664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24a668:
    // 0x24a668: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x24a668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_24a66c:
    // 0x24a66c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24a670:
    // 0x24a670: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x24a670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_24a674:
    // 0x24a674: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_24a678:
    // 0x24a678: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x24a678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24a67c:
    // 0x24a67c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x24a67cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24a680:
    // 0x24a680: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x24a680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_24a684:
    // 0x24a684: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x24a684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
label_24a688:
    // 0x24a688: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x24a688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_24a68c:
    // 0x24a68c: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x24a68cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
label_24a690:
    // 0x24a690: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24a690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24a694:
    // 0x24a694: 0x90c2000a  lbu         $v0, 0xA($a2)
    ctx->pc = 0x24a694u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_24a698:
    // 0x24a698: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x24a698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_24a69c:
    // 0x24a69c: 0x90c2000b  lbu         $v0, 0xB($a2)
    ctx->pc = 0x24a69cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
label_24a6a0:
    // 0x24a6a0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x24a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_24a6a4:
    // 0x24a6a4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x24a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_24a6a8:
    // 0x24a6a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x24a6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24a6ac:
    // 0x24a6ac: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x24a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_24a6b0:
    // 0x24a6b0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x24a6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_24a6b4:
    // 0x24a6b4: 0x320f809  jalr        $t9
label_24a6b8:
    if (ctx->pc == 0x24A6B8u) {
        ctx->pc = 0x24A6B8u;
            // 0x24a6b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A6BCu;
        goto label_24a6bc;
    }
    ctx->pc = 0x24A6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24A6BCu);
        ctx->pc = 0x24A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6B4u;
            // 0x24a6b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24A6BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24A6BCu; }
            if (ctx->pc != 0x24A6BCu) { return; }
        }
        }
    }
    ctx->pc = 0x24A6BCu;
label_24a6bc:
    // 0x24a6bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x24a6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24a6c0:
    // 0x24a6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24a6c4:
    // 0x24a6c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_24a6c8:
    // 0x24a6c8: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x24a6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_24a6cc:
    // 0x24a6cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x24a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a6d0:
    // 0x24a6d0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x24a6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_24a6d4:
    // 0x24a6d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x24a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_24a6d8:
    // 0x24a6d8: 0x320f809  jalr        $t9
label_24a6dc:
    if (ctx->pc == 0x24A6DCu) {
        ctx->pc = 0x24A6DCu;
            // 0x24a6dc: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x24A6E0u;
        goto label_24a6e0;
    }
    ctx->pc = 0x24A6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24A6E0u);
        ctx->pc = 0x24A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6D8u;
            // 0x24a6dc: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24A6E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24A6E0u; }
            if (ctx->pc != 0x24A6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x24A6E0u;
label_24a6e0:
    // 0x24a6e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_24a6e4:
    // 0x24a6e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a6e8:
    // 0x24a6e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24a6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24a6ec:
    // 0x24a6ec: 0x26a70010  addiu       $a3, $s5, 0x10
    ctx->pc = 0x24a6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_24a6f0:
    // 0x24a6f0: 0xc098b60  jal         func_262D80
label_24a6f4:
    if (ctx->pc == 0x24A6F4u) {
        ctx->pc = 0x24A6F4u;
            // 0x24a6f4: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x24A6F8u;
        goto label_24a6f8;
    }
    ctx->pc = 0x24A6F0u;
    SET_GPR_U32(ctx, 31, 0x24A6F8u);
    ctx->pc = 0x24A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6F0u;
            // 0x24a6f4: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6F8u; }
        if (ctx->pc != 0x24A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6F8u; }
        if (ctx->pc != 0x24A6F8u) { return; }
    }
    ctx->pc = 0x24A6F8u;
label_24a6f8:
    // 0x24a6f8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x24a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_24a6fc:
    // 0x24a6fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24a700:
    if (ctx->pc == 0x24A700u) {
        ctx->pc = 0x24A700u;
            // 0x24a700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A704u;
        goto label_24a704;
    }
    ctx->pc = 0x24A6FCu;
    {
        const bool branch_taken_0x24a6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6FCu;
            // 0x24a700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a6fc) {
            ctx->pc = 0x24A710u;
            goto label_24a710;
        }
    }
    ctx->pc = 0x24A704u;
label_24a704:
    // 0x24a704: 0xc099150  jal         func_264540
label_24a708:
    if (ctx->pc == 0x24A708u) {
        ctx->pc = 0x24A708u;
            // 0x24a708: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x24A70Cu;
        goto label_24a70c;
    }
    ctx->pc = 0x24A704u;
    SET_GPR_U32(ctx, 31, 0x24A70Cu);
    ctx->pc = 0x24A708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A704u;
            // 0x24a708: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264540u;
    if (runtime->hasFunction(0x264540u)) {
        auto targetFn = runtime->lookupFunction(0x264540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A70Cu; }
        if (ctx->pc != 0x24A70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264540_0x264540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A70Cu; }
        if (ctx->pc != 0x24A70Cu) { return; }
    }
    ctx->pc = 0x24A70Cu;
label_24a70c:
    // 0x24a70c: 0x0  nop
    ctx->pc = 0x24a70cu;
    // NOP
label_24a710:
    // 0x24a710: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x24a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_24a714:
    // 0x24a714: 0xc7a50080  lwc1        $f5, 0x80($sp)
    ctx->pc = 0x24a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24a718:
    // 0x24a718: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x24a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24a71c:
    // 0x24a71c: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x24a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a720:
    // 0x24a720: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x24a720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24a724:
    // 0x24a724: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a728:
    // 0x24a728: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x24a728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a72c:
    // 0x24a72c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x24a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a730:
    // 0x24a730: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24a730u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24a734:
    // 0x24a734: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24a734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_24a738:
    // 0x24a738: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24a738u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_24a73c:
    // 0x24a73c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24a73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_24a740:
    // 0x24a740: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x24a740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_24a744:
    // 0x24a744: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x24a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a748:
    // 0x24a748: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x24a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a74c:
    // 0x24a74c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x24a74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a750:
    // 0x24a750: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24a750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24a754:
    // 0x24a754: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24a754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_24a758:
    // 0x24a758: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24a758u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_24a75c:
    // 0x24a75c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24a75cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_24a760:
    // 0x24a760: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x24a760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_24a764:
    // 0x24a764: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x24a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a768:
    // 0x24a768: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x24a768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a76c:
    // 0x24a76c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x24a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a770:
    // 0x24a770: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24a770u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24a774:
    // 0x24a774: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24a774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_24a778:
    // 0x24a778: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24a778u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_24a77c:
    // 0x24a77c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24a77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_24a780:
    // 0x24a780: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x24a780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_24a784:
    // 0x24a784: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x24a784u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_24a788:
    // 0x24a788: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x24a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a78c:
    // 0x24a78c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x24a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a790:
    // 0x24a790: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x24a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a794:
    // 0x24a794: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x24a794u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_24a798:
    // 0x24a798: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24a798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24a79c:
    // 0x24a79c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x24a79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_24a7a0:
    // 0x24a7a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24a7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24a7a4:
    // 0x24a7a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24a7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24a7a8:
    // 0x24a7a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24a7a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24a7ac:
    // 0x24a7ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24a7acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24a7b0:
    // 0x24a7b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24a7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a7b4:
    // 0x24a7b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a7b8:
    // 0x24a7b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24a7bc:
    // 0x24a7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24a7c0:
    // 0x24a7c0: 0x3e00008  jr          $ra
label_24a7c4:
    if (ctx->pc == 0x24A7C4u) {
        ctx->pc = 0x24A7C4u;
            // 0x24a7c4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x24A7C8u;
        goto label_24a7c8;
    }
    ctx->pc = 0x24A7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A7C0u;
            // 0x24a7c4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A7C8u;
label_24a7c8:
    // 0x24a7c8: 0x0  nop
    ctx->pc = 0x24a7c8u;
    // NOP
label_24a7cc:
    // 0x24a7cc: 0x0  nop
    ctx->pc = 0x24a7ccu;
    // NOP
}
