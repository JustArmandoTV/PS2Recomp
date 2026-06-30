#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041A5C0
// Address: 0x41a5c0 - 0x41aa00
void sub_0041A5C0_0x41a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A5C0_0x41a5c0");
#endif

    switch (ctx->pc) {
        case 0x41a5c0u: goto label_41a5c0;
        case 0x41a5c4u: goto label_41a5c4;
        case 0x41a5c8u: goto label_41a5c8;
        case 0x41a5ccu: goto label_41a5cc;
        case 0x41a5d0u: goto label_41a5d0;
        case 0x41a5d4u: goto label_41a5d4;
        case 0x41a5d8u: goto label_41a5d8;
        case 0x41a5dcu: goto label_41a5dc;
        case 0x41a5e0u: goto label_41a5e0;
        case 0x41a5e4u: goto label_41a5e4;
        case 0x41a5e8u: goto label_41a5e8;
        case 0x41a5ecu: goto label_41a5ec;
        case 0x41a5f0u: goto label_41a5f0;
        case 0x41a5f4u: goto label_41a5f4;
        case 0x41a5f8u: goto label_41a5f8;
        case 0x41a5fcu: goto label_41a5fc;
        case 0x41a600u: goto label_41a600;
        case 0x41a604u: goto label_41a604;
        case 0x41a608u: goto label_41a608;
        case 0x41a60cu: goto label_41a60c;
        case 0x41a610u: goto label_41a610;
        case 0x41a614u: goto label_41a614;
        case 0x41a618u: goto label_41a618;
        case 0x41a61cu: goto label_41a61c;
        case 0x41a620u: goto label_41a620;
        case 0x41a624u: goto label_41a624;
        case 0x41a628u: goto label_41a628;
        case 0x41a62cu: goto label_41a62c;
        case 0x41a630u: goto label_41a630;
        case 0x41a634u: goto label_41a634;
        case 0x41a638u: goto label_41a638;
        case 0x41a63cu: goto label_41a63c;
        case 0x41a640u: goto label_41a640;
        case 0x41a644u: goto label_41a644;
        case 0x41a648u: goto label_41a648;
        case 0x41a64cu: goto label_41a64c;
        case 0x41a650u: goto label_41a650;
        case 0x41a654u: goto label_41a654;
        case 0x41a658u: goto label_41a658;
        case 0x41a65cu: goto label_41a65c;
        case 0x41a660u: goto label_41a660;
        case 0x41a664u: goto label_41a664;
        case 0x41a668u: goto label_41a668;
        case 0x41a66cu: goto label_41a66c;
        case 0x41a670u: goto label_41a670;
        case 0x41a674u: goto label_41a674;
        case 0x41a678u: goto label_41a678;
        case 0x41a67cu: goto label_41a67c;
        case 0x41a680u: goto label_41a680;
        case 0x41a684u: goto label_41a684;
        case 0x41a688u: goto label_41a688;
        case 0x41a68cu: goto label_41a68c;
        case 0x41a690u: goto label_41a690;
        case 0x41a694u: goto label_41a694;
        case 0x41a698u: goto label_41a698;
        case 0x41a69cu: goto label_41a69c;
        case 0x41a6a0u: goto label_41a6a0;
        case 0x41a6a4u: goto label_41a6a4;
        case 0x41a6a8u: goto label_41a6a8;
        case 0x41a6acu: goto label_41a6ac;
        case 0x41a6b0u: goto label_41a6b0;
        case 0x41a6b4u: goto label_41a6b4;
        case 0x41a6b8u: goto label_41a6b8;
        case 0x41a6bcu: goto label_41a6bc;
        case 0x41a6c0u: goto label_41a6c0;
        case 0x41a6c4u: goto label_41a6c4;
        case 0x41a6c8u: goto label_41a6c8;
        case 0x41a6ccu: goto label_41a6cc;
        case 0x41a6d0u: goto label_41a6d0;
        case 0x41a6d4u: goto label_41a6d4;
        case 0x41a6d8u: goto label_41a6d8;
        case 0x41a6dcu: goto label_41a6dc;
        case 0x41a6e0u: goto label_41a6e0;
        case 0x41a6e4u: goto label_41a6e4;
        case 0x41a6e8u: goto label_41a6e8;
        case 0x41a6ecu: goto label_41a6ec;
        case 0x41a6f0u: goto label_41a6f0;
        case 0x41a6f4u: goto label_41a6f4;
        case 0x41a6f8u: goto label_41a6f8;
        case 0x41a6fcu: goto label_41a6fc;
        case 0x41a700u: goto label_41a700;
        case 0x41a704u: goto label_41a704;
        case 0x41a708u: goto label_41a708;
        case 0x41a70cu: goto label_41a70c;
        case 0x41a710u: goto label_41a710;
        case 0x41a714u: goto label_41a714;
        case 0x41a718u: goto label_41a718;
        case 0x41a71cu: goto label_41a71c;
        case 0x41a720u: goto label_41a720;
        case 0x41a724u: goto label_41a724;
        case 0x41a728u: goto label_41a728;
        case 0x41a72cu: goto label_41a72c;
        case 0x41a730u: goto label_41a730;
        case 0x41a734u: goto label_41a734;
        case 0x41a738u: goto label_41a738;
        case 0x41a73cu: goto label_41a73c;
        case 0x41a740u: goto label_41a740;
        case 0x41a744u: goto label_41a744;
        case 0x41a748u: goto label_41a748;
        case 0x41a74cu: goto label_41a74c;
        case 0x41a750u: goto label_41a750;
        case 0x41a754u: goto label_41a754;
        case 0x41a758u: goto label_41a758;
        case 0x41a75cu: goto label_41a75c;
        case 0x41a760u: goto label_41a760;
        case 0x41a764u: goto label_41a764;
        case 0x41a768u: goto label_41a768;
        case 0x41a76cu: goto label_41a76c;
        case 0x41a770u: goto label_41a770;
        case 0x41a774u: goto label_41a774;
        case 0x41a778u: goto label_41a778;
        case 0x41a77cu: goto label_41a77c;
        case 0x41a780u: goto label_41a780;
        case 0x41a784u: goto label_41a784;
        case 0x41a788u: goto label_41a788;
        case 0x41a78cu: goto label_41a78c;
        case 0x41a790u: goto label_41a790;
        case 0x41a794u: goto label_41a794;
        case 0x41a798u: goto label_41a798;
        case 0x41a79cu: goto label_41a79c;
        case 0x41a7a0u: goto label_41a7a0;
        case 0x41a7a4u: goto label_41a7a4;
        case 0x41a7a8u: goto label_41a7a8;
        case 0x41a7acu: goto label_41a7ac;
        case 0x41a7b0u: goto label_41a7b0;
        case 0x41a7b4u: goto label_41a7b4;
        case 0x41a7b8u: goto label_41a7b8;
        case 0x41a7bcu: goto label_41a7bc;
        case 0x41a7c0u: goto label_41a7c0;
        case 0x41a7c4u: goto label_41a7c4;
        case 0x41a7c8u: goto label_41a7c8;
        case 0x41a7ccu: goto label_41a7cc;
        case 0x41a7d0u: goto label_41a7d0;
        case 0x41a7d4u: goto label_41a7d4;
        case 0x41a7d8u: goto label_41a7d8;
        case 0x41a7dcu: goto label_41a7dc;
        case 0x41a7e0u: goto label_41a7e0;
        case 0x41a7e4u: goto label_41a7e4;
        case 0x41a7e8u: goto label_41a7e8;
        case 0x41a7ecu: goto label_41a7ec;
        case 0x41a7f0u: goto label_41a7f0;
        case 0x41a7f4u: goto label_41a7f4;
        case 0x41a7f8u: goto label_41a7f8;
        case 0x41a7fcu: goto label_41a7fc;
        case 0x41a800u: goto label_41a800;
        case 0x41a804u: goto label_41a804;
        case 0x41a808u: goto label_41a808;
        case 0x41a80cu: goto label_41a80c;
        case 0x41a810u: goto label_41a810;
        case 0x41a814u: goto label_41a814;
        case 0x41a818u: goto label_41a818;
        case 0x41a81cu: goto label_41a81c;
        case 0x41a820u: goto label_41a820;
        case 0x41a824u: goto label_41a824;
        case 0x41a828u: goto label_41a828;
        case 0x41a82cu: goto label_41a82c;
        case 0x41a830u: goto label_41a830;
        case 0x41a834u: goto label_41a834;
        case 0x41a838u: goto label_41a838;
        case 0x41a83cu: goto label_41a83c;
        case 0x41a840u: goto label_41a840;
        case 0x41a844u: goto label_41a844;
        case 0x41a848u: goto label_41a848;
        case 0x41a84cu: goto label_41a84c;
        case 0x41a850u: goto label_41a850;
        case 0x41a854u: goto label_41a854;
        case 0x41a858u: goto label_41a858;
        case 0x41a85cu: goto label_41a85c;
        case 0x41a860u: goto label_41a860;
        case 0x41a864u: goto label_41a864;
        case 0x41a868u: goto label_41a868;
        case 0x41a86cu: goto label_41a86c;
        case 0x41a870u: goto label_41a870;
        case 0x41a874u: goto label_41a874;
        case 0x41a878u: goto label_41a878;
        case 0x41a87cu: goto label_41a87c;
        case 0x41a880u: goto label_41a880;
        case 0x41a884u: goto label_41a884;
        case 0x41a888u: goto label_41a888;
        case 0x41a88cu: goto label_41a88c;
        case 0x41a890u: goto label_41a890;
        case 0x41a894u: goto label_41a894;
        case 0x41a898u: goto label_41a898;
        case 0x41a89cu: goto label_41a89c;
        case 0x41a8a0u: goto label_41a8a0;
        case 0x41a8a4u: goto label_41a8a4;
        case 0x41a8a8u: goto label_41a8a8;
        case 0x41a8acu: goto label_41a8ac;
        case 0x41a8b0u: goto label_41a8b0;
        case 0x41a8b4u: goto label_41a8b4;
        case 0x41a8b8u: goto label_41a8b8;
        case 0x41a8bcu: goto label_41a8bc;
        case 0x41a8c0u: goto label_41a8c0;
        case 0x41a8c4u: goto label_41a8c4;
        case 0x41a8c8u: goto label_41a8c8;
        case 0x41a8ccu: goto label_41a8cc;
        case 0x41a8d0u: goto label_41a8d0;
        case 0x41a8d4u: goto label_41a8d4;
        case 0x41a8d8u: goto label_41a8d8;
        case 0x41a8dcu: goto label_41a8dc;
        case 0x41a8e0u: goto label_41a8e0;
        case 0x41a8e4u: goto label_41a8e4;
        case 0x41a8e8u: goto label_41a8e8;
        case 0x41a8ecu: goto label_41a8ec;
        case 0x41a8f0u: goto label_41a8f0;
        case 0x41a8f4u: goto label_41a8f4;
        case 0x41a8f8u: goto label_41a8f8;
        case 0x41a8fcu: goto label_41a8fc;
        case 0x41a900u: goto label_41a900;
        case 0x41a904u: goto label_41a904;
        case 0x41a908u: goto label_41a908;
        case 0x41a90cu: goto label_41a90c;
        case 0x41a910u: goto label_41a910;
        case 0x41a914u: goto label_41a914;
        case 0x41a918u: goto label_41a918;
        case 0x41a91cu: goto label_41a91c;
        case 0x41a920u: goto label_41a920;
        case 0x41a924u: goto label_41a924;
        case 0x41a928u: goto label_41a928;
        case 0x41a92cu: goto label_41a92c;
        case 0x41a930u: goto label_41a930;
        case 0x41a934u: goto label_41a934;
        case 0x41a938u: goto label_41a938;
        case 0x41a93cu: goto label_41a93c;
        case 0x41a940u: goto label_41a940;
        case 0x41a944u: goto label_41a944;
        case 0x41a948u: goto label_41a948;
        case 0x41a94cu: goto label_41a94c;
        case 0x41a950u: goto label_41a950;
        case 0x41a954u: goto label_41a954;
        case 0x41a958u: goto label_41a958;
        case 0x41a95cu: goto label_41a95c;
        case 0x41a960u: goto label_41a960;
        case 0x41a964u: goto label_41a964;
        case 0x41a968u: goto label_41a968;
        case 0x41a96cu: goto label_41a96c;
        case 0x41a970u: goto label_41a970;
        case 0x41a974u: goto label_41a974;
        case 0x41a978u: goto label_41a978;
        case 0x41a97cu: goto label_41a97c;
        case 0x41a980u: goto label_41a980;
        case 0x41a984u: goto label_41a984;
        case 0x41a988u: goto label_41a988;
        case 0x41a98cu: goto label_41a98c;
        case 0x41a990u: goto label_41a990;
        case 0x41a994u: goto label_41a994;
        case 0x41a998u: goto label_41a998;
        case 0x41a99cu: goto label_41a99c;
        case 0x41a9a0u: goto label_41a9a0;
        case 0x41a9a4u: goto label_41a9a4;
        case 0x41a9a8u: goto label_41a9a8;
        case 0x41a9acu: goto label_41a9ac;
        case 0x41a9b0u: goto label_41a9b0;
        case 0x41a9b4u: goto label_41a9b4;
        case 0x41a9b8u: goto label_41a9b8;
        case 0x41a9bcu: goto label_41a9bc;
        case 0x41a9c0u: goto label_41a9c0;
        case 0x41a9c4u: goto label_41a9c4;
        case 0x41a9c8u: goto label_41a9c8;
        case 0x41a9ccu: goto label_41a9cc;
        case 0x41a9d0u: goto label_41a9d0;
        case 0x41a9d4u: goto label_41a9d4;
        case 0x41a9d8u: goto label_41a9d8;
        case 0x41a9dcu: goto label_41a9dc;
        case 0x41a9e0u: goto label_41a9e0;
        case 0x41a9e4u: goto label_41a9e4;
        case 0x41a9e8u: goto label_41a9e8;
        case 0x41a9ecu: goto label_41a9ec;
        case 0x41a9f0u: goto label_41a9f0;
        case 0x41a9f4u: goto label_41a9f4;
        case 0x41a9f8u: goto label_41a9f8;
        case 0x41a9fcu: goto label_41a9fc;
        default: break;
    }

    ctx->pc = 0x41a5c0u;

