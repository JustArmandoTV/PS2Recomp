#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038C580
// Address: 0x38c580 - 0x38c7e0
void sub_0038C580_0x38c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C580_0x38c580");
#endif

    switch (ctx->pc) {
        case 0x38c580u: goto label_38c580;
        case 0x38c584u: goto label_38c584;
        case 0x38c588u: goto label_38c588;
        case 0x38c58cu: goto label_38c58c;
        case 0x38c590u: goto label_38c590;
        case 0x38c594u: goto label_38c594;
        case 0x38c598u: goto label_38c598;
        case 0x38c59cu: goto label_38c59c;
        case 0x38c5a0u: goto label_38c5a0;
        case 0x38c5a4u: goto label_38c5a4;
        case 0x38c5a8u: goto label_38c5a8;
        case 0x38c5acu: goto label_38c5ac;
        case 0x38c5b0u: goto label_38c5b0;
        case 0x38c5b4u: goto label_38c5b4;
        case 0x38c5b8u: goto label_38c5b8;
        case 0x38c5bcu: goto label_38c5bc;
        case 0x38c5c0u: goto label_38c5c0;
        case 0x38c5c4u: goto label_38c5c4;
        case 0x38c5c8u: goto label_38c5c8;
        case 0x38c5ccu: goto label_38c5cc;
        case 0x38c5d0u: goto label_38c5d0;
        case 0x38c5d4u: goto label_38c5d4;
        case 0x38c5d8u: goto label_38c5d8;
        case 0x38c5dcu: goto label_38c5dc;
        case 0x38c5e0u: goto label_38c5e0;
        case 0x38c5e4u: goto label_38c5e4;
        case 0x38c5e8u: goto label_38c5e8;
        case 0x38c5ecu: goto label_38c5ec;
        case 0x38c5f0u: goto label_38c5f0;
        case 0x38c5f4u: goto label_38c5f4;
        case 0x38c5f8u: goto label_38c5f8;
        case 0x38c5fcu: goto label_38c5fc;
        case 0x38c600u: goto label_38c600;
        case 0x38c604u: goto label_38c604;
        case 0x38c608u: goto label_38c608;
        case 0x38c60cu: goto label_38c60c;
        case 0x38c610u: goto label_38c610;
        case 0x38c614u: goto label_38c614;
        case 0x38c618u: goto label_38c618;
        case 0x38c61cu: goto label_38c61c;
        case 0x38c620u: goto label_38c620;
        case 0x38c624u: goto label_38c624;
        case 0x38c628u: goto label_38c628;
        case 0x38c62cu: goto label_38c62c;
        case 0x38c630u: goto label_38c630;
        case 0x38c634u: goto label_38c634;
        case 0x38c638u: goto label_38c638;
        case 0x38c63cu: goto label_38c63c;
        case 0x38c640u: goto label_38c640;
        case 0x38c644u: goto label_38c644;
        case 0x38c648u: goto label_38c648;
        case 0x38c64cu: goto label_38c64c;
        case 0x38c650u: goto label_38c650;
        case 0x38c654u: goto label_38c654;
        case 0x38c658u: goto label_38c658;
        case 0x38c65cu: goto label_38c65c;
        case 0x38c660u: goto label_38c660;
        case 0x38c664u: goto label_38c664;
        case 0x38c668u: goto label_38c668;
        case 0x38c66cu: goto label_38c66c;
        case 0x38c670u: goto label_38c670;
        case 0x38c674u: goto label_38c674;
        case 0x38c678u: goto label_38c678;
        case 0x38c67cu: goto label_38c67c;
        case 0x38c680u: goto label_38c680;
        case 0x38c684u: goto label_38c684;
        case 0x38c688u: goto label_38c688;
        case 0x38c68cu: goto label_38c68c;
        case 0x38c690u: goto label_38c690;
        case 0x38c694u: goto label_38c694;
        case 0x38c698u: goto label_38c698;
        case 0x38c69cu: goto label_38c69c;
        case 0x38c6a0u: goto label_38c6a0;
        case 0x38c6a4u: goto label_38c6a4;
        case 0x38c6a8u: goto label_38c6a8;
        case 0x38c6acu: goto label_38c6ac;
        case 0x38c6b0u: goto label_38c6b0;
        case 0x38c6b4u: goto label_38c6b4;
        case 0x38c6b8u: goto label_38c6b8;
        case 0x38c6bcu: goto label_38c6bc;
        case 0x38c6c0u: goto label_38c6c0;
        case 0x38c6c4u: goto label_38c6c4;
        case 0x38c6c8u: goto label_38c6c8;
        case 0x38c6ccu: goto label_38c6cc;
        case 0x38c6d0u: goto label_38c6d0;
        case 0x38c6d4u: goto label_38c6d4;
        case 0x38c6d8u: goto label_38c6d8;
        case 0x38c6dcu: goto label_38c6dc;
        case 0x38c6e0u: goto label_38c6e0;
        case 0x38c6e4u: goto label_38c6e4;
        case 0x38c6e8u: goto label_38c6e8;
        case 0x38c6ecu: goto label_38c6ec;
        case 0x38c6f0u: goto label_38c6f0;
        case 0x38c6f4u: goto label_38c6f4;
        case 0x38c6f8u: goto label_38c6f8;
        case 0x38c6fcu: goto label_38c6fc;
        case 0x38c700u: goto label_38c700;
        case 0x38c704u: goto label_38c704;
        case 0x38c708u: goto label_38c708;
        case 0x38c70cu: goto label_38c70c;
        case 0x38c710u: goto label_38c710;
        case 0x38c714u: goto label_38c714;
        case 0x38c718u: goto label_38c718;
        case 0x38c71cu: goto label_38c71c;
        case 0x38c720u: goto label_38c720;
        case 0x38c724u: goto label_38c724;
        case 0x38c728u: goto label_38c728;
        case 0x38c72cu: goto label_38c72c;
        case 0x38c730u: goto label_38c730;
        case 0x38c734u: goto label_38c734;
        case 0x38c738u: goto label_38c738;
        case 0x38c73cu: goto label_38c73c;
        case 0x38c740u: goto label_38c740;
        case 0x38c744u: goto label_38c744;
        case 0x38c748u: goto label_38c748;
        case 0x38c74cu: goto label_38c74c;
        case 0x38c750u: goto label_38c750;
        case 0x38c754u: goto label_38c754;
        case 0x38c758u: goto label_38c758;
        case 0x38c75cu: goto label_38c75c;
        case 0x38c760u: goto label_38c760;
        case 0x38c764u: goto label_38c764;
        case 0x38c768u: goto label_38c768;
        case 0x38c76cu: goto label_38c76c;
        case 0x38c770u: goto label_38c770;
        case 0x38c774u: goto label_38c774;
        case 0x38c778u: goto label_38c778;
        case 0x38c77cu: goto label_38c77c;
        case 0x38c780u: goto label_38c780;
        case 0x38c784u: goto label_38c784;
        case 0x38c788u: goto label_38c788;
        case 0x38c78cu: goto label_38c78c;
        case 0x38c790u: goto label_38c790;
        case 0x38c794u: goto label_38c794;
        case 0x38c798u: goto label_38c798;
        case 0x38c79cu: goto label_38c79c;
        case 0x38c7a0u: goto label_38c7a0;
        case 0x38c7a4u: goto label_38c7a4;
        case 0x38c7a8u: goto label_38c7a8;
        case 0x38c7acu: goto label_38c7ac;
        case 0x38c7b0u: goto label_38c7b0;
        case 0x38c7b4u: goto label_38c7b4;
        case 0x38c7b8u: goto label_38c7b8;
        case 0x38c7bcu: goto label_38c7bc;
        case 0x38c7c0u: goto label_38c7c0;
        case 0x38c7c4u: goto label_38c7c4;
        case 0x38c7c8u: goto label_38c7c8;
        case 0x38c7ccu: goto label_38c7cc;
        case 0x38c7d0u: goto label_38c7d0;
        case 0x38c7d4u: goto label_38c7d4;
        case 0x38c7d8u: goto label_38c7d8;
        case 0x38c7dcu: goto label_38c7dc;
        default: break;
    }

    ctx->pc = 0x38c580u;

