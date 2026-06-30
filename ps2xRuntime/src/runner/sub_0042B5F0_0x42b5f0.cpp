#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042B5F0
// Address: 0x42b5f0 - 0x42b8e0
void sub_0042B5F0_0x42b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B5F0_0x42b5f0");
#endif

    switch (ctx->pc) {
        case 0x42b5f0u: goto label_42b5f0;
        case 0x42b5f4u: goto label_42b5f4;
        case 0x42b5f8u: goto label_42b5f8;
        case 0x42b5fcu: goto label_42b5fc;
        case 0x42b600u: goto label_42b600;
        case 0x42b604u: goto label_42b604;
        case 0x42b608u: goto label_42b608;
        case 0x42b60cu: goto label_42b60c;
        case 0x42b610u: goto label_42b610;
        case 0x42b614u: goto label_42b614;
        case 0x42b618u: goto label_42b618;
        case 0x42b61cu: goto label_42b61c;
        case 0x42b620u: goto label_42b620;
        case 0x42b624u: goto label_42b624;
        case 0x42b628u: goto label_42b628;
        case 0x42b62cu: goto label_42b62c;
        case 0x42b630u: goto label_42b630;
        case 0x42b634u: goto label_42b634;
        case 0x42b638u: goto label_42b638;
        case 0x42b63cu: goto label_42b63c;
        case 0x42b640u: goto label_42b640;
        case 0x42b644u: goto label_42b644;
        case 0x42b648u: goto label_42b648;
        case 0x42b64cu: goto label_42b64c;
        case 0x42b650u: goto label_42b650;
        case 0x42b654u: goto label_42b654;
        case 0x42b658u: goto label_42b658;
        case 0x42b65cu: goto label_42b65c;
        case 0x42b660u: goto label_42b660;
        case 0x42b664u: goto label_42b664;
        case 0x42b668u: goto label_42b668;
        case 0x42b66cu: goto label_42b66c;
        case 0x42b670u: goto label_42b670;
        case 0x42b674u: goto label_42b674;
        case 0x42b678u: goto label_42b678;
        case 0x42b67cu: goto label_42b67c;
        case 0x42b680u: goto label_42b680;
        case 0x42b684u: goto label_42b684;
        case 0x42b688u: goto label_42b688;
        case 0x42b68cu: goto label_42b68c;
        case 0x42b690u: goto label_42b690;
        case 0x42b694u: goto label_42b694;
        case 0x42b698u: goto label_42b698;
        case 0x42b69cu: goto label_42b69c;
        case 0x42b6a0u: goto label_42b6a0;
        case 0x42b6a4u: goto label_42b6a4;
        case 0x42b6a8u: goto label_42b6a8;
        case 0x42b6acu: goto label_42b6ac;
        case 0x42b6b0u: goto label_42b6b0;
        case 0x42b6b4u: goto label_42b6b4;
        case 0x42b6b8u: goto label_42b6b8;
        case 0x42b6bcu: goto label_42b6bc;
        case 0x42b6c0u: goto label_42b6c0;
        case 0x42b6c4u: goto label_42b6c4;
        case 0x42b6c8u: goto label_42b6c8;
        case 0x42b6ccu: goto label_42b6cc;
        case 0x42b6d0u: goto label_42b6d0;
        case 0x42b6d4u: goto label_42b6d4;
        case 0x42b6d8u: goto label_42b6d8;
        case 0x42b6dcu: goto label_42b6dc;
        case 0x42b6e0u: goto label_42b6e0;
        case 0x42b6e4u: goto label_42b6e4;
        case 0x42b6e8u: goto label_42b6e8;
        case 0x42b6ecu: goto label_42b6ec;
        case 0x42b6f0u: goto label_42b6f0;
        case 0x42b6f4u: goto label_42b6f4;
        case 0x42b6f8u: goto label_42b6f8;
        case 0x42b6fcu: goto label_42b6fc;
        case 0x42b700u: goto label_42b700;
        case 0x42b704u: goto label_42b704;
        case 0x42b708u: goto label_42b708;
        case 0x42b70cu: goto label_42b70c;
        case 0x42b710u: goto label_42b710;
        case 0x42b714u: goto label_42b714;
        case 0x42b718u: goto label_42b718;
        case 0x42b71cu: goto label_42b71c;
        case 0x42b720u: goto label_42b720;
        case 0x42b724u: goto label_42b724;
        case 0x42b728u: goto label_42b728;
        case 0x42b72cu: goto label_42b72c;
        case 0x42b730u: goto label_42b730;
        case 0x42b734u: goto label_42b734;
        case 0x42b738u: goto label_42b738;
        case 0x42b73cu: goto label_42b73c;
        case 0x42b740u: goto label_42b740;
        case 0x42b744u: goto label_42b744;
        case 0x42b748u: goto label_42b748;
        case 0x42b74cu: goto label_42b74c;
        case 0x42b750u: goto label_42b750;
        case 0x42b754u: goto label_42b754;
        case 0x42b758u: goto label_42b758;
        case 0x42b75cu: goto label_42b75c;
        case 0x42b760u: goto label_42b760;
        case 0x42b764u: goto label_42b764;
        case 0x42b768u: goto label_42b768;
        case 0x42b76cu: goto label_42b76c;
        case 0x42b770u: goto label_42b770;
        case 0x42b774u: goto label_42b774;
        case 0x42b778u: goto label_42b778;
        case 0x42b77cu: goto label_42b77c;
        case 0x42b780u: goto label_42b780;
        case 0x42b784u: goto label_42b784;
        case 0x42b788u: goto label_42b788;
        case 0x42b78cu: goto label_42b78c;
        case 0x42b790u: goto label_42b790;
        case 0x42b794u: goto label_42b794;
        case 0x42b798u: goto label_42b798;
        case 0x42b79cu: goto label_42b79c;
        case 0x42b7a0u: goto label_42b7a0;
        case 0x42b7a4u: goto label_42b7a4;
        case 0x42b7a8u: goto label_42b7a8;
        case 0x42b7acu: goto label_42b7ac;
        case 0x42b7b0u: goto label_42b7b0;
        case 0x42b7b4u: goto label_42b7b4;
        case 0x42b7b8u: goto label_42b7b8;
        case 0x42b7bcu: goto label_42b7bc;
        case 0x42b7c0u: goto label_42b7c0;
        case 0x42b7c4u: goto label_42b7c4;
        case 0x42b7c8u: goto label_42b7c8;
        case 0x42b7ccu: goto label_42b7cc;
        case 0x42b7d0u: goto label_42b7d0;
        case 0x42b7d4u: goto label_42b7d4;
        case 0x42b7d8u: goto label_42b7d8;
        case 0x42b7dcu: goto label_42b7dc;
        case 0x42b7e0u: goto label_42b7e0;
        case 0x42b7e4u: goto label_42b7e4;
        case 0x42b7e8u: goto label_42b7e8;
        case 0x42b7ecu: goto label_42b7ec;
        case 0x42b7f0u: goto label_42b7f0;
        case 0x42b7f4u: goto label_42b7f4;
        case 0x42b7f8u: goto label_42b7f8;
        case 0x42b7fcu: goto label_42b7fc;
        case 0x42b800u: goto label_42b800;
        case 0x42b804u: goto label_42b804;
        case 0x42b808u: goto label_42b808;
        case 0x42b80cu: goto label_42b80c;
        case 0x42b810u: goto label_42b810;
        case 0x42b814u: goto label_42b814;
        case 0x42b818u: goto label_42b818;
        case 0x42b81cu: goto label_42b81c;
        case 0x42b820u: goto label_42b820;
        case 0x42b824u: goto label_42b824;
        case 0x42b828u: goto label_42b828;
        case 0x42b82cu: goto label_42b82c;
        case 0x42b830u: goto label_42b830;
        case 0x42b834u: goto label_42b834;
        case 0x42b838u: goto label_42b838;
        case 0x42b83cu: goto label_42b83c;
        case 0x42b840u: goto label_42b840;
        case 0x42b844u: goto label_42b844;
        case 0x42b848u: goto label_42b848;
        case 0x42b84cu: goto label_42b84c;
        case 0x42b850u: goto label_42b850;
        case 0x42b854u: goto label_42b854;
        case 0x42b858u: goto label_42b858;
        case 0x42b85cu: goto label_42b85c;
        case 0x42b860u: goto label_42b860;
        case 0x42b864u: goto label_42b864;
        case 0x42b868u: goto label_42b868;
        case 0x42b86cu: goto label_42b86c;
        case 0x42b870u: goto label_42b870;
        case 0x42b874u: goto label_42b874;
        case 0x42b878u: goto label_42b878;
        case 0x42b87cu: goto label_42b87c;
        case 0x42b880u: goto label_42b880;
        case 0x42b884u: goto label_42b884;
        case 0x42b888u: goto label_42b888;
        case 0x42b88cu: goto label_42b88c;
        case 0x42b890u: goto label_42b890;
        case 0x42b894u: goto label_42b894;
        case 0x42b898u: goto label_42b898;
        case 0x42b89cu: goto label_42b89c;
        case 0x42b8a0u: goto label_42b8a0;
        case 0x42b8a4u: goto label_42b8a4;
        case 0x42b8a8u: goto label_42b8a8;
        case 0x42b8acu: goto label_42b8ac;
        case 0x42b8b0u: goto label_42b8b0;
        case 0x42b8b4u: goto label_42b8b4;
        case 0x42b8b8u: goto label_42b8b8;
        case 0x42b8bcu: goto label_42b8bc;
        case 0x42b8c0u: goto label_42b8c0;
        case 0x42b8c4u: goto label_42b8c4;
        case 0x42b8c8u: goto label_42b8c8;
        case 0x42b8ccu: goto label_42b8cc;
        case 0x42b8d0u: goto label_42b8d0;
        case 0x42b8d4u: goto label_42b8d4;
        case 0x42b8d8u: goto label_42b8d8;
        case 0x42b8dcu: goto label_42b8dc;
        default: break;
    }

    ctx->pc = 0x42b5f0u;