label_41a5c0:
    // 0x41a5c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41a5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41a5c4:
    // 0x41a5c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x41a5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41a5c8:
    // 0x41a5c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41a5cc:
    // 0x41a5cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41a5d0:
    // 0x41a5d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41a5d4:
    // 0x41a5d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41a5d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a5d8:
    // 0x41a5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41a5dc:
    // 0x41a5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41a5e0:
    // 0x41a5e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41a5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41a5e4:
    // 0x41a5e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x41a5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41a5e8:
    // 0x41a5e8: 0xc10ca68  jal         func_4329A0
label_41a5ec:
    if (ctx->pc == 0x41A5ECu) {
        ctx->pc = 0x41A5ECu;
            // 0x41a5ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x41A5F0u;
        goto label_41a5f0;
    }
    ctx->pc = 0x41A5E8u;
    SET_GPR_U32(ctx, 31, 0x41A5F0u);
    ctx->pc = 0x41A5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A5E8u;
            // 0x41a5ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A5F0u; }
        if (ctx->pc != 0x41A5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A5F0u; }
        if (ctx->pc != 0x41A5F0u) { return; }
    }
    ctx->pc = 0x41A5F0u;
label_41a5f0:
    // 0x41a5f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41a5f4:
    // 0x41a5f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a5f8:
    // 0x41a5f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x41a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_41a5fc:
    // 0x41a5fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x41a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_41a600:
    // 0x41a600: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x41a600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_41a604:
    // 0x41a604: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x41a604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_41a608:
    // 0x41a608: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x41a608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_41a60c:
    // 0x41a60c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x41a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41a610:
    // 0x41a610: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x41a610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_41a614:
    // 0x41a614: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41a618:
    // 0x41a618: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x41a618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_41a61c:
    // 0x41a61c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x41a61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41a620:
    // 0x41a620: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x41a620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_41a624:
    // 0x41a624: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x41a624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_41a628:
    // 0x41a628: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x41a628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_41a62c:
    // 0x41a62c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x41a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_41a630:
    // 0x41a630: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x41a630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_41a634:
    // 0x41a634: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x41a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_41a638:
    // 0x41a638: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x41a638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_41a63c:
    // 0x41a63c: 0xc0582cc  jal         func_160B30