label_38c580:
    // 0x38c580: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_38c584:
    // 0x38c584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c588:
    // 0x38c588: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38c58c:
    // 0x38c58c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38c58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_38c590:
    // 0x38c590: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38c590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38c594:
    // 0x38c594: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38c594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38c598:
    // 0x38c598: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38c598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c59c:
    // 0x38c59c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38c5a0:
    // 0x38c5a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38c5a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38c5a4:
    // 0x38c5a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38c5a8:
    // 0x38c5a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38c5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38c5ac:
    // 0x38c5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38c5b0:
    // 0x38c5b0: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x38c5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_38c5b4:
    // 0x38c5b4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x38c5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38c5b8:
    // 0x38c5b8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x38c5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_38c5bc:
    // 0x38c5bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c5c0:
    // 0x38c5c0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x38c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_38c5c4:
    // 0x38c5c4: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x38c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_38c5c8:
    // 0x38c5c8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x38c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_38c5cc:
    // 0x38c5cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38c5d0:
    // 0x38c5d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_38c5d4:
    // 0x38c5d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38c5d8:
    // 0x38c5d8: 0xc44c0070  lwc1        $f12, 0x70($v0)
    ctx->pc = 0x38c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38c5dc:
    // 0x38c5dc: 0xc44d0074  lwc1        $f13, 0x74($v0)
    ctx->pc = 0x38c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38c5e0:
    // 0x38c5e0: 0xc44e0078  lwc1        $f14, 0x78($v0)
    ctx->pc = 0x38c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38c5e4:
    // 0x38c5e4: 0xc04cbd8  jal         func_132F60