label_42b5f0:
    // 0x42b5f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x42b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_42b5f4:
    // 0x42b5f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_42b5f8:
    // 0x42b5f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42b5fc:
    // 0x42b5fc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x42b5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42b600:
    // 0x42b600: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42b604:
    // 0x42b604: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x42b604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_42b608:
    // 0x42b608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42b60c:
    // 0x42b60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42b60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42b610:
    // 0x42b610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42b610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42b614:
    // 0x42b614: 0xc0aeaf4  jal         func_2BABD0
label_42b618:
    if (ctx->pc == 0x42B618u) {
        ctx->pc = 0x42B618u;
            // 0x42b618: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x42B61Cu;
        goto label_42b61c;
    }
    ctx->pc = 0x42B614u;
    SET_GPR_U32(ctx, 31, 0x42B61Cu);
    ctx->pc = 0x42B618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B614u;
            // 0x42b618: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B61Cu; }
        if (ctx->pc != 0x42B61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B61Cu; }
        if (ctx->pc != 0x42B61Cu) { return; }
    }
    ctx->pc = 0x42B61Cu;
label_42b61c:
    // 0x42b61c: 0xc10aeb8  jal         func_42BAE0
label_42b620:
    if (ctx->pc == 0x42B620u) {
        ctx->pc = 0x42B620u;
            // 0x42b620: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x42B624u;
        goto label_42b624;
    }
    ctx->pc = 0x42B61Cu;
    SET_GPR_U32(ctx, 31, 0x42B624u);
    ctx->pc = 0x42B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B61Cu;
            // 0x42b620: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42BAE0u;
    if (runtime->hasFunction(0x42BAE0u)) {
        auto targetFn = runtime->lookupFunction(0x42BAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B624u; }
        if (ctx->pc != 0x42B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042BAE0_0x42bae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B624u; }
        if (ctx->pc != 0x42B624u) { return; }
    }
    ctx->pc = 0x42B624u;