label_41a640:
    if (ctx->pc == 0x41A640u) {
        ctx->pc = 0x41A640u;
            // 0x41a640: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x41A644u;
        goto label_41a644;
    }
    ctx->pc = 0x41A63Cu;
    SET_GPR_U32(ctx, 31, 0x41A644u);
    ctx->pc = 0x41A640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A63Cu;
            // 0x41a640: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A644u; }
        if (ctx->pc != 0x41A644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A644u; }
        if (ctx->pc != 0x41A644u) { return; }
    }
    ctx->pc = 0x41A644u;
label_41a644:
    // 0x41a644: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41a648:
    // 0x41a648: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x41a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_41a64c:
    // 0x41a64c: 0x2463b670  addiu       $v1, $v1, -0x4990
    ctx->pc = 0x41a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948464));
label_41a650:
    // 0x41a650: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x41a650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_41a654:
    // 0x41a654: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x41a654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_41a658:
    // 0x41a658: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41a658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41a65c:
    // 0x41a65c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41a660:
    // 0x41a660: 0xac447328  sw          $a0, 0x7328($v0)
    ctx->pc = 0x41a660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29480), GPR_U32(ctx, 4));
label_41a664:
    // 0x41a664: 0x2463b680  addiu       $v1, $v1, -0x4980
    ctx->pc = 0x41a664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948480));
