#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF5A0
// Address: 0x2bf5a0 - 0x2bf830
void sub_002BF5A0_0x2bf5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF5A0_0x2bf5a0");
#endif

    switch (ctx->pc) {
        case 0x2bf5a0u: goto label_2bf5a0;
        case 0x2bf5a4u: goto label_2bf5a4;
        case 0x2bf5a8u: goto label_2bf5a8;
        case 0x2bf5acu: goto label_2bf5ac;
        case 0x2bf5b0u: goto label_2bf5b0;
        case 0x2bf5b4u: goto label_2bf5b4;
        case 0x2bf5b8u: goto label_2bf5b8;
        case 0x2bf5bcu: goto label_2bf5bc;
        case 0x2bf5c0u: goto label_2bf5c0;
        case 0x2bf5c4u: goto label_2bf5c4;
        case 0x2bf5c8u: goto label_2bf5c8;
        case 0x2bf5ccu: goto label_2bf5cc;
        case 0x2bf5d0u: goto label_2bf5d0;
        case 0x2bf5d4u: goto label_2bf5d4;
        case 0x2bf5d8u: goto label_2bf5d8;
        case 0x2bf5dcu: goto label_2bf5dc;
        case 0x2bf5e0u: goto label_2bf5e0;
        case 0x2bf5e4u: goto label_2bf5e4;
        case 0x2bf5e8u: goto label_2bf5e8;
        case 0x2bf5ecu: goto label_2bf5ec;
        case 0x2bf5f0u: goto label_2bf5f0;
        case 0x2bf5f4u: goto label_2bf5f4;
        case 0x2bf5f8u: goto label_2bf5f8;
        case 0x2bf5fcu: goto label_2bf5fc;
        case 0x2bf600u: goto label_2bf600;
        case 0x2bf604u: goto label_2bf604;
        case 0x2bf608u: goto label_2bf608;
        case 0x2bf60cu: goto label_2bf60c;
        case 0x2bf610u: goto label_2bf610;
        case 0x2bf614u: goto label_2bf614;
        case 0x2bf618u: goto label_2bf618;
        case 0x2bf61cu: goto label_2bf61c;
        case 0x2bf620u: goto label_2bf620;
        case 0x2bf624u: goto label_2bf624;
        case 0x2bf628u: goto label_2bf628;
        case 0x2bf62cu: goto label_2bf62c;
        case 0x2bf630u: goto label_2bf630;
        case 0x2bf634u: goto label_2bf634;
        case 0x2bf638u: goto label_2bf638;
        case 0x2bf63cu: goto label_2bf63c;
        case 0x2bf640u: goto label_2bf640;
        case 0x2bf644u: goto label_2bf644;
        case 0x2bf648u: goto label_2bf648;
        case 0x2bf64cu: goto label_2bf64c;
        case 0x2bf650u: goto label_2bf650;
        case 0x2bf654u: goto label_2bf654;
        case 0x2bf658u: goto label_2bf658;
        case 0x2bf65cu: goto label_2bf65c;
        case 0x2bf660u: goto label_2bf660;
        case 0x2bf664u: goto label_2bf664;
        case 0x2bf668u: goto label_2bf668;
        case 0x2bf66cu: goto label_2bf66c;
        case 0x2bf670u: goto label_2bf670;
        case 0x2bf674u: goto label_2bf674;
        case 0x2bf678u: goto label_2bf678;
        case 0x2bf67cu: goto label_2bf67c;
        case 0x2bf680u: goto label_2bf680;
        case 0x2bf684u: goto label_2bf684;
        case 0x2bf688u: goto label_2bf688;
        case 0x2bf68cu: goto label_2bf68c;
        case 0x2bf690u: goto label_2bf690;
        case 0x2bf694u: goto label_2bf694;
        case 0x2bf698u: goto label_2bf698;
        case 0x2bf69cu: goto label_2bf69c;
        case 0x2bf6a0u: goto label_2bf6a0;
        case 0x2bf6a4u: goto label_2bf6a4;
        case 0x2bf6a8u: goto label_2bf6a8;
        case 0x2bf6acu: goto label_2bf6ac;
        case 0x2bf6b0u: goto label_2bf6b0;
        case 0x2bf6b4u: goto label_2bf6b4;
        case 0x2bf6b8u: goto label_2bf6b8;
        case 0x2bf6bcu: goto label_2bf6bc;
        case 0x2bf6c0u: goto label_2bf6c0;
        case 0x2bf6c4u: goto label_2bf6c4;
        case 0x2bf6c8u: goto label_2bf6c8;
        case 0x2bf6ccu: goto label_2bf6cc;
        case 0x2bf6d0u: goto label_2bf6d0;
        case 0x2bf6d4u: goto label_2bf6d4;
        case 0x2bf6d8u: goto label_2bf6d8;
        case 0x2bf6dcu: goto label_2bf6dc;
        case 0x2bf6e0u: goto label_2bf6e0;
        case 0x2bf6e4u: goto label_2bf6e4;
        case 0x2bf6e8u: goto label_2bf6e8;
        case 0x2bf6ecu: goto label_2bf6ec;
        case 0x2bf6f0u: goto label_2bf6f0;
        case 0x2bf6f4u: goto label_2bf6f4;
        case 0x2bf6f8u: goto label_2bf6f8;
        case 0x2bf6fcu: goto label_2bf6fc;
        case 0x2bf700u: goto label_2bf700;
        case 0x2bf704u: goto label_2bf704;
        case 0x2bf708u: goto label_2bf708;
        case 0x2bf70cu: goto label_2bf70c;
        case 0x2bf710u: goto label_2bf710;
        case 0x2bf714u: goto label_2bf714;
        case 0x2bf718u: goto label_2bf718;
        case 0x2bf71cu: goto label_2bf71c;
        case 0x2bf720u: goto label_2bf720;
        case 0x2bf724u: goto label_2bf724;
        case 0x2bf728u: goto label_2bf728;
        case 0x2bf72cu: goto label_2bf72c;
        case 0x2bf730u: goto label_2bf730;
        case 0x2bf734u: goto label_2bf734;
        case 0x2bf738u: goto label_2bf738;
        case 0x2bf73cu: goto label_2bf73c;
        case 0x2bf740u: goto label_2bf740;
        case 0x2bf744u: goto label_2bf744;
        case 0x2bf748u: goto label_2bf748;
        case 0x2bf74cu: goto label_2bf74c;
        case 0x2bf750u: goto label_2bf750;
        case 0x2bf754u: goto label_2bf754;
        case 0x2bf758u: goto label_2bf758;
        case 0x2bf75cu: goto label_2bf75c;
        case 0x2bf760u: goto label_2bf760;
        case 0x2bf764u: goto label_2bf764;
        case 0x2bf768u: goto label_2bf768;
        case 0x2bf76cu: goto label_2bf76c;
        case 0x2bf770u: goto label_2bf770;
        case 0x2bf774u: goto label_2bf774;
        case 0x2bf778u: goto label_2bf778;
        case 0x2bf77cu: goto label_2bf77c;
        case 0x2bf780u: goto label_2bf780;
        case 0x2bf784u: goto label_2bf784;
        case 0x2bf788u: goto label_2bf788;
        case 0x2bf78cu: goto label_2bf78c;
        case 0x2bf790u: goto label_2bf790;
        case 0x2bf794u: goto label_2bf794;
        case 0x2bf798u: goto label_2bf798;
        case 0x2bf79cu: goto label_2bf79c;
        case 0x2bf7a0u: goto label_2bf7a0;
        case 0x2bf7a4u: goto label_2bf7a4;
        case 0x2bf7a8u: goto label_2bf7a8;
        case 0x2bf7acu: goto label_2bf7ac;
        case 0x2bf7b0u: goto label_2bf7b0;
        case 0x2bf7b4u: goto label_2bf7b4;
        case 0x2bf7b8u: goto label_2bf7b8;
        case 0x2bf7bcu: goto label_2bf7bc;
        case 0x2bf7c0u: goto label_2bf7c0;
        case 0x2bf7c4u: goto label_2bf7c4;
        case 0x2bf7c8u: goto label_2bf7c8;
        case 0x2bf7ccu: goto label_2bf7cc;
        case 0x2bf7d0u: goto label_2bf7d0;
        case 0x2bf7d4u: goto label_2bf7d4;
        case 0x2bf7d8u: goto label_2bf7d8;
        case 0x2bf7dcu: goto label_2bf7dc;
        case 0x2bf7e0u: goto label_2bf7e0;
        case 0x2bf7e4u: goto label_2bf7e4;
        case 0x2bf7e8u: goto label_2bf7e8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf7f0u: goto label_2bf7f0;
        case 0x2bf7f4u: goto label_2bf7f4;
        case 0x2bf7f8u: goto label_2bf7f8;
        case 0x2bf7fcu: goto label_2bf7fc;
        case 0x2bf800u: goto label_2bf800;
        case 0x2bf804u: goto label_2bf804;
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf80cu: goto label_2bf80c;
        case 0x2bf810u: goto label_2bf810;
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf81cu: goto label_2bf81c;
        case 0x2bf820u: goto label_2bf820;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf828u: goto label_2bf828;
        case 0x2bf82cu: goto label_2bf82c;
        default: break;
    }

    ctx->pc = 0x2bf5a0u;