label_38c5e8:
    if (ctx->pc == 0x38C5E8u) {
        ctx->pc = 0x38C5E8u;
            // 0x38c5e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x38C5ECu;
        goto label_38c5ec;
    }
    ctx->pc = 0x38C5E4u;
    SET_GPR_U32(ctx, 31, 0x38C5ECu);
    ctx->pc = 0x38C5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C5E4u;
            // 0x38c5e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C5ECu; }
        if (ctx->pc != 0x38C5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C5ECu; }
        if (ctx->pc != 0x38C5ECu) { return; }
    }
    ctx->pc = 0x38C5ECu;
label_38c5ec:
    // 0x38c5ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38c5f0:
    // 0x38c5f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c5f4:
    // 0x38c5f4: 0xc04cca0  jal         func_133280
label_38c5f8:
    if (ctx->pc == 0x38C5F8u) {
        ctx->pc = 0x38C5F8u;
            // 0x38c5f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C5FCu;
        goto label_38c5fc;
    }
    ctx->pc = 0x38C5F4u;
    SET_GPR_U32(ctx, 31, 0x38C5FCu);
    ctx->pc = 0x38C5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C5F4u;
            // 0x38c5f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C5FCu; }
        if (ctx->pc != 0x38C5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C5FCu; }
        if (ctx->pc != 0x38C5FCu) { return; }
    }
    ctx->pc = 0x38C5FCu;
label_38c5fc:
    // 0x38c5fc: 0xc04ab66  jal         func_12AD98
label_38c600:
    if (ctx->pc == 0x38C600u) {
        ctx->pc = 0x38C604u;
        goto label_38c604;
    }
    ctx->pc = 0x38C5FCu;
    SET_GPR_U32(ctx, 31, 0x38C604u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C604u; }
        if (ctx->pc != 0x38C604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C604u; }
        if (ctx->pc != 0x38C604u) { return; }
    }
    ctx->pc = 0x38C604u;
label_38c604:
    // 0x38c604: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38c604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38c608:
    // 0x38c608: 0xc04ab66  jal         func_12AD98
label_38c60c:
    if (ctx->pc == 0x38C60Cu) {
        ctx->pc = 0x38C60Cu;
            // 0x38c60c: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38C610u;
        goto label_38c610;
    }
    ctx->pc = 0x38C608u;
    SET_GPR_U32(ctx, 31, 0x38C610u);
    ctx->pc = 0x38C60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C608u;
            // 0x38c60c: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C610u; }
        if (ctx->pc != 0x38C610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C610u; }
        if (ctx->pc != 0x38C610u) { return; }
    }
    ctx->pc = 0x38C610u;