label_41a668:
    // 0x41a668: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41a66c:
    // 0x41a66c: 0x2442b6b8  addiu       $v0, $v0, -0x4948
    ctx->pc = 0x41a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948536));
label_41a670:
    // 0x41a670: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x41a670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_41a674:
    // 0x41a674: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x41a674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_41a678:
    // 0x41a678: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x41a678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_41a67c:
    // 0x41a67c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x41a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_41a680:
    // 0x41a680: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x41a680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_41a684:
    // 0x41a684: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x41a684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_41a688:
    // 0x41a688: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x41a688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_41a68c:
    // 0x41a68c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x41a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_41a690:
    // 0x41a690: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x41a690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_41a694:
    // 0x41a694: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x41a694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_41a698:
    // 0x41a698: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x41a698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_41a69c:
    // 0x41a69c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x41a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_41a6a0:
    // 0x41a6a0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x41a6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_41a6a4:
    // 0x41a6a4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_41a6a8:
    if (ctx->pc == 0x41A6A8u) {
        ctx->pc = 0x41A6ACu;
        goto label_41a6ac;
    }
    ctx->pc = 0x41A6A4u;
    {
        const bool branch_taken_0x41a6a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a6a4) {
            ctx->pc = 0x41A738u;
            goto label_41a738;
        }
    }
    ctx->pc = 0x41A6ACu;
label_41a6ac:
    // 0x41a6ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x41a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_41a6b0:
    // 0x41a6b0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x41a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41a6b4:
    // 0x41a6b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x41a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_41a6b8:
    // 0x41a6b8: 0xc040138  jal         func_1004E0
label_41a6bc:
    if (ctx->pc == 0x41A6BCu) {
        ctx->pc = 0x41A6BCu;
            // 0x41a6bc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x41A6C0u;
        goto label_41a6c0;
    }
    ctx->pc = 0x41A6B8u;
    SET_GPR_U32(ctx, 31, 0x41A6C0u);
    ctx->pc = 0x41A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A6B8u;
            // 0x41a6bc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A6C0u; }
        if (ctx->pc != 0x41A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A6C0u; }
        if (ctx->pc != 0x41A6C0u) { return; }
    }
    ctx->pc = 0x41A6C0u;
label_41a6c0:
    // 0x41a6c0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_41a6c4:
    // 0x41a6c4: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x41a6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_41a6c8:
    // 0x41a6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41a6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a6cc:
    // 0x41a6cc: 0x24a5a760  addiu       $a1, $a1, -0x58A0
    ctx->pc = 0x41a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944608));
label_41a6d0:
    // 0x41a6d0: 0x24c698f0  addiu       $a2, $a2, -0x6710
    ctx->pc = 0x41a6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940912));
label_41a6d4:
    // 0x41a6d4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x41a6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_41a6d8:
    // 0x41a6d8: 0xc040840  jal         func_102100
label_41a6dc:
    if (ctx->pc == 0x41A6DCu) {
        ctx->pc = 0x41A6DCu;
            // 0x41a6dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A6E0u;
        goto label_41a6e0;
    }
    ctx->pc = 0x41A6D8u;
    SET_GPR_U32(ctx, 31, 0x41A6E0u);
    ctx->pc = 0x41A6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A6D8u;
            // 0x41a6dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A6E0u; }
        if (ctx->pc != 0x41A6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A6E0u; }
        if (ctx->pc != 0x41A6E0u) { return; }
    }
    ctx->pc = 0x41A6E0u;
label_41a6e0:
    // 0x41a6e0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x41a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_41a6e4:
    // 0x41a6e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41a6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a6e8:
    // 0x41a6e8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x41a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_41a6ec:
    // 0x41a6ec: 0xc0788fc  jal         func_1E23F0
label_41a6f0:
    if (ctx->pc == 0x41A6F0u) {
        ctx->pc = 0x41A6F0u;
            // 0x41a6f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A6F4u;
        goto label_41a6f4;
    }
    ctx->pc = 0x41A6ECu;
    SET_GPR_U32(ctx, 31, 0x41A6F4u);
    ctx->pc = 0x41A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A6ECu;
            // 0x41a6f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A6F4u; }
        if (ctx->pc != 0x41A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A6F4u; }
        if (ctx->pc != 0x41A6F4u) { return; }
    }
    ctx->pc = 0x41A6F4u;
label_41a6f4:
    // 0x41a6f4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x41a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_41a6f8:
    // 0x41a6f8: 0xc0788fc  jal         func_1E23F0
label_41a6fc:
    if (ctx->pc == 0x41A6FCu) {
        ctx->pc = 0x41A6FCu;
            // 0x41a6fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A700u;
        goto label_41a700;
    }
    ctx->pc = 0x41A6F8u;
    SET_GPR_U32(ctx, 31, 0x41A700u);
    ctx->pc = 0x41A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A6F8u;
            // 0x41a6fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A700u; }
        if (ctx->pc != 0x41A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A700u; }
        if (ctx->pc != 0x41A700u) { return; }
    }
    ctx->pc = 0x41A700u;
label_41a700:
    // 0x41a700: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41a700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a704:
    // 0x41a704: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x41a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_41a708:
    // 0x41a708: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x41a708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_41a70c:
    // 0x41a70c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x41a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_41a710:
    // 0x41a710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41a710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a714:
    // 0x41a714: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x41a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_41a718:
    // 0x41a718: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x41a718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_41a71c:
    // 0x41a71c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41a720:
    // 0x41a720: 0xc0a997c  jal         func_2A65F0
label_41a724:
    if (ctx->pc == 0x41A724u) {
        ctx->pc = 0x41A724u;
            // 0x41a724: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x41A728u;
        goto label_41a728;
    }
    ctx->pc = 0x41A720u;
    SET_GPR_U32(ctx, 31, 0x41A728u);
    ctx->pc = 0x41A724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A720u;
            // 0x41a724: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A728u; }
        if (ctx->pc != 0x41A728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A728u; }
        if (ctx->pc != 0x41A728u) { return; }
    }
    ctx->pc = 0x41A728u;