label_2bf5a0:
    // 0x2bf5a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bf5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2bf5a4:
    // 0x2bf5a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bf5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2bf5a8:
    // 0x2bf5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bf5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bf5ac:
    // 0x2bf5ac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2bf5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2bf5b0:
    // 0x2bf5b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bf5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bf5b4:
    // 0x2bf5b4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2bf5b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_2bf5b8:
    // 0x2bf5b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bf5bc:
    // 0x2bf5bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bf5c0:
    // 0x2bf5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf5c4:
    // 0x2bf5c4: 0xc0aeaf4  jal         func_2BABD0
label_2bf5c8:
    if (ctx->pc == 0x2BF5C8u) {
        ctx->pc = 0x2BF5C8u;
            // 0x2bf5c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2BF5CCu;
        goto label_2bf5cc;
    }
    ctx->pc = 0x2BF5C4u;
    SET_GPR_U32(ctx, 31, 0x2BF5CCu);
    ctx->pc = 0x2BF5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5C4u;
            // 0x2bf5c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5CCu; }
        if (ctx->pc != 0x2BF5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5CCu; }
        if (ctx->pc != 0x2BF5CCu) { return; }
    }
    ctx->pc = 0x2BF5CCu;
label_2bf5cc:
    // 0x2bf5cc: 0xc0aff20  jal         func_2BFC80