label_42b624:
    // 0x42b624: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42b628:
    // 0x42b628: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42b62c:
    // 0x42b62c: 0x2463c220  addiu       $v1, $v1, -0x3DE0
    ctx->pc = 0x42b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951456));
label_42b630:
    // 0x42b630: 0x2442c258  addiu       $v0, $v0, -0x3DA8
    ctx->pc = 0x42b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951512));
label_42b634:
    // 0x42b634: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42b634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42b638:
    // 0x42b638: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x42b638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_42b63c:
    // 0x42b63c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x42b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_42b640:
    // 0x42b640: 0xc10aeb0  jal         func_42BAC0
label_42b644:
    if (ctx->pc == 0x42B644u) {
        ctx->pc = 0x42B644u;
            // 0x42b644: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x42B648u;
        goto label_42b648;
    }
    ctx->pc = 0x42B640u;
    SET_GPR_U32(ctx, 31, 0x42B648u);
    ctx->pc = 0x42B644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B640u;
            // 0x42b644: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42BAC0u;
    if (runtime->hasFunction(0x42BAC0u)) {
        auto targetFn = runtime->lookupFunction(0x42BAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B648u; }
        if (ctx->pc != 0x42B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042BAC0_0x42bac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B648u; }
        if (ctx->pc != 0x42B648u) { return; }
    }
    ctx->pc = 0x42B648u;
label_42b648:
    // 0x42b648: 0xc10aeb0  jal         func_42BAC0
label_42b64c:
    if (ctx->pc == 0x42B64Cu) {
        ctx->pc = 0x42B64Cu;
            // 0x42b64c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x42B650u;
        goto label_42b650;
    }
    ctx->pc = 0x42B648u;
    SET_GPR_U32(ctx, 31, 0x42B650u);
    ctx->pc = 0x42B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B648u;
            // 0x42b64c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42BAC0u;
    if (runtime->hasFunction(0x42BAC0u)) {
        auto targetFn = runtime->lookupFunction(0x42BAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B650u; }
        if (ctx->pc != 0x42B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042BAC0_0x42bac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B650u; }
        if (ctx->pc != 0x42B650u) { return; }
    }
    ctx->pc = 0x42B650u;
label_42b650:
    // 0x42b650: 0xc0a8d10  jal         func_2A3440
label_42b654:
    if (ctx->pc == 0x42B654u) {
        ctx->pc = 0x42B654u;
            // 0x42b654: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x42B658u;
        goto label_42b658;
    }
    ctx->pc = 0x42B650u;
    SET_GPR_U32(ctx, 31, 0x42B658u);
    ctx->pc = 0x42B654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B650u;
            // 0x42b654: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B658u; }
        if (ctx->pc != 0x42B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B658u; }
        if (ctx->pc != 0x42B658u) { return; }
    }
    ctx->pc = 0x42B658u;
label_42b658:
    // 0x42b658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b65c:
    // 0x42b65c: 0xc0aeac0  jal         func_2BAB00
label_42b660:
    if (ctx->pc == 0x42B660u) {
        ctx->pc = 0x42B660u;
            // 0x42b660: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x42B664u;
        goto label_42b664;
    }
    ctx->pc = 0x42B65Cu;
    SET_GPR_U32(ctx, 31, 0x42B664u);
    ctx->pc = 0x42B660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B65Cu;
            // 0x42b660: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B664u; }
        if (ctx->pc != 0x42B664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B664u; }
        if (ctx->pc != 0x42B664u) { return; }
    }
    ctx->pc = 0x42B664u;