label_41a728:
    // 0x41a728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x41a728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_41a72c:
    // 0x41a72c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x41a72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41a730:
    // 0x41a730: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_41a734:
    if (ctx->pc == 0x41A734u) {
        ctx->pc = 0x41A734u;
            // 0x41a734: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x41A738u;
        goto label_41a738;
    }
    ctx->pc = 0x41A730u;
    {
        const bool branch_taken_0x41a730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A730u;
            // 0x41a734: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a730) {
            ctx->pc = 0x41A704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41a704;
        }
    }
    ctx->pc = 0x41A738u;
label_41a738:
    // 0x41a738: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x41a738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41a73c:
    // 0x41a73c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41a740:
    // 0x41a740: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41a740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a744:
    // 0x41a744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41a744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a748:
    // 0x41a748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a74c:
    // 0x41a74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41a750:
    // 0x41a750: 0x3e00008  jr          $ra
label_41a754:
    if (ctx->pc == 0x41A754u) {
        ctx->pc = 0x41A754u;
            // 0x41a754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41A758u;
        goto label_41a758;
    }
    ctx->pc = 0x41A750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A750u;
            // 0x41a754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A758u;
label_41a758:
    // 0x41a758: 0x0  nop
    ctx->pc = 0x41a758u;
    // NOP
label_41a75c:
    // 0x41a75c: 0x0  nop
    ctx->pc = 0x41a75cu;
    // NOP
label_41a760:
    // 0x41a760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41a764:
    // 0x41a764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41a768:
    // 0x41a768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41a76c:
    // 0x41a76c: 0xc0aeebc  jal         func_2BBAF0
label_41a770:
    if (ctx->pc == 0x41A770u) {
        ctx->pc = 0x41A770u;
            // 0x41a770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A774u;
        goto label_41a774;
    }
    ctx->pc = 0x41A76Cu;
    SET_GPR_U32(ctx, 31, 0x41A774u);
    ctx->pc = 0x41A770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A76Cu;
            // 0x41a770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A774u; }
        if (ctx->pc != 0x41A774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A774u; }
        if (ctx->pc != 0x41A774u) { return; }
    }
    ctx->pc = 0x41A774u;
label_41a774:
    // 0x41a774: 0xc0aeeb4  jal         func_2BBAD0
label_41a778:
    if (ctx->pc == 0x41A778u) {
        ctx->pc = 0x41A778u;
            // 0x41a778: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x41A77Cu;
        goto label_41a77c;
    }
    ctx->pc = 0x41A774u;
    SET_GPR_U32(ctx, 31, 0x41A77Cu);
    ctx->pc = 0x41A778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A774u;
            // 0x41a778: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A77Cu; }
        if (ctx->pc != 0x41A77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A77Cu; }
        if (ctx->pc != 0x41A77Cu) { return; }
    }
    ctx->pc = 0x41A77Cu;
label_41a77c:
    // 0x41a77c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41a780:
    // 0x41a780: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41a780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41a784:
    // 0x41a784: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x41a784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_41a788:
    // 0x41a788: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x41a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_41a78c:
    // 0x41a78c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41a790:
    // 0x41a790: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x41a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_41a794:
    // 0x41a794: 0xc0aeea4  jal         func_2BBA90
label_41a798:
    if (ctx->pc == 0x41A798u) {
        ctx->pc = 0x41A798u;
            // 0x41a798: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x41A79Cu;
        goto label_41a79c;
    }
    ctx->pc = 0x41A794u;
    SET_GPR_U32(ctx, 31, 0x41A79Cu);
    ctx->pc = 0x41A798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A794u;
            // 0x41a798: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A79Cu; }
        if (ctx->pc != 0x41A79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A79Cu; }
        if (ctx->pc != 0x41A79Cu) { return; }
    }
    ctx->pc = 0x41A79Cu;
label_41a79c:
    // 0x41a79c: 0xc0aee8c  jal         func_2BBA30
label_41a7a0:
    if (ctx->pc == 0x41A7A0u) {
        ctx->pc = 0x41A7A0u;
            // 0x41a7a0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x41A7A4u;
        goto label_41a7a4;
    }
    ctx->pc = 0x41A79Cu;
    SET_GPR_U32(ctx, 31, 0x41A7A4u);
    ctx->pc = 0x41A7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A79Cu;
            // 0x41a7a0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A7A4u; }
        if (ctx->pc != 0x41A7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A7A4u; }
        if (ctx->pc != 0x41A7A4u) { return; }
    }
    ctx->pc = 0x41A7A4u;
label_41a7a4:
    // 0x41a7a4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x41a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_41a7a8:
    // 0x41a7a8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x41a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_41a7ac:
    // 0x41a7ac: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x41a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_41a7b0:
    // 0x41a7b0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x41a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_41a7b4:
    // 0x41a7b4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x41a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_41a7b8:
    // 0x41a7b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a7bc:
    // 0x41a7bc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x41a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_41a7c0:
    // 0x41a7c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41a7c4:
    // 0x41a7c4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x41a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_41a7c8:
    // 0x41a7c8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x41a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_41a7cc:
    // 0x41a7cc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x41a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_41a7d0:
    // 0x41a7d0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x41a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_41a7d4:
    // 0x41a7d4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x41a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_41a7d8:
    // 0x41a7d8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x41a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_41a7dc:
    // 0x41a7dc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x41a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_41a7e0:
    // 0x41a7e0: 0xc0775b8  jal         func_1DD6E0