label_2bf5d0:
    if (ctx->pc == 0x2BF5D0u) {
        ctx->pc = 0x2BF5D0u;
            // 0x2bf5d0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BF5D4u;
        goto label_2bf5d4;
    }
    ctx->pc = 0x2BF5CCu;
    SET_GPR_U32(ctx, 31, 0x2BF5D4u);
    ctx->pc = 0x2BF5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5CCu;
            // 0x2bf5d0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC80u;
    if (runtime->hasFunction(0x2BFC80u)) {
        auto targetFn = runtime->lookupFunction(0x2BFC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5D4u; }
        if (ctx->pc != 0x2BF5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFC80_0x2bfc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5D4u; }
        if (ctx->pc != 0x2BF5D4u) { return; }
    }
    ctx->pc = 0x2BF5D4u;
label_2bf5d4:
    // 0x2bf5d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf5d8:
    // 0x2bf5d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf5dc:
    // 0x2bf5dc: 0x24631a30  addiu       $v1, $v1, 0x1A30
    ctx->pc = 0x2bf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6704));
label_2bf5e0:
    // 0x2bf5e0: 0x24421a68  addiu       $v0, $v0, 0x1A68
    ctx->pc = 0x2bf5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6760));
label_2bf5e4:
    // 0x2bf5e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bf5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bf5e8:
    // 0x2bf5e8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2bf5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bf5ec:
    // 0x2bf5ec: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bf5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bf5f0:
    // 0x2bf5f0: 0xc0aff18  jal         func_2BFC60
label_2bf5f4:
    if (ctx->pc == 0x2BF5F4u) {
        ctx->pc = 0x2BF5F4u;
            // 0x2bf5f4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2BF5F8u;
        goto label_2bf5f8;
    }
    ctx->pc = 0x2BF5F0u;
    SET_GPR_U32(ctx, 31, 0x2BF5F8u);
    ctx->pc = 0x2BF5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5F0u;
            // 0x2bf5f4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC60u;
    if (runtime->hasFunction(0x2BFC60u)) {
        auto targetFn = runtime->lookupFunction(0x2BFC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5F8u; }
        if (ctx->pc != 0x2BF5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFC60_0x2bfc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5F8u; }
        if (ctx->pc != 0x2BF5F8u) { return; }
    }
    ctx->pc = 0x2BF5F8u;
label_2bf5f8:
    // 0x2bf5f8: 0xc0aff18  jal         func_2BFC60
label_2bf5fc:
    if (ctx->pc == 0x2BF5FCu) {
        ctx->pc = 0x2BF5FCu;
            // 0x2bf5fc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BF600u;
        goto label_2bf600;
    }
    ctx->pc = 0x2BF5F8u;
    SET_GPR_U32(ctx, 31, 0x2BF600u);
    ctx->pc = 0x2BF5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5F8u;
            // 0x2bf5fc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC60u;
    if (runtime->hasFunction(0x2BFC60u)) {
        auto targetFn = runtime->lookupFunction(0x2BFC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF600u; }
        if (ctx->pc != 0x2BF600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFC60_0x2bfc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF600u; }
        if (ctx->pc != 0x2BF600u) { return; }
    }
    ctx->pc = 0x2BF600u;
label_2bf600:
    // 0x2bf600: 0xc0aff14  jal         func_2BFC50