label_42b664:
    // 0x42b664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42b664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b668:
    // 0x42b668: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_42b66c:
    if (ctx->pc == 0x42B66Cu) {
        ctx->pc = 0x42B670u;
        goto label_42b670;
    }
    ctx->pc = 0x42B668u;
    {
        const bool branch_taken_0x42b668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b668) {
            ctx->pc = 0x42B6E8u;
            goto label_42b6e8;
        }
    }
    ctx->pc = 0x42B670u;
label_42b670:
    // 0x42b670: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x42b670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_42b674:
    // 0x42b674: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x42b674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_42b678:
    // 0x42b678: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x42b678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_42b67c:
    // 0x42b67c: 0xc040138  jal         func_1004E0
label_42b680:
    if (ctx->pc == 0x42B680u) {
        ctx->pc = 0x42B680u;
            // 0x42b680: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x42B684u;
        goto label_42b684;
    }
    ctx->pc = 0x42B67Cu;
    SET_GPR_U32(ctx, 31, 0x42B684u);
    ctx->pc = 0x42B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B67Cu;
            // 0x42b680: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B684u; }
        if (ctx->pc != 0x42B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B684u; }
        if (ctx->pc != 0x42B684u) { return; }
    }
    ctx->pc = 0x42B684u;
label_42b684:
    // 0x42b684: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42b684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42b688:
    // 0x42b688: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x42b688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_42b68c:
    // 0x42b68c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b690:
    // 0x42b690: 0x24a5b910  addiu       $a1, $a1, -0x46F0
    ctx->pc = 0x42b690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949136));
label_42b694:
    // 0x42b694: 0x24c6af20  addiu       $a2, $a2, -0x50E0
    ctx->pc = 0x42b694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946592));
label_42b698:
    // 0x42b698: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x42b698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_42b69c:
    // 0x42b69c: 0xc040840  jal         func_102100
label_42b6a0:
    if (ctx->pc == 0x42B6A0u) {
        ctx->pc = 0x42B6A0u;
            // 0x42b6a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B6A4u;
        goto label_42b6a4;
    }
    ctx->pc = 0x42B69Cu;
    SET_GPR_U32(ctx, 31, 0x42B6A4u);
    ctx->pc = 0x42B6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B69Cu;
            // 0x42b6a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6A4u; }
        if (ctx->pc != 0x42B6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6A4u; }
        if (ctx->pc != 0x42B6A4u) { return; }
    }
    ctx->pc = 0x42B6A4u;
label_42b6a4:
    // 0x42b6a4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x42b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_42b6a8:
    // 0x42b6a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x42b6a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b6ac:
    // 0x42b6ac: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x42b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_42b6b0:
    // 0x42b6b0: 0xc10ae40  jal         func_42B900
label_42b6b4:
    if (ctx->pc == 0x42B6B4u) {
        ctx->pc = 0x42B6B4u;
            // 0x42b6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B6B8u;
        goto label_42b6b8;
    }
    ctx->pc = 0x42B6B0u;
    SET_GPR_U32(ctx, 31, 0x42B6B8u);
    ctx->pc = 0x42B6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B6B0u;
            // 0x42b6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42B900u;
    if (runtime->hasFunction(0x42B900u)) {
        auto targetFn = runtime->lookupFunction(0x42B900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6B8u; }
        if (ctx->pc != 0x42B6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042B900_0x42b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6B8u; }
        if (ctx->pc != 0x42B6B8u) { return; }
    }
    ctx->pc = 0x42B6B8u;
label_42b6b8:
    // 0x42b6b8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x42b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_42b6bc:
    // 0x42b6bc: 0xc10ae40  jal         func_42B900
label_42b6c0:
    if (ctx->pc == 0x42B6C0u) {
        ctx->pc = 0x42B6C0u;
            // 0x42b6c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B6C4u;
        goto label_42b6c4;
    }
    ctx->pc = 0x42B6BCu;
    SET_GPR_U32(ctx, 31, 0x42B6C4u);
    ctx->pc = 0x42B6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B6BCu;
            // 0x42b6c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42B900u;
    if (runtime->hasFunction(0x42B900u)) {
        auto targetFn = runtime->lookupFunction(0x42B900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6C4u; }
        if (ctx->pc != 0x42B6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042B900_0x42b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6C4u; }
        if (ctx->pc != 0x42B6C4u) { return; }
    }
    ctx->pc = 0x42B6C4u;
label_42b6c4:
    // 0x42b6c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42b6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b6c8:
    // 0x42b6c8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x42b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_42b6cc:
    // 0x42b6cc: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x42b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_42b6d0:
    // 0x42b6d0: 0xc10ae38  jal         func_42B8E0