label_41a7e4:
    if (ctx->pc == 0x41A7E4u) {
        ctx->pc = 0x41A7E4u;
            // 0x41a7e4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x41A7E8u;
        goto label_41a7e8;
    }
    ctx->pc = 0x41A7E0u;
    SET_GPR_U32(ctx, 31, 0x41A7E8u);
    ctx->pc = 0x41A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A7E0u;
            // 0x41a7e4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A7E8u; }
        if (ctx->pc != 0x41A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A7E8u; }
        if (ctx->pc != 0x41A7E8u) { return; }
    }
    ctx->pc = 0x41A7E8u;
label_41a7e8:
    // 0x41a7e8: 0xc077314  jal         func_1DCC50
label_41a7ec:
    if (ctx->pc == 0x41A7ECu) {
        ctx->pc = 0x41A7ECu;
            // 0x41a7ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x41A7F0u;
        goto label_41a7f0;
    }
    ctx->pc = 0x41A7E8u;
    SET_GPR_U32(ctx, 31, 0x41A7F0u);
    ctx->pc = 0x41A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A7E8u;
            // 0x41a7ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A7F0u; }
        if (ctx->pc != 0x41A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A7F0u; }
        if (ctx->pc != 0x41A7F0u) { return; }
    }
    ctx->pc = 0x41A7F0u;
label_41a7f0:
    // 0x41a7f0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x41a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_41a7f4:
    // 0x41a7f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x41a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_41a7f8:
    // 0x41a7f8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x41a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_41a7fc:
    // 0x41a7fc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x41a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_41a800:
    // 0x41a800: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41a804:
    // 0x41a804: 0x2484b5d0  addiu       $a0, $a0, -0x4A30
    ctx->pc = 0x41a804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948304));
label_41a808:
    // 0x41a808: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x41a808u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_41a80c:
    // 0x41a80c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41a810:
    // 0x41a810: 0x2463b610  addiu       $v1, $v1, -0x49F0
    ctx->pc = 0x41a810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948368));
label_41a814:
    // 0x41a814: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x41a814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_41a818:
    // 0x41a818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41a818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a81c:
    // 0x41a81c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x41a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_41a820:
    // 0x41a820: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x41a820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_41a824:
    // 0x41a824: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x41a824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_41a828:
    // 0x41a828: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x41a828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_41a82c:
    // 0x41a82c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x41a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_41a830:
    // 0x41a830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41a830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41a834:
    // 0x41a834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41a838:
    // 0x41a838: 0x3e00008  jr          $ra
label_41a83c:
    if (ctx->pc == 0x41A83Cu) {
        ctx->pc = 0x41A83Cu;
            // 0x41a83c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41A840u;
        goto label_41a840;
    }
    ctx->pc = 0x41A838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A838u;
            // 0x41a83c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A840u;
label_41a840:
    // 0x41a840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41a844:
    // 0x41a844: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x41a844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_41a848:
    // 0x41a848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41a84c:
    // 0x41a84c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x41a84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_41a850:
    // 0x41a850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41a854:
    // 0x41a854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41a854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41a858:
    // 0x41a858: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x41a858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_41a85c:
    // 0x41a85c: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x41a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41a860:
    // 0x41a860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41a860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41a864:
    // 0x41a864: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_41a868:
    if (ctx->pc == 0x41A868u) {
        ctx->pc = 0x41A868u;
            // 0x41a868: 0x26030180  addiu       $v1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->pc = 0x41A86Cu;
        goto label_41a86c;
    }
    ctx->pc = 0x41A864u;
    {
        const bool branch_taken_0x41a864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A864u;
            // 0x41a868: 0x26030180  addiu       $v1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a864) {
            ctx->pc = 0x41A8FCu;
            goto label_41a8fc;
        }
    }
    ctx->pc = 0x41A86Cu;
label_41a86c:
    // 0x41a86c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x41a86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41a870:
    // 0x41a870: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x41a870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41a874:
    // 0x41a874: 0x0  nop
    ctx->pc = 0x41a874u;
    // NOP
label_41a878:
    // 0x41a878: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x41a878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41a87c:
    // 0x41a87c: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
label_41a880:
    if (ctx->pc == 0x41A880u) {
        ctx->pc = 0x41A880u;
            // 0x41a880: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x41A884u;
        goto label_41a884;
    }
    ctx->pc = 0x41A87Cu;
    {
        const bool branch_taken_0x41a87c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41a87c) {
            ctx->pc = 0x41A880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A87Cu;
            // 0x41a880: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A900u;
            goto label_41a900;
        }
    }
    ctx->pc = 0x41A884u;
label_41a884:
    // 0x41a884: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x41a884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
label_41a888:
    // 0x41a888: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x41a888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_41a88c:
    // 0x41a88c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41a88cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41a890:
    // 0x41a890: 0x0  nop
    ctx->pc = 0x41a890u;
    // NOP
label_41a894:
    // 0x41a894: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x41a894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41a898:
    // 0x41a898: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_41a89c:
    if (ctx->pc == 0x41A89Cu) {
        ctx->pc = 0x41A8A0u;
        goto label_41a8a0;
    }
    ctx->pc = 0x41A898u;
    {
        const bool branch_taken_0x41a898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41a898) {
            ctx->pc = 0x41A8FCu;
            goto label_41a8fc;
        }
    }
    ctx->pc = 0x41A8A0u;
label_41a8a0:
    // 0x41a8a0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x41a8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_41a8a4:
    // 0x41a8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a8a8:
    // 0x41a8a8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x41a8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_41a8ac:
    // 0x41a8ac: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x41a8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_41a8b0:
    // 0x41a8b0: 0xc088b74  jal         func_222DD0
label_41a8b4:
    if (ctx->pc == 0x41A8B4u) {
        ctx->pc = 0x41A8B4u;
            // 0x41a8b4: 0xe7a1002c  swc1        $f1, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x41A8B8u;
        goto label_41a8b8;
    }
    ctx->pc = 0x41A8B0u;
    SET_GPR_U32(ctx, 31, 0x41A8B8u);
    ctx->pc = 0x41A8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A8B0u;
            // 0x41a8b4: 0xe7a1002c  swc1        $f1, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A8B8u; }
        if (ctx->pc != 0x41A8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A8B8u; }
        if (ctx->pc != 0x41A8B8u) { return; }
    }
    ctx->pc = 0x41A8B8u;