label_2bf604:
    if (ctx->pc == 0x2BF604u) {
        ctx->pc = 0x2BF604u;
            // 0x2bf604: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2BF608u;
        goto label_2bf608;
    }
    ctx->pc = 0x2BF600u;
    SET_GPR_U32(ctx, 31, 0x2BF608u);
    ctx->pc = 0x2BF604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF600u;
            // 0x2bf604: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC50u;
    if (runtime->hasFunction(0x2BFC50u)) {
        auto targetFn = runtime->lookupFunction(0x2BFC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF608u; }
        if (ctx->pc != 0x2BF608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFC50_0x2bfc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF608u; }
        if (ctx->pc != 0x2BF608u) { return; }
    }
    ctx->pc = 0x2BF608u;
label_2bf608:
    // 0x2bf608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf60c:
    // 0x2bf60c: 0xc0aeac0  jal         func_2BAB00
label_2bf610:
    if (ctx->pc == 0x2BF610u) {
        ctx->pc = 0x2BF610u;
            // 0x2bf610: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2BF614u;
        goto label_2bf614;
    }
    ctx->pc = 0x2BF60Cu;
    SET_GPR_U32(ctx, 31, 0x2BF614u);
    ctx->pc = 0x2BF610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF60Cu;
            // 0x2bf610: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF614u; }
        if (ctx->pc != 0x2BF614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF614u; }
        if (ctx->pc != 0x2BF614u) { return; }
    }
    ctx->pc = 0x2BF614u;
label_2bf614:
    // 0x2bf614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf618:
    // 0x2bf618: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2bf61c:
    if (ctx->pc == 0x2BF61Cu) {
        ctx->pc = 0x2BF620u;
        goto label_2bf620;
    }
    ctx->pc = 0x2BF618u;
    {
        const bool branch_taken_0x2bf618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf618) {
            ctx->pc = 0x2BF698u;
            goto label_2bf698;
        }
    }
    ctx->pc = 0x2BF620u;
label_2bf620:
    // 0x2bf620: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2bf620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2bf624:
    // 0x2bf624: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2bf628:
    // 0x2bf628: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bf628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bf62c:
    // 0x2bf62c: 0xc040138  jal         func_1004E0
label_2bf630:
    if (ctx->pc == 0x2BF630u) {
        ctx->pc = 0x2BF630u;
            // 0x2bf630: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2BF634u;
        goto label_2bf634;
    }
    ctx->pc = 0x2BF62Cu;
    SET_GPR_U32(ctx, 31, 0x2BF634u);
    ctx->pc = 0x2BF630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF62Cu;
            // 0x2bf630: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF634u; }
        if (ctx->pc != 0x2BF634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF634u; }
        if (ctx->pc != 0x2BF634u) { return; }
    }
    ctx->pc = 0x2BF634u;
label_2bf634:
    // 0x2bf634: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bf634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bf638:
    // 0x2bf638: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bf638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2bf63c:
    // 0x2bf63c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf640:
    // 0x2bf640: 0x24a5fa90  addiu       $a1, $a1, -0x570
    ctx->pc = 0x2bf640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965904));
label_2bf644:
    // 0x2bf644: 0x24c6f930  addiu       $a2, $a2, -0x6D0
    ctx->pc = 0x2bf644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965552));
label_2bf648:
    // 0x2bf648: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x2bf648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2bf64c:
    // 0x2bf64c: 0xc040840  jal         func_102100
label_2bf650:
    if (ctx->pc == 0x2BF650u) {
        ctx->pc = 0x2BF650u;
            // 0x2bf650: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF654u;
        goto label_2bf654;
    }
    ctx->pc = 0x2BF64Cu;
    SET_GPR_U32(ctx, 31, 0x2BF654u);
    ctx->pc = 0x2BF650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF64Cu;
            // 0x2bf650: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF654u; }
        if (ctx->pc != 0x2BF654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF654u; }
        if (ctx->pc != 0x2BF654u) { return; }
    }
    ctx->pc = 0x2BF654u;
label_2bf654:
    // 0x2bf654: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2bf654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2bf658:
    // 0x2bf658: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bf658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf65c:
    // 0x2bf65c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2bf65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bf660:
    // 0x2bf660: 0xc0afe48  jal         func_2BF920
label_2bf664:
    if (ctx->pc == 0x2BF664u) {
        ctx->pc = 0x2BF664u;
            // 0x2bf664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF668u;
        goto label_2bf668;
    }
    ctx->pc = 0x2BF660u;
    SET_GPR_U32(ctx, 31, 0x2BF668u);
    ctx->pc = 0x2BF664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF660u;
            // 0x2bf664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF920u;
    if (runtime->hasFunction(0x2BF920u)) {
        auto targetFn = runtime->lookupFunction(0x2BF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF668u; }
        if (ctx->pc != 0x2BF668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF920_0x2bf920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF668u; }
        if (ctx->pc != 0x2BF668u) { return; }
    }
    ctx->pc = 0x2BF668u;