label_42b6d4:
    if (ctx->pc == 0x42B6D4u) {
        ctx->pc = 0x42B6D4u;
            // 0x42b6d4: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x42B6D8u;
        goto label_42b6d8;
    }
    ctx->pc = 0x42B6D0u;
    SET_GPR_U32(ctx, 31, 0x42B6D8u);
    ctx->pc = 0x42B6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B6D0u;
            // 0x42b6d4: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42B8E0u;
    if (runtime->hasFunction(0x42B8E0u)) {
        auto targetFn = runtime->lookupFunction(0x42B8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6D8u; }
        if (ctx->pc != 0x42B6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042B8E0_0x42b8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B6D8u; }
        if (ctx->pc != 0x42B6D8u) { return; }
    }
    ctx->pc = 0x42B6D8u;
label_42b6d8:
    // 0x42b6d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42b6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42b6dc:
    // 0x42b6dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x42b6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42b6e0:
    // 0x42b6e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_42b6e4:
    if (ctx->pc == 0x42B6E4u) {
        ctx->pc = 0x42B6E4u;
            // 0x42b6e4: 0x267300e0  addiu       $s3, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->pc = 0x42B6E8u;
        goto label_42b6e8;
    }
    ctx->pc = 0x42B6E0u;
    {
        const bool branch_taken_0x42b6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B6E0u;
            // 0x42b6e4: 0x267300e0  addiu       $s3, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b6e0) {
            ctx->pc = 0x42B6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42b6c8;
        }
    }
    ctx->pc = 0x42B6E8u;
label_42b6e8:
    // 0x42b6e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42b6ec:
    // 0x42b6ec: 0x2442c1c0  addiu       $v0, $v0, -0x3E40
    ctx->pc = 0x42b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951360));
label_42b6f0:
    // 0x42b6f0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x42b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_42b6f4:
    // 0x42b6f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x42b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42b6f8:
    // 0x42b6f8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x42b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_42b6fc:
    // 0x42b6fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42b700:
    // 0x42b700: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x42b700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_42b704:
    // 0x42b704: 0x2442c1f8  addiu       $v0, $v0, -0x3E08
    ctx->pc = 0x42b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951416));
label_42b708:
    // 0x42b708: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x42b708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_42b70c:
    // 0x42b70c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x42b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_42b710:
    // 0x42b710: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x42b710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_42b714:
    // 0x42b714: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x42b714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_42b718:
    // 0x42b718: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42b71c:
    // 0x42b71c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x42b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_42b720:
    // 0x42b720: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42b724:
    // 0x42b724: 0xc0a7a88  jal         func_29EA20
label_42b728:
    if (ctx->pc == 0x42B728u) {
        ctx->pc = 0x42B728u;
            // 0x42b728: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x42B72Cu;
        goto label_42b72c;
    }
    ctx->pc = 0x42B724u;
    SET_GPR_U32(ctx, 31, 0x42B72Cu);
    ctx->pc = 0x42B728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B724u;
            // 0x42b728: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B72Cu; }
        if (ctx->pc != 0x42B72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B72Cu; }
        if (ctx->pc != 0x42B72Cu) { return; }
    }
    ctx->pc = 0x42B72Cu;
label_42b72c:
    // 0x42b72c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x42b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_42b730:
    // 0x42b730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42b730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b734:
    // 0x42b734: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_42b738:
    if (ctx->pc == 0x42B738u) {
        ctx->pc = 0x42B738u;
            // 0x42b738: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42B73Cu;
        goto label_42b73c;
    }
    ctx->pc = 0x42B734u;
    {
        const bool branch_taken_0x42b734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B734u;
            // 0x42b738: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b734) {
            ctx->pc = 0x42B750u;
            goto label_42b750;
        }
    }
    ctx->pc = 0x42B73Cu;
label_42b73c:
    // 0x42b73c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_42b740:
    // 0x42b740: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x42b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42b744:
    // 0x42b744: 0xc0804bc  jal         func_2012F0
label_42b748:
    if (ctx->pc == 0x42B748u) {
        ctx->pc = 0x42B748u;
            // 0x42b748: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42B74Cu;
        goto label_42b74c;
    }
    ctx->pc = 0x42B744u;
    SET_GPR_U32(ctx, 31, 0x42B74Cu);
    ctx->pc = 0x42B748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B744u;
            // 0x42b748: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B74Cu; }
        if (ctx->pc != 0x42B74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B74Cu; }
        if (ctx->pc != 0x42B74Cu) { return; }
    }
    ctx->pc = 0x42B74Cu;
label_42b74c:
    // 0x42b74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42b750:
    // 0x42b750: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x42b750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_42b754:
    // 0x42b754: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42b754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b758:
    // 0x42b758: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42b75c:
    // 0x42b75c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42b75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42b760:
    // 0x42b760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42b760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42b764:
    // 0x42b764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42b764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b768:
    // 0x42b768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42b768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42b76c:
    // 0x42b76c: 0x3e00008  jr          $ra
label_42b770:
    if (ctx->pc == 0x42B770u) {
        ctx->pc = 0x42B770u;
            // 0x42b770: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x42B774u;
        goto label_42b774;
    }
    ctx->pc = 0x42B76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B76Cu;
            // 0x42b770: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42B774u;
label_42b774:
    // 0x42b774: 0x0  nop
    ctx->pc = 0x42b774u;
    // NOP