label_38c610:
    // 0x38c610: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x38c610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_38c614:
    // 0x38c614: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38c614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38c618:
    // 0x38c618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38c618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c61c:
    // 0x38c61c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38c620:
    if (ctx->pc == 0x38C620u) {
        ctx->pc = 0x38C620u;
            // 0x38c620: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38C624u;
        goto label_38c624;
    }
    ctx->pc = 0x38C61Cu;
    {
        const bool branch_taken_0x38c61c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38c61c) {
            ctx->pc = 0x38C620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C61Cu;
            // 0x38c620: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C630u;
            goto label_38c630;
        }
    }
    ctx->pc = 0x38C624u;
label_38c624:
    // 0x38c624: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c628:
    // 0x38c628: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c62c:
    if (ctx->pc == 0x38C62Cu) {
        ctx->pc = 0x38C62Cu;
            // 0x38c62c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38C630u;
        goto label_38c630;
    }
    ctx->pc = 0x38C628u;
    {
        const bool branch_taken_0x38c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C628u;
            // 0x38c62c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c628) {
            ctx->pc = 0x38C648u;
            goto label_38c648;
        }
    }
    ctx->pc = 0x38C630u;
label_38c630:
    // 0x38c630: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38c630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38c634:
    // 0x38c634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c638:
    // 0x38c638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c63c:
    // 0x38c63c: 0x0  nop
    ctx->pc = 0x38c63cu;
    // NOP
label_38c640:
    // 0x38c640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38c640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38c644:
    // 0x38c644: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38c644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38c648:
    // 0x38c648: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38c648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38c64c:
    // 0x38c64c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_38c650:
    // 0x38c650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c654:
    // 0x38c654: 0x34430347  ori         $v1, $v0, 0x347
    ctx->pc = 0x38c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)839);
label_38c658:
    // 0x38c658: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c658u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c65c:
    // 0x38c65c: 0x0  nop
    ctx->pc = 0x38c65cu;
    // NOP
label_38c660:
    // 0x38c660: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38c660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c664:
    // 0x38c664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c668:
    // 0x38c668: 0x0  nop
    ctx->pc = 0x38c668u;
    // NOP
label_38c66c:
    // 0x38c66c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38c66cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c670:
    // 0x38c670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c674:
    // 0x38c674: 0x0  nop
    ctx->pc = 0x38c674u;
    // NOP
label_38c678:
    // 0x38c678: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x38c678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38c67c:
    // 0x38c67c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x38c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c680:
    // 0x38c680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38c680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c684:
    // 0x38c684: 0xc04ab66  jal         func_12AD98
label_38c688:
    if (ctx->pc == 0x38C688u) {
        ctx->pc = 0x38C688u;
            // 0x38c688: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x38C68Cu;
        goto label_38c68c;
    }
    ctx->pc = 0x38C684u;
    SET_GPR_U32(ctx, 31, 0x38C68Cu);
    ctx->pc = 0x38C688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C684u;
            // 0x38c688: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C68Cu; }
        if (ctx->pc != 0x38C68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C68Cu; }
        if (ctx->pc != 0x38C68Cu) { return; }
    }
    ctx->pc = 0x38C68Cu;
label_38c68c:
    // 0x38c68c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38c68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38c690:
    // 0x38c690: 0xc04ab66  jal         func_12AD98
label_38c694:
    if (ctx->pc == 0x38C694u) {
        ctx->pc = 0x38C694u;
            // 0x38c694: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38C698u;
        goto label_38c698;
    }
    ctx->pc = 0x38C690u;
    SET_GPR_U32(ctx, 31, 0x38C698u);
    ctx->pc = 0x38C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C690u;
            // 0x38c694: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C698u; }
        if (ctx->pc != 0x38C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C698u; }
        if (ctx->pc != 0x38C698u) { return; }
    }
    ctx->pc = 0x38C698u;
label_38c698:
    // 0x38c698: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x38c698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_38c69c:
    // 0x38c69c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38c6a0:
    // 0x38c6a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38c6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c6a4:
    // 0x38c6a4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38c6a8:
    if (ctx->pc == 0x38C6A8u) {
        ctx->pc = 0x38C6A8u;
            // 0x38c6a8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38C6ACu;
        goto label_38c6ac;
    }
    ctx->pc = 0x38C6A4u;
    {
        const bool branch_taken_0x38c6a4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38c6a4) {
            ctx->pc = 0x38C6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C6A4u;
            // 0x38c6a8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C6B8u;
            goto label_38c6b8;
        }
    }
    ctx->pc = 0x38C6ACu;