label_2bf668:
    // 0x2bf668: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2bf668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bf66c:
    // 0x2bf66c: 0xc0afe48  jal         func_2BF920
label_2bf670:
    if (ctx->pc == 0x2BF670u) {
        ctx->pc = 0x2BF670u;
            // 0x2bf670: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF674u;
        goto label_2bf674;
    }
    ctx->pc = 0x2BF66Cu;
    SET_GPR_U32(ctx, 31, 0x2BF674u);
    ctx->pc = 0x2BF670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF66Cu;
            // 0x2bf670: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF920u;
    if (runtime->hasFunction(0x2BF920u)) {
        auto targetFn = runtime->lookupFunction(0x2BF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF674u; }
        if (ctx->pc != 0x2BF674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF920_0x2bf920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF674u; }
        if (ctx->pc != 0x2BF674u) { return; }
    }
    ctx->pc = 0x2BF674u;
label_2bf674:
    // 0x2bf674: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bf674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf678:
    // 0x2bf678: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2bf678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bf67c:
    // 0x2bf67c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2bf67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2bf680:
    // 0x2bf680: 0xc0afe40  jal         func_2BF900
label_2bf684:
    if (ctx->pc == 0x2BF684u) {
        ctx->pc = 0x2BF684u;
            // 0x2bf684: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x2BF688u;
        goto label_2bf688;
    }
    ctx->pc = 0x2BF680u;
    SET_GPR_U32(ctx, 31, 0x2BF688u);
    ctx->pc = 0x2BF684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF680u;
            // 0x2bf684: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF900u;
    if (runtime->hasFunction(0x2BF900u)) {
        auto targetFn = runtime->lookupFunction(0x2BF900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF688u; }
        if (ctx->pc != 0x2BF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF900_0x2bf900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF688u; }
        if (ctx->pc != 0x2BF688u) { return; }
    }
    ctx->pc = 0x2BF688u;
label_2bf688:
    // 0x2bf688: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2bf688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2bf68c:
    // 0x2bf68c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2bf68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2bf690:
    // 0x2bf690: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2bf694:
    if (ctx->pc == 0x2BF694u) {
        ctx->pc = 0x2BF694u;
            // 0x2bf694: 0x26730120  addiu       $s3, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->pc = 0x2BF698u;
        goto label_2bf698;
    }
    ctx->pc = 0x2BF690u;
    {
        const bool branch_taken_0x2bf690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF690u;
            // 0x2bf694: 0x26730120  addiu       $s3, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf690) {
            ctx->pc = 0x2BF678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bf678;
        }
    }
    ctx->pc = 0x2BF698u;
label_2bf698:
    // 0x2bf698: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bf698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bf69c:
    // 0x2bf69c: 0x24426350  addiu       $v0, $v0, 0x6350
    ctx->pc = 0x2bf69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
label_2bf6a0:
    // 0x2bf6a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bf6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bf6a4:
    // 0x2bf6a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bf6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bf6a8:
    // 0x2bf6a8: 0x24426388  addiu       $v0, $v0, 0x6388
    ctx->pc = 0x2bf6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25480));
label_2bf6ac:
    // 0x2bf6ac: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bf6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bf6b0:
    // 0x2bf6b0: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x2bf6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_2bf6b4:
    // 0x2bf6b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bf6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf6b8:
    // 0x2bf6b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bf6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bf6bc:
    // 0x2bf6bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf6bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bf6c0:
    // 0x2bf6c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf6c4:
    // 0x2bf6c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf6c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf6c8:
    // 0x2bf6c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf6cc:
    // 0x2bf6cc: 0x3e00008  jr          $ra
label_2bf6d0:
    if (ctx->pc == 0x2BF6D0u) {
        ctx->pc = 0x2BF6D0u;
            // 0x2bf6d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2BF6D4u;
        goto label_2bf6d4;
    }
    ctx->pc = 0x2BF6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF6CCu;
            // 0x2bf6d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF6D4u;
label_2bf6d4:
    // 0x2bf6d4: 0x0  nop
    ctx->pc = 0x2bf6d4u;
    // NOP
label_2bf6d8:
    // 0x2bf6d8: 0x0  nop
    ctx->pc = 0x2bf6d8u;
    // NOP
label_2bf6dc:
    // 0x2bf6dc: 0x0  nop
    ctx->pc = 0x2bf6dcu;
    // NOP