label_42b778:
    // 0x42b778: 0x0  nop
    ctx->pc = 0x42b778u;
    // NOP
label_42b77c:
    // 0x42b77c: 0x0  nop
    ctx->pc = 0x42b77cu;
    // NOP
label_42b780:
    // 0x42b780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42b784:
    // 0x42b784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42b788:
    // 0x42b788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42b78c:
    // 0x42b78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42b790:
    // 0x42b790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42b790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42b794:
    // 0x42b794: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_42b798:
    if (ctx->pc == 0x42B798u) {
        ctx->pc = 0x42B798u;
            // 0x42b798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B79Cu;
        goto label_42b79c;
    }
    ctx->pc = 0x42B794u;
    {
        const bool branch_taken_0x42b794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B794u;
            // 0x42b798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b794) {
            ctx->pc = 0x42B8C8u;
            goto label_42b8c8;
        }
    }
    ctx->pc = 0x42B79Cu;
label_42b79c:
    // 0x42b79c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42b7a0:
    // 0x42b7a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42b7a4:
    // 0x42b7a4: 0x2463c220  addiu       $v1, $v1, -0x3DE0
    ctx->pc = 0x42b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951456));
label_42b7a8:
    // 0x42b7a8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42b7ac:
    // 0x42b7ac: 0x2442c258  addiu       $v0, $v0, -0x3DA8
    ctx->pc = 0x42b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951512));
label_42b7b0:
    // 0x42b7b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42b7b4:
    // 0x42b7b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x42b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_42b7b8:
    // 0x42b7b8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x42b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_42b7bc:
    // 0x42b7bc: 0xc0407c0  jal         func_101F00
label_42b7c0:
    if (ctx->pc == 0x42B7C0u) {
        ctx->pc = 0x42B7C0u;
            // 0x42b7c0: 0x24a5af20  addiu       $a1, $a1, -0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
        ctx->pc = 0x42B7C4u;
        goto label_42b7c4;
    }
    ctx->pc = 0x42B7BCu;
    SET_GPR_U32(ctx, 31, 0x42B7C4u);
    ctx->pc = 0x42B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B7BCu;
            // 0x42b7c0: 0x24a5af20  addiu       $a1, $a1, -0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B7C4u; }
        if (ctx->pc != 0x42B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B7C4u; }
        if (ctx->pc != 0x42B7C4u) { return; }
    }
    ctx->pc = 0x42B7C4u;
label_42b7c4:
    // 0x42b7c4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x42b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_42b7c8:
    // 0x42b7c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_42b7cc:
    if (ctx->pc == 0x42B7CCu) {
        ctx->pc = 0x42B7CCu;
            // 0x42b7cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x42B7D0u;
        goto label_42b7d0;
    }
    ctx->pc = 0x42B7C8u;
    {
        const bool branch_taken_0x42b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b7c8) {
            ctx->pc = 0x42B7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B7C8u;
            // 0x42b7cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B7DCu;
            goto label_42b7dc;
        }
    }
    ctx->pc = 0x42B7D0u;
label_42b7d0:
    // 0x42b7d0: 0xc07507c  jal         func_1D41F0
label_42b7d4:
    if (ctx->pc == 0x42B7D4u) {
        ctx->pc = 0x42B7D4u;
            // 0x42b7d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x42B7D8u;
        goto label_42b7d8;
    }
    ctx->pc = 0x42B7D0u;
    SET_GPR_U32(ctx, 31, 0x42B7D8u);
    ctx->pc = 0x42B7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B7D0u;
            // 0x42b7d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B7D8u; }
        if (ctx->pc != 0x42B7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B7D8u; }
        if (ctx->pc != 0x42B7D8u) { return; }
    }
    ctx->pc = 0x42B7D8u;
label_42b7d8:
    // 0x42b7d8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x42b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_42b7dc:
    // 0x42b7dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42b7e0:
    if (ctx->pc == 0x42B7E0u) {
        ctx->pc = 0x42B7E0u;
            // 0x42b7e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x42B7E4u;
        goto label_42b7e4;
    }
    ctx->pc = 0x42B7DCu;
    {
        const bool branch_taken_0x42b7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b7dc) {
            ctx->pc = 0x42B7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B7DCu;
            // 0x42b7e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B80Cu;
            goto label_42b80c;
        }
    }
    ctx->pc = 0x42B7E4u;
label_42b7e4:
    // 0x42b7e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42b7e8:
    if (ctx->pc == 0x42B7E8u) {
        ctx->pc = 0x42B7ECu;
        goto label_42b7ec;
    }
    ctx->pc = 0x42B7E4u;
    {
        const bool branch_taken_0x42b7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b7e4) {
            ctx->pc = 0x42B808u;
            goto label_42b808;
        }
    }
    ctx->pc = 0x42B7ECu;
label_42b7ec:
    // 0x42b7ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42b7f0:
    if (ctx->pc == 0x42B7F0u) {
        ctx->pc = 0x42B7F4u;
        goto label_42b7f4;
    }
    ctx->pc = 0x42B7ECu;
    {
        const bool branch_taken_0x42b7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b7ec) {
            ctx->pc = 0x42B808u;
            goto label_42b808;
        }
    }
    ctx->pc = 0x42B7F4u;