label_38c6ac:
    // 0x38c6ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c6acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c6b0:
    // 0x38c6b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c6b4:
    if (ctx->pc == 0x38C6B4u) {
        ctx->pc = 0x38C6B4u;
            // 0x38c6b4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38C6B8u;
        goto label_38c6b8;
    }
    ctx->pc = 0x38C6B0u;
    {
        const bool branch_taken_0x38c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C6B0u;
            // 0x38c6b4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6b0) {
            ctx->pc = 0x38C6D0u;
            goto label_38c6d0;
        }
    }
    ctx->pc = 0x38C6B8u;
label_38c6b8:
    // 0x38c6b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38c6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38c6bc:
    // 0x38c6bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c6c0:
    // 0x38c6c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c6c4:
    // 0x38c6c4: 0x0  nop
    ctx->pc = 0x38c6c4u;
    // NOP
label_38c6c8:
    // 0x38c6c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38c6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38c6cc:
    // 0x38c6cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38c6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38c6d0:
    // 0x38c6d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38c6d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38c6d4:
    // 0x38c6d4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_38c6d8:
    // 0x38c6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c6dc:
    // 0x38c6dc: 0x34430347  ori         $v1, $v0, 0x347
    ctx->pc = 0x38c6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)839);
label_38c6e0:
    // 0x38c6e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c6e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c6e4:
    // 0x38c6e4: 0x0  nop
    ctx->pc = 0x38c6e4u;
    // NOP
label_38c6e8:
    // 0x38c6e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38c6e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c6ec:
    // 0x38c6ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c6f0:
    // 0x38c6f0: 0x0  nop
    ctx->pc = 0x38c6f0u;
    // NOP
label_38c6f4:
    // 0x38c6f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38c6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c6f8:
    // 0x38c6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c6fc:
    // 0x38c6fc: 0x0  nop
    ctx->pc = 0x38c6fcu;
    // NOP
label_38c700:
    // 0x38c700: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x38c700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38c704:
    // 0x38c704: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x38c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c708:
    // 0x38c708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38c708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c70c:
    // 0x38c70c: 0xc04ab66  jal         func_12AD98
label_38c710:
    if (ctx->pc == 0x38C710u) {
        ctx->pc = 0x38C710u;
            // 0x38c710: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->pc = 0x38C714u;
        goto label_38c714;
    }
    ctx->pc = 0x38C70Cu;
    SET_GPR_U32(ctx, 31, 0x38C714u);
    ctx->pc = 0x38C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C70Cu;
            // 0x38c710: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C714u; }
        if (ctx->pc != 0x38C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C714u; }
        if (ctx->pc != 0x38C714u) { return; }
    }
    ctx->pc = 0x38C714u;
label_38c714:
    // 0x38c714: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38c714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38c718:
    // 0x38c718: 0xc04ab66  jal         func_12AD98
label_38c71c:
    if (ctx->pc == 0x38C71Cu) {
        ctx->pc = 0x38C71Cu;
            // 0x38c71c: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38C720u;
        goto label_38c720;
    }
    ctx->pc = 0x38C718u;
    SET_GPR_U32(ctx, 31, 0x38C720u);
    ctx->pc = 0x38C71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C718u;
            // 0x38c71c: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C720u; }
        if (ctx->pc != 0x38C720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C720u; }
        if (ctx->pc != 0x38C720u) { return; }
    }
    ctx->pc = 0x38C720u;
label_38c720:
    // 0x38c720: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x38c720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_38c724:
    // 0x38c724: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38c724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38c728:
    // 0x38c728: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38c728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c72c:
    // 0x38c72c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38c730:
    if (ctx->pc == 0x38C730u) {
        ctx->pc = 0x38C730u;
            // 0x38c730: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38C734u;
        goto label_38c734;
    }
    ctx->pc = 0x38C72Cu;
    {
        const bool branch_taken_0x38c72c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38c72c) {
            ctx->pc = 0x38C730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C72Cu;
            // 0x38c730: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C740u;
            goto label_38c740;
        }
    }
    ctx->pc = 0x38C734u;