label_41a8b8:
    // 0x41a8b8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41a8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41a8bc:
    // 0x41a8bc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41a8c0:
    // 0x41a8c0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x41a8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_41a8c4:
    // 0x41a8c4: 0x320f809  jalr        $t9
label_41a8c8:
    if (ctx->pc == 0x41A8C8u) {
        ctx->pc = 0x41A8C8u;
            // 0x41a8c8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41A8CCu;
        goto label_41a8cc;
    }
    ctx->pc = 0x41A8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41A8CCu);
        ctx->pc = 0x41A8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A8C4u;
            // 0x41a8c8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41A8CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41A8CCu; }
            if (ctx->pc != 0x41A8CCu) { return; }
        }
        }
    }
    ctx->pc = 0x41A8CCu;
label_41a8cc:
    // 0x41a8cc: 0xc088b74  jal         func_222DD0
label_41a8d0:
    if (ctx->pc == 0x41A8D0u) {
        ctx->pc = 0x41A8D0u;
            // 0x41a8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A8D4u;
        goto label_41a8d4;
    }
    ctx->pc = 0x41A8CCu;
    SET_GPR_U32(ctx, 31, 0x41A8D4u);
    ctx->pc = 0x41A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A8CCu;
            // 0x41a8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A8D4u; }
        if (ctx->pc != 0x41A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A8D4u; }
        if (ctx->pc != 0x41A8D4u) { return; }
    }
    ctx->pc = 0x41A8D4u;
label_41a8d4:
    // 0x41a8d4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41a8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41a8d8:
    // 0x41a8d8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41a8dc:
    // 0x41a8dc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x41a8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_41a8e0:
    // 0x41a8e0: 0x320f809  jalr        $t9
label_41a8e4:
    if (ctx->pc == 0x41A8E4u) {
        ctx->pc = 0x41A8E4u;
            // 0x41a8e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41A8E8u;
        goto label_41a8e8;
    }
    ctx->pc = 0x41A8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41A8E8u);
        ctx->pc = 0x41A8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A8E0u;
            // 0x41a8e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41A8E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41A8E8u; }
            if (ctx->pc != 0x41A8E8u) { return; }
        }
        }
    }
    ctx->pc = 0x41A8E8u;
label_41a8e8:
    // 0x41a8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a8ec:
    // 0x41a8ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41a8f0:
    // 0x41a8f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41a8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a8f4:
    // 0x41a8f4: 0xc08914c  jal         func_224530
label_41a8f8:
    if (ctx->pc == 0x41A8F8u) {
        ctx->pc = 0x41A8F8u;
            // 0x41a8f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A8FCu;
        goto label_41a8fc;
    }
    ctx->pc = 0x41A8F4u;
    SET_GPR_U32(ctx, 31, 0x41A8FCu);
    ctx->pc = 0x41A8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A8F4u;
            // 0x41a8f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A8FCu; }
        if (ctx->pc != 0x41A8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A8FCu; }
        if (ctx->pc != 0x41A8FCu) { return; }
    }
    ctx->pc = 0x41A8FCu;
label_41a8fc:
    // 0x41a8fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41a8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41a900:
    // 0x41a900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41a904:
    // 0x41a904: 0x3e00008  jr          $ra
label_41a908:
    if (ctx->pc == 0x41A908u) {
        ctx->pc = 0x41A908u;
            // 0x41a908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41A90Cu;
        goto label_41a90c;
    }
    ctx->pc = 0x41A904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A904u;
            // 0x41a908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A90Cu;
label_41a90c:
    // 0x41a90c: 0x0  nop
    ctx->pc = 0x41a90cu;
    // NOP
label_41a910:
    // 0x41a910: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x41a910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_41a914:
    // 0x41a914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41a914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a918:
    // 0x41a918: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_41a91c:
    if (ctx->pc == 0x41A91Cu) {
        ctx->pc = 0x41A920u;
        goto label_41a920;
    }
    ctx->pc = 0x41A918u;
    {
        const bool branch_taken_0x41a918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41a918) {
            ctx->pc = 0x41A928u;
            goto label_41a928;
        }
    }
    ctx->pc = 0x41A920u;
label_41a920:
    // 0x41a920: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_41a924:
    if (ctx->pc == 0x41A924u) {
        ctx->pc = 0x41A924u;
            // 0x41a924: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x41A928u;
        goto label_41a928;
    }
    ctx->pc = 0x41A920u;
    {
        const bool branch_taken_0x41a920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a920) {
            ctx->pc = 0x41A924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A920u;
            // 0x41a924: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A928u;
            goto label_41a928;
        }
    }
    ctx->pc = 0x41A928u;
label_41a928:
    // 0x41a928: 0x3e00008  jr          $ra
label_41a92c:
    if (ctx->pc == 0x41A92Cu) {
        ctx->pc = 0x41A930u;
        goto label_41a930;
    }
    ctx->pc = 0x41A928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A930u;
label_41a930:
    // 0x41a930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41a934:
    // 0x41a934: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_41a938:
    // 0x41a938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41a93c:
    // 0x41a93c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41a940:
    // 0x41a940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41a944:
    // 0x41a944: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x41a944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_41a948:
    // 0x41a948: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_41a94c:
    if (ctx->pc == 0x41A94Cu) {
        ctx->pc = 0x41A94Cu;
            // 0x41a94c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A950u;
        goto label_41a950;
    }
    ctx->pc = 0x41A948u;
    {
        const bool branch_taken_0x41a948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A948u;
            // 0x41a94c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a948) {
            ctx->pc = 0x41A9E4u;
            goto label_41a9e4;
        }
    }
    ctx->pc = 0x41A950u;