label_42b7f4:
    // 0x42b7f4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x42b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_42b7f8:
    // 0x42b7f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42b7fc:
    if (ctx->pc == 0x42B7FCu) {
        ctx->pc = 0x42B800u;
        goto label_42b800;
    }
    ctx->pc = 0x42B7F8u;
    {
        const bool branch_taken_0x42b7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b7f8) {
            ctx->pc = 0x42B808u;
            goto label_42b808;
        }
    }
    ctx->pc = 0x42B800u;
label_42b800:
    // 0x42b800: 0xc0400a8  jal         func_1002A0
label_42b804:
    if (ctx->pc == 0x42B804u) {
        ctx->pc = 0x42B808u;
        goto label_42b808;
    }
    ctx->pc = 0x42B800u;
    SET_GPR_U32(ctx, 31, 0x42B808u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B808u; }
        if (ctx->pc != 0x42B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B808u; }
        if (ctx->pc != 0x42B808u) { return; }
    }
    ctx->pc = 0x42B808u;
label_42b808:
    // 0x42b808: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x42b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_42b80c:
    // 0x42b80c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42b810:
    if (ctx->pc == 0x42B810u) {
        ctx->pc = 0x42B810u;
            // 0x42b810: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x42B814u;
        goto label_42b814;
    }
    ctx->pc = 0x42B80Cu;
    {
        const bool branch_taken_0x42b80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b80c) {
            ctx->pc = 0x42B810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B80Cu;
            // 0x42b810: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B83Cu;
            goto label_42b83c;
        }
    }
    ctx->pc = 0x42B814u;
label_42b814:
    // 0x42b814: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42b818:
    if (ctx->pc == 0x42B818u) {
        ctx->pc = 0x42B81Cu;
        goto label_42b81c;
    }
    ctx->pc = 0x42B814u;
    {
        const bool branch_taken_0x42b814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b814) {
            ctx->pc = 0x42B838u;
            goto label_42b838;
        }
    }
    ctx->pc = 0x42B81Cu;
label_42b81c:
    // 0x42b81c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42b820:
    if (ctx->pc == 0x42B820u) {
        ctx->pc = 0x42B824u;
        goto label_42b824;
    }
    ctx->pc = 0x42B81Cu;
    {
        const bool branch_taken_0x42b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b81c) {
            ctx->pc = 0x42B838u;
            goto label_42b838;
        }
    }
    ctx->pc = 0x42B824u;
label_42b824:
    // 0x42b824: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x42b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_42b828:
    // 0x42b828: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42b82c:
    if (ctx->pc == 0x42B82Cu) {
        ctx->pc = 0x42B830u;
        goto label_42b830;
    }
    ctx->pc = 0x42B828u;
    {
        const bool branch_taken_0x42b828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b828) {
            ctx->pc = 0x42B838u;
            goto label_42b838;
        }
    }
    ctx->pc = 0x42B830u;
label_42b830:
    // 0x42b830: 0xc0400a8  jal         func_1002A0
label_42b834:
    if (ctx->pc == 0x42B834u) {
        ctx->pc = 0x42B838u;
        goto label_42b838;
    }
    ctx->pc = 0x42B830u;
    SET_GPR_U32(ctx, 31, 0x42B838u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B838u; }
        if (ctx->pc != 0x42B838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B838u; }
        if (ctx->pc != 0x42B838u) { return; }
    }
    ctx->pc = 0x42B838u;
label_42b838:
    // 0x42b838: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x42b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_42b83c:
    // 0x42b83c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42b840:
    if (ctx->pc == 0x42B840u) {
        ctx->pc = 0x42B844u;
        goto label_42b844;
    }
    ctx->pc = 0x42B83Cu;
    {
        const bool branch_taken_0x42b83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b83c) {
            ctx->pc = 0x42B858u;
            goto label_42b858;
        }
    }
    ctx->pc = 0x42B844u;
label_42b844:
    // 0x42b844: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42b844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42b848:
    // 0x42b848: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42b848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42b84c:
    // 0x42b84c: 0x2463c208  addiu       $v1, $v1, -0x3DF8
    ctx->pc = 0x42b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951432));
label_42b850:
    // 0x42b850: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x42b850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_42b854:
    // 0x42b854: 0xac4074a0  sw          $zero, 0x74A0($v0)
    ctx->pc = 0x42b854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29856), GPR_U32(ctx, 0));
label_42b858:
    // 0x42b858: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_42b85c:
    if (ctx->pc == 0x42B85Cu) {
        ctx->pc = 0x42B85Cu;
            // 0x42b85c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x42B860u;
        goto label_42b860;
    }
    ctx->pc = 0x42B858u;
    {
        const bool branch_taken_0x42b858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b858) {
            ctx->pc = 0x42B85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B858u;
            // 0x42b85c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B8B4u;
            goto label_42b8b4;
        }
    }
    ctx->pc = 0x42B860u;