label_2bf6e0:
    // 0x2bf6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bf6e4:
    // 0x2bf6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bf6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bf6e8:
    // 0x2bf6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bf6ec:
    // 0x2bf6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bf6f0:
    // 0x2bf6f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf6f4:
    // 0x2bf6f4: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_2bf6f8:
    if (ctx->pc == 0x2BF6F8u) {
        ctx->pc = 0x2BF6F8u;
            // 0x2bf6f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6FCu;
        goto label_2bf6fc;
    }
    ctx->pc = 0x2BF6F4u;
    {
        const bool branch_taken_0x2bf6f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF6F4u;
            // 0x2bf6f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6f4) {
            ctx->pc = 0x2BF814u;
            goto label_2bf814;
        }
    }
    ctx->pc = 0x2BF6FCu;
label_2bf6fc:
    // 0x2bf6fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf700:
    // 0x2bf700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf704:
    // 0x2bf704: 0x24631a30  addiu       $v1, $v1, 0x1A30
    ctx->pc = 0x2bf704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6704));
label_2bf708:
    // 0x2bf708: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bf708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bf70c:
    // 0x2bf70c: 0x24421a68  addiu       $v0, $v0, 0x1A68
    ctx->pc = 0x2bf70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6760));
label_2bf710:
    // 0x2bf710: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bf710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bf714:
    // 0x2bf714: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bf714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bf718:
    // 0x2bf718: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bf718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bf71c:
    // 0x2bf71c: 0xc0407c0  jal         func_101F00
label_2bf720:
    if (ctx->pc == 0x2BF720u) {
        ctx->pc = 0x2BF720u;
            // 0x2bf720: 0x24a5f930  addiu       $a1, $a1, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
        ctx->pc = 0x2BF724u;
        goto label_2bf724;
    }
    ctx->pc = 0x2BF71Cu;
    SET_GPR_U32(ctx, 31, 0x2BF724u);
    ctx->pc = 0x2BF720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF71Cu;
            // 0x2bf720: 0x24a5f930  addiu       $a1, $a1, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF724u; }
        if (ctx->pc != 0x2BF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF724u; }
        if (ctx->pc != 0x2BF724u) { return; }
    }
    ctx->pc = 0x2BF724u;
label_2bf724:
    // 0x2bf724: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bf724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bf728:
    // 0x2bf728: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bf72c:
    if (ctx->pc == 0x2BF72Cu) {
        ctx->pc = 0x2BF72Cu;
            // 0x2bf72c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BF730u;
        goto label_2bf730;
    }
    ctx->pc = 0x2BF728u;
    {
        const bool branch_taken_0x2bf728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf728) {
            ctx->pc = 0x2BF72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF728u;
            // 0x2bf72c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF758u;
            goto label_2bf758;
        }
    }
    ctx->pc = 0x2BF730u;
label_2bf730:
    // 0x2bf730: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bf734:
    if (ctx->pc == 0x2BF734u) {
        ctx->pc = 0x2BF738u;
        goto label_2bf738;
    }
    ctx->pc = 0x2BF730u;
    {
        const bool branch_taken_0x2bf730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf730) {
            ctx->pc = 0x2BF754u;
            goto label_2bf754;
        }
    }
    ctx->pc = 0x2BF738u;
label_2bf738:
    // 0x2bf738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bf73c:
    if (ctx->pc == 0x2BF73Cu) {
        ctx->pc = 0x2BF740u;
        goto label_2bf740;
    }
    ctx->pc = 0x2BF738u;
    {
        const bool branch_taken_0x2bf738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf738) {
            ctx->pc = 0x2BF754u;
            goto label_2bf754;
        }
    }
    ctx->pc = 0x2BF740u;
label_2bf740:
    // 0x2bf740: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bf740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bf744:
    // 0x2bf744: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bf748:
    if (ctx->pc == 0x2BF748u) {
        ctx->pc = 0x2BF74Cu;
        goto label_2bf74c;
    }
    ctx->pc = 0x2BF744u;
    {
        const bool branch_taken_0x2bf744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf744) {
            ctx->pc = 0x2BF754u;
            goto label_2bf754;
        }
    }
    ctx->pc = 0x2BF74Cu;
label_2bf74c:
    // 0x2bf74c: 0xc0400a8  jal         func_1002A0
label_2bf750:
    if (ctx->pc == 0x2BF750u) {
        ctx->pc = 0x2BF754u;
        goto label_2bf754;
    }
    ctx->pc = 0x2BF74Cu;
    SET_GPR_U32(ctx, 31, 0x2BF754u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF754u; }
        if (ctx->pc != 0x2BF754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF754u; }
        if (ctx->pc != 0x2BF754u) { return; }
    }
    ctx->pc = 0x2BF754u;