label_38c734:
    // 0x38c734: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c734u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c738:
    // 0x38c738: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c73c:
    if (ctx->pc == 0x38C73Cu) {
        ctx->pc = 0x38C73Cu;
            // 0x38c73c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38C740u;
        goto label_38c740;
    }
    ctx->pc = 0x38C738u;
    {
        const bool branch_taken_0x38c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C738u;
            // 0x38c73c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c738) {
            ctx->pc = 0x38C758u;
            goto label_38c758;
        }
    }
    ctx->pc = 0x38C740u;
label_38c740:
    // 0x38c740: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38c744:
    // 0x38c744: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c748:
    // 0x38c748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c74c:
    // 0x38c74c: 0x0  nop
    ctx->pc = 0x38c74cu;
    // NOP
label_38c750:
    // 0x38c750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38c750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38c754:
    // 0x38c754: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38c754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38c758:
    // 0x38c758: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38c758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38c75c:
    // 0x38c75c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_38c760:
    // 0x38c760: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c764:
    // 0x38c764: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x38c764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38c768:
    // 0x38c768: 0x34430347  ori         $v1, $v0, 0x347
    ctx->pc = 0x38c768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)839);
label_38c76c:
    // 0x38c76c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38c76cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c770:
    // 0x38c770: 0x0  nop
    ctx->pc = 0x38c770u;
    // NOP
label_38c774:
    // 0x38c774: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38c774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c778:
    // 0x38c778: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c77c:
    // 0x38c77c: 0x0  nop
    ctx->pc = 0x38c77cu;
    // NOP
label_38c780:
    // 0x38c780: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38c780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c784:
    // 0x38c784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c788:
    // 0x38c788: 0x0  nop
    ctx->pc = 0x38c788u;
    // NOP
label_38c78c:
    // 0x38c78c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x38c78cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38c790:
    // 0x38c790: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x38c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c794:
    // 0x38c794: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38c794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c798:
    // 0x38c798: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x38c798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_38c79c:
    // 0x38c79c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c7a0:
    // 0x38c7a0: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38c7a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38c7a4:
    // 0x38c7a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x38c7a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_38c7a8:
    // 0x38c7a8: 0x320f809  jalr        $t9
label_38c7ac:
    if (ctx->pc == 0x38C7ACu) {
        ctx->pc = 0x38C7ACu;
            // 0x38c7ac: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38C7B0u;
        goto label_38c7b0;
    }
    ctx->pc = 0x38C7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C7B0u);
        ctx->pc = 0x38C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C7A8u;
            // 0x38c7ac: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C7B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C7B0u; }
            if (ctx->pc != 0x38C7B0u) { return; }
        }
        }
    }
    ctx->pc = 0x38C7B0u;
label_38c7b0:
    // 0x38c7b0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c7b4:
    // 0x38c7b4: 0x1e00ff81  bgtz        $s0, . + 4 + (-0x7F << 2)
label_38c7b8:
    if (ctx->pc == 0x38C7B8u) {
        ctx->pc = 0x38C7B8u;
            // 0x38c7b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38C7BCu;
        goto label_38c7bc;
    }
    ctx->pc = 0x38C7B4u;
    {
        const bool branch_taken_0x38c7b4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38C7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C7B4u;
            // 0x38c7b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7b4) {
            ctx->pc = 0x38C5BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38c5bc;
        }
    }
    ctx->pc = 0x38C7BCu;
label_38c7bc:
    // 0x38c7bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38c7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38c7c0:
    // 0x38c7c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38c7c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38c7c4:
    // 0x38c7c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38c7c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38c7c8:
    // 0x38c7c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38c7c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38c7cc:
    // 0x38c7cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38c7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38c7d0:
    // 0x38c7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38c7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38c7d4:
    // 0x38c7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38c7d8:
    // 0x38c7d8: 0x3e00008  jr          $ra
label_38c7dc:
    if (ctx->pc == 0x38C7DCu) {
        ctx->pc = 0x38C7DCu;
            // 0x38c7dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x38C7E0u;
        goto label_fallthrough_0x38c7d8;
    }
    ctx->pc = 0x38C7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C7D8u;
            // 0x38c7dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x38c7d8:
    ctx->pc = 0x38C7E0u;
}