label_42b860:
    // 0x42b860: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42b864:
    // 0x42b864: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x42b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_42b868:
    // 0x42b868: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x42b868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42b86c:
    // 0x42b86c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x42b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_42b870:
    // 0x42b870: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42b874:
    if (ctx->pc == 0x42B874u) {
        ctx->pc = 0x42B874u;
            // 0x42b874: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x42B878u;
        goto label_42b878;
    }
    ctx->pc = 0x42B870u;
    {
        const bool branch_taken_0x42b870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b870) {
            ctx->pc = 0x42B874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B870u;
            // 0x42b874: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B88Cu;
            goto label_42b88c;
        }
    }
    ctx->pc = 0x42B878u;
label_42b878:
    // 0x42b878: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42b878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42b87c:
    // 0x42b87c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42b87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42b880:
    // 0x42b880: 0x320f809  jalr        $t9
label_42b884:
    if (ctx->pc == 0x42B884u) {
        ctx->pc = 0x42B884u;
            // 0x42b884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42B888u;
        goto label_42b888;
    }
    ctx->pc = 0x42B880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B888u);
        ctx->pc = 0x42B884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B880u;
            // 0x42b884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B888u; }
            if (ctx->pc != 0x42B888u) { return; }
        }
        }
    }
    ctx->pc = 0x42B888u;
label_42b888:
    // 0x42b888: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x42b888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_42b88c:
    // 0x42b88c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42b890:
    if (ctx->pc == 0x42B890u) {
        ctx->pc = 0x42B890u;
            // 0x42b890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B894u;
        goto label_42b894;
    }
    ctx->pc = 0x42B88Cu;
    {
        const bool branch_taken_0x42b88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b88c) {
            ctx->pc = 0x42B890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B88Cu;
            // 0x42b890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B8A8u;
            goto label_42b8a8;
        }
    }
    ctx->pc = 0x42B894u;
label_42b894:
    // 0x42b894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42b894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42b898:
    // 0x42b898: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42b898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42b89c:
    // 0x42b89c: 0x320f809  jalr        $t9
label_42b8a0:
    if (ctx->pc == 0x42B8A0u) {
        ctx->pc = 0x42B8A0u;
            // 0x42b8a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42B8A4u;
        goto label_42b8a4;
    }
    ctx->pc = 0x42B89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42B8A4u);
        ctx->pc = 0x42B8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B89Cu;
            // 0x42b8a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42B8A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42B8A4u; }
            if (ctx->pc != 0x42B8A4u) { return; }
        }
        }
    }
    ctx->pc = 0x42B8A4u;
label_42b8a4:
    // 0x42b8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42b8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b8a8:
    // 0x42b8a8: 0xc075bf8  jal         func_1D6FE0
label_42b8ac:
    if (ctx->pc == 0x42B8ACu) {
        ctx->pc = 0x42B8ACu;
            // 0x42b8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B8B0u;
        goto label_42b8b0;
    }
    ctx->pc = 0x42B8A8u;
    SET_GPR_U32(ctx, 31, 0x42B8B0u);
    ctx->pc = 0x42B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B8A8u;
            // 0x42b8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B8B0u; }
        if (ctx->pc != 0x42B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B8B0u; }
        if (ctx->pc != 0x42B8B0u) { return; }
    }
    ctx->pc = 0x42B8B0u;
label_42b8b0:
    // 0x42b8b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42b8b4:
    // 0x42b8b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42b8b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42b8b8:
    // 0x42b8b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42b8bc:
    if (ctx->pc == 0x42B8BCu) {
        ctx->pc = 0x42B8BCu;
            // 0x42b8bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B8C0u;
        goto label_42b8c0;
    }
    ctx->pc = 0x42B8B8u;
    {
        const bool branch_taken_0x42b8b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42b8b8) {
            ctx->pc = 0x42B8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42B8B8u;
            // 0x42b8bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42B8CCu;
            goto label_42b8cc;
        }
    }
    ctx->pc = 0x42B8C0u;
label_42b8c0:
    // 0x42b8c0: 0xc0400a8  jal         func_1002A0
label_42b8c4:
    if (ctx->pc == 0x42B8C4u) {
        ctx->pc = 0x42B8C4u;
            // 0x42b8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42B8C8u;
        goto label_42b8c8;
    }
    ctx->pc = 0x42B8C0u;
    SET_GPR_U32(ctx, 31, 0x42B8C8u);
    ctx->pc = 0x42B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B8C0u;
            // 0x42b8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B8C8u; }
        if (ctx->pc != 0x42B8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B8C8u; }
        if (ctx->pc != 0x42B8C8u) { return; }
    }
    ctx->pc = 0x42B8C8u;
label_42b8c8:
    // 0x42b8c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42b8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42b8cc:
    // 0x42b8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42b8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42b8d0:
    // 0x42b8d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42b8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b8d4:
    // 0x42b8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42b8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42b8d8:
    // 0x42b8d8: 0x3e00008  jr          $ra
label_42b8dc:
    if (ctx->pc == 0x42B8DCu) {
        ctx->pc = 0x42B8DCu;
            // 0x42b8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42B8E0u;
        goto label_fallthrough_0x42b8d8;
    }
    ctx->pc = 0x42B8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B8D8u;
            // 0x42b8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x42b8d8:
    ctx->pc = 0x42B8E0u;
}