label_2bf754:
    // 0x2bf754: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bf754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bf758:
    // 0x2bf758: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bf75c:
    if (ctx->pc == 0x2BF75Cu) {
        ctx->pc = 0x2BF75Cu;
            // 0x2bf75c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BF760u;
        goto label_2bf760;
    }
    ctx->pc = 0x2BF758u;
    {
        const bool branch_taken_0x2bf758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf758) {
            ctx->pc = 0x2BF75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF758u;
            // 0x2bf75c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF788u;
            goto label_2bf788;
        }
    }
    ctx->pc = 0x2BF760u;
label_2bf760:
    // 0x2bf760: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bf764:
    if (ctx->pc == 0x2BF764u) {
        ctx->pc = 0x2BF768u;
        goto label_2bf768;
    }
    ctx->pc = 0x2BF760u;
    {
        const bool branch_taken_0x2bf760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf760) {
            ctx->pc = 0x2BF784u;
            goto label_2bf784;
        }
    }
    ctx->pc = 0x2BF768u;
label_2bf768:
    // 0x2bf768: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bf76c:
    if (ctx->pc == 0x2BF76Cu) {
        ctx->pc = 0x2BF770u;
        goto label_2bf770;
    }
    ctx->pc = 0x2BF768u;
    {
        const bool branch_taken_0x2bf768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf768) {
            ctx->pc = 0x2BF784u;
            goto label_2bf784;
        }
    }
    ctx->pc = 0x2BF770u;
label_2bf770:
    // 0x2bf770: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bf770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bf774:
    // 0x2bf774: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bf778:
    if (ctx->pc == 0x2BF778u) {
        ctx->pc = 0x2BF77Cu;
        goto label_2bf77c;
    }
    ctx->pc = 0x2BF774u;
    {
        const bool branch_taken_0x2bf774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf774) {
            ctx->pc = 0x2BF784u;
            goto label_2bf784;
        }
    }
    ctx->pc = 0x2BF77Cu;
label_2bf77c:
    // 0x2bf77c: 0xc0400a8  jal         func_1002A0
label_2bf780:
    if (ctx->pc == 0x2BF780u) {
        ctx->pc = 0x2BF784u;
        goto label_2bf784;
    }
    ctx->pc = 0x2BF77Cu;
    SET_GPR_U32(ctx, 31, 0x2BF784u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF784u; }
        if (ctx->pc != 0x2BF784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF784u; }
        if (ctx->pc != 0x2BF784u) { return; }
    }
    ctx->pc = 0x2BF784u;
label_2bf784:
    // 0x2bf784: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bf788:
    // 0x2bf788: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bf78c:
    if (ctx->pc == 0x2BF78Cu) {
        ctx->pc = 0x2BF790u;
        goto label_2bf790;
    }
    ctx->pc = 0x2BF788u;
    {
        const bool branch_taken_0x2bf788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf788) {
            ctx->pc = 0x2BF7A4u;
            goto label_2bf7a4;
        }
    }
    ctx->pc = 0x2BF790u;
label_2bf790:
    // 0x2bf790: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf794:
    // 0x2bf794: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bf794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bf798:
    // 0x2bf798: 0x24631a20  addiu       $v1, $v1, 0x1A20
    ctx->pc = 0x2bf798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
label_2bf79c:
    // 0x2bf79c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bf79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bf7a0:
    // 0x2bf7a0: 0xac400d58  sw          $zero, 0xD58($v0)
    ctx->pc = 0x2bf7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3416), GPR_U32(ctx, 0));
label_2bf7a4:
    // 0x2bf7a4: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bf7a8:
    if (ctx->pc == 0x2BF7A8u) {
        ctx->pc = 0x2BF7A8u;
            // 0x2bf7a8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BF7ACu;
        goto label_2bf7ac;
    }
    ctx->pc = 0x2BF7A4u;
    {
        const bool branch_taken_0x2bf7a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7a4) {
            ctx->pc = 0x2BF7A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7A4u;
            // 0x2bf7a8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF800u;
            goto label_2bf800;
        }
    }
    ctx->pc = 0x2BF7ACu;
label_2bf7ac:
    // 0x2bf7ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf7b0:
    // 0x2bf7b0: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bf7b4:
    // 0x2bf7b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bf7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bf7b8:
    // 0x2bf7b8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bf7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bf7bc:
    // 0x2bf7bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bf7c0:
    if (ctx->pc == 0x2BF7C0u) {
        ctx->pc = 0x2BF7C0u;
            // 0x2bf7c0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BF7C4u;
        goto label_2bf7c4;
    }
    ctx->pc = 0x2BF7BCu;
    {
        const bool branch_taken_0x2bf7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7bc) {
            ctx->pc = 0x2BF7C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7BCu;
            // 0x2bf7c0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7D8u;
            goto label_2bf7d8;
        }
    }
    ctx->pc = 0x2BF7C4u;