label_41a950:
    // 0x41a950: 0x8cb10050  lw          $s1, 0x50($a1)
    ctx->pc = 0x41a950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_41a954:
    // 0x41a954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41a954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a958:
    // 0x41a958: 0x8e120050  lw          $s2, 0x50($s0)
    ctx->pc = 0x41a958u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_41a95c:
    // 0x41a95c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a960:
    // 0x41a960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41a964:
    // 0x41a964: 0xc08914c  jal         func_224530
label_41a968:
    if (ctx->pc == 0x41A968u) {
        ctx->pc = 0x41A968u;
            // 0x41a968: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A96Cu;
        goto label_41a96c;
    }
    ctx->pc = 0x41A964u;
    SET_GPR_U32(ctx, 31, 0x41A96Cu);
    ctx->pc = 0x41A968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A964u;
            // 0x41a968: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A96Cu; }
        if (ctx->pc != 0x41A96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A96Cu; }
        if (ctx->pc != 0x41A96Cu) { return; }
    }
    ctx->pc = 0x41A96Cu;
label_41a96c:
    // 0x41a96c: 0xc088b74  jal         func_222DD0
label_41a970:
    if (ctx->pc == 0x41A970u) {
        ctx->pc = 0x41A970u;
            // 0x41a970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A974u;
        goto label_41a974;
    }
    ctx->pc = 0x41A96Cu;
    SET_GPR_U32(ctx, 31, 0x41A974u);
    ctx->pc = 0x41A970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A96Cu;
            // 0x41a970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A974u; }
        if (ctx->pc != 0x41A974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A974u; }
        if (ctx->pc != 0x41A974u) { return; }
    }
    ctx->pc = 0x41A974u;
label_41a974:
    // 0x41a974: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x41a974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_41a978:
    // 0x41a978: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x41a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_41a97c:
    // 0x41a97c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x41a97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_41a980:
    // 0x41a980: 0x320f809  jalr        $t9
label_41a984:
    if (ctx->pc == 0x41A984u) {
        ctx->pc = 0x41A984u;
            // 0x41a984: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->pc = 0x41A988u;
        goto label_41a988;
    }
    ctx->pc = 0x41A980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41A988u);
        ctx->pc = 0x41A984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A980u;
            // 0x41a984: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41A988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41A988u; }
            if (ctx->pc != 0x41A988u) { return; }
        }
        }
    }
    ctx->pc = 0x41A988u;
label_41a988:
    // 0x41a988: 0xc088b74  jal         func_222DD0
label_41a98c:
    if (ctx->pc == 0x41A98Cu) {
        ctx->pc = 0x41A98Cu;
            // 0x41a98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A990u;
        goto label_41a990;
    }
    ctx->pc = 0x41A988u;
    SET_GPR_U32(ctx, 31, 0x41A990u);
    ctx->pc = 0x41A98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A988u;
            // 0x41a98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A990u; }
        if (ctx->pc != 0x41A990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A990u; }
        if (ctx->pc != 0x41A990u) { return; }
    }
    ctx->pc = 0x41A990u;
label_41a990:
    // 0x41a990: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x41a990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_41a994:
    // 0x41a994: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x41a994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_41a998:
    // 0x41a998: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x41a998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_41a99c:
    // 0x41a99c: 0x320f809  jalr        $t9
label_41a9a0:
    if (ctx->pc == 0x41A9A0u) {
        ctx->pc = 0x41A9A0u;
            // 0x41a9a0: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x41A9A4u;
        goto label_41a9a4;
    }
    ctx->pc = 0x41A99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41A9A4u);
        ctx->pc = 0x41A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A99Cu;
            // 0x41a9a0: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41A9A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41A9A4u; }
            if (ctx->pc != 0x41A9A4u) { return; }
        }
        }
    }
    ctx->pc = 0x41A9A4u;
label_41a9a4:
    // 0x41a9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a9a8:
    // 0x41a9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a9ac:
    // 0x41a9ac: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x41a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_41a9b0:
    // 0x41a9b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41a9b4:
    // 0x41a9b4: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x41a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41a9b8:
    // 0x41a9b8: 0xc0e32a4  jal         func_38CA90
label_41a9bc:
    if (ctx->pc == 0x41A9BCu) {
        ctx->pc = 0x41A9BCu;
            // 0x41a9bc: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x41A9C0u;
        goto label_41a9c0;
    }
    ctx->pc = 0x41A9B8u;
    SET_GPR_U32(ctx, 31, 0x41A9C0u);
    ctx->pc = 0x41A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A9B8u;
            // 0x41a9bc: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A9C0u; }
        if (ctx->pc != 0x41A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A9C0u; }
        if (ctx->pc != 0x41A9C0u) { return; }
    }
    ctx->pc = 0x41A9C0u;
label_41a9c0:
    // 0x41a9c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x41a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41a9c4:
    // 0x41a9c4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x41a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_41a9c8:
    // 0x41a9c8: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x41a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_41a9cc:
    // 0x41a9cc: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x41a9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_41a9d0:
    // 0x41a9d0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x41a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_41a9d4:
    // 0x41a9d4: 0x90847320  lbu         $a0, 0x7320($a0)
    ctx->pc = 0x41a9d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29472)));
label_41a9d8:
    // 0x41a9d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41a9dc:
    // 0x41a9dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_41a9e0:
    // 0x41a9e0: 0xa0647320  sb          $a0, 0x7320($v1)
    ctx->pc = 0x41a9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29472), (uint8_t)GPR_U32(ctx, 4));
label_41a9e4:
    // 0x41a9e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41a9e8:
    // 0x41a9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41a9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a9ec:
    // 0x41a9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a9f0:
    // 0x41a9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41a9f4:
    // 0x41a9f4: 0x3e00008  jr          $ra
label_41a9f8:
    if (ctx->pc == 0x41A9F8u) {
        ctx->pc = 0x41A9F8u;
            // 0x41a9f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x41A9FCu;
        goto label_41a9fc;
    }
    ctx->pc = 0x41A9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A9F4u;
            // 0x41a9f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A9FCu;
label_41a9fc:
    // 0x41a9fc: 0x0  nop
    ctx->pc = 0x41a9fcu;
    // NOP
}