label_2bf7c4:
    // 0x2bf7c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf7c8:
    // 0x2bf7c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bf7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bf7cc:
    // 0x2bf7cc: 0x320f809  jalr        $t9
label_2bf7d0:
    if (ctx->pc == 0x2BF7D0u) {
        ctx->pc = 0x2BF7D0u;
            // 0x2bf7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF7D4u;
        goto label_2bf7d4;
    }
    ctx->pc = 0x2BF7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF7D4u);
        ctx->pc = 0x2BF7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7CCu;
            // 0x2bf7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF7D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF7D4u; }
            if (ctx->pc != 0x2BF7D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF7D4u;
label_2bf7d4:
    // 0x2bf7d4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bf7d8:
    // 0x2bf7d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bf7dc:
    if (ctx->pc == 0x2BF7DCu) {
        ctx->pc = 0x2BF7DCu;
            // 0x2bf7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7E0u;
        goto label_2bf7e0;
    }
    ctx->pc = 0x2BF7D8u;
    {
        const bool branch_taken_0x2bf7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7d8) {
            ctx->pc = 0x2BF7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7D8u;
            // 0x2bf7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7F4u;
            goto label_2bf7f4;
        }
    }
    ctx->pc = 0x2BF7E0u;
label_2bf7e0:
    // 0x2bf7e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf7e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf7e4:
    // 0x2bf7e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bf7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bf7e8:
    // 0x2bf7e8: 0x320f809  jalr        $t9
label_2bf7ec:
    if (ctx->pc == 0x2BF7ECu) {
        ctx->pc = 0x2BF7ECu;
            // 0x2bf7ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF7F0u;
        goto label_2bf7f0;
    }
    ctx->pc = 0x2BF7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF7F0u);
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7E8u;
            // 0x2bf7ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF7F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF7F0u; }
            if (ctx->pc != 0x2BF7F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF7F0u;
label_2bf7f0:
    // 0x2bf7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf7f4:
    // 0x2bf7f4: 0xc075bf8  jal         func_1D6FE0
label_2bf7f8:
    if (ctx->pc == 0x2BF7F8u) {
        ctx->pc = 0x2BF7F8u;
            // 0x2bf7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7FCu;
        goto label_2bf7fc;
    }
    ctx->pc = 0x2BF7F4u;
    SET_GPR_U32(ctx, 31, 0x2BF7FCu);
    ctx->pc = 0x2BF7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7F4u;
            // 0x2bf7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF7FCu; }
        if (ctx->pc != 0x2BF7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF7FCu; }
        if (ctx->pc != 0x2BF7FCu) { return; }
    }
    ctx->pc = 0x2BF7FCu;
label_2bf7fc:
    // 0x2bf7fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bf7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bf800:
    // 0x2bf800: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bf800u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bf804:
    // 0x2bf804: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bf808:
    if (ctx->pc == 0x2BF808u) {
        ctx->pc = 0x2BF808u;
            // 0x2bf808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF80Cu;
        goto label_2bf80c;
    }
    ctx->pc = 0x2BF804u;
    {
        const bool branch_taken_0x2bf804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bf804) {
            ctx->pc = 0x2BF808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF804u;
            // 0x2bf808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF818u;
            goto label_2bf818;
        }
    }
    ctx->pc = 0x2BF80Cu;
label_2bf80c:
    // 0x2bf80c: 0xc0400a8  jal         func_1002A0
label_2bf810:
    if (ctx->pc == 0x2BF810u) {
        ctx->pc = 0x2BF810u;
            // 0x2bf810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF814u;
        goto label_2bf814;
    }
    ctx->pc = 0x2BF80Cu;
    SET_GPR_U32(ctx, 31, 0x2BF814u);
    ctx->pc = 0x2BF810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF80Cu;
            // 0x2bf810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF814u; }
        if (ctx->pc != 0x2BF814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF814u; }
        if (ctx->pc != 0x2BF814u) { return; }
    }
    ctx->pc = 0x2BF814u;
label_2bf814:
    // 0x2bf814: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bf814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf818:
    // 0x2bf818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bf818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf81c:
    // 0x2bf81c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf81cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf820:
    // 0x2bf820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf824:
    // 0x2bf824: 0x3e00008  jr          $ra
label_2bf828:
    if (ctx->pc == 0x2BF828u) {
        ctx->pc = 0x2BF828u;
            // 0x2bf828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BF82Cu;
        goto label_2bf82c;
    }
    ctx->pc = 0x2BF824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF824u;
            // 0x2bf828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF82Cu;
label_2bf82c:
    // 0x2bf82c: 0x0  nop
    ctx->pc = 0x2bf82cu;
    // NOP
}
